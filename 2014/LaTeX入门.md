LaTeX 入门
==========

### 初识 LaTeX

TODO：LaTeX 的意义，用途，安装

**编译 tex 文档**

```bash
xelatex gougu.tex % 初次编译
bibtex gougu.aux % 生成引用
xelatex gougu.tex % 再次编译，添加引用
```

**一些 tex 源码示例**

```tex
\maketitle % 生成 title
\tableofcontents % 生成 TOC（需要至少编译两次）
\usepackage{graphicx} % 使用宏包
\includegraphics[width=3cm]{input.pdf} % 还可使用其他图片格式：.png, .jpg, .eps 等
\hline % horizontal line （用于表格）

% 环境
\begin{figure}[ht] % Here Top（图片浮动的位置设定）
  \centering
  \includegraphics[scale=0.6]{xiantu.pdf} \caption{这是图片的说明。} % xiantu.pdf 是图片，还可使用其他格式
  \label{fig:xiantu} % label 用于文中的说明引用
\end{figure}
```


### 一些宏包的说明

* fontenc % font encoding
* fontspec
* ccfonts % concrete


**用英文字符指定希腊字符

```tex
\usepackage[greek,english]{babel}
\greektext{abcde}
```

TODO：fontenc，inputenc


```tex
Q\@.E\@.D\@. 即“证明完毕”。 % \@. （防止缩写字母中的 period 被认为是句子结尾 fullstop）

\CJKsetecglue{} % set e(nglish) c(hinese) glue to "no glue"

\phantom{嗯} % 占位，但是不显示内容
\vphantom % 类似 \phantom
\hphantom % 类似 \phantom

\\ % linebreak, 也可使用 `\linebreak`
\par

{\You {\emph should} emphasis it.}
\textit{
You {\emph should} emphasis it.}
\newcommand\Emph{\textbf}
\underline % make text appeared with an underline

\S
\dag
\ddag % double dagger
\texttrademark % 不带 text 是文本模式和数学模式通用的

% symbol
\symbol{'\$} % WYSIWYG
\symbol{'Z}
\symbol{"6a} % #hex（16 进制）
\symbol{'07} % #oct（8 进制）

% font family
\textrm{text in Roman Family} \rmfamily
\textsf{text in Sans Serif font Family} \sffamily
\texttt{text in Typewritter font family} \ttfamily % t(ypewritter) t(ext)
% font shape
\textup{text in Upright shape} \upshape
\textit{text in Italic shape} \itshape
\textsl{text in Slanted shape} \slshape
\textsc{text in Small Capital} \scshape % small caption
% font series
\textmd{median text} \mdseries
\textbf{bold face} \bfseries
% default setup
\rmfamily\mdseries\upshape

% CJK font family
{\CJKfamily{hei}这是黑体}
{\CJKfamily{kai}这是楷书}
{\CJKfamily{song}这是宋体}
{\CJKfamily{fs}这是仿宋}

{\songti 宋体}
{\heiti 黑体}
{\fangsong 仿宋}
{\kaishu 楷书}
```

**关于字体**

* New Font Selection Scheme (NFSS)
* 字体编码
    1. OT1
	2. T1
	3. OML
	4. OMS
	5. OMX
	6. U
	7. etc.
* 字体族
    1. cmr
	2. cmss
	3. cmtt
	4. cmm
	5. cmsy
	6. cmex
* 字体系列
    1. m
	2. b
	3. bx
	4. sb
	5. c
* 字体形状
    1. n
	2. it
	3. sl
	4. sc

	
	
**Set Font**

```tex
% Set font --- method 1
\fontencoding{OT1}\fontfamily{pzc}\fontseries{mb}\fontshape{it}\fontsize{14}{17} % size, line
\selectfont % 使其生效
So far so good
% Set font --- method 2
\usefont{T1}{pbk}{db}{n} % 编码，族，系列，形状
Not too bad
```

**txfonts**

```tex
\documentclass{article}
\usepackage{txfonts} % free, excellent
\begin{document}
\end{document}
```

**fontspec**

```tex
% \setmainfont[<optional>]{<font-name>}
% setmainfont, setsansfont, setmonofont
\usepackage{fontspec}
\setmainfont{Times New Roman}
\setsansfont{Verdana}
\setmonofont{Courier New}
```


**fonts**

* Type 1
* TrueType
* OpenType

```tex
% size of font
\tiny
\scriptsize
\footnotesize
\small
\large
\Large
\LARGE
\huge
\Huge
% chinese font size
\zihao{0} % 初号
\zihao{-0} % 小初号
\zihao{5} % 五号 (c5size)
\zihao{-5} % 小五号 (cs5size)
% default font size
\normalfont % 10pt, or c5size(CTeX)
% line
\linespread{<因子>} % 基本行距的倍数
\setstretch % spacing
\singlespacing
\onehalfspacing
\doublespacing
```

**Dimensions**

* `pt` point
* `pc` pica (12 pt)
* `in` inch (72.27 pt, 72 bp)
* `bp` big point
* `cm` centimeter (2.54 cm = 1 in)
* `mm` millimeter
* `dd` didot point
* `cc` cicero
* `sp` scaled point (65536 sp = 1 pt)
* `em` M 的宽度（等于 `\quad`）
* `ex` x 的高度
* `en`


**Spaces**

```tex
% 不可换行的水平间距
\thinspace \, % for numbers: 1\,234\,567\,890
\negthinspace \!
\enspace % 0.5 em
\nobreakable ~ % tie, for names: Donald~E. Knuth

% 可以换行的水平间距
\quad % 1 em
\qquad % 2 em
\enskip % 0.5 em
\  % 空格
% hspace
\hspace{2em} % Space\hspace{1cm}1\,cm, 
\hspace*{1cm}Text
\hspace{2em plus 1em minus 0.25 em}
left\hspace{\fill}middle\hfill right % align to left, middle, right
left\hspace{\stretch{2}}middle\hspace{\fill}right

\hrulefill % 下划线
\dotfill % 点
% length
\setlength{\parindent}{8em}
\addtolength{\parindent}{2em}
\newlength\mylen % new a length
```

**Boxs**

```tex
% mbox makebox
\mbox{cannot be broken}
\makebox[1em]{\textbullet}text
\makebox[5cm][s]{some text} % 宽度，位置（clrs: center, left, right, stretched）
\makebox[0pt][l]{abc}xyz % overlap
abc\llap{xyz} % llap（更高层的表达方式）
\rlap{abc}xyz % rlap
% fbox framebox
\fbox % \setlength{\fboxsep}{2pt}, \framebox % 比 \fbox 强，可自定义
\fboxrule{0.4pt} (default)
% sbox savebox
\sbox \savebox
\newsavebox{\mybox}
\sbox{\mybox}{a box made by me}
\usebox{\mybox}
% set box param
\settowidth{10pt}{content}
\settoheight{10pt}{content}
\settodepth{10pt}{content}
% get box param
\wd{\fbox}
\ht{\mbox}
\dp{\mybox}
\framebox[2\width]{文字宽度两倍的宽} % width, height, depth, totalheight
```

**Alignment**

```tex
\indent % generate an indent (\parindent)
% 段落
\parskip % 0pt plus 1pt
\setlength{\parskip}{0pt}
\raggedright % 右侧不对齐
\raggedleft
\centering

\begin{center} % or `flushright`, `flushleft`
居中
\end{center}
```

**MISC**

```tex
% hyphenation 放到导言区
\hyphenation{man-u-script com-pu-ter gym-na-sium}

% Lettrine 首字母超大多行效果
\usepackage{lettrine}
\lettrine{S}{tay} hungry, stay foolish

% shapepar
\usepackage{shapepar}
\heartpar{这一段文字会变成心形} 

% syntonly
\usepackage{syntonly} % syntax only
\syntaxonly
```


```tex
% quote
\begin{quote}
  quot
\end{quote}
% quotation 段首缩进
\begin{quotation}
  Better for multiparagraph quotation
\end{quotation}
% verse
\begin{verse}
  For Poetry
\end{verse}
% abstract
\begin{abstract} % article, report
  Abstract goes here % \abstractname 摘要名称
  % \CTEXoptions[abstractname={摘\quad 要}]
\end{abstract}
```

**Lists**

```tex
% enumerate
\begin{enumerate} % numbered
  \item one
  \item two
\end{enumerate}

\begin{enumerate}
  \item 中文
  \item[1a.] 汉语 % set "bullet" by hand
\end{enumerate}

% itemize
\begin{itemize} % bullet
  \item not one
  \item not two
\end{itemize}

% description
\begin{description} %
  \item[\tau] Greek alphabet \tau
\end{description}

% 手动设置
% counter
\item This is number\theenumi % enumi, enumii, enumiii, enumiv
\arabic{enumi}
\alph{enumi}
\roman{enumi}
\Alph{enumi}

% reset
\renewcommand\theenumi{\roman{enumi}}
\renewcommand\labelenumi{\theenumi}

% 页码也是一个 counter
\thepage % current page number

% define your own counter
\newcounter{mycnt}
\setcounter{mycnt}{0}
\renewcommand\themycnt{\arabic{mycnt}}
\stepcounter{mycnt}\themycnt
\addtocounter{mycnt}{-1}

% amsmath
\usepackage{amsmath}
\numberwithin{equation}{section}

% 定制列表环境
% general list
\begin{list} % \list{标签}{设置命令}
\item
\end{list}

\newcounter{mylist}
\begin{list}{\#\themylist}{\usecounter{mylist}}
  \item 中文
  \item English
\end{list}

% 或者使用 enumitem 包
\usepackage{enumitem}
\begin{enumerate}[itemsep=0pt,parset=0pt,label=(\arabic*)] % set up
  \item 中文
  \item English
\end{enumerate}
```

**Theorem**

```tex
\usepackage{theorem}
% theorem
\newtheorm{thm}{定理} % “定理” 是定理标题
\begin{thm}
  一个定理
\end{thm}
\begin{thm}[勾股定理]
  一个有名字的定理
\end{thm}
% lemma
\newtheorm{lemma}{引理}[chapter] % 按章
\begin{lemma}
   ...
\end{lemma}
% proposition
\newtheorm{prop}[thm]{命题} % thm 是编号的方式
\begin{prop}
  ...
\end{prop}

% 设置 theorem 格式
\usepackage{theorem}
\theoremstyle{changebreak}
\theoremheaderfont{\sffamily\bfseries}
\theorembodyfont{\normalfont}
\newtheorem{definition}{定义}[chapter]
\theoremstyle

% 或者更强大的 `ntheorem` 宏包，或者 `amsthm`
\usepackage{amsthm}
\renewcommand\proofname{证明}
\renewcommand\qedsymbol{\ensuremath{\Box}} % 证明完毕（Q.E.D）
```

**Verbatim**

```tex
% verbatim：\ver<符号><抄录内容><符号>
\verb"\LaTeX"
\verb!\LaTeX!
\verb*!1 2  3   4! % *（显示空格）

% 使用环境
\begin{verbatim}
  #!usr/bin/env perl
  ...
\end{verbatim}
\begin{verbatim*}
   ...
\end{verbatim*}

% 使用宏包
\usepackage{fancyvrb}
\SaveVerb{myverb}|shit[({=-+[/})|
\fbox{套中 \UseVerb{myverb}}

% 程序高亮
\usepackage{listings}
\begin{lstlisting}[language=C]
  ...
\end{lstlisting}
\lstset{ % 整体设置
  column=flexible % 等于 lstset{flexiblecolumns}
  commentstyle=\rmfamily\itshape}
```

**tabbing**

```tex
\begin{tabbing}
  格式\hspace{3em} \= 作者 \kill % be killed，这一行不会显示
  Plain \TeX \> 高德纳 \\ % \\ 以换行
  \LaTeX \> Leslie Lamport % 最后一行不用换行
\end{tabbing}
```

**footnote**

```tex
\footnote{This is a footnote}
\footnote[1]{This is another footnote} % 脚注符号是 thefootnote

\begin{minipage}{8em} % 对应地，是 thempfootnote
  这是一个小页环境\footnote{脚注。}中的脚注
\end{minipage}

\renewcommand\thefootnote{\fnsymbol{footnote}}
\renewcommand\thefootnote{\textcircled{\arabic{footnote}}}

% 更好的方法
\usepackage{pifont}
\renewcommand\thefootnote{\ding{\numexpr171+\value{footnote}}} % 阳文带圈数字从 171 开始

% footnotemark footnotetext
\begin{tabular}{r|r} % right-align, right-align
  自变量 & 因变量\footnotemark \\ \hline % 添加脚注标记
  $x$ & $y$ 
\end{tabular}
\footnotetext{$y=x^2$。} % 添加脚注内容

% 边注 \marginpar
有边注的文字\marginpar[\hfill 左 $\rightarrow$]{\leftarrow 右}
\reversemarginpar
\normalmarginpar
\marginparwidth % 宽度
\marginparsep % 间隔，用 setlength 设置
```

**space**

```tex
\vspace{<长度>}
\vfill % 即 \vspace{\fill}
% skip
\smallskip % smallskipmount
\medskip % medskipmount
\bigskip % bigskipmount
% bottom
\raggedbottom
\flushbottom

\parbox[<位置>][<高度>][<内容位置>]{<Width>}{<Content>}
前沿\parbox{2em}{不搭后语}。 % 一个有趣的例子
\parbox[t]{2em}{Content} % top bounded
\parbox[b]{2em}{Content} % bottom bounded
\parbox[c]{2em}{Content} % center aligened
\parbox[s]{2em}{Content} % stretched
```

![前言不搭后语][001]

```tex
% rule
\rule[<升高距离>]{<Width>}{<Height}
\rule{1pt}{1em}Middle\rule{1p}
\rule[-0.1em]{1em}{1em} 可用作 Q.E.D.
% struct
\fbox{\strut---}\qquad
```

**title page**

```tex
\title{杂谈勾股定理\thanks{感谢某某对本文的大力支持}} % 生成特殊的感谢脚注
\author{张三在左\\三明堂 \and 李四在右\\四合院}
\data\today % 可以省略
```

% 设置格式

![CTEXOptions][002]

| 层次 | 名称 | 命令 | 说明 |
| :---: | :---: | :---: | :---: |
| -1 | part | `\part` | 可选的最高层 |
| 0 | chapter | `\chapter` | report, book 的最高层 |
| 1 | section | `\section` | article 的最高层 |
| 2 | subsection | `\subsection` | |
| 3 | subsubsubsection | `\subsubsubsection` | report, book |
| 4 | paragraph | `\paragraph` | 不编号，不生成目录 |
| 5 | subparagraph | `\subparagraph` 不编号，不生成目录 |

```tex
% 全书
\frontmatter % 书的前段
\mainmatter % 书的正文，页码重新计数
\backmatter % 书的后段，不编号

\clearpage
\include{lang-natural} % 引入 lang-natural.tex 文档
\include{a-complex-table}
\includeonly{lang-natural} % 可以在 preamble 设置只引入某一章
```

**一个例子**

```tex
% main.tex
\documentclass{ctexart}
\input{preamble} % 复杂的导言区
\begin{document}
  ...
\end{document}
```

```tex
% a-complex-table.tex
...
\endinput % 停止导出
这是一个复杂的表格，最好从 main.tex 中分离出来。
请直接编译主文档：
  xelatex main.tex
```

**设置 CTeX**

```tex
% \CTEXsetup[<key>=<value>,etc.]{<对象类型>}
% 对象类型：part, chapter, section, subsection, subsubsection, paragraph, subparagraph
\CTEXsetup[name={第，节}]{section} % 变成 “第 1 节” 这样
\CTEXsetup[number={\chinese{section}}]{section} % 变成 “第一节” 这样
\CTEXsetup[format={\raggedright\bfseries}]{section}
% nameformat
% numberformat
% titleformat
% aftername，章节名与后面标题间的内容
\CEXsetup[aftername={\\vspace{2em}}]{part}
% beforeskip, afterskip 前后的 skip 距离
% indent 章节标题的缩进长度

% 增加格式
\CTEXsetup[titleformat+={\fansong}]{subsection} % 思考 “=” 与 “+=” 的区别
```

```tex
\documentclass[a4paper,titlepage]{article} % 标题单独成页
% a4paper, a5paper, b5paper, letterpaper, leagalpaper, executivepaper
% landscape 横向纸张
% oneside, twoside
% 10pt, 11pt, 12pt
% onecolumn, twocolumn
% titlepage, notitlepage
% openany, openright（每章从奇数页开始）
% leqno 公式左边编号
% fleqn 公式左对齐，固定长度（默认居中）
% draft 编译出的 pdf 有提示
% final （默认值）
% openbib
```


### CTEXart, CTEXrep, CTEXbook

`article`, `report`, `book` *vs.* **`ctexart`**, **`ctexrep`**, **`ctexbook`** % ctex.sty, ctexcap.sty

**ctexcap.sty**

```tex
\documentclass{ltxdoc}
\usepackage{ctexcap}
\zihao{5}
\begin{document}
  ...
\end{document}
```

**ctex.sty**

```tex
\documentclass{moderncv} % 简历
\usepackage{ctex}
\zihao{-4}
\begin{document}
  ...
\end{document}
```

**About UTF-8**

```tex
\XeTeXinputencoding "GBK" % XeTeX 处理非 UTF-8 编码文档
% ctexutf8, ctexcaputf8 % 类似 documentclass[UTF-8]{ctexart} 之类
% ctexartutf8, ctexreputf8, ctexbookutf8
```

**Geometry**

```tex
\paperwidth \hoffset
\paperheight \voffset
\topmargin
\headhight \headsep
\textheight \textwidth
\marginparsep % 边注的 sep
\marginparwidth
\footskip % 为什么不是 footsep？因为最后一行是变化的，而 footnote 跟在紧跟当页最后一行，用一个 skip 来分隔

% Set geometry method 1
\usepackage[a4paper,left=3cm,right=3cm]{geometry}

% Set geometry method 2
\usepackage{geometry}
\geometry{a4paper,left=3cm,right=3cm} % 右边距
```

![设置Geometry][003]

**Page Style**

```tex
\pagenumbering{roman}

% Page style:
%            empty：无 head，footnote
%            plain：无 head，footnote 为居中页码
%            headings：无 footnote，head 是章节名
%            myheadings：没有 footnote，head 是页数和自定义内容

\pagestyle{<风格>} % 设置整体
\thispagestyle{<风格>} % 设置本页

\documentclass{article}
\pagetsyle{headings}

% 大幅图片，当前页使用 plain 风格
\begin{figure}[p]
  \thispagestyle{plain}
  ...
\end{figure}
```

![页面风格][004]

**fancyhdr**

![Fancyhdr][005]

```tex
\lhead{<contents>} \chead{<c>} \rhead{<c>}
\lfoot{<contents>} \cfoot{<c>} \rfoot{<c>}
\fancyhead[<位置>]{<c>} % E/O + L/C/R, even/odd page number
\fancyfoot[<位置>]{<c>} % E/O + L/C/R, left/center,right
\fancyhf[<位置>]{<c>} % H/F + E/O + L/C/R

% Example:
\documentclass[twoside]{ctexrep}
\usepackage{fancyhdr}
\pagestyle{fancy}
\cfoot{\thepage}
\fancyhead[CO]{张三}
\fancyhead[CE]{论语言}
\fancyfoot[RO,LE]{$\heartsuit$}

% \leftmark \rightmark 通常就是“章”“节”名
\fancyhead[LE,RO]{\slshape \rightmark}
\fancyhead[LO,RE]{\slshape \leftmark}
\fancyfoot[C]{\thepage}

% 重新定义风格
\renewcommand\headrulewidth{0.6pt} % default: 0.4pt
\renewcommand\footrulewidth{0.6pt} % default: 0.4pt

\fancypagestyle{plain}{%
  \fancyhf{}
  \cfoot{--\textit{\thepage}--} % 页码形状
  \renewcommand\headrulewidth{0pt}
  \renewcommand\footrulewidth{0pt}
}

% columns
\documentclass[twocolumn]{article}
%    \onecolumn
%    \twocolumn
```

**Macro**

1. command
    ```tex
	\boldface{boldfaced text}
	```
2. environment
    ```tex
	\begin{tabular}
	  ...
	\end{tabular}
	```

```tex
% \newcommand<命令>[<参数个数>][<首个参数默认值>]{具体定义}
\newcommand\PRC{People's Republic of \emph{China}}
\newcommand\drives[2]{#1 drives #2} % \loves{Driver}{car} === driver drives car
\newcommand\does[3][drives]{#2 #1 #3} % \does{driver}{car} ===> driver drives car, \does{like}{I}{fish} ===> I like fish

% renewcommand 和 呢我command类似，但是用于重定义
\renewcommand\abstractname{内容简介}

% providecommand 提供一个简单版本，有别的版本，此版本就被替代
\providecommand\url[1]{\texttt{#1}} % 一个简单的 URL 实现，只是怕没有这个命令（但是料想应该有，所以只提供一个“简陋”的实现）

% 或者两者组合出现
\providecommand \renewcommand % 不管之前是否有定义，都定义一个新 command
```

A complex example

```tex
\newcommand\Emph[1]{\emph{#1}}
\newcommand\setEmph[1]{%
  \renewcommand\setEmph[1]{%
    #1{##1}}}
```

TODO：这部分自己实践一下

```tex
% command vs. environment
{\quote ... \endquote}
\begin{quote}
  ...
\end{quote}

\newenvironment{<环境名>}[<参数个数>][<首参数默认值>]{环境前定义}{<环境后定义>}
\renewenvironment{<环境名>}[<参数个数>][<首参数默认值>]{环境前定义}{<环境后定义>}

\newenvironment{myabstract}[1][摘要] %
  {\small
    \begin{center}\bfseries #1\end{center} 
	\begin{quotation}} % 环境前定义
  {\end{quotation}} % 环境后定义（这里不能使用环境参数）
```

刘海洋的一段总结：

> 定义命令和环境是进行 LaTeX 格式定制、打成内容与格式分离目标的利器。使用自定义的命令和环境把字体、字号、缩进、对齐、间距等各种琐细的内容包装起来，赋以一个有意义的名字，可以使文档结构清晰、代码整洁、易于维护。在使用宏定义的功能时，要综合利用各种已有的命令、环境、变量等功能，事实上，前面所介绍的长度变量与盒子，字体字号等内容，大多**并不直接出现在正文中**，而主要用在实现各种结构画得宏定义里。


### 自动化工具

```tex
\tableofcontents % 至少编译两次才出现目录
\listoffigures
\listoftables
```

![Table-of-Contents][006]










[001]: 001.png
[002]: 002.png
[003]: 003.png
[004]: 004.png
[005]: 005.png
[006]: 006.png
[007]: 007.png
[008]: 008.png
[009]: 009.png
[010]: 010.png
[011]: 011.png
[012]: 012.png
[013]: 013.png