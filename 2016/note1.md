# 笔记[^features]

[^features]: 关于本笔记的一些标记：

    -   值得仔细阅读的链接：`[title](url){.featured}`{.markdown}，如
        [Welcome to dvorak4tzx’s Blog.](http://tangzx.qiniudn.com){.featured}。
    -   加 ♥ 的：`{.heart}`的都是特别赞的，如
        [Welcome to dvorak4tzx’s Blog.](http://tangzx.qiniudn.com){.heart}。
    -   加 flag 的，表明很重要，不弄懂可能无法继续阅读：`{.flag}`，如
        [Welcome to dvorak4tzx’s Blog.](http://tangzx.qiniudn.com){.flag}。
    -   加 todo 的，还没弄懂：`{.todo}`，如
        [Welcome to dvorak4tzx’s Blog.](http://tangzx.qiniudn.com){.todo} 以及
        `这个地方很难，下次再看`{.todo}。
    -   `.heart`{.heart}, `.flag`{.flag}

[Git - Submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules) `@`{.fold}

:   1.  add submodule (won't pull the source)

        ```bash
        git submodule add git@github.com:district10/caffe-notes.git caffe-notes
        ```

    2.  pull the source

        ```bash
        # method 1
        git submodule init
        git submodule update --recursive

        # method 2
        git submodule update --init --recursive
        ```

    3.  clone a repo with submodule(s)

        ```bash
        # method 1
        git clone git@github.com:district10/notes.git
        git submodule update --init --recursive

        # method 2
        git clone git@github.com:district10/notes.git
        git submodule init
        git submodule update

        # method 3
        git clone --recursive git@github.com:district10/notes.git
        ```

    4.  pull submodules

        ```bash
        # method 1
        git pull --recurse-submodules

        # method 2
        git submodule foreach --recursive git pull origin master

        # method 3
        git submodule update --remote caffe-notes
        ```

    5.  diff submodules

        ```bash
        # method 1
        git diff --cached DbConnector

        # method 2
        git diff --cached --submodule
        ```

    6.  checkout non-master branch

        ```bash
        # checkout `stable' branch instead of `master' branch
        git config -f .gitmodules submodule.caffe-notes.branch stable
        ```

    diff submodules `@`{.fold}

    :   ```bash
        # method 1
        git diff --cached DbConnector

        # method 2
        git diff --cached --submodule
        ```

    checkout non-master branch

    :   ```bash
        # checkout `stable' branch instead of `master' branch
        git config -f .gitmodules submodule.caffe-notes.branch stable
        ```
