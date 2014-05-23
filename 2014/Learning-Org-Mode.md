Learning Org-Mode
=================

***[The Org Manual][org-manual]*** by Carsten Dominik
-----------------------------------------------------



TOC
---

* 01. A Introduction
* 02. Document Structure
* 03. Tables
* 04. Hyperlinks
* 05. TODO Items
* 06. Tags
* 07. Properties
* 08. Dates and Times
* 09. Capture - Refile - Archive
* 10. Agenda Views
* 11. Markup for rich export
* 12. Exporting
* 13. Publishing
* 14. Working with source code
* 15. Miscellaneous
* 16. Appendix A Hacking
* 17. GNU Free Documentation License




--------------------------------------------------------------------------------

### 01. A Introduction

* Org is a **toolbox** and can be used in different ways and for different ends, for example:
    * an outline extension with visibility cycling and structure editing
    * an ASCII system and table editor for taking structured notes
    * a TODO list editor
    * a full agenda and planner with deadlines and work scheduling
    * an environment in which to implement David Allenfls GTD system
    * a simple hypertext system, with HTML and L TEX export
    * a publishing tool to create a set of interlinked web pages
    * **an environment for literate programming**



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
     * `C-c C-n`, `C-c C-p`    (**outline-next-visible-heading**), (**outline-previous-visible-heading**)
     * `C-c C-f`, `C-c C-b`    (**org-forward-same-level**), (**org-backward-same-level**)
     * `C-c C-u`               (**outline-up-heading**)
     * `C-c C-j`               (**org-goto**)

5. Structure editing
    * `M-<RET>`      (org-insert-heading)
    * `C-<RET>`      (**org-insert-heading-respect-content**) (seems better, not truncate current line)
    * `M-S-<RET>`    (org-insert-todo-heading)
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
            * `@+3` or `@-1`
            * `@<` and `@>` are immutable references the first and last row in the table, respectively
            * `@I` refers to the first hline, @II to the second, etc.
            * `@-I` refers to the first such line above the current line,
            * `@+I` to the first such line below the current line
            * `@III+2` which is the second data line after the third hline in the table
            * `@0` and `$0` refer to the current row and column, respectively
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

1. Timestamps, deadlines, and scheduling
    * Plain timestamp; Event; Appointment: `<2006-11-01 Wed 19:15>`
    * Timestamp with repeater interval: `<2007-05-16 Wed 12:30 +1w>`
    * Diary-style sexp entries: <%%(diary-float t 4 2)>
    * Time/Date range: <2004-08-23 Mon>--<2004-08-26 Thu>
    * Inactive timestamp: [2006-11-01 Wed]

2. Creating timestamps
    * `C-c .`                (org-time-stamp) just date
    * `C-c !`                (org-time-stamp-inactive) just date
    * `C-u C-c .`            with time
    * `C-u C-c !`            with time
    * `C-c C-c`              Normalize timestamp, insert/fix day name if missing or wrong.
    * `C-c <`                (org-date-from-calendar)
    * `C-c >`                (org-goto-calendar)
    * `C-c C-o`              (org-open-at-point)
    * `S-<left>`             (org-timestamp-down-day)
    * `S-<right>`            (org-timestamp-up-day)
    * `S-<up>`               (org-timestamp-up)
    * `S-<down>`             (org-timestamp-down-down)
    * `C-c C-y`              (org-evaluate-time-range)
    * Format I.
        * 1. format 1
        ```
            +0            ⇒ today
            .             ⇒ today
            +4d           ⇒ four days from today
            +4            ⇒ same as above
            +2w           ⇒ two weeks from today
            ++5           ⇒ five days from default date
            +2tue         ⇒ second Tuesday from now
            -wed          ⇒ last Wednesday
        ```
        * 2. format 2
        ```
            11am-1:15pm    ⇒ 11:00-13:15
            11am--1:15pm   ⇒ same as above
            11am+2:15      ⇒ same as above
        ```
        * 3. format 3
        ```
            <RET>                     Choose date at cursor in calendar.
            mouse-1                   Select date by clicking on it.
            S-<right>/<left>          One day forward/backward.
            S-<down>/<up>             One week forward/backward.
            M-S-<right>/<left>        One month forward/backward.
            > / <                     Scroll calendar forward/backward by one month.
            M-v / C-v                 Scroll calendar forward/backward by 3 months.
        ```
    * Custom time format
        * C-c C-x C-t     (org-toggle-time-stamp-overlays)

3. Deadlines and scheduling
    * DEADLINE
    * SCHEDULED
    * Inserting deadlines or schedules
        * C-c C-d     (org-deadline)
        * C-c C-s     (org-schedule)
        * C-c C-x C-k     (org-mark-entry-for-agenda-action)
        * C-c / d     (org-check-deadlines)
        * C-c / b     (org-check-before-date)
        * C-c / a     (org-check-after-date)
    * Repeated tasks

4. Clocking work time
    * Save the clock history
    ```
    (setq org-clock-persist 'history)
    (org-clock-persistence-insinuate)
    ```
    * Clocking commands
        * `C-c C-x C-i`                   (**org-clock-in**)
        * `C-c C-x C-o`                   (**org-clock-out**)
        * `C-c C-x C-x`                   (**org-clock-in-last**)
        * `C-c C-x C-e`                   (**org-clock-modify-effort-estimate**)
        * `C-c C-c or C-c C-y`            (**org-evaluate-time-range**)
        * `C-S-<up/down>`                 (**org-clock-timestamps-up/down**)
        * `S-M-<up/down>`                 (**org-timestamp-up/down**)
        * `C-c C-t`                       (**org-todo**)
        * `C-c C-x C-q`                   (**org-clock-cancel**)
        * `C-c C-x C-j`                   (**org-clock-goto**)
        * `C-c C-x C-d`                   (**org-clock-display**)
    * The clock table
        * `C-c C-x C-r`                    (org-clock-report)
        * `C-c C-c or C-c C-x C-u`         (org-dblock-update)
        * `C-u C-c C-x C-u`                (update)
        * `S-<left> / <right>`             (org-clocktable-try-shift)
    * Resolving idle time and continuous clocking

5. Effort estimates
    * `C-c C-x e`                       (org-set-effort)
    * `C-c C-x C-e`                     (org-clock-modify-effort-estimate)

6. Taking notes with a relative timer
    * `C-c C-x .`                (org-timer)      reset with a prefix argument
    * `C-c C-x -`                (org-timer-item) reset with a prefix argument
    * `M-<RET>`                  (org-insert-heading)
    * `C-c C-x ,`                pause / continue
    * `C-u C-c C-x ,`
    * `C-c C-x 0`                (org-timer-start) Reset the timer without inserting anything into the buffer

7. Countdown timer
    * `C-c C-x ;`                (**org-timer-set-timer**)





--------------------------------------------------------------------------------

### 09. Capture - Refile - Archive

1. Capture
    * Setting up capture
    ```
        (setq org-default-notes-file (concat org-directory "/notes.org"))
        (define-key global-map "\C-cc" 'org-capture)
    ```
    * Using capture
        * C-c c     (org-capture)
            * C-c C-c     (org-capture-finalize)
            * C-c C-w     (org-capture-refile)
            * C-c C-k     (org-capture-kill)
        * C-u C-c c   Visit the target location of a capture template.
        * C-u C-u C-c c   Visit the last stored capture item in its buffer.
    * Capture templates
        * C-c c C   org-capture-templates
        * Setup a template
        ```
            (setq org-capture-templates
                  '(("t" "Todo" entry (file+headline "~/org/gtd.org" "Tasks")
                         "* TODO %?\n  %i\n  %a")
                    ("j" "Journal" entry (file+datetree "~/org/journal.org")
                         "* %?\nEntered on %U\n  %i\n  %a")))
        ```
        * Difine Your Shortcut
        ```
            (define-key global-map "\C-cx"
                 (lambda () (interactive) (org-capture nil "x")))
        ```
        * Template elements
            * keys: ("b" "Templates for marking stuff to buy"), "b" is the key.
            * description
            * type: entry / item / checkitem / table-line / plain
            * target
               * (file "path/to/file")
               * (id "id of existing org entry")
               * (file+headline "path/to/file" "node headline"), for unique heading
               * (file+olp "path/to/file" "Level 1 heading" "Level 2" ...), for non-unique heading
               * (file+regexp "path/to/file" "regexp to find location")
               * (file+datetree "path/to/file")
               * (file+datetree+prompt "path/to/file")
               * (file+function "path/to/file" function-finding-location)
               * (clock)
               * (function function-finding-location), write your own function to find both file and location
           * template
           * properties: :prepend, :immediate-finish, :empty-lines, :clock-in, :clock-keep, :clock-resume, :unnarrowed, :table-line-pos, :kill-buffer
        * Template expansion
            * In the template itself, special %-escapes92 allow dynamic insertion of content.
            ```
                %[file]     Insert the contents of the file given by file.
                %(sexp)     Evaluate Elisp sexp and replace with the result.
                               For convenience, %:keyword (see below) placeholders
                               within the expression will be expanded prior to this.
                               The sexp must return a string.
                %<...>      The result of format-time-string on the ... format specification.
                %t          Timestamp, date only.
                %T          Timestamp, with date and time.
                %u, %U      Like the above, but inactive timestamps.
                %i          Initial content, the region when capture is called while the
                            region is active.
                            The entire text will be indented like %i itself.
                %a          Annotation, normally the link created with org-store-link.
                %A          Like %a, but prompt for the description part.
                %l          Like %a, but only insert the literal link.
                %c          Current kill ring head.
                %x          Content of the X clipboard.
                %k          Title of the currently clocked task.
                %K          Link to the currently clocked task.
                %n          User name (taken from user-full-name).
                %f          File visited by current buffer when org-capture was called.
                %F          Full path of the file or directory visited by current buffer.
                %:keyword   Specific information for certain link types, see below.
                %^g         Prompt for tags, with completion on tags in target file.
                %^G         Prompt for tags, with completion all tags in all agenda files.
                %^t         Like %t, but prompt for date.  Similarly %^T, %^u, %^U.
                            You may define a prompt like %^{Birthday}t.
                %^C         Interactive selection of which kill or clip to use.
                %^L         Like %^C, but insert as link.
                %^{prop}p   Prompt the user for a value for property prop.
                %^{prompt}  prompt the user for a string and replace this sequence with it.
                            You may specify a default value and a completion table with
                            %^{prompt|default|completion2|completion3...}.
                            The arrow keys access a prompt-specific history.
                %\n         Insert the text entered at the nth %^{prompt}, where n is
                            a number, starting from 1.
                %?          After completing the template, position cursor here.
            ```
            * For specific link types
            ```
                Link type                        |  Available keywords
                ---------------------------------+----------------------------------------------
                bbdb                             |  %:name %:company
                irc                              |  %:server %:port %:nick
                vm, vm-imap, wl, mh, mew, rmail  |  %:type %:subject %:message-id
                                                 |  %:from %:fromname %:fromaddress
                                                 |  %:to   %:toname   %:toaddress
                                                 |  %:date (message date header field)
                                                 |  %:date-timestamp (date as active timestamp)
                                                 |  %:date-timestamp-inactive (date as inactive timestamp)
                                                 |  %:fromto (either "to NAME" or "from NAME")94
                gnus                             |  %:group, for messages also all email fields
                w3, w3m                          |  %:url
                info                             |  %:file %:node
                calendar                         |  %:date
            ```
            * `%?`          After completing the template, position cursor here.
        * Templates in contexts
        ```
            (setq org-capture-templates-contexts
               '(("p" (in-mode . "message-mode"))))
            (setq org-capture-templates-contexts
               '(("p" "q" (in-mode . "message-mode"))))
        ```

2. Attachments
    * `C-c C-a`      (org-attach)
        * `a`          (org-attach-attach)
        * `c/m/l`      copy/link/move
        * `n`          (org-attach-new)
        * `z`          (org-attach-sync)
        * `o`          (org-attach-open)
        * `O`          (org-attach-open-in-emacs)
        * `f`          (org-attach-reveal)
        * `F`          (org-attach-reveal-in-emacs)
        * `d`          (org-attach-delete-one)
        * `D`          (org-attach-delete-all)
        * `s`          (org-attach-set-directory)
        * `i`          (org-attach-set-inherit)

3. RSS feeds
    * org-feed-alist
    ```
       (setq org-feed-alist
                  '(("Slashdot"
                      "http://rss.slashdot.org/Slashdot/slashdot"
                      "~/txt/org/feeds.org" "Slashdot Entries")))
    ```
    * `C-c C-x g`     (org-feed-update-all)
    * `C-c C-x g`
    * `C-c C-x G`     (org-feed-goto-inbox)

4. [Protocols for external access][org-protocol]

5. Refile and copy
    * `C-c M-w`     (org-copy)
    * `C-c C-w`     (org-refile)
    * `C-u C-c C-w` Use the refile interface to jump to a heading.
    * `C-u C-u C-c` C-w     (org-refile-goto-last-stored)
    * `C-2 C-c C-w` Refile as the child of the item currently being clocked.
    * `C-3 C-c C-w` Refile and keep the entry in place. Also see org-refile-keep to make this the default behavior, and beware that this may result in duplicated ID properties.
    * `C-0 C-c C-w or C-u C-u C-u C-c C-w`     (org-refile-cache-clear)

6. Archiving
    * C-c C-x C-a     (org-archive-subtree-default)
        * Moving a tree to the archive file
            * C-c C-x C-s or short C-c $     (org-archive-subtree)
            * C-u C-c C-x C-s
    * Internal archiving
        * C-c C-x a             (org-toggle-archive-tag)
        * C-u C-c C-x a         Check if any direct children of the current headline should be archived.
        * C-TAB     (org-force-cycle-archived)
        * C-c C-x A     (org-archive-to-archive-sibling)




--------------------------------------------------------------------------------

### 10. Agenda Views

* Before
    * Org can select items based on various criteria and display them in a separate buffer. Seven different view types are provided:
        * an **agenda** that is like a calendar and shows information for specific dates,
        * a **TODO** list that covers all unfinished action items,
        * a **match view**, showings headlines based on the tags, properties, and TODO state associated with them,
        * a **timeline view** that shows all events in a single Org file, in time-sorted view,
        * a **text search view** that shows all entries from multiple files that contain specified keywords,
        * a **stuck projects view** showing projects that currently don't move along, and
        * **custom views** that are special searches and combinations of different views.
    * agenda buffer (read-only)

1. Agenda files
    * `org-agenda-files`
    * C-c [     (org-agenda-file-to-front), Add current file to the list of agenda files.
    * C-c ]     (org-remove-file)
    * C-'     (org-cycle-agenda-files)
    * C-,     Cycle through agenda file list, visiting one file after the other.
    * M-x org-iswitchb RET
    * C-c C-x <     (org-agenda-set-restriction-lock)
    * C-c C-x >     (org-agenda-remove-restriction-lock)
    * When working with speedbar.el
        * < in the speedbar frame     (org-speedbar-set-agenda-restriction)
        * > in the speedbar frame     (org-agenda-remove-restriction-lock)

2. The agenda dispatcher
    * agenda dispatcher, bound to `C-c a`
        * `a`            calendar-like agenda
        * `t / T`        TODO
        * `m / M`        Create a list of headlines matching a TAGS expression
        * `L`            Create the timeline view for the current buffer
        * `s`            Create a list of entries selected by a boolean expression of keywords and/or regular expressions that must or must not occur in the entry.
        * `/`            Search for a regular expression
        * `# / !`        Create a list of stuck projects
        * `<`            Restrict an agenda command to the current buffer100. After pressing <, you still need to press the character selecting the command.
        * `< <`
        * `*`            Toggle sticky agenda views

3. The built-in agenda views
    * The weekly/daily agenda
        * C-c a a     (org-agenda-list)
        * C-u 2 1 C-c a a   (21 days)
        * (setq org-agenda-start-day "+10d")
        * Calendar/Diary integration  (setq org-agenda-include-diary t)
        * Anniversaries from BBDB
        * Appointment reminders: org-agenda-to-appt
    * The global TODO list
        * C-c a t     (org-todo-list) show list
        * C-c a T     (org-todo-list)
    * Matching tags and properties
        * C-c a m     (org-tags-view)  `C-c / m`
        * C-c a M     (org-tags-view)
        * Match syntax
            * `+`, `-`, `&`, `|`;
            * `work`, `work&boss`, `+work-boss`, `work|laptop`, `work|laptop+night`, `work+{^boss.*}`
    * Timeline for a single file
        * C-c a L     (org-timeline) When called with a C-u prefix, all unfinished TODO entries (scheduled or not) are also listed under the current date.
    * Search view
        * C-c a s     (org-search-view)
    * Stuck projects
        * C-c a #     (org-agenda-list-stuck-projects)
        * C-c a !     Customize the variable org-stuck-projects to define what a stuck project is and how to find it.

4. Presentation and sorting
    * Categories
        * Specify Cat: `#+CATEGORY: Thesis`
        * Set up icons for category by customizing the `org-agenda-category-icon-alist` variable.
    * Time-of-day specifications
        * Variable: `org-agenda-use-time-grid`
        * Configured it with `org-agenda-time-grid`
    * Sorting agenda items
        * `org-agenda-sorting-strategy`
    * Filtering/limiting agenda items
        * Filtering in the agenda
            * /                                   (org-agenda-filter-by-tag)
            * \                                   (org-agenda-filter-by-tag-refine)
            * [words] {regexpr}                   in search view
            * <                                   (org-agenda-filter-by-category)
            * ^                                   (org-agenda-filter-by-top-headline)
            * =                                   (org-agenda-filter-by-regexp)
            * |                                   (org-agenda-filter-remove-all)
        * Setting limits for the agenda
            * org-agenda-max-entries
            * org-agenda-max-effort               `(setq org-agenda-max-effort 100)`, set max effort to 100 mins
            * org-agenda-max-todos
            * org-agenda-max-tags

5. Commands in the agenda buffer
    * Motion
        * `n`, `<down>`, `C-n`          (org-agenda-next-line)
        * `p`, `<up>`, `C-p`            (org-agenda-previous-line)
    * View/Go to Org file
        * <SPC> or mouse-3              (org-agenda-show-and-scroll-up)
        * L                             (org-agenda-recenter)
        * <TAB> or mouse-2              (org-agenda-goto)
        * <RET>                         (org-agenda-switch-to)
        * F                             (org-agenda-follow-mode)      very good~
        * C-c C-x b                     (org-agenda-tree-to-indirect-buffer)
        * C-c C-o                       (org-agenda-open-link)
    * Change display
        * `A`                           Interactively select another agenda view and append it to the current view.
        * `o`                           Delete other windows.
        * `v d` or `short d`            (org-agenda-day-view)
        * `v w` or `short w`            (org-agenda-week-view)
        * `v t`                         (org-agenda-fortnight-view)
        * `v m`                         (org-agenda-month-view)
        * `v y`                         (org-agenda-year-view)
        * `v SPC`                       (org-agenda-reset-view)
        * `v SPC`                       (org-agenda-reset-view)
        * `f`                           (org-agenda-later) Go forward in time to display the following org-agenda-current-span days.
        * `b`                           (org-agenda-earlier) Go backward in time to display earlier dates.
        * ```                           (org-agenda-goto-today) Go to today.
        * `j`                           (org-agenda-goto-date) Prompt for a date and go there.
        * `J`                           (org-agenda-clock-goto) Go to the currently clocked-in task in the agenda buffer.
        * `D`                           (org-agenda-toggle-diary) Toggle the inclusion of diary entries. See Weekly/daily agenda.
        * `v l` or short `l`            (org-agenda-log-mode)
        * `v [` or short `[`            (org-agenda-manipulate-query-add)
        * `v a`                         (org-agenda-archives-mode)
        * `v A`                         (org-agenda-archives-mode 'files)
        * `v R` or short `R`            (org-agenda-clockreport-mode)
        * `v c`                         Show overlapping clock entries, clocking gaps, and other clocking problems in the current agenda range.
        * `v E` or short `E`            (org-agenda-entry-text-mode)
        * `G`                           (org-agenda-toggle-time-grid)
        * `g`, `r`                      (org-agenda-redo)
        * `C-x C-s` or short `s`        (org-save-all-org-buffers)
        * `C-c C-x C-c`                 (org-agenda-columns)
        * `C-c C-x >`                   (org-agenda-remove-restriction-lock)
    * Secondary filtering and query editing
        * /                             (org-agenda-filter-by-tag)
        * \                             (org-agenda-filter-by-tag-refine)
        * <                             (org-agenda-filter-by-category)
        * ^                             (org-agenda-filter-by-top-headline)
        * =                             (org-agenda-filter-by-regexp)
        * |                             (org-agenda-filter-remove-all)
    * Remote editing
        * `0--9`                        Digit argument.
        * `C-_`                         (org-agenda-undo)
        * `t`                           (org-agenda-todo)
        * `C-S-<right>`, `C-S-<left>`   (org-agenda-todo-nextset), (org-agenda-todo-previousset)
        * `C-k`                         (org-agenda-kill)
        * `C-c C-w`                     (org-agenda-refile)
        * `C-c C-x C-a` or short `a`    (org-agenda-archive-default-with-confirmation)
        * `C-c C-x a`                   (org-agenda-toggle-archive-tag)
        * `C-c C-x A`                   (org-agenda-archive-to-archive-sibling)
        * `C-c C-x C-s` or short `$`    (org-agenda-archive)
        * `T`                           (org-agenda-show-tags)
        * `:`                           (org-agenda-set-tags)
        * `,`                           Set the priority for the current item (org-agenda-priority)
        * `P`                           (org-agenda-show-priority)
        * `+` or `S-<up>`               (org-agenda-priority-up)
        * `-` or `S-<down>`             (org-agenda-priority-down)
        * `z` or `C-c C-z`              (org-agenda-add-note)
        * `C-c C-a`                     (org-attach) Dispatcher for all command related to attachments.
        * `C-c C-s`                     (org-agenda-schedule) Schedule this item. With prefix arg remove the scheduling timestamp
        * `C-c C-d`                     (org-agenda-deadline) Set a deadline for this item. With prefix arg remove the deadline.
        * `S-<right>`                   (org-agenda-do-date-later)
        * `S-<left>`                    (org-agenda-do-date-earlier)
        * `>`                           (org-agenda-date-prompt)
        * `I`                           (org-agenda-clock-in)
        * `O`                           (org-agenda-clock-out)
        * `X`                           (org-agenda-clock-cancel) Cancel the currently running clock.
        * `J`                           (org-agenda-clock-goto) Jump to the running clock in another window.
        * `k`                           (org-agenda-capture) Like org-capture, but use the date at point as the default date for the capture template.
    * Dragging agenda lines forward/backward
        * M-<up>     (org-agenda-drag-line-backward)
        * M-<down>     (org-agenda-drag-line-forward)
    * Bulk remote editing selected entries
        * `m`              (org-agenda-bulk-mark) Mark the entry at point for bulk action. With numeric prefix argument, mark that many successive entries.
        * `*`              (org-agenda-bulk-mark-all) Mark all visible agenda entries for bulk action.
        * `u`              (org-agenda-bulk-unmark)
        * `U`              (org-agenda-bulk-remove-all-marks)
        * `M-m`            (org-agenda-bulk-toggle)
        * `M-*`            (org-agenda-bulk-toggle-all)
        * `%`              (org-agenda-bulk-mark-regexp) Mark entries matching a regular expression for bulk action.
        * `B`              (org-agenda-bulk-action)
            * `*`          Toggle persistent marks.
            * `$`          Archive all selected entries.
            * `A`          Archive entries by moving them to their respective archive siblings.
            * `t`          Change TODO state.
            * `+`          Add a tag to all selected entries.
            * `-`          Remove a tag from all selected entries.
            * `s`          Schedule all items to a new date.
            * `d`          Set deadline to a specific date.
            * `r`          Prompt for a single refile target and move all entries.
            * `S`          Reschedule randomly into the coming N days. N will be prompted for. With prefix arg (C-u B S), scatter only across weekdays.
            * `f`          Apply a function to marked entries.
    * Calendar commands <TODO>
    * Exporting to a file
    * Quit and Exit

6. Custom agenda views
    * Storing searches
    * Block agenda
    * Setting options for custom commands

7. Exporting Agenda Views

8. Using column view in the agenda
    * C-c C-x C-c     (org-agenda-columns)





--------------------------------------------------------------------------------

### 11. Markup for rich export

1. Structural markup elements
    * **Document title**: Where the title is taken from
        * `#+TITLE: This is the title of the document`
    * **Headings and sections**: The document structure as seen by the exporter
        * `#+OPTIONS: H:4`
    * **Table of contents**: The if and where of the table of contents
        ```
            #+OPTIONS: toc:2          (only to two levels in TOC)
            #+OPTIONS: toc:nil        (no default TOC at all)
            #+TOC: headlines 2        (insert TOC here, with two headline levels)
            #+TOC: listings           (build a list of listings)
            #+TOC: tables             (build a list of tables)
        ```
    * **Lists**: unordered, ordered, and description lists
    * **Paragraphs**: Paragraphs
        * line breaks: `\\`, en empty line, or this way:
            ```
                #+BEGIN_VERSE
                Great clouds overhead
                Tiny black birds rise and fall
                Snow covers Emacs

                    -- AlexSchroeder
                #+END_VERSE
            ```
            ```
                #+BEGIN_QUOTE
                Everything should be made as simple as possible,
                but not any simpler -- Albert Einstein
                #+END_QUOTE
            ```
            ```
                #+BEGIN_CENTER
                Everything should be made as simple as possible, \\
                but not any simpler
                #+END_CENTER
            ```
    * **Footnote markup**: Footnotes
    * **Emphasis and monospace**: Bold, italic, etc.
        * e.g.         
        ```
            make words *bold*, /italic/, _underlined_, =verbatim= and ~code~, and, if you must, ‘+strike-through+’.
        ```
        * `org-fontify-emphasized-text`
    * **Horizontal rules**: Make a line, at least **5 dashes**
    * **Comment lines**: What will *not* be exported
        * e.g.
        ```
            #+BEGIN_COMMENT
            #+END_COMMENT
        ```
        * `C-c ;`, toggle comment

2. Images and Tables
    * CAPTION 1: Table
    ```
        #+CAPTION: This is the caption for the next table (or link)
        #+NAME:   tab:basic-data
            | ... | ...|
            |-----|----|
    ```
    * CAPTION 2: Tables    
    ```
        #+CAPTION[Caption for list of tables]: Caption for table.    
    ```     
    * Image Caption  
    ```
        #+CAPTION: This is the caption for the next figure link (or table)
        #+NAME:   fig:SED-HR4049
        [[./img/a.jpg]]    
    ```

3. Literal examples
    * plain text example    
    ```
        #+BEGIN_EXAMPLE
        Some example from a text file.
        #+END_EXAMPLE
    ```
    * code block example
    ``` 
        #+BEGIN_SRC emacs-lisp
          (defun org-xor (a b)
                 "Exclusive or."
              (if a (not b) b))
        #+END_SRC
    ```
    * `C-c '`, `C-c l`

4. Include files
    * Examples
    ```
        #+INCLUDE: "~/.emacs" src emacs-lisp`, "src" is the markup, other markups: ‘quote’, ‘example’, etc
        #+INCLUDE: "~/my-book/chapter2.org" :minlevel 1
        #+INCLUDE: "~/.emacs" :lines "5-10"   Include lines 5 to 10, 10 excluded
        #+INCLUDE: "~/.emacs" :lines "-10"    Include lines 1 to 10, 10 excluded
        #+INCLUDE: "~/.emacs" :lines "10-"    Include lines from 10 to EOF
    ```
    * `C-c '`, Visit the include file at point.    

5. [Index entries][gen-index]
    ```
        * Curriculum Vitae
        #+INDEX: CV
        #+INDEX: Application!CV
    ```

6. Macro replacement
    * Define a text snippet: `#+MACRO: name   replacement text $1, $2 are arguments`
    * then use `{{{name(arg1,arg2)}}}` to refer it  
    * `{{{title}}}`, `{{{author}}}` will refer to `#+TITLE: title`, `#+AUTHOR: author`
    * `{{{time(FORMAT)}}}`, `{{{modification-time(FORMAT)}}}`

7. Embedded LaTeX
    * Special symbols
        * `Angles are written as Greek letters \alpha, \beta and \gamma.`
        * `C-c C-x \`, Toggle display of entities as UTF-8 characters.
    * Subscripts and superscripts    
        * `The mass of the sun is M_sun = 1.989 x 10^30 kg. The radius of the sun is R_{sun} = 6.96 x 10^8 m.`
    * LaTeX fragments    
        * Not need any special snippet at all  
        ```
            \begin{equation}
            x=\sqrt{b}
            \end{equation}

            If $a^2=b$ and \( b=2 \), then the solution must be
            either $$ a=+\sqrt{2} $$ or \[ a=-\sqrt{2} \].
        ```   
        * `org-export-with-latex`     
        ```
            #+OPTIONS: tex:t          Do the right thing automatically (MathJax)
            #+OPTIONS: tex:nil        Do not process LaTeX fragments at all
            #+OPTIONS: tex:verbatim   Verbatim export, for jsMath or so
        ```
    * Previewing LaTeX fragments
        * `C-c C-x C-l`, (org-preview-latex-segment)
        * `C-c C-c`, Remove the overlay preview images.
        * Turn on/off preview
        ```
            #+STARTUP: latexpreview
            #+STARTUP: nolatexpreview
        ```
    * Using CDLaTeX to enter math 

8. Special blocks
    ```
        #+BEGIN_LATEX
        #+BEGIN_ABSTRACT
        #+BEGIN_VIDEO
    ```
    * Refer to back-end specific documentation for more information.




--------------------------------------------------------------------------------

### 12. Exporting

01. **The Export Dispatcher**: The main exporter interface
02. **Export back-ends**: Built-in export formats
03. **Export settings**: Generic export settings
04. **ASCII/Latin-1/UTF-8 export**: Exporting to flat files with encoding
05. **Beamer export**: Exporting as a Beamer presentation
06. **HTML export**: Exporting to HTML
07. **LaTeX and PDF export**: Exporting to LaTeX, and processing to PDF
08. **Markdown export**: Exporting to Markdown
09. **OpenDocument Text export**: Exporting to OpenDocument Text
10. **Org export**: Exporting to Org
11. **iCalendar export**: Exporting to iCalendar
12. **Other built-in back-ends**: Exporting to Texinfo or a man page
13. **Export in foreign buffers**: Author tables and lists in Org syntax
14. **Advanced configuration**: Fine-tuning the export output





--------------------------------------------------------------------------------

### 13. Publishing

01. **Configuration**: Defining projects
02. **Uploading files**: How to get files up on the server
03. **Sample configuration**: Example projects
04. **Triggering publication**: Publication commands




--------------------------------------------------------------------------------

### 14. Working with source code

01. **Structure of code blocks**: Code block syntax described
02. **Editing source code**: Language major-mode editing
03. **Exporting code blocks**: Export contents and/or results
04. **Extracting source code**: Create pure source code files
05. **Evaluating code blocks**: Place results of evaluation in the Org mode buffer
06. **Library of Babel**: Use and contribute to a library of useful code blocks
07. **Languages**: List of supported code block languages
08. **Header arguments**: Configure code block functionality
09. **Results of evaluation**: How evaluation results are handled
10. **Noweb reference syntax**: Literate programming in Org mode
11. **Key bindings and useful functions**: Work quickly with code blocks
12. **Batch execution**: Call functions from the command line




--------------------------------------------------------------------------------

### 15. Miscellaneous

01. **Completion**: M-TAB knows what you need
02. **Easy Templates**: Quick insertion of structural elements
03. **Speed keys**: Electric commands at the beginning of a headline
04. **Code evaluation security**: Org mode files evaluate inline code
05. **Customization**: Adapting Org to your taste
06. **In-buffer settings**: Overview of the #+KEYWORDS
07. **The very busy C-c C-c key**: When in doubt, press C-c C-c
08. **Clean view**: Getting rid of leading stars in the outline
09. **TTY keys**: Using Org on a tty
10. **Interaction**: Other Emacs packages
11. **org-crypt**: Encrypting Org files






--------------------------------------------------------------------------------

### 16. Appendix A Hacking

01. **Hooks**: How to reach into Org's internals
02. **Add-on packages**: Available extensions
03. **Adding hyperlink types**: New custom link types
04. **Adding export back-ends**: How to write new export back-ends
05. **Context-sensitive commands**: How to add functionality to such commands
06. **Tables in arbitrary syntax**: Orgtbl for LaTeX and other programs
07. **Dynamic blocks**: Automatically filled blocks
08. **Special agenda views**: Customized views
09. **Speeding up your agendas**: Tips on how to speed up your agendas
10. **Extracting agenda information**: Post-processing of agenda information
11. **Using the property API**: Writing programs that use entry properties
12. **Using the mapping API**: Mapping over all or selected entries



--------------------------------------------------------------------------------

### 17. GNU Free Documentation License



--------------------------------------------------------------------------------


[org-manual]: http://orgmode.org/org.html
[checkboxes]: src/org-todo-progress.png
[property-api]: http://orgmode.org/org.html#Using-the-property-API
[org-protocol]: http://orgmode.org/worg/org-contrib/org-protocol.html
[gen-index]: http://orgmode.org/org.html#Generating-an-index