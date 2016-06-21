/*
 The contents of this file are subject to the Mozilla Public License
 Version 1.1 (the "License"); you may not use this file except in
 compliance with the License. You may obtain a copy of the License at
 http://www.mozilla.org/MPL/

 Software distributed under the License is distributed on an "AS IS"
 basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 License for the specific language governing rights and limitations
 under the License.

 Alternatively, the contents of this file may be used under the terms
 of the GNU Lesser General Public license (the  "LGPL License"), in which case the
 provisions of LGPL License are applicable instead of those
 above.

 For feedback and questions about my Files and Projects please mail me,
 Alexander Matthes (Ziz) , zizsdl_at_googlemail.com
*/
#define AHA_VERSION "0.4.8.0"
#define AHA_YEAR "2015"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int future=0;
int future_char=0;

int getNextChar(register FILE* fp)
{
    int c;
    if (future)
    {
        future=0;
        return future_char;
    }
    if ((c = fgetc(fp)) != EOF)
        return c;
    fprintf(stderr,"Unknown Error in File Parsing!\n");
    exit(1);
}

typedef struct selem *pelem;
typedef struct selem {
    unsigned char digit[8];
    unsigned char digitcount;
    pelem next;
} telem;

pelem parseInsert(char* s)
{
    pelem firstelem=NULL;
    pelem momelem=NULL;
    unsigned char digit[8];
    unsigned char digitcount=0;
    int pos=0;
    for (pos=0;pos<1024;pos++)
    {
        if (s[pos]=='[')
            continue;
        if (s[pos]==';' || s[pos]==0)
        {
            if (digitcount==0)
            {
                digit[0]=0;
                digitcount=1;
            }

            pelem newelem=(pelem)malloc(sizeof(telem));
            for (unsigned char a=0;a<8;a++)
                newelem->digit[a]=digit[a];
            newelem->digitcount=digitcount;
            newelem->next=NULL;
            if (momelem==NULL)
                firstelem=newelem;
            else
                momelem->next=newelem;
            momelem=newelem;
            digitcount=0;
            memset(digit,0,8);
            if (s[pos]==0)
                break;
        }
        else
        if (digitcount<8)
        {
            digit[digitcount]=s[pos]-'0';
            digitcount++;
        }
    }
    return firstelem;
}

void deleteParse(pelem elem)
{
    while (elem!=NULL)
    {
        pelem temp=elem->next;
        free(elem);
        elem=temp;
    }
}

#define VERSION_PRINTF_MAKRO \
    printf("\033[1;31mAnsi Html Adapter\033[0m Version "AHA_VERSION"\n");

int main(int argc,char* args[])
{
    char* filename=NULL;
    register FILE *fp = stdin;
    int colorshema=0; //0:normal, 1:black, 2:pink
    int iso=-1; //utf8
    char stylesheet=0;
    char htop_fix=0;
    char line_break=0;
    char* title=NULL;
    char word_wrap=0;
    char no_header=0;
    
    printf("<pre class=\"diffed\">\n");

    //Begin of Conversion
    unsigned int c;
    int fc = -1; //Standard Foreground Color //IRC-Color+8
    int bc = -1; //Standard Background Color //IRC-Color+8
    int ul = 0; //Not underlined
    int bo = 0; //Not bold
    int bl = 0; //No Blinking
    int ofc,obc,oul,obo,obl; //old values
    int line=0;
    int momline=0;
    int newline=-1;
    int temp;
    while ((c=fgetc(fp)) != EOF)
    {
        if (c=='\033')
        {
            //Saving old values
            ofc=fc;
            obc=bc;
            oul=ul;
            obo=bo;
            obl=bl;
            //Searching the end (a letter) and safe the insert:
            c='0';
            char buffer[1024];
            int counter=0;
            while ((c<'A') || ((c>'Z') && (c<'a')) || (c>'z'))
            {
                c=getNextChar(fp);
                buffer[counter]=c;
                if (c=='>') //end of htop
                    break;
                counter++;
                if (counter>1022)
                    break;
            }
            buffer[counter-1]=0;
            pelem elem;
            switch (c)
            {
                case 'm':
                    //printf("\n%s\n",buffer); //DEBUG
                    elem=parseInsert(buffer);
                    pelem momelem=elem;
                    while (momelem!=NULL)
                    {
                        //jump over zeros
                        int mompos=0;
                        while (mompos<momelem->digitcount && momelem->digit[mompos]==0)
                            mompos++;
                        if (mompos==momelem->digitcount) //only zeros => delete all
                        {
                            bo=0;ul=0;bl=0;fc=-1;bc=-1;
                        }
                        else
                        {
                            switch (momelem->digit[mompos])
                            {
                                case 1: bo=1; break;
                                case 2: if (mompos+1<momelem->digitcount)
                                                switch (momelem->digit[mompos+1])
                                                {
                                                    case 1: //Reset blink and bold
                                                        bo=0;
                                                        bl=0;
                                                        break;
                                                    case 4: //Reset underline
                                                        ul=0;
                                                        break;
                                                        case 7: //Reset Inverted
                                                        temp = bc;
                                                        if (fc == -1 || fc == 9)
                                                        {
                                                            if (colorshema!=1)
                                                                bc = 0;
                                                            else
                                                                bc = 7;
                                                        }
                                                        else
                                                            bc = fc;
                                                        if (temp == -1 || temp == 9)
                                                        {
                                                            if (colorshema!=1)
                                                                fc = 7;
                                                            else
                                                                fc = 0;
                                                        }
                                                        else
                                                            fc = temp;
                                                        break;
                                                }
                                                break;
                        case 3: if (mompos+1<momelem->digitcount)
                                            fc=momelem->digit[mompos+1];
                                        break;
                        case 4: if (mompos+1==momelem->digitcount)
                                            ul=1;
                                        else
                                            bc=momelem->digit[mompos+1];
                                        break;
                        case 5: bl=1; break;
                        case 7: //TODO: Inverse
                                        temp = bc;
                                        if (fc == -1 || fc == 9)
                                        {
                                            if (colorshema!=1)
                                                bc = 0;
                                            else
                                                bc = 7;
                                        }
                                        else
                                            bc = fc;
                                        if (temp == -1 || temp == 9)
                                        {
                                            if (colorshema!=1)
                                                fc = 7;
                                            else
                                                fc = 0;
                                        }
                                        else
                                            fc = temp;
                                        break;
                            }
                        }
                        momelem=momelem->next;
                    }
                    deleteParse(elem);
                break;
                case 'H':
                    if (htop_fix) //a little dirty ...
                    {
                        elem=parseInsert(buffer);
                        pelem second=elem->next;
                        if (second==NULL)
                            second=elem;
                        newline=second->digit[0]-1;
                        if (second->digitcount>1)
                            newline=(newline+1)*10+second->digit[1]-1;
                        if (second->digitcount>2)
                            newline=(newline+1)*10+second->digit[2]-1;
                        deleteParse(elem);
                        if (newline<line)
                            line_break=1;
                    }
                break;
            }
            if (htop_fix)
                if (line_break)
                {
                    for (;line<80;line++)
                        printf(" ");
                }
            //Checking the differences
            if ((fc!=ofc) || (bc!=obc) || (ul!=oul) || (bo!=obo) || (bl!=obl)) //ANY Change
            {
                if ((ofc!=-1) || (obc!=-1) || (oul!=0) || (obo!=0) || (obl!=0))
                    printf("</span>");
                if ((fc!=-1) || (bc!=-1) || (ul!=0) || (bo!=0) || (bl!=0))
                {
                    if (stylesheet)
                        printf("<span class=\"");
                    else
                        printf("<span style=\"");
                    switch (fc)
                    {
                        case    0: if (stylesheet)
                                             printf("dimgray ");
                                         else
                                             printf("color:dimgray;");
                                         break; //Black
                        case    1: if (stylesheet)
                                             printf("red ");
                                         else
                                             printf("color:red;text-decoration:line-through;");
                                         break; //Red
                        case    2: if (stylesheet)
                                             printf("green ");
                                         else if (colorshema!=1)
                                             printf("color:green;");
                                         else
                                             printf("color:lime;");
                                         break; //Green
                        case    3: if (stylesheet)
                                             printf("yellow ");
                                         else if (colorshema!=1)
                                             printf("color:olive;");
                                         else
                                             printf("color:yellow;");
                                         break; //Yellow
                        case    4: if (stylesheet)
                                             printf("blue ");
                                         else if (colorshema!=1)
                                             printf("color:blue;");
                                         else
                                             printf("color:#3333FF;");
                                         break; //Blue
                        case    5: if (stylesheet)
                                             printf("purple ");
                                         else if (colorshema!=1)
                                             printf("color:purple;");
                                         else
                                             printf("color:fuchsia;");
                                         break; //Purple
                        case    6: if (stylesheet)
                                             printf("cyan ");
                                         else if (colorshema!=1)
                                             printf("color:teal;");
                                         else
                                             printf("color:aqua;");
                                         break; //Cyan
                        case    7: if (stylesheet)
                                             printf("white ");
                                         else if (colorshema!=1)
                                             printf("color:gray;");
                                         else
                                             printf("color:white;");
                                         break; //White
                        case    9: if (stylesheet)
                                             printf("reset ");
                                         else if (colorshema!=1)
                                             printf("color:black;");
                                         else
                                             printf("color:white;");
                                         break; //Reset
                    }
                    switch (bc)
                    {
                        case    0: if (stylesheet)
                                             printf("bg-black ");
                                         else
                                             printf("background-color:black;");
                                         break; //Black
                        case    1: if (stylesheet)
                                             printf("bg-red ");
                                         else
                                             printf("background-color:red;");
                                         break; //Red
                        case    2: if (stylesheet)
                                             printf("bg-green ");
                                         else if (colorshema!=1)
                                             printf("background-color:green;");
                                         else
                                             printf("background-color:lime;");
                                         break; //Green
                        case    3: if (stylesheet)
                                             printf("bg-yellow ");
                                         else if (colorshema!=1)
                                             printf("background-color:olive;");
                                         else
                                             printf("background-color:yellow;");
                                         break; //Yellow
                        case    4: if (stylesheet)
                                             printf("bg-blue ");
                                         else if (colorshema!=1)
                                             printf("background-color:blue;");
                                         else
                                             printf("background-color:#3333FF;");
                                         break; //Blue
                        case    5: if (stylesheet)
                                             printf("bg-purple ");
                                         else if (colorshema!=1)
                                             printf("background-color:purple;");
                                         else
                                             printf("background-color:fuchsia;");
                                         break; //Purple
                        case    6: if (stylesheet)
                                             printf("bg-cyan ");
                                         else if (colorshema!=1)
                                             printf("background-color:teal;");
                                         else
                                             printf("background-color:aqua;");
                                         break; //Cyan
                        case    7: if (stylesheet)
                                             printf("bg-white ");
                                         else if (colorshema!=1)
                                             printf("background-color:gray;");
                                         else
                                             printf("background-color:white;");
                                         break; //White
                        case    9: if (stylesheet)
                                             printf("bg-reset ");
                                         else if (colorshema==1)
                                             printf("background-color:black;");
                                         else if (colorshema==2)
                                             printf("background-color:pink;");
                                         else
                                             printf("background-color:white;");
                                         break; //Reset
                    }
                    if (ul)
          {
                        if (stylesheet)
                            printf("underline ");
                        else
                            printf("text-decoration:underline;");
          }
                    if (bo)
          {
                        if (stylesheet)
                            printf("bold ");
                        else
                            printf("font-weight:bold;");
          }
                    if (bl)
          {
                        if (stylesheet)
                            printf("blink ");
                        else
                            printf("text-decoration:blink;");
          }

                    printf("\">");
                }
            }
        }
        else
        if (c==13 && htop_fix)
        {
            for (;line<80;line++)
                printf(" ");
            line=0;
            momline++;
            printf("\n");
        }
        else if (c!=8)
        {
            line++;
            if (line_break)
            {
                printf("\n");
                line=0;
                line_break=0;
                momline++;
            }
            if (newline>=0)
            {
                while (newline>line)
                {
                    printf(" ");
                    line++;
                }
                newline=-1;
            }
            switch (c)
            {
                case '&':   printf("&amp;"); break;
                case '\"': printf("&quot;"); break;
                case '<':   printf("&lt;"); break;
                case '>':   printf("&gt;"); break;
                case '\n':case 13: momline++;
                                     line=0;
                default:     printf("%c",c);
            }
            if (iso>0) //only at ISOS
                if ((c & 128)==128) //first bit set => there must be followbytes
                {
                    int bits=2;
                    if ((c & 32)==32)
                        bits++;
                    if ((c & 16)==16)
                        bits++;
                    for (int meow=1;meow<bits;meow++)
                        printf("%c",getNextChar(fp));

                }
        }
    }

    //Footer
    if ((fc!=-1) || (bc!=-1) || (ul!=0) || (bo!=0) || (bl!=0))
        printf("</span>\n");

    printf("</pre>\n");

    if (fp!=stdin)
        fclose(fp);
    return 0;
}
