这是我的 Notes/Wiki。在线查看：http://tangzx.qiniudn.com/notes

                                                          +-------------------+
                                                          |                   |
                                                          | How To Contribute |
                                                          |                   |
                                                          +-------------------+

请以处女座的标准排版自己的文字。至少遵循下面的要求：

-   关于中英文：请手工加上中英文间的空格。

-   关于格式：

    1.  Markdown 格式书写，请遵循如下准则：

        加粗用**加粗**，斜体用*斜体*，加粗并斜体用***加粗并斜体***。

        上标：x^2^ + y^2^ = z^2^

        下标：H~2~O

        >   这是引用。

        |   这是诗句（自然换行）。

        [链接标题](链接路径)

        ![图片 caption](图片路径)

        ![还可以加上一点 CSS](图片路径){align=right}

        列表的使用如下：

            -   无序列表 item 1
            -   无序列表 item 2

        下面则是有序列表：

            1.  one
            2.  two

        或者这样也是可以的：

            #.  still one
            #.  still two

        列表可以嵌套：

            1.  one
                -   11
                -   12
            2.  two

        当然，我倾向于更易于辨识的：

            1.  one

                -   11
                -   12

            2.  two

        缩进永远用 4 个空格，所以不要这样写：

            - 糟糕的无序列表 item 1
            - 糟糕的无序列表 item 2

        更多格式说明见 pandoc 文档：https://github.com/jgm/pandoc/blob/master/MANUAL.txt

        注：我几乎完全同意 jgm 的排版细节，除了：

        1.  H1~H6 两边都括起来：我用 `# header' 而不用 `# header #'
        2.  两个空格代表句子结束：我用 `Hello. Where are you?' 而不用 `Hello.  Where are you?'
        3.  用缩进表示代码块：我用

                下面是一点 C++ 代码：

                ```cpp
                std::cout << "explicit is better than implicit.\n";
                ```

            而不用

                下面是一点 C++ 代码：

                    std::cout << "explicit is better than implicit.\n";

    2.  内容折叠

        内容折叠是一种信息隐藏（褒义）手段。不能折叠内容会导致某种程度的【信息过度接收 panic】，
        它损害了一个好的笔记原有的清晰的层次结构。所以本笔记提供内容折叠功能。

        在 Emacs org-mode 格式中，它被称为 drawer。

        内容折叠主要用于 <dt><dd> 组合中。只需在 Markdown 源码 <dt> 行的最末尾添加“-<”或“+<”。
        前者初始为关闭，后者为打开。两种 drawer 都可以 toggle 其中的内容。
        例子如下：

            这个抽屉默认折叠起来 -<

            :   这是抽屉里面的内容。

                内容。

                内容……

                嵌套一个默认打开的折叠抽屉 +<

                :   这是抽屉里面的内容。

                    内容。

                    内容……

                    内层完。

                外层完。

            这不是个“抽屉”，因为不具备 toggle “内容”的功能。

            :   内容。

        注意：Pandoc 要求源码中 <dt> 块只能是单行。

    3.  引入其它文件

        在文本中使用 `@include <-=path/to/file='

        “@”前面的符号会 prepend 到 included 文件的每一行。
        “-”和“=”之间可以插入额外的字符。

        示例：

        +-----------------------------------------------+
        |                                               |
        |   -   include code                            |
        |                                               |
        |       :   ```cpp                              |
        |           @include <-=2016/democode.cpp=      |
        |           ```                                 |
        |                                               |
        |   -   include excerpts                        |
        |                                               |
        |       @include <-|   =2016/poem.txt=          |
        |                                               |
        +-----------------------------------------------+

        如果 2016/democode.cpp（目录从 repo 根目录起）内容如下：

        +------------------------2016/democode.cpp------+
        |                                               |
        |   #include <stdio.h>                          |
        |                                               |
        |   int main() {                                |
        |       printf( "hello world.\n" );             |
        |   }                                           |
        |                                               |
        +-----------------------------------------------+

        如果 2016/poem.txt 内容如下：

        +------------------------2016/poem.txt----------+
        |                                               |
        |   Like tears                                  |
        |   in the rain.                                |
        |                                               |
        +-----------------------------------------------+

        include 后的效果如下：

        +-----------------------------------------------+
        |                                               |
        |   -   include code                            |
        |                                               |
        |       :   ```cpp                              |
        |           #include <stdio.h>                  |
        |                                               |
        |           int main() {                        |
        |               printf( "hello world.\n" );     |
        |           }                                   |
        |           ```                                 |
        |                                               |
        |   -   include excerpts                        |
        |                                               |
        |       |   Like tears                          |
        |       |   in the rain.                        |
        |                                               |
        +-----------------------------------------------+

        引入语法支持嵌套，且能正确处理“环”的问题。
