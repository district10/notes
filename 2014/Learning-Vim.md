Learning Vim
============


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


---

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
    * `s`, substitude
        * `s`(one and more char), `S`(whole line).
    * `x, X`, delete one char, forward, or backward, respectively   (not necessary)
        * `xP, XP`, delete and paste back
        * `xp, Xp`, swap two chars
    * `y`, yank;
    * `p`, put;

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
    * `C` === `c$`, `D` === `d$`, but `Y` === `yy`, `instead of `y$`
    *


Overall
-------

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



Example
-------


`r`, `dd`, `P`, `cw`, `x`
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


`P`, `p`, `.`
```
With a screen editor you can                     With a screen editor you can
scroll the page.                                 scroll the page.
move the cursor.                                 With a screen editor you can
delete lines.                                    move the cursor.
                                                 With a screen editor you can
                                                 delete lines.
```


`J`
```
With a                                           With a screen editor you can scroll the page, move the cursor
screen editor
you can
scroll the page, move the cursor
```



[neo]: https://github.com/district10/neo_keyboard_layout

### Notes

- **wrapmargin**, or **wm**





---

# Chapter 3, Moving Around in a Hurry

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
    * `+,<Enter>, `-`, move to first char of next/previous line.  
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
    * `\`\``, move back  


```
With a screen editor you can scroll the
page, move1 move2 move4 move5 move6 move7 the cursor, dlete lines, insert
characters, and more, while seeing the
characters, ang the
results of your edits as you make them.
```




one two three four five six seven eight nine ten








# Chapter 4, Beyond the Basics
# Chapter 5, Introducing the ex Editor
# Chapter 6, Global Replacement
# Chapter 7, Advanced Editing
# Chapter 8, Introduction to the vi Clones
