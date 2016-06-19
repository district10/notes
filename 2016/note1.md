# 笔记

[Git - Submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules) -<

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

    diff submodules +<

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

以上是对英文没问题的同学，如果英文有问题怎么办呢？请先转化到没问题的状态。:smile:

```perl
if(/^(\s*)(-> )(.*)$/) {
    my $line = $1 . $3;
    $line =~ s/\r?\n?$//;
    print $line . " `@`{.fold}\n";
    next;
}
if(/^(\s*)(=> )(.*)$/) {
    my $line = $1 . $3;
    $line =~ s/\r?\n?$//;
    print $line . " `@`{.foldable}\n";
    next;
}
```

Caffeinated Companies，语言用得好妙！caffein-ated companies……

`"★★★★★☆☆☆☆☆".substring(5 - rating, 10 - rating )`{.javascript}

:   I saw this code being written byAddison Phillips (Page on linkedin.com)
    when I was at Amazon. I'm not sure if he is the original author, but I
    loved it for its elegance.

在北京一家startup工作一年 混国外社区 混github 一年后直接remote给多家国外公司工作 收入直接x4-6倍

总之 我觉得自从freelancing之后，我可以尝试更多之前没时间 或者没有去尝试的东西，
我觉得生活不再只是程序代码，而其实你coding也不是只是和计算机去交流，因为你的代
码是给人看的，所以作为程序员，就别拿这个职业作为自己有交流障碍来做借口吧，多半
是社会舆论把你给定型了，其实你应该可以做得更好的，扯远了，最后再扯一下靠不靠谱
的问题：

[What No One Told You About Z-Index — Philip Walton](https://philipwalton.com/articles/what-no-one-told-you-about-z-index/)

[The Definitive Guide to Using Negative Margins – Smashing Magazine](https://www.smashingmagazine.com/2009/07/the-definitive-guide-to-using-negative-margins/)

:   ![](https://media-mediatemple.netdna-ssl.com/wp-content/uploads/images/css-negative-margins/margin-motion.gif)

[wufeifei/dict: linux命令行下翻译工具](https://github.com/wufeifei/dict) -<

:   ```bash
    wget https://raw.githubusercontent.com/wufeifei/dict/master/dict.py
    python2 dict.py test
    python2 dict.py 测试
    ```

    ```python
    #!/usr/bin/env python

    import sys
    import json
    import urllib
    import urllib2


    """
    dict - Chinese/English Translation
    @author Feei(wufeifei@wufeifei.com)
    @date   2013.12.09
    """


    class Dict:
        key = '716426270'
        keyFrom = 'wufeifei'
        api = 'http://fanyi.youdao.com/openapi.do?keyfrom=wufeifei&key=716426270&type=data&doctype=json&version=1.1&q='
        content = None

        def __init__(self, argv):
            if len(argv) == 1:
                self.api = self.api + urllib.quote(argv[0])
                self.translate()
            else:
                print 'ERROR'

        def translate(self):
            content = urllib2.urlopen(self.api).read()
            self.content = json.loads(content)
            self.parse()

        def parse(self):
            code = self.content['errorCode']
            if code == 0:  # Success
                try:
                    u = self.content['basic']['us-phonetic'] # English
                    e = self.content['basic']['uk-phonetic']
                except KeyError:
                    try:
                        c = self.content['basic']['phonetic'] # Chinese
                    except KeyError:
                        c = 'None'
                    u = 'None'
                    e = 'None'

                try:
                    explains = self.content['basic']['explains']
                except KeyError:
                    explains = 'None'

                print '\033[1;31m################################### \033[0m'
                print '\033[1;31m# \033[0m', self.content['query'], self.content['translation'][0],
                if u != 'None':
                    print '(U:', u, 'E:', e, ')'
                elif c != 'None':
                    print '(Pinyin:', c, ')'
                else:
                    print

                if explains != 'None':
                    for i in range(0, len(explains)):
                        print '\033[1;31m# \033[0m', explains[i]
                else:
                    print '\033[1;31m# \033[0m Explains None'
                print '\033[1;31m################################### \033[0m'
                # Phrase
                # for i in range(0, len(self.content['web'])):
                #     print self.content['web'][i]['key'], ':'
                #     for j in range(0, len(self.content['web'][i]['value'])):
                #         print self.content['web'][i]['value'][j]
            elif code == 20:  # Text to long
                print 'WORD TO LONG'
            elif code == 30:  # Trans error
                print 'TRANSLATE ERROR'
            elif code == 40:  # Don't support this language
                print 'CAN\'T SUPPORT THIS LANGUAGE'
            elif code == 50:  # Key failed
                print 'KEY FAILED'
            elif code == 60:  # Don't have this word
                print 'DO\'T HAVE THIS WORD'

    if __name__ == '__main__':
        Dict(sys.argv[1:])
    ```

-   1to3 -<<

    one

    two

    three

-   three +<<

    four

    ```python
    printf('good')
    ```

    four

-   nice -<
    +   1
    +   2
