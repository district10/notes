## 历史笔记 4

原载于 <https://github.com/district10/blog/blob/master/_pages/notes.md>。

---

<div class="tzx-drawer" shy>
[vim/vimrc at master · vingel/vim](https://github.com/vingel/vim/blob/master/vimrc)

:   ```vimrc

    " set runtimepath=~/vim,$VIMRUNTIME
    " source ~/vim/vimrc

    " Enable filetype plugin
    filetype plugin indent on
    " autoindent, ai
    " copyindent, ci

    " Set mapleader
    let mapleader = ","
    let g:mapleader = ","

    " Set 7 lines to the curors - when moving vertical..
    set so=7

    " Turn on WiLd menu
    set wildmenu
    set wildmode=longest,full
    set wildignore=*.bak,*.o,*.obj,*.e,*~,*.pyc,*.svn

    set ruler
    set showmatch
    set showfulltag
    set matchpairs=(:),{:},[:],<:>,“:”,《:》,‘:’,【:】
    set matchtime=5 " Show matchtime in 0.5s

    " The commandbar is 2 high
    set cmdheight=2
    " Show line number
    set number
    " Line space between
    set linespace=4
    " Do not redraw, when running macros.. lazyredraw
    "set lazyredraw
    " Change buffer - without saving
    set hidden
    " Set backspace
    set backspace=start,indent,eol " Bbackspace and cursor keys wrap to next line
    set whichwrap+=<,>,h,l,b,s,[,]

    "Ignore case when searching
    set ignorecase smartcase
    set incsearch
    " Set magic on
    set magic
    " No sound on errors.
    set noerrorbells
    set novisualbell
    set t_vb=
    set mat=2 " How many tenths of a second to blink

    set showcmd
    set autochdir
    set title
    let &titleold=getcwd()
    set viminfo+=! " make sure it can save viminfo

    set autowrite  " auto writefile when sth happened such as :make or :last or others.See the help
    set makeef=error.log " When using make, where should it dump the file

    " Folding settings
    set nofoldenable        "dont fold by default
    set foldmarker={,}
    set foldopen=block,hor,mark,percent,quickfix,tag
    set foldmethod=indent   "fold based on indent
    set foldnestmax=10      "deepest fold is 10 levels
    set foldlevel=1         "this is just what i use
    map <leader>f1 :set fdm=manual<cr>
    map <leader>f2 :set fdm=indent<cr>
    map <leader>f3 :set fdm=marker<cr>

    " Text options
    set lbr
    set tw=500
    set isfname-=\= " fix filename completion in VAR=/path

    set shortmess=atI " Don't display start text :help iccf

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " => Shortcuts Mapping
    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " Select All
    map <leader>a ggVG
    " Switch to current dir, see also :set autochdir
    map <leader>cd :cd %:p:h<cr> :set tags=./tags <cr>
    " Temp text buffer
    map <leader>e :e ~/.buffer<cr>
    " Remove the Windows ^M
    map <leader>M :%s/\r//g<cr>
    " Fast Quit
    map <leader>q :q<cr>
    " Fast reloading of the .vimrc
    map <leader>es :e $VIMRC<cr>
    " 自动载入VIM配置文件
    "autocmd! bufwritepost vimrc source $MYVIMRC
    "

    " Undolist
    map <leader>u :undolist<cr>
    inoremap <C-z> <C-O>u " Undo in insert mode
    if version >= 703
        " Turn undofile on
        set undofile
        " Set undofile path
        set undodir=~/tmp/vim/
    endif

    " 关闭VIM的时候保存会话，按F6读取会话
    set sessionoptions=buffers,sesdir,help,tabpages,winsize
    let $VIMSESSION = '~/.session.vim'
    au VimLeave * mks! $VIMSESSION
    nmap <F6> :so $VIMSESSION<CR>

    " Fast saving
    map <leader>w :w!<cr>
    map <c-s> <Esc>:w !sudo tee %
    " Copypath
    map <leader>file :echo expand("%:p")<cr>

    " Mapping Q to exit instead of Ex mode
    map Q :x<cr>
    nmap :Q :q
    nmap :W :w
    nmap :X :x

    " Bash like
    imap <C-A> <Home>
    imap <C-B> <Left>
    imap <C-E> <End>
    imap <C-F> <Right>
    imap <C-K> <Esc>d$i

    " Command-line
    cnoremap <C-A> <Home>
    cnoremap <C-B> <Left>
    cnoremap <C-E> <End>
    cnoremap <C-F> <Right>

    " Key mappings to ease browsing long lines
    "noremap <C-J> gj
    "noremap <C-K> gk

    " Usefull when insert a new indent line
    "imap fj <cr><C-O>O
    " Remove tag content see :help object-select
    "imap jf <C-O>cit

    " Switch windows
    nmap <Tab> <C-w>w

    " Cursor moving in long line
    nmap j gj
    nmap k gk

    " Move lines (Eclipse like)
    nmap <C-Down> :<C-u>move .+1<cr>
    nmap <C-Up> :<C-u>move .-2<cr>
    imap <C-Down> <C-o>:<C-u>move .+1<cr>
    imap <C-Up> <C-o>:<C-u>move .-2<cr>
    vmap <C-Down> :move '>+1<cr>gv
    vmap <C-Up> :move '<-2<cr>gv

    " Windows issues
    vmap <leader>c "+y
    vmap <leader>x "+x
    map <leader>v "+gP
    inoremap <leader>v <C-O>"+g
    " Super paste
    inoremap <C-v> <esc>:set paste<cr>mui<C-R>+<esc>mv'uV'v=:set nopaste<cr>
    " Set clipboard+=unnamed

    " Easily change between backslash and forward slash with f/ or f\
    nnoremap <silent> f/ :let tmp=@/<CR>:s:\\:/:ge<CR>:let @/=tmp<CR>
    nnoremap <silent> f<Bslash> :let tmp=@/<CR>:s:/:\\:ge<CR>:let @/=tmp<CR>

    " Use shell with ctrl-z
    "map <C-Z> :shell<cr>

    " Remove indenting on empty lines
    map <F2> :%s/\s*$//g<cr>:noh<cr>''
    " Paste toggle - when pasting something in, don't indent.
    set pastetoggle=<F3>
    " SVN Diff
    map <F7> <leader>cd:new<cr>:read !svn diff<cr>:set syntax=diff buftype=nofile<cr>gg
    " ROT13
    map <F12> ggVGg?

    " Quick Fix
    map <leader>cw :cw<cr>
    map <F3> :cp<cr>
    map <F4> :cn<cr>

    " Some nice mapping to switch syntax (useful if one mixes different languages in one file)
    map <leader>1 :set syntax=xhtml<cr>
    map <leader>2 :set ft=css<cr>
    map <leader>3 :set ft=javascript<cr>
    map <leader>4 :set syntax=python<cr>
    map <leader>5 :set ft=php<cr>
    map <leader>$ :syntax sync fromstart<cr>

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " => Moving around and tabs
    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " Disable Win Alt Key
    set winaltkeys=no

    " Actually, the tab does not switch buffers, but my arrows
    " Use the arrows to something usefull
    nmap <C-P> :bp<cr>
    nmap <C-N> :bn<cr>
    map <C-E> :Bclose<cr>

    " Don't close window, when deleting a buffer
    command! Bclose call <SID>BufcloseCloseIt()

    function! <SID>BufcloseCloseIt()
        let l:currentBufNum = bufnr("%")
        let l:alternateBufNum = bufnr("#")

        if buflisted(l:alternateBufNum)
            buffer #
        else
            bnext
        endif

        if bufnr("%") == l:currentBufNum
            new
        endif

        if buflisted(l:currentBufNum)
            execute("bdelete! ".l:currentBufNum)
        endif
    endfunction

    " Tab configuration
    map <leader>tn :tabnext<cr>
    map <leader>te :tabedit
    try
        set switchbuf=usetab
        set stal=2
    catch
    endtry
    set guitablabel=%t

    """"""""""""""""""""""""""""""
    " => Statusline
    """"""""""""""""""""""""""""""
    " Always hide the statusline
    set laststatus=2

    function! CurDir()
        let curdir = substitute(getcwd(), '/Users/Vingel/', "~/", "g")
        return curdir
    endfunction

    "Format the statusline
    set statusline=%F%m%r%h%w\ CW\ %r%{CurDir()}%h\ [%Y,%{&ff},%{(&fenc==\"\")?&enc:&fenc}%{(&bomb?\",BOM\":\"\")}]\ [POS=%l,%v,%p%%,%L]

    """"""""""""""""""""""""""""""
    " => Visual
    """"""""""""""""""""""""""""""
    function! VisualSearch(direction) range
        let l:saved_reg = @"
        execute "normal! vgvy"
        let l:pattern = escape(@", '\\/.*$^~[]')
        let l:pattern = substitute(l:pattern, "\n$", "", "")
        if a:direction == 'b'
            execute "normal ?" . l:pattern . "^M"
        else
            execute "normal /" . l:pattern . "^M"
        endif
        let @/ = l:pattern
        let @" = l:saved_reg
    endfunction

    " Basically you press * or # to search for the current selection !! Really useful
    vnoremap <silent> * :call VisualSearch('f')<cr>
    vnoremap <silent> # :call VisualSearch('b')<cr>

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " => Parenthesis/bracket expanding
    """"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

    " Map auto complete of (, ", ', [,{
    inoremap ( ()<esc>:let leavechar=")"<cr>i
    inoremap [ []<esc>:let leavechar="]"<cr>i
    inoremap { {}<esc>:let leavechar="}"<cr>i
    inoremap < <><esc>:let leavechar=">"<cr>i
    "inoremap ' ''<esc>:let leavechar="'"<cr>i
    inoremap " ""<esc>:let leavechar='"'<cr>i
    inoremap )) (<esc>o)<esc>:let leavechar=")"<cr>O
    inoremap ]] [<esc>o]<esc>:let leavechar="]"<cr>O
    inoremap }} {<esc>o}<esc>:let leavechar="}"<cr>O

    vnoremap #( <esc>`>a)<esc>`<i(<esc>
    vnoremap #[ <esc>`>a]<esc>`<i[<esc>
    vnoremap #{ <esc>`>a}<esc>`<i{<esc>
    vnoremap #< <esc>`>a><esc>`<i<<esc>
    vnoremap #' <esc>`>a'<esc>`<i'<esc>
    vnoremap #" <esc>`>a"<esc>`<i"<esc>

    map <leader>t2 :set shiftwidth=2<cr>
    map <leader>t4 :set shiftwidth=4<cr>

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " => Plugin Settings
    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " BufExplorer
    let g:bufExplorerDefaultHelp=0
    let g:bufExplorerMaxHeight=25
    let g:bufExplorerResize=1
    let g:bufExplorerShowRelativePath=1
    let g:bufExplorerSortBy='mru'
    let g:bufExplorerSplitBelow=1
    let g:bufExplorerSplitRight=0        " 从左边出
    let g:bufExplorerSplitVertSize = 30  " 分开高度
    let g:bufExplorerSplitVertical=1     " 垂直分开
    let g:bufExplorerUseCurrentWindow=1  " 在新窗口打开


    " tagbar.vim
    map <leader>t :TagbarToggle<cr>

    " taglist.vim
    "set tags=./tags "now using autotag.vim to set tags
    "map <leader>t :TlistToggle<cr>
    let Tlist_Auto_Open = 0 " let the tag list open automagically
    let Tlist_Close_OnSelect = 1
    let Tlist_Compact_Format = 1 " show small menu
    let Tlist_Ctags_Cmd = 'ctags' " location of ctags
    let Tlist_Enable_Fold_Column = 0 " do show folding tree
    let Tlist_Exist_OnlyWindow = 1 " if you are the last, kill yourself
    let Tlist_File_Fold_Auto_Close = 0 " fold closed other trees
    let Tlist_GainFocus_On_ToggleOpen = 1
    let Tlist_Inc_Winwidth = 0
    let Tlist_Show_Menu = 1
    let Tlist_Show_One_File = 1 "Show single file tags only
    let Tlist_Sort_Type = "name" " order by
    let Tlist_Use_Right_Window = 1 " split to the right side of the screen
    let Tlist_WinWidth = 40 " 40 cols wide, so i can (almost always) read my functions
    let g:tlist_javascript_settings = 'javascript;s:string;a:array;o:object;f:function;m:member'
    let g:tlist_php_settings = 'php;c:Classes;f:Functions;d:Constants;j:Javascript Functions'

    " NERD_tree.vim
    map <leader>n  :NERDTree<cr>
    map <leader>nt :NERDTreeToggle<cr>
    map <leader>nf :NERDTreeFind<cr>
    let g:NERDTreeShowBookmarks = 1
    let g:NERDTreeChDirMode = 2
    let NERDTreeIgnore=['\.pyc$','\.svn$','\.tmp$','\.bak$','\~$']

    " project.vim
    map <leader>p :Project<cr>

    " matrix.vim
    map <leader>m :Matrix<cr>

    " html.vim
    let g:no_html_toolbar = 1
    let g:do_xhtml_mappings = 'yes'
    let g:html_tag_case = 'lowercase'

    " closetag.vim
    let g:closetag_html_style=1

    " ToHTML
    let use_xhtml = 1
    let html_use_css = 1
    let html_number_lines = 0

    " mru.vim (History file List, Most Recent Used)
    map <leader>h :MRU <cr>
    let MRU_Max_Entries = 1000
    let MRU_Max_Menu_Entries = 20
    let MRU_Exclude_Files = '^/tmp/.*\|^/var/tmp/.*'
    let MRU_Window_Height = 8

    " fencview.vim
    let g:fencview_autodetect = 0

    " acp.vim & SnipMate.vim
    let g:acp_behaviorSnipmateLength =1
    let g:acp_completeOption = '.,w,b,u,t,i,k'
    let g:acp_enableAtStartup = 0
    let g:snips_author = 'Vingel <http://www.vingel.com/>'
    "autocmd FileType python set ft=python.django " For SnipMate
    autocmd FileType html,htmldjango set ft=html.django_template.jquery " For SnipMate & jquery

    "au BufRead,BufNewFile *.c,*.cpp,*.py,*.js 2match Underlined /.\%81v/
    au BufRead,BufNewFile *.c,*.cpp,*.py,*.js set colorcolumn=81

    " neocomplcache.vim
    let g:neocomplcache_enable_at_startup = 1
    let g:neocomplcache_enable_smart_case = 1
    let g:neocomplcache_enable_auto_select = 1

    " matchit.vim
    let b:match_ignorecase = 1

    " fuf.vim
    map <leader>fb :FufDirWithCurrentBufferDir<cr>
    map <leader>fd :FufDir<cr>
    map <leader>ff :FufFile<cr>
    map <leader>ft :FufTag<cr>
    map <leader>fh :FufHelp<cr>

    " JSLint.vim
    if has("win32")
        let g:jslint_command = $VIMFILES . '/extra/jslint/jsl.exe'
    else
        let g:jslint_command = $VIMFILES . '/extra/jslint/jsl'
    endif
    let g:jslint_command_options = '-conf ' .  $VIMFILES . '/extra/jslint/jsl.conf -nofilelisting -nocontext -nosummary -nologo -process'
    map <leader>j :call JavascriptLint()<cr>
    "
    " ZenCoding
    let g:user_zen_expandabbr_key = '<c-j>'
    "let g:use_zen_complete_tag = 1

    " Pylint
    let g:pylint_onwrite = 0
    autocmd FileType python compiler pylint

    " Grep
    let Grep_Skip_Dirs = 'RCS CVS SCCS .svn generated'
    set grepprg=/bin/grep\ -nH

    " Command-t
    noremap <leader>r :CommandT<cr>
    "noremap <leader>y :CommandTFlush<cr>
    let g:CommandTMaxHeight = 15

    " DoxygenToolkit.vim
    map <leader>d :Dox<cr>

    " Vim grep
    let Grep_Skip_Dirs = 'RCS CVS SCCS .svn generated'
    set grepprg=/bin/grep\ -nH

    " Python section
    " Run the current buffer in python - ie. on leader+space
    autocmd FileType python set textwidth=79 " PEP-8 Friendly
    autocmd FileType python map <buffer> <leader><space> :w!<cr>:!python %<cr>
    " set python modules path so that 'gd' can find it.
    autocmd FileType python set path+=~/Dropbox/Library/python,/System/Library/Frameworks/Python.framework/Versions/2.6/lib/python2.6/,/usr/lib/python2.5/site-packages/
    " Set some bindings up for 'compile' of python
    autocmd FileType python set makeprg=python\ -c\ \"import\ py_compile,sys;\ sys.stderr=sys.stdout;\ py_compile.compile(r'%')\"
    autocmd FileType python set efm=%C\ %.%#,%A\ \ File\ \"%f\"\\,\ line\ %l%.%#,%Z%[%^\ ]%\\@=%m
    " New Python file template
    autocmd bufnewfile *.py call setline(1,'#!/usr/bin/env python') |
      \ call setline(2,'#coding:utf-8') |
      \ call setline(3,'#author: Vingel <http://www.vingel.com>') |
      \ call setline(4,'') |
      \ call setline(5,'') |
      \ exe "normal G"

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " => Set OminComplete
    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    set completeopt=longest,menu
    autocmd FileType c set omnifunc=ccomplete#Complete
    autocmd FileType python set omnifunc=pythoncomplete#Complete
    autocmd FileType html,markdown setlocal omnifunc=htmlcomplete#CompleteTags
    autocmd FileType xml setlocal omnifunc=xmlcomplete#CompleteTags
    autocmd FileType css setlocal omnifunc=csscomplete#CompleteCSS
    autocmd FileType javascript setlocal omnifunc=javascriptcomplete#CompleteJS
    autocmd FileType php set omnifunc=phpcomplete#CompletePHP
    autocmd FileType php setlocal dict+=$VIMFILES/dict/php_functions.txt
    autocmd FileType python setlocal omnifunc=pythoncomplete#Complete

    "Nginx
    autocmd BufRead,BufNewFile /usr/local/nginx/conf/* /etc/nginx/* set ft=nginx

    "Velocity
    autocmd BufNewFile,BufRead *.vm set ft=html fenc=gbk syntax=velocity

    "Markdown
    "autocmd BufNewFile,BufRead *.markdown,*.md,*.mdown,*.mkd,*.mkdn

    "CSSTidy :brew install csstidy
    "autocmd filetype css setlocal equalprg=csstidy\ -\ --silent=true

    "Write when you leave insert mode
    autocmd InsertLeave * write

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " => Colors & Fonts & Syntax
    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " Enable syntax
    syntax enable

    " Syntax
    au BufRead,BufNewFile *.js set ft=javascript
    au BufNewFile,BufRead *.log setf log
    let filetype_m= "objc"

    au BufRead,BufNewFile *.go set filetype=go

    if has("gui_running")
        colorscheme yytextmate
        " Highlight current
        set cursorline
        set cursorcolumn
        hi cursorline guibg=#333333
        hi CursorColumn guibg=#333333

        " Omni menu colors
        hi Pmenu guibg=#333333
        hi PmenuSel guibg=#555555 guifg=#ffffff

        " Toggle Menu and Toolbar and switch fullscreen mode
        set guioptions-=b " Hide bottom scrollbar
        set guioptions-=R " Hide right scrollbar
        set guioptions-=r
        set guioptions-=l " Hide left scrollbar
        set guioptions-=L
        set guioptions-=m " Hide Menu
        set guioptions-=T " Hide Toolbar
        map <silent> <F11> :if &guioptions =~# 'm' <Bar>
                    \set guioptions-=m <bar>
                    \else <Bar>
                    \set guioptions+=m <Bar>
                    \endif<cr>

        " Work with Chinese input apps
        set noimdisable
        set imactivatekey=C-space
        set imsearch=0
        autocmd! InsertLeave * set imdisable|set iminsert=0
        autocmd! InsertEnter * set noimdisable|set iminsert=0

        " Auto Maximize when vim starts.
        if has("win32")
            au GUIEnter * simalt ~x
        elseif has("unix")
            au GUIEnter * winpos 0 0
            "set lines=999 columns=9999
        endif

    else
        set background=dark
        "colorscheme zellner
        colorscheme vivi
    endif

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " => Set FileEncodeing
    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " Favorite filetypes
    set fileformats=unix,dos,mac

    if has("multi_byte")
        set encoding=utf-8
        set fileencoding=utf-8
        set fileencodings=utf-8,gbk,chinese,latin1
        set formatoptions+=mM " for charactors fold and patch
        set nobomb " Don' use Unicode
        set helplang=cn

        if v:lang =~? '^\(zh\)\|\(ja\)\|\(ko\)'
            set ambiwidth=double
        endif

        if has("win32")
            set fileencoding=chinese
            " Language messages en_US.utf-8
            language messages zh_CN.utf-8
            let &termencoding=&encoding
            set guifont=Consolas:h12:cDEFAULT
            source $VIMRUNTIME\delmenu.vim
            source $VIMRUNTIME\menu.vim
            set path+=E:\Vingel\bin\python\Lib\site-packages\
        elseif has("mac")
            colorscheme desert
            if has("gui_macvim")
                winpos 52 42

                let macvim_skip_cmd_opt_movement = 1
                let macvim_hig_shift_movement = 1

                set transparency=4

                set anti " 开启抗锯齿渲染
                set guifont=Consolas:h18
                "macmenu &File.New\ Tab key=<nop>
            endif
        "Unix
        else
            set guifont=Bitstream\ Vera\ Sans\ Mono\ 14
        endif
    else
        echoerr "Sorry, this version of gvim was not compiled with +multi_byte"
    endif

    if has("autocmd")
      au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
    endif

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " My information
    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    set dictionary+=$VIMFILES/dict/dicts.txt,/usr/share/dict/words
    iab xdate <c-r>=strftime("%Y-%m-%d %H:%M:%S")<cr>
    " vim:tw=80 et sw=4 comments=\:\"

    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " Tips
    """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
    " delete blank lines  :g/^\s*$/d
    " diff  :vertical diffsplit filename
    ```
</div>

[如何正确接收 GitHub 的消息邮件 · Issue #49 · cssmagic/blog](https://github.com/cssmagic/blog/issues/49)

:   “不知道你 @ 我了呀～”

    这让我非常恼火。所以，我决定写篇文档给所有人看，避免他们漏看重要的 GitHub
    消息。此后在 GitHub 不回复我的人，差不多也可以绝交了罢！

      - 我关注的（Watching）：当我关注了某个项目之后，相当于订阅了这个项目的所
        有更新，即这个项目的新 release、新 issue、新 PR 及所有讨论都会通知我。
      - 我参与的（Participating）：当我参与到某个 issue、PR 或 commit 的讨论，
        或被别人 @ 后，我都会持续收到这个讨论的后续更新。
      - 站内信（Web）：当我登录 GitHub 网站时，如果有新消息，在导航栏会看到一个
        小蓝点。点进去就可以看到详细通知。

    - [GitHub 的邮箱设置页面](https://github.com/settings/emails)
    - [GitHub 通知中心](https://github.com/settings/notifications)

    “Not watching” 意味着取消关注，你将不会收到与你无关的通知。而与你有关的（你
    发起的、主动参与的或被 @ 的）讨论有新回复，你还是会收到通知的。

    请注意不要选择 “Ignoring”，那意味着你连重要的消息也收不到了。

    如果你遇到了无聊的人总是骚扰你，可以到它的用户页面，屏蔽并举报。

    谢谢吐槽。不过，不是每个人一生下来就是对所有工具熟练的，总会有一个学习和摸
    索的过程。如果有教程，这个学习的过程会快一些。于是，我写了教程。

    另外，文中的一些调侃桥段只是写作手法，就不要当真了吧？ :joy:

    我叫魔法哥，我是一个吐槽狂。每当我在公司项目中看到不靠谱的代码，总是忍不住
    一吐为快。我相信，吐槽使人进步，吐槽改变世界。

    如果自己的电脑不在手边，也可以用浏览器登录 GitHub 网站，通过网页界面来一步
    步追查。我们进入项目 repo 的主页，打开某个文件的详情页面，在顶部可以发现 “
    Blame” 和 “History” 两个按钮

    其中，进入 Blame 页面可以查看文件内每行代码的作者信息。

    在右键菜单中选择 Copy revision number，即可得到该 commit 的版本号。然后使用
    以下模式手工构造一个 URL 打开即可：

    ```
    https://github.com/{org}/{project}/commit/{revision}
    ```

    另一方面，当不良代码被合并到主干时，我们固然可以怪罪代码作者，但这更多是
    review 者的责任。因为帮别人 review 代码的往往是有经验的资深工程师，帮助新人
    纠错和成长是他们的重要职责。因此，找到 PR 再吐槽，还可以揪出那些不认真
    review 代码、“毁” 人不倦的导师们，直接打脸，岂不快哉！

    我们登录项目 upstream repo 的主页，在页面顶部有一个搜索框，填入 commit 的版
    本号，搜索。

    要知道，总会有一些害羞的同学不敢直面我的吐槽，他们总是假装没有收到我在
    GitHub 的评论。为此，我写了这篇教程《如何正确接收 GitHub 的消息邮件》，并发
    给每个人，这样应该可以防止大家装睡了吧。

    另外，在日常的吐槽工作中，我还会把一些典型的错误汇总起来，并招集大家听我当
    面吐槽一遍。虽然大家都很嫌弃我，但我丝毫不为所动，因为我是一个有情怀的吐槽
    狂，天生骄傲！

    refs and see also

      - [如何在 GitHub 正确吐槽 · Issue #4 · baixing/FE-Blog](https://github.com/baixing/FE-Blog/issues/4)
      - [Issues · cssmagic/blog](https://github.com/cssmagic/blog/issues)
      - [CSS魔法 - Web标准与前端技术杂谈](http://www.cssmagic.net/)

[Tree-shaking with webpack 2 and Babel 6](http://www.2ality.com/2015/12/webpack-tree-shaking.html)

[搭建一个免费的，无限流量的Blog----github Pages和Jekyll入门 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2012/08/blogging_with_jekyll.html)

:   喜欢写 Blog 的人，会经历三个阶段。

      - 第一阶段，刚接触 Blog，觉得很新鲜，试着选择一个免费空间来写。
      - 第二阶段，发现免费空间限制太多，就自己购买域名和空间，搭建独立博客。
      - 第三阶段，觉得独立博客的管理太麻烦，最好在保留控制权的前提下，让别人来
        管，自己只负责写文章。

    **一些事物在你没真实体验前，最好保持沉默。**

    对于 CCTV，想起营养老师范志红的一句话： 很多不健康的食品，都是吃客自己惯出
    来的。中国人讲究色、香、味俱全。但经常，色是调色剂、香是劣质佐料、味是味精
    ，非常不健康。这个，不少人都知道。厨师、饭店老板比我们更清楚。但为何还依旧
    这么做？因为不这么做，顾客会不喜欢，就赚不到钱。要改变现状，得先改变吃客，
    让吃客们对色、香、味建立起新观念：色是自然色、香是食材香、味是原汁原味。唯
    有改变我们自己，才能改变很多事情。CCTV 也一样，**当哪一天，大部分人都不看它，
    不鸟它时，它就会自然死去，再也发不出声音**。

    博客的本质是记录，是与自己、他人的内心对话。

    对话是记录的延伸。

    产生对话，需要传播，需要消息机制。

    对于传播，个人觉得，目前 Facebook、微博等形态，也很可能迟早像 RSS 一样成为
    历史或小众。

    博客就三个关键词：记录、传播、对话。

    一个产品是什么，不取决于产出方的预设，而**取决于使用者的用法**。

    refs and see also

      - [博客是什么 · Issue #123 · lifesinger/blog](https://github.com/lifesinger/blog/issues/123)

[知天下 · 唱灌篮高手主题曲的人现在怎么样了？](http://daily.zhihu.com/story/3020232)

:   《灌篮高手》一共有两首片头和四首片尾曲。全部由当时统治日本乐坛的唱片公司
    Being 旗下的歌手演唱。

    「マイフレンド」我的朋友 乐队 ZARD，主唱坂井泉水。泉水姐姐声音甜润且相貌极
    美，以她为中心的 ZARD 也成为日本最成功的乐队之一，十几年里作品张张大卖，总
    销量近 4000 万张，诞生名曲无数。可惜天妒红颜，2007 年癌症扩散到肺部，入院治
    疗时又发生意外事故，不幸去世，无数歌迷心中永远的痛。

[不曾磨灭的记忆，细数小霸王超经典游戏 TOP 10 - 笔戈科技 - 知乎专栏](http://zhuanlan.zhihu.com/p/20652946)

:   除了《忍者龙剑传》和《热血系列》，其他都喜欢。

    2016 年 1 月 13 日，著名游戏评测机构 IGN 破天荒的给了一款独立游戏满分，它叫《UNDERTALE》（传说之下）。

    开发这款独立游戏的是一名 90 后，他叫 Toby Fox，这是他大学时期在朋友家中完成的作品。

    而这，却也只是国外成功的独立游戏作品中很小的一小部分，无论是《FEZ》、《超级
    食肉男孩》、《时空幻境》，还是如今的《瘟疫公司》、《纪念碑谷》，它们都让国
    外的独立游戏开发者名利双收。

    事情就是这么可笑，在他们拿着独立来编故事，策划着能做出轰动世界的巨作时，《
    UNDERTALE》的作者 Toby Fox 却发出了善意的提醒：「一个真正完成了的创意小游戏
    胜过 10 个未完成的大项目。」

    ![陈星汉和他的《风之旅人》](http://whudoc.qiniudn.com/2016/77670d72fc55d200166d05463584da4a_b.jpg)

    最后，向各位推荐纪录片《独立游戏：大电影》，即使你不了解独立游戏，我想你也
    能从中看到人性的脆弱、疯狂和勇敢。

    refs and see also

      - [中国独立游戏的创与灭 - 笔戈科技 - 知乎专栏](http://zhuanlan.zhihu.com/p/20585179)

[欣喜堂 | 活字字体基础讲座: 什么是活字字体](http://www.typeisbeautiful.com/kinkido-1/)

:   在没有现代印刷的时代，碰到一本想要读的书，必须借过来一个字一个字地认真抄写。
    这可需要极大的耐心。现代看来，要抄这么多本书简直是不可想象，但在当时是司空见
    惯的事情。在中国在欧洲都是这样。

    能抄写的不仅是文章。在中国还有一种习惯，就是连书写风格也一起复制下来：临书
    、向拓、双钩填墨等等，都是常用的方法。

    通过这种技法的应用，轮廓得到逐渐修正，文字具有了公共性，可读性和可识别性都
    提高了。

    木版印刷

    虽然量产变得相对容易了，但雕刻版木要花费很多功夫。在中国到了宋朝逐渐出现了
    既容易雕刻又易于阅读的字型。

    英语里面活字称为 type，活字字体叫 typeface。活字中，最常用的是使用铅、锑、
    锡合金制造的，除此之外还有木活字（wooden type）、金属活字（metal type）、照
    片活字（photo type）、电子活字（digital type）等等。在中国甚至还有泥活字、
    磁活字等等。

    另外，照片活字的称呼可能大家不太习惯，但是照片排版用英文说就是
    **phototypesetting**，照相排版机就是 phototypesetter。要是把 typesetting 翻译成
    活字排版，那么 phototypesetting 就是照片活字排版了。金属活字的 **Monotype（自动铅字排版机）**
    也是这样，现代的个人电脑在某种意义上也是一种活字排版机。

    判别性是指是否能容易分辨出与其他文字的差异，因为单纯手写的话是很容易读错的
    。可读性是指是否容易阅读，做成文章之后是否会给视觉造成负担。为了不让读者在
    阅读时有压力，需要将大小粗细做整齐。

    **判别性**、**可读性**和**易认性**被称为字体选择的三要素，在字体设计中也是
    需要重点对待的。

    字型（font）

    ![排字拼版台](http://www.typeisbeautiful.com/wp-content/themes/tib_style/kinkido/img/content/innerlead.png)

    金属活字的消亡恐怕是大势所趋。不过，虽然金属活字消失了，活字字体仍旧会作为
    电子活字延续下去。金属活字、照相活字、电子活字，活字字体的承载方式和构造与
    时代一起变化着，但是优秀的活字字体却是无比长寿的。

    ![这些字好漂亮！](http://www.typeisbeautiful.com/wp-content/uploads/2011/03/akebono.gif)

    refs and see also

      - [欣喜堂 | 活字字体基础讲座: 不要再用「代称」了 ─和字字体历史](http://www.typeisbeautiful.com/kinkido-2/)
      - [欣喜堂 | 活字字体基础讲座: 宋朝体与明朝体的流变─汉字字体历史](http://www.typeisbeautiful.com/kinkido-3/)

[Type is Beautiful » 维吾尔字体百年掠影——从喀什噶尔到乌鲁木齐 （Uyghurche font tarixi — Qeshqerdin Ürümchigiche）](http://www.typeisbeautiful.com/2016/02/9927/)

:   1959 年维吾尔族设计了以拉丁字母为基础的新文字方案，于 1964 年开始推行。但是经
    过几年的实践证明，推行维吾尔新文字的条件尚不成熟，为此 1982 年新疆维吾尔自治
    区第五届人大常委会第十七次会议通过了《全面使用维吾尔、哈萨克老文字的报告》
    ，于是迄今为止，维吾尔族人民仍在使用以阿拉伯字母为基础的维吾尔老文字。不过
    ，由于长期文化交流，现在不少维吾尔人能使用多种语言文字，特别是城市里的的维
    吾尔族知识分子大多会说汉语和使用汉文,很多维吾尔族学习英语，日语，俄语。新疆
    北部阿尔泰，塔城，原伊犁等地区的维吾尔族一般会说哈萨克语。

    ![新维吾尔文字，摄于玉素甫·哈斯·哈吉甫陵墓](http://www.typeisbeautiful.com/wp-content/uploads/2016/01/uyghur_5.jpg)

    1982 年自治区政府重新恢复了老维吾尔文字（Ereb Uyghur Yéziqi），以阿拉伯字母
    为基础的维吾尔文才又见于世。与上一次使用阿拉伯字母的文字时隔近二十年。这二
    十年中，社会发生了天翻地覆的变化，人们的意识形态也有所改变。对于维吾尔文字
    体来说，是一个分水岭。1982 年后的印刷字体与先前的字体有着明显的不同，其强势
    的态度一直延续至今。

    **与 1950 年代的字体相比，1982 年的字体少了之前的人文灵动，显得工整。**更重
    要的是，传统维吾尔文书法的痕迹明显减少了，字体中甚至出现了一些非传统的特征。在
    以往的几千年，西面的波斯文化就像是中亚的灯塔，源源不断地供给着阿拉伯文字的
    营养；而这百年，来自北方俄罗斯和东方中国内地这两种截然不同的文化又在这里扮
    演者越来越重要的角色，在对新事物的影响中，波斯文化退居二线，从而导致了新字
    体与传统出现了断裂。比如对笔画的过度简化，对部件的误用，以及整体审美的偏移
    。这几点也是今天维吾尔字体与世界上其它阿拉伯字体的显著不同。这些不同点可能
    是当年为了制作铅字方便而来，也可能是一个偶然的错误，由于没有人察觉就约定俗
    成，成了新的标准。

    ![几款不同时代的维吾尔字体比较](http://www.typeisbeautiful.com/wp-content/uploads/2016/01/uyghur_8.jpg)

    2009 年的夏天，在我的朋友古丽米热（Gülmire M.）的协助下，我将 Frutiger
    Arabic 展示给 50 名浙江大学的维吾尔大学生，49 名学生都觉得 Frutiger Arabic
    怪异且略显滑稽。如果将现有的机场指示牌上的字体换成更利于视觉阅读的 Frutiger
    Arabic，照理说肯定会出彩，因为 Frutiger 本身就是一款经典的导示系统字体，其
    阿拉伯文版本必然是继承了这一点，至少很多发达的中东大都市已经用上了它。**但可
    以肯定的是，在乌鲁木齐这个做法会遭到极大的抵制。总的来说，维吾尔人并不认同
    其它地方的现代阿拉伯文字体。不禁让我想到当初人们对 Helvetica 的厌恶反应，并
    称之为「丑怪体」（grotesque）。**

    ![Frutiger Arabic](http://www.typeisbeautiful.com/wp-content/uploads/2016/01/uyghur_9.png)

    这里的原因是比较深层次的，除了受阅读习惯和环境影响外，主要出于维吾尔人**对民
    族传统的强烈保护意识**，毕竟任何一个改动，都会松动原有的文化元素。字体当然也
    是民族历史、民族特色的小小代表。

    **总的来说，新疆餐厅的字体都是 1982 年后的那种印刷体，横平竖直、端端正正；而
    回族餐厅的阿拉伯文，多选择跳跃性强的手写风格体。**

    refs and see also

      - [Type is Beautiful » 维吾尔字体百年掠影——从喀什噶尔到乌鲁木齐 （Uyghurche font tarixi — Qeshqerdin Ürümchigiche）](http://www.typeisbeautiful.com/2016/02/9927/)

---

`make -p` see implicit rules, peek?

[bower install提示github connection timeout解决办法 | halfcrazy在疯言疯语](http://halfcrazy.me/2014/12/09/bower-install%E8%B6%85%E6%97%B6/)

:   网上的说法是由于 bower 默认采用 `git://` 协议，而当 `git://` 协议被屏蔽时就会出
    现这个错误，此时只需将默认 `git://` 协议换成 `https://` 就行了。在 shell 中执行
    如下指令

    ```bash
    $ git config --global url."https://".insteadOf git://
    ```

cherry, coco, candy, sounds like stripper name.

[zornlemma/bilibili_RE_block_list: bilibili_block_list/哔哩哔哩弹幕屏蔽正则表达式列表](https://github.com/zornlemma/bilibili_RE_block_list)

:   RegExp 之奇怪应用……

    ```perl
    ^(.)\1*$
    (\S+)(\S*\1){4,}
    ^\d+$
    ^[a-z]+$|^[A-Z]+$
    \d{2,4}\D\d{1,2}\D\d{1,2}
    (前|qian|第)(\d|[一二三四五六七八九十百千万两几])|\d\d(个|名|以内)|观众数|在线|^前
    [!?！？～]{3,}$
    更新|更了|画质|养肥|火钳|我刷|刷出了|^终于|有生之|^看过|首页|见.滚|路过|
    ^来(了|早|晚|一发|啦|拉)|人好[少多]|小电视|高产|^没人|^我是来|失踪人口|从隔壁
    [不又]卡|卡[在哭死出]|进度条
    好[早前晚快慢]|[么靠]前|[深半]夜|早啊
    每日|循环|打卡|周目|欢迎回|根本停不|顶上去
    原版|报警|违和|打开方式|^(什么|shenme)(鬼|gui)|开口跪|画面太美|硬币|头像
    弹幕|会员|休想|霸屏|刷屏|承包|版聊|报复社会|占位
    (白|赤|红|橙|黄|绿|青|蓝|紫)字|我是..(白|赤|红|橙|黄|绿|青|蓝|紫)
    老婆|[Ff][Ll][Aa][Gg]$|弗.格
    \+1|只有我|别(跑|走)|是一个人|(等等|带上|还有)我|[加带]我一|[人党]表示|笑尿|保
    证不|快够|贺电|大家(好|都在)|^都在
    [Yy][Oo][Oo]|红红火火|[dD][uU][aA][nN][gG]|^233
    挖掘机技术|技术哪家
    马丹|妈的|尼玛|艹|我(擦|次|操|cao)|卧槽|屌|鸡巴|日了|二[逼比]
    侵略|法西斯
    非洲农业|危害大|克拉|种庄稼|氮磷钾|不流失|不蒸发|谁说对了
    ```

---

http://emeeks.github.io/d3ia/

D3.js fundamentals

D3 is about selecting and binding

- `d3.selectAll("circle.a").style("fill", "red").attr("cx", 100);`{.javascript}
- `d3.selectAll("div.market").data([1,5,11,3])`{.javascript}

```html
<!DOCTYPE html><meta charset="utf-8">
<script charset="utf-8" src="d3.js"></script>
```

`.style("background", "lightblue")`

---

- scapegoat, 替罪羔羊。
- model minority, 模范少数族裔
- supporting actress, 女配角（女二号）
- best picutre
- best director
- toksido? 燕尾服。应该是 tuxedo
- bowtie
- money management
- manage money, finacies
- wealth, loaded...
- living from paycheck to paycheck, 月光族
- swiping the credit card
- take out a loan
- get a morgage
- refinancing (抵押) your house, ballsy (`['bɔlzi]`, 有胆量的；有决心的；有种的)

[Tuxedo - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Tuxedo)

:   ![A double-breasted dinner suit](https://upload.wikimedia.org/wikipedia/commons/thumb/e/ea/EsmoquinSombra.jpg/255px-EsmoquinSombra.jpg)

    A dinner jacket (British English) or tuxedo (American English, also
    colloquially known as “tux”), dinner suit, or DJ is a formal evening suit
    distinguished primarily by satin or grosgrain facings on the jacket's
    lapels and buttons and a similar stripe along the outseam of the trousers.

    The suit is typically black or midnight blue and commonly worn with a
    formal shirt, shoes and other accessories, most traditionally in the form
    prescribed by the black tie dress code. In Britain a tuxedo is a white
    dinner jacket.

    ![Illustration of English peaked lapel and shawl collar dinner jackets, 1898.
        As substitutes for tailcoats, dinner jackets were originally worn with full
        dress accessories](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Dinner_Jackets%2C_1898..jpg/255px-Dinner_Jackets%2C_1898..jpg)

    Etiquette (`['ɛtɪkɛt]`, 礼节，礼仪；规矩): The tuxedo is a form of evening
    wear and as such is intended to be worn only in the evening.

---

[Inplace Editing](http://www.perlmonks.org/?node=Inplace%20Editing)

:   `perl -p -i -n -e 's/this/that/g' *.txt`{.bash},
    BTW when I use `-pine` for the switches it doesn't work, anyone know why?

    因为 `i` 需要参数啊……

    不过别人的回答很专业：

    > Know your command line switches ;-) ... two things
    >
    >   - `-p` and `-n` contradict each other (and actually `p` overrides `n`).
    >   - `-pin`e switches on the p switch and uses backup files which append ne to the filename
    >
    > so my suggestion is `-pi -e`.
    >
    > -- Hofmator

    ```bash
    perl -n -e 'print "\t\t$_"' tmp.txt
    ```

---

Dumb Makefile

:   ```makefile
    all: gh
    gh:
        git add -A; git commit -m "`date` - `uname`"; git push;
    ```

---

Simple HTTP Server

:   ```bash
    python -m SimpleHTTPServer 8888          # python 2
    python -m http.server      8888          # python 3+
    php -S localhost:8888                    # php
    ruby -run -e httpd . -p 8888             # ruby
    http-server                              # node.js: [c]npm install http-server -g
    java -jar jetty-runner.jar --port 8888 . # java
    double click `mongoose-free-5.5.exe`     # windows
    ```

    downloads:

      - [Java: jetty-runner](http://central.maven.org/maven2/org/eclipse/jetty/jetty-runner/9.3.0.M0/jetty-runner-9.3.0.M0.jar)
      - [Windows: mongoose-free-5.5.exe (免安装，win binary)](http://whudoc.qiniudn.com/2016/mongoose-free-5.5.exe)

---

<div class="tzx-drawer" id="css-selector">
[CSS selector for "foo that contains bar"? - Stack Overflow](http://stackoverflow.com/questions/2000582/css-selector-for-foo-that-contains-bar)

:   <div class="tzx-drawer">
    一句话说就是，不行……
    :   JSYK (Just So You Know), the CSS parent selector will be coming in
        CSS4, as the ability to select which element in a selector is styled by
        putting a dollar sign in front of it: `$div > span` would select the
        div that has a span as a direct child.

        <div class="tzx-drawer" shy>
        FOO
        :   BAR
        </div>

        Put a dollar sign before a selector part, so it could interfere with
        **SCSS/SASS** syntax, cool. Why don't they use the many times proposed
        `<` sign, or `:parent` pseudo class, or even the `!` sign after a
        selector part? They all seem more logical to me, than using the `$`
        sign...
    </div>
</div>

[ImageMap - bl.ocks.org](http://bl.ocks.org/nswamy14/df13d67b6efeb19eb640)

Learning D3.js Mapping

:   For quick access to developer tools on the Mac, use <kbd>alt + command + I</kbd>;
    for Windows PCs, use <kbd>Ctrl + Shift + I</kbd>.

    These three components create a D3 visualization:

      - HTML5 (the SVG and path elements)
      - JavaScript (the D3.js library and map code)
      - CSS (the styling of the HTML5 elements)

    SVG elements:

      - circle : A standard circle with a defined radius and position attributes
      - rect : A standard rectangle with height, width, and position attributes
      - polygon : Any polygon, described by a list of points
      - line : A line with start and end points
      - path : A complex line created through a series of drawing commands

    coords:

    ```tzx-bigquote
                o---------> x
                |
                |
                |
                |
               \|/
                .   y
    ```

    ```html
    <!-- line -->
    <line x1="10" y1="10" x2="100" y2="100" stroke-width="1" stroke="red"/>

    <!-- rect -->
    <rect width="100" height="20" x="10" y="10"></rect>

    <!-- rect with rounded borders -->
    <rect with="100" height="20" x="10" y="10" rx="5" ry="5"></rect>

    <!-- circle -->
    <circle cx="62" cy="62" r="50"></circle>

    <!-- polygon -->
    <polygon points="60,5 10,120 115,120"/>

    <!-- path -->
    <path d="M 120 120 L 220 220, 420 120 Z"
          stroke="steelblue"
          fill="lightyellow"
          stroke-width="2"></path>
    ```

    ```css
    line {
        stroke: red;
        stroke-linecap: round;
        stroke-width: 5;
    }

    rect {
        stroke-width: 1;
        stroke:steelblue;
        fill:#888;
        fill-opacity: .5;
    }
    ```

    [SVG `<path>`](http://www.w3school.com.cn/svg/svg_path.asp):

      - **M** = moveto
      - **L** = lineto
      - **H** = horizontal lineto
      - **V** = vertical lineto
      - **C** = curveto
      - **S** = smooth curveto
      - **Q** = quadratic Belzier curve
      - **T** = smooth quadratic Belzier curveto
      - **A** = elliptical Arc
      - **Z** = closepath

    Curves:

      - Cubic Bézier, `C x1 y1 x2 y2 x y`
      - Quadratic Bézier
      - Elliptical Arc

    SVG paths are the main tool leveraged (杠杆的) when drawing geographic
    regions. However, imagine if you were to draw an entire map by hand using
    SVG paths; the task would become **exhausting**

    transform:

    -   translate: `transform="translate(x,y)"`

    -   scale: `transform="scale(2,2)"`

    -   translate + scale:

        ```html
        <path d="M 120 120 L 220 220 C 200 70 480 290 320 120 Z"
              stroke="steelblue" fill="lightyellow" stroke-width="2"
              transform="translate(-200,-200), scale(2,2)"></path>
        ```

    group: `<g>`:

    ```html
    <svg height="500" width="800">
        <g transform="translate(-200,-100), scale(2,2)">
            <path d="M 120 120 L 220 220 C 200 70 480 290 320 120 Z"></path>
            <line x1="220" y1="220" x2="200" y2="70"></line>
            <circle cx="200" cy="70" r="5" ></circle>
            <line x1="200" y1="70" x2="480" y2="290"></line>
            <circle cx="480" cy="290" r="5" ></circle>
            <line x1="480" y1="290" x2="320" y2="120"></line>
        </g>
    </svg>
    ```

    `<text>`{.html}

    :   `<text x="250" y="150" class="myText">Hello world!</text>`{.html}

        ```css
        .myText {
            font-size:22px;
            font-family:Helvetica;
            stroke-width:2;
        }
        ```

        ```html
        <svg width="600" height="600">
            <text x="250" y="150" class="myText"
                transform="rotate(45,200,0)" font-family="Verdana"
                font-size="100">Hello world!</text>
        </svg>
        ```

---

d3.js

:   ```javascript
    var svg = d3.select("body")
        .append("svg")
        .attr("width", 200)
        .attr("height", 200)

    svg.append('rect')
        .attr('x', 10)
        .attr('y', 10)
        .attr("width",50)
        .attr("height",100);

    svg.selectAll('rect').data(data).enter()
        .append('rect')
        .attr('x', function(d){ return d.x})
        .attr('y', function(d){ return d.y})
        .attr("width", function(d){ return d.width})
        .attr("height", function(d){ return d.height});
    ```

    The `enter` function can be thought of as a section of code that executes
    **when data is applied to the visualization for the first time**.

    ```javascript
    function makeData(n){
        var arr = [];
        for (var i=0; i<n; i++){
            arr.push({
                x:Math.floor((Math.random() * 100) + 1),
                y:Math.floor((Math.random() * 100) + 1),
                width:Math.floor((Math.random() * 100) + 1),
                height:Math.floor((Math.random() * 100) + 1)
            })
        };
        return arr;
    }

    var rect = svg.selectAll('rect').data(data);
    // Enter
    rect.enter().append('rect')
        .attr('test', function(d,i) {
            console.log('enter placing initial rectangle: ', i)
        });
    ```

    the `enter()` section is called only when there are more elements in the array
    than in the DOM.

    ```javascript
    // Update
    rect.transition().duration(500)
        .attr('x', function(d){ return d.x; })
        .attr('y', function(d){ return d.y; })
        .attr('width', function(d){ return d.width; })
        .attr('height', function(d){ return d.height; })
        .attr('test', function(d, i) {
            // update every data change
            console.log('updating x position to: ', d.x)
        });

    rect.exit()
        .attr('test', function(d) { console.log('no data...') })
        .remove();

    // HttpRequest
    d3.json("data/dataFile.json", function(error, json) {
        // ...
    });
    ```

    In this chapter, we explained the core elements of D3 (`enter`, `update`,
    and `exit`).  We understood the power of joining data to our visualization.
    Not only can data come from many different sources, but it is possible to
    have the visualization automatically updated as well.  Many detailed
    examples can be found in the D3 Gallery at
    <https://github.com/mbostock/d3/wiki/Gallery>

<div class="tzx-drawer" shy>
[Geo Projections · mbostock/d3 Wiki](https://github.com/mbostock/d3/wiki/Geo-Projections)

:   > [Wiki](Home) ▸ [[API Reference]] ▸ [[Geo]] ▸ **Geo Projections**

    <table class="highlight">
    <tr height="146" valign="top">
    <td>d3.geo.albersUsa<br><a href="http://bl.ocks.org/mbostock/4090848"><img src="http://bl.ocks.org/mbostock/raw/4090848/thumbnail.png" width="202"></a></td>
    <td>d3.geo.azimuthalEqualArea<br><a href="http://bl.ocks.org/mbostock/3757101"><img src="http://bl.ocks.org/mbostock/raw/3757101/thumbnail.png" width="202"></a></td>
    <td>d3.geo.azimuthalEquidistant<br><a href="http://bl.ocks.org/mbostock/3757110"><img src="http://bl.ocks.org/mbostock/raw/3757110/thumbnail.png" width="202"></a></td>
    </tr>
    <tr height="146" valign="top">
    <td>d3.geo.conicEqualArea<br><a href="http://bl.ocks.org/mbostock/3734308"><img src="http://bl.ocks.org/mbostock/raw/3734308/thumbnail.png" width="202"></a></td>
    <td>d3.geo.conicConformal<br><a href="http://bl.ocks.org/mbostock/3734321"><img src="http://bl.ocks.org/mbostock/raw/3734321/thumbnail.png" width="202"></a></td>
    <td>d3.geo.conicEquidistant<br><a href="http://bl.ocks.org/mbostock/3734317"><img src="http://bl.ocks.org/mbostock/raw/3734317/thumbnail.png" width="202"></a></td>
    </tr>
    <tr height="146" valign="top">
    <td>d3.geo.equirectangular<br><a href="http://bl.ocks.org/mbostock/3757119"><img src="http://bl.ocks.org/mbostock/raw/3757119/thumbnail.png" width="202"></a></td>
    <td>d3.geo.gnomonic<br><a href="http://bl.ocks.org/mbostock/3757349"><img src="http://bl.ocks.org/mbostock/raw/3757349/thumbnail.png" width="202"></a></td>
    <td>d3.geo.mercator<br><a href="http://bl.ocks.org/mbostock/3757132"><img src="http://bl.ocks.org/mbostock/raw/3757132/thumbnail.png" width="202"></a></td>
    </tr>
    <tr height="146" valign="top">
    <td>d3.geo.orthographic<br><a href="http://bl.ocks.org/mbostock/3757125"><img src="http://bl.ocks.org/mbostock/raw/3757125/thumbnail.png" width="202"></a></td>
    <td>d3.geo.stereographic<br><a href="http://bl.ocks.org/mbostock/3757137"><img src="http://bl.ocks.org/mbostock/raw/3757137/thumbnail.png" width="202"></a></td>
    <td>d3.geo.transverseMercator<br><a href="http://bl.ocks.org/mbostock/5126418"><img src="http://bl.ocks.org/mbostock/raw/5126418/thumbnail.png" width="202"></a></td>
    </tr>
    </table>

    Projects forward from spherical coordinates (in degrees) to Cartesian
    coordinates (in pixels). Returns an array `[x, y]` given the input array
    `[longitude, latitude]`.

    Projects backward from Cartesian coordinates (in pixels) to spherical
    coordinates (in degrees).

    `projection.rotate([rotation])`

    :   If rotation is specified, sets the projection’s three-axis rotation to
        the specified angles `λ(lambda), φ(phi) and γ(gamma)` (yaw, pitch and
        roll, or equivalently **l**ongitude, latitude and roll) in degrees and
        returns the projection. If rotation is not specified, returns the
        current rotation which defaults `[0, 0, 0]`. If the specified rotation
        has only two values, rather than three, the roll is assumed to be 0°.

        Constructs a new projection from the specified *raw* point projection
        function. For example, a Mercator projection can be implemented as:

        ```javascript
        var mercator = d3.geo.projection(function(λ, φ) {
          return [
            λ,
            Math.log(Math.tan(π / 4 + φ / 2))
          ];
        });
        ```

        (See
        [src/geo/mercator.js](/mbostock/d3/blob/master/src/geo/mercator.js) for
        the full implementation.) If the raw function supports an *invert*
        method, then the returned projection will expose a corresponding
        [invert](#invert) method.

    <a name="_projection" href="#_projection">#</a> <b>projection</b>(<i>location</i>)

    Projects forward from spherical coordinates (in degrees) to Cartesian
    coordinates (in pixels). Returns an array [<i>x</i>, <i>y</i>] given the
    input array [<i>longitude</i>, <i>latitude</i>]. May return null if the
    specified *location* has no defined projected position, such as when the
    location is outside the clipping bounds of the projection.

    <a name="invert" href="#invert">#</a> projection.<b>invert</b>(<i>point</i>)

    Projects backward from Cartesian coordinates (in pixels) to spherical
    coordinates (in degrees). Returns an array [<i>longitude</i>,
    <i>latitude</i>] given the input array [<i>x</i>, <i>y</i>]. Not all
    projections implement *invert*; for noninvertible projections, this method
    is undefined.

    <a name="rotate" href="#rotate">#</a> projection.<b>rotate</b>([<i>rotation</i>])

    If *rotation* is specified, sets the projection’s [three-axis
    rotation](http://bl.ocks.org/mbostock/4282586) to the specified angles λ, φ
    and γ ([yaw, pitch and
    roll](http://en.wikipedia.org/wiki/Aircraft_principal_axes), or
    equivalently [longitude,
    latitude](http://en.wikipedia.org/wiki/Geographic_coordinate_system) and
    roll) in degrees and returns the projection. If *rotation* is not
    specified, returns the current rotation which defaults [0, 0, 0]. If the
    specified *rotation* has only two values, rather than three, the roll is
    assumed to be 0°.

    <a name="center" href="#center">#</a> projection.<b>center</b>([<i>location</i>])

    If *location* is specified, sets the projection’s center to the specified
    *location*, a two-element array of longitude and latitude in degrees and
    returns the projection. If *center* is not specified, returns the current
    center which defaults to ⟨0°,0°⟩.

    <a name="translate" href="#translate">#</a> projection.<b>translate</b>([<i>point</i>])

    If *point* is specified, sets the projection’s translation offset to the
    specified two-element array [<i>x</i>, <i>y</i>] and returns the
    projection. If *point* is not specified, returns the current translation
    offset which defaults to [480, 250]. The translation offset determines the
    pixel coordinates of the projection’s [center](#center). The default
    translation offset places ⟨0°,0°⟩ at the center of a 960×500 area.

    <a name="scale" href="#scale">#</a> projection.<b>scale</b>([<i>scale</i>])

    If *scale* is specified, sets the projection’s scale factor to the
    specified value and returns the projection. If *scale* is not specified,
    returns the current scale factor which defaults to 150. The scale factor
    corresponds linearly to the distance between projected points. However,
    scale factors are not consistent across projections.

    <a name="clipAngle" href="#clipAngle">#</a> projection.<b>clipAngle</b>(<i>angle</i>)

    If *angle* is specified, sets the projection’s clipping circle radius to
    the specified angle in degrees and returns the projection. If *angle* is
    null, switches to [antimeridian
    cutting](http://bl.ocks.org/mbostock/3788999) rather than small-circle
    clipping. If *angle* is not specified, returns the current clip angle which
    defaults to null. Small-circle clipping is independent of viewport clipping
    via [clipExtent](#clipExtent).

    <a name="clipExtent" href="#clipExtent">#</a> projection.<b>clipExtent</b>(<i>extent</i>)

    If *extent* is specified, sets the projection’s viewport clip extent to the
    specified bounds in pixels and returns the projection. The *extent* bounds
    are specified as an array [​[<i>x0</i>, <i>y0</i>], [<i>x1</i>,
    <i>y1</i>]​], where <i>x0</i> is the left-side of the viewport,
    <i>y0</i> is the top, <i>x1</i> is the right and <i>y1</i> is the bottom.
    If *extent* is null, no viewport clipping is performed. If *extent* is not
    specified, returns the current viewport clip extent which defaults to null.
    Viewport clipping is independent of small-circle clipping via
    [clipAngle](#clipAngle).

    <a name="precision" href="#precision">#</a> projection.<b>precision</b>(<i>precision</i>)

    If *precision* is specified, sets the threshold for the projection’s
    [adaptive resampling](http://bl.ocks.org/mbostock/3795544) to the specified
    value in pixels and returns the projection. This value corresponds to the
    [Douglas–Peucker](http://en.wikipedia.org/wiki/Ramer–Douglas–
    Peucker_algorithm) distance. If *precision* is not specified, returns the
    projection’s current resampling precision which defaults to
    `Math.SQRT(1/2)`.

    A *precision* of `0` disables adaptive resampling.

    <a name="stream" href="#stream">#</a> projection.<b>stream</b>(<i>listener</i>)

    Returns a projecting [stream](Geo-Streams) wrapper for the specified
    *listener*. Any geometry streamed to the wrapper is projected before being
    streamed to the wrapped listener. A typical projection involves several
    stream transformations: the input geometry is first converted to radians,
    rotated on three axes, clipped to the small circle or cut along the
    antimeridian, and lastly projected to the Cartesian plane with adaptive
    resampling, scale and translation.

    <a name="projectionMutator" href="#projectionMutator">#</a> d3.geo.<b>projectionMutator</b>(<i>rawFactory</i>)

    Constructs a new projection from the specified *raw* point projection
    function *factory*. This function does not return the projection directly,
    but instead returns a *mutate* method that you can call whenever the raw
    projection function changes. For example, say you’re implementing the
    Albers equal-area conic projection, which requires configuring the
    projection's two parallels. Using closures, you can implement the raw
    projection as follows:

    ```javascript
    // φ0 and φ1 are the two parallels
    function albersRaw(φ0, φ1) {
      return function(λ, φ) {
        return [
          /* compute x here */,
          /* compute y here */
        ];
      };
    }
    ```

    Using d3.geo.projectionMutator, you can implement a standard projection
    that allows the parallels to be changed, reassigning the raw projection
    used internally by d3.geo.projection:

    ```javascript
    function albers() {
      var φ0 = 29.5,
          φ1 = 45.5,
          mutate = d3.geo.projectionMutator(albersRaw),
          projection = mutate(φ0, φ1);

      projection.parallels = function(_) {
        if (!arguments.length) return [φ0, φ1];
        return mutate(φ0 = +_, φ1 = +_);
      };

      return projection;
    }
    ```

    Thus, when creating a mutable projection, the *mutate* function is never
    exposed, but can be used to recreate the underlying raw projection easily.
    For the full implementation, see
    [src/geo/albers.js](/mbostock/d3/blob/master/src/geo/albers.js).

    **Standard Projections**

    :   <a name="albers" href="#albers">#</a> d3.geo.<b>albers</b>()

        An alias for [d3.geo.conicEqualArea](#conicEqualArea), with USA-centric
        defaults: scale 1000, translate [480, 250], rotation [96°, 0°], center
        ⟨-0.6°, 38.7°⟩ and parallels [29.5°, 45.5°], making it suitable for
        displaying the United States, centered around [Hutchinson,
        Kansas](https://maps.google.com/maps?q=Hutchinson,+Kansas&z=5) in a
        960×500 area. The central meridian and parallels are specified by the
        [USGS](http://www.usgs.gov/) in the 1970 [National
        Atlas](http://www.nationalatlas.gov/).

        <a name="albersUsa" href="#albersUsa">#</a> d3.geo.<b>albersUsa</b>()

        <a href="http://bl.ocks.org/mbostock/4090848"><img src="http://bl.ocks.org/mbostock/raw/4090848/thumbnail.png" width="202"></a>

        The Albers USA projection is a composite projection of four Albers
        projections designed to display the forty-eight lower United States
        alongside Alaska and Hawaii. Although intended for choropleths (`/ˈkɔːrəˌplɛθ/` 等值), it
        scales the area of Alaska by a factor of 0.35x (a <i>lie factor</i> of
        3); Hawaii is shown at the same scale as the lower forty-eight.

        The Albers USA projection does not support rotation or centering.

        <a name="azimuthalEqualArea" href="#azimuthalEqualArea">#</a> d3.geo.<b>azimuthalEqualArea</b>()

        <a href="http://bl.ocks.org/mbostock/3757101"><img src="http://bl.ocks.org/mbostock/raw/3757101/thumbnail.png" width="202"></a>

        The azimuthal equal-area projection is also suitable for choropleths. A
        [polar aspect](http://bl.ocks.org/mbostock/4364903) of this projection
        is used for the United Nations logo.

        <a name="azimuthalEquidistant" href="#azimuthalEquidistant">#</a> d3.geo.<b>azimuthalEquidistant</b>()

        <a href="http://bl.ocks.org/mbostock/3757110"><img src="http://bl.ocks.org/mbostock/raw/3757110/thumbnail.png" width="202"></a>

        The azimuthal equidistant projection preserves distances from the
        projection’s center: the distance from any projected point to the
        projection’s center is proportional to the great arc distance. Thus,
        circles around the projection’s center are projected to circles on the
        Cartesian plane. This can be useful for visualizing distances relative
        to a point of reference, such as commute distances.

        <a name="conicConformal" href="#conicConformal">#</a> d3.geo.<b>conicConformal</b>()

        <a href="http://bl.ocks.org/mbostock/3734321"><img src="http://bl.ocks.org/mbostock/raw/3734321/thumbnail.png" width="202"></a>
        <a href="http://bl.ocks.org/mbostock/9764521"><img src="http://bl.ocks.org/mbostock/raw/9764521/thumbnail.png" width="202"></a>

        Lambert’s conformal conic projection projects the globe conformally onto a cone.

        <a name="conicConformal_parallels" href="#conicConformal_parallels">#</a> conicConformal.<b>parallels</b>([<i>parallels</i>])

        If *parallels* is specified, sets the projection’s standard parallels
        to the specified two-element array of latitudes (in degrees) and
        returns the projection. If *parallels* is not specified, returns the
        current parallels.

        <a name="conicEqualArea" href="#conicEqualArea">#</a> d3.geo.<b>conicEqualArea</b>()

        <a href="http://bl.ocks.org/mbostock/3734308"><img src="http://bl.ocks.org/mbostock/raw/3734308/thumbnail.png" width="202"></a>

        The Albers projection, as an
        [equal-area](http://en.wikipedia.org/wiki/Map_projection#Equal-area)
        projection, is recommended for
        [choropleths](http://mbostock.github.com/d3/ex/choropleth.html) as it
        preserves the relative areas of geographic features.

        <a name="conicEqualArea_parallels" href="#conicEqualArea_parallels">#</a> conicEqualArea.<b>parallels</b>([<i>parallels</i>])

        If *parallels* is specified, sets the Albers projection’s standard
        parallels to the specified two-element array of latitudes (in degrees)
        and returns the projection. If *parallels* is not specified, returns
        the current parallels. To minimize distortion, the parallels should be
        chosen to surround the projection’s [center](#center).

        <a name="conicEquidistant" href="#conicEquidistant">#</a> d3.geo.<b>conicEquidistant</b>()

        <a href="http://bl.ocks.org/mbostock/3734317"><img src="http://bl.ocks.org/mbostock/raw/3734317/thumbnail.png" width="202"></a>

        <a name="conicEquidistant_parallels" href="#conicEquidistant_parallels">#</a> conicEquidistant.<b>parallels</b>([<i>parallels</i>])

        If *parallels* is specified, sets the projection’s standard parallels to
        the specified two-element array of latitudes (in degrees) and returns the
        projection. If *parallels* is not specified, returns the current parallels.

        <a name="equirectangular" href="#equirectangular">#</a> d3.geo.<b>equirectangular</b>()

        <a href="http://bl.ocks.org/mbostock/3757119"><img src="http://bl.ocks.org/mbostock/raw/3757119/thumbnail.png" width="202"></a>

        The equirectangular, or plate carrée projection, is the simplest possible
        geographic projection: the identity function. It is neither equal-area nor
        conformal, but is sometimes used for raster data. See [raster
        reprojection](http://bl.ocks.org/mbostock/4329423) for an example; the
        source image uses the equirectangular projection.

        <a name="gnomonic" href="#gnomonic">#</a> d3.geo.<b>gnomonic</b>()

        <a href="http://bl.ocks.org/mbostock/3757349"><img src="http://bl.ocks.org/mbostock/raw/3757349/thumbnail.png" width="202"></a>

        The gnomonic projection is an azimuthal projection that projects great
        circles as straight lines. See the [interactive
        gnomonic](http://bl.ocks.org/mbostock/3795048) for an example.

        <a name="mercator" href="#mercator">#</a> d3.geo.<b>mercator</b>()

        <a href="http://bl.ocks.org/mbostock/3757132"><img src="http://bl.ocks.org/mbostock/raw/3757132/thumbnail.png" width="202"></a>

        The spherical Mercator projection is commonly used by tiled mapping
        libraries (such as [OpenLayers](http://openlayers.org/) and
        [Leaflet](http://leafletjs.com)). For an example displaying raster tiles
        with the Mercator projection, see the [d3.geo.tile
        plugin](http://bl.ocks.org/mbostock/4150951). It is
        [conformal](http://en.wikipedia.org/wiki/Map_projection#Conformal);
        however, it introduces severe area distortion at world scale and thus is
        not recommended for choropleths.

    <a name="orthographic" href="#orthographic">#</a> d3.geo.<b>orthographic</b>()

    <a href="http://bl.ocks.org/mbostock/3757125"><img src="http://bl.ocks.org/mbostock/raw/3757125/thumbnail.png" width="202"></a>

    The orthographic projection is an azimuthal projection suitable for
    displaying a single hemisphere; the point of perspective is at infinity.
    See the [animated world tour](http://bl.ocks.org/mbostock/4183330) and
    [interactive orthographic](http://bl.ocks.org/mbostock/3795040) for
    examples. For a general perspective projection, see the [satellite
    projection](http://bl.ocks.org/mbostock/3790444).

    <a name="stereographic" href="#stereographic">#</a> d3.geo.<b>stereographic</b>()

    <a href="http://bl.ocks.org/mbostock/3757137"><img src="http://bl.ocks.org/mbostock/raw/3757137/thumbnail.png" width="202"></a>

    The stereographic projection is another perspective (azimuthal) projection.
    The point of perspective is on the surface of the sphere, looking in; it is
    thus commonly used for celestial charts. See the [interactive
    stereographic](http://bl.ocks.org/mbostock/3763057) for an example.

    <a name="transverseMercator" href="#transverseMercator">#</a> d3.geo.<b>transverseMercator</b>()

    <a href="http://bl.ocks.org/mbostock/5126418"><img src="http://bl.ocks.org/mbostock/raw/5126418/thumbnail.png" width="202"></a>
    <a href="http://bl.ocks.org/mbostock/4695821"><img src="http://bl.ocks.org/mbostock/raw/4695821/thumbnail.png" width="202"></a>

    The transverse Mercator projection.

    **Raw Projections**

    D3 exposes several raw projections, designed for reuse when implementing a
    composite projection (such as [Sinu–
    Mollweide](http://bl.ocks.org/mbostock/4319903), which combines the raw
    [sinusoidal](http://bl.ocks.org/mbostock/3712399) and
    [Mollweide](http://bl.ocks.org/mbostock/3734336) projections). Raw
    projections are typically wrapped using [d3.geo.projection](#projection)
    before use. These are point functions that take spherical coordinates λ and
    φ (in radians) as input and return a two-element array (also in radians) as
    output. Many raw projections also implement an inverse projection for
    mapping from planar to spherical coordinates.

    <a name="albers_raw" href="#albers_raw">#</a> d3.geo.albers.<b>raw</b>(φ<sub>0</sub>, φ<sub>1</sub>)

    An alias for [d3.geo.conicEqualArea.raw](#conicEqualArea_raw).

    <a name="azimuthalEqualArea_raw" href="#azimuthalEqualArea_raw">#</a> d3.geo.azimuthalEqualArea.<b>raw</b>

    The raw [azimuthal equal-area projection](#azimuthalEqualArea).

    <a name="azimuthalEquidistant_raw" href="#azimuthalEquidistant_raw">#</a> d3.geo.azimuthalEquidistant.<b>raw</b>

    The raw [azimuthal equidistant projection](#azimuthalEquidistant).

    <a name="conicConformal_raw" href="#conicConformal_raw">#</a> d3.geo.conicConformal.<b>raw</b>(φ<sub>0</sub>, φ<sub>1</sub>)

    Returns a raw [conformal conic projection](#conicConformal) with the specified parallels in radians.

    <a name="conicEqualArea_raw" href="#conicEqualArea_raw">#</a> d3.geo.conicEqualArea.<b>raw</b>(φ<sub>0</sub>, φ<sub>1</sub>)

    Returns a raw [Albers projection](#conicEqualArea) with the specified parallels in radians.

    <a name="conicEquidistant_raw" href="#conicEquidistant_raw">#</a> d3.geo.conicEquidistant.<b>raw</b>(φ<sub>0</sub>, φ<sub>1</sub>)

    Returns a raw [equidistant conic projection](#conicEquidistant) with the specified parallels in radians.

    <a name="equirectangular_raw" href="#equirectangular_raw">#</a> d3.geo.equirectangular.<b>raw</b>

    The raw [equirectangular projection](#equirectangular).

    <a name="gnomonic_raw" href="#gnomonic_raw">#</a> d3.geo.gnomonic.<b>raw</b>

    The raw [gnomonic projection](#gnomonic).

    <a name="mercator_raw" href="#mercator_raw">#</a> d3.geo.mercator.<b>raw</b>

    The raw [Mercator projection](#mercator).

    <a name="orthographic_raw" href="#orthographic_raw">#</a> d3.geo.orthographic.<b>raw</b>

    The raw [orthographic projection](#orthographic).

    <a name="stereographic_raw" href="#stereographic_raw">#</a> d3.geo.stereographic.<b>raw</b>

    The raw [stereographic projection](#stereographic).
</div>

---

```javascript
// [mə'ketə] n. 墨卡托（地理学家，地图制作家）
var projection = d3.geo.mercator();
// for USA: d3.geo.albersUsa

var path = d3.geo.path().projection(projection);
var svg = d3.select("#map")
    .append("svg")
    .attr("width", width)
    .attr("height", height);

var states = topojson.feature(data, data.objects.MEX_adm1);
```

The bounding box is a spherical box that returns
a two-dimensional array of min/max coordinates, inclusive of the geographic
data passed:

```javascript
var b = path.bounds(states);
var b = path.bounds(states.features);
```

The bounding box is represented by a two-dimensional array:
`[[left, bottom], [right, top]]`, where left is the minimum longitude, bottom
is the minimum latitude, right is maximum longitude, and top is the maximum latitude.

```javascript
var s = .95 / Math.max((b - b) / width,
        (b - b) / height);

var t = [
            (width - s * (b + b)) / 2,
            (height - s * (b + b)) / 2
        ];

projection.scale(s).translate(t);
```

```javascript
var map = svg.append('g').attr('class', 'boundary');
```

creating choropleths

```javascript
var color = d3.scale.linear().domain([0,33]).range(['red', 'yellow']);
mexico.attr('fill', function(d,i) {return color(i)});
```

[Scales · mbostock/d3 Wiki](https://github.com/mbostock/d3/wiki/Scales)

:   - Quantitative Scales: for continuous input domains, such as numbers.
        + Linear Scales
            * `d3.scale.linear()`
            * domain, range, output interpolator, clamping behavior,
            * `linear:: x -> x`
            * `insert:: x -> x`
            * `domain:: [x] -> this`, `[from, to]` is fine, 但是多线（polyline）也可以，注意 domain 和 range 数目要一致
            * `range:: [x] -> this`
            * `linear.clamp([boolean])`
            * ticks
              ~ ```javascript
                var x = d3.scale.linear().domain([-1, 1]);
                console.log(x.ticks(5).map(x.tickFormat(5, "+%")));
                // ["-100%", "-50%", "+0%", "+50%", "+100%"]
                ```
        + Power Scales
            * `x: y = mx^k + b`
            * the the default domain [0,1], the default range [0,1]
            *  `d3.scale.sqrt()` == `d3.scale.pow().exponent(.5)`
        + Log Scales
            * x: y = m log(x) + b
            * the default domain [1,10], the default range [0,1], the base 10.
        + Quantize Scales
            * example
              ~ ```javascript
                var q = d3.scale.quantize().domain([0, 1]).range(['a', 'b', 'c']);
                //q(0.3) === 'a', q(0.4) === 'b', q(0.6) === 'b', q(0.7) ==='c';
                //q.invertExtent('a') returns [0, 0.3333333333333333]
                ```
            * `quantize(x)`
            * `quantize.invertExtent(y)`
        + Quantile Scales
            * the input domain is specified as a discrete set of values
            * [Quantile - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Quantile#Quantiles_of_a_population)
                - So the first, second and third 4-quantiles (the "quartiles") of
                  the dataset {3, 6, 7, 8, 8, 10, 13, 15, 16, 20} are {7, 9, 15}.
                  If also required, the zeroth quartile is 3 and the fourth
                  quartile is 20.
        + Threshold Scales
            * example
              ~ ```javascript
                var t = d3.scale.threshold().domain([0, 1]).range(['a', 'b', 'c']);
                t(-1) === 'a';
                t(0) === 'b';
                t(0.5) === 'b';
                t(1) === 'c';
                t(1000) === 'c';
                t.invertExtent('a'); //returns [undefined, 0]
                t.invertExtent('b'); //returns [0, 1]
                t.invertExtent('c'); //returns [1, undefined]
                ```
    - Ordinal Scales - for discrete input domains, such as names or categories.
        + `d3.scale.ordinal()`
        + `domain([values])`
        + `range([values])`
        + `ordinal.rangePoints(interval[, padding])`

            ```javascript
            var o = d3.scale.ordinal()
                .domain([1, 2, 3, 4])
                .rangePoints([0, 100]);

            o.range(); // [0, 33.333333333333336, 66.66666666666667, 100]
            ```

            padding is zero by default.

        + `ordinal.rangeRoundPoints(interval[, padding])`, 保证 range 取整

            ```javascript
            var o = d3.scale.ordinal()
                .domain(d3.range(50))
                .rangeRoundPoints([0, 95]);

            o.range(); // [23, 24, 25, …, 70, 71, 72]
            o.rangeRoundPoints([0, 100]);
            o.range(); // [1, 3, 5, …, 95, 97, 98]
            ```
        + `ordinal.rangeBands(interval[, padding[, outerPadding]])`

            ```javascript
            var o = d3.scale.ordinal()
                .domain([1, 2, 3])
                .rangeBands([0, 100]);

            o.rangeBand(); // 33.333333333333336
            o.range(); // [0, 33.333333333333336, 66.66666666666667]
            o.rangeExtent(); // [0, 100]
            ```

        + Categorical Colors
            * `d3.scale.category10()`
        + ColorBrewer

    - Time Scales - for time domains.

    The following time formats are considered:

      - `%Y` - for year boundaries, such as "2011".
      - `%B` - for month boundaries, such as "February".
      - `%b %d` - for week boundaries, such as "Feb 06".
      - `%a %d` - for day boundaries, such as "Mon 07".
      - `%I %p` - for hour boundaries, such as "01 AM".
      - `%I:%M` - for minute boundaries, such as "01:23".
      - `:%S` - for second boundaries, such as ":45".
      - `.%L` - milliseconds for all other times, such as ".012".

    refs and see also

      - [Ordinal Scales · mbostock/d3 Wiki](https://github.com/mbostock/d3/wiki/Ordinal-Scales)
      - [Time Scales · mbostock/d3 Wiki](https://github.com/mbostock/d3/wiki/Time-Scales)

---

The `ID_1` property contains a unique numeric value for every state in the array.
If we insert this as an `id` attribute into the DOM, then we would create a quick and easy way to select each state in the country.

Let's update the enter method to bind our new `click` method to every new
DOM element that  enter appends:

```javascript
//Enter
mexico.enter()
    .append('path')
    .attr('d', path)
    .attr('id', geoID)
    .on("click", click);
```

```javascript
setInterval(function(){
    mexico.transition().duration(500)
    .style('fill', function(d) {
        return color(Math.floor((Math.random() * 32) + 1));
    });
},2000);
```

```javascript
d3.csv('cities.csv', function(cities) {
    var cityPoints = svg.selectAll('circle').data(cities);
    var cityText = svg.selectAll('text').data(cities);
    cityPoints.enter()
        .append('circle')
        .attr('cx', function(d) {return projection ([d.lon, d.lat])})
        .attr('cy', function(d) {return projection ([d.lon, d.lat])})
        .attr('r', 4);
});
```

---

The Event interface is used to provide **contextual information** about an event to
the handler processing the event. An object that implements the Event interface
is generally passed as the first parameter to an event handler. More specific
context information is passed to event handlers by deriving additional interfaces
from Event which contain information directly relating to the type of event they
accompany. These derived interfaces are also implemented by the object passed to
the event listener.

```javascript
varbtn = document.getElementById('btn');
btn.addEventListener('click', function() {
    console.log('Hello world'); }, false );
```

`false` 是说这个 `event` 处理完了，别人还可以继续处理。（done with it？No(false).）

```css
#tooltip {
    position: absolute;
    z-index: 2;
    background: rgba(0,153,76,0.8);
    width:130px;
    height:20px;
    color:white;
    font-size: 14px;
    padding:5px;
    top:-150px;
    left:-150px;
    font-family: "HelveticaNeue-Light", "Helvetica Neue Light",
    "Helvetica Neue", Helvetica, Arial, "Lucida Grande", sans-serif;
}
```

```javascript
var hover = function(d) {
    var div = document.getElementById('tooltip');
    div.style.left = event.pageX +'px';
    div.style.top = event.pageY + 'px';
    div.innerHTML = d.properties.NAME_1;
};
```

[Towards Reusable Charts](https://bost.ocks.org/mike/chart/)

:   这篇文章写得真是循序渐进！

    I jest (开玩笑的).

    ```javascript
    fun()                                    // no configs?
        -> fun(width, height)                // fixed?
        -> fun(config)                       // cool
        -> fun(config){return fun(){}}       // and efficient, (closure)
    ```

    [Method chaining - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Method_chaining)

    :   Method chaining, also known as named parameter idiom, is a common syntax
        for invoking multiple method calls in object-oriented programming languages.

        cpp

        :   ```cpp
            ostream & operator << (ostream &os, Person const &person)
            {
                return os << "Hello, my name is "
                          << person.m_name
                          << " and I am "
                          << person.m_age
                          << " years old.";
            }
            ```

        ruby

        :   ```ruby
            class Person

              def name(value)
                @name = value
                self
              end

              def age(value)
                @age = value
                self
              end

              def introduce
                puts "Hello, my name is #{@name} and I am #{@age} years old."
              end

            end

            person = Person.new
            person.name("Peter").age(21).introduce
            # => Hello, my name is Peter and I am 21 years old.
            ```

        jQuery

        :   ```javascript
            // chaining
            $("#person").slideDown('slow')
               .addClass('grouped')
               .css('margin-left', '11px');
            ```

        java

        ```java
        public Person setName(String name) {
            this.name = name;
            return this;
        }
        ```

        python

        ```python
        def name(self, value):
            self.name = value
            return self
        ```

    ```javascript
    function chart() {
      var width = 720, // default width
          height = 80; // default height

      function my() {
        // generate chart here, using `width` and `height`
      }

      my.width = function(value) {
        if (!arguments.length) return width;
        width = value;
        return my;
      };

      my.height = function(value) {
        if (!arguments.length) return height;
        height = value;
        return my;
      };

      return my;
    }
    ```

    The chart can now be configured, but two essential ingredients are still
    missing: the DOM element into which to render the chart (such as a particular
    `div` or `document.body`), and the data to display. These could be considered
    configuration, but D3 provides **a more natural representation for data and
    elements: the selection**.

    The simplest way of invoking our chart function on a selection, then, is to
    **pass the selection as an argument**: `myChart(selection);`{.javascript}

    Or equivalently, using selection.call: `selection.call(myChart);`{.javascript}

    From the API reference:

    > `[call]` invokes the specified function once, passing
    > in the current selection…
    > The call operator is identical to invoking a function by hand;
    > but it **makes it easier to use method chaining**.

    Internally, a call-based chart implementation looks something like this:

    ```javascript
    function my(selection) {
      selection.each(function(d, i) {
        // generate chart here; `d` is the data and `this` is the element
      });
    }
    ```

    You could also design your chart function to work directly with selection.each,
    but selection.call is more general and has precedent with the brush and axis
    components.

    We now have a **strawman convention** for reusable visualization components.

    <div class="tzx-drawer" shy>
    Straw Man

    :   In software development, **a crude plan or document** may serve as
        the strawman or starting point in the evolution of a project. The
        strawman is not expected to be the last word; it is **refined** until a
        final model or document is obtained that resolves all issues concerning
        the scope and nature of the project. In this context, a strawman can
        take the form of an outline, a set of charts, a presentation, or a
        paper.

        The ‘Straw Man’ also fits in neatly with the concept of iterative
        design, repeating and re-drafting to improve an initial concept or
        design. If anything is built, often, it may not end up in the final
        product. It might be that the decision is to not continue at all, in
        which case, the ‘Straw Man’ approach may have saved a lot of wasted
        work in the long run. Or, the final approach may be very different from
        the first model. Either way, the‘Straw Man’ will have proven its worth
        by having re-directed the approach before any significant work is
        undertaken.
    </div>

    refs and see also

      - [Straw man proposal - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Straw_man_proposal)

---

```javascript
var zoomed = function () {
    map.attr("transform",
             "translate("+ d3.event.translate + ") scale(" + d3.event.scale + ")");
};

var zoom = d3.behavior.zoom()
    .scaleExtent([1, 8])
    .on("zoom", zoomed);
    .size([width, height]);
```

<div class="tzx-drawer" shy>
[Zoom Behavior · mbostock/d3 Wiki](https://github.com/mbostock/d3/wiki/Zoom-Behavior)

:   ```javascript
    var zoom = d3.behavior.zoom();
    selection.call(zoom);
    ```

    All registered listeners use the “zoom” namespace, so to subsequently
    remove the behavior: `selection.on(".zoom", null);`{.javascript}

    `zoom.scaleExtent([extent])`, defaults to [0, Infinity].

    `zoom.center([center])`

    :   If center is specified, sets the [focal point](http://bl.ocks.org/mbostock/6226534) `[x, y]`
        for mousewheel zooming and returns this zoom behavior. If center is not
        specified, returns the current focal point, which defaults to null. A
        null center indicates that mousewheel zooming should zoom in and out
        around the current mouse location.

    `zoom.on(type, listener)`

    :   Registers the specified listener to receive events of the specified
        type from the zoom behavior. The following types are supported:

          - zoomstart - at the start of a zoom gesture (e.g., touchstart).
          - zoom - when the view changes (e.g., touchmove).
          - zoomend - at the end of the current zoom gesture (e.g., touchend).
</div>

```javascript
svg.append("rect")
    .attr("class", "overlay")
    .attr("width", width)
    .attr("height", height)
    .call(zoom);
```

```javascript
var height = 600;
var width = 900;
var projection = d3.geo.orthographic().clipAngle(90);
var path = d3.geo.path().projection(projection);

d3.json('world.json', function(data) {
    var countries = topojson.feature(data, data.objects.countries);
    var map = svg.append('g').attr('class', 'boundary');
    var world = map.selectAll('path').data(countries.features);
});

world.enter()
    .append('path')
    .attr('d', path);

mexico.enter()
    .append('path')
    .attr('class', 'mexico')
    .attr('d', path)
    .style('fill', 'lightyellow').style('stroke', 'orange');

project.rotate([0,i,0]);
```

<http://www.jasondavies.com/maps/rotate/>

---

**Finding and Working with Geographic Data**

shapefile:

  - a large repository of free shapefiles located at <http://diva-gis.org>
  - con: too big, binary
  - but we can  leverage the large repository of shapefiles and convert them to
    GeoJSON and TopoJSON. (These are js friendly.)

<https://github.com/mbostock/topojson/wiki/Command-Line-Reference>


```javascript
topojson -o spain-topo.json -p -- ESP_adm0.shp
topojson -o spain-topo.json –p name=ISO -- ESP_adm0.shp
# -p target=source,target=source,target=source
```

- GeoJSON: 6.4 MB
- TopoJSON: 379 KB

<http://bost.ocks.org/mike/simplify/>

simplification

`-p name=ISO -s 7e-7 -- ESP_adm0.shp`

merging files

```javascript
topojson -o ../topojson/spain-topo-simple.json \
    -p name=ISO -s 7e-7 -- \
    ESP_adm0.shp ESP_adm1.shp
topojson -o ../topojson/spain-topo-simple.json \
    -p name=ISO -s 7e-7 -- \
    country=ESP_adm0.shp regions=ESP_adm1.shp
```

- `var country = topojson.feature(data, data.objects.ESP_adm0);`
- `var country = topojson.feature(data, data.objects.country);`

vendor: This directory contains all the external libraries that we need to use
in the visualization and is loaded at the bottom of the `index.html` file:

```html
<script src="vendor/d3.min.js"></script>
<script src="vendor/topojson.v1.min.js"></script>
```

```javascript
var x = d3.scale.linear(),
y = d3.scale.ordinal();

x.domain([0, my.profitMax(chartData)])
.range([0,my.w()]);
y.domain(my.categories(chartData))
.rangeRoundBands([0, my.h()], 0.2);

d3.select("#chart").datum(data()).call(viz.draw);
```

---

git clone git://github.com/NickQiZhu/d3-cookbook.git

The D3 gallery ( https://github.com/mbostock/d3/wiki/Gallery ) contains
some of the most interesting examples that you can find online regarding D3 usage.
It contains examples on different visualization charts, specific techniques, and some
interesting visualization implementations in the wild, among others.
f BioVisualize (http://biovisualize.github.io/d3visualization ) is
another D3 gallery with categorization, to help you find your desired visualization
example online quickly.
f The D3 tutorials page ( https://github.com/mbostock/d3/wiki/Tutorials )
contains a collection of tutorials, talks and slides created by various contributors over
time, to demonstrate in detail how to use a lot of D3 concepts and techniques.
f D3 plugins ( https://github.com/d3/d3-plugins ). Maybe some features are
missing in D3 for your visualization needs? Before you decide to implement your
own, make sure to check out D3 plugin repository. It contains a wide variety of
plugins that provide some of the common and, sometimes, uncommon features in
the visualization world

The D3 API ( https://github.com/mbostock/d3/wiki/API-Reference ) is
very well documented. This is where you can find detailed explanations for every
function and property that the D3 library has to offer.
f Mike Bostok's Blocks ( http://bl.ocks.org/mbostock ) is a D3 example site,
where some of the more intriguing visualization example can be found and which is
maintained by its author Mike Bostock.
f JS Bin ( http://jsbin.com/ugacud/1/edit ) is a pre-built D3 test and
experiment environment completely hosted online. You can easily prototype a simple
script using this tool or share your creation with other members in the community.
f JS Fiddle ( http://jsfiddle.net/qAHC2/ ) is similar to JS

---

[malloc 与 free？ - 知乎](https://www.zhihu.com/question/41567197#answer-32596782)

:   我先问你个问题：指针中是没有所在内存块大小的信息的，那么 free 怎么才能知道
    要释放的内存块有多大呢？于是，对于大多数内存分配器，malloc 申请的实际内存比
    你要求的空间要大几个字节，里面存储了额外的数据来记录这块内存有多大，一般就
    是直接存在指针左边。free 的时候，就会去读取指针地址减去一个常数之后的那块内
    存，来获取内存块的信息。因此如果你 free 一个不指向内存块开始处的指针，free
    的时候就会把其他的数据错误解释成内存块的信息，（大概率）导致程序崩溃。当然
    现代的内存分配器对于不同大小的内存申请，会采用不同的分配策略，但无论策略如
    何，去 free 一个不是 malloc 来的指针，都是非常危险的举动。

    作者：Belleve

    **初学者的话，不要多想，把 CSAPP 看了再说。**

    C 是一门**设计感不是很强的语言**，换句话说很多东西就是没什么道理和规律可循
    的，要知道具体的问题和当时的写法才能明白其中道理。

    比如吧，malloc 是个内存管理 package，并不是一个很底层的东西。 更加底层的看，
    一个程序有一大块内存，叫作 heap。但是呢，heap 的大小是有限的，用完了问操作系
    统要更多 heap，是很耗费资源的，于是就需要内存管理系统来帮助整理 heap，提高利
    用率。

    这个时候就要在内存里面建立一个链表，把没有用的内存块，大小等等都储存起来，
    方便按照大小取用。随着内存块被 malloc 和被 free，这些 free block 也会被打散和合
    并。之所以可以做到，就是因为默认每个内存块的首尾都记录有信息。

    你任意在内存块里移动，free 的时候程序自动往前读一个 block，发现的却不是一个完
    整的 tag (你自己放了什么就是什么)，assertion failure 已经是小事了，基本上会
    segfault，运气不好你会跳到别的内存块去，损坏一大片内存。

    所以，不要乱搞。CSAPP 里自己写过一个 malloc 就明白了。

    当然了，国内一般是不教 Linux 和 bash 一类的，国内很多人是不会用的，这也是为啥大
    家都觉得 windows 好的一个原因。**我可以负责任地说我在美国读的 CS 本科，系里没有一
    台 Windows 电脑。**

    电池是化学工业。

    新材料的研发难度是知乎这群程序员根本无法想象的。程序员们都活在完美的无熵世
    界里，邱奇和图灵命定了整个世界的法则。律法是存在的，而且是万能的，我们只需
    要跟从律法，就能得到想要的结果——如果它不对，一定是我的问题，找到改正就好。
    醒醒吧，真实世界远远比你们的小世界可怕，我们面对的是一片漆黑和死寂，我们不
    知道规则，不知道哪里是致命的陷阱：做材料研究的是在和上帝搏斗。

    做个不恰当的比喻：研发新材料的难度好比 @李阿玲 徒手写 TeX：一次写出一个四万
    行的程序，各个部件耦合性极强且无法解耦，写完前无法预测结果，无法单元测试……
    啊不对，材料研究比 @李阿玲 更加令人绝望，因为 @李阿玲 好歹可以去 debug，材
    料的性质不对无法 debug，只能改配方重新合成一份来 **trial-and-error**，错了不知
    道为什么，最后成功了也不知道为什么……因此真无怪乎有些人把材料科学比作「往下
    水道扔钱」。有人问计算化学——很好，我们组就是做计算化学的，优化一个 30 原子
    的小分子结构需要两个小时；预测两个小分子的反应产物需要整整一天。我不认为地
    球上有一台超算能在人类可接受的时间内算出某个电池结构的电量。

     refs and see also

      - [电池技术为什么如此高深莫测，以至于一直是手机等相关行业的短板？](https://www.zhihu.com/question/27604615/answer/37295615)

[看了三遍，越发认定它是最好的华语青春片 - 简书](http://www.jianshu.com/p/5be18abc2313#)

:   塞缪尔·乌尔曼

    :   青春不是数量而是一种品质，一旦获得就不会失去。

    塞林格, 《麦田里的守望者》

    :   一个不成熟男人的标志是他愿意为某种事业英勇地死去，一个成熟男人的标志是他愿
        意为某种事业卑贱地活着。

---

离群索居

:   离群索居的意思就是远离人群，自己一个人居住，泛指不合群，孤独的人。索：孤单，离开集体或群众，过孤独的生活。

    > 吾离群而索居，亦已久矣。
    > --《礼记·檀弓上》

    春秋时期，孔子的学生子夏生性孤僻，平时很少与同学合群，只与曾参比较要好。子
    夏的儿子死了，他差一点哭瞎了眼睛。曾参前去批评他，子夏听后，如梦初醒，觉得
    自己离群索居很久就造成这样，于是节哀顺变，与同学玩成一片。

Calibre 不知道为什么书都没了，需要点击 `Calibre Library` 然后 `恢复数据库` 进行恢复。

[Showdown.js, markdown editor](http://showdownjs.github.io/demo/#/Welcome%20to%20Dvorak4tzx's%20Blog%0A%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D%3D)

[Les Misérables Co-occurrence](https://bost.ocks.org/mike/miserables/)

[如何成为一名数据科学家？](https://www.zhihu.com/question/21592677#answer-31441560)

:   how to become a quant?

    自学是一件非常寂寞的事情，希望所有有理想成为 Data scientist 的你能坚持下来，
    人生会因此大不同。

    答主通过学习过来人经验总结，咨询前辈，大量研究 job description, 制定了自学
    的几大块内容：统计，SAS R Python 编程，机器学习，Hadoop 家族产品。

    统计：

      - 1）统计基础：相信大部分专业本科和研究生的基础课程都少不了统计基础，什么
        F 检验，T 检验，ANOVA，置信区间，几款经典的 distribution 等等。那花个两三
        天时间来巩固一下热热身吧！我用的是 PSU Applied Statistics 文字版网课
        Welcome to STAT 500! 内容完善讲解细致的良心之作啊！
      - 2）Regression: 必学，一个系列的网课 Welcome to STAT 501! 一共 15 个 Lesson
        ，一天一个，两个礼拜轻松搞定，同时找些作业题来做，google 一下一大把。学
        完之后如果感觉良好渐入佳境了，后面的学习就可以适当提提速啦。
      - 3）DOE: 答主上过这门课所以没有自学经验可分享，有同系列网课大家可以用用
        看看 Welcome to STAT 502! 和 Welcome to STAT 503!

    SAS：

    广泛应用在各行各业，尤其是大公司，尤其是银行保险业，把 base 和 advanced 两个
    证考了，基本就掌握得差不多了，面试的题都不会超出这个范围。答主考证的学习材
    料：

      - Base Learning Path
      - Advanced Learning Path

    答主一年前就考了，当时挺闲的，身边也有人在考，就跟风考个玩玩，没想到还真派
    上用场了，忍不住废话一句：在学东西的时候永远不要去想我学这有什么用，总有一
    天它的价值会显现。建议有空就早点考，挺简单的，用不了多长时间。

    机器学习：

    Andrew Ng 非常有名的 machine learning 公开课：coursera.org 的页面 浅显易懂
    ，值得一学。另外，上面截图 skills 里边的提到的 learning algorithm，答主都逐
    一 google，从 Youtube 到博客到论文，看懂原理，结合 Python 的 scikit learn 实现一
    遍。 最后，来一发 Udacity 的付费网课 Machine Learning Engineer Nanodegree 收
    尾，里边有四个很赞的小 project，认真做一遍，技能点飙升。

    做 Project 就是一个把自己所学进行总结归纳升华的阶段，一定要有自己的想法，是的
    ，自己的想法非常重要，要勤思考，不懂的东西勤问 google。

我的 blocks：

- [050a125b8009c45a1ed0c362cd341dbe - bl.ocks.org](http://bl.ocks.org/district10/050a125b8009c45a1ed0c362cd341dbe)
- [WhuRS - bl.ocks.org](http://bl.ocks.org/district10/16efc4a3e432774f4bfd)

More precisely, the username regular expression is `/^[a-z0-9][a-z0-9]*$/i`; it
should be more lenient. (`['linɪənt]` adj. 宽大的；仁慈的)

[About Blocks - bl.ocks.org](http://bl.ocks.org/-/about)

:   - `.block`
        + license - a supported [SPDX](http://bl.ocks.org/licenses.txt) license code
            * apache-2.0
            * bsd-2-clause
            * bsd-3-clause
            * **cc-by-4.0**
            * cc-by-nc-4.0
            * cc-by-nc-nd-4.0
            * cc-by-nc-sa-4.0
            * cc-by-nd-4.0
            * **cc-by-sa-4.0**
            * cddl-1.0
            * epl-1.0
            * **gpl-2.0**
            * gpl-3.0
            * lgpl-2.1
            * lgpl-3.0
            * **mit**
            * mpl-2.0
            * none
        + height - the iframe height in pixels; defaults to 500
        + scrolling - yes if the iframe should scroll; defaults to no
        + border - no if the iframe should not have a border; defaults to yes
    - `230×120`, thumbnail.png. (960×500 preview.png or preview.jpg)

    Protovis: A JavaScript library for visualization; **superseded by D3**.

---

[Poisson-Disc Sampling](https://www.jasondavies.com/poisson-disc/)

D3 is Data ↦ Elements

Show Reels

Reels: 绕线轮，卷筒；摇晃，旋转（reel的复数形式）, v. 眩晕，旋转，卷，绕（reel的第三人称单数形式）

CSS Selectors

:   ```css
    // Single selector:
    #foo        // <any id="foo"> </any>
    foo         // <foo> </foo>
    .foo        // <any class="foo"> </any>
    [foo=bar]   // <any foo="bar"> </any>
    foo bar     // <foo><bar> </bar></foo>

    // Multiple selectors:
    foo.bar     // <foo class="bar"> </foo>
    foo#bar     // <foo id="bar"> </foo>
    ```

[数学之美系列二十三：输入一个汉字需要敲多少个键_真小人_新浪博客](http://blog.sina.com.cn/s/blog_4fe312f90100bx5y.html~type=v5_one&label=rela_prevarticle)

:   数学之美我早就看过。但是这段我确实不能恭维。

    以后再说为什么。

    知乎上也有人说这段：

    >   ……但是为了证明自己的方法比别人的快，大家继续走偏，单纯追求击键次数少，最
    >   直接的方法就是对词组进行编码，但这样一来，使用者就无法记住了，只有这些输
    >   入法的表演者能记住。这已经不是技术的比赛，而是市场的竞争。最后，王永民的
    >   五笔输入法暂时胜出，但并不是他的编码方法更合理，而是他比其他发明者（大多
    >   数是书呆子）更会做市场而已。现在，即使五笔输入法也已经没有多少市场了，这
    >   一批发没人可以说是全军覆没。

    >   这一代输入法的问题在于减少了每个汉字击键的次数，而忽视了找到每个键的时间
    >   。要求非专业使用者背下这些输入方法里所有汉字的编码是不现实的，这比背 6
    >   000 个 GRE 单词还难。因此，他们在使用这些输入法是都要按照规则临时 “拆字”
    >   ，即找到一个字的编码组合，这个时间不仅长，而且在脱稿打字时严重中断思维。
    >   本书一开头就强调语言和文字作为通信的编码手段，一个重要目的是帮助思维和记
    >   忆。如果一个输入法中断了人们的思维过程，就和人的自然行为不符合。认知科学
    >   已经证明，人一心无二用。过去在研究语音识别时做过很多用户测试，发现使用各
    >   种复杂编码输入法的人在脱稿打字时，速度只有他在看稿打字时的一半到四分之一
    >   。因此，虽然每个字平均敲键次数少，但是敲键盘的速度也慢了很多，总的来看并
    >   不快。因此，广大中国计算机用户对这一类输入法的认可度极低，这是自然选择的
    >   结果。

    李笑来当年写的那个为什么要学五笔，才是真言。

    refs and see also

      - [neuxxm的五笔教程](https://www.douban.com/note/218182753/)

---

![](https://pic3.zhimg.com/7ee5eaaed0d45158cf025675e017536e_r.jpg)

---

[What Makes Software Good? — Medium](https://medium.com/@mbostock/what-makes-software-good-943557f8a488)

:   I don’t want you to learn D3 for the sake of D3. I want you to learn how to
    explore data and communicate insights effectively.

    Good software is **approachable**.
      ~ It can be understood completely in independent, easy pieces. You don’t need
        to understand everything before you can understand anything.

    Good software is **consistent**.
      ~ It lets you take what you’ve learned about one part and extrapolate it to
        the rest. It doesn’t self-contradict. It is parsimonious (`[,pɑrsə'monɪəs]`, 吝啬的), avoiding
        superfluous elements.

    Good software **explains itself**.
      ~ It has affordances for learning and discovery. It is role-expressive and
        minimizes hidden magic.

    Good software **teaches**.
      ~ It doesn’t just automate an existing task, but provides insight or imparts
        knowledge, such as a best practice or a new perspective on a problem.

    Good software **is for humans**.
      ~ It is cognizant of people and the reality in which they live. It does not
        expect elaborate and arbitrary rules to be memorized. It anticipates the
        need for learning and debugging.

[UW Interactive Data Lab](http://idl.cs.washington.edu/)

[Visualizing Algorithms](https://bost.ocks.org/mike/algorithms/)

```javascript
// DON’T DO THIS!
function shuffle(array) {
  return array.sort(function(a, b) {
    return Math.random() - .5; // ಠ_ಠ
  });
}
```

Thank you for reading!

---

-   我对有才华的人特别没办法。
-   因为这些优点都是可以表演出来的。

[知乎周刊・完全不像处女座（总第 045 期） - 知乎用户 | 豆瓣阅读](https://read.douban.com/ebook/5054304/)

:   所谓巴纳姆效应，就是说那些模棱两可，放到谁身上都准确的话。19 人

    占星学是研究星体运行轨迹和特质与人类世界或个人经历的共变关系的一种学问。这
    里的重点是共变关系，不是因果关系。15 人

    人生是什么呢？就是一部分可知，而一部分不可知的一个混合体。10 人

    什么样的人会信星座呢？就是在生活中遇到了问题的人：沟通的问题、关系的问题、
    不确定感的问题、自我怀疑的问题、没有话题可聊的问题、过去未解决的问题、将来
    没发生的问题……而星座，就是他们用来解决问题的一种工具。5 人

    时间和耐心都已变成奢侈品，我们只能靠星座了解彼此。5 人

    信佛也有不同的信法，就好比看别人走钢丝，有人的「信」，是站在安全的位置，口
    中说着「我相信他不会掉下去的」。而另一些人的「信」，则是敢于让走钢丝的的人
    背着他走，说「我相信你不会让我掉下去的」。4 人

    **大部分「受骗」的人，往往是心甘情愿地让自己「受骗」。**4 人

    黑处女座绝对不是黑处女座本身，而是去黑「具备处女座性格的这类人」。4 人

    你那么美好，你应该爱这个世界。4 人

    我们都是理科生，但不妨碍我们每天聊这种伪科学话题傻呵呵地开心。

---

纵然不是胡编，但基本也和“今天阴间多云，部分地区会有阳光，时有阵风阵雨”一样，总是能准的。

---

[哲学家--王浩_刘湘_博联社](http://home.blshe.com/blog.php?uid=15395&id=30002)

:   跟某同学<span class="tzx-hide">(小璇璇)</span>聊天的时候说到了王浩。为了确保
    没说错，过后我又查了一下。话说我是在《上学记》里知道的这个人。

    王浩是中国有史以来唯一对哲学做过深刻贡献的学者。尽管在数学、计算机、逻辑都
    做过开拓性工作，但他内心把自己当哲学家，这极像哥德尔。

    王浩在联大的老师有金岳霖、沈有鼎、王宪钧。金是哲学票友，但比同辈的胡适、冯
    友兰更在行。沈有鼎在哈佛学过逻辑，老师有怀特海（罗素的老师）、谢佛（逻辑学
    家），还有蒯因（王浩后来的导师），但他读完硕士就到欧洲找胡塞尔和海德格尔去
    了。王宪钧是哥德尔唯一的中国学生。牛人的圈子真是不大啊。

    在联大，金岳霖开逻辑学入门课，课上基本就是师徒俩对练，金经常讲着讲着就
    问王浩：“哎，你小子说说咋回事啊？” 王宪钧讲数理逻辑，沈有鼎讲维特根斯坦《逻
    辑哲学论》。有一次金岳霖想看哥德尔不完全性定理的论文，沈有鼎当众告诉他：你
    数学不行，看不懂的。金挺识时务，说不看就不看呗。

    王浩1948年哈佛博士毕业，然后拿了三年哈佛的Junior Fellow，比较高级的博士后。
    他是第一个拿这个Fellowship的中国人。那一年哈佛一共给了四个Junior Fellow，其
    中还有一位物理系的，叫托马斯·库恩，对，就是那个提出“科学革命”和“范式”的库恩
    。库恩这三年全干哲学了。但王浩看不起库恩，说库恩干的不是哲学，是科学史。

    他证明了图灵机都可转为一组王氏砖（Wang tile）。

    王浩是机器定理证明的奠基人。他在 1958 年夏天写的程序在 IBM-704 上, 只用九分钟就
    证明了罗素《数学原理》中一阶逻辑的全部定理。

    王浩在后一本著作《超越分析哲学》中改变了方法，通过评论先哲来阐述自己的思想
    。在该书中，王浩评论了罗素、维特根斯坦、卡尔纳普和蒯因，可算现代哲学的学术
    史。他评论逻辑：大部分物理学家赞同基础物理在物理学的核心地位，却很少有数学
    家对逻辑持相同的看法。王浩的这种通过第三方来兜售自己哲学的方法在Reflections
    on Kurt Godel中表现得更突出。康宏逵先生将此书译为《哥德尔》，Reflections其
    实是王浩的哲学方法。他1979后在国内只讲数理逻辑，绝口不提辩证法。他的讲义后
    来编成《数理逻辑通俗讲话》，金岳霖题写书名，这书其实并不通俗。

    他、汉妮和何兆武同去德国海德堡时，何告诉王浩山里有条当年黑格尔散步的“哲学家
    小道”（Philosophers' Walk），何和汉妮休息，王浩自己走了一趟，何问王感觉如何
    ，王说：from nothing to nothing（从无到无）。 ^[这句话就是从《上学记》看到的。]

    refs and see also

      - [王浩 (数学家) - 维基百科，自由的百科全书](https://zh.wikipedia.org/zh-cn/%E7%8E%8B%E6%B5%A9_(%E6%95%B0%E5%AD%A6%E5%AE%B6))
      - [上学记 (豆瓣)](http://book.douban.com/subject/1859140/)
      - [Wang tile - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Wang_tile)
      - [纪念王浩先生](https://www.douban.com/group/topic/5005555/)

[dashed/pandoc-seed-project: Seed git repo for pandoc based projects. Just clone and pandoc.](https://github.com/dashed/pandoc-seed-project)

---

[语言简洁的好处 - 简书](http://www.jianshu.com/p/8b1dc305a26d)

:   举个例子，[偷书贼](http://movie.douban.com/subject/21348876/) 里严厉的老师
    让小女主人公自我介绍：

    > “Chalk，Name，Board（粉笔，名字，黑板）”。

    真是太简洁了~ 如果换成是“用粉笔把你的名字写在黑板上”，那就完全没有味道了。

[把 ANSI 編碼轉化爲 UTF-8 - 简书](http://www.jianshu.com/p/22c2f5af5a21)

:   encoding, utf8

    ```bash
    # 檢測
    $ file -i *
    file1: text/plain; charset=utf-8
    file2: text/plain; charset=iso-8859-1
    file3: text/plain; charset=gbk

    # 轉化
    $ iconv -f gbk -t utf-8 file3 > file3-utf8.txt # or '-f GBK'

    # 列出支持的編碼
    iconv -l               # list all supported encodings
    ```

    ```
    $ vim file3.txt
    # convert to utf-8 in place
    :w ++enc=utf-8
    # write to another file
    :w ++enc=utf-8 file3-utf8.txt

    :set encoding=utf-8
    :set fileencoding=utf-8
    :set fileformat=unix ; ff
    ```

    refs and see also

      - [file encoding, -dvorak4tzx](http://dvorak4tzx.lofter.com/post/1d4021c8_861c876)

---

```yaml
language: c
sudo: required
before_install:
install:
  - cd ~
  - wget https://github.com/jgm/pandoc/releases/download/1.17/pandoc-1.17-1-amd64.deb
  - sudo dpkg -i pandoc*.deb
  - wget http://devtools.qiniu.com/qiniu-devtools-linux_amd64-current.tar.gz
  - tar xfz qiniu-devtools-linux_amd64-current.tar.gz
  - sudo cp qrsync /bin
  - git clone https://github.com/district10/aha.git
  - cd aha && make && sudo make install
script:
  - cd ~/build/district10/blog;
  - cat conf.json.in | sed -e "s/QiNiuAK/$QiNiuAK/" | sed -e "s/QiNiuSK/$QiNiuSK/" > conf.json
  - make
  - # make items make move extras
  - # make filter
  - make qiniu; rm conf.json;
after_success:
  - cd ~/build/district10/blog; rm -Rf .git; rm -Rf publish; mkdir -p publish
  - git init; git add -A; git commit -m "pushing to coding:master, lazy me @ `date`"
  - git remote add origin git@git.coding.net:dvorak4tzx/dvorak4tzx.git
  - git push -u origin HEAD:master --force
  - rm -Rf .git
  - make && make extras
  - cd publish
  - git init; git add -A; git commit -m "pushing to coding:coding-pages, lazy me @ `date`"
  - git remote add origin git@git.coding.net:dvorak4tzx/dvorak4tzx.git
  - git push -u origin HEAD:coding-pages --force
```

```css
::selection {
    color: #9ddcff;
    background: black;
}
::-moz-selection {
    color: #9ddcff;
    background: black;
}

h1::selection { color: #9ddcff; }
h1::-moz-selection { color: #9ddcff; }
```

---

[Space, Place and GIS – ButMan World](http://butman.club/notes/cyber/space-place-and-gis/)

:   Determining latitude and longitude is a measurement problem, and like all
    measurements these will contain a degree of uncertainty.

    Neogeography (literally “**new geography**”) is the use of geographical
    techniques and tools for personal and community activities or by a
    non-expert group of users. Application domains of neogeography are
    typically not formal or analytical.

[Big Data, Human Dynamics and Space – Time GIS – ButMan World](http://butman.club/notes/cyber/big-data-human-dynamics-and-space-time-gis/)

:   Moving bundle：感觉更多地强调事物的流动性，相比 Stationary bundle 不同的是，
    Moving bundle 里的个体的更新更为迅速，多数情况下也是自发的。

    Where is google？在不同国家的 google 搜索引擎上检索同一个关键字，得到的结果
    是不尽相同的。随即引出在 virtual space 里的 object 无法用传统 GIS 的
    reference system 进行描述和度量，传统 GIS 需要新的血液。

[花生的别样人生 - 简书](http://www.jianshu.com/p/55dc2e0d192e)

[AlphaGo与人工智能](http://www.yinwang.org/blog-cn/2016/03/09/alpha-go)

:   本来玩个游戏而已，恁要吹成是“历史性的人机大战”，说得好像是机器挑战了人类的
    智能，伤了人类的自尊似的。

[RSS 与三不主义](http://www.yinwang.org/blog-cn/2014/09/17/rss)

:   可是有了 RSS 就不一样了，因为它转换了被动与主动的关系。本来读者是“主动”来看
    我的博客，我是“被动”的，是不需要负责的。然而一旦有了 RSS，每一次发布却感觉
    好像是我“主动”在推给他们看，是我很想让他们看一样，是要负责的。**某些人取消关
    注别人的微博时，口气总是好像觉得自己关注一个人，是给了他很大的面子一样，所
    以他们用取消关注来表示他们的“惩罚”。这些人显然把自己看得太高贵了。**

    机器的“学习能力”，并没有比石头高出很多，因为机器学习说白了，只不过是通过大
    量的数据，统计拟合出某些函数的参数。

    著名的认知科学家 Douglas Hofstadter（《GEB》的作者），早就指出 AI 领域的那些热
    门话题，比如电脑下棋，跟真正意义上的人类智能，几乎完全不搭边。绝大部分人其
    实不明白思考和智能到底是什么。大部分所谓 AI 专家，对人脑的工作原理所知甚少，
    甚至完全不关心。

    （当然，我并不觉得这有什么问题。人脑里面有一些东西可以借鉴，但不代表不研究脑科学，
    人类就造不出更好的“脑”。）

[bocker/bocker at master · p8952/bocker](https://github.com/p8952/bocker)

:   **I can make no guarantees that it won't trash your system.**

    （代码整理过，只为更“好”地查看。真是 Bash 脚本的各种运用。）

    ```bash
    #!/usr/bin/env bash
    set -o errexit -o nounset -o pipefail; shopt -s nullglob
    btrfs_path='/var/bocker' && cgroups='cpu,cpuacct,memory';
    [[ $# -gt 0 ]] && while [ "${1:0:2}" == '--' ]; do
        OPTION=${1:2};
        [[ $OPTION =~ = ]] && declare "BOCKER_${OPTION/=*/}=${OPTION/*=/}"
                           || declare "BOCKER_${OPTION}=x";
        shift;
    done

    function bocker_check() {
        btrfs subvolume list "$btrfs_path" | grep -qw "$1" && echo 0 || echo 1
    }

    #HELP Create an image from a directory:\nBOCKER init <directory>
    function bocker_init() {
        uuid="img_$(shuf -i 42002-42254 -n 1)"
        if [[ -d "$1" ]]; then
            [[ "$(bocker_check "$uuid")" == 0 ]] && bocker_run "$@"
            btrfs subvolume create "$btrfs_path/$uuid" > /dev/null
            cp -rf --reflink=auto "$1"/* "$btrfs_path/$uuid" > /dev/null
            [[ ! -f "$btrfs_path/$uuid"/img.source ]] \
                    && echo "$1" > "$btrfs_path/$uuid"/img.source
            echo "Created: $uuid"
        else
            echo "No directory named '$1' exists"
        fi
    }

    #HELP Pull an image from Docker Hub:\nBOCKER pull <name> <tag>
    function bocker_pull() {
        token="$(\
                    curl -sL -o /dev/null -D- \
                        -H 'X-Docker-Token: true' \
                        "https://index.docker.io/v1/repositories/$1/images" \
                | tr -d '\r' \
                | awk -F ': *' '$1 == "X-Docker-Token" { print $2 }'        )"
        registry='https://registry-1.docker.io/v1'
        id="$(\
                    curl -sL -H "Authorization: Token $token" \
                        "$registry/repositories/$1/tags/$2" \
                    | sed 's/"//g'                              )"
        [[ "${#id}" -ne 64 ]] && echo "No image named '$1:$2' exists" && exit 1
        ancestry="$(\
                        curl -sL -H "Authorization: Token $token" \
                            "$registry/images/$id/ancestry"         )"
        IFS=',' && ancestry=(${ancestry//[\[\] \"]/}) && IFS=' \n\t';
        tmp_uuid="$(uuidgen)" && mkdir /tmp/"$tmp_uuid"
        for id in "${ancestry[@]}"; do
            curl -#L -H "Authorization: Token $token" \
                    "$registry/images/$id/layer" \
                    -o /tmp/"$tmp_uuid"/layer.tar
            tar xf /tmp/"$tmp_uuid"/layer.tar \
                    -C /tmp/"$tmp_uuid" && rm /tmp/"$tmp_uuid"/layer.tar
        done
        echo "$1:$2" > /tmp/"$tmp_uuid"/img.source
        bocker_init /tmp/"$tmp_uuid" && rm -rf /tmp/"$tmp_uuid"
    }

    #HELP Delete an image or container:\nBOCKER rm <image_id or container_id>
    function bocker_rm() {
        [[ "$(bocker_check "$1")" == 1 ]] && \
        echo "No container named '$1' exists" && \
        exit 1
        btrfs subvolume delete "$btrfs_path/$1" \
                > /dev/null
        cgdelete -g "$cgroups:/$1" &> /dev/null || true
        echo "Removed: $1"
    }

    function bocker_images() { #HELP List images:\nBOCKER images
        echo -e "IMAGE_ID\t\tSOURCE"
        for img in "$btrfs_path"/img_*; do
            img=$(basename "$img")
            echo -e "$img\t\t$(cat "$btrfs_path/$img/img.source")"
        done
    }

    function bocker_ps() { #HELP List containers:\nBOCKER ps
        echo -e "CONTAINER_ID\t\tCOMMAND"
        for ps in "$btrfs_path"/ps_*; do
            ps=$(basename "$ps")
            echo -e "$ps\t\t$(cat "$btrfs_path/$ps/$ps.cmd")"
        done
    }

    #HELP Create a container:\nBOCKER run <image_id> <command>
    function bocker_run() {
        uuid="ps_$(shuf -i 42002-42254 -n 1)"
        [[ "$(bocker_check "$1")" == 1 ]] \
                && echo "No image named '$1' exists" && exit 1
        [[ "$(bocker_check "$uuid")" == 0 ]] \
                && echo "UUID conflict, retrying..." && bocker_run "$@" \
                && return
        cmd="${@:2}" \
                && ip="$(echo "${uuid: -3}" | sed 's/0//g')" \
                && mac="${uuid: -3:1}:${uuid: -2}"
        ip link add dev veth0_"$uuid" type veth peer name veth1_"$uuid"
        ip link set dev veth0_"$uuid" up
        ip link set veth0_"$uuid" master bridge0
        ip netns add netns_"$uuid"
        ip link set veth1_"$uuid" netns netns_"$uuid"
        ip netns exec netns_"$uuid" \
                    ip link set dev lo up
        ip netns exec netns_"$uuid" \
                    ip link set veth1_"$uuid" address 02:42:ac:11:00"$mac"
        ip netns exec netns_"$uuid" \
                    ip addr add 10.0.0."$ip"/24 dev veth1_"$uuid"
        ip netns exec netns_"$uuid" \
                    ip link set dev veth1_"$uuid" up
        ip netns exec netns_"$uuid" \
                    ip route add default via 10.0.0.1
        btrfs subvolume snapshot \
                "$btrfs_path/$1" "$btrfs_path/$uuid" > /dev/null
        echo 'nameserver 8.8.8.8' > "$btrfs_path/$uuid"/etc/resolv.conf
        echo "$cmd" > "$btrfs_path/$uuid/$uuid.cmd"
        cgcreate -g "$cgroups:/$uuid"
        : "${BOCKER_CPU_SHARE:=512}" \
        && cgset \
            -r cpu.shares="$BOCKER_CPU_SHARE" "$uuid"
        : "${BOCKER_MEM_LIMIT:=512}" \
        && cgset \
            -r memory.limit_in_bytes="$((BOCKER_MEM_LIMIT * 1000000))" "$uuid"
        cgexec -g "$cgroups:$uuid" \
            ip netns exec netns_"$uuid" \
            unshare -fmuip --mount-proc \
            chroot "$btrfs_path/$uuid" \
            /bin/sh -c "/bin/mount -t proc proc /proc && $cmd" \
            2>&1 | tee "$btrfs_path/$uuid/$uuid.log" || true
        ip link del dev veth0_"$uuid"
        ip netns del netns_"$uuid"
    }

    #HELP Execute a command in a running container:
    #       BOCKER exec <container_id> <command>
    function bocker_exec() {
        [[ "$(bocker_check "$1")" == 1 ]] \
                && echo "No container named '$1' exists" && exit 1
        cid="$(\
                    ps o ppid,pid | \
                    grep "^$(ps o pid,cmd | \
                    grep -E "^\ *[0-9]+ unshare.*$1" | \
                    awk '{print $1}')" | \
                    awk '{print $2}' \
               )"
        [[ ! "$cid" =~ ^\ *[0-9]+$ ]] \
                && echo "Container '$1' exists but is not running" && exit 1
        nsenter -t "$cid" -m -u -i -n -p chroot "$btrfs_path/$1" "${@:2}"
    }

    #HELP View logs from a container:\nBOCKER logs <container_id>
    function bocker_logs() {
        [[ "$(bocker_check "$1")" == 1 ]] \
                && echo "No container named '$1' exists" && exit 1
        cat "$btrfs_path/$1/$1.log"
    }

    #HELP Commit a container to an image:
    #   BOCKER commit <container_id> <image_id>
    function bocker_commit() {
        [[ "$(bocker_check "$1")" == 1 ]] \
                && echo "No container named '$1' exists" && exit 1
        [[ "$(bocker_check "$2")" == 1 ]] \
                && echo "No image named '$2' exists" && exit 1
        bocker_rm "$2" \
                && btrfs subvolume snapshot "$btrfs_path/$1" "$btrfs_path/$2" \
                > /dev/null
        echo "Created: $2"
    }

    #HELP Display this message:\nBOCKER help
    function bocker_help() {
        sed -n "s/^.*#HELP\\s//p;" < "$1" | \
        sed "s/\\\\n/\n\t/g;s/$/\n/;s!BOCKER!${1/!/\\!}!g"
    }

    [[ -z "${1-}" ]] && bocker_help "$0"
    case $1 in
        pull|init|rm|images|ps|run|exec|logs|commit) bocker_"$1" "${@:2}" ;;
        *) bocker_help "$0" ;;
    esac
    ```

[Kata (programming) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Kata_(programming))

:   A code kata is an exercise in programming which helps a programmer hone
    their skills through practice and repetition. The term was probably first
    coined by Dave Thomas, co-author of the book **The Pragmatic Programmer**,
    in a bow to the Japanese concept of kata in the martial arts. As of October
    2011, Dave Thomas (*The Pragmatic Programmer* 的作者之一) has published 21
    different katas.

    You need to try it as many times as it takes, and be comfortable making
    mistakes. You need to look for feedback each time so you can work to
    improve.

    Our suggestions for doing the kata are:

      -  find a place and time where you won’t be interrupted
      -  focus on the essential elements of the kata
      -  remember to look for feedback for every major decision
      -  if it helps, keep a journal of your progress
      -  have discussion groups with other developers, but try to have completed the kata first

    There are no right or wrong answers in these kata: the benefit comes from
    the process, not from the result.

    Materials

      - [Train with Programming Challenges/Kata | Codewars](http://www.codewars.com/)
      - [cyber-dojo.org](http://cyber-dojo.org)<!--91D2BA-->
      - [Home | Codewars](http://www.codewars.com/dashboard)<!--use github oauth2-->

    [Kata01: Supermarket Pricing - CodeKata](http://codekata.com/kata/kata01-supermarket-pricing/)

    :   有几点很有意思：

          - 单位不同如何处理？
          - 买一送一如何处理？
          - 钱有分数吗？还是用小数？
          - 什么时候忽略零头？（rounding）
          - 价钱（price）和费用（cost）用一个东西来表示？

        好像确实有很多东西值得考虑，适合洗澡的时候想。

        I suggest that it might take a couple of weeks worth of showers to
        exhaust the main alternatives.

        Goals
          ~ 1. The goal of this kata is to practice **a looser style of experimental modelling**.
          ~ 2. Look for as many **different ways** of handling the issues as possible.
          ~ 3. Consider the various **tradeoffs** of each.
          ~ 4. What techniques are **best** for exploring these models?
          ~ 5. For recording them? How can you **validate** a model is reasonable?

    [Kata02: Karate Chop - CodeKata](http://codekata.com/kata/kata02-karate-chop/)

    :   A binary chop (sometimes called the more prosaic (`[prə'zeɪk]`, 乏味的)
        **binary search**) finds the position of value in a sorted array of values.

[TCP连接的建立和终止过程 - 辛未羊的博客](http://panqiincs.github.io/blog/2015/10/17/establishment-and-termination-of-tcp-connection/)

:   Richard Stevens 先生在 [UNP2e (UNIX 网络编程 卷 1：套接字联网 API)](http://book.douban.com/subject/4859464/) 的前言中写道：

    > I have found when teaching network programming that about 80% of all
    > network programming problems have nothing to do with network programming,
    > per se. That is, the problems are not with the API functions such as
    > accept and select, but the problems arise from **a lack of understanding of
    > the underlying network protocols**. For example, I have found that once a
    > student understands TCP's **three-way handshake and four-packet connection termination**,
    > many network programming problems are immediately understood.

    下面是我的 remix。

    **TCP 的三路握手**

    肯定是客户端先表白。

    1. 客户端对服务器：我要和你发展关系。（#1，SYN）
    2. 服务器对客户端：你可以和我发展关系。（#2，SYN，ACK）
    3. 客户端对服务器：在一起~（#3，ACK）

    于是三次握手后，他们在一起了（连接建立了）。

    ![](http://www.tcpipguide.com/free/diagrams/tcpopen3way.png)

    **TCP 的四次挥手**

    可以是客户端说分手，也可以是客户端。这里以客户端作为负心汉。

    1. 客户端对服务器：恋爱谈完了，我们分手把。（#1，FIN）
    2. 服务器对客户端：可以的。（如果还有财务纠纷那就先还钱，不让分手的。）（#2，ACK）
    3. 服务器对客户端：那就分。（#3，FIN）
    4. 客户端对服务器：恩。（#4，ACK）

    ![](http://www.tcpipguide.com/free/diagrams/tcpclose.png)

---

**at this point in the history.**

Generals in the Editor War may note that Emacs users are 35.2% likely to also
hack on Vim, while Vim users are only 17.3% likely to hack on Emacs, so there's
that.

The Google Chrome Extension is available on the Chrome Web Store and if, for
any reason, you want to download directly, it's also available here

There actually is a target on the root Makefile called chrome but it won't
work, **because the private key is, well... private.**

But you can still build the front end and load the unpacked extensions. Here is how:

  - Run `cd front && make chrome`{.bash} ( or `make chrome.watch`{.bash} if you want to watch for changes)
  - Then go to `chrome:extension`
  - click on Load unpacked extension... (make sure Developer mode is checked on the top right of the page)
  - Select `GithubPulse/chrome_extension`
  - Done!

[git log - View the change history of a file using Git versioning - Stack Overflow](http://stackoverflow.com/questions/278192/view-the-change-history-of-a-file-using-git-versioning)

:   ```bash
    git log -- [filename]
    gitk [filename]
    ```

    Was he looking for a command line tool? "right click -> show history"
    certainly doesn't imply it.

    `git whatchanged -p filename` is also equivalent to `git log -p filename` in this case.

---

[javascript - Creating a div element in jQuery - Stack Overflow](http://stackoverflow.com/questions/867916/creating-a-div-element-in-jquery)

:   ```javascript
    $("#foo").append("<div>hello world</div>")

    jQuery('<div/>', {
        id: 'foo',
        href: 'http://google.com',
        title: 'Become a Googler',
        rel: 'external',
        text: 'Go to Google!'
    }).appendTo('#mySelector');

    d = document.createElement('div');
    $(d).addClass(classname)
        .html(text)
        .appendTo($("#myDiv")) //main div
        .click(function () {
            $(this).remove();
        })
        .hide()
        .slideToggle(300)
        .delay(2500)
        .slideToggle(300)
        .queue(function () {
        $(this).remove();
    });
    ```

---

`lsusb`{.bash}

[zenorocha/clipboard.js: Modern copy to clipboard. No Flash. Just 2kb](https://github.com/zenorocha/clipboard.js/)

:   <!-- Target -->
    <input id="foo" value="https://github.com/zenorocha/clipboard.js.git">

    <!-- Trigger -->
    <button class="btn" data-clipboard-target="#foo">
    Copy to clipboard
    </button>

    <!-- Target -->
    <textarea id="bar">Mussum ipsum cacilds...</textarea>
    <button class="btn" data-clipboard-action="cut" data-clipboard-target="#bar">
    Cut to clipboard
    </button>

    <button class="btn" data-clipboard-text="Just because you can doesn't mean you should — clipboard.js">
    Copy to clipboard
    </button>

    <button class="btn" data-clipboard-text="http://tangzx.qiniudn.com">点我复制本站网址</button>

    ```javascript
    new Clipboard('.btn', {
        target: function(trigger) {
            return trigger.nextElementSibling;
        }
    });

    new Clipboard('.btn', {
        text: function(trigger) {
            return trigger.getAttribute('aria-label');
        }
    });
    ```



[chunksnbits/jquery-quickfit: A quick and dirty approach to fitting text into its surrounding container.](https://github.com/chunksnbits/jquery-quickfit)

[Controlling Crawling and Indexing  |  Webmasters  |  Google Developers](https://developers.google.com/webmasters/control-crawl-index/)

---

[Child and Sibling Selectors | CSS-Tricks](https://css-tricks.com/child-and-sibling-selectors/)

:   ```javascript
    // method 1
    $("p:has(img)")

    // method 2
    jQuery.parse.push(/^\s*(<)(\s*)(.*)$/);
    jQuery.expr["<"] = jQuery.expr[":"].has;
    jQuery('p < img')
    ```

    ref and see also

      - [Selectors Level 3](https://www.w3.org/TR/css3-selectors/#selectors)
[Open Link in a New Window | CSS-Tricks](https://css-tricks.com/snippets/html/open-link-in-a-new-window/)

:   html

    `<a href="/" target="_blank">anchor</a>`{.html}

    inline js

    ```html
    <a href="/" onclick="window.open(this.href); return false;"
                onkeypress="window.open(this.href); return false;"> anchor </a>
    ```

    jquery

    ```Javascript
    // technique 1
    $('a').filter(function() {
       return this.hostname && this.hostname !== location.hostname;
    }).addClass("external");

    // technique 2
    $.expr[':'].external = function(obj) {
        return !obj.href.match(/^mailto\:/) && (obj.hostname != location.hostname);
    };
    $('a:external').addClass('external');

    // technique 3
    $('a:not([href^="http://your-website.com"]):not([href^="#"]):not([href^="/"])')
      .addClass('external');

    // technique 4, i use this i my site
    $('a').each(function() {
       var a = new RegExp('/' + window.location.host + '/');
       if (!window.location.host || !a.test(this.href)) {
           // This is an external link
           $(this).click(function(event) {
               event.preventDefault();
               event.stopPropagation();
               window.open(this.href, '_blank');
           });
       }
    });
    ```

    "every link that specifies target="_new" looks for and finds that window by
    name, and opens in it.

    ```css
    p#dummy::before {
      content: attr(data-foo) " ";
    }
    ```


    `<p id="dummy" data-foo="hello">world</p>`
      ~ <p id="dummy" data-foo="hello">world</p>

     refs and see also

      - <http://thedesignspace.net/MT2archives/000316.html>
      - [Target Only External Links | CSS-Tricks](https://css-tricks.com/snippets/jquery/target-only-external-links/)
      - [When to use target="_blank" | CSS-Tricks](https://css-tricks.com/use-target_blank/)
      - [attr - CSS | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/attr)

---

本来想看一下 CMake 生成的 Makefile 学习一下 Makefile 的使用。结果……完全一头雾水。
然后去看了一下 CMake 用来测试编译器的 C 和 C++ 代码，好牛逼！这里选两段秀秀：

<div class="tzx-drawer" shy>
int2dec, int2hex

:   ```cpp
    /* Convert integer to decimal digit literals.  */
    #define DEC(n)                   \
      ('0' + (((n) / 10000000)%10)), \
      ('0' + (((n) / 1000000)%10)),  \
      ('0' + (((n) / 100000)%10)),   \
      ('0' + (((n) / 10000)%10)),    \
      ('0' + (((n) / 1000)%10)),     \
      ('0' + (((n) / 100)%10)),      \
      ('0' + (((n) / 10)%10)),       \
      ('0' +  ((n) % 10))

    /* Convert integer to hex digit literals.  */
    #define HEX(n)             \
      ('0' + ((n)>>28 & 0xF)), \
      ('0' + ((n)>>24 & 0xF)), \
      ('0' + ((n)>>20 & 0xF)), \
      ('0' + ((n)>>16 & 0xF)), \
      ('0' + ((n)>>12 & 0xF)), \
      ('0' + ((n)>>8  & 0xF)), \
      ('0' + ((n)>>4  & 0xF)), \
      ('0' + ((n)     & 0xF))
    ```
</div>

<div class="tzx-drawer" shy>
[snippets.html#cmakeccompilerid](snippets.html#cmakeccompilerid)

:   ```c
    #ifdef __cplusplus
    # error "A C++ compiler has been selected for C."
    #endif

    #if defined(__18CXX)
    # define ID_VOID_MAIN
    #endif

    #ifdef ID_VOID_MAIN
    void main() {}
    #else
    int main(int argc, char* argv[])
    {
      (void)argv;
      return 0;
    }
    #endif
    ```
</div>

---

one = 1
two = 2
three = 3
four = 4

[An Ode to My Work Laptop · That Mike Flynn](http://thatmikeflynn.com/2016/01/21/ode-to-my-work-laptop/)

:   ode, `[od]`, n. 赋；颂歌；颂诗

    I started at Collective Digital Studio in 2012 as the month of December
    awoke from it's yearly slumber (蛰伏).  I was handed a computer. A Macbook
    Pro Retina. That Retina part was new, as was how thin and light it was.
    Instantly I realized it was the best computer I had ever used. That
    computer has been with me every day since then, and it died today. A little
    piece of me did too.

    It was a tray, it was a paper weight, and it was a way to block my face
    while I laughed at some guy from a different company farting during a sales
    presentation at my office.

    Maybe one day we'll get you repaired, or maybe one day someone will throw
    this cabinet away and forget to open it first, but either way you should
    know that I loved you.

[reformat in vim for a nice column layout - Stack Overflow](http://stackoverflow.com/questions/1229900/reformat-in-vim-for-a-nice-column-layout)

:   setup

    ```vim
    if has("gui_win32")
        let $TMP="d:/tzx/tmp"
        let $TEMP="d:/tzx/tmp"
    endif
    ```

    ```tzx-bigquote
    one two three
    1 2 3
    ```

    ```bash
    $ column -h
    Usage:
     column [options] [<file>...]

    Columnate lists.

    Options:
     -c, --columns <width>    width of output in number of characters
     -t, --table              create a table
     -s, --separator <string> possible table delimiters
     -o, --output-separator <string>
                              columns separator for table output; default is two spaces
     -x, --fillrows           fill rows before columns

     -h, --help     display this help and exit
     -V, --version  output version information and exit

    For more details see column(1).
    ```

[Javascript Key Codes - Cambia Research](http://www.cambiaresearch.com/articles/15/javascript-key-codes)

try it! <input onkeypress="javascript:return false;" id="txtChar" onkeydown="javascript:return displayKeycode(event)" type="text" name="txtchar">&nbsp;&nbsp;&nbsp;<span id="spnCode" name="spnCode"></span>

<script>
function displayKeyCode(evt)
{
    var textBox = getObject('txtChar');
    var charCode = (evt.which) ? evt.which : event.keyCode
    textBox.value = String.fromCharCode(charCode);
    if (charCode == 8) textBox.value = "backspace"; //  backspace
    if (charCode == 9) textBox.value = "tab"; //  tab
    if (charCode == 13) textBox.value = "enter"; //  enter
    if (charCode == 16) textBox.value = "shift"; //  shift
    if (charCode == 17) textBox.value = "ctrl"; //  ctrl
    if (charCode == 18) textBox.value = "alt"; //  alt
    if (charCode == 19) textBox.value = "pause/break"; //  pause/break
    if (charCode == 20) textBox.value = "caps lock"; //  caps lock
    if (charCode == 27) textBox.value = "escape"; //  escape
    if (charCode == 33) textBox.value = "page up"; // page up, to avoid displaying alternate character and confusing people
    if (charCode == 34) textBox.value = "page down"; // page down
    if (charCode == 35) textBox.value = "end"; // end
    if (charCode == 36) textBox.value = "home"; // home
    if (charCode == 37) textBox.value = "left arrow"; // left arrow
    if (charCode == 38) textBox.value = "up arrow"; // up arrow
    if (charCode == 39) textBox.value = "right arrow"; // right arrow
    if (charCode == 40) textBox.value = "down arrow"; // down arrow
    if (charCode == 45) textBox.value = "insert"; // insert
    if (charCode == 46) textBox.value = "delete"; // delete
    if (charCode == 91) textBox.value = "left window"; // left window
    if (charCode == 92) textBox.value = "right window"; // right window
    if (charCode == 93) textBox.value = "select key"; // select key
    if (charCode == 96) textBox.value = "numpad 0"; // numpad 0
    if (charCode == 97) textBox.value = "numpad 1"; // numpad 1
    if (charCode == 98) textBox.value = "numpad 2"; // numpad 2
    if (charCode == 99) textBox.value = "numpad 3"; // numpad 3
    if (charCode == 100) textBox.value = "numpad 4"; // numpad 4
    if (charCode == 101) textBox.value = "numpad 5"; // numpad 5
    if (charCode == 102) textBox.value = "numpad 6"; // numpad 6
    if (charCode == 103) textBox.value = "numpad 7"; // numpad 7
    if (charCode == 104) textBox.value = "numpad 8"; // numpad 8
    if (charCode == 105) textBox.value = "numpad 9"; // numpad 9
    if (charCode == 106) textBox.value = "multiply"; // multiply
    if (charCode == 107) textBox.value = "add"; // add
    if (charCode == 109) textBox.value = "subtract"; // subtract
    if (charCode == 110) textBox.value = "decimal point"; // decimal point
    if (charCode == 111) textBox.value = "divide"; // divide
    if (charCode == 112) textBox.value = "F1"; // F1
    if (charCode == 113) textBox.value = "F2"; // F2
    if (charCode == 114) textBox.value = "F3"; // F3
    if (charCode == 115) textBox.value = "F4"; // F4
    if (charCode == 116) textBox.value = "F5"; // F5
    if (charCode == 117) textBox.value = "F6"; // F6
    if (charCode == 118) textBox.value = "F7"; // F7
    if (charCode == 119) textBox.value = "F8"; // F8
    if (charCode == 120) textBox.value = "F9"; // F9
    if (charCode == 121) textBox.value = "F10"; // F10
    if (charCode == 122) textBox.value = "F11"; // F11
    if (charCode == 123) textBox.value = "F12"; // F12
    if (charCode == 144) textBox.value = "num lock"; // num lock
    if (charCode == 145) textBox.value = "scroll lock"; // scroll lock
    if (charCode == 186) textBox.value = ";"; // semi-colon
    if (charCode == 187) textBox.value = "="; // equal-sign
    if (charCode == 188) textBox.value = ","; // comma
    if (charCode == 189) textBox.value = "-"; // dash
    if (charCode == 190) textBox.value = "."; // period
    if (charCode == 191) textBox.value = "/"; // forward slash
    if (charCode == 192) textBox.value = "`"; // grave accent
    if (charCode == 219) textBox.value = "["; // open bracket
    if (charCode == 220) textBox.value = "\\"; // back slash
    if (charCode == 221) textBox.value = "]"; // close bracket
    if (charCode == 222) textBox.value = "'"; // single quote

    var lblCharCode = getObject('spnCode');
    lblCharCode.innerHTML = 'KeyCode:  ' + charCode;

    return false;
}

function getObject(obj)
{
    var theObj;
    if (document.all) {
        if (typeof obj=='string') {
            return document.all(obj);
        } else {
            return obj.style;
        }
    }
    if (document.getElementById) {
        if (typeof obj=='string') {
            return document.getElementById(obj);
        } else {
            return obj.style;
        }
    }
    return null;
}
</script>

key     Code
backspace   8
tab     9
enter   13
shift   16
ctrl    17
alt     18
pause/break     19
caps lock   20
escape  27
page up     33
page down   34
end     35
home    36
left arrow  37
up arrow    38
right arrow     39
down arrow  40
insert  45
delete  46
0   48
1   49
2   50
3   51
4   52
5   53
6   54
7   55
8   56
9   57
a   65
b   66
c   67
d   68
e   69
f   70
g   71
h   72
i   73
j   74
k   75
l   76
m   77
n   78
o   79
p   80
q   81
r   82
s   83
t   84
u   85
v   86
w   87
x   88
y   89
z   90
left window key     91
right window key    92
select key  93
numpad 0    96
numpad 1    97
numpad 2    98
numpad 3    99
numpad 4    100
numpad 5    101
numpad 6    102
numpad 7    103

Key     Code
numpad 8    104
numpad 9    105
multiply    106
add     107
subtract    109
decimal point   110
divide  111
f1  112
f2  113
f3  114
f4  115
f5  116
f6  117
f7  118
f8  119
f9  120
f10     121
f11     122
f12     123
num lock    144
scroll lock     145
semi-colon  186
equal sign  187
comma   188
dash    189
period  190
forward slash   191
grave accent    192
open bracket    219
back slash  220
close braket    221
single quote    222

[mikeflynn/egg.js: A simple javascript library to add easter eggs to web pages.](https://github.com/mikeflynn/egg.js)

:   `<script type="text/javascript" src="/path/to/egg.js"></script>`{.html}

    ```javascript
    var egg = new Egg();
    egg
      .addCode("up,up,down,down,left,right,left,right,b,a", function() {
        jQuery('#egggif').fadeIn(500, function() {
          window.setTimeout(function() { jQuery('#egggif').hide(); }, 5000);
        }, "konami-code");
      })
      .addHook(function(){
        console.log("Hook called for: " + this.activeEgg.keys);
        console.log(this.activeEgg.metadata);
      })
      .listen();
    ```

    <div class="tzx-drawer" shy>
    [egg.js/egg.js at master · mikeflynn/egg.js](https://github.com/mikeflynn/egg.js/blob/master/egg.js)

    :   ```javascript
        function Egg(/* keySequence, fn, metadata */) {
          this.eggs = [];
          this.hooks = [];
          this.kps = [];
          this.activeEgg = '';
          // for now we'll just ignore the shift key to allow capital letters
          this.ignoredKeys = ;

          if(arguments.length) {
            this.AddCode.apply(this, arguments);
          }
        }

        // attempt to call passed function bound to Egg object instance
        Egg.prototype.__execute = function(fn) {
          return typeof fn === 'function' && fn.call(this);
        }

        // converts literal character values to keyCodes
        Egg.prototype.__toCharCodes = function(keys) {
          var special = {
              "up": 38, "down": 40, "left": 37, "right": 39,
              "enter": 13, "space": 32, "ctrl": 17,
              "alt": 18, "tab": 9, "esc": 27
            },
            specialKeys = Object.keys(special);

          if(typeof keys === 'string') {
            // make sure there isn't any whitespace
            keys = keys.split(',').map(function(key){
              return key.trim();
            });
          }

          var characterKeyCodes = keys.map(function(key) {
            // check if it's already a keycode
            if(key === parseInt(key, 10)) {
              return key;
            }

            // lookup in named key map
            if(specialKeys.indexOf(key) > -1) {
              return special[key];
            }
            // it's a letter, return the char code for it
            return (key).charCodeAt(0);
          });

          return characterKeyCodes.join(',');
        }

        Egg.prototype.AddCode = function(keys, fn, metadata) {
          this.eggs.push({
            keys: this.__toCharCodes(keys),
            fn: fn, metadata: metadata
          });

          return this;
        }

        Egg.prototype.AddHook = function(fn) {
          this.hooks.push(fn);

          return this;
        }

        Egg.prototype.handleEvent = function(e) {
          var keyCode  = e.which;
          var isLetter = keyCode >= 65 && keyCode <= 90;
          /*
            This prevents find as you type in Firefox.
            Only prevent default behavior for letters A-Z.
            I want keys like page up/down to still work.
          */
          if ( e.type === "keydown" &&
              !e.metaKey && !e.ctrlKey &&
              !e.altKey && !e.shiftKey ) {
            var tag = e.target.tagName;

            if ( ( tag === "HTML" || tag === "BODY" ) &&
                   isLetter ) {
              e.preventDefault();
              return;
            }
          }

          if ( e.type === "keyup" && this.eggs.length > 0 ) {
            // keydown defaults all letters to uppercase
            if(isLetter) {
              if(!e.shiftKey) {
                // convert to lower case letter
                keyCode = keyCode + 32;
              }
            }

            // make sure that it's not an ignored key (shift for one)
            if(this.ignoredKeys.indexOf(keyCode) === -1) {
              this.kps.push(keyCode);
            }

            this.eggs.forEach(function(currentEgg, i) {
              var foundEgg = this.kps.toString().indexOf(currentEgg.keys) >= 0;

              if(foundEgg) {
                // Reset keys; if more keypresses occur while
                // the callback is executing, it could retrigger the match
                this.kps = [];
                // Set the activeEgg to this one
                this.activeEgg = currentEgg;
                // if callback is a function, call it
                this.__execute(currentEgg.fn, this);
                // Call the hooks
                this.hooks.forEach(this.__execute, this);

                this.activeEgg = '';
              }
            }, this);
          }
        };

        Egg.prototype.Listen = function() {
          // Standards compliant only. Don't waste time on IE8.
          if ( document.addEventListener !== void 0 ) {
            document.addEventListener( "keydown", this, false );
            document.addEventListener( "keyup", this, false );
          }

          return this;
        };

        Egg.prototype.listen  = Egg.prototype.Listen;
        Egg.prototype.addCode = Egg.prototype.AddCode;
        Egg.prototype.addHook = Egg.prototype.AddHook;
        ```
    </div>

     refs and see also

      - [Egg.js - A Simple Way to Add Easter Eggs to Your Site](http://thatmikeflynn.com/egg.js/)

---

<div class="tzx-drawer" shy>
`main.js`

:   ```javascript
    $("img").each(function(index){
        var src = $(this).attr('src');
        $(this).attr({
            src: "data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==",
            'data-src': src,
            onload: "lzld(this)"
        });
    });
    ```

    更多，见 [main.js](main.js)
</div>

- VS
    + controls
        * solution configurations
        * solution platforms
    + extensions

[substack/browserify-handbook: how to build modular applications with browserify](https://github.com/substack/browserify-handbook)

:   `npm install -g browserify-handbook`{.bash}

    -   `npm install uniq`

    -   nums.js

        ```javascript
        var uniq = require('uniq');
        var nums = [ 5, 2, 1, 3, 2, 5, 4, 2, 0, 1 ];
        console.log(uniq(nums));
        ```

    -   `browserify nums.js > main.js`

        ```javascript
        (function e(t,n,r){function s(o,u){if(!n[o]){if(!t[o]){var a=typeof
        require=="function"&&require;if(!u&&a)return a(o,!0);if(i)return
        i(o,!0);var f=new Error("Cannot find module '"+o+"'");throw
        f.code="MODULE_NOT_FOUND",f}var
        l=n[o]={exports:{}};t[o].call(l.exports,function(e){var
        n=t[o][e];return s(n?n:e)},l,l.exports,e,t,n,r)}return n[o].exports}var
        i=typeof require=="function"&&require;for(var
        o=0;o<r.length;o++)s(r[o]);return s})({1:[function(require,module,exports){
        "use strict"

        function unique_pred(list, compare) {
          var ptr = 1
            , len = list.length
            , a=list, b=list
          for(var i=1; i<len; ++i) {
            b = a
            a = list[i]
            if(compare(a, b)) {
              if(i === ptr) {
                ptr++
                continue
              }
              list[ptr++] = a
            }
          }
          list.length = ptr
          return list
        }

        function unique_eq(list) {
          var ptr = 1
            , len = list.length
            , a=list, b = list
          for(var i=1; i<len; ++i, b=a) {
            b = a
            a = list[i]
            if(a !== b) {
              if(i === ptr) {
                ptr++
                continue
              }
              list[ptr++] = a
            }
          }
          list.length = ptr
          return list
        }

        function unique(list, compare, sorted) {
          if(list.length === 0) {
            return list
          }
          if(compare) {
            if(!sorted) {
              list.sort(compare)
            }
            return unique_pred(list, compare)
          }
          if(!sorted) {
            list.sort()
          }
          return unique_eq(list)
        }

        module.exports = unique

        },{}],2:[function(require,module,exports){
        var uniq = require('uniq');
        var nums = [ 5, 2, 1, 3, 2, 5, 4, 2, 0, 1 ];
        console.log(uniq(nums));

        },{"uniq":1}]},{},);
        ```

    <https://github.com/substack/browserify-handbook#exports>

    ```javascript
    // num
    module.exports = 555

    // list
    var numbers = [];
    for (var i = 0; i < 100; i++) numbers.push(i);
    module.exports = numbers;

    // module.exports vs exports: both an empty object
    exports.beep = function (n) { return n * 1000 } | module.exports.beep = function (n) { return n * 1000 }
    exports.boop = 555                              | module.exports.boop = 555

    # but
    // this doesn't work
    exports = function (n) { return n * 1000 }
    // instead
    module.exports = function (n) { return n * 1000 }
    ```

    If you're still confused, try to understand how modules work in the background:

    ```javascript
    var module = {
      exports: {}
    };

    // 下面的括号必须，eval a function
    // If you require a module, it's basically wrapped in a function
    (function(module, exports) {
      exports = function (n) { return n * 1000 };
    }(module, module.exports))

    console.log(module.exports); // it's still an empty object :(
    ```

    `foo.foo` is a bit superfluous (`[sʊ'pɝflʊəs]`, 多余的, 不必要的).
    use this clean version of exports:

    ```javascript
    // foo.js
    module.exports = function (n) { return n * 111 }
    // main.js
    var foo = require('./foo.js');
    console.log(foo(5));
    ```

    Bonus: if you put your script tag right before the `</body>`, you can use
    all of the dom elements on the page without waiting for a dom onready
    event.

    原来如此！！！

    - how browserify works
    - how node_modules works
        + 如果相对路径，那就用相对路径，否则
        + 先搜当前 js 文件所在目录下的 `node_modules` 目录
        + 再搜上一层
        + 再搜家目录

    node also has a mechanism for searching an array of paths, but this
    mechanism is deprecated and you should be using `node_modules/` unless you
    have a very good reason not to.

    why concatenate

      - loads much faster
      - 但不能不容易找到 bug 来源，original files

    AMD

    ```javascript
    define(['jquery'] , function ($) {
        return function () {};
    });
    ```

    原理：<https://github.com/jrburke/requirejs/blob/master/require.js#L17>

    exorcist (`['ɛksɔrsɪst]` n. 驱魔的人；召魂者)

      ~ The downside of inlining all the source files into the inline source map is
        that the bundle is twice as large. This is fine for debugging locally
        but not practical for shipping source maps to production. However, you
        can use exorcist to pull the inline source map out into a separate
        bundle.map.js file:
        `browserify main.js --debug | exorcist bundle.js.map > bundle.js`{.bash}

    auto-recompile & other tools

      - [watchify](https://npmjs.org/package/watchify)
      - beefy (smaller)
      - wzrd (much smaller)
      - [browserify & gulp, a guide for getting started](http://viget.com/extend/gulp-browserify-starter-faq)

    builtins

      - In order to make more npm modules originally written for node work in
        the browser, browserify provides many browser-specific implementations
        of node core libraries:

          + assert
          + buffer
          + console
          + constants
          + crypto
          + domain
          + events
          + http
          + https
          + os
          + path
          + punycode
          + querystring
          + stream
          + string_decoder
          + timers
          + tty
          + url
          + util
          + vm
          + zlib

     - Buffer
     - process
     - `global` (alias for the `window` object)
        + `__filename`
        + `__dirname`

    `browserify main.js | node`{.bash}

    transforms

      - coffeeify (`npm install cofeeify`): `browserify -t coffeeify main.coffee > bundle.js`

    Here are some useful heuristics for **finding good modules** on npm that work in the browser:

      - I can install it with npm
      - code snippet on the readme using require() - from a quick glance I
        should see how to integrate the library into what I'm presently working
        on has a very clear, narrow idea about scope and purpose
      - knows when to delegate to other libraries - doesn't try to do too many
        things itself
      - written or maintained by authors whose opinions about software scope,
        modularity, and interfaces I generally agree with (often a faster
        shortcut than reading the code/docs very closely)
      - inspecting which modules depend on the library I'm evaluating - this is
        baked into the package page for modules published to npm
      - Other metrics like number of stars on github, project activity, or a
        slick (华而不实的) landing page, are not as reliable.

    Packages that are grab-bags of features waste a ton of time policing
    boundaries about which new features belong and don't belong. There is no
    clear natural boundary of the problem domain in this kind of package about
    what the scope is, it's all somebody's smug opinion.

    Node, npm, and browserify are not that. They are avowedly ala-carte,
    participatory, and would rather celebrate disagreement and the dizzying
    proliferation of new ideas and approaches than try to clamp down in the
    name of conformity, standards, or "best practices".

    testing in node and the browser

      ~ Testing modular code is very easy! One of the biggest benefits of
        modularity is that your interfaces become much easier to instantiate in
        isolation and so it's easy to make automated tests.

    Tape

    :   Tape was specifically designed from the start to work well in both node
        and browserify. Suppose we have an index.js with an async interface:

        ```javascript
        module.exports = function (x, cb) {
            setTimeout(function () {
                cb(x * 100);
            }, 1000);
        };
        ```

        ```javascript
        var test = require('tape');
        var hundreder = require('../');

        test('beep', function (t) {
            t.plan(1);

            hundreder(5, function (n) {
                t.equal(n, 500, '5*100 === 500');
            });
        });
        ```

---

Excuse the ads! We need some help to keep our site up.

```javascript
// good
var numbers = [];
for (var i = 0; i < 100; i++) numbers.push(i);

module.exports = numbers;
```

```markup
MyWebsite/
  |--css/
  |  |--materialize.css <-- compiled from scss/materialize.scss
  |
  |--font/
  |  |--material-design-icons/
  |  |--roboto/
  |
  |--js/
  |  |--materialize.js
  |
  |--scss/
  |  |--materialize.scss
  |  |--components/
  |
  |--index.html
```

**夺取话语权只有一条路径，就是超出别人的预期；**

- wikipedia
- stackoverflow
- github (gh)
- google
- 豆瓣
- 知乎

Now

- jquery

Later

- jquery
- fontawesome
- more pandoc filters (ditta, gant, process chart, etc)

`--file-scope`

[Pandoc - Scripting with pandoc](http://pandoc.org/scripting.html)

:   ```tzx-bigquote
    % cat test.txt
    ### my header

    text with *italics*
    % pandoc -t native test.txt
    Pandoc (Meta {unMeta = fromList []})
    [Header 3 ("my-header",[],[]) [Str "My",Space,Str "header"]
    , Para [Str "text",Space,Str "with",Space,Emph [Str "italics"]] ]
    ```

    A Pandoc document consists of a Meta block (containing metadata like title,
    authors, and date) and a list of Block elements. In this case, we have two
    Blocks, a Header and a Para. Each has as its content a list of Inline
    elements. For more details on the pandoc AST, see the haddock documentation
    for Text.Pandoc.Definition.

    Here’s a short Haskell script that reads markdown, changes level 2+ headers
    to regular paragraphs, and writes the result as markdown. If you save it as
    behead.hs, you can run it using runhaskell behead.hs. It will act like a
    unix pipe, reading from stdin and writing to stdout. Or, if you want, you
    can compile it, using ghc --make behead, then run the resulting executable
    behead.


`// var jq = jQuery.noConflict();`

```javascript
$( "li" ).each(function( index ) {
  console.log( index + ": " + $( this ).text() );
});

$(document).ready(function(){
    $('img').each(function(index){
        $(this).attr('data-src', $(this).src);
        $(this).attr(     'src', "data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==");
        $(this).attr(  'onload', "lzld(this)");
    });
    var pathStringList = document.location.toString().split('/');
});
```

[Attribute selectors - CSS | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/Attribute_selectors)

:   ```css
    #id_value { style properties }
    [id=id_value] { style properties }

    // has attr
    [attr]

    // has matching attr
    [attr=value]

    // class="a b c" class~="b"
    [attr~=value]

    /* Any span in Chinese is red, matches
       simplified (zh-CN) or traditional (zh-TW) */
    span[lang|="zh"] {color: red;}

    // prefix
    [attr^=value]

    // suffix
    [attr$=value]

    // contains
    [attr*=value]

    // ignore case
    [attr operator value i]
    ```

    `background-color:`{.css} <span style="background-color: DodgerBlue;">DogerBlue</span>;

     refs and see also

      - [ID selectors - CSS | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/ID_selectors)
      - [Attribute selectors - CSS | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/Attribute_selectors)

[quotes - CSS | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/quotes)

:   ```css
    quotes: none;

    quotes: "«" "»";
    quotes: "«" "»" "‹" "›"; /* Set two levels of quotation marks */

    quotes: inherit; // initial; // unset;

    q { quotes: '"' '"' "'" "'" }
    q:before { content: open-quote }
    q:after  { content: close-quote }
    ```

[javascript - `window.onload`{.javascript} vs `$(document).ready()`{.javascript} - Stack Overflow](http://stackoverflow.com/questions/3698200/window-onload-vs-document-ready)

:   The ready event occurs after the HTML document has been loaded, while the
    `onload` event occurs later, when all content (e.g. images) also has been loaded.

    The `onload` event is a standard event in the DOM, while the `ready` event is
    specific to jQuery. The purpose of the ready event is that it should occur
    as early as possible after the document has loaded, so that code that adds
    functionality to the elements in the page doesn't have to wait for all
    content to load.

    I didn't think that it was releveant to the question, and I still don't.

---

I'm agnostic. (不可知论者)

[javascript - 'innerText' works in IE, but not in Firefox - Stack Overflow](http://stackoverflow.com/questions/1359469/innertext-works-in-ie-but-not-in-firefox)

:   我以为是浏览器显示的问题，今天一看自己的源码，原来是 Chrome 的 JS 运行出来是有的，Firefox 没有。

    `elem.textContent || elem.innerText`，前者是 IE 原有，不是标准，后者才是。不过貌似火狐也要提供支持了。

    > `innerText` is the "old Internet Explorer" way of doing it.

    refs and see alos

      - [W3C DOM Compatibility - HTML](http://quirksmode.org/dom/html/#t07)
      - [Javascript with Firefox innerText issue - Stack Overflow](http://stackoverflow.com/questions/7461598/javascript-with-firefox-innertext-issue)
      - [javascript - Why is .innerText not working in Firefox? - Stack Overflow](http://stackoverflow.com/questions/22990812/why-is-innertext-not-working-in-firefox)
      - [Plain Text vs innerText vs textContent by Mike Wilcox » Club✩AJAX](http://clubajax.org/plain-text-vs-innertext-vs-textcontent/)

---

Don't get me wrong, except the government, China is my favorite country in the world ;-)

In early development.

[Markdown Style Guide](http://www.cirosantilli.com/markdown-style-guide/)

:   Use `.md`.

    Rationale (`[,ræʃə'næl]`, 原理的阐述): why not .mkd or .markdown?

      - shorter
      - more popular
      - does not have important conflicts

    `file-name.md`

    Rationale: multiple empty lines occupy more vertical screen space, and do not
    significantly improve readability.

    句子后面用一个句点 `.`。

    Use code blocks or inline code for:

      - executables. E.g.: `gcc` is the best compiler available.
        Differentiate between tool and the name of related projects. E.g.: `gcc` vs GCC.
      - file paths
      - version numbers
      - capitalized explanation of abbreviations: xinetd stands for `eXtended Internet daemon`.
      - other terms related to computers that you don’t want to add to your dictionary

    Don't mark as code:

      - names of projects. E.g.: GCC
      - names of libraries. E.g.: libc, glibc

    When in doubt, prefer the same abbreviation as used on Wikipedia.

    Don't add a trailing colon `:` to headers.
      ~ Rationale: every header is an introduction to what is about to come
        next, which is exactly the function of the colon.

    Don't add a trailing period `.` to headers.
      ~ Rationale: every header consists of a single short sentence, so there
        is not need to add a sentence separator to it.

    Bad: item is longer than one line:
      ~ ```markdown
        - item that
          is wrapped

        - item 2
        ```

    Good:
      ~ ```markdown
        -   item that
            is wrapped

        -   item 2
        ```

    -   item that
        is wrapped

    -   item 2

    ```makefile
    Bad, multiple lines:

    -   item that
        is wrapped
    -   item 2
    -   item 3

    Good:

    -   item that
        is wrapped

    -   item 2

    -   item 3

    Good:

    -   item 1

        - item 11
        - item 12
        - item 13

    -   item 2

    -   item 3

    Idem:

    - go to the market
    - then buy some fruit
    - finally eat the fruit

    Good, not terminated by period but by other punctuation.

    - go to the marked
    - then buy fruit?
    - of course!

    Bad, multiple sentences:

    - go to the market
    - then buy some fruit. Bad for wallet
    - finally eat the fruit. Good for tummy

    Good:

    - go to the market
    - then buy some fruit. Bad for wallet.
    - finally eat the fruit. Good for tummy.

    Good:

    Use this code to blow up your PC:

        sudo rm -rf /

    Bad, no colon

    Use this code to blow up your PC

        sudo rm -rf /
    ```

    Don't use horizontal rules except to indicate the End of a header.

    Rationale:

      - headers are better section separators since they say what a section is about.
      - horizontal rules don’t have a generally accepted semantic meaning. This guide gives them one.

    Separate consecutive elements: `<!--...-->`

    ```tzx-plain
    - list 1
    - list 1

    <!-- -->

    - list 2
    - list 2

        code 1
        code 1

    <!-- -->

        code 2
        code 2

    > blockquote 1
    > blockquote 1

    <!-- -->

    > blockquote 2
    > blockquote 2
    ```

    Rationale:
      ~ while omitting `[]` works on most major implementations, it is not
        specified in the documentation not implemented in the original markdown.

    不要直接用邮箱……用图片，混入一点字符，不然你的邮箱整天都是垃圾邮件了。
      ~ "performs a bit of randomized decimal and hex entity-encoding to help
        obscure your address from address-harvesting spambots".

---

[git replacing LF with CRLF - Stack Overflow](http://stackoverflow.com/questions/1967370/git-replacing-lf-with-crlf/20653073#20653073)

:   Unix-style, `lf`, win-style, `crlf`: `git config core.autocrlf true`{.bash}

    `unix2dos filename`, `unix2dos -D filename`

    Yet another way to show how autocrlf works

    ```tzx-bigquote
    1) true:             x -> LF -> CRLF
    2) input:            x -> LF -> LF
    3) false:            x -> x -> x
    ```

    where x is either CRLF (windows-style) or LF (unix-style) and arrows stand for

    `file to commit -> repository -> checked out file`

    ```tzx-bigquote
                     | Resulting conversion when       | Resulting conversion when
                     | committing files with various   | checking out FROM repo -
                     | EOLs INTO repo and              | with mixed files in it and
                     |  core.autocrlf value:           | core.autocrlf value:
    --------------------------------------------------------------------------------
    File             | true       | input      | false | true       | input | false
    --------------------------------------------------------------------------------
    Windows-CRLF     | CRLF -> LF | CRLF -> LF | as-is | as-is      | as-is | as-is
    Unix -LF         | as-is      | as-is      | as-is | LF -> CRLF | as-is | as-is
    Mac  -CR         | as-is      | as-is      | as-is | as-is      | as-is | as-is
    Mixed-CRLF+LF    | as-is      | as-is      | as-is | as-is      | as-is | as-is
    Mixed-CRLF+LF+CR | as-is      | as-is      | as-is | as-is      | as-is | as-is
    ```

     refs and see also

      - [Git 1.6.4 beta on Windows (msysgit) - Unix or DOS line termination - Stack Overflow](http://stackoverflow.com/questions/1249932/git-1-6-4-beta-on-windows-msysgit-unix-or-dos-line-termination/1250133#1250133)


[How do I commit case-sensitive only filename changes in Git? - Stack Overflow](http://stackoverflow.com/questions/17683458/how-do-i-commit-case-sensitive-only-filename-changes-in-git/17688308#17688308)

:   `git config core.ignorecase false`{.bash}

    Case-insensitive file-systems

      ~ The two most popular operating systems that have case-insensitive file
        systems that I know of are

          - Windows
          - OS X

[`make gh CMTMSG='我看这可以。okay? really?'`{.bash}](https://github.com/district10/blog/commit/0bbb5ce82c9044947d10d211892396f7d6a8ba92)

[gnu make - Makefile variable assignment - Stack Overflow](http://stackoverflow.com/questions/448910/makefile-variable-assignment)

:   Lazy Set: `VARIABLE = value`
      ~ Normal setting of a variable - values within it are recursively
        expanded when the variable is used, not when it's declared
    Immediate Set: `VARIABLE := value`
      ~ Setting of a variable with simple expansion of the values inside -
        values within it are expanded at declaration time.
    Set If Absent: `VARIABLE ?= value`
      ~ Setting of a variable only if it doesn't have a value
    Append: `VARIABLE += value`
      ~ Appending the supplied value to the existing value (or setting to that
        value if the variable didn't exist)

    *Simply expanded variables* are defined by lines using `:=` (gnumake) or `::=` (posix)

    ```makefile
    # 换行会变成空格，最后的的换行会被 trim 掉。
    hash != printf '\043'
    file_list != find . -name '*.c'

    # 或者用 simply expanded variable
    hash := $(shell printf '\043')
    var := $(shell find . -name "*.c")
    ```

    ```makefile
    define two-lines =
    echo foo
    echo $(bar)
    endef

    # or
    two-lines = echo foo; echo $(bar)
    ```

    More specific variables taking precedence over the more generic ones:

    :   ```makefile
        %.o: %.c
                $(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

        lib/%.o: CFLAGS := -fPIC -g
        %.o: CFLAGS := -g           # 即使在后面，但是更 generic，所以不覆盖

        all: foo.o lib/bar.o
        ```

     refs and see also

      - [GNU make](http://www.gnu.org/software/make/manual/make.html#Setting)

    <!--
    koans

      - 看完上面一个页面，makefile 就出师了啊！还不快去看！
    -->

[learnping-cmake](http://www.elpauer.org/stuff/learning_cmake.pdf)

:   好像看过好多遍……

[Starter Examples — Cmake Support for KUSP Software v0.9.1 documentation](http://www.ittc.ku.edu/kurt/kusp_docs/cmake/simple_cmake_example.html)

:   - `target_link_libraries( project m )`{.cmake}
    - `gcc -lm`{.bash}

[GNU make - Using Implicit Rules](http://www.chemie.fu-berlin.de/chemnet/use/info/make/make_10.html)

:   - Using Implicit Rules
        + e.g. `.c` -> `.o`, more:
        + Catalogue of Implicit Rules
            * C: `.c` -> `.o`, $(CC) -c $(CPPFLAGS) $(CFLAGS)`
            * C++: `.cc`, `.C`, `.cpp` -> `.o`, `$(CXX) -c $(CPPFLAGS) $(CXXFLAGS)`
            * RCS, Any file `n' is extracted if necessary from an RCS file named either `n,v' or `RCS/n,v'.
        + Variables Used by Implicit Rules[^implicit-rules]
        + Chains of Implicit Rules
        + Defining and Redefining Pattern Rules
            * Introduction to Pattern Rules
                - `%.o: %.c`
                - `% :: RCS/%,v` (built-in)
                - `%.tab.c %.tab.h: %.y` (two targets)
            * Automatic Variables
                -  `$<`, `$^`, `$@`
                - `$(@D)`
            * Canceling Implicit Rules
        + Defining Last-Resort Default Rules
    - Functions for Transforming Text
        + `$(function arguments)` or `${function arguments}`
        + `$(subst from,to,text)`
            * `bar:= $(subst $(space),$(comma),$(foo))`
            * `$(subst ee,EE,feet on the street)`: "fEEt on the strEEt"
        + `$(patsubst pattern,replacement,text)`
            * `$(patsubst %.c,%.o,x.c.c bar.c)`
            * `$(var:pattern=replacement)`
        + `$(strip string)`
        + `$(filter pattern...,text)`
          ~ ```makefile
            sources := foo.c bar.c baz.s ugh.h
            foo: $(sources)
            cc $(filter %.c %.s,$(sources)) -o foo
            ```
        + `$(filter-out pattern...,text)`
        + `$(sort list)`
        + `dir`, `notdir`
          ~ ```makefile
            $(dir src/foo.c hacks)      # src/ ./
            $(notdir src/foo.c hacks)   # foo.c hacks
            ```
        + `basename`
        + `addsuffix`, `addprefix`
        + `$(word n,text)`, *n*th word of text, `$(word 2, foo bar baz) # returns `bar'`{.makefile}
        + `$(words text)`, `#words`, the last word of text is `$(word $(words text),text)`
        + `$(firstword names...)`
        + `$(wildcard pattern)`
    - `foreach`
      ~ ```makefile
         dirs := a b c d
         files := $(foreach dir,$(dirs),$(wildcard $(dir)/*))
        ```

[^implicit-rules]:

    ```tzx-bigquote
    AR
        Archive-maintaining program; default `ar'.
    AS
        Program for doing assembly; default `as'.
    CC
        Program for compiling C programs; default `cc'.
    CXX
        Program for compiling C++ programs; default `g++'.
    CO
        Program for extracting a file from RCS; default `co'.
    CPP
        Program for running the C preprocessor, with results to standard output; default `$(CC) -E'.
    FC
        Program for compiling or preprocessing Fortran and Ratfor programs; default `f77'.
    GET
        Program for extracting a file from SCCS; default `get'.
    LEX
        Program to use to turn Lex grammars into C programs or Ratfor programs; default `lex'.
    PC
        Program for compiling Pascal programs; default `pc'.
    YACC
        Program to use to turn Yacc grammars into C programs; default `yacc'.
    YACCR
        Program to use to turn Yacc grammars into Ratfor programs; default `yacc -r'.
    MAKEINFOmzthe disqus javascript
            $j.ajax({
                 type: "GET",
                 url: "http://" + disqus_shortname + ".disqus.com/embed.js",
                 dataType: "script",
                 cache: true
             });

                $j(this).fadeOut();  // remove the show comments button
        });
    });
    ```

[makefile - Create directories using make file - Stack Overflow](http://stackoverflow.com/questions/1950926/create-directories-using-make-file)

:   If you're targeting a usual or "patterned" file, just use make's internal
    variable `$(@D)`, that means "the directory the current target resides in"
    (*cmp.* with `$@` for the target). For example,

    ```makefile
    $(OUT_O_DIR)/%.o: %.cpp
            @mkdir -p $(@D)
            @$(CC) -c $< -o $@

    title: $(OBJS)
    ```

    <#>(@makefile @target @deps)

[Digest::MD5 - Perl interface to the MD5 Algorithm - metacpan.org](https://metacpan.org/pod/Digest::MD5)

---

GitHub Urls

  - `git@github.com:user/repo.git`
  - `git@github.com:user/repo.wiki.git`
  - `https://github.com/user/repo`
  - `https://github.com/user/repo/wiki`

`ag`{.bash} 会默认 ignore 掉 `.gitignore` 的内容。

<#>(@git @ag @ignore)

- https://coding.net/u/dvorak4tzx/p/dvorak4tzx/git/raw/master/_pages/notes.md
- https://raw.githubusercontent.com/district10/blog/master/_pages/notes.md

---

[Web crawler using perl - Stack Overflow](http://stackoverflow.com/questions/15696375/web-crawler-using-perl)

:   ```perl
    #!/usr/bin/env perl

    use strict;
    use warnings;

    use Mojo::UserAgent;
    use Mojo::URL;

    ##open file to store links
    open my $log, '>', 'extracted_links.txt' or die $!;

    ##starting URL
    my $base = Mojo::URL->new('http://stackoverflow.com/');
    my @urls = $base;

    my $ua = Mojo::UserAgent->new;
    my %visited;
    my $url_count = 0;

    while (@urls) {
      my $url = shift @urls;
      next if exists $visited{$url};

      print "$url\n";
      print $log "$url\n";

      $visited{$url} = 1;
      $url_count++;

      # find all <a> tags and act on each
      $ua->get($url)->res->dom('a')->each(sub{
        my $url = Mojo::URL->new($_->{href});
        if ( $url->is_abs ) {
          return unless $url->host eq $base->host;
        }
        push @urls, $url;
      });

      last if $url_count == 100;

      sleep 1;
    }
    ```

[失败的总和----读《黄河青山：黄仁宇回忆录》 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2012/05/ray_huang_s_memoir.html#comment-355234)

:   如果你看到了历史的长期合理性，那么当你经历了种种失败，年老时回望自己人生，
    才能平静地接受命运，体会其中的必然，然后静静地等待隧道的尽头开始展现一丝曙
    光，证明那些企图逆转命运的举动，并非无谓和徒劳，一切自有内在的因果。这大概
    就是《黄河青山》的写作目的吧。

[How to Create a Search Engine Friendly Website (thesitewizard.com)](http://www.thesitewizard.com/sitepromotion/search-engine-friendly.shtml)

:   - Add Text to Your Images, Flash and Videos, `alt=...`
    - Validate Your HTML Code
    - Create Relevant Title Tags
    - Use Straight HTML Navigation Links on Your Website
    - Eliminate Apparent Content Duplication
        + Specifying a Canonical Web Address (URL)
        + robots.txt
    - Remove Hidden Text (避免被 Google 误会)

    - Keywords and Post Titles in the Permalink or Link Structure
    - Post Titles in the TITLE Tag

    refs & see also

      - [How to Make Your WordPress Blog Search-Engine-Friendly (thesitewizard.com)](http://www.thesitewizard.com/sitepromotion/search-engine-friendly-wordpress-blog.shtml)
      - [How to Create a Search Engine Friendly Website (thesitewizard.com)](http://www.thesitewizard.com/sitepromotion/search-engine-friendly.shtml)

[list-style-type - CSS | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/list-style-type)

:   - one (disc)
    - two
        + two1 (circle)
            * two1a (square)
                - two1a一 (decimal-leading-zero)
                    + what (georgian)
                    + the fuck
                - two1a二
            * two1b
        + two2

    <#>(@css @list-style-type)

---

- This is my personal website. I work for Microsoft, but I don't speak for them.
- I always used to eat whatever I felt like, whenever I felt like. (想吃就吃？)
- 与其看什么 Linux 入门书，不如好好看 5 遍 CSAPP

---

[Patellar reflex - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Patellar_reflex)

:   <div class="tzx-fright">
    ![Schematic representation of patellar tendon reflex (knee jerk)
        pathway](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a1/Patellar_tendon_reflex_arc.png/330px-Patellar_tendon_reflex_arc.png)
    </div>

    This is not a knee-jerk action (膝跳反射). I love open source and believe
    that open source community will eventually create a truly free alternative
    for NPM.

    The patellar reflex or knee-jerk is a deep tendon reflex and is a myotatic
    reflex.

[mszep/pandoc_resume: The Markdown Resume](https://github.com/mszep/pandoc_resume)

[aaronwolen/pandoc-letter: A simple letter template for Pandoc](https://github.com/aaronwolen/pandoc-letter)

[pandoc-templates/md2pdf at master · claes/pandoc-templates](https://github.com/claes/pandoc-templates/blob/master/md2pdf)

:   pandoc template

    `pandoc -D latex > template.latex`{.bash}

    ```tzx-plain
    # 说明：这里的排版和实际使用的时候不一样，请体会一下：


      实际使用的格式              这里的说明格式
    ------------------          -------------------
        $if(date)$                  $if(date)
        $date$                          $date$
                                    $endif$
        $endif$

    两者间的不同，以及各自的好处。

    $if(author)$
        $for(author)$$author$$sep$$endfor$
    $endif$

    $if(date)$                      # 可以在 Markdown 开头定义
        $date$
    $endif$

    比如这是一个 Markdown 文本：

            +-----------------------+
            |                       |
            |  ---                  |
            |  author: tzx          |
            |  date: 2016-03-24     |
            |  ...                  |
            |                       |
            |  that's the metadata  |
            |  header section       |
            |  in *yaml* format     |
            |                       |
            +-----------------------+

    ---
    header-includes:
        - \usepackage{fancyhdr}
        - \pagestyle{fancy}
        - \fancyhead[CO,CE]{This is fancy}
        - \fancyfoot[CO,CE]{So is this}
        - \fancyfoot[LE,RO]{\thepage}

    abstract: This is a pandoc test . . .
    shiting: is 诗婷？
    ...

    pandoc -H main.css \            # 会把 css 源码直接插入。
        demo.md -o \
        demo.html                   # -H FILE, --include-in-header=FILE

    $for(include-before)$           # -B before.txt, 文本插入, before body
        $include-before$
    $endfor$

    $for(include-after)$            # -A after.txt, 文本插入, after body
        $include-after$
    $endfor$

    # --self-contained 十分牛逼, 但是不能和 --mathjax 一起用. (毕竟 MathJax 太大)
    # --number-offset=NUMBER[,NUMBER,…]
    # --id-prefix=STRING, 话说我一直用 "tzx-"

    $if(number-sections)$           # --number-sections, 添加 1, 2, 2.3, etc
    $else$
        \setuphead[chapter, section, subsection, subsubsection][number=no]
    $endif$

    $if(toc)$
        \setupcombinedlist[content][list={$placelist$}]
    $endif$

    $for(header-includes)$
        $header-includes$
    $endfor$

    $if(KEY)$                       # -V KEY[=VAL], --variable=KEY[:VAL]
    $endif$
    ```

    ```bash
    pandoc --standalone --template style_chmduquesne.tex \
        --from markdown --to context \
        -V papersize=A4 \
        -o resume.tex resume.md;
    ```

---

dddt

:   demo.md
      ~ ```markdown
        Programming Languages

        :   one

            one1
              ~ one1.1
              ~ one1.2

            one2

        :   two

        :   three

        :   four
        ```

    `pandoc demo.md`{.bash}
      ~ ```html
        <dl>
        <dt>Programming Languages</dt>
        <dd><p>one</p>
        <dl>
        <dt>one1</dt>
        <dd>one1.1
        </dd>
        <dd>one1.2
        </dd>
        </dl>
        <p>one2</p>
        </dd>
        <dd><p>two</p>
        </dd>
        <dd><p>three</p>
        </dd>
        <dd><p>four</p>
        </dd>
        </dl>
        ```
    <#>(@dd @dt @html)

---

- GitHub Search: `https://github.com/search?utf8=%E2%9C%93&q=.vimrc`
- However, despite many trials and extensive googling, I still can't figure out
  how to tell pandoc to use the provided template (provided as `.cls` file) to
  render the document correctly.

---

[Simple Pandoc latex.template with comments](https://gist.github.com/bosmacs/1052004)

:   ```latex
    %!TEX TS-program = xelatex
    \documentclass[12pt]{scrartcl}

    % The declaration of the document class:

    % The second line here, i.e.
    % \documentclass[12pt]{scrartcl}
    % is a standard LaTeX document class declaration:
    % we say what kind of document we are making in curly brackets,
    % and specify any options in square brackets.

    % (The previous line is a pseudo-comment, declaring that we will
    % use the special XeTeX machinery for its more extensive font list
    % and its use of unicode;
    % in general, LaTeX 'comments' like this one
    %  begin with % and end with a linebreak.)

    % Note that there we have nothing in the nature of a template;
    % it's just a standard bit of LaTeX pandoc will copy unaltered into the
    % LaTeX file it is writing.  But suppose you wrote something
    % more akin to the corresponding line in Pandoc's default
    % latex.template file, say:

    % \documentclass$if(fontsize)$[$fontsize$]$endif${scrartcl}

    % then you would have invented a 'variable', fontsize,
    % and could write things like

    % `markdown2pdf my.txt --xetex --variable=fontsize:12pt -o my.pdf` or
    % `pandoc -r markdown -w html my.txt -s --xetex --variable=fontsize:24pt -o my.tex`.

    % If we specified --variable-fontsize:12, then template substitution
    % would yield a LaTeX document beginning
    % \documentclass[12pt]{scrarcl}
    % which is just what we said anyway.
    % But we could also specify a different fontsize.

    % I don't use this `--variable=....`functionality myself;
    % I have a couple of basic templates I call with
    % `--template=whatever.template` which I can also
    % easily inspect to adjust things like font size as I please.

    % While we are discussing the declaration of the document class...
    % here's an alternative command for two column landscape,
    % not bad for some purposes. (If you strike the word 'landscape'
    % you will have two narrow newspaperlike
    % columns; scientists like that, because irrationality must
    % show itself somewhere):
    %\documentclass[12pt,twocolumn,landscape]{scrartcl}
    % Columns are too close together in LaTeX so we add this
    % `columnsep` command:
    %\setlength{\columnsep}{.5in}


    % I use the special 'komascript' article class "scrartcl"
    % reasons I can't entirely remember; I'm not sure it's that great.
    % One reason is the unimportant one that, like many classes,
    % it allows very big fonts which are convenient for booklet printing
    % in the idiotic American way by shrinking letterpaper pages.

    % the standard minimal LaTeX 'article' class declaration would be something like:

    % \documentclass[12pt]{article}

    % or for big type:

    % \documentclass[24pt]{extarticle}

    % but these restrict you to old-fashioned LaTeX materials.
    % Note that Kieran Healy uses the swank 'Memoir' class,
    % \documentclass[11pt,article,oneside]{memoir}
    % which might be worth a look.

    % Enough about the document class.

    % -- We are in swanky unicode, XeTeX land, and must now import these packages:
    \usepackage{fontspec,xltxtra,xunicode}
    % fontspec means we can specify pretty much any font.
    % Because we are using XeTeX material,
    % this template needs to be called with the `--xetex` flag.


    % Symbols:
    % Pandoc imports the extensive `amsmath` collection of symbols
    % for typesetting ordinary math.
    \usepackage{amsmath}
    % if you use exotic symbols you need to import specific packages, eg. for
    % electrical engineering diagrams, musical notation, exotic currency symbols,
    % the unspeakable rites of freemasonry etc.


    % `babel`:
    % The `babel` package, among other things, lets you determine what
    % language you are using in a given stretch of text, so that typesetting
    % will go well. Here we specify that mostly, we are speaking English:
    \usepackage[english]{babel}


    % Margins, etc:
    % the `geometry` package makes for convenient adjusting of margins, which is what
    % you asked about.  Of course it can do much more, even make coffee for you:
    \usepackage{geometry}
    \geometry{verbose,letterpaper,tmargin=3cm,bmargin=3cm,lmargin=3cm,rmargin=3cm}
    % so if you just keep a copy of this template in the directory you are working in, you
    % can adjust the margins by going into this file and messing with the margins.
    % the syntax is very unforgiving, but permits 3cm and 2.5in and some other things.


    % Font:
    % Here I set my main font, which is an Apple Corporation Exclusive, golly.

    % \setmainfont{Hoefler Text}
    % \setromanfont[Mapping=tex-text,Contextuals={NoWordInitial,NoWordFinal,NoLineInitial,NoLineFinal},Ligatures={NoCommon}]{Hoefler Text}

    % Hoefler Text is okay, but note the long discussion of 'contextuals' which is necessary to cools off
    % some of its show-offy properties. (You can make your essay look like the
    % Declaration of Independence by specifying e.g. Ligatures={Rare} )
    % If you have a copy you might try it; as it is
    % I will comment it out and supply something more certain to be around:

    \setmainfont{Times Roman}

    % Properly one should specify a sanserif font and a monospace font
    % see e.g. the example of Kieran Healy:
    % \setromanfont[Mapping=tex-text,Numbers=OldStyle]{Minion Pro}
    % \setsansfont[Mapping=tex-text]{Minion Pro}
    % \setmonofont[Mapping=tex-text,Scale=0.8]{Pragmata}

    % But I hate sanserif fonts, and anyway there are defaults.



    % Heading styles:
    % These commands keep the koma system from making stupid sans serif section headings
    \setkomafont{title}{\rmfamily\mdseries\upshape\normalsize}
    \setkomafont{sectioning}{\rmfamily\mdseries\upshape\normalsize}
    \setkomafont{descriptionlabel}{\rmfamily\mdseries\upshape\normalsize}



    % I'm puzzled why I have this foonote speciality,
    % I wonder if it's part of my problem I've been having, but wont look
    % into it now.
    \usepackage[flushmargin]{footmisc}
    % \usepackage[hang,flushmargin]{footmisc}


    % So much for my personal template.


    % Everything that follows is copied from the pandoc default template:
    % I will interpolate a few comments, the comments that are in
    % the default template will be marked % --

    % Paragraph format:
    % Pandoc prefers unindented paragraphs in the European style:
    \setlength{\parindent}{0pt}
    %  ... with paragraph breaks marked by a slight lengthening of
    % the space between paragraphs:
    \setlength{\parskip}{6pt plus 2pt minus 1pt}

    % Page format:
    \pagestyle{plain}
    % The default `plain` pagestyle just numbers the pages,
    % whereas
    % \pagestyle{empty}
    % would give you no numbering.
    % After one-million man-years of macro-composition,
    % there are also fancy pagestyles with much wilder options
    % for headers and footers, of course.

    % Footnotes
    % if you have code in your footnotes, the million macro march
    % kind of bumps into itself.
    % Pandoc, having just rendered your text into LaTeX,
    % knows whether the 'variable' `verbatim-in-note` is True, and
    % If it is, it asks for a  LaTeX package that solves the dilemma:
    $if(verbatim-in-note)$
    \usepackage{fancyvrb}
    $endif$

    % Lists formatting:
    % note sure what 'fancy enums' are; something to do with lists,
    % as the further comment suggests:
    $if(fancy-enums)$
    % -- Redefine labelwidth for lists; otherwise, the enumerate package will cause
    % -- markers to extend beyond the left margin.
    \makeatletter\AtBeginDocument{%
      \renewcommand{\@listi}
        {\setlength{\labelwidth}{4em}}
    }\makeatother
    \usepackage{enumerate}
    $endif$


    % Table formatting:
    % What if you make a table? -- Pandoc knows, of course, and
    % then declares that its  variable `table` is True and
    % imports a table package suitable to its pleasantly simple tables.
    % Needless to say infinitely   complicated tables are possible in
    % LaTeX with suitable packages. We are spared the temptation:

    $if(tables)$
    \usepackage{array}

    % Continuing on the topic of tables ... (we havent reached `endif`).
    % The commented out line below is in the default pandoc  latex.template.
    % Some unpleasantness with table formatting must be corrected.

    % -- This is needed because raggedright in table elements redefines \\:
    \newcommand{\PreserveBackslash}{\let\temp=\\#1\let\\=\temp}
    \let\PBS=\PreserveBackslash

    $endif$


    % Subscripts:
    % Pandoc remembers whether you used subscripts, assigning True to
    % its `subscript` variable
    % It then needs to adopt a default with an incantation like this:
    $if(subscript)$
    \newcommand{\textsubscr}{\ensuremath{_{\scriptsize\textrm{#1}}}}
    $endif$


    % Web-style links:

    % markdown inclines us to use links, since our texts can be made into html.
    % Why not have clickable blue links even in
    % learned, scientific, religious, juridical, poetical and other suchlike texts?
    % Never mind that they have been proven to destroy the nervous system!

    % First, what about the fact that links like http://example.com are
    % technically code and thus must not be broken across lines?
    % [breaklinks=true] to the rescue!

    % Nowadays LaTeX can handle all of this with another half million macros:

    \usepackage[breaklinks=true]{hyperref}
    \hypersetup{colorlinks,%
    citecolor=blue,%
    filecolor=blue,%
    linkcolor=blue,%
    urlcolor=blue}
    $if(url)$
    \usepackage{url}
    $endif$



    % Images.
    % In ye olde LaTeX one could only import a limited range of image
    % types, e.g. the forgotten .eps files.  Or else one simply drew the image with suitable
    % commands and drawing packages.  Today we want to import .jpg files we make with
    % our smart phones or whatever:

    $if(graphics)$
    \usepackage{graphicx}
    % -- We will generate all images so they have a width \maxwidth. This means
    % -- that they will get their normal width if they fit onto the page, but
    % -- are scaled down if they would overflow the margins.
    \makeatletter
    \def\maxwidth{\ifdim\Gin@nat@width>\linewidth\linewidth
    \else\Gin@nat@width\fi}
    \makeatother
    \let\Oldincludegraphics\includegraphics
    \renewcommand{\includegraphics}{\Oldincludegraphics[width=\maxwidth]{#1}}
    $endif$



    % Section numbering.
    % Here again is a variable you can specify on the commandline
    % `markdown2pdf my.txt --number-sections --xetex --template=/wherever/this/is -o my.pdf`
    $if(numbersections)$
    $else$
    \setcounter{secnumdepth}{0}
    $endif$

    % Footnotes:
    % Wait, didn't we already discuss the crisis of code in footnotes?
    % Evidently the order of unfolding of macros required that
    % we import a package to deal with them earlier
    % and issue a command it defines now. (Or maybe that's not the reason;
    % very often the order does matter as the insane system of macro expansion
    % must take place by stages.)
    $if(verbatim-in-note)$
    \VerbatimFootnotes % -- allows verbatim text in footnotes
    $endif$

    % Other stuff you specify on the command line:
    % You can include stuff for the header from a file specified on the command line;
    % I've never done this, but that stuff will go here:
    $for(header-includes)$
    $header-includes$
    $endfor$

    % Title, authors, date.
    % If you specified title authors and date at the start of
    % your pandoc-markdown file, pandoc knows the 'values' of the
    % variables: title authors date and fills them in.

    $if(title)$
    \title{$title$}
    $endif$
    \author{$for(author)$$author$$sep$\\$endfor$}
    $if(date)$
    \date{$date$}
    $endif$

    % At last:
    % The document itself!:

    % After filling in all these blanks above, or erasing them
    % where they are not needed, Pandoc has finished writing the
    % famous LaTeX *preamble* for your document.
    % Now comes the all-important command \begin{document}
    % which as you can see, will be paired with an \end{document} at the end.
    % Pandoc knows whether you have a title, and has already
    % specified what it is; if so, it demands that the title be rendered.
    % Pandoc knows whether you want a table of contents, you
    % specify this on the command line.
    % Then, after fiddling with alignments, there comes the real
    % business: pandoc slaps its rendering of your text in the place of
    % the variable `body`
    % It then concludes the document it has been writing.

    \begin{document}


    $if(title)$
    \maketitle
    $endif$

    $if(toc)$
    \tableofcontents

    $endif$


    $if(alignment)$
    \begin{$alignment$}
    $endif$

    $body$

    %$if(alignment)$
    \end{$alignment$}
    $endif$


    \end{document}
    ```

---

- That little nugget (`['nʌɡɪt]`, 天然金块，矿块；珍闻，珍品) of information
  just saved my day.
- [展示 GitHub Pages 怎么用 by district10](http://tangzhixiong.com/gh-pages-demo/)
- [Hacking Travis](http://whudoc.qiniudn.com/travis/)
- [osg 学习之十六：osgconv工具(android支持的纹理格式) - xuhaiyan8825的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/xuhaiyan8825/article/details/7999767)
- `osgconv` 是一种非常有用的的工具来读取标准的3D格式，如OpenFlight,3DS,Alias
  Wavefront (OBJ) etc，并且可以将它们转换为一种OSG所支持的格式，如OSG中的ASCII
  格式的.osg，二进制格式的.ive。在程序运行的默认情况下，优化导入的场景图，将形
  成的这样结果：场景图读取的数据量将会更少且速度会更快。尤其值得指出的是，.ive
  格式的的文件，快速装载数据的能力使它非常适合数据页和大型的数据库。

    ```bash
    osgconv cow.obj cow.ive
    osgconv --compressed cow.obj cow.ive
    ```

- `wget in_link -O out_filename`{.bash}
- 浏览器里得 Vim，用 `C-[` 替代 `ESC`。

---

How I Blog

  - I better write this down or I'll never remember it
  - I read something
  - I had a spontaneous epiphany (is there any other kind?)

epiphany `[ɪ'pɪfəni]`
:   对事物真谛的顿悟；主显节（每年一月六日纪念耶稣显灵的节日）；显现（特指神的显现）

---

[`appveyor.yml`{.tzx-filename}](https://github.com/district10/rapidjson/blob/master/appveyor.yml)

:   ```yml
    version: 1.0.2.{build}

    configuration:
    - Debug
    - Release

    environment:
      matrix:
      - VS_VERSION: 11
        VS_PLATFORM: win32
      - VS_VERSION: 11
        VS_PLATFORM: x64
      - VS_VERSION: 12
        VS_PLATFORM: win32
      - VS_VERSION: 12
        VS_PLATFORM: x64

    before_build:
    - git submodule update --init --recursive
    - cmake -H. -BBuild/VS -G "Visual Studio %VS_VERSION%" -DCMAKE_GENERATOR_PLATFORM=%VS_PLATFORM% -DBUILD_SHARED_LIBS=true -Wno-dev

    build:
      project: Build\VS\RapidJSON.sln
      parallel: true
      verbosity: minimal

    test_script:
    - cd Build\VS && if %CONFIGURATION%==Debug (ctest --verbose -E perftest --build-config %CONFIGURATION%) else (ctest --verbose --build-config %CONFIGURATION%)
    ```

    ```yml
    # for gcc with C++11 support
    - sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test
    - sudo apt-get -qq update
    - sudo apt-get -qq install gcc-4.9 g++-4.9

    # install GTest and GMock
    - sudo apt-get -qq install libgtest-dev
    - "cd /usr/src/gtest && sudo cmake . && sudo cmake --build . && sudo mv libg* /usr/local/lib/ ; cd -"
    - sudo apt-get -qq install google-mock
    - "cd /usr/src/gmock && sudo cmake . && sudo cmake --build . && sudo mv libg* /usr/local/lib/ ; cd -"

    - sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-4.9 90
    - sudo update-alternatives --install /usr/bin/gcov gcov /usr/bin/gcov-4.9 90
    ```

    ```cmake
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0") # debug, no optimisation
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage") # enabling coverage
    ```

    Either by using the supplied helper function.

    ```cmake
    if (COVERALLS)
        include(Coveralls)
        coveralls_turn_on_coverage()
    endif()
    ```

    or you can add it yourself:

    ```cmake
    if (COVERALLS)
        include(Coveralls)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -fprofile-arcs -ftest-coverage")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0 -fprofile-arcs -ftest-coverage")
    endif()
    ```

    Replace `CMAKE_CXX_FLAGS`{.cmake} by  `CMAKE_C_FLAGS`{.cmake} for a C project.

    Nothing more is needed. From the GNU GCC man:

    ```tzx-bigquote
    --coverage

    This option is used to compile and link code instrumented for coverage
    analysis. The option is a synonym for -fprofile-arcs -ftest-coverage (when
    compiling) and -lgcov (when linking).
    ```

---

[rapidjson/travis-doxygen.sh at master · district10/rapidjson](https://github.com/district10/rapidjson/blob/master/travis-doxygen.sh)

:   ```bash
    gh_pages_prepare()
    {
        cd "${TRAVIS_BUILD_DIR}/build/doc";
        [ ! -d "html" ] || \
            abort "Doxygen target directory already exists."
        git --version
        git clone -b gh-pages "${GITHUB_CLONE}" html
        cd html
        # setup git config (with defaults)
        git config user.name "${GIT_NAME-travis}"
        git config user.email "${GIT_EMAIL-"travis@localhost"}"
        # clean working dir
        rm -f .git/index
        git clean -df
    }
    ```

    ```bash
    sudo apt-get install ruby-dev
    ```

    ProTip™: You can pre-fill the filename field using just the URL. Typing
    `?filename=yournewfile.txt` at the end of the URL will pre-fill the filename
    field with the name `yournewfile.txt`.
