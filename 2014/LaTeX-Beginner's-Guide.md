Latex Beginner's Guide
======================

Create high-quality and professional-looking texts, articles, and books for business and science using LaTeX
------------------------------------------------------------------------------------------------------------




TOC
---



Chapter 1: Getting Started with LaTeX
Chapter 2: Formatting Words, Lines, and Paragraphs
Chapter 3: Designing Pages
Chapter 4: Creating Lists
Chapter 5: Creating Tables and Inserting Pictures
Chapter 6: Cross-Referencing
Chapter 7: Listing Content and References
Chapter 8: Typing Math Formulas
Chapter 9: Using Fonts
Chapter 10: Developing Large Documents
Chapter 11: Enhancing Your Documents Further
Chapter 12: Troubleshooting
Chapter 13: Using Online Resources
Appendix: Pop Quiz Answers
Index







---------

Chapter 1: Getting Started with LaTeX


- The virtues of open source
- Separation of form and content
- Portability
- The first latex file: example1.tex, compile it: `pdflatex example1.tex`


---

Chapter 2: Formatting Words, Lines, and Paragraphs

- Second Try:

```
\documentclass[a4paper,11pt]{article} % 11pt, base font size
\begin{document}
\title{My First Tex Demo}
\author{Gnat}
\date{Wednesday, May 07, 2014}
%\maketitle
\section{What's this?}
This is our second document. It contains a title and a section with text.
\end{document}
```

- Exploring the document structure
    - `\documentclass` ==> documentclass is called a `command`
    - preamble
    - `\begin{document}`, `\end{document}`, begin\end is called `environment`
    - `\maketitle`, `\section`

- Understanding LaTeX commands
    - `\command`
    - `\command{argument}`
    - `\command[optional arguments]{argument}`

- How LaTeX reads your input
    - LaTeX treats multiple spaces just like a single space
    - A blank line denotes a paragraph break. Like spaces, multiple empty lines are treated as one.
    - **Briefly said, spaces separate words, empty lines separate paragraphs.**

- Special characters
    - `\%`, `\#`, `\_`, `\{`, `\}`, etc

- Formatting text – fonts, shapes, and styles
    - `\emph{emphasized}`
    - `\textit{italic}`
    - `\textbf{boldface}`
    - `\textsl{slanted}`
    - `\textsc{Small Caps}`
    - `\textit{\textbf{nested}}`
    - `\emph{See how \emph{emphasizing} looks when nested.}` 
    - ![][tex-emphasized]

```
\section{\textsf{\LaTeX\ resources in the internet}} % use sans sarif font
The best place for downloading LaTeX related software is CTAN.
Its address is \texttt{http://www.ctan.org}.
```
- `\textrm`, Roman text
- **monospaced** or a **typewriter** font

- Switching the font family
    - code
```
\section{\sffamily\LaTeX\ resources in the internet}
The best place for downloading LaTeX related software is CTAN.
Its address is \ttfamily http://www.ctan.org\rmfamily.
```
    - `\sffamily`, sans serif
    - `\ttfamily`, typewriter font
    - `\rmfamily`, roman font family
  

- Summarizing font commands and declarations

![][tex-fonts]
- 

![][tex-fonts]


- Delimiting the effect of commands
    - exploring grouping by braces

```
{\sffamily
Text can be {\em emphasized}.
Besides being {\itshape italic} words could be {\bfseries bold},
{\slshape slanted} or typeset in {\scshape Small Caps}.
Such commands can be {\itshape\bfseries nested}.}
{\em See how {\em emphasizing} looks when nested.}
```
    - exploring font sizes

```
\noindent\tiny We \scriptsize start \footnotesize \small small,
\normalsize get \large big \Large and \LARGE bigger,
\huge huge and \Huge gigantic!
```

![][tex-fontsize]



- Using environments

```
\begin{huge}
\bfseries
Another small example (with bigskip)
\end{huge}
\bigskip
This is just another small illustrative example.
```






Chapter 3: Designing Pages
Chapter 4: Creating Lists
Chapter 5: Creating Tables and Inserting Pictures
Chapter 6: Cross-Referencing
Chapter 7: Listing Content and References
Chapter 8: Typing Math Formulas
Chapter 9: Using Fonts
Chapter 10: Developing Large Documents
Chapter 11: Enhancing Your Documents Further
Chapter 12: Troubleshooting
Chapter 13: Using Online Resources
Appendix: Pop Quiz Answers
Index



[tex-emphasized]: src/tex-emphasized.png
[tex-fonts]: src/tex-fonts.png
[tex-fontsize]: src/tex-fontsize.png