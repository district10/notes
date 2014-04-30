Learning Vim
============


# Chapter 1, The vi Text Editor

1. A Brief Historical Perspective

2. Opening and Closing Files
    - `vi filename`, and edit
    - `ZZ`, save file
    - `:w`, save   
    - `:w new-filename`, saveAs 
    - `:w!`, force write
    - `:e!`, resume
    - `:q!`, force quit
    - `:!rm junk-file`
    - `:!df`  

3. The only way to learn vi is to practice.


---

# Chapter 2, Simple Editing

1. Moving the cursor
    - Single Movements: `h`, `j`, `k`, `l`, they suck! I have the [neo-keyboard layout][neo]   
    - Numeric Arguments: 1, 2, ...   
    - Movement Within a Line:    
        - `0`, move tobeginning of line   
	- `$`, move to end of line    
    - Move by Text Block   
        - `w,b`, move by word, forword, backword, respectively.   
	- `W,B`, move by BIG word, forword, backword, respectively. "-" connected words are treated as one    
	- `8G`, move to 8th line   
	- `G`, move to END of file    
	- `gg`, like `1G`   
    - Simple Edits   
        - `a`, append; (not necessary, I will customize these key to other use)    
	- `i`, insert;    
	- `c`, change;    
	    - `cw, cb`, change word, forward, backward, respectively   
	    - `c2w`, change 2 words, forward   
	    - `c0, c$`, to begin, end of line   
	- `d`, delete;    
	- `y`, yank;    
	- `p`, put;   
   
   
   
   
   
   


`r`, `dd`, `P`, `cw`, `x`
```
With a editor you can scrooll the page,          With a screen editor you can scroll the page,
move the cursor, delete lines, nisret            move the cursor, delete lines, insert        
characters, and more while results of            characters, and more while results of        
your edits as you make tham.                     your edits as you make them.                 
Since they allow you to make changes             Screen editors are very popular.             
as you read through a file, much as              Since they allow you to make changes         
you would edit a printed copy,                   as you read through a file, much as          
screen editors are very popular.                 you would edit a printed copy.               
```












```

```
you can scroll
the page, move the cursor, delete
lines, and insert characters.
```

```
With a Screen Editor you can scroll
the page, move the cursor, delete
lines, and insert characters.
```

```
With an editor you can scroll the page,
```






















2. Adding and changing text

3. Deleting, moving, and copying text

4. More ways to enter insert mode







[neo]: https://github.com/district10/neo_keyboard_layout

### Notes

- **wrapmargin**, or **wm**







# Chapter 3, Moving Around in a Hurry
# Chapter 4, Beyond the Basics
# Chapter 5, Introducing the ex Editor
# Chapter 6, Global Replacement
# Chapter 7, Advanced Editing
# Chapter 8, Introduction to the vi Clones
