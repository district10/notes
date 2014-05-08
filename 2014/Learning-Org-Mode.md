Learning Org-Mode
=================

***The Org Manual*** by Carsten Dominik
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




---

### 01. A Introduction

1. Org is a toolbox and can be used in different ways and for different ends, for example:
    - an outline extension with visibility cycling and structure editing
    - an ASCII system and table editor for taking structured notes
    - a TODO list editor
    - a full agenda and planner with deadlines and work scheduling
    - an environment in which to implement David Allenfls GTD system
    - a simple hypertext system, with HTML and L TEX export
    - a publishing tool to create a set of interlinked web pages
    - **an environment for literate programming**


---

### 02. Document Structure

1. Outlines

2. Headlines

3. Visibility cycling
    * **FOLDED** -> **CHILDREN** -> **SUBTREE**
        * `<Tab>`                =>        `org-cycle`
        * `S-<TAB>`              =>        `org-global-cycle`
    * **OVERVIEW** -> **CONTENTS** -> **SHOW ALL**
        * `C-u <TAB>`            =>        `` (OVERVIEW)
        * `C-u C-u <TAB>`        =>        `org-set-startup-visibility`
        * `C-u C-u C-u <TAB>`    =>        `show-all` (show all, including drawers)
        * `C-c C-r`              =>        `org-reveal`
        * `C-c C-k`              =>        `show-branches`
        * `C-c C-x b`            =>        `org-tree-to-indirect-buffer`
        * `C-c C-x v`            =>        `org-copy-visible`
    * Initial visibility
        * #+STARTUP: overview/content/showall/showeverything
    * Catching invisible edits
        * Set `org-catch-invisible-edits` to `non-nil`

4. Motion
     * `C-c C-n`     `outline-next-visible-heading`
     * `C-c C-p`     `outline-previous-visible-heading`
     * `C-c C-f`     `org-forward-same-level`
     * `C-c C-b`     `org-backward-same-level`
     * `C-c C-u`     `outline-up-heading`
     * `C-c C-j`     `org-goto`

5. Structure editing
    * `M-<RET>`      `org-insert-heading`
    * `C-<RET>`      `org-insert-heading-respect-content` (seems better, not truncate current line)
    * `M-S-<RET>`    `org-insert-todo-heading`
    * `C-S-<RET>`    `org-insert-todo-heading-respect-content` (seems better)
    * `M-<left>`     `org-do-promote`
    * `M-<right>`    `org-do-demote`
    * `M-S-<left>`   `org-promote-subtree`
    * `M-S-<right>`  `org-demote-subtree`
    * `M-S-<up>`     `org-move-subtree-up`
    * `M-S-<down>`   `org-move-subtree-down`
    * `M-h`          `org-mark-element`
    * `C-c @`        `org-mark-subtree`
    * `C-c C-x C-w`  `org-cut-subtree`
    * `C-c C-x M-w`  `org-copy-subtree`
    * `C-c C-x C-y`  `org-paste-subtree`
    * `C-y`          `org-yank`  `A good way to force a normal yank is C-u C-y`
    * `C-c C-x c`    `org-clone-subtree-with-time-shift`
    * `C-c C-w`     `org-refile`
    * `C-c ^`       `org-sort`    Narrow buffer
    * `C-x n s`     `org-narrow-to-subtree`
    * `C-x n b`     `org-narrow-to-block`
    * `C-x n w`     `widen`
    * `C-c *`       `org-toggle-heading`

6. Sparse trees
    * `C-c /`                   `org-sparse-tree`
    * `C-c / r`                 `org-occur`
    * `M-g n` or `M-g M-n`      `next-error`
    * `M-g p` or `M-g M-p`      `previous-error`

7. Plain lists
    * `org-list-demote-modify-bullet`
    * `org-list-indent-offset`

8. Drawers
    * `C-c C-x d`     org-insert-drawer
    * `C-c C-z`       org-add-note

9. Blocks
    * Org mode uses begin...end blocks for various purposes from including source code examples 

10. Footnotes
    * [1]
    * [fn:name]
    * [fn:: This is the inline definition of this footnote]
    * [fn:name: a definition]
    * `org-footnote-auto-label`, `org-footnote-auto-adjust`
    * `C-c C-x f`   `org-footnote-action`  
    * `C-c C-o` or `mouse-1/2`

11. The Orgstruct minor mode
    * Add Hook
```
(add-hook 'message-mode-hook 'turn-on-orgstruct)
(add-hook 'message-mode-hook 'turn-on-orgstruct++)
```

12. Org syntax
    * To explore the abstract structure of an Org buffer, run this in a buffer: `M-: (org-element-parse-buffer) RET`

---

### 03. Tables

1. The built-in table editor
    1. Example
```
     | Name  | Phone | Age |
     |-------+-------+-----|
     | Peter |  1234 |  17 |
     | Anna  |  4321 |  25 |
```
    2. Keys
        * `<RET>`, add line
        * `<TAB>`, align
        * `C-c RET`, add horizontal spliter, like  `| one | two`, then `C-c RET`
    3. **Creation and conversion**: `C-c |`, `org-table-create-or-convert-from-region`  
        * `C-u` forces CSV
        * `C-u C-u` forces TAB     
            * a numeric argument N indicates that at least N consecutive spaces, or alternatively a TAB will be the separator
    4. Re-aligning and field motion
        * `C-c C-c`     `org-table-align`
        * `<TAB>`       `org-table-next-field`
        * `S-<TAB>`     `org-table-previous-field`
        * `<RET>`       `org-table-next-row`
        * `M-a`         `org-table-beginning-of-field`
        * `M-e`         `org-table-end-of-field`
    5. Column and row editing
        * `M-<left>`          `org-table-move-column-left`
        * `M-<right>`         `org-table-move-column-right`
        * `M-S-<left>`        `org-table-delete-column`
        * `M-S-<right>`       `org-table-insert-column`
        * `M-<up>`            `org-table-move-row-up`
        * `M-<down>`          `org-table-move-row-down`
        * `M-S-<up>`          `org-table-kill-row`
        * `M-S-<down>`        `org-table-insert-row`
        * `C-c -`             `org-table-insert-hline`, pretty like `C-c RET`
        * `C-c <RET>`         `org-table-hline-and-move`
        * `C-c ^`             `org-table-sort-lines`
    6. Regions
        * `C-c C-x M-w`           `org-table-copy-region`
        * `C-c C-x C->`           `org-table-cut-region`
        * `C-c C-x C->`           `org-table-paste-rectangle`
        * `M-<RET>`               `org-table-wrap-region`
    7. Calculations
        * `C-c +`              `org-table-sum`
        * `S-<RET>`            `org-table-copy-down`   org-table-copy-increment
    
    8. Miscellaneous
        * `C-c `                `org-table-edit-field`
        * `M-x org-table-import RET`, Import a file as a table
        * `C-c |`               `org-table-create-or-convert-from-region`
        * `M-x org-table-export RET`
        * Disable it: `(setq org-enable-table-editor nil)`







### 04. Hyperlinks
### 05. TODO Items
### 06. Tags
### 07. Properties
### 08. Dates and Times
### 09. Capture ### Refile ### Archive
### 10. Agenda Views
### 11. Markup for rich export
### 12. Exporting
### 13. Publishing
### 14. Working with source code
### 15. Miscellaneous
### 16. GNU Free Documentation License



