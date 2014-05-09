Learning Vim
============

![][six-editor]

--------------------------------------------------------------------------------

### Chapter 1, The vi Text Editor

1. A Brief Historical Perspective

2. Opening and Closing Files
    * `vi filename`, and edit
    * `ZZ`, save file
    * `:w`, save
    * `:w new-filename`, saveAs
    * `:w!`, force write
    * `:e!`, resume
    * `:q!`, force quit
    * `:!rm junk-file`
    * `:!df`

3. The only way to learn vi is to practice.




--------------------------------------------------------------------------------

### Chapter 2, Simple Editing

1. Moving the cursor
    * Single Movements: `h`, `j`, `k`, `l`, they suck! I have the [neo-keyboard layout][neo]
    * Numeric Arguments: 1, 2, ...
    * Movement Within a Line:
        * `0`, move tobeginning of line
        * `$`, move to end of line
        * `^`, move to first non empty char
    * Move by Text Block
        * `w,b`, move by word, forword, backword, respectively.
        * `W,B`, move by BIG word, forword, backword, respectively. "-" connected words are treated as one
        * `8G`, move to 8th line
        * `G`, move to END of file
        * `gg`, like `1G`
    * Move to first char of previous/next line: `-`, `+`

2. Simple Edits
    * `a`, append; (not necessary, I will customize these key to other use)
    * `i`, insert;
    * `c`, change;
        * `cw, cb`, change word, forward, backward, respectively
        * `c2w`, change 2 words, forward
        * `c^`, to first not empty char
        * `c0, c$`, to begin, end of line, or you use `c[Home], c[End]`
    * `d`, delete;
        * `dw`, by word
        * `db`, by word, backward
        * `dd`, delete line
        * `d$, d[End], D`, delete to end of line
        * `dto`, `dTx`, delete to(not include) "x", forward / backward
        * `d/th`, delete until first match of "th"
        * `diw`, delete current word
        * `di(`, delete within the current parens
    * `s`, substitude
        * `s`(one and more char), `S`(whole line).
    * `x, X`, delete one char, forward, or backward, respectively   (not necessary)
        * `xP, XP`, delete and paste back
        * `xp, Xp`, swap two chars
    * `y`, yank;
    * `p`, put;
        * `$p`, paste to end of line
        * `0P`, `^P`, paste to begin of line

3. General Form of vi Commands
    * `cc, dd, yy`
    * `(command)(text object)`
    * `(command)(number)(text object)`
    * `(number)(command)(text object)`
    * `cc`, change whole line
    * `C`, like `c$`
    * `~`, change case

4. Misc
    * Repeat your last command
        * `.`
    * Undo, Redo
        * `u`, `C-r`, `U`, seems work differently in evil-mode
    * Numeric Arguments for Insert Commands: e.g. `4i<space><Esc>`
5. Notes
    * `cc`, `dd`, `yy`, apply to line
    * `C`, `D`, `S` apply from current position to end, while `Y`, the whole line
    * `C` === `c$`, `D` === `d$`, but `Y` === `yy`, instead of `y$`
    *

6. Overall
   ```
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |         Text object          |            Change            |            Delete            |             Copy             |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |           One word           |              cw              |              dw              |              yw              |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |   Two words, not counting    |          2cW or c2W          |          2dW or d2W          |          2yW or y2W          |
   |         punctuation          |                              |                              |                              |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |       Three words back       |          3cb or c3b          |          3db or d3b          |          3yb or y3b          |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |           One line           |              cc              |              dd              |           yy or Y            |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |        To end of line        |           c$ or C            |           d$ or D            |              y$              |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |     To beginning of line     |              c0              |              d0              |              y0              |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |       Single character       |              r               |            x or X            |           yl or yh           |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   |       Five characters        |              5s              |              5x              |             5yl              |
   +------------------------------+------------------------------+------------------------------+------------------------------+
   ```

7. Example
    * `r`, `dd`, `P`, `cw`, `x`
    ```
    With a editor you can scrooll the page,          With a screen editor you can scroll the page,
    move the cursor, delete lines, nisret            move the cursor, delete lines, insert
    characters, and more wrile results of            characters, and more while results of
    your edits as you make tham.                     your edits as you make them.
    Since they allow you to make changes             Screen editors are very popular.
    as you read through a file, much as              Since they allow you to make changes
    you would edit a printed copy,                   as you read through a file, much as
    screen editors are very popular.                 you would edit a printed copy.
    ```
    * `P`, `p`, `.`
    ```
    With a screen editor you can                     With a screen editor you can
    scroll the page.                                 scroll the page.
    move the cursor.                                 With a screen editor you can
    delete lines.                                    move the cursor.
                                                     With a screen editor you can
                                                     delete lines.
    ```
    * `J`
    ```
    With a                                           With a screen editor you can scroll the page, move the cursor
    screen editor
    you can
    scroll the page, move the cursor
    ```




--------------------------------------------------------------------------------

### Chapter 3, Moving Around in a Hurry

1. Movement by Screens
    * Scroling the Screen:
        * `C-b`, `C-f`,
        * `C-u`(not work in emacs evil-mode), `C-d`,
        * `C-y`, `C-e`
        * `z<Enter>`, `z.`, `z-`, move to top/center/bottom and scroll to it (not as good as emacs' `recenter-top-center`, i will drop this in my evil-mode)

2. Redrawing the Screen: `C-l`(not work in my evil-mode, we have `recenter-top-center`)

3. Movement Within a Screen
    * `H`, `M`, `L`: to top/middle/bottom of screen
    * `2H`, `2L`: 2 second line from top/bottom

4. Movement by Line
    * `+`, `<Enter>`, `-`, move to first char of next/previous line.
    * Movement on current line: `20|`, move to column 20, `^`, move to first nonblank char.

5. Movement by Text Blocks
    * `e`, `E`,  end of word,  (ignore punctuations)
    * `(`, `)`, beginning of current/next setence
    * `{`, `}`, beginning of current/next paragraph
    * `[[`, `]]`, beginning of current/next section

6. Movement by Searches
    * `/pattern`, `?pattern`, search forward/backward
    * `n`, next match
    * `N`, next match, opposite position
    * `:set nowrapscan`, dont do loop search
    * `d/pattern`

7. Current Line Searches
    * `fx`, `Fx`, move on to previous/next 'x'
    * `tx`, `Tx`, move before char 'x', previous/next
    * `;`, `,`, repeat same direction, opposite direction
    * `7fx`, move to 7th match
    * `dfx`, e.g. `dfi`, delete from here to first occurance of 'i', then `d;`, delete to second occurance of 'i'

8. Movement by Line Number
    * `20G`, move to Line #20
    * ```` `` ````, move back (old position)
    * `''`, move back, but at the beginning of line
    ```
    With a screen editor you can scroll the
    page, move1 move2 move4 move5 move6 move7 the cursor, dlete lines, insert
    characters, and more, while seeing the
    characters, ang the
    results of your edits as you make them.
    ```




--------------------------------------------------------------------------------

### Chapter 4, Beyond the Basics

1. More Command Combinations
   ```
   +------------+------------+-----------+------------------------------+
   |Change      |Delete      |Copy       |From cursor to...             |
   +------------+------------+-----------+------------------------------+
   |cH          |dH          |yH         |Top of screen                 |
   +------------+------------+-----------+------------------------------+
   |cL          |dL          |yL         |Bottom of screen              |
   +------------+------------+-----------+------------------------------+
   |c+          |d+          |y+         |Next line                     |
   +------------+------------+-----------+------------------------------+
   |c5|         |d5|         |y5|        |Column 5 of current line      |
   +------------+------------+-----------+------------------------------+
   |2c)         |2d)         |2y)        |Second sentence following     |
   +------------+------------+-----------+------------------------------+
   |c{          |d{          |y{         |Previous paragraph            |
   +------------+------------+-----------+------------------------------+
   |c/pattern   |d/pattern   |y/pattern  |Pattern                       |
   +------------+------------+-----------+------------------------------+
   |cn          |dn          |yn         |Next pattern                  |
   +------------+------------+-----------+------------------------------+
   |cG          |dG          |yG         |End of file                   |
   +------------+------------+-----------+------------------------------+
   |c13G        |d13G        |y13G       |Line number 13                |
   +------------+------------+-----------+------------------------------+
   ```

2. Options When Starting vi
    * `vi +3 filename`, open file at 3rd line
    * `vi + filename`, open file at last line
    * `vi +/pattern filename`, open file at first occurance of pattern
    * `vi +R filename`, read file in read-only mode
    * `vi -r filename`, `ex -r filename`, Recovering a Buffer

3. Yank to Named Buffer
    * `"dyy", yank to buffer "d"
    * `"ayw", yank to buffer "a"
    * `"ap`, `"`dp`, put buffer "a"/"d"

4. Marking Your Place
    * `mx`, mark current position to x
    * `'x`, ` `x `, move to mark x. (first char, or exact position)
    * `''`, ```` `` ````, move to last position




--------------------------------------------------------------------------------

### Chapter 5, Introducing the ex Editor

```
  __              _       _                                 _ _
 / _| ___  _ __  | | __ _| |_ ___ _ __   _ __ ___  __ _  __| (_)_ __   __ _
| |_ / _ \| '__| | |/ _` | __/ _ \ '__| | '__/ _ \/ _` |/ _` | | '_ \ / _` |
|  _| (_) | |    | | (_| | ||  __/ |    | | |  __/ (_| | (_| | | | | | (_| |
|_|  \___/|_|    |_|\__,_|\__\___|_|    |_|  \___|\__,_|\__,_|_|_| |_|\__, |
                                                                      |___/
```









--------------------------------------------------------------------------------

### Chapter 6, Global Replacement

1. Substitude
    * `:s/old/new`, substitude first occurance of old
    * `:s/old/new/g`, many occurance
    * `:50,100s/old/new/g`, `:50,100s/old/new` apply to 50~100 lines
    * `:1,$s/old/new`, apply to whole file

2. c, confirm
    * `y` for yes
    * `n` for no
    * `Enter`, quit

3. Content-Sensitive Replacement
    * `:%s/old/new/g`, no confirm, whole file
    * `:g/pattern/s/old/new/g`,
    * `:1,200g/pattern/s/old/new/g`
    * `:g/pattern/s/old/new/g`, same as `:g/pattern/s//new/g`

4. Pattern-Matching Rules
    * `.`, single char, except a newline
    * `*`, match zero or more occurance of previous char
        * e.g. `a*` can match `a`, `aa`, `aaa`, etc
        * e.g. `.*` can mathc any char(s) combination
    * `^, $`, when it is the first/last char of regex, treated as line beginning/ending, else treated as itself.
        * e.g. `^Line` match any line starts with "Line"
        * e.g. `something^*`, can match "something", "something^", "something^^", etc
    * `[]`, e.g. `[aoei]` match `a`, `o`, `e`, `i`; and `[a-z]`, `;:[a-z0-9]` works as expected.
    * `:%s/\(That\) or \(this\)/\2 or \1/`
    * `~`, match last seach history. Like you seached "the" with `/the`, then you can search for "then" with `/~n`
    * `\`, e.g. `\.` match "."
    * `\<m`, `\>tion`, match words begin with 'm', end with "tion"

5. POSIX Bracket Expressions
    * `[:alnum:]` Alphanumeric characters
    * `[:alpha:]` Alphabetic characters
    * `[:blank:]` Space and tab characters
    * `[:cntrl:]` Control characters
    * `[:digit:]` Numeric characters
    * `[:graph:]` Printable and visible (nonspace) characters
    * `[:lower:]` Lowercase characters
    * `[:print:]` Printable characters (includes whitespace)
    * `[:punct:]` Punctuation characters
    * `[:space:]` Whitespace characters
    * `[:upper:]` Uppercase characters
    * `[:xdigit:]` Hexadecimal digits

6. New Pattern of `s/old/NEW/g`
    * `\n`, n is 1..9, match \(THIS\)
    * `&`, mathed part
    * `~`, `s/thier/their/`, then `s/her/~/` is like `s/her/their`
    * `\u, \l`, uppercase/lowercase char. `:s/\(That\) or \(this\)/\u\2 or \l\1/`
    * `\U, \L, \e, \E`, uppercase region, or whole match
    * `:set ic`, ignore case

7. More Substitution Tricks
    * `:s//~/`, repeat last substitution
    * `:%&g`, Repeat the last substitution everywhere
    * `:%s;/user1/tim;/home/tim;g`

8. Exercise
    * `/four`, `<Enter>`, `cwfive`, `n`(repeat search), `n`(bypass one match), `.`(apply last `cwfive`)

9. Examples
    * example-1
    ```
    <p>something</p>                                                             <p>somethingelse</p>
    <a>something</a>   ===> `:%300,400g/<p>/s/something/somethingelse/g` ===>    <a>something</a>
    <a>something</a>                                                             <a>something</a>
    <p>something</p>                                                             <p>somethingelse</p>
    ```
    * example-2
    ```
    one                                                  (one)
    two                                                  (two)
    three       ===> `:348,352s/.*/(&)/` ===>            (three)
    four                                                 (four)
    five                                                 (five)
    ```
    * example-3
    ```
    That or this   ===>  `:%s/\(That\) or \(this\)/\2 or \1/` ===>  this or That
    ```


```
  __              _       _                                 _ _
 / _| ___  _ __  | | __ _| |_ ___ _ __   _ __ ___  __ _  __| (_)_ __   __ _
| |_ / _ \| '__| | |/ _` | __/ _ \ '__| | '__/ _ \/ _` |/ _` | | '_ \ / _` |
|  _| (_) | |    | | (_| | ||  __/ |    | | |  __/ (_| | (_| | | | | | (_| |
|_|  \___/|_|    |_|\__,_|\__\___|_|    |_|  \___|\__,_|\__,_|_|_| |_|\__, |
                                                                      |___/
```





--------------------------------------------------------------------------------

# Chapter 7, Advanced Editing

1. Customizing vi
    * The :set Command
        * `:set option`, or `:set nooption`
    * The .exrc File

2. Executing Unix Commands
    * `:!cmd`
    * `:r !date`, output to file, Thu May  1 12:59:55 CST 2014
    * `:. !date`, same as `:r`, but overwrite current line
    * `:r Learning-Vim.md`, this is .... Good.

3. Filtering Text Through a Command
    * `:%!sort`, you try you die...
    * `!)cmd`, pass these sentence to cmd
    * `!!`, current line
    * `!2!`, `2!!`, two lines

4. Saving Commands
    * Word Abbreviation
         * `:ab abbr phrase`
         * `:unab abbr`


--------------------------------------------------------------------------------

# Chapter 8, Introduction to the vi Clones





--------------------------------------------------------------------------------

## Tricks

1. `diw`, `di"`, `di{}`
2. `:!xxd`, hex editor
   `:!xxd -r`
3. `de`, then `.` as you want
4. `ddp`, swap current and next line
5. `bye`, `yiw`
6. `'.`, last edited line
7. ```` `. ````, last edited char
8. `:changes`, list changes
9. :g/rgba/y A
10.`gv`, reselects last visual selection
11. `g~~`, `gUU`, `guu`
12. `>>`, `<<`, indent
13. `#`, `*`, search word under cursor



[six-editor]: http://gnat-tang-shared-image.qiniudn.com/2014-05-six-editor.png
[neo]: https://github.com/district10/neo_keyboard_layout