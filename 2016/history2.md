---
title: 历史笔记 2
...

## 历史笔记 2

原载于 <https://github.com/district10/blog/blob/master/_pages/notes.md>。

---

How many Computer Languages are there? -<

:   ```
    late 1940s
        first electronic computers & LLLs
    1950s
        first HLLs for computers
    1969
        about 120 HLLs, about 15 in widespread use
    1977
        about 80 HLLs in active (non-trivial) use
    Today
        more than 2000 HLLs
    ```

    Scripting Paradigm

    :   So far, we have been thinking about languages suitable for solving very large
        problems, where the resulting programs are tens of thousands or more lines
        long, written and maintained by more than one person. However, not all problems
        require industrial-strength solutions, and different requirements have given
        rise to different kinds of languages. The situations where they are applicable
        are:

        >   building applications by *gluing together existing components* controlling
        >   applications that have a programmable interface writing programs where ease
        >   of development is more important than anything else (such as run-time
        >   efficiency, or maintainability)

Google Search -<

:   ```
    inurl:text
    intitle:text allintitle:text
    filetype:pdf
    site:pan.baidu.com
    weather:wuhan
    see more and...
    ```

计算机相关词汇 -<

:   -   CGI（公共网关接口，Common Gateway Interface） — 在 Web 服务器上，用来在脚本
        和／或应用程序之间传输数据，然后将该数据返回给 Web 页面或浏览器。CGI 脚本经
        常是使用 Perl 语言创建的，它能够生成动态 Web 内容（包括电子商业购物篮、讨论
        组、调查表单以及实时新闻等）。
    -   CHS（柱面／磁头／扇区，Cylinder/Head/Sector） — FDISK 在分区期间所需的磁盘
        信息。
    -   CLU（命令行实用程序，Command Line Utility） — 从命令行会话或 shell 运行的程
        序，如 Tar 或 Mkdir。
    -   LILO（Linux 装载程序，LInux LOader） — 一种流行的分区引导管理器实用程序，能
        够引导到 Linux 以外的操作系统。它并不特定于文件系统。
    -   MIME（多用途因特网邮件交换，Multipurpose Internet Mail Exchange） — 允许文
        本电子邮件消息包含非文本（例如图形、视频或音频）数据的通信协议。
    -   PAM（可插入的认证模块，Pluggable Authentication Modules） — 用于系统安全性
        的可替换的用户认证模块，它允许在不知道将使用何种认证方案的情况下进行编程。
        这允许将来用其它模块来替换某个模块，却无需重写软件。
    -   RCS（修订控制系统，Revision Control System） — 一组程序，它们控制组环境下文
        件的共享访问并跟踪文本文件的变化。常用于维护源代码模块的编码工作。
    -   RFS（远程文件共享，Remote File Sharing） — 一个程序，它让用户访问其它计算机
        上的文件，就好象文件在用户的系统上一样。
    -   RPM（RPM 软件包管理器，RPM Package Manager） — 一种用于因特网下载包的打包及
        安装工具，它包含在某些 Linux 分发版中。它生成具有 .RPM 扩展名的文件。与
        Dpkg 类似。
    -   `ag --pager less <qry> [<filename>]`{.bash}
    -   假脱机（Spool）（外围设备联机并发操作，Simultaneous Peripheral Operation
        On-Line） — 将数据发送给一个程序，该程序将该数据信息放入队列以备将来使用
        （例如，打印假脱机程序）。
    -   隐写术（Steganography, `[,stegə'nɔgrəfi]` n. 速记式加密）— 将一段信息隐藏在
        另一段信息中的做法。一个示例是在数字化照片中放置不可见的数字水印。
    -   Tux— 虚构的 Linux 企鹅吉祥物的名字。
    -   工作目录（Working Directory）— 当前目录或用户当前工作时所在的目录的另一名称。
    -   `"kyy` *vs.* `"Kyy`
    -   `"kp` === `"Kp`
    -   `:reg`

Vim notes -<

:   >   Yank the text you want to copy with `y[motion]` - this text is saved in `"`
    >   and `0` registers. Delete the text you want to replace with `d[motion]` - this
    >   text is saved in `"` register. Paste the yanked text with `"0p`

    We can now just type `@m` to run this macro on the current line. Furthermore,
    we can type `100@m` to do this 100 times! Lifes looking pretty good.

    `:%normal @a` apply to this region.

    -   `J` 合并行，并两行之间增加一个空格
    -   `gJ` 合并行没有空格
    -   `vip` 我一直使用 <kbd>v</kbd> <kbd>i</kbd> <kbd>p</kbd> 按键组合，快速
        选中一段，在代码块间使用非常方便。
    -   `<c-a> <c-x>` number++, number--
    -   `cat /etc/fstab`{.bash}
    -   `mount /cdrom`{.bash}
    -   `eject /cdrom`{.bash}
    -   `cd`{.bash} + <kbd>TAB</kbd>
    -   `md path/to/dir` === `mkdir -p path/to/dir`
    -   `rd path/to/dir` === `rmdir path/to/dir`
    -   `d` === `dirs -V`: lists last used directories
    -   Bash: `set -o vi`, `set -o emacs`
    -   Zsh:  `bindkey -v`, `bindkey -e`
    -   `C-t` 交换光标所在字符与其前的字符
    -   `M-t` 交换光标所在的单词与前面单词的位置
    -   `C-m` 相当于“回车键”

    ```vimrc
    %s/重车,运营/运营,重车/g
    %s/,超速报警//g
    %s/,登录//g
    g/,设备工作正常/d
    g!/ACC/d
    ```

删除中文字符: `:%s/\v[^\x00-\xff]+//g`

“Unix 用起来容易，但学习起来难”。 -<

:   Unix/Linux 操作系统的使用作为实践性非常强的一门“技术”，有章可循。每一个命令的命
    令格式、参数、选项都可以通过阅读手册获得，所以用起来很容易。

    但它学习起来，并不是每天扫地的阿姨一眼就能轻松掌握的工具。如作者所言，“设计
    Unix 的目的不是为了学习而是为了使用。”为了达到使用 Unix 这一工具的目的，我们需
    要了解其“然”，也就是基本操作：了解如何登陆 Unix、如何使用 Unix 编辑文件、操作目
    录……

Helpful aliases for common git tasks -<

:   - `g`{.bash} &rarr; `git`
    - `gst`{.bash} &rarr; `git status`
    - `gl`{.bash} &rarr; `git pull`
    - `gup`{.bash} &rarr; `git pull --rebase`
    - `gp`{.bash} &rarr; `git push`
    - `gd`{.bash} &rarr; `git diff`
    - `gdc`{.bash} &rarr; `git diff --cached`
    - `gdv`{.bash} &rarr; `git diff -w "$@" | view -`
    - `gc`{.bash} &rarr; `git commit -v`
    - `gcR`{.bash} &rarr; `git commit -v --amend`
    - `gca`{.bash} &rarr; `git commit -v -a`
    - `gcaR`{.bash} &rarr; `git commit -v -a --amend`
    - `gcmsg`{.bash} &rarr; `git commit -m`
    - `gco`{.bash} &rarr; `git checkout`
    - `gcm`{.bash} &rarr; `git checkout master`
    - `gr`{.bash} &rarr; `git remote`
    - `grv`{.bash} &rarr; `git remote -v`
    - `grmv`{.bash} &rarr; `git remote rename`
    - `grrm`{.bash} &rarr; `git remote remove`
    - `gsetr`{.bash} &rarr; `git remote set-url`
    - `grup`{.bash} &rarr; `git remote update`
    - `grbi`{.bash} &rarr; `git rebase -i`
    - `grbc`{.bash} &rarr; `git rebase --continue`
    - `grba`{.bash} &rarr; `git rebase --abort`
    - `gb`{.bash} &rarr; `git branch`
    - `gba`{.bash} &rarr; `git branch -a`
    - `gcount`{.bash} &rarr; `git shortlog -sn`
    - `gcl`{.bash} &rarr; `git config --list`
    - `gcp`{.bash} &rarr; `git cherry-pick`
    - `glg`{.bash} &rarr; `git log --stat --max-count=10`
    - `glgg`{.bash} &rarr; `git log --graph --max-count=10`
    - `glgga`{.bash} &rarr; `git log --graph --decorate --all`
    - `glo`{.bash} &rarr; `git log --oneline --decorate --color`
    - `glog`{.bash} &rarr; `git log --oneline --decorate --color --graph`
    - `gss`{.bash} &rarr; `git status -s`
    - `ga`{.bash} &rarr; `git add`
    - `gm`{.bash} &rarr; `git merge`
    - `grh`{.bash} &rarr; `git reset HEAD`
    - `grhh`{.bash} &rarr; `git reset HEAD --hard`
    - `gclean`{.bash} &rarr; `git reset --hard && git clean -dfx`
    - `gwc`{.bash} &rarr; `git whatchanged -p --abbrev-commit --pretty=medium`
    - `gsts`{.bash} &rarr; `git stash show --text`
    - `gsta`{.bash} &rarr; `git stash`
    - `gstp`{.bash} &rarr; `git stash pop`
    - `gstd`{.bash} &rarr; `git stash drop`
    - `ggpull`{.bash} &rarr; `git pull origin $(current_branch)`
    - `ggpur`{.bash} &rarr; `git pull --rebase origin $(current_branch)`
    - `ggpush`{.bash} &rarr; `git push origin $(current_branch)`
    - `ggpnp`{.bash} &rarr; `git pull origin $(current_branch) && git push origin $(current_branch)`
    - `glp`{.bash} &rarr; `git log prettily`

---

-   what the fuck barbecue = WTFBBQ
-   `extract`{.bash} 'x' alias - swiss knife for archive extracting

Python notes -<

:   -   表面上看，tuple 的元素确实变了，但其实变的不是 tuple 的元素，而是 list 的元素。
    -   list 和 tuple 是 Python 内置的有序集合，一个可变，一个不可变。根据需要来选择使用它们。

    ```python
    if <条件判断1>:
        <执行1>
    elif <条件判断2>:
        <执行2>
    elif <条件判断3>:
        <执行3>
    else:
        <执行4>
    ```

    `birth = int(raw_input(birth: ))`{.python}

    要避免 key 不存在的错误，有两种办法，一是通过 `in` 判断 `key` 是否存在：

    ```python
    >>> Thomas in d
    >>> False
    ```

    所以，对于不变对象来说，调用对象自身的任意方法，也不会改变该对象自身的内容。相
    反，这些方法会创建新的对象并返回，这样，就保证了不可变对象本身永远是不可变的。

    要保证 hash 的正确性，作为 key 的对象就不能变。在 Python 中，字符串、整数等都是
    不可变的，因此，可以放心地作为 key。而 list 是可变的，就不能作为 key

    * `int()`, `float()`, `str()`, `bool()`

    原来返回值是一个 tuple！但是，在语法上，返回一个 tuple 可以省略括号，而多个变量
    可以同时接收一个 tuple，按位置赋给对应的值，所以，Python 的函数返回多值其实就是
    返回一个 tuple，但写起来更方便。

    ```python
    def power(x, n=2):
        s = 1
        while n > 0:
        n = n - 1
        s = s * x
        return s
    ```

    默认参数必须指向不变对象！ `def add_end(L=None):`{.python}

    为什么要设计 `str`、`None` 这样的不变对象呢？因为不变对象一旦创建，对象内部的数
    据就不能修改，这样就减少了由于修改数据导致的错误。此外，由于对象不变，多任务环
    境下同时读取对象不需要加锁，同时读一点问题都没有。我们在编写程序时，如果可以设
    计一个不变对象，那就尽量设计成不变对象。

    * list: `[1, 2, 3]`
    * tuple: `(1, 2, 3)`

    定义可变参数和定义 list 或 tuple 参数相比，仅仅在参数前面加了一个 `*` 号。在函
    数内部，参数 numbers 接收到的是一个 tuple，因此，函数代码完全不变。但是，调用该
    函数时，可以传入任意个参数，包括 0 个参数

    ```python
    def calc(*numbers):
        sum = 0
        for n in numbers:
        sum = sum + n * n
        return sum

    nums = [1, 2, 3]
    calc(*nums)
    14
    ```

    ```python
    >>> kw = {city: Beijing, job: Engineer}
    >>> person(Jack, 24, **kw)
    name: Jack age: 24 other: {city: Beijing, job: Engineer}
    ```

    * 参数定义的顺序必须是：**必选参数**、**默认参数**、**可变参数**和**关键字参数**。
    * args 是可变参数，args 接收的是一个 tuple；
    * `**kw` 是关键字参数，kw 接收的是一个 dict。

    尾递归是指，在函数返回的时候，调用自身本身，并且，return 语句不能包含表达式。这
    样，编译器或者解释器就可以把尾递归做优化，使递归本身无论调用多少次，都只占用一
    个栈帧，不会出现栈溢出的情况。

    ```python
    >>> L[1:3]
    [Sarah, Tracy]

    for key in d:
    for value in d.itervalues():
    for k, v in d.iteritems():

    [x*x for x in range(1, 11)]

    isinstance(x, str)
    g = (x * x for x in range(10))
    g.next()
    ```

    * [生成器 - 廖雪峰的官方网站](http://www.liaoxuefeng.com/wiki/001374738125095c955c1e6d8bb493182103fac9270762a000/00138681965108490cb4c13182e472f8d87830f13be6e88000) :smile:

    ![](http://www.liaoxuefeng.com/files/attachments/0013879622109990efbf9d781704b02994ba96765595f56000/0)

    * map, reduce
    * `filter(function, list)`{.python}

    ```python
    def not_empty(s):
        return s and s.strip()

    filter(not_empty, [A, , B, None, C,  ])
    # 结果: [A, B, C]
    ```

    * `sorted([list], <function>)`{.python}
    * 高阶函数除了可以接受函数作为参数外，还可以把函数作为结果值返回。

    ```python
    In : def lazy_sum(*args):
       ...:     def sum():
       ...:         ax = 0
       ...:         for n in args:
       ...:             ax = ax + n
       ...:         return ax
       ...:     return sum
       ...:

    In : f = lazy_sum( 1, 2, 3, 4)

    In : f
    Out: <function __main__.sum>

    In : f()
    Out: 10
    ```

    在这个例子中，我们在函数 lazy_sum 中又定义了函数 sum，并且，内部函数 sum 可以引
    用外部函数 lazy_sum 的参数和局部变量，当 lazy_sum 返回函数 sum 时，相关参数和变
    量都保存在返回的函数中，这种称为“闭包（Closure）”的程序结构拥有极大的威力。

    `lambda x: x*x`

    :   ```python
        import functools
        int2 = functools.partial(int, base=2)
        int2('1000000')
        ```

        注意到上面的新的 int2 函数，仅仅是把 base 参数重新设定默认值为 2，但也可以
        在函数调用时传入其他值: `int2("1000000", base=10)`{.python}

        请注意，每一个包目录下面都会有一个 `__init__.py` 的文件，这个文件是必须存在
        的，否则，Python 就把这个目录当成普通目录，而不是一个包。`__init__.py` 可以
        是空文件，也可以有 Python 代码，因为 `__init__.py` 本身就是一个模块，而它的模块
        名就是 mycompany

        ```python
        if __name__ == '__main__':
            test()
        ```

    ```python
    try:
        import json # python >= 2.6
    except ImportError:
        import simplejson as json # python <= 2.5
    ```

    类似 `__xxx__` 这样的变量是特殊变量，可以被直接引用，但是有特殊用途，比如上面的
    `__author__`，`__name__` 就是特殊变量，hello 模块定义的文档注释也可以用特殊变量
    `__doc__` 访问，我们自己的变量一般不要用这种变量名；

    类似 `_xxx` 和 `__xxx` 这样的函数或变量就是非公开的（private），不应该被直接引
    用，比如 `_abc`，`__abc` 等；

    外部不需要引用的函数全部定义成 private，只有外部需要引用的函数才定义为 public。

    `from __future__ import division`, use python3.x in python2.x

    ```python
    class Student(object):

        def __init__(self, name, score):
            self.name = name
            self.score = score

    In : class Me(object):
       ....:     def __init__(this):
       ....:         this.name = "shit"
    this.__private_var, this.__not_private_var__, this._not_private_but_dont_touch_me_please
    class Dog(Animal):
        pass
    instanceof (dog, Dog)
    instanceof (dog, Animal) # true

    def run_twice(animal):
        animal.run()
        animal.run()
    ```

    对于一个变量，我们只需要知道它是 Animal 类型，无需确切地知道它的子类型，就可以
    放心地调用 `run()` 方法，而具体调用的 `run()` 方法是作用在 Animal、Dog、Cat 还
    是 Tortoise 对象上，由运行时该对象的确切类型决定，这就是**多态**真正的威力：调
    用方只管调用，不管细节，而当我们新增一种 Animal 的子类时，只要确保 `run()` 方法
    编写正确，不用管原来的代码是如何调用的。这就是著名的“开闭”原则：

    * 对扩展开放：允许新增 Animal 子类；
    * 对修改封闭：不需要修改依赖 Animal 类型的 `run_twice()` 等函数。

    ```python
    type(123), type("string")
    >>> import types
    __slots__ = (name, gender)

    class Student(object):

        def get_score(self):
            return self._score

        def set_score(self, value):
            if not isinstance(value, int):
                raise ValueError('score must be an integer!')
            if value < 0 or value > 100:
                raise ValueError('score must between 0 ~ 100!')
            self._score = value
    >>> s.score = 60 # OK，实际转化为s.set_score(60)
    ```

    * `@score.setter`
    * `@property` 的实现比较复杂，我们先考察如何使用。把一个 getter 方法变成属性，
      只需要加上 `@property` 就可以了，此时，`@property` 本身又创建了另一个装饰器
      `@score.setter`，负责把一个 setter 方法变成属性赋值，于是，我们就拥有一个可控
      的属性操作

    ```python
    class Student(object):

        @property
        def birth(self):
            return self._birth

        @birth.setter
        def birth(self, value):
            self._birth = value

        @property
        def age(self):
            return 2014 - self._birth
    ```

    由于 Python 允许使用多重继承，因此，**Mixin** 就是一种常见的设计。
    只允许单一继承的语言（如 Java）不能使用 Mixin 的设计。

    * Mixin
    * `__str__()`, `print(Student("Michael"))`
    * `__repr__ = __str__`
    * `__iter__`
    * `__getitem__`, `s = Student()`, `s`
    * `__getattr__`

    当调用不存在的属性时，比如 score，Python 解释器会试图调用 `__getattr__(self, score)` 来尝试获得属性

    `__call__`, `s = Student()`, `s()`

    ```python
    import types
    type(u'abc')==types.UnicodeType
    isinstance(a, (str, unicode)) # string or unicode
    ```

    如果要获得一个对象的所有属性和方法，可以使用 `dir()` 函数，它返回一个包含字符串
    的 list，比如，获得一个 str 对象的所有属性和方法: `dir(Dog)`

    * `getattr()`, `setattr()`, `hasattr()`
    * `hasattr(Dog, "__init__")`
    * `callable(Student())` # true
    * `__getattr__`

    `type()` 函数可以查看一个类型或变量的类型，Hello 是一个 class，它的类型就是
    type，而 h 是一个实例，它的类型就是 `class Hello`。

    * `type()` to create class,
    * `__metaclass__ = <Class>`
    * `try... except ...finally`.

    第二个 except 永远也捕获不到 ValueError，因为 ValueError 是 StandardError 的子
    类，如果有，也被第一个 except 给捕获了。

    也就是说，不需要在每个可能出错的地方去捕获错误，只要在合适的层次去捕获错误就可
    以了。这样一来，就大大减少了写 `try...except...finally` 的麻烦。

    `import logging # log error and run, with error`{.python}

    虽然用 IDE 调试起来比较方便，但是最后你会发现，**logging 才是终极武器**。

    如果你听说过“测试驱动开发”（TDD：Test-Driven Development），单元测试就不陌生。

    ```python
    d = dict(a=1,b=2)
    d = dict({"a":1,"b":2})
    raise FooError("invalid value: %s" % s)
    assert n != 0, "n is zero"
    logging, logging.info("n =%d" %n)
    import logging
    logging.basicConfig(level=logging.INFO)
    python -m pdb err.py
    pdb.set_trace()
    import pdb

    file-like object, `StringIO`
    <mode>=rb, f.read().decode("gbk")
    import codecs
    import os
    os.name
    os.path.abspath(".")
    os.getenv("PATH")
    os.path.split("url....") # dirname, basename
    import shutil
    split extension: os.path.splitext(str)==".py"
    ```

    我们把变量从内存中变成可存储或传输的过程称之为序列化，在 Python 中叫
    **pickling**，在其他语言中也被称之为 **serialization**，**marshalling**(集结待发的)，
    **flattening** 等等，都是一个意思。

    ```python
    try:
        import cPickle as pickle
    except ImportError:
        import pickle
    ```

    ![](http://static.oschina.net/uploads/img/201306/27011038_KCGY.jpg)

    python 语言特定的序列化模块是 pickle，但如果要把序列化搞得更通用、更符合 Web 标准，就可以使用 json 模块。

    json 模块的 `dumps()` 和 `loads()` 函数是定义得非常好的接口的典范。当我们使用时
    ，只需要传入一个必须的参数。但是，当默认的序列化或反序列机制不满足我们的要求时
    ，我们又可以传入更多的参数来定制序列化或反序列化的规则，既做到了接口简单易用，
    又做到了充分的扩展性和灵活性。如果要启动大量的子进程，可以用进程池(pool)的方式
    批量创建子进程在 Unix/Linux 下，可以使用 fork() 调用实现多进程。

    要实现跨平台的多进程，可以使用 multiprocessing 模块。

    进程间通信是通过 Queue、Pipes 等实现的。当多个线程同时执行 `lock.acquire()` 时，
    只有一个线程能成功地获取锁，然后继续执行代码，其他线程就继续等待直到获得锁为止。

    获得锁的线程用完后一定要释放锁，否则那些苦苦等待锁的线程将永远等待下去，成为死线程。所以我们用try...finally来确保锁一定会被释放。

    `import threading`{.python}

    :   ```python
        # 创建全局 ThreadLocal 对象:
        local_school = threading.local()

        import re
        s = r'ABC\-001' # Python的字符串

        In : if re.match(r'^/d{3}\-\d{3,8}$', '010-12345'):
           ....:     print 'ok'
           ....:

        In :

        >>> re.split(r'\s+', 'a b   c')
        ['a', 'b', 'c']
        >>> re.split(r'[\s\,]+', 'a,b, c  d')
        ['a', 'b', 'c', 'd']


        >>> m = re.match(r'^(\d{3})-(\d{3,8})$', '010-12345')
        >>> m
        <_sre.SRE_Match object at 0x1026fb3e8>
        >>> m.group(0)
        '010-12345'
        >>> m.group(1)
        '010'
        >>> m.group(2)
        '12345'
        ```

    贪婪匹配

    :   ```python
        >>> re.match(r'^(\d+)(0*)$', '102300').groups()
        ('102300', '')
        ```

    非贪婪匹配

    :   ```python
        >>> re.match(r'^(\d+?)(0*)$', '102300').groups()
        ('1023', '00')

        # 编译:
        >>> re_telephone = re.compile(r'^(\d{3})-(\d{3,8})$')
        # 使用：
        >>> re_telephone.match('010-12345').groups()
        # ('010', '12345')
        ```

    Python 之所以自称“batteries included”，就是因为内置了许多非常有用的模块，无需额
    外安装和配置，即可直接使用。

    modules

    :   ```python
        from collections import namedtuple
        from collections import deque
        q = deque(["a", "b", "c"])
        q.append("x")
        q.appendleft("y")
        q
        append(), pop(), appendleft(), popleft()
        from collections import defaultdict
        from collections import OrderdDict
        from collections import counter

        %Base64
        >>> n = 10240099
        >>> b1 = chr((n & 0xff000000) >> 24)
        >>> b2 = chr((n & 0xff0000) >> 16)
        >>> b3 = chr((n & 0xff00) >> 8)
        >>> b4 = chr(n & 0xff)
        >>> s = b1 + b2 + b3 + b4
        >>> s
        ' ?@c'
        ```

    ```python
    import struct

    struct.pack('>I', 234523452345)
    import hashlib
    md5 = haslib.md5()
    md5.update(how to use md5 in python hashlib?)
    print md5.hexdigest()
    ```

    要注意摘要算法不是加密算法，不能用于加密（因为无法通过摘要反推明文），只能用于
    防篡改，但是它的单向计算特性决定了可以在不存储明文口令的情况下验证用户口令。

    ```python
    import itertools
    natuals = itertools.count(1)
    for n in natuals:
        print n

    >>> cs = itertools.cycle('ABC') # 注意字符串也是序列的一种
    >>> ns = itertools.repeat('A', 10)

    >>> natuals = itertools.count(1)
    >>> ns = itertools.takewhile(lambda x: x <= 10, natuals)
    >>> for n in ns:
    ...     print n

    打印出1到10

    chain('abc', 'def')
    imap(), *vs.* map()
    ifilter()
    ```

    XML 虽然比 JSON 复杂，在 Web 中应用也不如以前多了，不过仍有很多地方在用，所以，有
    必要了解如何操作 XML。

    ```python
    # 打开一个 jpg 图像文件，注意路径要改成你自己的:
    im = Image.open('/Users/michael/test.jpg')
    # 获得图像尺寸:
    w, h = im.size
    # 缩放到50%:
    im.thumbnail((w//2, h//2))
    # 把缩放后的图像用jpeg格式保存:
    im.save('/Users/michael/thumbnail.jpg', 'jpeg')

    msg = MIMEText('hello, send by Python...', 'plain', 'utf-8')
    msg['From'] = _format_addr(u'Python爱好者 <%s>' % from_addr)
    msg['To'] = _format_addr(u'管理员 <%s>' % to_addr)
    msg['Subject'] = Header(u'来自SMTP的问候……', 'utf-8').encode()
    ```

    这就是传说中的 ORM 技术：`Object-Relational Mapping`，把关系数据库的表结构映射
    到对象上。是不是很简单？

    但是由谁来做这个转换呢？所以 ORM 框架应运而生
    这个接口就是 **WSGI：Web Server Gateway Interface**。

    ```bash
    find where-to-look criteria what-to-do
    find /tmp /var/tmp . $HOME -name foo
    find / -name foo 2>/dev/null
    find -type f | ag some.\*.txt\$ | xargs tar -rf some.tar
    ```

    `xsel -ob # paste text to >`{.bash}

    The first `--` argument that is not an option-argument should be accepted as a
    delimiter indicating the **end of options**. Any following arguments should be
    treated as operands, even if they begin with the `-` character.

    For utilities that use operands to represent files to be opened for either
    reading or writing, the `-` operand should be used to mean only standard input
    (or standard output when it is clear from context that an output file is being
    specified) or a file named `-`.

    **"options" (or, historically, "flags")**

    When a utility has only a few permissible options, they are sometimes shown
    individually, as in the example. Utilities with many flags generally show all
    of the individual flags (that do not take option-arguments) grouped, as in:

    * `utility_name [-abcDxyz][-p arg][operand]`{.bash}
    * `utility_name [options][operands]`{.bash}

    Utilities with very complex arguments may be shown as follows:

    ![](http://www.liaoxuefeng.com/files/attachments/001400339839622665127663fb840b5870864895b103c2f000)

    在 Jinja2 模板中，我们用 `{{ name }}` 表示一个需要替换的变量。很多时候，还需要
    循环、条件判断等指令语句，在 Jinja2 中，用 `{% ... %}` 表示指令。

    * Jinja2, Mako, Cheetah, Django

    看起来 A、B 的执行有点像多线程，但协程的特点在于是一个线程执行，那和多线程比，
    协程有何优势？

    最大的优势就是**协程极高的执行效率**。因为子程序切换不是线程切换，而是由程序自
    身控制，因此，没有线程切换的开销，和多线程比，线程数量越多，协程的性能优势就越
    明显。

    第二大优势就是**不需要多线程的锁机制**，因为只有一个线程，也不存在同时写变量冲突，
    在协程中控制共享资源不加锁，只需要判断状态就好了，所以执行效率比多线程高很多。

    因为协程是一个线程执行，那怎么利用多核 CPU 呢？最简单的方法是`多进程+协程`，既
    充分利用多核，又充分发挥协程的高效率，可获得极高的性能。注意到 consumer 函数是
    一个 generator（生成器），把一个 consumer 传入 produce 后：

    * 首先调用 `c.next()` 启动生成器；
    * 然后，一旦生产了东西，通过 `c.send(n)` 切换到 consumer 执行；
    * consumer 通过 yield 拿到消息，处理，又通过 yield 把结果传回；
    * produce 拿到 consumer 处理的结果，继续生产下一条消息；
    * produce 决定不生产了，通过 c.close() 关闭 consumer，整个过程结束。
    * 整个流程无锁，由一个线程执行，produce 和 consumer 协作完成任务，所以称为“协程”，
      而非线程的抢占式多任务。

    最后套用 Donald Knuth 的一句话总结协程的特点：

    > “子程序就是协程的一种特例。”

    当一个 greenlet 遇到 IO 操作时，比如访问网络，就自动切换到其他的 greenlet，等到
    IO 操作完成，再在适当的时候切换回来继续执行。由于 IO 操作非常耗时，经常使程序处
    于等待状态，有了 gevent 为我们自动切换协程，就保证总有 greenlet 在运行，而不是
    等待 IO。

Clojure -<

:   Clojure 提供了很多函数来操作序列（sequence), 而序列是集合的逻辑视图。很多东西可
    以被看作序列：Java 集合, Clojure 的集合, 字符串, 流, 文件系统结构以及 XML 树.从
    已经存在的 clojure 集合来创建新的集合的效率是非常高的，因为这里使用了
    **persistent data structures** 的技术(这对于 clojure 在数据不可更改的情况下，同
    时要保持代码的高效率是非常重要的)。

    ```clojure
    '(a b c)
    (quote (a b c))

    hash-map, sorted-map
    list, vector

    '(), []
    ```

    When a set is used as a function, it returns the argument if it is in the set
    and nil otherwise.

    Because the Java invocation syntax in Clojure is clean and simple, it is
    idiomatic to use Java directly, rather than to hide Java behind Lispy wrappers.

    * `defn`: define a function
    * user=> `(load-file "/home/gnat/test.clj")`
    * `(conj coll item)`
    * this is a set: `#{}`
    * `conj`: conjoin
    * `(def visitors (ref #{}))`
    * `(dosync (commute visitors conj "stu"))`

    ```clojure
    @vistors
    (deref vistors)
    user=> (@vistors "stu")
    "stu"
    user=> (if (@vistors "stu") (str "true") (str "false"))
    "true"
    user=> (if (@vistors "tu") (str "true") (str "false"))
    "false"
    ```

    Here we've got your project's `README`, a `src/` directory containing the code, a
    `test/` directory, and a `project.clj` file which describes your project to
    Leiningen. The `src/my_stuff/core.clj` file corresponds to the `my-stuff.core`
    namespace.

    ```
    :dependencies [[org.clojure/clojure "1.5.1"]]
    list in a list, [[],[],[],[]] like this
    [[<group-id>/<artifact-id> version-number]]
    ```

    ```clojure
    >> lein run one
    This is the foo, and your args are one
    >> lein run -m my-stuff.core -main good
    hello main, see you. (-main good)

    (require 'clojure.string 'clojure.test)
    vector: (require '[clojure.string :as string])
    user=> (string/capitalize "good")
    "Good"

    (require 'clojure.string '[clojure.test :as test])
    Using other namespaces’ code as though it’s yours:
    Using other namespaces’ code as though it’s yours:
    Using other namespaces’ code as though it’s yours:
    Using other namespaces’ code as though it’s yours: use
    user=> (split (str (java.util.Date.)) #":")
    ["Mon Feb 16 22" "55" "56 CST 2015"]

    (import 'java.util.Date)
    (Date.)
    require and then import: (require 'stuff)
    (import 'stuff.BigWidget)
    ```

    ```clojure
    user=> (let [[x y z] v]
      #_=> (println "x is: " x ", y is: " y ", z is: " z))
    x is:  11 , y is:  22 , z is:  33
    nil
    user=>

    name, namespace, class, #"string as regex"
    user=> (let [[& x ] v] x)
    (11 22 33 "string 44")
    user=> (let [[x & z ] v] z)
    (22 33 "string 44")

    user=> (if "true" "true..." "false...")
    "true..."
    user=> (if (true? "true") "true..." "false...")
    "false..."
    ```

MISC -<

:   ![](http://math.ecnu.edu.cn/~latex/images/Bezier_2.gif)
    ![](http://math.ecnu.edu.cn/~latex/images/Bezier_3.gif)
    ![](http://math.ecnu.edu.cn/~latex/images/Bezier_4.gif)

    `sudo apt-get install cowsay`{.bash}

    `easy_install statsmodels`{.bash}

JavaScript -<

:   ```javascript
    var o = {
        banana: function () {},
        apple: function () {},
        default: function () {}
    }

    if (o[fruit]) {
        o[fruit]();
    } else {
        o['default']();
    }

    if () {} else {}
    if () {} else if () {} else {}

    switch (VAR) { case VAR1: CMD; break; ...; default: CMD; }

    while () {}

    for (INIT; TEST; INC) {}

    do {} while();

    try {} catch {}

    break; continue;
    lable, break lable; continue lable;

    number, string, boolean,
    object, array, function,
    null, undefined,
    typeof, instenceof, Object.prototype.toString
    true, false,
    &&, ||, !, ===, !==, ==, !=
    ```

    ```javascript
    "abc".length
    "abc"
    .length
    Number.MAX_VALUE
    Number.MIN_VALUE
    var longString = "Long \
    long \
    long \
    string";
    // unicode
    var s = '\u0049'; // "@"
    s.charAt(0) // char
    s.charCodeAt(0) // base-10
    // Base64
    window.btoa('Hellow world')
    window.atob('...')
    ```

    要将非 ASCII 码字符转为 Base64 编码，必须中间插入一个浏览器转码的环节，再使用这两个方法。

    ```javascript
    function b64Encode( str ) {
        return window.btoa(unescape(encodeURIComponent( str )));
    }

    function b64Decode( str ) {
        return decodeURIComponent(escape(window.atob( str )));
    }

    // 使用方法
    b64Encode('你好') // "5L2g5aW9"
    b64Decode('5L2g5aW9') // "你好"
    ```

    ```bash
    $ echo '你好' | base64
    5L2g5aW9

    $ echo '5L2g5aW9Cg==' | base64 -d
    你好

    $ echo '5L2g5aW9Cg' | base64 -d
    你好
    base64: invalid input

    # 还要注意换行
    $ echo 'good' | base64
    Z29vZAo=
    $ echo -n 'good' | base64
    Z29vZA==

    ```

    object

    ```javascript
    var o = {
        p: "Hello World"
        q: "Quit, bye"
    };
    o.p // "Hello World"
    o["p"] // "Hello World"
    if ("p" in o) {} // method 1
    if ("0" in o) {} // method 2
    if (0 in o) {} // method 3
    Object.keys(o); // ["p", "q"]
    delete o.p // true

    var o = new Object();
    o.hasOwnProperty('toString'); // true
    'toString' in o // true
    for (i in o) {console.log(o.i);}

    // with
    o.p1 = 1;
    o.p2 = 2;
    with (o) {
        p1 = 3;
        p2 = 6;
    }
    mZ
    var a = [, , ,]; // legth = 3 not enumerable
    var b = [undefined, undefined, undefined]; // length = 3, enumerable
    var c = new Array(3); // length = 3, not enumerable
    ```

[数据处理 API 参考手册#md2html](http://developer.qiniu.com/code/v6/api/dora-api/index.html#md2html) -<

:   * <http://whudoc.qiniudn.com/keybr.md?md2html/0/css/aHR0cDovL3Rhbmd6eC5xaW5pdWRuLmNvbS9tYWluLmNzcw==>
    * <http://tangzx.qiniudn.com/main.css> --[base64 encoding](https://www.base64encode.org/) --> `aHR0cDovL3Rhbmd6eC5xaW5pdWRuLmNvbS9tYWluLmNzcw==`

HTTP Redirection -<

:   `<meta HTTP-EQUIV="REFRESH" content="0; url=http://district10.github.io/">`{.html}

    countdown:

    ```html
    <!DOCTYPE html>
    <html>
    <head>
        <meta HTTP-EQUIV="REFRESH" content="10; url=http://tangzx.qiniudn.com/post-0105-free-services-that-i-use.html">
        <style> .target { color: red; } </style>
        <script>
        var target = "Kaggle";
        var seconds = 10-1;
        window.onload = function() { countdown('countdown'); }

        function countdown(element) {
            setInterval(function() {
                var el = document.getElementById(element);
                if(seconds <= 0) {
                    el.innerHTML = "Redirecting to '<strong class='target'>" + target + "</strong>'...";
                    return;
                }
                var second_text = seconds > 1 ? "seconds" : "second";
                el.innerHTML = "Will be redirected to '<strong class='target'>"
                             + target
                             + "</strong>' in "
                             + seconds + " " + second_text + ".";
                --seconds;
            }, 1000);
        }
        </script>
    </head> <body> <div id='countdown'>TZX Redirection Page.</div> </body> </html>
    ```

MISC -<

:   fatality `[fə'tæləti]`: n. 死亡；宿命；致命性；不幸；灾祸

    ```css
    article hr::after {
        letter-spacing: 0.5em;
        content: "✼ ✼ ✼";
        position: relative;
        top: -0.4em;
    }

    article hr {
        text-align: center;
        color: #CCC;
    }
    ```

    markdown blog: `<a id="id"></a>`, then use `url#id`, or in tzx-blog, use `` `@`{.tzx-anchor#id} ``

    把「逼格」改爲「屄格」不是「惡意編輯」。把屄格這樣一個氣質低俗的詞柔化、諱飾成
    「逼格」，造成「其實沒有那麼難聽」的假象，繼續鼓勵人們使用，纔是真正的大惡。因
    此禁言，誠爲黑白顛倒。做出這一決策的知乎管理員應該爲此感到羞恥。

    去掉 QDockWidget 的标题栏

    ```cpp
    QWidget* titleBar = mPropertyWindow->titleBarWidget();
    mPropertyWindow->setTitleBarWidget( new QWidget() );
    delete titleBar;
    ```

    QPixmap 与 HBITMAP、HICON 互转

    -   `QPixmap::toWinHICON();`{.cpp}
    -   `QPixmap::toWinHBITMAP();`{.cpp}
    -   `QPixmap::fromWinHICON();`{.cpp}
    -   `QPixmap::fromWinHBITMAP();`{.cpp}

    Qt 编译后移植到其他地方后，qt 寻找库的路径可能出现错误，这时：

    在 Qt 的 `bin` 目录下自己建一个 `qt.conf`

```
[Paths]
Prefix=C:/dev/qt-4.8.6
```

OpenGL & OpenSceneGraph -<

:   ```cpp
    void glFrustum( GLdouble left,
                    GLdouble right,
                    GLdouble bottom,
                    GLdouble top,
                    GLdouble nearVal,
                    GLdouble farVal );
    ```

    `glFrustum` describes a perspective matrix that produces a perspective
    projection.  The current matrix (see `glMatrixMode`) is multiplied by this matrix
    and the result replaces the current matrix, as if glMultMatrix were called with
    the following matrix as its argument:

    $$\begin{bmatrix}
    \frac{2nearVal}{right - left} & 0 & A & 0 \\
    0 & \frac{2nearVal}{top - bottom} & B & 0 \\
    0 & 0 & C & 0 \\
    0 & 0 & -1 & 0
    \end{bmatrix}$$

    $A = \frac{right + left}{right - left}$
    $B = \frac{top + bottom}{top - bottom}$
    $C = -\frac{farVal + nearVal}{farVal - nearVal}$
    $D = -\frac{2farVal \times nearVal}{farVal - nearVal}$

    Typically, the matrix mode is `GL_PROJECTION`, and $(left, bottom, -nearVal)$
    and $(right, top, -nearVal)$ specify the points on the near clipping plane that
    are mapped to the lower left and upper right corners of the window, assuming
    that the eye is located at (0, 0, 0).  - farVal specifies the location of the
    far clipping plane.  Both nearVal and farVal must be positive.

    Depth buffer precision is affected by the values specified for nearVal and
    farVal.  The greater the ratio of farVal to nearVal is, the less effective the
    depth buffer will be at distinguishing between surfaces that are near each
    other.  If r = farVal nearVal roughly log 2 ⁡r bits of depth buffer precision
    are lost.  Because r approaches infinity as nearVal approaches 0, nearVal must
    never be set to 0.

    <div class="tzx-fright">
    ![A view frustum](https://upload.wikimedia.org/wikipedia/commons/thumb/0/02/ViewFrustum.svg/330px-ViewFrustum.svg.png)
    </div>

    VPN
    :   the view-plane normal – a normal to the view plane.

    VUV
    :   the view-up vector – the vector on the view plane that indicates the upward
        direction.

    VRP
    :   the viewing reference point – a point located on the view plane, and the
        origin of the VRC.

    PRP
    :   the projection reference point – the point where the image is projected
        from, for parallel projection, the PRP is at infinity.

    VRC
    :   the viewing-reference coordinate system.

    The geometry is defined by a field of view angle (in the 'y' direction), as
    well as an aspect ratio. Further, a set of z-planes define the near and far
    bounds of the frustum.

    ```cpp
    // osg::Camera
    /** Get the orthographic settings of the orthographic projection matrix.
     * Returns false if matrix is not an orthographic matrix, where parameter
     * values are undefined.*/
    bool getProjectionMatrixAsOrtho(double& left, double& right,
                                    double& bottom, double& top,
                                    double& zNear, double& zFar) const;

    /** Get the frustum setting of a perspective projection matrix.
      * Returns false if matrix is not a perspective matrix, where parameter values
      * are undefined.*/
    bool getProjectionMatrixAsFrustum(double& left, double& right,
                                      double& bottom, double& top,
                                      double& zNear, double& zFar) const;

    /** Get the frustum setting of a symmetric perspective projection matrix.
      * Returns false if matrix is not a perspective matrix, where parameter values
      * are undefined.  Note, if matrix is not a symmetric perspective matrix then
      * the shear will be lost.  Asymmetric matrices occur when stereo, power
      * walls, caves and reality center display are used.  In these configurations
      * one should use the 'getProjectionMatrixAsFrustum' method instead.*/
    bool getProjectionMatrixAsPerspective(double& fovy,double& aspectRatio,
                                          double& zNear, double& zFar) const;
    ```

    经过透视投影 （正射投影也一样）变换， 能够把点 从 观察空间（相机坐标系）转换到
    齐次裁剪空间坐标系（又叫规则观察体(Canonical View Volume)中）。这个转化后的空间
    体 不仅独立于 把三维场景转换为二维屏幕空间的投影类型（透视、正射），也独立于屏
    幕的分辨率(Resolution) 以及长宽比(Aspect Ratio).。

    ![](http://img.blog.csdn.net/20150514145737857?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvemh1eWluZ3FpbmdmZW4=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/Center)
    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/0/00/Pyramid_of_vision.svg/900px-Pyramid_of_vision.svg.png)

    齐次裁剪空间坐标系（范围  -1<=x <=1,-1<=y<=1,-1<=z <=1, )是左手坐标系，为什么？ 其实也很好理解，如上图 ， A和B点经过投影变换后其x坐标是一样的（不再是投影平截体中的那种相对关系）， 而近裁剪面上的点的z坐标经过投影变换后变为-1 ， 而远裁剪面上的z坐标为1 ，所以齐次裁剪空间坐标系的z轴的正方向正好和相机坐标系中的z轴正方向是相反的。

    经过透视投影后，每个顶点的x和y坐标还要除以其z坐标，这个除法是产生透视收缩的方法

    ```cpp
    osgUtil::PolytopeIntersector // 具体不同算法实现类
    osgUtil::IntersectionVisitor //用来遍历节点树的每个节点
    osg::Node * mNode;  //  你要做相交测试的根节点

    osg::ref_ptr<osgUtil::PolytopeIntersector> intersector =
            new osgUtil::PolytopeIntersector(osgUtil::Intersector::WINDOW, xMin, yMin, xMax, yMax);
    intersector->setIntersectionLimit(osgUtil::Intersector::LIMIT_ONE_PER_DRAWABLE);
    osgUtil::IntersectionVisitor iv( intersector.get() );

    mRootNode->accept(iv);
    ```

    总结：

    - 在 `osg::ref_ptr<osg::Node>node = new osg::Node;` 其中 node 为 `osg::ref_ptr`
      的对象，而不是指针。
    - OSG 中新创建的场景对象建议使用 `ref_ptr` 进行内存分配和管理
    - 对于不使用 `ref_ptr` 的对象，引用计数值变得没有意义，并且它无法自动从场景中卸
      载。
    - 新建对象作为函数结果返回时，应该返回 `release()`。并尽快引入到别的场景中，否
      则发生内存泄露
    - 只有 `osg::ref_ptr` 类来管理 osg 对象的引用计数，其他脱离了（和osg::ref_ptr对
      象无关的操作）osg::ref_ptr 管理的操作如：赋值等将不会对引用计数产生影响

    `inline void setNodeMask(NodeMask nm) { _nodeMask = nm; }`{.cpp}

    ```cpp
    osg::ref_ptr <osg::MatrixTransform> mat=new osg::MatrixTransform();
    osg::Matrix m = osg::Matrix::scale(1.0f,1.0f,1.0f)
                  * osg ::Matrix::translate(osg::Vec3(0,0,10.0f));
    mat->setMatrix(m);
    mat->addChild(node1.get());

    osg::ref_ptr<osg::AnimationPathCallback> apcb = new osg::AnimationPathCallback;
    apcb->setAnimationPath( createAnimationPath(50.0f, 6.0f) );
    mat->setUpdateCallback( apcb.get() );
    ```

    ```cpp
    //创建一个光照
    osg::ref_ptr<osg::Node>createLight(osg::ref_ptr<osg::Node>model)
    {
        osg::ComputeBoundsVisitor cbbv;
        model->accept(cbbv);

        osg::BoundingBox bb=cbbv.getBoundingBox();


        osg::ref_ptr<osg::Light>lt=new osg::Light;
        lt->setLightNum(0);

        //设置环境光的颜色
        lt->setAmbient(osg::Vec4(1.0f,1.0f,1.0f,1.0f));

        osg::ref_ptr<osg::LightSource>ls=new osg::LightSource();

        ls->setLight(lt.get());

        return ls.get();
    }
    ```

    ```cpp
    int main()
    {
        osg::ref_ptr<osgViewer::Viewer> viewer = new osgViewer::Viewer();
        viewer->addEventHandler(new osgViewer::WindowSizeHandler);
        //创建一个组节点
        osg::ref_ptr<osg::Group> root = new osg::Group();

        //创建一个阴影节点，并标识接收对象和投影对象
        osg::ref_ptr<osgShadow::ShadowedScene> shadowedScene = new osgShadow::ShadowedScene();
        shadowedScene->setReceivesShadowTraversalMask(ReceivesShadowTraversalMask);
        shadowedScene->setCastsShadowTraversalMask(CastsShadowTraversalMask);

        //创建阴影纹理，使用的是shadowTexture技法
        osg::ref_ptr<osgShadow::ShadowTexture> st = new osgShadow::ShadowTexture;
        osg::ref_ptr<osgShadow::ParallelSplitShadowMap> pss = new osgShadow::ParallelSplitShadowMap;
        //osg::ref_ptr<osgShadow::ShadowVolume> sv = new osgShadow::ShadowVolume;
        osg::ref_ptr<osgShadow::MinimalShadowMap> ms = new osgShadow::MinimalShadowMap;
        osg::ref_ptr<osgShadow::StandardShadowMap> ss = new osgShadow::StandardShadowMap;
        osg::ref_ptr<osgShadow::SoftShadowMap> softS = new osgShadow::SoftShadowMap;
        osg::ref_ptr<osgShadow::ViewDependentShadowTechnique> vds = new osgShadow::ViewDependentShadowTechnique;
        //关联阴影纹理
        shadowedScene->setShadowTechnique(softS);

        //创建一个根节点，并将场景数据、模型赋予节点
        osg::ref_ptr<osg::Node> node =createModel();

        //添加场景数据并添加光源
        shadowedScene->addChild(createLight(node.get()));
        shadowedScene->addChild(node.get());


        root->addChild(shadowedScene.get());

        //优化场景数据
        osgUtil::Optimizer optimizer ;
        optimizer.optimize(root.get()) ;

        viewer->setSceneData(root.get());
        viewer->realize();
        viewer->run();

        return 0 ;
    }
    ```

    其实简而言之  就是 `glOrtho` 设置相片的大小，`glViewport` 指定相框大小。如果 `glOrtho`
    指定的相片小了，那么放到同等大小的相框上就相当于放大了。

    而如果 `glOrtho` 指定的相片大了，放到同等大小的相框上相当于缩小了场景。

    在 `OpenGL` 中有两个比较重要的投影变换函数，`glViewport` 和 `glOrtho`。

    `glOrtho` 是创建一个正交平行的视景体。 一般用于物体不会因为离屏幕的远近而产生大小
    的变换的情况。比如，常用的工程中的制图等。需要比较精确的显示。 而作为它的对立情
    况, `glFrustum` 则产生一个透视投影。这是一种模拟真是生活中，人们视野观测物体的真实
    情况。例如：观察两条平行的火车到，在过了很远之后，这两条铁轨是会相交于一处的。
    还有，离眼睛近的物体看起来大一些，远的物体看起来小一些。

    `glOrtho(left, right, bottom, top, near, far)`， left 表示视景体左面的坐标，right
    表示右面的坐标，bottom 表示下面的，top 表示上面的。这个函数简单理解起来，就是一个
    物体摆在那里，你怎么去截取他。这里，我们先抛开 glViewport 函数不看。先单独理解
    glOrtho 的功能。 假设有一个球体，半径为 1，圆心在 (0, 0, 0)，那么，我们设定
    `glOrtho(-1.5, 1.5, -1.5, 1.5, -10, 10);` 就表示用一个宽高都是 3 的框框把这个球体整
    个都装了进来。  如果设定 `glOrtho(0.0, 1.5, -1.5, 1.5, -10, 10);` 就表示用一个宽是
    1.5， 高是 3 的框框把整个球体的右面装进来;如果设定 `glOrtho(0.0, 1.5, 0.0, 1.5,
    -10, 10);` 就表示用一个宽和高都是1.5的框框把球体的右上角装了进来。

    ```cpp
    if(root->getChild(i)->getName().compare("Hello") == 0) {
        osg::Node * tmp = root->getChild(i);
        root->removeChild(tmp);
        *node = tmp;
        // 在这里tmp 已经析构，因为 只有root引用了hello节点，而在root 节点
        // removechild后 tmp的引用计数为0，此时将析构
    }
    ```

    refs and see also

      - [OpenGL 透视投影 齐次裁剪空间 深度缓存 - Emacs 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/zhuyingqingfen/article/details/45721643)
      - [Qt 小技巧 记录 - Emacs 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/zhuyingqingfen/article/details/44019915)
      - [glFrustum](https://www.opengl.org/sdk/docs/man2/xhtml/glFrustum.xml)
      - [OSG 中 相交测试 模块 工作流程及原理 - Emacs 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/zhuyingqingfen/article/details/37923417)
      - [OSG 智能指针陷阱 总结 - Emacs 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/zhuyingqingfen/article/details/25311989)

    Read more

      - [OSG 自定义数据类型 关键帧动画 - Emacs 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/zhuyingqingfen/article/details/12651017)
      - [OSG 一个简单的着色器例子 - Emacs 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/zhuyingqingfen/article/details/8656913)
      - [osg 路径 动画 效果 - Emacs 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/zhuyingqingfen/article/details/8248157)
      - [osg 漫游器 代码框架 - Emacs 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/zhuyingqingfen/article/details/8249501)

```lisp
(defun smart-open-line ()
  "Insert an empty line after the current line.
Position the cursor at its beginning, according to the current mode."
  (interactive)
  (move-end-of-line nil)
  (newline-and-indent))

(global-set-key [(shift return)] 'smart-open-line)
```

```lisp
(defun prelude-open-with (arg)
  "Open visited file in default external program.

With a prefix ARG always prompt for command to use."
  (interactive "P")
  (when buffer-file-name
    (shell-command (concat
                    (cond
                     ((and (not arg) (eq system-type 'darwin)) "open")
                     ((and (not arg) (member system-type '(gnu gnu/linux gnu/kfreebsd))) "xdg-open")
                     (t (read-shell-command "Open current file with: ")))
                    " "
                    (shell-quote-argument buffer-file-name)))))
```

```lisp
(defun copy-file-name-to-clipboard ()
  "Copy the current buffer file name to the clipboard."
  (interactive)
  (let ((filename (if (equal major-mode 'dired-mode)
                      default-directory
                    (buffer-file-name))))
    (when filename
      (kill-new filename)
      (message "Copied buffer file name '%s' to the clipboard." filename))))
```

```lisp
(defun indent-buffer ()
  "Indent the currently visited buffer."
  (interactive)
  (indent-region (point-min) (point-max)))

(defun indent-region-or-buffer ()
  "Indent a region if selected, otherwise the whole buffer."
  (interactive)
  (save-excursion
    (if (region-active-p)
        (progn
          (indent-region (region-beginning) (region-end))
          (message "Indented selected region."))
      (progn
        (indent-buffer)
        (message "Indented buffer.")))))
```

```lisp
(defun google ()
  "Google the selected region if any, display a query prompt otherwise."
  (interactive)
  (browse-url
   (concat
    "http://www.google.com/search?ie=utf-8&oe=utf-8&q="
    (url-hexify-string (if mark-active
         (buffer-substring (region-beginning) (region-end))
       (read-string "Google: "))))))
```

```lisp
(defun indent-defun ()
  "Indent the current defun."
  (interactive)
  (save-excursion
    (mark-defun)
    (indent-region (region-beginning) (region-end))))
```

```lisp
(electric-indent-mode +1)
```

```lisp
(global-set-key (kbd "C-c o") 'open-with)
(global-set-key (kbd "C-M-\\") 'indent-region-or-buffer)
(global-set-key (kbd "RET") 'newline-and-indent)
(global-set-key (kbd "C-c g") 'google)
(global-set-key (kbd "C-M-z") 'indent-defun)
(global-set-key (kbd "C-c t") 'visit-term-buffer)
(global-set-key [(control shift up)]  'move-line-up)
(global-set-key [(control shift down)]  'move-line-down)
```

```lisp
(defun visit-term-buffer ()
  "Create or visit a terminal buffer."
  (interactive)
  (if (not (get-buffer "*ansi-term*"))
      (progn
        (split-window-sensibly (selected-window))
        (other-window 1)
        (ansi-term (getenv "SHELL")))
    (switch-to-buffer-other-window "*ansi-term*")))
```

```lisp
(defun move-line-up ()
  "Move up the current line."
  (interactive)
  (transpose-lines 1)
  (forward-line -2)
  (indent-according-to-mode))

(defun move-line-down ()
  "Move down the current line."
  (interactive)
  (forward-line 1)
  (transpose-lines 1)
  (forward-line -1)
  (indent-according-to-mode))
```

```lisp
(require 'paren)
(setq show-paren-style 'parenthesis)
(show-paren-mode +1)
```

```lisp
(global-set-key (kbd "C-+") 'text-scale-increase)
(global-set-key (kbd "C--") 'text-scale-decrease)
(global-set-key (kbd "C-c k") 'kill-other-buffers)
(global-set-key (kbd "C-x O") (lambda ()
                                (interactive)
                                (other-window -1)))
```

```lisp
(defun kill-other-buffers ()
  "Kill all buffers but the current one.
Don't mess with special buffers."
  (interactive)
  (dolist (buffer (buffer-list))
    (unless (or (eql buffer (current-buffer)) (not (buffer-file-name buffer)))
      (kill-buffer buffer))))
```

```lisp
(require 'dash)

(defun prelude-kill-other-buffers ()
  "Kill all buffers but the current one.
Doesn't mess with special buffers."
  (interactive)
  (-each
   (->> (buffer-list)
     (-filter #'buffer-file-name)
     (--remove (eql (current-buffer) it)))
   #'kill-buffer))
```

[Repeat last command - Emacs Redux](http://emacsredux.com/blog/2013/03/26/repeat-last-command/)

[Copy filename to the clipboard - Emacs Redux](http://emacsredux.com/blog/2013/03/27/copy-filename-to-the-clipboard/)

[Open file in external program - Emacs Redux](http://emacsredux.com/blog/2013/03/27/open-file-in-external-program/)

[Indent region or buffer - Emacs Redux](http://emacsredux.com/blog/2013/03/27/indent-region-or-buffer/)

[Indent defun - Emacs Redux](http://emacsredux.com/blog/2013/03/28/indent-defun/)

[Google - Emacs Redux](http://emacsredux.com/blog/2013/03/28/google/)

[Network utilities - Emacs Redux](http://emacsredux.com/blog/2013/03/28/network-utilities/)

[Automatic(electric) indentation - Emacs Redux](http://emacsredux.com/blog/2013/03/29/automatic-electric-indentation/)

[Automatic(electric) character pairing - Emacs Redux](http://emacsredux.com/blog/2013/03/29/automatic-electric-character-pairing/)

[Terminal at your fingertips - Emacs Redux](http://emacsredux.com/blog/2013/03/29/terminal-at-your-fingertips/)

[Kill other buffers - Emacs Redux](http://emacsredux.com/blog/2013/03/30/kill-other-buffers/)

[Go back to previous window - Emacs Redux](http://emacsredux.com/blog/2013/03/30/go-back-to-previous-window/)

[Playing with Font Sizes - Emacs Redux](http://emacsredux.com/blog/2013/04/01/playing-with-font-sizes/)

[Highlight matching parentheses - Emacs Redux](http://emacsredux.com/blog/2013/04/01/highlight-matching-parentheses/)

[Highlight current line - Emacs Redux](http://emacsredux.com/blog/2013/04/02/highlight-current-line/)

`sudo update-alternatives –config x-terminal-emulator`{.bash}
`scrot # caputre screenshot`{.bash}

i3 window manager -<

:   ```
    X-f:                fullscreen
    arrow keys:         get focus
    e, s, w
    X-e:                toggle
    X-s:                stacked
    X-w:                tabbed, X-left, X-right
    shift r:            restart i3 inplace
    ```

You could use **more expressive version of substitution** you employed when
assigning OBJECTS: `OBJECTS=$(SOURCES:%.cpp=obj/%.o)`{.makefile}

or use a **standard text transformation** function:
`OBJECTS=$(addprefix obj/,$(SOURCES:.cpp=.o))`{.makefile}

<div class="tzx-tabs">
* [refs](#line14550)
* [codes](#line14551)

<div id="line14550">
* [dynamic_cast Operator](https://msdn.microsoft.com/en-us/library/cby9kycs.aspx)
* [Casting](https://msdn.microsoft.com/en-us/library/x9wzb5es.aspx)
</div>

~~~ {#line14551 .c}
// static_cast_Operator.cpp
// compile with: /LD
class B {};

class D : public B {};

void f(B* pb, D* pd) {
   D* pd2 = static_cast<D*>(pb);   // Not safe, D can have fields
                                   // and methods that are not in B.

   B* pb2 = static_cast<B*>(pd);   // Safe conversion, D always
                                   // contains all of B.
}

// static_cast_Operator_2.cpp
// compile with: /LD /GR
class B {
public:
   virtual void Test(){}
};
class D : public B {};

void f(B* pb) {
   D* pd1 = dynamic_cast<D*>(pb);
   D* pd2 = static_cast<D*>(pb);
}

// static_cast_Operator_3.cpp
// compile with: /LD /GR
typedef unsigned char BYTE;

void f() {
   char ch;
   int i = 65;
   float f = 2.5;
   double dbl;

   ch = static_cast<char>(i);   // int to char
   dbl = static_cast<double>(f);   // float to double
   i = static_cast<BYTE>(ch);
}

// dynamic_cast_1.cpp
// compile with: /c
class B { };
class C : public B { };
class D : public C { };

void f(D* pd) {
   C* pc = dynamic_cast<C*>(pd);   // ok: C is a direct base class
                                   // pc points to C subobject of pd
   B* pb = dynamic_cast<B*>(pd);   // ok: B is an indirect base class
                                   // pb points to B subobject of pd
}

// dynamic_cast_2.cpp
// compile with: /c /GR
class A {virtual void f();};
class B {virtual void f();};

void f() {
   A* pa = new A;
   B* pb = new B;
   void* pv = dynamic_cast<void*>(pa);
   // pv now points to an object of type A

   pv = dynamic_cast<void*>(pb);
   // pv now points to an object of type B
}

// dynamic_cast_3.cpp
// compile with: /c /GR
class B {virtual void f();};
class D : public B {virtual void f();};

void f() {
   B* pb = new D;   // unclear but ok
   B* pb2 = new B;

   D* pd = dynamic_cast<D*>(pb);   // ok: pb actually points to a D
   D* pd2 = dynamic_cast<D*>(pb2);   // pb2 points to a B not a D
}
~~~
</div>

a **`type qualifier`** is not allowed on a static member function.

* The emoji repository has a `CNAME` file with the domain `emoji.muan.co`. It
  is owned by muan, whose User Pages repository has a `CNAME` file with the
  domain `muan.co`.
* The Project Pages site at `muan.github.io/emoji` redirects to `muan.co/emoji`
  and is also available at `emoji.muan.co`.

我的两个域名都在 [DNSPod 控制台](https://www.dnspod.cn/console/dns) 管理。QQ 登录即可。 -<

:   ![2 sites](http://whudoc.qiniudn.com/2016/QQ图片20160325142211.png)

    -----------         ----------------------  ---------------------
    主机记录            记录类型                记录值
    -----------         ----------------------  ---------------------
    @                   A                       192.30.252.153

    @                   A                       192.30.252.154

    blog                CNAME                   district10.github.io.

    www                 CNAME                   district10.github.io.
    -----------         ----------------------  ---------------------


```
文件夹 PATH 列表
卷序列号为 00000200 BC08:BFBA
D:.
├─data
│  └─textures
├─demo
│  ├─3rdParty
│  │  └─QtPropertyBrowser
│  │      ├─canvas_typed
│  │      ├─canvas_variant
│  │      ├─decoration
│  │      ├─demo
│  │      │  └─images
│  │      ├─extension
│  │      ├─object_controller
│  │      └─simple
│  ├─btExplorerDemo
│  ├─btLoggerDemo
│  ├─btMainWindowDemo
│  ├─btTextureEditorDemo
│  ├─IODemo
│  ├─JsonReaderDemo
│  ├─ModelStructureDemo
│  ├─OSGDemo
│  ├─QtPropertyBrowserVariantDemo
│  ├─RapidJSONDemo
│  ├─SignCutterDemo
│  ├─SignTransformerDemo
│  ├─TextureEditorDemo
│  ├─TextureNotationDemo
│  └─TheBrowserDemo
├─docs
├─images
├─includes
│  ├─OSGDemo
│  └─rapidjson
│      ├─error
│      ├─internal
│      └─msinttypes
├─lib
│  ├─debug
│  └─release
├─notes
│  └─images
│      ├─deprecated
│      ├─icon
│      └─material
├─src
│  ├─3rdParty
│  ├─btGUI
│  ├─Global
│  ├─Handlers
│  ├─IO
│  ├─ModelStructure
│  ├─Parts
│  ├─QtPropertyBrowser
│  │  └─images
│  ├─SignCutter
│  ├─SignLogger
│  ├─SignTransformer
│  ├─TextureEditor
│  ├─TextureNotation
│  ├─TheBrowser
│  └─Utils
└─tryouts
    └─StackedBoxes
        └─images
```

> 'The enjoyment of one's tools is an essential ingredient of successful work.'
> -- Donald E. Knuth

Better Emacs shortcut for Neo users:

* delete last word: ESC Backspace
* get back to last word: ESC b

| Movement | Shortcut |
| :---: | :---: |
| next word | X-s(ESC) d |
| previous word | X-s(ESC) X-d(Backspace) |
| go to previous word | X-s(ESC) b |

Just in case this sounds annoying, the major advantage is that you can always
get back a previous state. In most editors, undoing several changes and then
accidentally typing a character would leave you 'stranded' with no way to redo
what you had undone. Emacs makes this trivial. – phils

`/ə/` 和 `/ʌ/` 这两个发音，在语言学上有区别，在发音中没区别，再说一遍，麻痹没区
别！！！！！！！！！！！！！

朙（míng）月拼音

- [gat json](http://whudoc.qiniudn.com/gat.json)
- [tag json](http://whudoc.qiniudn.com/tag.json)

you flinched! (畏惧)

[豆瓣](http://www.douban.com/)

[Complex Network Notes](file:///D:/tzx/git/blog/publish/post-0084-complex-network-notes.html)

[Complex network - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Complex_network)

[小波变换在图像处理分析中的应用](file:///D:/tzx/git/blog/publish/post-0077-wavelet-transform.html)

[复杂网络 - 维基百科，自由的百科全书](http://wiki.yooooo.us/d2lraS8lRTUlQTQlOEQlRTYlOUQlODIlRTclQkQlOTElRTclQkIlOUM=)

[学术海报 | LaTeX工作室](http://www.latexstudio.net/archives/category/tex-slides/latex-poster)

[一个清新典雅的beamer主题样式 | LaTeX工作室](http://www.latexstudio.net/archives/4948)

[用LaTeX重现1875年的广告样式 | LaTeX工作室](http://www.latexstudio.net/archives/4935)

[伯尔尼高等专业学院的beamer主题样式 | LaTeX工作室](http://www.latexstudio.net/archives/4931)

[一个清爽的beamer主题样式 | LaTeX工作室](http://www.latexstudio.net/archives/4894)

[一个所见即所得的科学公式编辑软件–GNU TeXmacs | LaTeX工作室](http://www.latexstudio.net/archives/4876)

[黄正华老师的课件beamer分享 | LaTeX工作室](http://www.latexstudio.net/archives/4853)

[LaTeX技巧826:TeXLive的安装与使用-黄正华 | LaTeX工作室](http://www.latexstudio.net/archives/4816)

[实现TeX的算法：回首编程技术的过去三十年 | LaTeX工作室](http://www.latexstudio.net/archives/4759)

[LaTeX排版The AWK Programming Language中译本 | LaTeX工作室](http://www.latexstudio.net/archives/4736)

[一个电子书LaTeX模板分享 | LaTeX工作室](http://www.latexstudio.net/archives/4665)

[LaTeX排版精致的数学笔记 | LaTeX工作室](http://www.latexstudio.net/archives/4625)

[中国科学技术大学研究生官网为LaTeX模板正名 | LaTeX工作室](http://www.latexstudio.net/archives/4542)

[中国科学技术大学学位与研究生教育 - 学位授予——文档下载](http://gradschool.ustc.edu.cn/ylb/material/xw/wdxz.html)

[一个用户的LaTeX笔记 | LaTeX工作室](http://www.latexstudio.net/archives/4429)

[Tikz绘制Android的短信息聊天界面 | LaTeX工作室](http://www.latexstudio.net/archives/4384)

[2015 GNOME年会beamer主题模板 | LaTeX工作室](http://www.latexstudio.net/archives/4347)

[莲枝专栏–来作笔记吧。 | LaTeX工作室](http://www.latexstudio.net/archives/4898)

[乌普萨拉大学的科技海报主题模板 | LaTeX工作室](http://www.latexstudio.net/archives/3012)

真爱其实叫牺牲 -- 给永远的鼬 (by zak) -<

:   修罗之道是什么,它通往何方?在火影忍者中,有如此一人,他便在此道上踏歌而行.在他
    之后,留下了无尽之血与泪水；在他前方,只有看不见尽头的黑暗；而他红中泛黑的双
    瞳中,映射出了太多的死亡与破灭。

    未来没有救赎,只有灭亡,抱此觉悟,宇智波鼬------即使在宇智波这个原本就自悲剧中
    诞生的家族之中也是最具悲剧色彩的男人, 背负了太多诅咒与怨恨, 在名为终结的黑
    色的华尔兹舞曲中艰难而孤傲的独舞.

    其实,他只是一位兄长，他只想保护自己的弟弟，就算被自己的弟弟憎恨也无所谓，就
    算被弟弟杀掉也无所谓。“我愚蠢的弟弟啊，如果你想杀我的话，就憎我恨我吧，不断
    地逃，不断地逃只是为了活着而活着，然后，等你哪一天得到了和我相同的眼睛，就
    来到我面前吧。”他只想让弟弟活下去，便只得噙着泪水这样冷酷的说道，在乱世之中，
    这是唯一可以让弟弟强大起来的办法—给予他杀死自己的目标，让他把仇恨全部发泄到
    自己的身上。

    其实,他只是一名忍者，忍者本来就是活在黑暗中的，鼬更把这一忍道贯彻的淋漓尽致。
    自我牺牲是忍者的本分，这便是鼬的信念。他所渴望的，是村子的兴盛，是整个忍者
    世界的和平，也许我们看来这个词过于恶俗，但鼬却义无反顾的为之奋斗。他亲手为
    自己的一族落下了帷幕，是为了避免更惨痛的战争，所谓战争…就一定伴随着双方的死
    亡伤病和痛苦… 但鼬宁愿独自吞下着苦果，他这么做了。在那个月圆之夜，他亲自动
    手将自己的族人全部抹杀，唯独他的弟弟，他下不了手。然后，为了不让弟弟仇恨自
    己的村子，他说了那样的话，他宁愿一个人背负弟弟所有的仇恨。

    鼬，这个顶级的幻术高手，给自己的弟弟制造了一个最大的幻术，单纯的佐助，自以
    为自己的写轮眼能看穿一切幻术，但是，他的眼睛，没能看破鼬的任何真相，鼬所制
    造的幻象，他一个都没能看穿。“人都是依靠自己的知识和认识又被其束缚的活着的，
    还将其称之为现实，但知识和认识是暧昧不清的东西，那个现实，也许只是镜花水月
    而已，人都是活在自己的意识世界里，你不这样认为吗？”面对鼬的质问，这个愚蠢的
    弟弟依然浑然没有觉察到，自己的哥哥是如何的爱自己，被仇恨吞噬的佐助，只想尽
    早杀掉自己的大哥，报仇雪恨。终于，在这一天，他成功了。

    鼬是故意让佐助杀掉自己的，他只想让自己的弟弟活下去，便只能牺牲自己。为了保
    护自己的村子，他也只能牺牲自己，作为一介罪犯，一个叛徒，而悲惨地死去。他时
    刻不忘自己的弟弟，自己的村子，甚至整个忍者世界，为了成全大义，只有牺牲自己。

    是鼬告诉了我们，自我牺牲才是真爱，这个冷酷的男人一生都没有哭过，只是在灭族
    的那一天晚上，面对自己的弟弟，落下了悲痛的泪水，没有人知道，这幅冰冷的外表
    下，是一颗温暖的心，充满爱的心。

    他死后，没有认为他立碑立传，甚至在许多人看来是大快人心，只有老天为之动容，
    那淅淅沥沥的雨，或许就是天在哭泣吧！只有他曾经的敌人，斑，给了他最恰当的评
    价。他对佐助说道：“鼬他，杀害上司，杀害朋友，杀害恋人，杀害父亲，杀害母亲，
    唯独没有对自己的弟弟动手。心中流淌着血一般的泪水，将自己的全部感情抹杀的男
    人，却无法对你下手，知道为什么吗·········因为在他心中，你的性命比村子的安危
    更重要！”

    “宁愿舍弃名誉而污名缠身，宁愿放弃爱而选择背负仇恨，但即便如此，鼬还是含着笑
    离开了人世。”

    鼬笑着离开了，了无牵挂的离开了，只留下了唯一的遗言—

    “原谅我，

    佐助，

    这是

    最后一次了

是命运么，教我如何相信 -- 写给鸣人和佐助 (by zak) -<

:   |   一个伴随了我们十年之久的故事，一种在爱与恨中挣扎却无比坚毅的成长，一段用努
    |   力和汗水去赢得认可的历程。火影的故事就这样铺陈开来，伴随着我们流逝的青春，
    |   刻下磨不灭的印记。
    |
    |                                                          ——题记

    两个人，两个完全不同的人。

    鸣人，是那样的炽烈，像骄阳一般，温暖着每一个人，影响着每一个人。冲天的金黄
    的头发，纯粹的蓝色眼眸，带着不变的自信，踏上梦想之路，一步一步跌跌撞撞的走
    来。阳光下，他静静站立，脸上的笑容，满载着难以言明的自信，灿烂的荡漾开来，
    将所有的失落，所有的泪水统统抛下。谁能想到，他曾经地多么的寂寞。小小的心灵
    又怎能承受得住那么都不屑的眼神，明明是想证明自己的，又为什么总是失败？树下
    的秋千上，他默默的坐着，低垂的头掩饰不住的伤心，与周围同学们毕业的欣喜构成
    鲜明的对比。与生俱来的自信与乐观又怎甘心如此弱小的活下去，所以他想当火影，
    为此奋勇前进。他是天生的逐梦者，会为梦想披荆斩棘。

    而佐助，相对于鸣人而言，就是一块寒冰，冷得让人难以靠近。苍白的脸上看不到任
    何表情，黑色的眼睛像一潭深不见底的水，你永远也猜不清他在想什么。很多时候，
    他只是静静的站着，静静的坐着，却让人感到那么的寂寞。他曾经也是个爱笑的孩子
    啊，谁能想到只是一瞬之间，所有的一切就消失殆尽。快乐的时光再也追不回，曾经
    的幸福再也找不到，于是憎恨便滋生开，像是罂粟花，绚丽却有毒。他是真正的复仇
    者，仇恨是他不能释怀的心结，力量才是他真正追求的东西。

    时间真是个奇怪的东西，默默的流逝，却像可以海浪般席卷一切。

    佐助的离开，是鸣人心中的痛。他无数次去追寻，却又无能为力。或许鸣人和佐助的
    那一战，是两人生命线猛烈的撞击，火花四溅，编织出拭不去的羁绊。

    时光流逝，将羁绊编织成命运。

    佐助杀了大蛇丸，得到了想要的力量，鸣人在自来也死后成为了预言之子；佐助杀了
    鼬，本以为复了仇，却发现原来一切都只是个阴谋，是个错误；鸣人拯救了村子，成
    为了英雄，团藏的阴谋却恰巧袭来。成长的路注定不平坦。佐助要向木叶报仇，而鸣
    人想借机会拯救佐助。两个人已经站到了对立的面上，下次相遇，会是难以挽回的命
    运吗？

    “曾经六道真人宣扬忍宗，将世界引导向和平 ，理想为完成之时，他的大限即将来临。
    六道仙人见忍宗的力量和意志托付给两个孩子。哥哥具有仙人之“眼”，于是传授给他
    查克拉的力量和精神力。弟弟天生具有仙人之“肉体“，所以传授给他生命力和身体能
    量。因为领悟到和平必须要有爱……仙人在弥留之际，不得不决定继任者……但是就是那
    个决定导致了永恒持续的憎恨诅咒……仙人觉得比起追求力量的哥哥……追求爱的弟弟才
    是最合适的继任者。作为长男认为自己理所应当继任的 哥哥无法认同仙人的选择……因
    为憎恨他向弟弟宣战。时间流逝，血缘逐渐疏远，两兄弟的子孙依旧持续战争。哥哥
    的子孙被称为宇智波，弟弟的子孙被称为千手……我宇智波斑和初代火影千手柱间之间
    的战斗，也是命运。”(选自火影漫画462集斑所说的话）

    鸣人继承了火的意志，而佐助是宇智波一族的后代。

    这是宿命吗？

    “千手和宇智波，火的意志和憎恨，鸣人和佐助。你们两个将成为命运选中的另一对兄
    弟”。”(选自火影漫画462集斑所说的话）

    真是宿命吗？

    我不是个相信宿命的人，更不相信宿命可以决定一切。

    还记得当鸣人还被大家歧视时，他努力的要得到大家的认可，他成功了；当鸣人还是
    个吊车尾时，他努力要变强，他成功了；中忍考试时，他对战信命的宁次，他胜利了。
    因此他一次一次对命运反抗，正是因为这种反抗，他才走到了今天。难道这一切都只
    不过是宿命的安排？教我如何相信，如何相信宿命可以强大到让人无法反抗?难道鸣人
    的执着，鸣人的坚持，佐助的偏执，佐助的憎恨，都不过是上天安排的一场游戏？我
    不相信！绝不！

    宿命么，这么虚无缥缈的东西，不体会过又怎能知道，不反抗又怎么知道不可以？

    我不知道最后的结局会怎样。但我相信，就算是宿命，鸣人和佐助也会是破除宿命的
    人。

    所以，请期待下去吧。静静地，期待吧…………

>   废话训练一年，受益持续一生。

埃尔德什十分独持。除了衣食住行这些生活基本要知的事之外，他对很多问题也毫不关心，
年青时甚至被人误以为是同性恋者，但其实他无论对异性或是同性都没有兴趣。事实上，
他是一个博学的人，对历史了如指掌，但长大后只专注数学，任何其他事情也不管。

**`Otaku` Culture**

P.L.A.是中国人民解放军（People's Liberation Army)的英文简称。中国人民解放军是中
国军事力量的主要组成部分，是巩固人民民主专政的坚强柱石、保卫社会主义祖国的钢铁
长城和建设社会主义的重要力量。中国人民解放军现役总兵力为200万人（截至2015年底）

军区管辖范围: -<

:   1.  北京军区： 北京、河北、内蒙古、山西 俄罗斯、蒙古
    2.  沈阳军区： 辽宁、吉林、黑龙江 俄罗斯、朝鲜
    3.  济南军区： 山东、河南 黄海对面
    4.  南京军区： 江苏、安徽、上海、浙江、江西、福建黄海、东海对面
    5.  兰州军区： 甘肃、青海、陕西、宁夏、新疆 蒙古
    6.  成都军区： 四川、重庆、贵州、云南、西藏印度、越南、缅甸
    7.  广州军区： 广东、广西、海南、湖南、湖北越南、南海对面

ttf 字体安装：`.ttf` 文件放到 `%WINDIR/Fonts` 文件夹即可。

僭越(jiàn yuè)，指超越本份，古时指地位低下的冒用在上的名义或器物等等， 尤指用皇家专用的。

尕，读作 gǎ。中国汉字，一般是方言中小的意思，例如：～娃（含亲爱之意）。～李。

[Modifier key - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Modifier_key#Dual-role_keys)

**Dual-role keys** -<

:   It is possible to use (with some utility software) one same key both as a normal key and as a modifier.

    For example, you can use the space bar both as a normal Space bar and as a
    Shift. Intuitively, it'll be a Space when you want a whitespace, and a Shift
    when you want it to act as a shift. I.e. when you simply press and release it,
    it is the usual space, but when you press other keys, say X, Y and Z, while
    holding down the space, then they will be treated as ⇧ Shift plus X, Y and Z.

    The above example is known as "SandS", standing for **"Space and Shift"** in
    Japan. But any number of any combinations are possible.

    To press <kbd>shift+space</kbd> in the previous example, you need in addition to a
    space/shift dual role key, one of (a) another space/shift key, (b) a usual
    shift, or (c) a usual space key.

-   动机与信心原则
-   时间分配原则
-   数量与质量的关系原则
-   复习原则（艾宾浩斯）
-   复习点的确定（5 分钟超短期，30 分钟短期，12 小时周期，1 天，2 天，4 天，7 天，15 天）
-   1, 2, 3 &rarr; 2, 3, 1
-   早上新单词，中午、晚上复习。
-   Use the words three times and it's yours.
-   周期结束，也要复习。
-   光看不够，还要主动回想（遮住尽力想出来），电话卡都“磨光”了！
-   如果放弃，前面的单词就白费了！
-   2.5 小时，2 个 List，300 个单词。
-   先记住，再慢慢掌握。坚持就是胜利。从一个胜利走向另一个胜利。
-   GRE 需要 CET4、CET6、TOEFL、GRE（登泰山而小天下）
-   GMAT 需要 CET4、CET6、TOEFL、GMAT
-   TOEFL 需要 CET4、CET6、TOEFL
-   即便把 GRE 背了十遍，还是有很多不认识的单词。即使已经超长发挥背了 100 个，但是
-   不要停下来，再来 30 个还能记住，这样就能突破极限。“原来自己也可以。”
-   枯坐良久，甚觉无聊，还是背单词把。

maverick `['mævrɪk]`, -<

:   -   n, 没打烙印的动物；持不同意见的人
    -   vt. 用不正当手段获取
    -   vi. 迷途；背离
    -   adj. 未打烙印的；行为不合常规的；特立独行的

Elon (`eelon` not `eyelon`) Musk

海航单位

:   -   海里，Nautical mile，最短的海里是在赤道，1海里=1843米。最长的海里是在南北两极上，1海里=1862米。
    -   节（Knot）以前是船员测船速的，每走1海里，船员就在放下的绳子上打一个节，以后就用节做船速的单位。
    -   链（Chain）十分之一海里。

```shell
shutdown -s -t 1800
shutdown -a
```

>   我们不是为了取悦你们才出家的。

<kbd>WIN+D</kbd>

**like tears in rain.**

ditto `['dɪtəʊ]` -<

:   -   n.  a mark used to indicate the word above it should be repeated
    -   v.  repeat an action or statement

    In informal English, you can use ditto to represent a word or phrase that
    you have just used in order to avoid repeating it. In written lists, ditto
    can be represented by ditto marks - the symbol * - underneath the word that
    you want to repeat.

    Lister's dead. Ditto three Miami drug dealers and a lady.

Crotch -<

:   A crotch can be any region or an object, where a trunk splits into two or
    more limbs. This can include branching regions of trees, buildings,
    diagrams, animals, etc. In particular the crotch is the region of the human
    body between the legs where they join the torso. It is the area containing
    the genitals. As such, it is considered one of the intimate parts.

l: el，但实际上很多人读成 lel。

They have no idea what's going to happen.

**pop the cherry** 意为 take one's virginity, 也叫 deflower, defile, trim the
buff, crack the pitcher, pluck the rose, pick the lock, cut the cake, enter the
Valhalla, land the Martian probe on Venus 当年 The Runaways《Cherry Bomb》的
cherry 暗示的就是这个。

[Fleshlight - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Fleshlight)

叫 `cowlick`，头发旋 http://t.cn/R4h6fmX //@治愈系爱人：我还喜欢睡醒呆毛 说法是
牛舔的那个 谷大 咋说来着的 RT @谷大白话:#每日一词# 【`Poseidon's Kiss`】波赛冬之
吻：“上大号时马桶里噗通噗通溅起的打湿屁屁的水花”的文艺说法。其化解之道的文艺说
法叫【`Poseidon's Pillow`】波赛冬之枕：用几层厕纸垫到马桶水面防止溅起水花。

【PMS】n. 经前综合征 Pre-menstrual syndrome 的缩写

**【flirtationship】n. more than a friendship, less than a relationship: 暧昧。**

`cosmophobia` n. 宇宙恐惧症。指对于宇宙以及自己在宇宙中真实地位的可怕恐惧。形容
词是 `cosmophobic`。

在形容人个子矮的时候，short 可能不够委婉，一般说 `petite`。在形容人胖的时候，
fat 明显不够委婉，可以说 plus size。在形容肤色时，长得白和黑不是 white 和 black
（慎用！），而是 pale/fair（形容白），tan/dark 形容黑。

There is NO CLOUD, just other people's computers.

To install one of these versions, unpack it and run the following **from the
top-level source directory** using the Terminal: `pip install .`

And they asked him, "How could you possibly do this?" And he answered, "When I
learned to program, you were lucky if you got five minutes with the machine a
day. If you wanted to get the program going, it just had to be written right.
**So people just learned to program like it was carving stone. You sort of have
to sidle up to it. That's how I learned to program.**

23' 23\': `23' 23\'`, smart & dumb

【**Dinosaur Erotica**】恐龙色情文学。以恐龙为主题的十八禁色情小说。基本上就是恐龙
抓走美女，然后嘿嘿嘿的故事。该系列书名也极为直白坦诚：如《美人被霸王龙抓走了》
《美人被翼龙抓走了》《美人在恐龙博物馆被抓走了》 《美人和迅猛龙嘿嘿嘿》 等

[Image Engine](http://image-engine.com/film/) -<

:   ```markdown
    AMERICAN SNIPER

    TEENAGE MUTANT NINJA TURTLES

    ELYSIUM

    LONE SURVIVOR

    :   <iframe
            src="https://player.vimeo.com/video/90177922"
            width="500" height="281" frameborder="0"
            webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>

    R.I.P.D.

    :   <iframe
            src="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw=="
            data-src="https://player.vimeo.com/video/90173618"
            width="500" height="281" frameborder="0"
            webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>

    ZERO DARK THIRTY

    :   <iframe
            src="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw=="
            data-src="https://player.vimeo.com/video/91452356"
            width="500" height="281" frameborder="0"
            webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>

    WHITE HOUSE DOWN

    :   <iframe
            src="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw=="
            data-src="https://player.vimeo.com/video/91453702"
            width="500" height="281" frameborder="0"
            webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>

    SAFE HOUSE

    :   <iframe
            src="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw=="
            data-src="https://player.vimeo.com/video/92181438"
            width="500" height="281" frameborder="0"
            webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>

    THE THING

    :   <iframe
            src="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw=="
            data-src="https://player.vimeo.com/video/92187878"
            width="500" height="281" frameborder="0"
            webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>

    IMMORTALS

    :   <iframe
            src="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw=="
            data-src="https://player.vimeo.com/video/95316985"
            width="500" height="281" frameborder="0"
            webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>

    DISTRICT 9

    :   <iframe
            src="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw=="
            data-src="https://player.vimeo.com/video/95324453"
            width="500" height="281" frameborder="0"
            webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>
    ```

---

```bash
#!/bin/bash
convert img.jpg -crop 100x100  +repage  +adjoin  l0-%d.jpg
```

`are you kidding me`{.tzx-hover}

~~~{.tzx-hover}
hover
~~~

[tzx show]

[tzx show]: javascript:document.getElementsByTagName('body').appendChild(document.createElement('script')).setAttribute('src','http://tangzx.qiniudn.com/tzxshow.js')

> **this is good for a chunckle!**

---

[hosts](file:///C:/Windows/System32/drivers/etc/hosts)

- good: ip url
- bad: url1 url2
- bad: ip:port url

---

[A python script to speed up the rendering process of Hexo 3.](https://gist.github.com/wzpan/7db9b0888f06a8d6ff8c) -<

:   程序还是越写越好的。

    ```python
    #!/usr/bin/python2

    '''
    SYNOPSIS:
    $ python speedup.py -f FILE
    or
    $ python speedup.py -d DIR
    '''

    import sys, os, getopt

    TARGET_TYPE = [".md", ".markdown"]

    def process_file(path):
        ''' Process a file. '''
        line = ""
        quote_flag = False
        line_list = []
        with open(path) as f:
            while True:
                line = f.readline()
                if line == "":
                    break
                if line.startswith("```"):
                    quote_flag = not quote_flag
                if line.strip()=="```" and quote_flag:
                    line = "``` plain\r\n"
                line_list.append(line)
        with open(path, 'w+') as f:
            f.writelines(line_list)


    def process_dir(path):
        ''' Process a directory. '''
        file_list = []
        files = os.listdir(path)
        for file in files:
            file = os.path.join(path, file)
            root, ext = os.path.splitext(os.path.basename(file))
            if os.path.isfile(file) and ext in TARGET_TYPE:
                process_file(file)

    def main():
        if len(sys.argv) < 2:
            print "Arguments should be at least 2."
            print "python speedup.py -f [FILE]"
            print "python speedup.py -d [DIRECTORY]"
            exit(1)

        try:
            opts, args = getopt.getopt(sys.argv[1:], "f:d:", ["file=", "directory="])
            for arg, value in opts:
                if arg in ('-f', '--file'):
                    root, ext = os.path.basename(value)
                    if ext in 'TARGET_TYPE':
                        process_file(value)
                elif arg in ('-d', '--directory'):
                    process_dir(value)
                else:
                    print "Argument error. %s" % arg
                    exit(1)
        except getopt.GetoptError as e:
            print e
            exit(1)


    if __name__ == '__main__':
        main()
    ```

**Three Virtues** -<

:   Perl 语言的发明人 Larry Wall 说，好的程序员有 3 种美德： 懒惰、急躁和傲慢
    （Laziness, Impatience and hubris）。

    According to Larry Wall, the original author of the Perl programming
    language, there are three great virtues of a programmer; Laziness,
    Impatience and Hubris:

      - **Laziness**: The quality that makes you go to great effort to reduce
        overall energy expenditure. It makes you write labor-saving programs
        that other people will find useful and document what you wrote so you
        don't have to answer so many questions about it.
      - **Impatience**: The anger you feel when the computer is being lazy.
        This makes you write programs that don't just react to your needs, but
        actually anticipate them. Or at least pretend to.
      - **Hubris**: The quality that makes you write (and maintain) programs
        that other people won't want to say bad things about.

    refs and see also
      - [懒惰、急躁和傲慢（Laziness, Impatience and hubris） - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2006/05/laziness_impatience_and_hubris.html)

MISC
大小写方式（下划线只是为了突出分割处）

-   `Something_And_Somethingelse`
-   `SOMETHING_and_SOMETHINGELSE`

根据《个人所得税》法，80,000 以上的工资要支付 45% 的税（工资）。

当一个人不打算再骂一个人，扭头就走的时候，情分就尽了。

为什么整部《水浒》里，最有影响力的老虎要被武松打死呢？因为这事儿拼的不是武力。
李逵杀虎，靠的是武力。所以李逵打死的老虎都不算老虎，和虾蟹没有太大区别。正因为
不算老虎，才能一下杀四个。武松杀老虎，只能有一次，只能有一个。而且，必须赤手空
拳。景阳冈上的老虎，象征自然的神威，象征流俗都不得不畏惧的法则，要对抗这种老虎，
唯有最纯粹的人才可以。

因为你会觉得，真正用心去做这件事情是不值的，是很白痴的。你有聪明才智，如果你珍
惜它，就把它用到该用的地方，而不是被别人肆意地鄙弃。

我喜欢实打实的东西。要考试，那么就拼智商，拼记忆力，拼逻辑能力，甚至拼写字快——
总得有一个标尺。但你知道，很多课程是没有的。你考得好与坏跟你从这门课里学到了什
么没有丝毫联系。那还考个——用四川话说，考个锤子啊。既然考试，那就一鞭一条痕，一
掴一掌血。

```html
<link rel="icon" href="*.png">
```

```bash
for i in *.pkg ; do mv "$i" "${i/-[0-9.]*.pkg/.pkg}" ; done
```

```bash
#!/usr/bin/env bash

REMOTE="git@github.com:blaenk/blaenk.github.io.git"
SITE="generated/deploy/out"
DEPLOY="deploy/"

fail() {
  printf "  \033[0;31m-\033[0m $1\n"
  exit
}

# shouldn't happen since `site` binary is usually at root to
# begin with, but doesn't hurt to check
dir_check() {
  if [ ! -f "Setup.hs" ]; then
    fail "not at root dir"
  fi
}

git_check() {
  git rev-parse || fail "$PWD is already under git control"
}

setup() {
  dir_check

  rm -rf $DEPLOY
  mkdir $DEPLOY

  info "created $DEPLOY"
  cd $DEPLOY
  git_check

  git init -q
  info "initialized git"
  git checkout --orphan master -q
  info "established master branch"
  git remote add origin $REMOTE
  info "established git remote"

  success "setup complete"
}

deploy() {
  dir_check

  COMMIT=$(git log -1 HEAD --pretty=format:%H)
  SHA=${COMMIT:0:8}

  info "commencing deploy operation based off of $SHA"

  # clean out deploy and move in the new files
  rm -rf "$DEPLOY"/*
  info "cleaned out $DEPLOY"

  info "building site"

  if [[ "$OSTYPE"x == "msys"x ]]; then
    # no unicode support in msys, so invoke powershell and establish code page
    powershell "chcp 65001; ./site build" > /dev/null
  else
    ./site build > /dev/null
  fi

  cp -r "$SITE"/* $DEPLOY
  info "copied $SITE into $DEPLOY"

  cd $DEPLOY

  git add --all .
  info "added files to git"

  git commit -m "generated from $SHA" -q
  info "committed site"

  git push origin master --force -q
  success "deployed site"
}

case "$1" in
  setup )
    setup;;
  deploy )
    deploy;;
  * )
    fail "invalid operation";;
  esac
```

[Good Old & Dirty printf() Debugging in a Non-console C/C++ Application or DLL - CodeProject](http://www.codeproject.com/Tips/227809/Good-old-dirty-printf-debugging-in-a-non-console-C)

:   <http://www.cnblogs.com/xianqingzh/archive/2011/07/08/2101510.html>

[《Debug Hacks》和调试技巧 | MaskRay](http://maskray.me/blog/2013-07-25-debug-hacks) -<

:   `freopen`{.c}

    ```c
    // like piping
    freopen(in_path, "r", stdin);
    freopen(out_path, "w", stdout);
    freopen(err_path, "w", stderr);

    // remember to close them:
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
    ```

    Debugging PRINT

    ```cpp
    #ifdef _DEBUG
    # define Debug(fmtstr, ...) printf(fmtstr, ##__VA_ARGS__)
    #else
    # define Debug(fmtstr, ...)
    #endif
    ```

    这是 `__VAR_ARGS__`，就连 Windows 也支持。。。

    还可参考：C is awesome -- function pointer stack

    VARS

    ANSI C 标准中有几个标准预定义宏（也是常用的）：

    #. `__LINE__`：在源代码中插入当前源代码行号；
    #. `__FILE__`：在源文件中插入当前源文件名；
    #. `__DATE__`：在源文件中插入当前的编译日期
    #. `__TIME__`：在源文件中插入当前编译时间；
    #. `__STDC__`：当要求程序严格遵循ANSI C标准时该标识被赋值为1；
    #. `__cplusplus`：当编写C++程序时该标识符被定义。

    `#define KEYWORD` 还是 `#define KEY VALUE`？

    有人喜欢这样：

    ```cpp
    #define DEBUG       //此时#ifdef DEBUG为真
    //#define DEBUG 0  //此时为假
    int main()
    {
       #ifdef DEBUG
          printf("Debugging\n");
       #else
          printf("Not debugging\n");
       #endif
       printf("Running\n");
       return 0;
    }
    ```

    不过我更喜欢这样：

    ```cpp
    #define BEDUG (true)
    if (debug) {
        // todo
    }
    ```

    当然前者编出的程序性能会好一点。

    return 的妙用

    :   这个主要用于 test，比如：

        ```cpp
        // define some testing vars here

        // this is test6 (current testing part)

        return;
        // this is test5

        return;
        // this is test4

        ...

        return;
        // test0
        ```

        好处是不用总去注释，坏处是编出来的程序会大一点，还可能忘了把 return 去掉，
        导致提前退出而不自知。

    Windows 编译宏：[Predefined Macros (C/C++)](https://msdn.microsoft.com/en-us/library/b0084kay%28v=vs.80%29.aspx)

    :   这个好，可以用：

        ```cpp
        _WIN64
        ```

    C

    :   这个我比较熟悉，如果你能看懂下面这些就够了：

        ```
        // printf
        %i %d %lld %20d %020d %-20d %+20d
        %f %lf %5.2lf
        %s %-s %20s
        %*d %*s
        // scanf
        %*d %*s %lf
        ```

        不举例子了

        就像 C++ 中的 StringStream

        ```cpp
        QString result;
        QTextStream(&result) << "pi = " << 3.14;
        // result == "pi = 3.14"
        ```

[Roman numerals - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Roman_numerals) -<

:   Symbol | Value
    --- | ---
    I | 1
    V | 5
    X | 10
    L | 50
    C | 100
    D | 500
    M | 1,000

bible（ai） 和 babel（e） 这两个单词的发音好像啊……

specifics 和 specifies 的区别在哪里？

indefinite v.s. infinite

单词 | 音标 | 解释
:---: | :---: | :---:
chillax | `[tʃɪˈlæks]` | 淡定
craftsmanship | `['kræftsmənʃɪp]` | 技艺
czar |  `[zɑː]` | 沙皇
designated | `['dɛzɪg,netɪd]` | 特指的
etymology | `[,ɛtɪ'mɑlədʒi]` | 语源学
hypocrite | `['hɪpə'krɪt]` | 伪君子；伪善者
loathing | `['loðɪŋ]` | 嫌恶
mandate | `['mændet]` | 委托管理
paranoid | `['pærənɔɪd]` | 偏执狂患者
predecessor | `['prɛdəsɛsɚ]` | 前辈
revulsion | `[rɪ'vʌlʃən]` | 强烈反感
silhouette | `[,sɪlu'ɛt]` | 轮廓，剪影
specific |  `[spɪ'sɪfɪk]` | 特定的
specify |  `['spɛsɪfaɪ]` | 详细说明
sublime | `[sə'blaɪm]` | 崇高
successor | `[sək'sɛsɚ]` | 继承者
survivalism | `[sə'vaɪv(ə)lɪz(ə)m]` | 生存第一主义
verbatim |  `[vɝ'betɪm]` | 逐字地
xenophobia | `[,zɛnə'fobɪə]` | 对外国人的畏惧和憎恨

lossy

:   ```bash
    convert \
        -strip \
        -interlace Plane \
        -gaussian-blur 0.05 \
        -filter Lanczos \
        -quality 85% \
        in.jpg out.jpg
    ```

It's good to be familiar with other editors like Vi so that you can be
productive even if that's all you have, and then learn how to make the most of
Emacs so that you can reap the benefits over the decades.

Fear, uncertainty, and doubt (often shortened to `FUD`) is a disinformation
strategy used in sales, marketing, public relations, politics and propaganda.
FUD is generally a strategy to influence perception by disseminating negative
and dubious or false information and a manifestation of the appeal to fear.

-   A.D. （公元）: Anno Domini
-   a.m. （上午）: ante meridiem
-   CV （简历）: curriculum vitae
-   e.g. （例如）: exempli gratia
-   etc. （等等…）: et cetera
-   et al. （等人）： et alii
-   i.e. （即是）: id est
-   p.m. （下午）: post meridiem
-   Ph.D. （博士）: Philosophiæ Doctor
-   P.S. （附言）: post scriptum
-   R.I.P. （息止安所）: requiescat in pace

1001 = `7 * 11 * 13`

Code Rush -<

:   -   [Code Rush - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Code_Rush)
    -   [Code Rush, the Mozilla Documentary from 2000 - Waxy.org](http://waxy.org/2008/06/code_rush/)
    -   [Code Rush (TV Movie 2000) - IMDb](http://www.imdb.com/title/tt0499004/)
    -   [Tara Hernandez | LinkedIn](https://www.linkedin.com/in/tara-hernandez-755b263)
    -   [Stuart Parmenter | LinkedIn](https://www.linkedin.com/in/stuartparmenter)
    -   [Jamie Zawinski - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Jamie_Zawinski)

sentiment 多愁善感

you are but words.

如果用双屏，Win 加方向键可以从一个屏幕把窗口移动到另一个窗口，可以试试按 <kbd>WIN+Right</kbd> 两次。

aleph `/ˈɑːlɛf/` $\aleph$

Knuth 先生在 The TeXbook 里主张书应该读若干遍，每一遍阅读的侧重点都不同。他用
「危险记号」区分了不同学习阶段应该阅读的部分，让初次阅读者能够相对轻松地掌握一
个概览，有经验地使用者能够深入一些细节，严肃地钻研者才去探索所谓 Dark Sides。为
此他甚至编了一些「善意的谎言」，让初学者能「大致地理解」一些概念，而不必了解背
后的琐碎细节。

```bash
$ texdoc sinutx # texdoc <package-name>
```

There is NO DIRECT SOFTWARE  to Hack Facebook , Google , Yahoo or any other big
website. All the softwares that claim to do so are scam（`[skæm]`，欺骗）.

![ASCII Table](http://whudoc.qiniudn.com/ascii.png)

维基百科的音标

:   照理说我不需要额外整理音标的内容，因为我很仔细地看过《赖世雄美语音标》，音标基本都会。
    但不幸地是我不知道音标标的是哪一种（美语、英语？），所以还是整理一下维基的音标，这样
    以后会更清楚上面查到的东西的读音。

    Constants

    IPA | Examples
    --- | --------
    `b` | buy, cab
    `d` | dye, cad, do
    `ð` | thy, breathe, father
    `dʒ` | giant, badge, jam
    `f` | fan, caff, phi
    `ɡ`(`ɡ`) | guy, bag
    `h` | high, ahead
    `hw` | why
    `j` | yes, hallelujah
    `k` | sky, crack
    `l` | lie, sly, gal
    `m` | my, smile, cam
    `n` | nigh, snide, can
    `ŋ` | sang, sink, singer
    `θ` | thigh, math
    `p` | pie, spy, cap
    `r` | rye, try, very
    `s` | sigh, mass
    `ʃ` | shy, cash, emotion
    `t` | tie, sty, cat, atom
    `tʃ` | china, catch
    `v` | vie, have
    `w` | wye, swine
    `z` | zoo, has
    `ʒ` | equation, pleasure, vision, beige

    Marginal consonants

    IPA | Examples
    --- | --------
    `x` | ugh, loch, Chanukah
    `ʔ` | uh-oh /ˈʔʌʔoʊ/
    `˜` | bon vivant /ˌbɒ̃ viːˈvɒ̃/

    IPA | Full vowels | IPA | ... followed by R
    --- | ----------- | --- | -----------------
    `ɑː` | PALM, father, bra | `ɑːr` | START, bard, barn, snarl, star
    `ɒ` | LOT, pod, John | `ɒr` | moral, forage
    `æ` | TRAP, pad, ban | `ær` | barrow, marry
    `aɪ` | PRICE, ride, file, fine, pie | `aɪər` | Ireland, hire (= /aɪr/)
    --- | --- | `aɪ.ər` | higher, buyer
    `aʊ` | MOUTH, loud, foul, down, how | `aʊər` | flour (= /aʊr/)
    --- | --- | `aʊ.ər` | flower
    `ɛ` | DRESS, bet, fell, men | `ɛr` | error, merry
    `eɪ` | FACE, made, fail, vein, pay | `ɛər` | SQUARE, mare, scarce, cairn, Mary (= /eɪr/)
    --- | --- | `eɪ.ər` | layer (one who lays)
    `ɪ` | KIT, lid, fill, bin | `ɪr` | mirror, Sirius
    `iː` | FLEECE, seed, feel, mean, sea | `ɪər` | NEAR, beard, fierce, serious (= /iːr/)
    --- | --- | `iː.ər` | freer
    `ɔː` | THOUGHT, Maud, dawn, fall, straw | `ɔːr` | NORTH, born, war, Laura
    --- | --- | `ɔː.ər` | sawer
    `ɔɪ` | CHOICE, void, foil, coin, boy | `ɔɪər` | coir (= /ɔɪr/)
    --- | --- | `ɔɪ.ər` | employer
    `oʊ` | GOAT, code, foal, bone, go | `ɔər` | FORCE, more, boar, oral (= /oʊr/)
    --- | --- | `oʊ.ər` | mower
    `ʊ` | FOOT, good, full, woman | `ʊr` | courier
    `uː` | GOOSE, food, fool, soon, chew, do | `ʊər` | boor, moor, tourist (= /uːr/)
    --- | --- | `uː.ər` | truer
    `juː` | cute, mule, puny, beauty, huge, you, tune | `jʊər` | cure (= /juːr/)
    --- | --- | `juː.ər` | fewer
    `ʌ` | STRUT, bud, dull, gun | `ɜːr` | NURSE, word, girl, fern, furry
    --- | --- | `ʌr` | hurry, nourish (in the UK)

    Reduced Vowels

    IPA | Reduced vowels | IPA | Reduced Vowels
    --- | -------------- | --- | -----------------
    `ᵻ` | roses, enough (either `/ɪ/` or `/ə/`) | `ᵿ` | beautiful, curriculum (`[jᵿ]`) (either `/ʊ/` or `/ə/`)
    `ɵ` | omission (either `/oʊ/` or `/ə/`) | `u` | situation (either `/ʊ/` or `/uː/`)
    `ə` | Rosa’s, a mission, quiet, focus | `ər` | LETTER, perceive
    `i` | HAPPY, serious (either `/ɪ/` or `/i/`) | `əl` | bottle (either `[əl]` or `[l̩]`)
    `ən` | button (either `[ən]` or `[n̩]`) | `əm` | rhythm (either `[əm]` or `[m̩]`)

    Stress & Syllabification

    * intonation `/ˌɪntɵˈneɪʃən/`
    * Mikey `/ˈmaɪki/`, Myki `/ˈmaɪ.kiː/`

    refs and see also

    #. [Help:IPA for English - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Help:IPA_for_English)

《影响力》 -<

:   1. Weapons of Influence: Perceptual Contrast | 对比原理

    > Everything should be made as simple as possible, but not simpler.
    >
    > — *ALBERT E INSTEIN*

    Virtually all of
    this mothering is triggered by one thing: the “cheep-cheep” sound of
    young turkey chicks. Other identifying features of the chicks, such as
    their smell, touch, or appearance, seem to play minor roles in the
    mothering process. If a chick makes the “cheep-cheep” noise, its
    mother will care for it; if not, the mother will ignore or sometimes kill
    it.

    When, however, the same stuffed replica carried inside it a small
    recorder that played the “cheep-cheep” sound of baby turkeys, the
    mother not only accepted the oncoming polecat but gathered it under-
    neath her. When the machine was turned off, the polecat model again
    drew a vicious attack.

    How ridiculous a female turkey seems under these circumstances:
    She will embrace a natural enemy just because it goes “cheep-cheep,”
    and she will mistreat or murder one of her own chicks just because it
    does not. She looks like an automaton whose maternal instincts are
    under the automatic control of that single sound.

    when the situation calls for mothering, the maternal-behavior tape gets
    played. Click and the appropriate tape is activated; whirr and out rolls
    the standard sequence of behaviors.

    Clever use of perceptual contrast is by no means confined to clothiers.
    I came across a technique that engaged the contrast principle while I
    was investigating, undercover, the compliance tactics of real-estate
    companies. To “learn the ropes,” I was accompanying a company realty
    salesman on a weekend of showing houses to prospective home buyers.

    The salesman—we can call him Phil—was to give me tips to help me
    through my break-in period. One thing I quickly noticed was that
    whenever Phil began showing a new set of customers potential buys,
    he would start with a couple of undesirable houses. I asked him about
    it, and he laughed. They were what he called “setup” properties.

    Sharon may be failing chemistry, but she gets an “A” in psychology.

    2. Reciprocation: The Old Give and Take...and Take | 互惠原理

    > Pay every debt, as if God wrote the bill.
    >
    > — *RALPH WALDOE MERSON*

    So typical is it for indebtedness to accompany the receipt of
    such things that a term like “much obliged” has become a synonym for
    “thank you,” not only in the English language but in others as well.

     It quickly became clear to the Society
    that it had a considerable public-relations problem. The people being
    asked for contributions did not like the way the members looked,
    dressed, or acted.

    The Krishnas’ resolution was brilliant. They switched to a fund-raising
    tactic that made it unnecessary for target persons to have positive feel-
    ings toward the fund-raisers. They began to employ a donation-request
    procedure that engaged the rule for reciprocation, which, as demon-
    strated by the Regan study, is strong enough to overcome the factor of
    dislike for the requester. The new strategy still involves the solicitation
    of contributions in public places with much pedestrian traffic (airports
    are a favorite), but now, before a donation is requested, the target person
    is given a “gift”—a book (usually the Bhagavad Gita), the Back to Godhead

    magazine of the Society, or, in the most cost-effective version, a flower.
    The unsuspecting passerby who suddenly finds a flower pressed into
    his hands or pinned to his jacket is under no circumstances allowed to
    give it back, even if he asserts that he does not want it. “No, it is our
    gift to you,” says the solicitor, refusing to accept it.

    The Rule Enforces Uninvited Debts
    The Rule Can Trigger Unfair Exchanges

    The Old Give and Take...**and Take...**

    RECIPROCAL CONCESSIONS | 相互退让

    At first glance, our fortunes
    in such a situation would appear dismal. We could comply with the
    requester’s wish and, in so doing, succumb to the reciprocity rule. Or,
    we could refuse to comply and thereby suffer the brunt of the rule’s
    force upon our deeply conditioned feelings of fairness and obligation.
    Surrender or suffer heavy casualties. Cheerless prospects indeed.


    3. Commitment and Consistency: Hobgoblins of the Mind | 承偌和一致

    > It is easier to resist at the beginning than at the end.
    >
    > — *LEONARDO DA VINCI*

    COMMITMENT IS THE KEY

    4. Social Proof: Truths Are Us
    5. Liking: The Friendly Thief
    6. Authority: Directed Deference
    7. Scarcity: The Rule of the Few

    refs and see also

    #. [我在苏州被和尚骗了, 那和尚一定熟读《影响力》 | 马牛不是人](http://www.manio.org/cn/influence-i-was-treated-by-mock/)
    #. [【豆总摘】大纲和重点──看完不用看书了 (评论: 影响力)](http://book.douban.com/review/5046071/)

jujitsu `[dʒuː'dʒɪtsuː]` 柔术 -<

:   n.  a method of self-defense without weapons that was developed in China
    and Japan; holds and blows are supplemented by clever use of the attacker's
    own weight and strength

RapidJson

:   ```cpp
    // 把整个文件读入buffer
    FILE* fp = fopen("test.json", "r");
    fseek(fp, 0, SEEK_END);
    size_t filesize = (size_t)ftell(fp);
    fseek(fp, 0, SEEK_SET);
    char* buffer = (char*)malloc(filesize + 1);
    size_t readLength = fread(buffer, 1, filesize, fp);
    buffer[readLength] = '\0';
    fclose(fp);
    ```

    `In situ` 是一个拉丁文片语，字面上的意思是指「现场」、「在位置」。在许多不同语境
    中，它描述一个事件发生的位置，意指「本地」、「现场」、「在处所」、「就位」。 …… （在计
    算机科学中）一个算法若称为原位算法，或在位算法，是指执行该算法所需的额外内存空间是 `O(1)`
    的，换句话说，无论输入大小都只需要常数空间。例如，堆排序是一个原位排序算法。

    在 C++11 中这称为转移赋值操作（move assignment operator）。由于 RapidJSON 支持 C++03，它在赋值
    操作采用转移语意，其它修改形函数如 `AddMember()`，`PushBack()` 也采用转移语意。

XDM 即**“X Display Manager”**，由它来启动 X Window 服务器，并管理图形客户端程序的
登录、会话、启动窗口管理器（KDE、Gnome）等。KDE 和 Gnome 也提供了自己的 xdm 的实现，分别叫 kdm
和 gdm。

`gvim --remote-tab-silent filename`{.bash} 有点类似 Notepad++ 的 mono-instance。

```
set guioptions=""
set guioptions+=m
```

```cpp
QRectF Robot::boundingRect() const
{
    return QRectF();
}
```

`QRectF QGraphicsItem::boundingRect () const`{.bash}

:   This pure virtual function defines the outer bounds of the item as a
    rectangle; all painting must be restricted to inside an item's bounding
    rect.  `QGraphicsView`{.cpp} uses this to determine whether the item
    requires redrawing.

    Although the item's shape can be arbitrary, the bounding rect is always
    rectangular, and it is unaffected by the items' transformation.

    If you want to change the item's bounding rectangle, you must first call
    `prepareGeometryChange()`{.cpp}. This notifies the scene of the imminent
    change, so that its can update its item geometry index; otherwise, the
    scene will be unaware of the item's new geometry, and the results are
    undefined (typically, rendering artifacts are left around in the view).

    Reimplement this function to let `QGraphicsView`{.cpp} determine what parts
    of the widget, if any, need to be redrawn.

    Note: For shapes that paint an outline / stroke, it is important to
    **include half the pen width** in the bounding rect. It is not necessary to
    compensate for antialiasing, though.

    Example:

    ```cpp
    QRectF CircleItem::boundingRect() const
    {
        qreal penWidth = 1;
        return QRectF( -radius - penWidth / 2, -radius - penWidth / 2,
                       diameter + penWidth, diameter + penWidth );
    }
    ```

**Torso** is an anatomical term for the greater part of the human body without
the head and limbs. It is also refered to as the trunk. The torso includes the
chest, back, and abdomen.

---

若我们不确定一个成员是否存在，便需要在调用 `operator[](const char*)` 前先调用
`HasMember()`。然而，这会导致两次查找。更好的做法是调用 `FindMember()`，它能同
时检查成员是否存在并返回它的 `Value`：

……我居然忘了这一点……


```cpp
Value::ConstMemberIterator itr = document.FindMember("hello");
if (itr != document.MemberEnd()) {
    printf("%s %s\n", itr->value.GetString());
}
```

---

VA 番茄助手的 rename 居然不检查名称的正确性，你可以把 `type` 更名为 `ty pe`，这
也太蠢。唯一可能的好处是你可以用这个功能更名为 `const type`，但这么做必然出很多
问题。

```
Error   1   error C2248: 'QObject::QObject' : cannot access private member
declared in class 'QObject' ModelLane.h 23  1 ModelStructure
```

`QObject`{.cpp} 从设计上不可拷贝，所以这样的代码是错误的：

```cpp
class UrObject : public QObject { ... }; // 没有自己实现 = 运算符
QList<UrObject> objects;                 // Then, WRONG!
```

作为一种折衷你可以换成指针：

```cpp
QList<UrObject *> ojebcts;
```

See

#. [Object Model | Qt Core 5.5](http://doc.qt.io/qt-5/object.html#identity-vs-value)

---

```cpp
const char *paths[] = {
    "data/sample.json",             // possible path
    "bin/data/sample.json",         // possible path
};
FILE *fp = 0;
for ( size_t i = 0; i < sizeof(paths) / sizeof(paths); ++i ) {
    fp = fopen(filename_ = paths[i], "rb");
    if (fp) { break; }
}
ASSERT_TRUE(fp != 0);

fseek(fp, 0, SEEK_END);
length_ = (size_t)ftell(fp);
fseek(fp, 0, SEEK_SET);
json_ = (char*)malloc(length_ + 1);
ASSERT_EQ(length_, fread(json_, 1, length_, fp));
json_[length_] = '\0';
fclose(fp);
```

忽略掉一个参数，可以用 void：`void(argv);`{.cpp}，
也可以在函数定义的时候 `int main(int, char**)`{.cpp}，甚至 `int main()`{.cpp}。
Qt 里有 `Q_UNUSED(object)` 宏。

Windows 下的 Git Bash 不能直接输入文件名打开文件，提示 Cannot execute binary file（我试着打开 docx 文件），
但 CMD 下可以，`$ demo.docx` 便可以自动用 Word（或者别的你关联的打开方式）打开这个文件。
当然，在 Bash 下输入 `cmd`{.bash} 是一种解决方案。

如何 base64 编码一个图片？

:   可以用 Firefox 浏览器，在 F12 下面，对着图片右键，可以“Copy Image Data-URL”
    ，就复制到了 Base64 编码的图片。

---

一些数字：

用二进制可以快速地估算，下面是一些常用数字：

Hex | Bin
--- | ---
360 | 2^^8.5^^
10 | 2^^3.32^^
100 | 2^^6.64^^
1000 | 2^^9.96^^ &asymp; 2^^10^^
pi = 3.14 | 2^^1.651^^
e = 2.72 | 2^^1.44^^
$\sqrt{2} = 1.414$ | 2^^0.5^^
地球半径 R = 6371 km = 6371 &times; 10^^3^^ m | 2^^22.6^^

怎么用，举例：

比如你想知道赤道上一个经度对应的长度，

地球半径为 $R$ = 6371 千米 = 2 ^^22.6^^ m，
则 distance = $\frac{2\pi \times R}{360}$ = 2^^(1+1.651+22.6-8.5)^^ = 2^^10+6.75^^ = 1000 * 100 = 100 km。
和实际用计算器计算的 110 km 差不多。

你也看到我们需要反向计算 2^^x^^ 的十进制是多少，所以再列一个表：

Bin | Hex
--- | ---
2^^1^^ | 2
2^^2^^ | 4
2^^3^^ | 8
2^^4^^ | 16
2^^5^^ | 32
2^^6^^ | 64
2^^7^^ | 128
2^^8^^ | 256
2^^9^^ | 512 = 500
2^^10^^ | 1024 = 1000
2^^11^^ | 2048
2^^12^^ | 4096
2^^13^^ | 8192
2^^14^^ | 16384
2^^15^^ = 2^^10^^ * 2^^5^^ | 1000 * 32 = 32 k （实际为 32768）
2^^16^^ | 65536
2^^31^^ | 1k * 1k * 1k * 2 = 1m * 1k * 2 = 1g * 2 = 2g（2 billion） （实际为 2.147484e9）^[Control + R, `=`, `pow(2,31)`]
2^^32^^ | 4g

* k: thousand
* m: million
* g: billion

Value | SI[^SI]
----- | -------
1000 | k | kilo
1000^^2^^ | M | mega
1000^^3^^ | G | giga
1000^^4^^ | T | tera
1000^^5^^ | P | peta
1000^^6^^ | E | exa
1000^^7^^ | Z | zetta
1000^^8^^ | Y | yotta

Value | IEC[^IEC] | JEDEC
----- | --------- | -----
1024 | Ki | kibi | K | kilo
1024^^2^^ | Mi | mebi | M | mega
1024^^3^^ | Gi | gibi | G | giga
1024^^4^^ | Ti | tebi | – |
1024^^5^^ | Pi | pebi | – |
1024^^6^^ | Ei | exbi | – |
1024^^7^^ | Zi | zebi | – |
1024^^8^^ | Yi | yobi | –

[^SI]: The SI prefixes (metric prefix) are standardized for use in the
    International System of Units (SI) by the International Bureau of Weights
    and Measures (BIPM) in resolutions dating from 1960 to 1991.
[^IEC]: IEC 80000-13:2008 is an international standard that defines quantities
    and units used in information science, and specifies names and symbols for
    these quantities and units. The standard is published by the International
    Electrotechnical Commission (IEC) and is part of the group of standards
    called ISO/IEC 80000, published jointly by the IEC and the International
    Organization for Standardization (ISO).

#. We were unable to load Disqus. If you are a moderator please see our troubleshooting guide.
#. buzzword
#. Remember，Windows 开始菜单有个“默认程序”，`控制面板\程序\默认程序\设置关联`

`cat /etc/issue`{.bash }
`ifdown eth0 && ifup eth0`{.bash}
`ifdown --exclude=lo -a && sudo ifup --exclude=lo -a`{.bash}

Bing:

#. `related:http://sharelatex.com`
#. `inurl:<KEY_WORD>`

> 希望大家不要因为被关得太久，就忘记了自由的感觉

```bash
$ vim -p files*.txt
```

#. `c-o`, backward
#. `c-i`, forward
#. `c-]`, jump to
#. `:ju`, show jumpables
#. `earlier 10s`, 10 secs ago

#. 可能我是一个天生就爱折腾， 爱完美的男人（虽然我不是处女座）
#. 妈妈对你外表修饰和穿衣搭配的指点，包含了她浓浓的爱，当着她的面一定要虚心地全
   盘接受。在离开她的视线后，继续该穿啥穿啥。

idiomatic `[,ɪdɪə'mætɪk]` (惯用的；符合语言习惯的；通顺的)

```perl
#!/bin/perl

foreach (1..10) {
    print "Iteration number $_.\n\n";
    print "Please choose: last, next, redo, or none of the above? ";
    chomp(my $choice = <STDIN>);
    print "\n";
    last if $choice =~ /last/i;
    next if $choice =~ /next/i;
    redo if $choice =~ /redo/i;
    print "That wasn't any of the choice... onward!\n\n";
}
```

---

在欧美国家，一些大红的明星因某一专辑，或者某一行为，成绩大不如前（单曲、专辑销售
量惨淡，演唱会无人买单、惹人讨厌等等）都可以称为“flop (`[flɑp]`, 笨拙地抛下；扑通放下；拍（翅）)”。

flappy, `['flæpi]`, adj. 飞扬的

[Flappy Bird - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Flappy_Bird)

```bash
# d: debug, e: evaluate (one liner), l: ?process line ending
$ perl -del # Perl REPL
```

```bash
$ set    KEY=val        # windows
$ setenv KEY val        # csh
$ export KEY=val        # bash
```

```bash
#!/bin/bash
FILES=./markdown/*
for fin in $FILES
do
    fout=${fin/markdown/articles}   # path       # smart
    fout=${fout/\.markdown/.html}   # extension  # smart
    pandoc $fin -t html5 -o $fout \
            --toc --smart --standalone \
            --template=template
done
```

~~上面的脚本很巧妙，我从来没想过可以用正则表达式。~~那不是正则。

VimFx

:   ```
    o               ; address bar
    O               ; search bar
    p               ; paste and go，
                    ; 和地址栏的 Bing 结合意味着你可以随时
                    ; 选择文字，复制，然后 p 搜索。
    P               ; paste and go in new window
    yy              ; yank tab url
    g/              ; links only
    /               ; normal text search
    gJ, gK, gw      ; move tab left, right, to new window
    g0, g^, g$      ; move to tab (first, first non-pinned, last)
    gp              ; pin tab
    gt, gT          ; next, previous tab (感觉 J，K 用起来是反的，果断抛弃)
    x, X            ; close, restore
    gxa, gx$        ; close multiple tabs
    s, sa           ; stop loading
    ```

<div class="tzx-fright">
![](http://www.imagemagick.org/Usage/img_diagrams/glyph_metrics.gif)
</div>

```html
<img src="extension/skin/icon128.png" alt="" align="right">
```

Firefox 浏览器的优点：默认的字体大点。

  - `c-d`, bookmark
  - `c-h`, history
  - `c-b`, bookmarks sidebar
  - `c-s-h`, library list

```cpp
int main(int argc, char **argv)
 {
     QApplication app(argc, argv);

     QTabWidget *tabWidget = new QTabWidget;

     QGraphicsScene scene;
     QGraphicsProxyWidget *proxy = scene.addWidget(tabWidget);

     QGraphicsView view(&scene);
     view.show();

     return app.exec();
 }

 int myfunc(int n)
 {
     QVarLengthArray<int, 1024> array(n + 1);
     ...
     return array[n];
 }
```

<kbd>Win+R</kbd>: %windir%

`net stop/start WuAuServ`{.cmd} (windows update)

```
In vim `g#` v.s. `#`

Jumplist `:h jumplist`, `:h CTRL-O` (older), `:h CTRL-I`, `:h ju[mp]`
```

#. “先辈的罪”（**Sins of our Forefathers**）
#. Mental Speedbump（头脑减速杠）
#. vim statistics: selection &rarr; `g<C-g>`{.vim}

`<link rel="stylesheet" href="main.css">`{.html}
  ~ link 是连接到一个内容，所以用 `href`{.html}

`<script type="text/javascript" src="main.js"></script>`{.html}
  ~ script 是脚本，插入到本地，所以是 `src`{.html}，类似 LaTeX 里的 `\input{path}`{.tex}

`<img src="http://gnat.qiniudn.com/foo/bar.jpg" alt="" />`{.html}
  ~ img 也是插入的内容，所以用 `src`{.html}，`alt`{.html} 既可以在无法加载图片的时候显示提示，也可以用在 <kbd>Control+C</kbd>

`git remote set-url origin git@git.coding.net:xxxx/yyyy.git`{.bash}

<kbd>ctrl-t</kbd>, <kbd>ctrl-d</kbd>: Indent/un-indent in insert mode

```
:syntax off
:set syntax=perl

[{ block start
]} function end
```

![](http://ww2.sinaimg.cn/large/6aa09e8fjw1ey30zhd9v0j20go11atcj.jpg)
![](http://ww2.sinaimg.cn/bmiddle/6aa09e8fjw1ey2qlvrw54j217f1kkah6.jpg)
![Word of the Year](http://ww1.sinaimg.cn/large/6aa09e8fjw1ey43zr5ge1j20yi0s678c.jpg)
![Why the 'Cry of Joy' Emoji?](http://ww1.sinaimg.cn/large/6aa09e8fjw1ey43zsq9tgj20yi2lq7ma.jpg)

Emoji or Emojis（个人倾向于用这个）

谷大白话:

作为 `fetish`，`cuckold` 的嗜好是让老婆跟其他男性嘿嘿嘿并以此为乐。
而被老公出轨背叛的女性叫 `cuckquean`。
【戴绿帽子】`cuckold`。来自 cuckoo 杜鹃，因雌性常到别的鸟窝下蛋，
所以有了红杏出墙的含义。`cuckold` 可以是名词，指被戴绿帽子的男子。
也可以做动词，指给人戴绿帽子。形容词是 `cuckolded`。
还有种说法是 `wearing the horns`。
所以可以用手指在头上比划出角，表示辱骂对方是被戴绿帽子的乌龟。

> Call me John Snow, I know nothing.

![谷大白话: 美国某网站的调查显示：
    61% 的人在淋浴中尿尿，41% 在泳池尿过尿。
    50% 的人擦屁股前会叠起厕纸，30% 把厕纸随便揉成一团。
    60% 擦屁股是从前往后，20% 是从后往前。43% 冲水前会看一眼马桶，
    37% 擦屁股后会看一眼厕纸。45% 表示上厕所前会把厕纸铺在马桶圈上，
    36% 用脚踩冲水按钮，35% 上厕所时不会坐在马桶圈上。](http://ww1.sinaimg.cn/large/6aa09e8fjw1ey3rjcbr4yj210k11awod.jpg)

<div class="tzx-tabs">
* [oooo](#line602182)
* [codes](#line602183)

<div id="line602182">
nothing here.
</div>

<div id="line602183">
```cpp
int i;
for(i = 0; i < argc; ++i)
{
    if(argv[i])
        commandLine.push_back(argv[i]);  // Reads each argument from the
                                         // command line and pushes it on the vector
    else
        return i;
}
return i;

string CommandLine::GetNextWord()
{
    if((int)pos < (int)commandLine.size())
        return commandLine[pos++];   // Retrieves the next word from the command line vector.
    else                             // State is maintained by 'pos'
        return "";
}
```

```cpp
enum ERRTYPE {NOERROR, WARNING, FATAL};

class VCOption
{
public:
    string vc;
    bool space;
    ERRTYPE error;
};

#include <string>
using namespace std;
#include "VCOption.h"
/* This class simply encapsulates
 * the three string items we'd like to return. */
class ReturnItem
{
public:
    ReturnItem() {bestMatch = ""; bestMap = ""; remainingString = ""; space = true; error=NOERROR;}
    ~ReturnItem() {} ;
    // ReturnItem& operator=(ReturnItem const *rhs);
    string bestMatch, bestMap, remainingString;
    bool space;
    ERRTYPE error;
};

#define CCSTATE (0)
#define VCSTATE (1)
#define LINESIZE (80)

class Input
{
public:
    Input() {};
    ~Input() {};
    int ReadInputFile(char const *fileName);
    int CreatePairsFromCode();
    ReturnItem BestMapping(string &origOpt);
private:
    bool AddPair(string other, string vc, bool space = true);
    bool AddPair(string other, string vc, ERRTYPE error);
    vector<pair<string, VCOption> > optionPairs;
};

#include <fstream>
#include <iostream>
#include <string>
#include "Input.h"
#include "ReturnItem.h"
#include "VCOption.h"

/*
Function Name: AddPair
Parameters:
string other - This is the switch from the "other" compiler.
string vc - This is the switch that 'other' maps to on VC.
Return Value: true
Actions: This pushes the pair <other, vc> onto the vector optionPairs.
*/
bool Input::AddPair(string other, string vc, bool space)
{
    VCOption vcOption;
    vcOption.space = space;
    vcOption.vc = vc;
    vcOption.error = NOERROR;
    optionPairs.push_back(make_pair(other, vcOption));
    return true;
}

bool Input::AddPair(string other, string vc, ERRTYPE error)
{
    VCOption vcOption;
    vcOption.space = true;
    vcOption.vc = vc;
    vcOption.error = error;
    optionPairs.push_back(make_pair(other, vcOption));
    return true;
}

/*
Function Name: ReadInputFile
Parameters:
char const *fileName - The name of the input file we will be reading from.
Return Value:
-1 if there is an error (unspecified what the error is)
1 if the function executes successfully
Actions: The Input::optionPairs vector is filled with the pairings as specified by the input
file named fileName.
*/
int Input::ReadInputFile(char const *fileName)
{

    if(fileName == NULL)
        return -1;
    string ccOption, vcOption;
    string option;
    char temp[LINESIZE];
    ifstream inputFile(fileName);
    if(!inputFile)
    {
        cerr << "No file named : " << fileName << endl;
        return -1;
    }
    bool spaceState = false;
    int state = CCSTATE;
    while(inputFile >> option)
    {
        switch(state)
        {
        case CCSTATE:
            if(option == "@@@")
            {
                inputFile.getline(temp, LINESIZE);
                break;
            }
            if(option == "~~~")
            {
                return 1;
            }
            if(option == "***")
            {
                spaceState = false;
                state = VCSTATE;
            }
            else
            {
                if(spaceState)
                {
                    ccOption += " ";
                }
                spaceState = true;
                ccOption += option;
            }
            break;
        case VCSTATE:
            if(option == "!!!")
            {
                spaceState = false;
                state = CCSTATE;
                AddPair(ccOption, vcOption);
                ccOption = "";
                vcOption = "";
            }
            else if(option == "###")
            {
                spaceState = false;
                state = CCSTATE;
                AddPair(ccOption, vcOption, false);
                ccOption = "";
                vcOption = "";
            }
            else if(option == "EEE")
            {
                spaceState = false;
                state = CCSTATE;
                AddPair(ccOption, vcOption, FATAL);
                ccOption = "";
                vcOption = "";
            }
            else if(option == "^^^")
            {
                spaceState = false;
                state = CCSTATE;
                AddPair(ccOption, vcOption, WARNING);
                ccOption = "";
                vcOption = "";
            }
            else
            {
                if(spaceState)
                {
                    vcOption += " ";
                }
                spaceState = true;
                vcOption += option;
            }
            break;
        default:
            cerr << "Invalid State" << endl;
            return -1;
        }
    }
    return 1;
}

// This code here just loads the optionPairs from the code.  It acts like ReadInputFile.
// This is only called if you define CCMEMORY
int Input::CreatePairsFromCode()
{
    AddPair("-Wall", "/Wall");
    AddPair("-O2", "/O2");
    AddPair("-c", "/c");
    AddPair("-S", "/s");
    AddPair("-E", "/EP");
   /*
    $ ./ccWrapper.exe test -E
    cl test /EP
    ...
    */

    AddPair("-o", "/Fe", false);
    AddPair("--help", "/?");
    AddPair("-ansi", "/Za");
    AddPair("-funsigned-char", "/J");
    AddPair("-pedantic", "/Za");
    AddPair("-pedantic-errors", "/Za");
    AddPair("-w", "/W0");
    AddPair("-ggdb", "/Zi");
    AddPair("-gstabs", "/Zi");
    AddPair("-gstabs+", "/Zi");
    AddPair("-gcoff", "/Zi");
    AddPair("-gxcoff", "/Zi");
    AddPair("-O0", "/Od");
    AddPair("-O1", "/O2");
    AddPair("-O2", "/O2");
    AddPair("-O3", "/Ox");
    AddPair("-Os", "/O1");
    AddPair("-float-store", "/Op");
    AddPair("-fno-default-inline", "/Ob0");
    AddPair("-fomit-frame-pointer", "/Oy");
    AddPair("-fno-inline", "/Ob0");
    AddPair("-finline-functions", "/Ob2");
    AddPair("-include", "/FI");
    AddPair("-nostdinc", "/X" );
    AddPair("-undef", "/u" );
    AddPair("-C", "/C" );
    AddPair("-P", "/P" );
    AddPair("-D", "/D");
    AddPair("-U", "/U");
    AddPair("-nodefaultlibs", "/link /NODEFAULTLIB");
    AddPair("-nostdlib",  "/link /NODEFAULTLIB");
    AddPair("-I", "/I");
    AddPair("-L", "/link /LIBPATH:");
    AddPair("-fpack-struct", "/Zp1");
    AddPair("-fstack-check", "/GS");
    return 1;
}

/*
Function Name: BestMapping
Parameters:
string &origOpt - The switch to be mapped from.
Return Value: ReturnItem
This ReturnItem class contains the .bestMatch string which is the best matching switch.
The .bestMap string is the VC switch that .bestMatch maps too.
The .remainingString is what is left of the origOpt string after you remove the .bestMatch string.
Actions: This method finds the switch that best matches origOpt.
If there is more than one switch that matches origOpt then the longest match is selected.
*/
ReturnItem Input::BestMapping(string &origOpt)
{
    ReturnItem bestItem;
    string currentStr;
    string::size_type idx;
    vector<pair<string, VCOption> >::iterator iterOpt, endOpt;
    endOpt = optionPairs.end();
    bestItem.remainingString = origOpt;
    for(iterOpt = optionPairs.begin(); iterOpt != endOpt; ++iterOpt)
    {
        currentStr = iterOpt->first;
        idx = origOpt.find(currentStr, 0);
        if(idx == 0)
        {
            if(currentStr.size() > bestItem.bestMatch.size())
            {
                bestItem.bestMatch = currentStr;
                bestItem.bestMap = iterOpt->second.vc;
                bestItem.remainingString = origOpt.substr(currentStr.size());
                bestItem.space = iterOpt->second.space;
                bestItem.error = iterOpt->second.error;
            }
        }
    }

    return bestItem;
}
```

```cpp
@@@ Sun Flag Mappings
@@@ Simple mappings
-xO1 *** /O2 !!!
-xO2 *** /O2 !!!
-xO3 *** /Ox !!!
-xO4 *** /Ox !!!
-xO5 *** /Ox !!!
-xO *** /O2 !!!
-O1 *** /O2 !!!
-O2 *** /O2 !!!
-O3 *** /Ox !!!
-O4 *** /Ox !!!
-O5 *** /Ox !!!
-D *** /D ###
-I *** /I !!!
-c *** /c !!!
-mt *** /MT !!!
-P *** /P !!!
-P *** /P !!!

@@@ More involved Mappings
-xspace *** /O1 !!!
-386 *** /G3 !!!
-486 *** /G4 !!!
-cg *** see -xcg
+d *** /Ob0 !!!
-g *** /Zi !!!
-E *** /EP !!!
-g0 *** /Zi !!!
-H *** /showIncludes !!!
-xhelp=flags *** /? !!!
-xsbfast *** /FR ###
-xsb *** /FR ###
-fns ***  !!!
-fns=yes ***  !!!
-fns=no *** /Op !!!
-fsimple=0 *** /Op !!!
-fsimple=1 *** /Op !!!
-fsimple=2 ***  !!!
-fstore *** /Op !!!
-G *** /LD !!!
-o  *** /Fe ###
-L *** /link /LIBPATH: !!!
+w *** /W4 !!!
+w2 *** /Wall !!!
-w *** /W1 !!!
-z *** /link !!!
-xwe *** /WX !!!
-fast *** /Ox !!!

@@@ gcc Flag Mappings
@@@ Simple Mappings
-Wall *** /Wall !!!
-O2  *** /O2 !!!
-c *** /c !!!
-S *** /s !!!
-O0 *** /Od !!!
-O1 *** /O2 !!!
-O2 *** /O2 !!!
-O3 *** /Ox !!!
-Os *** /O1 !!!
-C *** /C !!!
-P *** /P !!!
-D *** /D ###
-U *** /U ###
-I *** /I !!!

@@@ More involved Mappings
-E *** /EP !!!
-o *** /Fe ###
--help *** /? !!!
-ansi *** /Za !!!
-funsigned-char *** /J !!!
-pedantic *** /Za !!!
-pedantic-errors *** /Za !!!
-w *** /W0 !!!
-ggdb *** /Zi !!!
-gstabs *** /Zi !!!
-gstabs+ *** /Zi !!!
-gcoff *** /Zi !!!
-gxcoff *** /Zi !!!
-float-store *** /Op !!!
-fno-default-inline *** /Ob0 !!!
-fomit-frame-pointer *** /Oy !!!
-fno-inline *** /Ob0 !!!
-finline-functions *** /Ob2 !!!
-include *** /FI !!!
-nostdinc *** /X !!!
-undef *** /u !!!
-nodefaultlibs *** /link /NODEFAULTLIB !!!
-nostdlib *** /link /NODEFAULTLIB !!!
-L *** /link /LIBPATH: !!!
-fpack-struct *** /Zp1 !!!
-fstack-check *** /GS !!!
-Wno-unknown-pragmas ***  !!!
-Wno-format ***  !!!

@@@ Fatal Errors
-fvolatile *** EEE
-fvolatile-global *** EEE
-fvolatile-static *** EEE

@@@ Warnings
-Xlinker *** ^^^
-aux-info *** ^^^
-fno-asm *** ^^^
-fno-builtin *** ^^^
-fhosted *** ^^^
-ffreestanding *** ^^^
-trigraphs *** ^^^

~~~ All Done!
Nothing down here is processed.  Can be used for additional comments.
No mappings that I know of
-a
-xa

-v
--target-help
-x
-std
-traditional
-traditional-cpp
-fcond-mismatch
-fsigned-char
-fwritable-strings  --- sorta like /Gf
-fshort-wchar
-fno-access-control
-fcheck-new
-fconserve-space
-fno-const-strings
-finline-limit=
-ftrapv
-foptimize-sibling-calls
-fkeep-inline-functions
-fkeep-static-consts
-fno-function-cse
-fstrict-aliasing
-idirafter
-imacros
-iprefix
-iwithprefix
-M
-MM
-MD
-MMD
-MF
-MG
-MP
-MQ
-MT
-H
-A
-l
-dM
-dD
-dN
-dI
-fpreprocessed
-s
-statuc
-shared
-symbolic
-shared-libgcc
-static-libgcc

-u
-I-
-fshort-double
-funwind-tables
-fshared-data
-fno-ident
-pipe
-pass-exit-codes
```

```cpp
#include <string>
#include <iostream>
#include <string.h>
#include <process.h>
#include "Input.h"
#include "CommandLine.h"
#include "ReturnItem.h"

using namespace std;


int main(int argc, char *argv[])
{
    if(argc < 2)
        return -1;

    string theOutput = "cl ";
    string currentArg;
    ReturnItem mapping;
    Input theInput;
    CommandLine theCommandLine;

#ifndef CCMEMORY  // if we compile to read from memory or to read from a file
    if(theInput.ReadInputFile("ccFile.cfg") == -1)  // the file name is fixed
        return -1;
#else
    theInput.CreatePairsFromCode();
#endif
    // here we read in the command line
    theCommandLine.ReadCommandLine(argc - 1, &argv);
    // iterate over each word in the command line
    while("" != (currentArg = theCommandLine.GetNextWord()))
    {
        // find the best mapping for each word
        mapping = theInput.BestMapping(currentArg);
        // create the output string
        if(mapping.error == FATAL)
        {
            cerr << "Error with flag " << mapping.bestMap << " -- ABORTING\n";
            return -1;
        }
        if(mapping.error == WARNING)
        {
            cerr << "Warning: Flag may not be properly supported: " << mapping.bestMap << endl;
        }
        theOutput += mapping.bestMap + mapping.remainingString;
        if(mapping.space)
            theOutput += " ";

    }
    cout << theOutput << endl;
    // execute the generated output string.  'cl.exe' will need to be in the users path
    system(theOutput.c_str());
    return 0;
}
```
</div>
</div>

#. <kbd>Control+f/b</kbd>, move one screen down/up.
#. The Viola/Jones Face Detector

A seminal approach to real-time object detection Key ideas

* Integral images for fast feature evaluation
* Boosting for feature selection
* Attentional cascade for fast rejection of non-face windows

#. P. Viola and M. Jones. Rapid object detection using a boosted cascade of simple features.  CVPR 2001.
#. P. Viola and M. Jones. Robust real-time face detection. IJCV 57(2), 2004.

1. Feature Computation
The “Integral” image representation
2. Feature Selection
The AdaBoost training algorithm
3. Real-timeliness
A cascade of classifiers

All faces share some similar properties
– The eyes region is darker than the
upper-cheeks.
– The nose bridge region is brighter than
the eyes.
– That is useful domain knowledge
• Need for encoding of Domain Knowledge:
– Location - Size:  eyes & nose bridge
region
– Value:  darker / brighter

Integral Image Representation (check back-up slide)

Using the integral image
representation we can compute the
value of any rectangular sum (part of
features) in  constant time
– For example the integral sum inside
rectangle D can be computed as:
ii(d) + ii(a) – ii(b) – ii(c)

Feature Computation: features must be
computed as quickly as possible
2. Feature Selection: select the most
discriminating features
3. Real-timeliness: must focus on potentially
positive image areas (that contain faces)

---

AdaBoost

:   #. stands for “Adaptive” boost
    #. Constructs a “strong” classifier as a
    #. linear combination of weighted simple
    #. “weak” classifiers

---

![parental advisory](http://img.xiami.net/images/album/img82/28482/4126011392865064_2.jpg)

this man... is ... I don't know what to say...

  - [User Ciro Santilli 六四事件 法轮功 包卓轩 - Stack Overflow](http://stackoverflow.com/users/895245/ciro-santilli-%e5%85%ad%e5%9b%9b%e4%ba%8b%e4%bb%b6-%e6%b3%95%e8%bd%ae%e5%8a%9f-%e5%8c%85%e5%8d%93%e8%bd%a9)
  - [User Yu Hao - Stack Overflow](http://stackoverflow.com/users/1009479/yu-hao)

---

`OBJ =      $(SRC:.c=.o)`{.makefile}

palette `['pælət]`

back off from '`\0`'

`gilarus`，快乐的基因, `nomados`，流浪的基因

utf-8 chars

  - &#x2610; (hex: `&#x2610;` / dec: `&#9744`;): ballot box (empty, that's how it's supposed to be)
  - &#x2611; (hex: `&#x2611;` / dec: `&#9745`;): ballot box with check
  - &#x2612; (hex: `&#x2612;` / dec: `&#9746`;): ballot box with x
  - &#x2713; (hex: `&#x2713;` / dec: `&#10003`;): check mark, equivalent to `&checkmark;` and `&check;` in most browsers
  - &#x2714; (hex: `&#x2714;` / dec: `&#10004`;): heavy check mark
  - &#x2717; (hex: `&#x2717;` / dec: `&#10007`;): ballot x
  - &#x2718; (hex: `&#x2718;` / dec: `&#10008`;): heavy ballot x

Checking out web fonts for tick symbols? Here's a ready to use s

refs and see also

  - [Unicode Character 0x2713 - "✓" from Unicode Map](http://www.unicodemap.org/details/0x2713/index.html)
  - [Tick symbol in HTML/XHTML - Stack Overflow](http://stackoverflow.com/questions/658044/tick-symbol-in-html-xhtml)

---

Bézier Curve

Try online: [The Bézier Game](http://bezier.method.ac/)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/d/db/B%C3%A9zier_3_big.gif/240px-B%C3%A9zier_3_big.gif)
![](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a4/B%C3%A9zier_4_big.gif/240px-B%C3%A9zier_4_big.gif)

refs and see also

  - [Bézier curve - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/B%C3%A9zier_curve)
  - [Bézier Curve -- from Wolfram MathWorld](http://mathworld.wolfram.com/BezierCurve.html)

---

Fonts

Computer Font

:   A computer font (or font) is an electronic data file containing **a set of
    glyphs, characters, or symbols** such as dingbats^[sometimes more formally
    known as a printer's ornament or printer's character, is an ornament,
    character, or spacer used in typesetting, often employed for the creation
    of box frames.]. Although the term font first
    referred to a set of metal type sorts in one style and size, since the 1990s it
    is generally used to refer to a scalable set of digital shapes that may be
    printed at many different sizes.

    There are three basic kinds of computer font file data formats:

    #. **Bitmap fonts** consist of a matrix of dots or pixels representing the image of
       each glyph in each face and size.
    #. **Outline fonts** (also called vector fonts) use
       Bézier curves, drawing instructions and mathematical formulae to describe each
       glyph, which make the character outlines scalable to any size.
    #. **Stroke fonts** use a series of specified lines and additional
       information to define the profile, or size and shape of the line in a
       specific face, which together describe the appearance of the glyph.

Outline fonts

:   Outline fonts or **vector fonts** are collections of vector images,
    consisting of lines and curves defining the **boundary of glyphs**. Early vector
    fonts were used by vector monitors and vector plotters using their own internal
    fonts, usually with thin single strokes instead of thick outlined glyphs. The
    advent of desktop publishing brought the need for a universal standard to
    integrate the graphical user interface of the first Macintosh and laser
    printers. The term to describe the integration technology was WYSIWYG (What You
    See Is What You Get). **The universal standard was (and still is) Adobe
    PostScript.** Examples are **PostScript Type 1** and **Type 3 fonts**, **TrueType** and
    **OpenType**.

**PostScript fonts** are outline font specifications developed by Adobe Systems for
professional digital typesetting, which uses PostScript file format to encode
font information.

Type 1

:   Type 1 (also known as PostScript, PostScript Type 1, PS1, T1 or Adobe Type
    1) is the font format for single-byte digital fonts for use with Adobe Type
    Manager software and with PostScript printers. It can support font hinting.  It
    was originally a proprietary specification, but Adobe released the
    specification to third-party font manufacturers provided that all Type 1 fonts
    adhere to it.

    Type 1 fonts are natively supported in Mac OS X, and in Windows
    XP and later via the GDI API. (They are not supported in the Windows GDI+, WPF
    or DirectWrite APIs.)

Type 2, 3, 4, 5, 9, 10, 11, 14, 32, 42

**TrueType** is an outline font standard developed by Apple and Microsoft in the
late 1980s as a competitor to Adobe's Type 1 fonts used in PostScript. It has
become the most common format for fonts on both the Mac OS and Microsoft
Windows operating systems.

The primary strength of TrueType was originally that it offered font developers
a high degree of control over precisely how their fonts are displayed, right
down to particular pixels, at various font sizes. With widely varying rendering
technologies in use today, pixel-level control is no longer certain in a
TrueType font.

**OpenType** is a format for scalable computer fonts. It was built on its
predecessor TrueType, retaining TrueType's basic structure and adding many
intricate（复杂的） data structures for prescribing typographic behavior.
**OpenType is a registered trademark of Microsoft Corporation.**

refs and see also

  - [Computer font - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Computer_font#OUTLINE)
  - [PostScript fonts - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/PostScript_fonts)
  - [OpenType - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/OpenType)
  - [Web Open Font Format - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Web_Open_Font_Format)
  - [TrueType - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/TrueType)

---

设置 Git 的 Upstream

```bash
# 看看当前的 upstream
$ git remote -v
origin  git@github.com:district10/blog.git (fetch)
origin  git@github.com:district10/blog.git (push)

# 添加一个
$ git remote add coding https://git.coding.net/dvorak4tzx/blog.git

# 看看是否加入成功
$ git remote -v
coding  https://git.coding.net/dvorak4tzx/blog.git (fetch)
coding  https://git.coding.net/dvorak4tzx/blog.git (push)
origin  git@github.com:district10/blog.git (fetch)
origin  git@github.com:district10/blog.git (push)

# 把代码传上去
$ git push coding master

# 重命名一个 upstream
git remote rename coding backup

# 换个 url
$ git remote set-url backup git@github.com:USERNAME/OTHERREPOSITORY.git

# 删除 upstream
$ git remote rm backup

# 补充点备忘（`user.name` 和 `user.email` 就不说了）
$ git config --global core.editor vim
$ git remote add origin url.git
$ git push origin master
```

refs and see also

  - [github - Git push existing repo to a new and different remote repo server? - Stack Overflow](http://stackoverflow.com/questions/5181845/git-push-existing-repo-to-a-new-and-different-remote-repo-server)
  - [Changing a remote's URL - User Documentation](https://help.github.com/articles/changing-a-remote-s-url/)
  - [git命令之git remote的用法 - wangjia55的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/wangjia55/article/details/8802490)

---

以前存的 Emojis

|            |      01     |      02     |      03     |      04     |      05     |      06     |      07     |      08     |      09     |      10     |
| :---------:| :---------: | :---------: | :---------: | :---------: | :---------: | :---------: | :---------: | :---------: | :---------: | :---------: |
|     A      | ![][qq-001] | ![][qq-002] | ![][qq-003] | ![][qq-004] | ![][qq-005] | ![][qq-006] | ![][qq-007] | ![][qq-008] | ![][qq-009] | ![][qq-010] |
|     B      | ![][qq-011] | ![][qq-012] | ![][qq-013] | ![][qq-014] | ![][qq-015] | ![][qq-016] | ![][qq-017] | ![][qq-018] | ![][qq-019] | ![][qq-020] |
|     C      | ![][qq-021] | ![][qq-022] | ![][qq-023] | ![][qq-024] | ![][qq-025] | ![][qq-026] | ![][qq-027] | ![][qq-028] | ![][qq-029] | ![][qq-030] |
|     D      | ![][qq-031] | ![][qq-032] | ![][qq-033] | ![][qq-034] | ![][qq-035] | ![][qq-036] | ![][qq-037] | ![][qq-038] | ![][qq-039] | ![][qq-040] |
|     E      | ![][qq-041] | ![][qq-042] | ![][qq-043] | ![][qq-044] | ![][qq-045] | ![][qq-046] | ![][qq-047] | ![][qq-048] | ![][qq-049] | ![][qq-050] |
|     F      | ![][qq-051] | ![][qq-052] | ![][qq-053] | ![][qq-054] | ![][qq-055] | ![][qq-056] | ![][qq-057] | ![][qq-058] | ![][qq-059] | ![][qq-060] |
|     G      | ![][qq-061] | ![][qq-062] | ![][qq-063] | ![][qq-064] | ![][qq-065] | ![][qq-066] | ![][qq-067] | ![][qq-068] | ![][qq-069] | ![][qq-070] |
|     H      | ![][qq-071] | ![][qq-072] | ![][qq-073] | ![][qq-074] | ![][qq-075] | ![][qq-076] | ![][qq-077] | ![][qq-078] | ![][qq-079] | ![][qq-080] |
|     I      | ![][qq-081] | ![][qq-082] | ![][qq-083] | ![][qq-084] | ![][qq-085] | ![][qq-086] | ![][qq-087] | ![][qq-088] | ![][qq-089] | ![][qq-090] |
|     J      | ![][qq-091] | ![][qq-092] | ![][qq-093] | ![][qq-094] | ![][qq-095] | ![][qq-096] | ![][qq-097] | ![][qq-098] | ![][qq-099] | ![][qq-100] |
|     K      | ![][qq-101] | ![][qq-102] | ![][qq-103] | ![][qq-104] | ![][qq-105] | ![][qq-106] | ![][qq-107] | ![][qq-108] | ![][qq-109] | ![][qq-110] |
|     L      | ![][qq-111] | ![][qq-112] | ![][qq-113] | ![][qq-114] | ![][qq-115] | ![][qq-116] | ![][qq-117] | ![][qq-118] | ![][qq-119] | ![][qq-120] |
|     M      | ![][qq-121] | ![][qq-122] | ![][qq-123] | ![][qq-124] | ![][qq-125] | ![][qq-126] | ![][qq-127] | ![][qq-128] | ![][qq-129] | ![][qq-130] |
|     N      | ![][qq-131] | ![][qq-132] | ![]    | ![]    | ![]    | ![]    | ![]    |

[qq-001]: http://gnat-tang-shared-image.qiniudn.com/emoji/1.gif
[qq-002]: http://gnat-tang-shared-image.qiniudn.com/emoji/2.gif
[qq-003]: http://gnat-tang-shared-image.qiniudn.com/emoji/3.gif
[qq-004]: http://gnat-tang-shared-image.qiniudn.com/emoji/4.gif
[qq-005]: http://gnat-tang-shared-image.qiniudn.com/emoji/5.gif
[qq-006]: http://gnat-tang-shared-image.qiniudn.com/emoji/6.gif
[qq-007]: http://gnat-tang-shared-image.qiniudn.com/emoji/7.gif
[qq-008]: http://gnat-tang-shared-image.qiniudn.com/emoji/8.gif
[qq-009]: http://gnat-tang-shared-image.qiniudn.com/emoji/9.gif
[qq-010]: http://gnat-tang-shared-image.qiniudn.com/emoji/10.gif
[qq-011]: http://gnat-tang-shared-image.qiniudn.com/emoji/11.gif
[qq-012]: http://gnat-tang-shared-image.qiniudn.com/emoji/12.gif
[qq-013]: http://gnat-tang-shared-image.qiniudn.com/emoji/13.gif
[qq-014]: http://gnat-tang-shared-image.qiniudn.com/emoji/14.gif
[qq-015]: http://gnat-tang-shared-image.qiniudn.com/emoji/15.gif
[qq-016]: http://gnat-tang-shared-image.qiniudn.com/emoji/16.gif
[qq-017]: http://gnat-tang-shared-image.qiniudn.com/emoji/17.gif
[qq-018]: http://gnat-tang-shared-image.qiniudn.com/emoji/18.gif
[qq-019]: http://gnat-tang-shared-image.qiniudn.com/emoji/19.gif
[qq-020]: http://gnat-tang-shared-image.qiniudn.com/emoji/20.gif
[qq-021]: http://gnat-tang-shared-image.qiniudn.com/emoji/21.gif
[qq-022]: http://gnat-tang-shared-image.qiniudn.com/emoji/22.gif
[qq-023]: http://gnat-tang-shared-image.qiniudn.com/emoji/23.gif
[qq-024]: http://gnat-tang-shared-image.qiniudn.com/emoji/24.gif
[qq-025]: http://gnat-tang-shared-image.qiniudn.com/emoji/25.gif
[qq-026]: http://gnat-tang-shared-image.qiniudn.com/emoji/26.gif
[qq-027]: http://gnat-tang-shared-image.qiniudn.com/emoji/27.gif
[qq-028]: http://gnat-tang-shared-image.qiniudn.com/emoji/28.gif
[qq-029]: http://gnat-tang-shared-image.qiniudn.com/emoji/29.gif
[qq-030]: http://gnat-tang-shared-image.qiniudn.com/emoji/30.gif
[qq-031]: http://gnat-tang-shared-image.qiniudn.com/emoji/31.gif
[qq-032]: http://gnat-tang-shared-image.qiniudn.com/emoji/32.gif
[qq-033]: http://gnat-tang-shared-image.qiniudn.com/emoji/33.gif
[qq-034]: http://gnat-tang-shared-image.qiniudn.com/emoji/34.gif
[qq-035]: http://gnat-tang-shared-image.qiniudn.com/emoji/35.gif
[qq-036]: http://gnat-tang-shared-image.qiniudn.com/emoji/36.gif
[qq-037]: http://gnat-tang-shared-image.qiniudn.com/emoji/37.gif
[qq-038]: http://gnat-tang-shared-image.qiniudn.com/emoji/38.gif
[qq-039]: http://gnat-tang-shared-image.qiniudn.com/emoji/39.gif
[qq-040]: http://gnat-tang-shared-image.qiniudn.com/emoji/40.gif
[qq-041]: http://gnat-tang-shared-image.qiniudn.com/emoji/41.gif
[qq-042]: http://gnat-tang-shared-image.qiniudn.com/emoji/42.gif
[qq-043]: http://gnat-tang-shared-image.qiniudn.com/emoji/43.gif
[qq-044]: http://gnat-tang-shared-image.qiniudn.com/emoji/44.gif
[qq-045]: http://gnat-tang-shared-image.qiniudn.com/emoji/45.gif
[qq-046]: http://gnat-tang-shared-image.qiniudn.com/emoji/46.gif
[qq-047]: http://gnat-tang-shared-image.qiniudn.com/emoji/47.gif
[qq-048]: http://gnat-tang-shared-image.qiniudn.com/emoji/48.gif
[qq-049]: http://gnat-tang-shared-image.qiniudn.com/emoji/49.gif
[qq-050]: http://gnat-tang-shared-image.qiniudn.com/emoji/50.gif
[qq-051]: http://gnat-tang-shared-image.qiniudn.com/emoji/51.gif
[qq-052]: http://gnat-tang-shared-image.qiniudn.com/emoji/52.gif
[qq-053]: http://gnat-tang-shared-image.qiniudn.com/emoji/53.gif
[qq-054]: http://gnat-tang-shared-image.qiniudn.com/emoji/54.gif
[qq-055]: http://gnat-tang-shared-image.qiniudn.com/emoji/55.gif
[qq-056]: http://gnat-tang-shared-image.qiniudn.com/emoji/56.gif
[qq-057]: http://gnat-tang-shared-image.qiniudn.com/emoji/57.gif
[qq-058]: http://gnat-tang-shared-image.qiniudn.com/emoji/58.gif
[qq-059]: http://gnat-tang-shared-image.qiniudn.com/emoji/59.gif
[qq-060]: http://gnat-tang-shared-image.qiniudn.com/emoji/60.gif
[qq-061]: http://gnat-tang-shared-image.qiniudn.com/emoji/61.gif
[qq-062]: http://gnat-tang-shared-image.qiniudn.com/emoji/62.gif
[qq-063]: http://gnat-tang-shared-image.qiniudn.com/emoji/63.gif
[qq-064]: http://gnat-tang-shared-image.qiniudn.com/emoji/64.gif
[qq-065]: http://gnat-tang-shared-image.qiniudn.com/emoji/65.gif
[qq-066]: http://gnat-tang-shared-image.qiniudn.com/emoji/66.gif
[qq-067]: http://gnat-tang-shared-image.qiniudn.com/emoji/67.gif
[qq-068]: http://gnat-tang-shared-image.qiniudn.com/emoji/68.gif
[qq-069]: http://gnat-tang-shared-image.qiniudn.com/emoji/69.gif
[qq-070]: http://gnat-tang-shared-image.qiniudn.com/emoji/70.gif
[qq-071]: http://gnat-tang-shared-image.qiniudn.com/emoji/71.gif
[qq-072]: http://gnat-tang-shared-image.qiniudn.com/emoji/72.gif
[qq-073]: http://gnat-tang-shared-image.qiniudn.com/emoji/73.gif
[qq-074]: http://gnat-tang-shared-image.qiniudn.com/emoji/74.gif
[qq-075]: http://gnat-tang-shared-image.qiniudn.com/emoji/75.gif
[qq-076]: http://gnat-tang-shared-image.qiniudn.com/emoji/76.gif
[qq-077]: http://gnat-tang-shared-image.qiniudn.com/emoji/77.gif
[qq-078]: http://gnat-tang-shared-image.qiniudn.com/emoji/78.gif
[qq-079]: http://gnat-tang-shared-image.qiniudn.com/emoji/79.gif
[qq-080]: http://gnat-tang-shared-image.qiniudn.com/emoji/80.gif
[qq-081]: http://gnat-tang-shared-image.qiniudn.com/emoji/81.gif
[qq-082]: http://gnat-tang-shared-image.qiniudn.com/emoji/82.gif
[qq-083]: http://gnat-tang-shared-image.qiniudn.com/emoji/83.gif
[qq-084]: http://gnat-tang-shared-image.qiniudn.com/emoji/84.gif
[qq-085]: http://gnat-tang-shared-image.qiniudn.com/emoji/85.gif
[qq-086]: http://gnat-tang-shared-image.qiniudn.com/emoji/86.gif
[qq-087]: http://gnat-tang-shared-image.qiniudn.com/emoji/87.gif
[qq-088]: http://gnat-tang-shared-image.qiniudn.com/emoji/88.gif
[qq-089]: http://gnat-tang-shared-image.qiniudn.com/emoji/89.gif
[qq-090]: http://gnat-tang-shared-image.qiniudn.com/emoji/90.gif
[qq-091]: http://gnat-tang-shared-image.qiniudn.com/emoji/91.gif
[qq-092]: http://gnat-tang-shared-image.qiniudn.com/emoji/92.gif
[qq-093]: http://gnat-tang-shared-image.qiniudn.com/emoji/93.gif
[qq-094]: http://gnat-tang-shared-image.qiniudn.com/emoji/94.gif
[qq-095]: http://gnat-tang-shared-image.qiniudn.com/emoji/95.gif
[qq-096]: http://gnat-tang-shared-image.qiniudn.com/emoji/96.gif
[qq-097]: http://gnat-tang-shared-image.qiniudn.com/emoji/97.gif
[qq-098]: http://gnat-tang-shared-image.qiniudn.com/emoji/98.gif
[qq-099]: http://gnat-tang-shared-image.qiniudn.com/emoji/99.gif
[qq-100]: http://gnat-tang-shared-image.qiniudn.com/emoji/100.gif
[qq-101]: http://gnat-tang-shared-image.qiniudn.com/emoji/101.gif
[qq-102]: http://gnat-tang-shared-image.qiniudn.com/emoji/102.gif
[qq-103]: http://gnat-tang-shared-image.qiniudn.com/emoji/103.gif
[qq-104]: http://gnat-tang-shared-image.qiniudn.com/emoji/104.gif
[qq-105]: http://gnat-tang-shared-image.qiniudn.com/emoji/105.gif
[qq-106]: http://gnat-tang-shared-image.qiniudn.com/emoji/106.gif
[qq-107]: http://gnat-tang-shared-image.qiniudn.com/emoji/107.gif
[qq-108]: http://gnat-tang-shared-image.qiniudn.com/emoji/108.gif
[qq-109]: http://gnat-tang-shared-image.qiniudn.com/emoji/109.gif
[qq-110]: http://gnat-tang-shared-image.qiniudn.com/emoji/110.gif
[qq-111]: http://gnat-tang-shared-image.qiniudn.com/emoji/111.gif
[qq-112]: http://gnat-tang-shared-image.qiniudn.com/emoji/112.gif
[qq-113]: http://gnat-tang-shared-image.qiniudn.com/emoji/113.gif
[qq-114]: http://gnat-tang-shared-image.qiniudn.com/emoji/114.gif
[qq-115]: http://gnat-tang-shared-image.qiniudn.com/emoji/115.gif
[qq-116]: http://gnat-tang-shared-image.qiniudn.com/emoji/116.gif
[qq-117]: http://gnat-tang-shared-image.qiniudn.com/emoji/117.gif
[qq-118]: http://gnat-tang-shared-image.qiniudn.com/emoji/118.gif
[qq-119]: http://gnat-tang-shared-image.qiniudn.com/emoji/119.gif
[qq-120]: http://gnat-tang-shared-image.qiniudn.com/emoji/120.gif
[qq-121]: http://gnat-tang-shared-image.qiniudn.com/emoji/121.gif
[qq-122]: http://gnat-tang-shared-image.qiniudn.com/emoji/122.gif
[qq-123]: http://gnat-tang-shared-image.qiniudn.com/emoji/123.gif
[qq-124]: http://gnat-tang-shared-image.qiniudn.com/emoji/124.gif
[qq-125]: http://gnat-tang-shared-image.qiniudn.com/emoji/125.gif
[qq-126]: http://gnat-tang-shared-image.qiniudn.com/emoji/126.gif
[qq-127]: http://gnat-tang-shared-image.qiniudn.com/emoji/127.gif
[qq-128]: http://gnat-tang-shared-image.qiniudn.com/emoji/128.gif
[qq-129]: http://gnat-tang-shared-image.qiniudn.com/emoji/129.gif
[qq-130]: http://gnat-tang-shared-image.qiniudn.com/emoji/130.gif
[qq-131]: http://gnat-tang-shared-image.qiniudn.com/emoji/131.gif
[qq-132]: http://gnat-tang-shared-image.qiniudn.com/emoji/132.gif
: http://gnat-tang-shared-image.qiniudn.com/emoj/green-happy.png
: http://gnat-tang-shared-image.qiniudn.com/emoj/red-angry.png
: http://gnat-tang-shared-image.qiniudn.com/emoj/white-question.png
: http://gnat-tang-shared-image.qiniudn.com/emoj/yellow-plain.png
: http://gnat-tang-shared-image.qiniudn.com/pic/gnat-favicon.ico

---

Craigslist

被 GFW 墙了。其实不怎么样，天朝这样的网站多了去。（不过还是要吐槽这蛋疼的 GFW。）

refs and see also

  - [Craigslist - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Craigslist)
  - [Craigslist_百度百科](http://baike.baidu.com/view/703783.htm)

---

[replay a vim macro until end of buffer - Stack Overflow](http://stackoverflow.com/questions/1291962/replay-a-vim-macro-until-end-of-buffer)

:   Vim Macro

    就跟其它所有编辑器一样，宏很好用。

    但我不知道在 Vim 里怎么 apply 一个 macro 到文件末尾（在 Notepad++ 里很容易）。

    查到的是：`VG:normal @x` 或者 `:%normal @x`，总之就是在一定范围内，用 `normal @x`。

---

NetBIOS Names

Character | ASCII Code  |  Hex Code
--------- | ----------- | -----------
A             | EB   |  45 42
B             | EC   |  45 43
C             | ED   |  45 44
D             | EE   |  45 45
E             | EF   |  45 46
F             | EG   |  45 47
G             | EH   |  45 48
...           | ...  |  ...

NOTE: The above mapping list can be useful while reading network traces because information is sent on the wire in the above encoded format.

（世上还有这么神奇的表示法。）

refs and see also

  - [Microsoft Support](https://support.microsoft.com/en-us/kb/194203)

---

HTML Entity

在 [Learning HTML](post-0022-learning-html.html#html-entities) 里有部分笔记。
但感觉不够，有时候我都开始用 LaTeX 来标记，但那也太蠢了……

℃，℉，★，☆，☺，☻，☼

* &quot; `&quot;`{.html}
* &amp; `&amp;`{.html}
* &nbsp; `&nbsp;`{.html}
* &yen; `&yen;`{.html}
* &brvbar; `&brvbar;`{.html} broken vertical bar
* &sect; `&sect;`{.html}
* &laquo; `&laquo;`{.html} left double angle quotes
* &raquo; `&raquo;`{.html}
* &deg; `&deg;`{.html}
* &plusmn; `&plusmn;`{.html} plus minus
* &micro; `&micro;`{.html}
* &para; `&para;`{.html}
* &iquest; `&iquest;`{.html}
* &frac14; `&frac14;`{.html}
* &frac12; `&frac12;`{.html}
* &frac34; `&frac34;`{.html}
* &times; `&times;`{.html}
* &divide; `&divide;`{.html}
* &aelig; `&aelig;`{.html} latin small letter ae
* &bull; `&bull;`{.html} bullet
* &hellip; `&hellip;`{.html} horizontal ellipsis
* &prime; `&prime;`{.html}
* &Prime; `&Prime;`{.html}
* &frasl; `&frasl;`{.html} fraction slash
* &larr; `&larr;`{.html}
* &rarr; `&rarr;`{.html}
* &uarr; `&uarr;`{.html}
* &darr; `&darr;`{.html}
* &harr; `&harr;`{.html}
* &lArr; `&lArr;`{.html}
* &rArr; `&rArr;`{.html}
* &uArr; `&hearts;`{.html}
* &dArr; `&dArr;`{.html}
* &hArr; `&hArr;`{.html}
* &crarr; `&crarr;`{.html} downwards arrow wiht corner leftwards (carriage return)
* &not; `&not;`{.html}
* &forall; `&forall;`{.html}
* &exist; `&exist;`{.html}
* &part; `&part;`{.html}
* &nabla; `&nabla;`{.html} `['næblə]`, 劈形算符；微分算符
* &isin; `&isin;`{.html}
* &notin; `&notin;`{.html}
* &ni; `&ni;`{.html}
* &prod; `&prod;`{.html}
* &sum; `&sum;`{.html}
* &minus; `&minus;`{.html}
* &lowast; `&lowast;`{.html} asterisk
* &radic; `&radic;`{.html} square root
* &prop; `&prop;`{.html}
* &infin; `&infin;`{.html}
* &ang; `&ang;`{.html}
* &and; `&and;`{.html}
* &or; `&or;`{.html}
* &cap; `&cap;`{.html}
* &cup; `&cup;`{.html}
* &int; `&int;`{.html} integral
* &there4; `&there4;`{.html} therefore
* &cong; `&cong;`{.html} approximately equal to
* &asymp; `&asymp;`{.html} almost equal to
* &ne; `&ne;`{.html}
* &equiv; `&equiv;`{.html}
* &lt; `&lt;`{.html}
* &gt; `&gt;`{.html}
* &le; `&le;`{.html}
* &ge; `&ge;`{.html}
* &sub; `&sub;`{.html} subset
* &sup; `&sup;`{.html} superset
* &sube; `&sube;`{.html}
* &supe; `&supe;`{.html}
* &nsub; `&nsub;`{.html}
* &oplus; `&oplus;`{.html} circled plus
* &otimes; `&otimes;`{.html} circled times
* &perp; `&perp;`{.html} up tack
* &sdot; `&sdot;`{.html}
* &lceil; `&lceil;`{.html}
* &rceil; `&rceil;`{.html}
* &lfloor; `&lfloor;`{.html}
* &rfloor; `&rfloor;`{.html}
* &lang; `&lang;`{.html}
* &rang; `&rang;`{.html}
* &loz; `&loz;`{.html} lozenge, `['lɑzɪndʒ]`, 菱形
* &hearts; `&hearts;`{.html}

<div class="tzx-fright">
![WWII "ruptured duck" Honorable Discharge Emblem
    lozenge](https://upload.wikimedia.org/wikipedia/commons/thumb/8/85/Ruptured_Duck_patch.JPG/220px-Ruptured_Duck_patch.JPG)
</div>

refs and see also

  - [HTML Codes - Table of ascii characters and symbols](http://www.ascii.cl/htmlcodes.htm)
  - [Entity Reference](http://arpc65.arm.ac.uk/~hmm/Entity_Reference.html)
  - [List of XML and HTML character entity references - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/List_of_XML_and_HTML_character_entity_references)
  - [List of emoticons - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/List_of_emoticons)
  - [Arrow symbol - Sets - Unicode® character table](http://unicode-table.com/en/sets/arrows-symbols/)

---

Assignment Expression

:   **An assignment expression has the value of the left operand after the
    assignment.**

    出自 C99 standard, section 6.5.16

有赋值表达式的情况下

:   ```python
    if result=func1(...):
        print func2(result)
    ```

无赋值表达式的情况下

:   ```python
    result=func1(...)
    if result:
        print func2(result)
    ```

然后你就知道什么叫赋值表达式了。

Python: `import this`{.python} => The Zen of Python, by Tim Peters

:   ```
    Beautiful is better than ugly.
    **Explicit is better than implicit.**
    Simple is better than complex.
    Complex is better than complicated.
    Flat is better than nested.
    Sparse is better than dense.
    Readability counts.
    Special cases aren't special enough to break the rules.
    Although practicality beats purity.
    Errors should never pass silently.
    Unless explicitly silenced.
    In the face of ambiguity, refuse the temptation to guess.
    There should be one-- and preferably only one --obvious way to do it.
    Although that way may not be obvious at first unless you're Dutch.
    Now is better than never.
    Although never is often better than right now.
    If the implementation is hard to explain, it's a bad idea.
    If the implementation is easy to explain, it may be a good idea.
    Namespaces are one honking great idea -- let's do more of those!
    ```

refs and see also

  - [为什么我不喜欢赋值表达式 - SegmentFault](http://segmentfault.com/a/1190000000402506)
  - [c - What does an assignment return? - Stack Overflow](http://stackoverflow.com/questions/9514569/what-does-an-assignment-return)
  - [C99 - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/C99#References)
  - [Memory part 5: What programmers can do [LWN.net]](https://lwn.net/Articles/255364/)
  - [Yoda 表示法错在哪里](http://www.yinwang.org/blog-cn/2013/04/14/yoda-notation/)

---

有些是以前读过的，但觉得应再读一遍。

[Citation signal - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Citation_signal)

:   A Legal **citation signal** or **introductory signal** is a set of brief abbreviated phrases or
    words used to clarify the authority or significance of a legal citation as it relates to a proposition.

    * Signal Details
        + Signals that indicate **support**

            #. no signal（直接在后面把引用列出来）
            #. *e.g.*, "exempli gratia"（比如说）
               > The placebo effect is well established. See, *e.g.*, Anne Harrington, The Placebo Effect: An Interdisciplinary Exploration (1999).
            #. Accord（还有，也）
              ~ “I have just cited something that supports my proposition, and now here’s another thing that supports it too.”
            #. See（这个很直接，不解释了）
            #. See also
            #. *Cf.*, compare（就像是说：“他们也是类似的观点”）

               > The Massachusetts Court of Appeals did not reach that question and we decline to address it in the first instance.
               > *Cf.* Coy v. Iowa, 487 U.S. 1012, 1021-1022, 108 S.Ct. 2798, 101 L.Ed.2d 857 (1988).

        + Signals that indicate **background material**
            #. See generally
        + Signals that indicate **contradiction**
            #. *Contra*
            #. But see
            #. *But cf.*
        + Signals that indicate **a useful comparison**
            #. Compare _____ with _______
            #.
        + Using signals as verbs（这是在 footnote 里常用的）
            #. > See Christina L. Anderson, Comment, Double Jeopardy: The Modern Dilemma for Juvenile Justice,
               > 152 U. Pa. L. Rev. 1181, 1204-07 (2004) (discussing four main types of restorative justice programs).
            #. "*Cf.*" becomes "compare" and "*e.g.*" becomes "for example" when these signals are used as verbs.

    * Signal formatting（TODO）

    Read more | 下面是关于 citation 和英文写作比较著名的几本书

    #. [The Bluebook: A Uniform System of Citation](https://en.wikipedia.org/wiki/Bluebook)
    #. [The Chicago Manual of Style Online: Chicago-Style Citation Quick Guide](http://www.chicagomanualofstyle.org/tools_citationguide.html)
    #. [The Elements of Style (豆瓣)](http://book.douban.com/subject/1433835/)
    #. [Style (豆瓣)](http://book.douban.com/subject/4107521/)

[Pitfalls of C](http://www.math.pku.edu.cn/teachers/qiuzy/c/reading/pitfall.htm)

:   这书居然在网上直接放着（其实考研复试那段时间我看完了，有时间再看一下，note some）

    SHIT.

    The C language is like a carving knife: simple, sharp, and extremely useful
    in skilled hands. Like any sharp tool, C can injure people who don't know
    how to handle it.

    Once we know how to declare the variable, we know how to cast a constant to
    that type: just drop the name from the variable declaration. Thus, we cast
    0 to a "pointer to function returning void'' by saying:

    ```cpp
    (void(*)())0
    ```

    and we can now replace fp by (void(*)())0:

    (*(void(*)())0)();

    The semicolon on the end turns the expression into a statement.
and we can now replace fp by (void(*)())0:

    if (flags & FLAG != 0) ...  //  if (flags & (FLAG != 0)) ...
    r = h<<4 + l;               //  r = h << (4 + l);

 One way to avoid these problems is to parenthesize everything, but expressions with too many parentheses are hard to understand, so it is probably useful to try to remember the precedence levels in C. Unfortunately, there are fifteen of them, so this is not always easy to do. It can be made easier, though, by classifying them into groups.

The operators that bind the most tightly are the ones that aren't really operators: subscripting, function calls, and structure selection. These all associate to the left.

Next come the unary operators. These have the highest precedence of any of the true operators. Because function calls bind more tightly than unary operators, you must write (*p)() to call a function pointed to by p; *p() implies that p is a function that returns a pointer. Casts are unary operators and have the same precedence as any other unary operator. Unary operators are right-associative, so *p++ is interpreted as *(p++) and not as (*p)++.

Next come the true binary operators. The arithmetic operators have the highest precedence, then the shift operators, the relational operators, the logical operators, the assignment operators, and finally the conditional operator. The two most important things to keep in mind are:
1. Every logical operator has lower precedence than every relational operator.
2. The shift operators bind more tightly than the relational operators but less tightly than the arithmetic operators.

Within the various operator classes, there are few surprises. Multiplication, division, and remainder have the same precedence, addition and subtraction have the same precedence, and the two shift operators have the same precedence.


[裘宗燕主页 :: Main Page of Qiu Zongyan](http://www.math.pku.edu.cn/teachers/qiuzy/)

:   从 C Traps and Pitfalls 看到这里。这老师很著名。

    里面有一些课程：

    #. 2015年春季课程：计算概论（基于Python的课程）
    #. 2014年秋季课程：数据结构（基于Python的课程）
    #. 2014年春季课程：计算概论（基于Python的课程）
    #. 2014年春季课程：程序设计技术与方法（面向数学学院和信息学院三年级本科生）
       采用MIT的著名教科书Structure and Interpretation of Computer Programs。
    #. 2012年秋季课程：程序设计技术与方法
    #. 2012年春季课程：程序设计语言原理（研究生课程）
    #. 2011年秋季课程：程序设计技术与方法
    #. 2010年秋季课程：程序设计技术与方法
    #. 2010年秋季课程：算法与数据结构---基于Maple的课程
    #. 2010年春季课程：形式化方法 --- 基于 B 方法的软件开发（研究生课）
    #. 2010年春季课程：低年级讨论班（软件）
    #. 2009年秋季课程：程序设计技术与方法


[Requirements for Chinese Text Layout 中文排版需求](http://www.w3.org/TR/clreq/)

:   [w3c/clreq](https://github.com/w3c/clreq)

    句號 `U+3002` IDEOGRAPHIC FULL STOP `[。]`、逗號 `U+FF0C` FULLWIDTH COMMA `[，]`
    以及頓號 `U+3001` IDEOGRAPHIC COMMA `[、]`。句號表示語句結束、逗點表示語氣停頓、
    頓號使用於並列連用、表示次序的字詞之間。

    許多理工書籍、科技文獻、西文教科书语法书籍等內含大量西文詞句，並採用橫排，為求標點符號體例一致，
    也有採用 `U+FF0E` FULLWIDTH FULL STOP `[．]` 為句號、採 `U+002C` COMMA `[,]` 或 `U+FF0C` FULLWIDTH COMMA `[，]`
    為逗號與頓號的案例。^[我也记得从哪儿看到论文里中文也最好用英文标点。]

    橫排時，西文使用比例字體；阿拉伯數字則常用比例字體或等寬字體。
    原則上，漢字與西文字母、數字間使用四分之一個漢字寬的字距或空白。
    但西文出現在行頭或行尾時，則毋須加入空白。（最好中英文就之间加个空格，see [中文排版指北]）
    或可使用西文詞間空格（U+0020 SPACE [ ]，其寬度隨不同字體有所變化）。

[Caliphate - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Caliph)

:   哈里发，`key-lif, kal-if`

---

"Je suis Charlie" (French pronunciation: `​[ʒə sɥi ʃaʁli]`, French for "**I am Charlie**") is
a slogan and a logo created by French art director Joachim Roncin and adopted
by supporters of freedom of speech and freedom of the press after the 7 January 2015 massacre
in which twelve people were killed at the offices of the French satirical weekly newspaper Charlie Hebdo.

![The front cover of edition of 14 January 2015, with a cartoon in the same style
  as 3 November 2011 cover, uses the phrase "Je suis Charlie"](https://upload.wikimedia.org/wikipedia/en/thumb/1/1c/Charlie_Hebdo_Tout_est_pardonn%C3%A9.jpg/220px-Charlie_Hebdo_Tout_est_pardonn%C3%A9.jpg)

refs and see also

#. [Je suis Charlie - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Je_suis_Charlie)

---

Markded

:   <http://whudoc.qiniudn.com/2016/v/0.2/marked.html>

    :   ```html
        <!doctype html>
        <html>
        <head>
          <meta charset="utf-8"/>
          <title>Marked in the browser</title>
        </head>
        <body>
        <div class="tzxMarked">**nice**</div>
        <div class="tzxMarked">
        # good
        **bad**
        ## nice
        ## terrible
        > quoted
        </div>

        <script src="http://tangzx.qiniudn.com/marked.js"></script>
        <script>
        tzxMarkeds = document.getElementsByClassName('tzxMarked');
        for ( var i = 0; i < tzxMarkeds.length; ++i ) {
            m = tzxMarkeds[i];
            ms = m.textContent;
            console.log( ms );
            m.innerHTML = marked( ms );
        }
        </script>
        </body>
        </html>
        ```

Strapdown

:   <http://whudoc.qiniudn.com/2016/v/0.2/united.html>

    :   ```html
        <!DOCTYPE html>
        <html>
        <title>Hello Strapdown</title>

        <xmp theme="united" style="display:none;">
        # Markdown text goes in here

        theme: united

        ## Chapter 1

        chapter one!

        **bold** and *slanted*.

        - foo
        - bar

        1. one
        2. two

        `bash -e "echo hello"`

        ## Chapter 2

        <http://tangzx.qiniudn.com/>

        ![octocat](http://gnat-tang-shared-image.qiniudn.com/octocat/adventure-cat.png)

        </xmp>

        <script src="http://whudoc.qiniudn.com/2016/v/0.2/strapdown.js"></script>
        </html>
        ```

    更多例子见：<http://whudoc.qiniudn.com/2016/v/0.2/index.html>

      - [bootstrap.html](http://whudoc.qiniudn.com/2016/v/0.2/bootstrap.html)
      - [journal.html](http://whudoc.qiniudn.com/2016/v/0.2/journal.html)
      - **[readable.html](http://whudoc.qiniudn.com/2016/v/0.2/readable.html)**
      - [simplex.html](http://whudoc.qiniudn.com/2016/v/0.2/simplex.html)
      - **[spacelab.html](http://whudoc.qiniudn.com/2016/v/0.2/spacelab.html)**
      - [united.html](http://whudoc.qiniudn.com/2016/v/0.2/united.html)

     refs and see also

    #. [chjj/marked](https://github.com/chjj/marked)
    #. [Strapdown.js - Instant and elegant Markdown documents](http://strapdownjs.com/)

---

那什么 [Emoji cheat sheet for GitHub, Basecamp and other services](http://www.emoji-cheat-sheet.com/)，
不比这个好：[Emoji searcher](http://emoji.muan.co/)

![Emoji 的各种玩法……](https://cloud.githubusercontent.com/assets/1369170/8635052/e333474e-27c7-11e5-8af8-5b0bc2281095.gif)

:sweat_smile:

refs and see also

  - [notwaldorf/emoji-translate](https://github.com/notwaldorf/emoji-translate)

---

Ballot Box

Unicode Block (Miscellaneous Symbols)

:   `U+2600` ~ `U+26FF`, #characters = 256

    BALLOT BOX WITH CHECK
      ~ &#x2611; `&#x2611;`{.html}

    BALLOT BOX
      ~ &#x2610; `&#x2610;`{.html}

ballot 英 `['bælət]` 美 `['bælət]` n. 投票；投票用纸；投票总数 vi. 投票；抽签决定

refs and see also

  - [Unicode Character 'BALLOT BOX' (U+2610)](http://www.fileformat.info/info/unicode/char/2610/index.htm)
  - [Unicode Character 'BALLOT BOX WITH CHECK' (U+2611)](http://www.fileformat.info/info/unicode/char/2611/index.htm)

---

French terror attacks: Victim obituaries^[obituaries `oh-bich-oo-er-ee` n. 讣告；讣闻（obituary的复数形式）]

Twelve people died when a bloody attack was launched on the office of France's
satirical magazine Charlie Hebdo. The following day a policewoman was murdered
by Amedy Coulibaly, who held up a Jewish supermarket the next day, killing four
people. Here are brief profiles of all 17 victims.

![19 Sep 2012 issue: An Orthodox Jew pushes an old Muslim in a wheelchair, both
    shouting “You mustn’t make fun!”](http://ichef-1.bbci.co.uk/news/624/media/images/80116000/jpg/_80116101_charliemuslimandjew464.jpg)

死的很多 cartoonist 和 editor，以及一两个 economist，

警察里有 Ahmed Merabet，是个 muslim，"He was a Muslim - a fact picked up by
bloggers seeking to defend the community against "terrorist" slurs."

Witnesses have been describing the dramatic events in France, where two sieges
came to a violent end.

Hostage's mother:

> "My daughter, she's in the supermarket. She's with her Jewish boyfriend. They went shopping.
> he called me 10 minutes ago. She said mum - there's dead people."

Golda, shopper

> "There is a big Jewish community in the area - this area is actually in the
> middle of three Jewish communities.  "Do I feel threatened? Yes. For the
> Jewish community, once again we are being attacked."

![Video footage showed two gunmen firing assault weapons at police in the
    street outside the office](http://ichef.bbci.co.uk/news/624/media/images/80124000/jpg/_80124628_025311653-1.jpg)

![France has been left reeling from the brutal attack](http://ichef.bbci.co.uk/news/624/media/images/80124000/jpg/_80124630_025308133-1.jpg)

'Rivers of blood'

:   One witness told AFP the attack was reminiscent of a scene from a movie:
    "I saw them leaving and shooting. They were wearing masks.
    These guys were serious.... At first I thought it was special forces
    chasing drug traffickers or something."

![Vigil（~~戒严~~祈福） held in Sète, France](http://ichef.bbci.co.uk/live-experience/cps/704/mcs/media/images/80126000/jpg/_80126207_joeytranchinasetevigil.jpg)

![Police officers stand guard outside a flat in Reims as investigators search inside.](http://ichef.bbci.co.uk/live-experience/cps/704/mcs/media/images/80126000/jpg/_80126297_025315148-1.jpg)

![Rallies condemning the attack are taking place across the world, including this one in Quebec, Canada.](http://ichef.bbci.co.uk/live-experience/cps/704/mcs/media/images/80126000/jpg/_80126293_025314033-1.jpg)

![Cartoon by Alex Green](http://ichef.bbci.co.uk/live-experience/cps/512/mcs/media/images/80126000/png/_80126203_alexgreencartoon.png)

![Barbaric](http://ichef.bbci.co.uk/live-experience/cps/512/mcs/media/images/80125000/png/_80125156_mirror.png)

![Victims lay on the pavement in a Paris restaurant Nov. 13, 2015.](http://gnat.qiniudn.com/paris-in-terror/paris-in-terror.png)

法国人唱着国歌撤离球场。

Ernest Hemingway (*For Whom the Bell Tolls*):

> 不要问丧钟为谁鸣，丧钟为你而鸣。

refs and see also

  - [French terror attacks: Victim obituaries - BBC News](http://www.bbc.com/news/world-europe-30724678)
  - [France sieges end: Witness accounts - BBC News](http://www.bbc.com/news/world-europe-30755914)
  - [As it happened: Charlie Hebdo attack - BBC News](http://www.bbc.com/news/live/world-europe-30710777)
  - [Charlie Hebdo: Gun attack on French magazine kills 12 - BBC News](http://www.bbc.com/news/world-europe-30710883)
  - [Paris attacks: Suspects' profiles - BBC News](http://www.bbc.com/news/world-europe-30722038)
  - [Paris attacks: Dozens killed in series of terror attacks across French capital - CBS News](http://www.cbsnews.com/news/paris-explosion-stadium-shootout-restaurant/)

---

<kbd>Control</kbd> + <kbd>Alt</kbd> + <kbd>Up</kbd>/<kbd>Down</kbd>/<kbd>Left</kbd>/<kbd>Right</kbd>

不知道的话，突然碰到可能会有点不知所措。

---

为了把爬虫放进来[^qiniu-robots-default]，参考 [The Web Robots Pages](http://www.robotstxt.org/robotstxt.html) 写了一个 robots.txt，里面只有两行：

```
User-agent: *
Disallow:
```

加了后去百度的 [Robots_站长工具_robots文件检测及生成](http://zhanzhang.baidu.com/robots) 看看生效没。

提交链接，spider：

  - [Google](https://www.google.com/webmasters/tools/submit-url?continue=/addurl)
  - [百度](http://zhanzhang.baidu.com/linksubmit/url)
  - [360 搜索](http://info.so.360.cn/site_submit.html)

[^qiniu-robots-default]: 七牛默认在每个 bucket 加了一个 robots 文件，禁止所有爬虫的爬取。

[An Algorithmic Approach to Network Location Problems. I: The p-Centers : SIAM Journal on Applied Mathematics: Vol. 37, No. 3 (Society for Industrial and Applied Mathematics)](http://epubs.siam.org/doi/abs/10.1137/0137040)

[Facility location problem - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Facility_location_problem)

[Core fonts for the Web - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Core_fonts_for_the_Web)

[dwtkns/gdal-cheat-sheet: Cheat sheet for GDAL/OGR command-line tools](https://github.com/dwtkns/gdal-cheat-sheet)

[pandoc-templates/default.html at master · kjhealy/pandoc-templates](https://github.com/kjhealy/pandoc-templates/blob/master/templates/default.html)

[gpp | Random Determinism](https://randomdeterminism.wordpress.com/tag/gpp/)

[Extension to pandoc's markdown similar to Gitbook, using a "Web template system" · Issue #2676 · jgm/pandoc](https://github.com/jgm/pandoc/issues/2676)

:   jgm 大神说这个文件替换自己处理就好，加到 pandoc 里的话需要处理太多麻烦事。

[Viewing Your Model in Google Earth | SketchUp Knowledge Base](http://help.sketchup.com/en/article/3000149)

[Viewing Your Model in Google Earth | SketchUp Knowledge Base](http://help.sketchup.com/en/article/3000149)

[Search · osg google earth](https://github.com/search?utf8=%E2%9C%93&q=osg+google+earth&type=Repositories&ref=searchresults)

[djw8605 (Derek Weitzel)](https://github.com/djw8605)

[Intro to Importing Data into Google Earth](http://serc.carleton.edu/eyesinthesky2/week10/intro_importing_data.html)

[Downloading, Installing, and Authorizing SketchUp 2016 | SketchUp Knowledge Base](http://help.sketchup.com/en/setting-up)

[| SketchUp](http://www.sketchup.com/download/all)

[Blender to Google Earth Workshop](http://download.blender.org/documentation/bc2006/TempleOfKukulcan.pdf)

[OpenSceneGraph Max Exporter download | SourceForge.net](https://sourceforge.net/projects/osgmaxexp/?source=typ_redirect)

[Spatial References — osgEarth 2.4 documentation](http://docs.osgearth.org/en/latest/user/spatialreference.html?highlight=kml)

[Terrain Tools & Software - Commercial](http://vterrain.org/Packages/Com/)

[blender model to .osg .ive - 必应](http://www.bing.com/search?q=blender+model+to+.osg+.ive&go=Submit&qs=n&form=QBLH&pq=blender+model+to+.osg+.ive&sc=0-0&sp=-1&sk=&cvid=BEFE6863348F4CA1A1BAE7B52162F681)

[How to use Blender with OSG/VTP](http://vterrain.org/Doc/Blender/)

[Builds - district10/blog - Travis CI](https://travis-ci.org/district10/blog/builds)

[qboxrsctl 命令行辅助工具 | 七牛云存储](http://docs.qiniu.com/tools/v6/qboxrsctl.html)

[Free OpenSceneGraph Binary Downloads | AlphaPixel](http://openscenegraph.alphapixel.com/osg/downloads/free-openscenegraph-binary-downloads)

:   osg binary.

[How to remove, copy or rename a file with Perl](http://perlmaven.com/how-to-remove-copy-or-rename-a-file-with-perl)

[How do I get the full path to a Perl script that is executing? - Stack Overflow](http://stackoverflow.com/questions/84932/how-do-i-get-the-full-path-to-a-perl-script-that-is-executing)

[css - `@Media` min-width & max-width - Stack Overflow](http://stackoverflow.com/questions/13550541/media-min-width-max-width)

[miloyip/itoa-benchmark: C++ integer-to-string conversion benchmark](https://github.com/miloyip/itoa-benchmark)

[JoakimSoderberg/catcierge: Image recognition (to keep cat prey out) and RFID chip reader system for automated DIY cat door.](https://github.com/JoakimSoderberg/catcierge)

:   完整的展示了 travis 之类的使用，多平台的编译、测试，等等。

[git - Download a single folder or directory from a GitHub repo - Stack Overflow](http://stackoverflow.com/questions/7106012/download-a-single-folder-or-directory-from-a-github-repo)

:   This is a pretty old question, but I figured this out today and I thought I'd
    leave this here for anyone else who has the same problem.

    As all the previous answers have already noted, you are not allowed to download
    a single folder using Git. However, you ARE allowed to do this with subversion.
    This won't work on a regular git repo obviously, but if you're using GitHub you
    can actually check out using svn.

    For example:

    ```bash
    svn checkout https://github.com/foobar/Test/trunk/foo
    ```

    **trunk** corresponds to master branch. You can use svn ls to see available tags
    and branches before downloading if you wish. If you want a folder in a branch
    other than master then replace trunk with **branches/branchname**.

    As of this writing, you can find the subversion URL for any repo on GitHub by
    clicking on "Subversion" at the bottom of the right sidebar. See GitHub's post
    on subversion partial checkouts for more info.

[Preface | Data Structure and Algorithm notes](http://algorithm.yuanbin.me/zh-hans/index.html#)

[500 Lines or Less](http://aosabook.org/en/500L/)

[aosabook/500lines: 500 Lines or Less](https://github.com/aosabook/500lines)

[The Architecture of Open Source Applications](http://www.aosabook.org/en/index.html)

[Coding 演示平台](http://docs.coding.io/)

:   从某种程度上说，coding.net 比 github.com 厚道得多。

[细说 CSS margin - Coding 博客](https://blog.coding.net/blog/css-margin)

[Jekyll迁移到Hexo建立个人博客 | Lippi-浮生志](http://www.ezlippi.com/blog/2016/02/jekyll-to-hexo.html)

:   > 个人博客以前由jekyll搭建，主要问题是目录、Rss、sitemap无法自动生成，根据DRY的
    > 原则在网上找了下答案，最终发现了用Hexo来搭建博客的方法，配置完之后一劳永逸，
    > 目录、Rss和sitemap都是自动生成，解决了我之前的困惑。

    TODO: 去看它的 rss 怎么生成的。

[IntroPy - Woodpecker Wiki for CPUG](http://wiki.woodpecker.org.cn/moin/IntroPy)

[top10-Py-idioms-wish-learned-earlier | #是也乎# | ZoomQuiet.io](http://blog.zoomquiet.io/top10-Py-idioms-wish-learned-earlier.html)

[Cpp-Primer/ch01 at master · Mooophy/Cpp-Primer](https://github.com/Mooophy/Cpp-Primer/tree/master/ch01)

[Facebook](https://github.com/facebook)

[CppCoreGuidelines/CppCoreGuidelines.md at master · isocpp/CppCoreGuidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md)

[Crosswalk - build world class hybrid apps](https://crosswalk-project.org/)

[Problem loading page](http://mapnik.org/)

[AGWA/git-crypt: Transparent file encryption in git](https://github.com/AGWA/git-crypt)

[glsltuto/shaders at master · ssloy/glsltuto](https://github.com/ssloy/glsltuto/tree/master/shaders)

[FlatBuffers: Using the schema compiler](http://google.github.io/flatbuffers/flatbuffers_guide_using_schema_compiler.html)

[dvidelabs/flatcc: FlatBuffers Compiler and Library in C for C](https://github.com/dvidelabs/flatcc)

[Mooophy (Yue Wang)](https://github.com/Mooophy)

[Cpp-Primer/ch01 at master · Mooophy/Cpp-Primer](https://github.com/Mooophy/Cpp-Primer/tree/master/ch01)

[FlatBuffers: Benchmarks](http://google.github.io/flatbuffers/flatbuffers_benchmarks.html)

[ocornut/imgui: Bloat-free Immediate Mode Graphical User interface for C++ with minimal dependencies](https://github.com/ocornut/imgui)

[zealdocs/zeal: Offline documentation browser inspired by Dash](https://github.com/zealdocs/zeal)

:   Document tool: dash, zeal

[字符串匹配的KMP算法 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2013/05/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm.html)

:   ![](http://image.beekka.com/blog/201305/bg2013050109.png)

    移动位数 = 已匹配的字符数 - 对应的部分匹配值

    ![](http://image.beekka.com/blog/201305/bg2013050110.png)

    ![](http://image.beekka.com/blog/201305/bg2013050114.png)

    ![](http://whudoc.qiniudn.com/2016/kmp-table.png)

    "部分匹配"的实质是，有时候，字符串头部和尾部会有重复。比如，"ABCDAB"之中有
    两个"AB"，那么它的"部分匹配值"就是2（"AB"的长度）。搜索词移动的时候，第一个
    "AB"向后移动4位（字符串长度-部分匹配值），就可以来到第二个"AB"的位置。

    [字符串匹配的Boyer-Moore算法 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2013/05/boyer-moore_string_search_algorithm.html)

[SICP终于看完了，有一些经验想分享出来 - 学习资料 - CoCode](http://cocode.cc/t/sicp/3397)

[c++ - Linking different libraries for Debug and Release builds in Cmake on windows? - Stack Overflow](http://stackoverflow.com/questions/2209929/linking-different-libraries-for-debug-and-release-builds-in-cmake-on-windows)

:   You should not test CMAKE_BUILD_TYPE in the CMake file, it is ignored by
    multi configuration generators (like VS). If you run cmake with
    `CMAKE_BUILD_TYPE=Debug` but Release in VS the code in
    `if(CMAKE_BUILD_TYPE MATCHES Release)` is simply ineffective.

[OSG+VS2010+win7环境搭建 - 缑城浪子 - 博客园](http://www.cnblogs.com/eaglezhao/archive/2011/07/12/eaglezhao.html)

[The Perltidy Home Page](http://perltidy.sourceforge.net/)

[C-C++ Beautifier HOW-TO](http://www.faqs.org/docs/Linux-HOWTO/C-C++Beautifier-HOWTO.html)

[ClangFormat — Clang 3.9 documentation](http://clang.llvm.org/docs/ClangFormat.html)

[Artistic Style - Index](http://astyle.sourceforge.net/)

[Chiel92/vim-autoformat: Provide easy code formatting in Vim by integrating existing code formatters.](https://github.com/Chiel92/vim-autoformat)

[jquery - Auto-size dynamic text to fill fixed size container - Stack Overflow](http://stackoverflow.com/questions/687998/auto-size-dynamic-text-to-fill-fixed-size-container)

[Reference Counted Objects in OSG and Producer](http://www.andesengineering.com/OSG_ProducerArticles/RefPointers/RefPointers.html)

[qt+osg+vs2008中(msvcr90.dll) 处最可能的异常: 0xC0000005的问题解决 - xhcumt的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/xhcumt/article/details/4779040)

:   同样在官方论坛上找到答案:是Project属性配置引起的,

      - `Project Properties`->
      - `Configuration Properties`->
      - `C/C++->Code Generation`->
      - `Runtime Library`,
      - 把 `Multi-threaded Debug DLL (/MDd)` 改为 `Multi-threaded DLL (/MD)`,
        而`/MDd` 是 Debug 的默认选项. 不过文中提到的有关”_DEBUG”改为”NDEBUG”倒
        不必.

[File and Disk Utilities: Sysinternals Center](https://technet.microsoft.com/en-us/sysinternals/bb545046)

[Windows Sysinternals: Documentation, downloads and additional resources](https://technet.microsoft.com/en-us/sysinternals)

[Learn how to use Microsoft Windows 7 | Easier faster computing](http://vlaurie.com/windows-7-tips/)

[How to Copy and Paste in the Windows Command Prompt | Gizmo's Freeware](http://www.techsupportalert.com/content/how-copy-and-paste-windows-command-prompt.htm)

:   - CMD, click the icon, in config, turn on quick edit mode.
    - CMD, Alt-Space, E(dit), P(aste)

    A few links for peoples frequently using the command prompt or a shell:

    * ConEmu http://code.google.com/p/conemu-maximus5/

    A console emulator with tabs, it works fine with everything listed below. (It allows line/block selection for copying.)

    * CygWin http://cygwin.com/

    This is a HUGE collection of gnu/linux tools for windows, from bash to zsh, perl, gcc, mc... If you're a linux guy, you'll feel at home with this.

    * TCC/LE http://jpsoft.com/

    It's 4DOS, an enhanced cmd.exe, a must have. (Like NDOS)

    * FAR Manager http://farmanager.com/

    Norton commander clone.

    * SysInternals Suite http://sysinternals.com/

    Various command-line and gui tools: process, junctions, etc.

    * NirCMD http://www.nirsoft.net/utils/nircmd.html

    Small utility that allows you to do some useful windows tasks.

    * CLink https://code.google.com/p/clink/

    Better completion for cmd.exe

    I hope someone might find this helpful.

[愤怒的小怪兽 - 廖雪峰的官方网站](http://www.liaoxuefeng.com/article/001430724785251f1f92d9d5f524530b5c5b8c0f42f1b1b000)

[Clojure 驱动的 Web 开发](http://www.ibm.com/developerworks/cn/java/j-io-ClojureWeb/)

[moment/momentjs.com: The website for momentjs](https://github.com/moment/momentjs.com)

:   效果很好。

    refs and see also

      - [Moment.js 中文网](http://momentjs.cn/)

[vim - How do I open the directory of the current open file? - Super User](http://superuser.com/questions/31677/how-do-i-open-the-directory-of-the-current-open-file)

:   `:Sex .`{.vim}

    This is good but the command is so hard to remember.

    其实用 `:E` 就可以啊……

[How to switch to the directory listing from file view in vim? - Unix & Linux Stack Exchange](http://unix.stackexchange.com/questions/52179/how-to-switch-to-the-directory-listing-from-file-view-in-vim)

[Things I Wish I Learned In Engineering School](http://blog.kowalczyk.info/articles/engineering-school.html)

[【新智元—世纪对决】AlphaGo 惊天逆转李世石 ，关键棋局解析](http://mp.weixin.qq.com/s?__biz=MzI3MTA0MTk1MA==&mid=402888309&idx=1&sn=fe4a7f99fde22f5f4c8bc056045a55d6&scene=23&srcid=0309shravqZGaVQnxy1edb98#rd) -<

:   Go (traditional Chinese: 圍棋; simplified Chinese: 围棋; pinyin: About this
    sound wéiqí; Japanese: 囲碁; rōmaji: igo; literally: "encircling game") is
    an abstract board game for two players, in which the aim is to surround
    more territory than the opponent.

    The game originated in ancient China more than 2,500 years ago, and is one of
    the oldest board games played today. It was considered one of the four
    essential arts of a cultured Chinese scholar in antiquity. The earliest written
    reference to the game is generally recognized as the historical annal Zuo Zhuan

    There is much strategy involved in the game, and the number of possible games
    is vast (10761 compared, for example, to the estimated 10120 possible in
    chess), displaying its complexity despite relatively simple rules.

    refs and see also

      - [Go (game) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Go_(game))
      - [The Chinese Rules of Go](https://www.cs.cmu.edu/~wjh/go/rules/Chinese.html)

[javascript - Copy to clipboard without Flash - Stack Overflow](http://stackoverflow.com/questions/6355300/copy-to-clipboard-without-flash)

[Filesystem | Wikipedia](http://en.wikipedia.org/wiki/File_system)

[Filename Extension](http://en.wikipedia.org/wiki/Filename_extension)

[日常生活中有哪些十分钟就能学会但是终生受用的技能？ - 知乎](http://www.zhihu.com/question/20894671#answer-1741917) -<

:   refs and see also

      - [你最推荐的 Chrome 扩展有哪些？ - 知乎](http://www.zhihu.com/question/19594682)
      - [Unix 传奇 (上篇) | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/2322.html)
      - [Unix 传奇 (下篇) | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/2324.html)
      - [黑客的价值观 | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/2439.html)
      - [计算机编程简史图 | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/2724.html)
      - [李开复每天早上 4 点就起床，是怎么办到的？开复老师如何能很好地安排好自己的时间？ - 知乎](http://www.zhihu.com/question/19563168/answer/12257911)
      - [财经郎眼 20140603 喜忧参半的 4G 时代 - 视频在线观看 - 财经郎眼 - 财经 - 爱奇艺](http://www.iqiyi.com/v_19rrhzlnyw.html)
      - [聊聊我在 Google 无人车研究组的那些事 | 36 氪](http://www.36kr.com/p/212843.html)
      - [如何应对一群 13 - 18 岁的街头小混混的挑衅？ - 知乎](http://www.zhihu.com/question/23585788)
      - [讲一讲汉尼拔·莱克特博士。 (汉尼拔 影评)](http://movie.douban.com/review/1038150/)
      - [Why Is Rho Used for Density? | eHow](http://www.ehow.com/how-does_5407539_rho-used-density_.html)
      - [求知成瘾，却无作品 | 简书](http://www.jianshu.com/p/Daxrnq)
      - [如何成功地早起 | 简书](http://www.jianshu.com/p/Ns6asx)
      - [三分钟学会希腊语 | 简书](http://www.jianshu.com/p/c9a88c6c3d88)
      - [哥们儿，你的所有病都是一种病 | 简书](http://www.jianshu.com/p/302d25da305e)
      - [嘿，那个上了三天班就辞职的年轻人，我想和你谈谈！ | 简书](http://www.jianshu.com/p/6ff3d4113be6)
      - [万苦皆因怂 | 简书](http://www.jianshu.com/p/e7120cb963a0)
      - [如何坚持每天写一千字 | 简书](http://www.jianshu.com/p/53eea6022d58)
      - [你以为你在合群，其实你只在浪费青春 | 简书](http://www.jianshu.com/p/23dd4a2a8105)
      - [Javascript 的前后端统一是个"笑话"吗? | 简书](http://www.jianshu.com/p/5f6637bf15fd)
      - [在你被人认识之前 | 简书](http://www.jianshu.com/p/0a9851d0e98a)
      - [别把你最好的东西给我 | 简书](http://www.jianshu.com/p/479171e3b209)
      - [诚信逆向淘汰的社会 | 简书](http://www.jianshu.com/p/ae0a82de6875)
      - [一份关于如何改变人生的指南 | 简书](http://www.jianshu.com/p/XzZ6LW)
      - [记一次嫖娼 | 简书](http://www.jianshu.com/p/6f66f03510a1)
      - [那些年，坐我们前排的土豪和学霸 | 简书](http://www.jianshu.com/p/JqGqYq)
      - [从那道并不变态的家庭作业说起，兼答邓飞 | 简书](http://www.jianshu.com/p/babea9cc6284)
      - [欲望少女养成记 | 简书](http://www.jianshu.com/p/1657f91a8b47)
      - [你不是书读得少，你是经典读得少 | 简书](http://www.jianshu.com/p/53d918a3fe52)
      - [你会因文字而爱上一个人吗 | 简书](http://www.jianshu.com/p/aaf7d0e127ab)
      - [不着调的海小姐 | 简书](http://www.jianshu.com/p/3a3a744f98ad)
      - [两条写作建议 | 简书](http://www.jianshu.com/p/f9796a5a31b3)
      - [别跟这个世界讲道理 | 简书](http://www.jianshu.com/p/jCCPzz)
      - [中国式道德审判 | 简书](http://www.jianshu.com/p/351b2776e9c8)
      - [信息时代如何使用你的大脑？ | 简书](http://www.jianshu.com/p/9211b74a3662)
      - [安静的力量 | 简书](http://www.jianshu.com/p/ab844f4c0d46)
      - [那些年，我麻烦过的人 | 简书](http://www.jianshu.com/p/d73853f88721)
      - [一个人看电影 | 简书](http://www.jianshu.com/p/87ab211011a4)
      - [如果让我再读一次本科 | 简书](http://www.jianshu.com/p/1afb865ef4bd)
      - [“文艺青年”与“装逼犯” | 简书](http://www.jianshu.com/p/06fe9c7cd38e)
      - [为什么我们无法深入交谈 | 简书](http://www.jianshu.com/p/37f7b7c88729)
      - [我的儿子不可能平庸 - 简书](http://www.jianshu.com/p/c8a1e1482ec4?utm_campaign=newsletter&utm_medium=note-236554&utm_source=weekly-16)

[Help:Displaying a formula - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Help:Displaying_a_formula) -<

:   refs and see also

      - [List of mathematical symbols - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/List_of_mathematical_symbols)
      - [Mathematical operators and symbols in Unicode - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Mathematical_operators_and_symbols_in_Unicode)
      - [Help:Displaying a formula - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Help:Displaying_a_formula)
      - [Full stop - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Full_stop)
      - [Quotation Marks: Where Do the Periods and Commas Go--And Why?](http://grammartips.homestead.com/inside.html)
      - [Quotation mark - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Quotation_mark)
      - [Sentence spacing - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Sentence_spacing)
      - [Decimal mark - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Decimal_mark)
      - [Ampersand - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Ampersand)
      - [Appropriate use of the ampersand | Typophile](http://typophile.com/node/12426)
      - [International System of Units - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/International_System_of_Units)
      - [Citation | Wikipedia](http://en.wikipedia.org/wiki/Citation)
      - [Citation Standards | Citation Working Group](http://dublincore.org/groups/citation/citstds.html)
      - [CSL - Citation Style Language](http://citationstyles.org/downloads/primer.html)
      - [CSL - Styles | GitHub](https://github.com/citation-style-language/styles)
      - [Pandoc Package - CiteProc](http://hackage.haskell.org/package/pandoc-citeproc)

[DARPA 开始研发新一代的垂直起降飞机](http://cn.engadget.com/2016/03/04/darpa-unveils-its-next-vtol-aircraft-concept/?ncid=rss_truncated)

:   天网的背景音乐……

[Dwarf Fortress - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Dwarf_Fortress)

[Stabyourself.net - Mari0](http://stabyourself.net/mari0/#download)

[Roguelike - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Roguelike)

[Metal Slug - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Metal_Slug)

:   ![](https://en.wikipedia.org/wiki/Metal_Slug#/media/File:Metal_Slug_%28cover%29.jpg)

    Super Vehicle-001: Metal Slug (メタルスラッグ Metaru Suraggu), more
    commonly known as simply Metal Slug, is a **run and gun video game**
    developed and originally released by Nazca Corporation and later
    published by SNK. It was originally released in 1996 for the Neo Geo
    MVS arcade platform. The game is widely known for its sense of humor,
    fluid hand-drawn animation, and fast paced two-player action. It is the
    first title in the Metal Slug series. It has been ported to the Neo Geo
    AES, Neo Geo CD, Sega Saturn, PlayStation, Virtual Console, PlayStation
    Network, iOS, Android and Neo Geo X, and to the Wii, PlayStation
    Portable and PlayStation 2 (as part of the Metal Slug Anthology).

[Action game - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Action_game)

[Shoot 'em up - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Shoot_%27em_up#Run_and_gun)

[NetHackWiki, the NetHack wiki](https://nethackwiki.com/wiki/Main_Page)

[Metal Slug X (Neo Geo) - The Cutting Room Floor](https://tcrf.net/Metal_Slug_X_(Neo_Geo)#Debug_Mode)

[IBM Research | | Ponder this](https://www.research.ibm.com/haifa/ponderthis/index.shtml)

[Archive — IPSC](http://ipsc.ksp.sk/archive)

[alt.org - Public NetHack Server](https://alt.org/nethack/)

[twitter/typeahead.js: typeahead.js is a fast and fully-featured autocomplete library](https://github.com/twitter/typeahead.js)

:   TODO: 替换掉 autocomplete

[崔添翼 § 翼若垂天之云 › 谁能看出这是个文科生？——关于matrix67](http://cuitianyi.com/blog/%e8%b0%81%e8%83%bd%e7%9c%8b%e5%87%ba%e8%bf%99%e6%98%af%e4%b8%aa%e6%96%87%e7%a7%91%e7%94%9f%ef%bc%9f%e2%80%94%e2%80%94%e5%85%b3%e4%ba%8ematrix67/)

[把梦想“码”进现实 ——访计算机学院2013届校友崔添翼-学院动态-浙江大学计算机科学与技术学院中文站](http://www.cs.zju.edu.cn/chinese/redir.php?catalog_id=101754&object_id=133940)

[值得推荐的C/C++框架和库 - Lippi-浮生志](http://coolshell.info/blog/2014/12/c-open-project.html)

[Qt 学习之路 2 | DevBean's World - Part 2](http://www.devbean.net/category/qt-study-road-2/page/2/)

[解读 Rob Pike 编写的正则表达式程序 - 开源中国社区](http://www.oschina.net/translate/regular-expression-matcher-code-by-rob-pike?cmp)

[Tutorials - perldoc.perl.org](http://perldoc.perl.org/index-tutorials.html)

[perlreftut - perldoc.perl.org](http://perldoc.perl.org/perlreftut.html)

[你所读的计算机科学方向，有哪些不错的讲义（Notes）？ - 书籍推荐 - 知乎](http://www.zhihu.com/question/38300204)

[6.858 / Fall 2014 / Schedule](http://css.csail.mit.edu/6.858/2014/schedule.html)

[CSCI-UA.0202: Operating Systems (Undergrad)](http://www.cs.nyu.edu/~mwalfish/classes/15sp/index.html)

[cirosantilli/cpp-cheat](https://github.com/cirosantilli/cpp-cheat)

[cirosantilli/linux-cheat](https://github.com/cirosantilli/linux-cheat)

[java - Why is processing a sorted array faster than an unsorted array? - Stack Overflow](http://stackoverflow.com/questions/11227809/why-is-processing-a-sorted-array-faster-than-an-unsorted-array)

[VIM: index](http://man.lupaworld.com/content/manage/vi/doc/)

[shell - How to run a series of vim commands from command prompt - Stack Overflow](http://stackoverflow.com/questions/23235112/how-to-run-a-series-of-vim-commands-from-command-prompt)

:   ```bash
    for %a in (A,B,C,D) do vim -c ":g/^\s*$/d" -c "<another command>" %a.txt
    ```

    `:help bufdo`

[Vim Regular Expressions 101](http://www.vimregex.com/)

:   ```
    \h, head of word character (a,b,c...z,A,B,C...Z and _)
    \H, non-head of word character
                                    \s, whitespace,
                                    \S, non-whitespace
    \d, digit
    \D, non-digit
                                    \x, hex digit
                                    \X, non-hex digit
    \o, octal digit
    \O, non-octal digit
                                    \<, word boundary
                                    \>, word boundary
    \p, printable character
    \P, like \p, but excluding digits
                                    \w, word character
                                    \W, non-word character
    \a, alphabetic character
    \A, non-alphabetic character
                                    \l, lowercase character
                                    \L, non-lowercase character
    \u, uppercase character
    \U, non-uppercase character

    *, \+, \=, matches 0 or 1 more of the preceding characters...
    \{n,m}, \{n}, \{,m}, \{n,}

    \{-}, nongreedy, ".\{-}" will match the first quoted text:

    \{-}, matches 0 or more of the preceding atom, as few as possible
    \{-n,m}, matches 1 or more of the preceding characters...
    \{-n,}, matches at lease or more of the preceding characters...
    \{-,m}, matches 1 or more of the preceding characters...

    :s:.\{-}:_:g

    n and m are decimal numbers between
    _n_ _a_n_d_ _m_ _a_r_e_ _d_e_c_i_m_a_l_ _n_u_m_b_e_r_s_ _b_e_t_w_e_e_n_
    ```

    TODO

    -   4.4 Character ranges
    -   4.5 Grouping and Backreferences
    -   4.6 Alternations



[Search patterns - Vim Tips Wiki - Wikia](http://vim.wikia.com/wiki/Search_patterns)

[Org Mode - Organize Your Life In Plain Text!](http://doc.norang.ca/org-mode.html)

[Org-mode Emacs 下的瑞士軍刀](http://coldnew.github.io/COSCUP2013_org-mode/slide.html#1)

[NARKOZ/hacker-scripts](https://github.com/NARKOZ/hacker-scripts)

[Lessons on development of 64-bit C/C++ applications](http://www.viva64.com/en/l/)

[GEGeek Tech Toolkit](http://www.gegeek.com/documents/85BB69B2F05486B9332CEA18B8D6E4BE690ADA38.html)

[深入理解学习Git工作流（git-workflow-tutorial） - SegmentFault](http://segmentfault.com/a/1190000002918123)

[www.computervisionblog.com/2015/06/deep-down-rabbit-hole-cvpr-2015-and.html](http://www.computervisionblog.com/2015/06/deep-down-rabbit-hole-cvpr-2015-and.html)

[18-645: How to Write Fast Code](http://users.ece.cmu.edu/~pueschel/teaching/18-645-CMU-spring08/course.html)

[Futures for C++11 at Facebook](https://code.facebook.com/posts/1661982097368498)

[我的算法学习之路 - Lucida](http://zh.lucida.me/blog/on-learning-algorithms/)

[ASCIIFlow Infinity](http://whudoc.qiniudn.com/asciiflow/index.html)

:   我把 AsciiFlow 挪过来了，可以在

    * <http://whudoc.qiniudn.com/asciiart.html>
    * <http://whudoc.qiniudn.com/asciiflow>

    使用。或者下载离线 <http://whudoc.qiniudn.com/asciiflow.7z>

    TODO: 给它加一套键盘快捷键。

[比尔华纳博士《我们因何而恐惧： 一个一千四百年的秘密》-纪录片视频-爱奇艺](http://www.iqiyi.com/w_19rrylp8kl.html)

:   说 islam，如此地政治不正确哈哈哈。

    其实历史永远是血腥的。

[最高效的休息方式](http://www.douban.com/note/514216150/)

[漫谈数据挖掘从入门到进阶](http://www.douban.com/note/283530204/)

[八卦高德纳 (评论: 计算机程序设计艺术（第1卷）)](http://book.douban.com/review/5384627/)

[【分享】来自于考拉小巫的各种给力文章大集合](http://www.douban.com/group/topic/15299075/)

[洗脑三部曲（一） (评论: 暗时间)](http://book.douban.com/review/5012104/)

[Digital rights management - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Digital_rights_management)

:   Digital rights management (DRM) schemes are various access control
    technologies that are used to restrict usage of proprietary hardware
    and copyrighted works. DRM technologies try to control the use,
    modification, and distribution of copyrighted works (such as software
    and multimedia content), as well as systems within devices that enforce
    these policies.

[Search patterns - Vim Tips Wiki - Wikia](http://vim.wikia.com/wiki/Search_patterns)

[CSS: em, px, pt, cm, in…](https://www.w3.org/Style/Examples/007/units)

[北美求职记_QAMichaelPeng_新浪博客](http://blog.sina.com.cn/s/blog_6740daa70101771h.html)

[为什么 Microsoft 不与“FLAG”并称呢？](http://www.zhihu.com/question/31979481)

:   再回到微软的问题：我之前很早的时候，拿了一个上海的微软（STC，在闵行的紫
    竹园区）的 offer，当时薪水13.1w，股票125股；后来打听了一下Seattle的微软
    Package，股票多点，也没翻10倍，所以基本上对FLAG来说就是杯水车薪。而且现
    在一般大牛的技术人员或者牛逼毕业生，都是只看股票不看薪水的；薪水就是个
    零花钱，买买车付付房租还行，根本没法发财。所以一般只看裸薪是多少（而没
    有股票意识）的人，都是没见过世面，也没体会过资本市场的造富速度的人。

[git status - list last modified date - Stack Overflow](http://stackoverflow.com/questions/14141344/git-status-list-last-modified-date)

:   ```bash
    git status -s | \
    while read mode file; do \
        echo $mode $(date --reference=$file +"%Y-%m-%d %H:%M:%S") $file; \
    done
    ```

[CSS image hover effects , Image hover effects , hover Opacity , hover Overlay and Hover change picture](http://www.corelangs.com/css/box/hover.html)

[W3School在线测试工具 V2](http://www.w3school.com.cn/tiy/t.asp?f=css3_border-image_button)
