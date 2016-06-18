# 笔记

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

    diff submodules `@`{.foldable}

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

[javascript - jQuery .click() is triggering when selecting/highlighting text - Stack Overflow](http://stackoverflow.com/questions/10390010/jquery-click-is-triggering-when-selecting-highlighting-text)

:   ```javascript
    $('dt.drawer').on('click', function(event){
        if(getSelection().toString()){ return; } // !!! NICE !!!
        $('dt.focus,dd.focus').removeClass('focus');
        $(this).addClass('focus').next('dd').addClass('focus');
        $(this)
            .toggleClass('drawerOpen')
            .toggleClass('drawerClose');
        $(this).next('dd').toggleClass('drawerHide');
        event.stopPropagation();
    });
    ```

    有人回复：

    >   To not break the whole app when a user has text selected somewhere else it
    >   might be good to check that the selected text is in the relevant element:
    >   `if(!e.target.contains(getSelection().anchorNode))`{.javascript}.

    然而其实不必要，因为当你点击的时候，你的 selection 就被清空了。如果 selection 还在，
    一定选中的是当前 node 的文字。（我是实测发现并没有 bug 才注意到这句话，才多想了一下。）

[4ker/jquery-popup-overlay: jQuery plugin for responsive and accessible modal windows and tooltips.](https://github.com/4ker/jquery-popup-overlay)

:   我想把 overlay 功能加到笔记里。

[jQuery - keydown / keypress /keyup ENTERKEY detection? - Stack Overflow](http://stackoverflow.com/questions/3462995/jquery-keydown-keypress-keyup-enterkey-detection)

:   nice

以上是对英文没问题的同学，如果英文有问题怎么办呢？请先转化到没问题的状态。
