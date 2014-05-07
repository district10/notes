Learning Org-Mode
=================

***The compact Org-mode Guide*** by Carsten Dominik
---------------------------------------------------

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

1. Preface

2. Installation

```
(setq load-path (cons "~/path/to/orgdir/lisp" load-path))
(setq load-path (cons "~/path/to/orgdir/contrib/lisp" load-path))
```

3. Activation

```
;; The following lines are always needed. Choose your own keys.
(add-to-list 'auto-mode-alist '("\\.org\\'" . org-mode)) ; not needed since Emacs 22.2
(add-hook 'org-mode-hook 'turn-on-font-lock) ; not needed when global-font-lock-mode is on
(global-set-key "\C-cl" 'org-store-link)
(global-set-key "\C-ca" 'org-agenda)
(global-set-key "\C-cb" 'org-iswitchb)
```


### 02. Document Structure 

1. Outlines: folding/hiding with command `org-cycle` 

2. Headlines (define the structure of an outline tree)

```
* Top level headline
** Second level
*** 3rd level
some text
*** 3rd level
more text
* Another top level headline
```

3. Visibility cycling

 - `TAB` to cycle current
 - `C-u TAB` to fold whole buffer
 - `C-u C-u C-u TAB` to show all
 - `#+STARTUP: content`, specify init state: content, overview, showall 

4. Structure editing
   - `org-insert-todo-heading`

 
 


### 03. Tables 
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


















