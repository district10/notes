THE AWK PROGRAMMING LANGUAGE
============================


An Awk Tutorial
---------------



### Get Started

- Hello World Example: `awk '$3 > 0 {print $1, $2 * $3}' data.txt`

- The Structure Of AWK Program
    - awk ' program ' infiles
    - awk ' program ' # get input from command line
    - awk -f progfile <optional list of input files> 
    - Format: pattern { action }


### Simple Output

- What AWK Can? 
    - Printing Fields, Selecting Input, And Transforming Data

- Printing Every Line 
    - { print }
    - { print $0 }

- Printing Certain Fields
    - { print $1 }

- Computing and Printing
    - { print $2, $3 * $4 }

- NF, the Number of Fields
    - { print NF, $1, $NF } # print number of fields and first and last fields of each input line

- NR, the Number of Lines Read so far
    - { print NR, $1 }

- Putting Text in the output 
    - { print "Total cost of the lunch is ", $1, $2 * $3 }


### Fancier Output 

- printf ("format",  value1, value2, ...)
    - %s, %f, %.2f for formats
    - \n for newline
    - %-s, left justfied

- Sorting
    - awk '{ printf("%6.2f %s\n", $2 * $3, $0) }' emp.data | sort

### Selection

- Selection By Comparison: $2 > 8

- Selection By Computation: $2 * $3  > 40

- Selection By Text Content: $2 == "Susan"

- Combination of Patterns
    - $2 >= 20 || $3 <= 50
    - !($2 < 20 && $3 > 50) 

- Data Validation

```
        NF I= 3    { print $0, "number of fields is not equal to 3" }
        $2 < 3.35  { print $0, "rate is below minimum wage" }
        $2 > 10	   { print $0, "rate exceeds $10 per hour" }
        $3 < 0	   { print $0, "negative hours worked" }
        $3 > 60	   { print $0, "too many hours worked" }
```

- BEGIN and END
    - BEGIN { something you want to do at begin } { process }
    - print "" # print empty line
    - print    # print input line


### Computing with AWK

- Counting 
{ counter = counter + 1 }
END { print ("there are %d lines.\n", counter) }

- Computing Sums and Average

- Handing Text

- String Concatenation

```
    { names = names $1 " " }
END { print names }
```

- Printing the Last Input Line

```
    { last = $0 }
END { print last }
```

- Built-in Functions

```
{ print $1, length($1) }
```

- Counting Lines, Words

```
        { nc = nc + length($0) + 1
          nw = nw + NF }
    END { print NR "lines", nw, "words", nc, "chars" }
```  

### Control-flow statements

- If-Else Statement

- While Statement

- For Statement


### Arrays

- Print Input In Reverse Order By Line 
```
{ line[NR] = $0 }
END { i = NR
      while (i > 0) {
      print line[i]
      i = i - 1
      }
    }	
```

### A Handful Of Useful "One-Liners"  

- END { print NR } # print Line Num

- NR == 10 { print } # print specific line

- { print $NF } # print last field  

- { field = $NF } END { print field } # last field of last line

- NF > 4

- $NF > 4

- { nf = nf + NF } END { print "there are ", nf, " fields in this file" } 

- Lines that contain "apple"
```
/apple/ { lines = lines + 1 }
    END { print lines }
```

- largest field and the line contains it
```
$1 > max { max = $1; maxline = $0 }
END      { print max, maxline }
```

- NF > 0 # more than one field

- length($0) > 80 # lines that longer than 80 characters

- { print NF, $0 }

- { print $2, $1 }

- { tmp = $1; $1 = $2; $2 = tmp; print }

- { $1 = NR; print } # print Line Num, then the line

- { $2 = ""; print } # erase the second field

- Reverse fields
```
{ for (i = 1; i <= NF; i = i + 1) printf ("%s", $i)
  printf('\n')
}
```


### WHAT'S NEXT

- keep reading
- keep writing scripts
- 入门到这就够了。这是本书的第一章。后面具体介绍了 awk 各个细部。可以瞟一眼，有个概念，用的时候再查。











---

THE AWK LANGUAGE
----------------

- Data

```
USSR    8649  275   Asia
Canada	3852  25    North America
China	3705  1032  Asia
USA	3615  237   North America
Brazil	3286  134   South America
India	1267  746   Asia
Mexico	762   78    North America
France	211   55    Europe
Japan	144   120   Asia
Germany	96    61    Europe
England	94    56    Europe
```

- program format: one line or multi lines breaks with "\"

- patterns 
    - { statements }
    - BEGIN { statements }
    - END { statements }
    - expression { statements }
    - / regular expression / { statements }
    - pattern1, pattern2 { statements } 

- Actions
    - print, printf()
    - if, if else, for, do while, break, continue, next, exit

- variables
    - built-in variables: $0, $1, .., $NF
    - field variables: FS, OFS (output field separator), ORS (output record separator)   

- string as  regular expression


```
BEGIN { FS = "\t"}
      { pop[$3] += $4 }
END   { for (name in pop)
      	    print name, pop[name]}
```

- split("/123/23/55", str, "/") # arr["1"], arr["2"], arr["3"]
 
- { print $1, $3 > ($3 > 40? "file-a.txt", "file-b.txt") }
- { print > $1 }

- BEGIN { FS = "[{\n\t}]:;" }
- BEGIN { FS = "[ ]" } # a single blank  
- awk -F';:[\t]\n' '{ print }' file-in.txt

- RS (record separator)

- The getline function
    - getline <"file"
    - getline x <"file" 
    - while (getline <"file") # dangerous
    - while (getline <"file" > 0) # safe
          	      

- ARGV
    - ARGC, ARGV

- Making A Shell Command From An Awk Program








---


DATA PROCESSING
---------------


- histgram:
```
    { data[int($1/10)]++ } 
END { for (i=0; i<10; i++) 
          printf("%s", rep(data[i], "*"))
} 

function rep(n, s, t) 
{
    while (n-- > 0) 
       {
	t = t s
       }
    return t
}

- fixed field input
    - convert mmddyy to yymmdd: { $1 = substr($1,5,2) substr($1,1,2) substr($1,3,2) print $1 } 

- data validation

- multiline records
```
BEGIN { RS = ""}
/NEW YORK/ {}
```

















---



REPORTS AND DATABASES 
---






---

PROCESSING WORDS
----------------



---

LITTLE LANGUAGES
----------------


---




EXPERIMENTS WITH ALGORITHMS
--------------------------- 








---

EPILOG
------








