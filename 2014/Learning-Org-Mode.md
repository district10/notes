Learning Org-Mode
=================

***[The Org Manual][org-manual]*** by Carsten Dominik
---------------------------------------

TOC
---

- 01. A Introduction
- 02. Document Structure
- 03. Tables
- 04. Hyperlinks
- 05. TODO Items
- 06. Tags
- 07. Properties
- 08. Dates and Times
- 09. Capture - Refile - Archive
- 10. Agenda Views
- 11. Markup for rich export
- 12. Exporting
- 13. Publishing
- 14. Working with source code
- 15. Miscellaneous
- 16. GNU Free Documentation License




--------------------------------------------------------------------------------

### 01. A Introduction

1. Org is a **toolbox** and can be used in different ways and for different ends, for example:
    - an outline extension with visibility cycling and structure editing
    - an ASCII system and table editor for taking structured notes
    - a TODO list editor
    - a full agenda and planner with deadlines and work scheduling
    - an environment in which to implement David Allenfls GTD system
    - a simple hypertext system, with HTML and L TEX export
    - a publishing tool to create a set of interlinked web pages
    - **an environment for literate programming**


--------------------------------------------------------------------------------

### 02. Document Structure

1. Outlines

2. Headlines

3. Visibility cycling
    * **FOLDED** -> **CHILDREN** -> **SUBTREE**
        * `<Tab>`                (**org-cycle**)
        * `S-<TAB>`              (**org-global-cycle**)
    * **OVERVIEW** -> **CONTENTS** -> **SHOW ALL**
        * `C-u <TAB>`            (?) (OVERVIEW)
        * `C-u C-u <TAB>`        (**org-set-startup-visibility**)
        * `C-u C-u C-u <TAB>`    (**show-all**) (show all, including drawers)
        * `C-c C-r`              (**org-reveal**)
        * `C-c C-k`              (**show-branches**)
        * `C-c C-x b`            (**org-tree-to-indirect-buffer**)
        * `C-c C-x v`            (**org-copy-visible**)
    * Initial visibility
        * `#+STARTUP: overview/content/showall/showeverything`
    * Catching invisible edits
        * Set `org-catch-invisible-edits` to `non-nil`

4. Motion
     * `C-c C-n`     (**outline-next-visible-heading**)
     * `C-c C-p`     (**outline-previous-visible-heading**)
     * `C-c C-f`     (**org-forward-same-level**)
     * `C-c C-b`     (**org-backward-same-level**)
     * `C-c C-u`     (**outline-up-heading**)
     * `C-c C-j`     (**org-goto**)

5. Structure editing
    * `M-<RET>`      (**org-insert-heading**)
    * `C-<RET>`      (**org-insert-heading-respect-content**) (seems better, not truncate current line)
    * `M-S-<RET>`    (**org-insert-todo-heading**)
    * `C-S-<RET>`    (**org-insert-todo-heading-respect-content**) (seems better)
    * `M-<left>`     (**org-do-promote**)
    * `M-<right>`    (**org-do-demote**)
    * `M-S-<left>`   (**org-promote-subtree**)
    * `M-S-<right>`  (**org-demote-subtree**)
    * `M-S-<up>`     (**org-move-subtree-up**)
    * `M-S-<down>`   (**org-move-subtree-down**)
    * `M-h`          (**org-mark-element**)
    * `C-c @`        (**org-mark-subtree**)
    * `C-c C-x C-w`  (**org-cut-subtree**)
    * `C-c C-x M-w`  (**org-copy-subtree**)
    * `C-c C-x C-y`  (**org-paste-subtree**)
    * `C-y`          (**org-yank**)  `A good way to force a normal yank is C-u C-y`
    * `C-c C-x c`    (**org-clone-subtree-with-time-shift**)
    * `C-c C-w`      (**org-refile**)
    * `C-c ^`        (**org-sort**)    Narrow buffer
    * `C-x n s`      (**org-narrow-to-subtree**)
    * `C-x n b`      (**org-narrow-to-block**)
    * `C-x n w`      (**widen**)
    * `C-c *`        (**org-toggle-heading**)

6. Sparse trees
    * `C-c /`                   (**org-sparse-tree**)
    * `C-c / r`                 (**org-occur**)
    * `M-g n` or `M-g M-n`      (**next-error**)
    * `M-g p` or `M-g M-p`      (**previous-error**)

7. Plain lists
    * (**org-list-demote-modify-bullet**)
    * (**org-list-indent-offset**)

8. Drawers
    * `C-c C-x d`     (**org-insert-drawer**)
    * `C-c C-z`       (**org-add-note**)

9. Blocks
    * Org mode uses begin...end blocks for various purposes from including source code examples

10. Footnotes
    * [1]
    * [fn:name]
    * [fn:: This is the inline definition of this footnote]
    * [fn:name: a definition]
    * (**org-footnote-auto-label**), (**org-footnote-auto-adjust**)
    * `C-c C-x f`   (**org-footnote-action**)
    * `C-c C-o` or `mouse-1/2`

11. The Orgstruct minor mode
    * Add Hook
    ```
    (add-hook 'message-mode-hook 'turn-on-orgstruct)
    (add-hook 'message-mode-hook 'turn-on-orgstruct++)
    ```

12. Org syntax
    * To explore the abstract structure of an Org buffer, run this in a buffer: `M-: (org-element-parse-buffer) RET`




--------------------------------------------------------------------------------

### 03. Tables

1. The built-in table editor
    * Example
    ```
    | Name  | Phone | Age |
    |-------+-------+-----|
    | Peter |  1234 |  17 |
    | Anna  |  4321 |  25 |
    ```
    * Keys
        * `<RET>`, add line
        * `<TAB>`, align
        * `C-c RET`, add horizontal spliter, like  `| one | two`, then `C-c RET`
    * **Creation and conversion**: `C-c |`, `org-table-create-or-convert-from-region`
        * `C-u` forces CSV
        * `C-u C-u` forces TAB
            * a numeric argument N indicates that at least N consecutive spaces, or alternatively a TAB will be the separator
    * Re-aligning and field motion
        * `C-c C-c`     (**org-table-align**)
        * `<TAB>`       (**org-table-next-field**)
        * `S-<TAB>`     (**org-table-previous-field**)
        * `<RET>`       (**org-table-next-row**)
        * `M-a`         (**org-table-beginning-of-field**)
        * `M-e`         (**org-table-end-of-field**)
    * Column and row editing
        * `M-<left>`          (**org-table-move-column-left**)
        * `M-<right>`         (**org-table-move-column-right**)
        * `M-S-<left>`        (**org-table-delete-column**)
        * `M-S-<right>`       (**org-table-insert-column**)
        * `M-<up>`            (**org-table-move-row-up**)
        * `M-<down>`          (**org-table-move-row-down**)
        * `M-S-<up>`          (**org-table-kill-row**)
        * `M-S-<down>`        (**org-table-insert-row**)
        * `C-c -`             (**org-table-insert-hline**), pretty like `C-c RET`
        * `C-c <RET>`         (**org-table-hline-and-move**)
        * `C-c ^`             (**org-table-sort-lines**)
    * Regions
        * `C-c C-x M-w`           (**org-table-copy-region**)
        * `C-c C-x C->`           (**org-table-cut-region**)
        * `C-c C-x C->`           (**org-table-paste-rectangle**)
        * `M-<RET>`               (**org-table-wrap-region**)
    * Calculations
        * `C-c +`              (**org-table-sum**)
        * `S-<RET>`            (**org-table-copy-down**), (**org-table-copy-increment**)
    * Miscellaneous
        * `C-c `                (**org-table-edit-field**)
        * `M-x org-table-import RET`, Import a file as a table
        * `C-c |`               (**org-table-create-or-convert-from-region**)
        * `M-x org-table-export RET`
        * Disable it: `(setq org-enable-table-editor nil)`

2. Column width and alignment
    * Specify Col Width
    ```
     |---+------------------------------|               |---+--------|
     |   |                              |               |   | <6>    |
     | 1 | one                          |               | 1 | one    |
     | 2 | two                          |     ----\     | 2 | two    |
     | 3 | This is a long chunk of text |     ----/     | 3 | This=> |
     | 4 | four                         |               | 4 | four   |
     |---+------------------------------|               |---+--------|
     ```
    * `org-startup-align-all-tables`
    ```
    #+STARTUP: align
    #+STARTUP: noalign
    ```
    * `<r>`, `<c>` or `<l>`, or `<r20>`

3. Column groups
    * A special row where the first field contains only ‘/’

4. The Orgtbl minor mode
    * `(add-hook 'message-mode-hook 'turn-on-orgtbl)`

5. The spreadsheet
    * References
        * `C-c ?`, show ref. `C-c }`, togggle ref.
        * Field references: `@row$column`
            * @+3 or @-1
            * @< and @> are immutable references the first and last row in the table, respectively
            * @I refers to the first hline, @II to the second, etc.
            * @-I refers to the first such line above the current line,
            * @+I to the first such line below the current line
            * @III+2 which is the second data line after the third hline in the table
            * @0 and $0 refer to the current row and column, respectively
        * Range references
        ```
        $1..$3        first three fields in the current row
        $P..$Q        range, using column names (see under Advanced)
        $<<<..$>>     start in third column, continue to the one but last
        @2$1..@4$3    6 fields between these two fields (same as A2..C4)
        @-1$-2..@-1   3 fields in the row above, starting from 2 columns on the left
        @I..II        between first and second hline, short for @I..@II
        ```
        * Field coordinates in formulas
        * Named references
            * `#+CONSTANTS: c=299792458. pi=3.14 eps=2.4e-6`
            * `org-table-formula-constants`
        * Formula syntax for Calc
        * Emacs Lisp forms as formulas
    * Durations and time values
    * Field and range formulas
    * Column formulas
    * Lookup functions
    * Editing and debugging formulas
    * Updating the table
    * Advanced features

6. Org-Plot



--------------------------------------------------------------------------------

### 04. Hyperlinks

1. Link format
    * `[[link][description]]`       or alternatively           `[[link]]`
    * `C-c C-l` to edit link
    * `C-c C-o` to follow link

2. Internal links
    * Radio targets

3. External links
    * http://www.google.com.sg
    * file://root/Desktop/Schedule.txt
    * mailto:gnat_tang@yeah.net
    * irc:/irc.com/#emacs/bob
    * shell:ls *.org
    * etc

4. Handling links
    * `C-c l`            (**org-store-link**)
    * `C-c C-l`          (**org-insert-link**), or just edit current link
    * `C-c C-o`          (**org-open-at-point**)
    * `C-c C-x C-v`      (**org-toggle-inline-images**)
    * `C-c %`            (**org-mark-ring-push**)
    * `C-c &`            (**org-mark-ring-goto**)
    * `C-c C-x C-n`      (**org-next-link**)
    * `C-c C-x C-p`      (**org-previous-link**)

5. Using links outside Org
   ```
   (global-set-key "\C-c L" 'org-insert-link-global)
   (global-set-key "\C-c o" 'org-open-at-point-global)
   ```

6. Link abbreviations
   ```
   (setq org-link-abbrev-alist
       '(("bugzilla"  . "http://10.1.2.9/bugzilla/show_bug.cgi?id=")
         ("url-to-ja" . "http://translate.google.fr/translate?sl=en&tl=ja&u=%h")
         ("google"    . "http://www.google.com/search?q=")
         ("ads"       . "http://adsabs.harvard.edu/cgi-bin/nph-abs_connect?author=%s&db_key=AST")))
   ```

7. Search options in file links
   ```
   [[file:~/code/main.c::255]]
   [[file:~/xx.org::My Target]]
   [[file:~/xx.org::*My Target]]
   [[file:~/xx.org::#my-custom-id]]
   [[file:~/xx.org::/regexp/]]
   ```

8. Custom Searches



--------------------------------------------------------------------------------

### 05. TODO Items

1. Basic TODO functionality
    * Headline starts with "TODO" will become "TODO": `*** TODO Write letter to Sam Fortune`
    * `C-c C-t`                   (**org-todo**): **(unmarked)** -> **TODO** -> **DONE**
    * `C-u C-c C-t`
    * `S-<right> / S-<left>`      like `C-c C-t`
    * `C-c / t`                   (**org-show-todo-tree**)
    * `C-c / T`
    * `C-c a t`                   (**org-todo-list**)
    * `S-M-<RET>`                 (**org-insert-todo-heading**)

2. Extended use of TODO keywords
    * TODO keywords as workflow states
    ```
    (setq org-todo-keywords
       '((sequence "TODO" "FEEDBACK" "VERIFY" "|" "DONE" "DELEGATED")))
    ```
    * TODO keywords as types
    ```
    (setq org-todo-keywords '((type "Fred" "Sara" "Lucy" "|" "DONE")))
    ```
    * Multiple keyword sets in one file
    ```
    (setq org-todo-keywords
           '((sequence "TODO" "|" "DONE")
             (sequence "REPORT" "BUG" "KNOWNCAUSE" "|" "FIXED")
             (sequence "|" "CANCELED")))
    ```
    * Fast access to TODO states (`C-c C-t` to select)
    ```
    (setq org-todo-keywords
           '((sequence "TODO(t)" "|" "DONE(d)")
             (sequence "REPORT(r)" "BUG(b)" "KNOWNCAUSE(k)" "|" "FIXED(f)")
             (sequence "|" "CANCELED(c)")))
    ```
    * Setting up keywords for individual files
        * `#+TODO: TODO FEEDBACK VERIFY | DONE CANCELED`
        * `#+SEQ_TODO: Seq1 Seq2 | Seq-done`
        * `#+TYP_TODO: Fred Sara Lucy Mike | DONE`
    * Faces for TODO keywords
    ```
    (setq org-todo-keyword-faces
           '(("TODO" . org-warning) ("STARTED" . "yellow")
             ("CANCELED" . (:foreground "blue" :weight bold))))
    ```
    * TODO dependencies
        * C-c C-x o     (org-toggle-ordered-property)
        * C-u C-u C-u C-c C-t: Change TODO state, circumventing any state blocking.

3. Progress logging
    * Closing items
        * `(setq org-log-done 'time)`
        * `(setq org-log-done 'note)`
    * Tracking TODO state changes
        * "!", for **timestamp**
        * "@", for **note with timestamp**
        * Set it up
        ```
        (setq org-todo-keywords
              '((sequence "TODO(t)" "WAIT(w@/!)" "|" "DONE(d!)" "CANCELED(c@)")))
        ```
        * Or set logging preferences local to a buffer: `#+TODO: TODO(t) WAIT(w@/!) | DONE(d!) CANCELED(c@)`
    * Tracking your habits

4. Priorities
    * `*** TODO [#A] Write letter to Sam Fortune`
    * `C-c ,`          (**org-priority**), setup priorities
    * `S-<up>`         (**org-priority-up**)
    * `S-<down>`       (**org-priority-down**)

5. Breaking tasks down into subtasks
    * Insert either ‘[/]’ or ‘[%]’ anywhere in the headline

6. Checkboxes
    * `[ ]`, `[/]`, `[%]`
    * `C-c C-c`,                togggle checked/unchecked
    * `C-c C-c`                 (**org-toggle-checkbox**)
    * `C-c C-x C-b`             (**org-toggle-checkbox**)
    * `M-S-<RET>`               (**org-insert-todo-heading**)
    * `C-c C-x o`               (**org-toggle-ordered-property**)
    * `C-c #`                   (**org-update-statistics-cookies**), `C-u C-c` to update whole file
    * ![][checkboxes]


---

### 06. Tags :work:, :reading:notes:

1. Tag inheritance
    * `#+FILETAGS: :Peter:Boss:Secret:`

2. Setting tags
    * `C-c C-q`     (**org-set-tags-command**)
    * `C-c C-c`     (**org-set-tags-command**), when the cursor in the headline
    * `org-tag-alist`, (**org-tag-persistent-alist**)
    ```
    #+TAGS: @work @home @tennisclub
    #+TAGS: laptop car pc sailboat
    #+TAGS: @work(w)  @home(h)  @tennisclub(t)  laptop(l)  pc(p)
    #+STARTUP: noptag
    (setq org-tag-alist '(("@work" . ?w) ("@home" . ?h) ("laptop" . ?l)))
    ```

3. Tag groups
    * groups
    ```
    #+TAGS: { @read : @read_book @read_ebook }
    (setq org-tag-alist '((:startgroup . nil)
                           ("@read" . nil)
                           (:grouptags . nil)
                           ("@read_book" . nil)
                           ("@read_ebook" . nil)
                           (:endgroup . nil)))
    ```

4. Tag searches
    * `C-c / m` or `C-c \`     (**org-match-sparse-tree**)
    * `C-c a m`              (**org-tags-view**)
    * `C-c a M`              (**org-tags-view**)




--------------------------------------------------------------------------------

### 07. Properties

1. Property syntax
    * `M-<TAB>`                                              (**pcomplete**)
    * `C-c C-x p`                                            (**org-set-property**)
    * `C-u M-x org-insert-drawer RET`
    * `C-c C-c`                                              (**org-property-action**)
    * `C-c C-c s`                                            (**org-set-property**)
    * `S-<right>`                                            (**org-property-next-allowed-value**)
    * `S-<left>`                                             (**org-property-previous-allowed-value**)
    * `C-c C-c d`                                            (**org-delete-property**)
    * `C-c C-c D`                                            (**org-delete-property-globally**)
    * `C-c C-c c`                                            (**org-compute-property-at-point**)

2. Special properties 
    ```
    ID           A globally unique ID used for synchronization during
                 iCalendar or MobileOrg export.
    TODO         The TODO keyword of the entry.
    TAGS         The tags defined directly in the headline.
    ALLTAGS      All tags, including inherited ones.
    CATEGORY     The category of an entry.
    PRIORITY     The priority of the entry, a string with a single letter.
    DEADLINE     The deadline time string, without the angular brackets.
    SCHEDULED    The scheduling timestamp, without the angular brackets.
    CLOSED       When was this entry closed?
    TIMESTAMP    The first keyword-less timestamp in the entry.
    TIMESTAMP_IA The first inactive timestamp in the entry.
    CLOCKSUM     The sum of CLOCK intervals in the subtree.  org-clock-sum
                 must be run first to compute the values in the current buffer.
    CLOCKSUM_T   The sum of CLOCK intervals in the subtree for today.
                 org-clock-sum-today must be run first to compute the
                 values in the current buffer.
    BLOCKED      "t" if task is currently blocked by children or siblings
    ITEM         The headline of the entry.
    FILE         The filename the entry is located in.
    ```

3. Property searches
    * `C-c / m` or `C-c \`    (**org-match-sparse-tree*8)
    * `C-c a m`               (**org-tags-view**)
    * `C-c a M`               (**org-tags-view**)
    * `C-c / p`

4. Property Inheritance

5. Column view
    * Defining columns
        * Scope of column definitions 
            * to entire file
            ```
            #+COLUMNS: %25ITEM %TAGS %PRIORITY %TODO
            ```
            * to a specific tree
            ```
            ** Top node for columns view
               :PROPERTIES:
               :COLUMNS: %25ITEM %TAGS %PRIORITY %TODO
               :END:
            ```
        * Column attributes: `%[width]property[(title)][{summary-type}]`
    * Using column view
        * Turning column view on and off    
            * C-c C-x C-c     (org-columns)
            * r     (org-columns-redo)
            * g     (org-columns-redo)
            * q     (org-columns-quit)
        * Editing values      
            * `<left>`, `<right>`, `<up>`, `<down>`
            * `S-<left>/<right>`, switch values
            * `1..9,0`, Directly select the Nth allowed value, 0 selects the 10th value
            * n     (org-columns-next-allowed-value)
            * <TODO> 
        * Modifying the table structure    
            * <     (org-columns-narrow)  by one char
            * >     (org-columns-widen)    by one char
            * S-M-<right>     (org-columns-new)
            * S-M-<left>     (org-columns-delete)
    * Capturing column view
        * column view, an overlay over a buffer, so cant be printed directly. To capture a column view, use a **columnview dynamic block**
        ```
        * The column view
        #+BEGIN: columnview :hlines 1 :id "label"
        #+END:
        ```
        * Dynamic Block has the Following Parameters:
            * `:id`
            * `:hlines`
            * `:vlines`
            * `:maxlevel`
        * Insert Or Update The Dynamic Block:
            * C-c C-x i     (org-insert-columns-dblock)
            * C-c C-c or C-c C-x C-u     (org-dblock-update)
            * C-u C-c C-x C-u     (org-update-all-dblocks)
 
6. [The Property API][property-api]




--------------------------------------------------------------------------------

### 08. Dates and Times





















### 09. Capture ### Refile ### Archive
### 10. Agenda Views
### 11. Markup for rich export
### 12. Exporting
### 13. Publishing
### 14. Working with source code
### 15. Miscellaneous
### 16. GNU Free Documentation License



[org-manual]: http://orgmode.org/org.html
[checkboxes]: src/org-todo-progress.png
[property-api]: http://orgmode.org/org.html#Using-the-property-API
