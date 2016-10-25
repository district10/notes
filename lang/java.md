---
title: Learning Java
...

# Learning Java

>   从 C++ 走向 Java，值得一看的书：[Core Java (豆瓣)](https://book.douban.com/subject/1441161/)。

## Java 简介

What's Java -<

:   Java is a general-purpose computer programming language that is concurrent,
    class-based, object-oriented, and specifically designed to have as few
    implementation dependencies as possible. It is intended to let application
    developers **"write once, run anywhere" (WORA)**, meaning that compiled Java code
    can run on all platforms that support Java without the need for recompilation.
    Java applications are typically compiled to bytecode that can run on any Java
    virtual machine (JVM) regardless of computer architecture. As of 2016, Java is
    one of the most popular programming languages in use, particularly for
    client-server web applications, with a reported 9 million developers. Java was
    originally developed by James Gosling at Sun Microsystems (which has since been
    acquired by Oracle Corporation) and released in 1995 as a core component of Sun
    Microsystems' Java platform. The language derives much of its syntax from C and
    C++, but it has fewer low-level facilities than either of them.

    ![Duke, the Java mascot `['mæskɑt]`](https://upload.wikimedia.org/wikipedia/commons/thumb/4/40/Wave.svg/255px-Wave.svg.png)

Java 的流行 -<

:   -   5 million students study java
    -   10 million Java developers worldwide
    -   15 billion devices run Java
    -   \#1 platform for development in the cloud

Principles -<

:   There were five primary goals in the creation of the Java language:

    -   It must be "simple, object-oriented, and familiar".
    -   It must be "robust and secure".
    -   It must be "architecture-neutral and portable".
    -   It must execute with "high performance".
    -   It must be "interpreted, threaded, and dynamic".

版本 -<

:   -   JDK 1.0 (January 21, 1996)
    -   JDK 1.1 (February 19, 1997)
    -   J2SE 1.2 (December 8, 1998)
    -   J2SE 1.3 (May 8, 2000)
    -   J2SE 1.4 (February 6, 2002)
    -   J2SE 5.0 (September 30, 2004)
    -   Java SE 6 (December 11, 2006)
    -   Java SE 7 (July 28, 2011)
    -   Java SE 8 (March 18, 2014)

Java Platform -<

:   One design goal of Java is portability, which means that programs written
    for the Java platform must run similarly on any combination of hardware and
    operating system with adequate runtime support. This is achieved by
    compiling the Java language code to an intermediate representation called
    **Java bytecode**, instead of directly to architecture-specific machine code.
    Java bytecode instructions are analogous to machine code, but they are
    intended to be executed by a virtual machine (VM) written specifically for
    the host hardware.  End users commonly use a Java Runtime Environment (JRE)
    installed on their own machine for standalone Java applications, or in a
    web browser for Java applets.

    **Standard libraries provide a generic way to access 【host-specific】
    features such as graphics, threading, and networking.**

    The use of universal bytecode makes porting simple. However, the overhead
    of interpreting bytecode into machine instructions makes interpreted
    programs almost always run more slowly than native executables. However,
    just-in-time (JIT) compilers that compile bytecodes to machine code during
    runtime were introduced from an early stage. Java itself is
    platform-independent, and is adapted to the particular platform it is to
    run on by a Java virtual machine for it, which translates the Java bytecode
    into the platform's machine language.

    JVM

    -   Loading
    -   Linking
    -   Initializing

    refs and see also

    -   [JVM Minimal Survival Guide – Hadi Hariri](http://hadihariri.com/2013/12/29/jvm-minimal-survival-guide-for-the-dotnet-developer/){.hearts}

Javadoc -<

:   Javadoc (originally cased as JavaDoc) is a documentation generator
    created by Sun Microsystems for the Java language (now owned by Oracle
    Corporation) for generating API documentation in HTML format from Java
    source code. The HTML format is used to add the convenience of being able
    to hyperlink related documents together.

    The "doc comments" format used by Javadoc is the de facto industry standard
    for documenting Java classes. Some IDEs, such as Netbeans and Eclipse,
    automatically generate Javadoc HTML. Many file editors assist the user in
    producing Javadoc source and use the Javadoc info as internal references
    for the programmer.

    Javadoc also provides an API for creating doclets and taglets, which allows
    you to analyze the structure of a Java application. This is how JDiff can
    generate reports of what changed between two versions of an API.

    `/** ... */`

    ```java
    /**
     * Short one line description.                           (1)
     * <p>
     * Longer description. If there were any, it would be    (2)
     * here.
     * <p>
     * And even more explanations to follow in consecutive
     * paragraphs separated by HTML paragraph breaks.
     *
     * @param  variable Description text text text.          (3)
     * @return Description text text text.
     */
    public int methodName (...) {
        // method body with a return statement
    }
    ```

    ```java
    /**
     * Description of the variable here.
     */
    private int debug = 0;

    // 鉴于 javadoc 都是一个变量一个变量生成文档的，下面这样就很不好：
    /**
     * The horizontal and vertical distances of point (x,y)
     */
    public int x, y;      // AVOID

    // 虽然累一点，但建议这么写：
    /**
     * The horizontal distances of point.
     */
    public int x;

    /**
     * The vertical distances of point.
     */
    public int y;
    ```

    ```java
    /**
     * Validates a chess move.
     *
     * Use {@link #doMove(int theFromFile, int theFromRank, int theToFile, int theToRank)} to move a piece.
     *
     * @param theFromFile file from which a piece is being moved
     * @param theFromRank rank from which a piece is being moved
     * @param theToFile   file to which a piece is being moved
     * @param theToRank   rank to which a piece is being moved
     * @return            true if the move is valid, otherwise false
     */
    boolean isValidMove(int theFromFile, int theFromRank, int theToFile, int theToRank) {
        // ...body
    }

    /**
     * Moves a chess piece.
     *
     * @see java.math.RoundingMode
     */
    void doMove(int theFromFile, int theFromRank, int theToFile, int theToRank)  {
        // ...body
    }
    ```

    ```bash
    $ javadoc
    用法: javadoc [options] [packagenames] [sourcefiles] [@files]
      -overview <file>                 从 HTML 文件读取概览文档
      -public                          仅显示 public 类和成员
      -protected                       显示 protected/public 类和成员 (默认值)
      -package                         显示 package/protected/public 类和成员
      -private                         显示所有类和成员
      -help                            显示命令行选项并退出
      -doclet <class>                  通过替代 doclet 生成输出
      -docletpath <path>               指定查找 doclet 类文件的位置
      -sourcepath <pathlist>           指定查找源文件的位置
      -classpath <pathlist>            指定查找用户类文件的位置
      -cp <pathlist>                   指定查找用户类文件的位置
      -exclude <pkglist>               指定要排除的程序包列表
      -subpackages <subpkglist>        指定要递归加载的子程序包
      -breakiterator                   计算带有 BreakIterator 的第一个语句
      -bootclasspath <pathlist>        覆盖由引导类加载器所加载的
                                       类文件的位置
      -source <release>                提供与指定发行版的源兼容性
      -extdirs <dirlist>               覆盖所安装扩展的位置
      -verbose                         输出有关 Javadoc 正在执行的操作的信息
      -locale <name>                   要使用的区域设置, 例如 en_US 或 en_US_WIN
      -encoding <name>                 源文件编码名称
      -quiet                           不显示状态消息
      -J<flag>                         直接将 <flag> 传递到运行时系统
      -X                               输出非标准选项的提要

    通过标准 doclet 提供:
      -d <directory>                   输出文件的目标目录
      -use                             创建类和程序包用法页面
      -version                         包含 @version 段
      -author                          包含 @author 段
      -docfilessubdirs                 递归复制文档文件子目录
      -splitindex                      将索引分为每个字母对应一个文件
      -windowtitle <text>              文档的浏览器窗口标题
      -doctitle <html-code>            包含概览页面的标题
      -header <html-code>              包含每个页面的页眉文本
      -footer <html-code>              包含每个页面的页脚文本
      -top    <html-code>              包含每个页面的顶部文本
      -bottom <html-code>              包含每个页面的底部文本
      -link <url>                      创建指向位于 <url> 的 javadoc 输出的链接
      -linkoffline <url> <url2>        利用位于 <url2> 的程序包列表链接至位于 <url> 的文档
      -excludedocfilessubdir <name1>:.. 排除具有给定名称的所有文档文件子目录。
      -group <name> <p1>:<p2>..        在概览页面中, 将指定的程序包分组
      -nocomment                       不生成说明和标记, 只生成声明。
      -nodeprecated                    不包含 @deprecated 信息
      -noqualifier <name1>:<name2>:... 输出中不包括指定限定符的列表。
      -nosince                         不包含 @since 信息
      -notimestamp                     不包含隐藏时间戳
      -nodeprecatedlist                不生成已过时的列表
      -notree                          不生成类分层结构
      -noindex                         不生成索引
      -nohelp                          不生成帮助链接
      -nonavbar                        不生成导航栏
      -serialwarn                      生成有关 @serial 标记的警告
      -tag <name>:<locations>:<header> 指定单个参数定制标记
      -taglet                          要注册的 Taglet 的全限定名称
      -tagletpath                      Taglet 的路径
      -charset <charset>               用于跨平台查看生成的文档的字符集。
      -helpfile <file>                 包含帮助链接所链接到的文件
      -linksource                      以 HTML 格式生成源文件
      -sourcetab <tab length>          指定源中每个制表符占据的空格数
      -keywords                        使程序包, 类和成员信息附带 HTML 元标记
      -stylesheetfile <path>           用于更改生成文档的样式的文件
      -docencoding <name>              指定输出的字符编码
    1 个错误
    ```

    生成文档：

    ```bash
    javadoc -private -d . -doctitle "一个 Javadoc 生成的文档" -header "Documents" JavadocDemo.java -encoding UTF-8 -charset UTF-8
    ```

Java SE -<

:   Java Platform, **Standard Edition** or Java SE is a widely used platform for
    development and deployment of portable code for desktop and server environments.
    Java SE uses the object-oriented Java programming language.
    It is part of the Java software-platform family.
    Java SE ** defines a wide range of general-purpose APIs** – such as Java APIs for the Java Class Library –
    and also includes the Java Language Specification and the Java
    Virtual Machine Specification. One of the most well-known[citation needed]
    implementations of Java SE is Oracle Corporation's Java Development Kit (JDK).

学习建议 -<

:   首先先搞懂【JavaSE】的部分，Swing 和 swt 部分就可以少看或不看，因为现在用的比较
    少。重点是看懂 Java 中的【面向对象、集合框架、JDBC、异常、IO、线程和网络编程】。
    JavaSE搞定后再学习 Servlet、JSP, 然后才是经典的 Struts2、Hibernate 和 Spring，
    学习框架时重点理解框架的运行原理，甚至可以尝试自己写个轻量级的框架。理解运行原
    理的最好方法就是阅读源代码，还是要感谢 Java 中的开源项目。这期间还要多找各种大
    小的项目去完成，不一定要大，但是要精致，功能要完整，这样可以练习所学知识，并且
    可以在做项目中发现自己的知识体系中不足的地方。

    -   了解 Java 的运行环境。搞清楚 path 和 classpath 是干什么的，怎么在命令行进行
        编译，执行。知道 IDE 的各个按钮后面真正发生了什么事情。
    -   掌握 Java 的语法。搞清楚包，接口，类，继承这些基本概念。掌握多态，overwrite，
        死背下 IO 的接口，包括 InputStream/OutputStream 和 Writer/Reader，死背下网
        络编程和 GUI 编程的接口，死背 JDBC 接口。这一步，推荐的书是《 Thinking in Java》。
    -   掌握多线程编程。弄明白 ConcurrencyHashMap 是怎么实现的，搞清楚 synchronized
        是怎么回事，弄明白为什么要有 Runnable 接口。在第二步和第三步掌握到 80% 的时
        候，你就可以考虑找工作了。
    -   在工作中体会一下设计模式。推荐《Java 与模式》这本书。看完里面的 Decorator，
        IO 接口你再也不会去死记硬背了。用的时候，根据 Adaptor 和 Decorator 的命名规
        则，自己临时推都推得出来。
    -   恶补数据结构。 搞清楚 LinkedList 和 ArrayList 的实现机制，了解它们的每一个
        接口的时间复杂度。同样的还有其他容器，Map 啊，Set 啊，都是一样的。栈，队列，
        二叉树，图贯穿编程始终，如果这一步你迈不过去，那就只能在低阶程序员里打转。
    -   如果有可能，最好对一些算法设计也有所涉猎。比如动态规则的思路，贪心算法，诸
        如 KMP 这种奇妙的算法等。这一步没有数据结构那么重要，学得好当然好，学不好也
        不用太挫败。

refs and see also

-   [Java (programming language) - Wikipedia](https://en.wikipedia.org/wiki/Java_%28programming_language%29)
-   [java.com: Java 与您](https://www.java.com/zh_CN/)
-   [我们如何学好 Java？ - 知乎](https://www.zhihu.com/question/19945685)
-   [Java - 话题精华 - 知乎](https://www.zhihu.com/topic/19561132/top-answers)
-   [Javadoc - Wikipedia](https://en.wikipedia.org/wiki/Javadoc)
-   [Java Platform, Standard Edition - Wikipedia](https://en.wikipedia.org/wiki/Java_Platform,_Standard_Edition)

### 环境配置

Java 环境的配置 -<

:   JRE

    :   Java Runtime Enviroment，是 Java 的运行环境，是面向 Java 程序的使用者，而不是开发者。

    JDK

    :   Java Development Kit. 简单的说 JDK 是面向开发人员使用的 SDK，它提供了
        Java 的开发环境和运行环境。SDK 是 Software Development Kit 一般指软件开发包，
        可以包括函数库、编译程序等。

    从官网下载 JDK：[适用于所有操作系统的 Java 下载](https://www.java.com/zh_CN/download/manual.jsp)，需要注册。
    这是我的备份：<http://whudoc.qiniudn.com/2016/java8.7z> (230 MB)。里面包括 JDK 的安装包，以及一些示例程序。

    安装后，把 `C:\Program Files\Java\jdk1.8.0_60\bin` 添加到 `%PATH%`。

Java 的 application launcher 和 javac 编译器 -<

:   java：The Java Intepreter -<

    :   ```bash
        $ where java
        C:\ProgramData\Oracle\Java\javapath\java.exe
        C:\Program Files\Java\jdk1.8.0_60\bin\java.exe

        $ java
        用法: java [-options] class [args...]
                   (执行类)
           或  java [-options] -jar jarfile [args...]
                   (执行 jar 文件)
        其中选项包括:
            -d32            使用 32 位数据模型 (如果可用)
            -d64            使用 64 位数据模型 (如果可用)
            -server         选择 "server" VM
                            默认 VM 是 server.

            -cp             <目录和 zip/jar 文件的类搜索路径>
            -classpath      <目录和 zip/jar 文件的类搜索路径>
                            用 ; 分隔的目录, JAR 档案
                            和 ZIP 档案列表, 用于搜索类文件。
            -D<名称>=<值>
                            设置系统属性
            -verbose:[class|gc|jni]
                            启用详细输出
            -version        输出产品版本并退出
            -version:<值>
                            警告: 此功能已过时, 将在
                            未来发行版中删除。
                            需要指定的版本才能运行
            -showversion    输出产品版本并继续
            -jre-restrict-search | -no-jre-restrict-search
                            警告: 此功能已过时, 将在
                            未来发行版中删除。
                            在版本搜索中包括/排除用户专用 JRE
            -? -help        输出此帮助消息
            -X              输出非标准选项的帮助
            -ea[:<packagename>...|:<classname>]
            -enableassertions[:<packagename>...|:<classname>]
                            按指定的粒度启用断言
            -da[:<packagename>...|:<classname>]
            -disableassertions[:<packagename>...|:<classname>]
                            禁用具有指定粒度的断言
            -esa | -enablesystemassertions
                            启用系统断言
            -dsa | -disablesystemassertions
                            禁用系统断言
            -agentlib:<libname>[=<选项>]
                            加载本机代理库 <libname>, 例如 -agentlib:hprof
                            另请参阅 -agentlib:jdwp=help 和 -agentlib:hprof=help
            -agentpath:<pathname>[=<选项>]
                            按完整路径名加载本机代理库
            -javaagent:<jarpath>[=<选项>]
                            加载 Java 编程语言代理, 请参阅 java.lang.instrument
            -splash:<imagepath>
                            使用指定的图像显示启动屏幕
                            有关详细信息, 请参阅 http://www.oracle.com/technetwork/java/javase/documentation/index.html。
        ```

        为了保证 Java 可以靠谱地运行，最好把 JDK 那个 Java 的路径放在前面。（或者像我一样，把 JRE 那个 `java` 重命名为 `_java`）
        再设置一下 %CLASSPATH%: `.;C:\Program Files\Java\jdk1.8.0_60\lib\tools.jar`。

        %JAVA_HOME%：`C:\Program Files\Java\jdk1.8.0_60`

        [albertlatacz/java-repl: Read Eval Print Loop for Java](https://github.com/albertlatacz/java-repl)，方便学习。

    javac：The Java Compiler -<

    :   ```bash
        $ where javac
        C:\Program Files\Java\jdk1.8.0_60\bin\javac.exe

        $ javac
        用法: javac <options> <source files>
        其中, 可能的选项包括:
          -g                            生成所有调试信息
          -g:none                       不生成任何调试信息
          -g:{lines,vars,source}        只生成某些调试信息
          -nowarn                       不生成任何警告
          -verbose                      输出有关编译器正在执行的操作的消息
          -deprecation                  输出使用已过时的 API 的源位置
          -classpath <路径>             指定查找用户类文件和注释处理程序的位置
          -cp <路径>                    指定查找用户类文件和注释处理程序的位置
          -sourcepath <路径>            指定查找输入源文件的位置
          -bootclasspath <路径>         覆盖引导类文件的位置
          -extdirs <目录>               覆盖所安装扩展的位置
          -endorseddirs <目录>          覆盖签名的标准路径的位置
          -proc:{none,only}             控制是否执行注释处理和/或编译。
          -processor <class1>[,<class2>,<class3>...] 要运行的注释处理程序的名称; 绕过默认的搜索进程
          -processorpath <路径>         指定查找注释处理程序的位置
          -parameters                   生成元数据以用于方法参数的反射
          -d <目录>                     指定放置生成的类文件的位置
          -s <目录>                     指定放置生成的源文件的位置
          -h <目录>                     指定放置生成的本机标头文件的位置
          -implicit:{none,class}        指定是否为隐式引用文件生成类文件
          -encoding <编码>              指定源文件使用的字符编码
          -source <发行版>              提供与指定发行版的源兼容性
          -target <发行版>              生成特定 VM 版本的类文件
          -profile <配置文件>           请确保使用的 API 在指定的配置文件中可用
          -version                      版本信息
          -help                         输出标准选项的提要
          -A关键字[=值]                 传递给注释处理程序的选项
          -X                            输出非标准选项的提要
          -J<标记>                      直接将 <标记> 传递给运行时系统
          -Werror                       出现警告时终止编译
          @<文件名>                     从文件读取选项和文件名
        ```

    javap：The Java Class Disassembler

Hello World -<

:   ```java
    public class HelloJava {
        public static void main(String[] args) {
            System.out.println("Hello World!");
        }
    }
    ```

    保存成 HelloJava.java（一定要和类名一样），然后编译运行：

    ```bash
    $ javac HelloJava.java              # 文件夹下是生成了 HelloJava.class
    $ java  HelloJava                   # 会调用 HelloJava.class 里的 main 函数，注意这里不是 java HelloJava.class
    Hello World!
    ```

解释一下 %PATH% 和 %CLASSPATH% -<

:   %PATH%

    :   PATH is an environment variable on Unix-like operating systems, DOS, OS/2,
        and Microsoft Windows, **specifying a set of directories where executable programs are located**.
        In general, each executing process or user session has its own PATH setting.

        系统变量，这个目录下的二进制，才可以直接在命令行下使用。

    %classpath%

    :   Classpath is a parameter in the Java Virtual Machine or the Java compiler
        that **specifies the location of user-defined classes and packages**. The
        parameter may be set either on the command-line, or through an environment
        variable.

        The virtual machine searches for and loads classes in this order:

        -   **bootstrap classes**: the classes that are fundamental to the Java
            Platform (comprising the public classes of the Java Class Library, and
            the private classes that are necessary for this library to be
            functional).
        -   **extension classes**: packages that are in the extension directory of
            the JRE or JDK, `jre/lib/ext/` user-defined packages and libraries

        By default 【only the packages of the JDK standard API and extension packages】
        are accessible without needing to set where to find them. The path for all
        user-defined packages and libraries must be set in the command-line (or in
        the Manifest associated with the Jar file containing the classes).

        ```bash
        # Windows
        java    -classpath      D:\myprogram                        org.mypackage.HelloWorld
        ```

        ```bash
        # Linux
        java    -cp             /home/user/myprogram                org.mypackage.HelloWorld
        ```

        where:

        -   `java`{.bash} is a **[java application launcher](https://en.wikipedia.org/wiki/Java_virtual_machine#Execution_environment)**,
            a type of sdkTool (A command-line tool, such as javac, javadoc, or apt)
        -   `-classpath D:\myprogram` sets the path to the packages used in the program (on Linux, `-cp /home/user/myprogram`) and
        -   org.mypackage.HelloWorld is the **name of the main class**

        还可以设置 JAR 包（不是 JAR 包的 dirname，JAR 包本身就是一个目录的打包）：

        ```bash
        java -classpath D:\myprogram;D:\myprogram\lib\supportLib.jar org.mypackage.HelloWorld
        ```

        还可以在 Manifest 里面指定。

IntelliJ Idea 的使用 -<

:   首先，安装 Vim 插件。

    然后，试试 HelloWorld。

    Survival Guide 的笔记 -<

    :   -   支持多语言

        -   有 Commnity 版本和 Ultimate 版本，前者开源（是一个 OSS）。

        -   Android Studio 是 Google 在 Community 版本上为 Android 开发而定制的

        -   VS 的 Project 就是 IntelliJ 的 Module，IntelliJ 的 Libraries 可能是一个 Jar 包，或者什么的

        -   工程是靠 `.idea` 文件夹组织起来的，目录就是结构

        -   Facets `['fæsɪt]` -<

            :   Frameworks such as Spring require certain configurations,
                libraries, dependencies and technologies. A Facet is a way to
                group all this into a manageable component that is then used by
                IntelliJ IDEA. You can add Facets here. For instance, when
                creating a Spring module with a new project, it adds the Spring
                Facet.

        -   Artifacts -<

            :   Artifacts, or otherwise known as output generated by your
                project. This is where you tell IntelliJ IDEA to create JAR’s,
                WAR’s and other types of artifacts for you. Once you define
                them you can then access them from the Build menu.

        -   Code Generation -<

            :   File Templates are the fastest way to create new files
                (Cmd+Ctrl+N on OSX when inside a file or Cmd+N when in Project
                Window).

                Cmd+N on a class allows you to override methods, implement
                methods, etc. It’s context sensitive

                Along with File templates, you also have Live Templates which
                are interactive snippets. You can access them via Preferences |
                Live Templates

                说白了就是：

                -   文件模板
                -   自动补全
                -   快捷键

        -   Navigation -<

            :   Very rich navigation and pretty much aligned feature-wise with
                ReSharper. If there’s one key to remember that’s Double-Shift
                (IntelliJ IDEA 13+): Search Everywhere

                Check out the Navigation tutorial for more information.

                文件跳转用【Shift-Shift】，大赞~

                Shift-Shift 快捷键牛逼在于，什么都可以搜……
                刚才试了一下搜“Vim”，可以在这里直接/打开关闭 Vim。好方便！

        -   Hit Alt+Enter to see what IntelliJ IDEA offers (Intentions):

        -   Refactoring 就是重命名什么的，Java 的类 Refactoring 后，文件名也会自动修改。

        -   VCS 和 local history，似乎也不错

        -   有数据库支持
        -   设置可以保存导出

    多个 IntelliJ IDEA 实例。

    :   Press Ctrl+Alt+S

        Choose Appearance & Behavior, then System Settings, check radio button: Open project in new window.

        refs and see also

        -   [Start two instances of IntelliJ IDE - Stack Overflow](http://stackoverflow.com/questions/5889413/start-two-instances-of-intellij-ide)

    好好学习，点滴做起。这是每次启动的时候，弹出的 tips。 -<

    :   （唯一蛋疼的是，用了 Vim 模拟，冲突的快捷键要手动配置，而我懒得配置）

        -   Ctrl-Alt-S 打开设置

        -   Ctrl-Shift-Alt-S 打开项目结构设置区

        -   To quickly see the documentation for a class or method at caret, press Ctrl+Q (View | Quick Documentation).

        -   IntelliJ IDEA 是一个没有 Ctrl + S 的 IDE，所以每次修改完代码你只要管着运行或者调试即可，无需担心保存或者丢失代码。

        -   To navigate to the declaration of a class, method or variable used
            somewhere in the code, position the caret at the usage and press Ctrl+B
            (Navigate | Declaration). You can also click the mouse on usages with the
            Ctrl key pressed to jump to declarations.

        -   To try it, place the caret at the symbol you want to rename, and press
            Shift+F6 (Refactor | Rename). Type the new name in the popup window that
            appears, or select one of the suggested names, and press Enter.

        -   You may easily override methods of the base class by pressing Ctrl+O (Code | Override Methods).
            To implement methods of the interfaces that the current class implements
            (or of the abstract base class), use Ctrl+I (Code | Implement methods).

        -   The SmartType code completion greatly helps to find methods and variables
            that are suitable in the current context, by analyzing the expected type of
            the whole expression. So doing, IntelliJ IDEA pinpoints the top five most
            suitable results and highlights them on the blue background.

        -   When using Code Completion, you can accept the currently
            highlighted selection in the popup list with Tab key.
            Unlike accepting with the Enter key, the selected name will
            overwrite the rest of the name to the right of the caret. This can
            be especially useful for replacing one method or variable name with
            another.

            and press Ctrl+Shift+空格:

            The SmartType completion also works after the return keyword, in an
            assignment, in an argument list of a method call and other places.

        -   Did you know that you can close tabs in the editor and the tool
            windows of IntelliJ IDEA without actually using the context menu
            commands? It is enough to point with your mouse cursor to a tab to
            be closed, and click the middle mouse button, or just use the
            Shift+click combination.

        -   Using Alt+Insert (Code | Generate) in the editor, you can easily
            generate getter and setter methods for any fields of your class.

            getter, setter, ctor, etc

        -   To open your browser with documentation for the element at the
            editor's caret, press Shift+F1 (View | External Documentation).

            You must have the path to your browser set in the File | Settings |
            Web Browsers options and paths to documentation files added to your
            project (File | Project Structure...) to use this feature.

        -   The CodeCompletion feature can suggest a name for a variable when you declare it. For example, start typing
            private FileOutputStream and press Ctrl+空格.

        -   tips

    refs and see also

    -   [IntelliJ IDEA Minimal Survival Guide – Hadi Hariri](http://hadihariri.com/2014/01/06/intellij-idea-minimal-survival-guide/){.hearts}

refs and see also

-   [jdk 与 jre 的区别 - 心随灵动 - 博客园](http://www.cnblogs.com/myitm/archive/2011/05/03/2035942.html)
-   [PATH (variable) - Wikipedia](https://en.wikipedia.org/wiki/PATH_(variable))
-   [Classpath (Java) - Wikipedia](https://en.wikipedia.org/wiki/Classpath_(Java))

### 基本语法

Java 101 -<

:   ```java
    int weight = 255;
    final double PI = 3.141592653;      // 不能再次被赋值
    final double E;
    E = 2.71828;                        // 但可以定义的时候不赋值

    System.out.println("Hello World!");
    System.out.printf("pi = %.5f\n", Math.PI); // => pi = 3.14159
    String.format("%s may prefer %s.", "Or you", "String.format()");
    // Or you may prefer String.format().

    // 单行注释，line comment
    /*
        多
        行
        注
        释（块注释）
        block comment
     */
    // @version
    // @author
    // @param
    // @return
    ```

keywords -<

:   ```java
    abstract   continue   for          new         switch
    assert     default    if           package     synchronized
    boolean    do         goto         private     this
    break      double     implements   protected   throw
    byte       else       import       public      throws
    case       enum       instanceof   return      transient
    catch      extends    int          short       try
    char       final      interface    static      void
    class      finally    long         strictfp    volatile
    const      float      native       super       while
    ```

    关键字都是小写的。

    refs and see also

    -   [List of Java keywords - Wikipedia](https://en.wikipedia.org/wiki/List_of_Java_keywords)
    -   [Chapter 3. Lexical Structure](http://docs.oracle.com/javase/specs/jls/se8/html/jls-3.html#jls-3.9)

字面量和变量 -<

:   **literal**

    -   IntegerLiteral
    -   FloatingPointLiteral
    -   BooleanLiteral
    -   CharacterLiteral
    -   StringLiteral
    -   NullLiteral

    八进制、十六进制，Long，指数 的表示和 C++ 一致：07，0xf，12345678901234L，5.12e2，5.12E2，5.2F，5.2f

    Java 7 还增加了 0b10101010 这样的二进制整数。

    浮点数除以 0，得到正/负无穷大。整数除以 0，会抛出异常。

    下划线的使用：`23_456.789_01`，下划线随意用。

    **数据类型**

    -   基本数据类型（primitive type）
        -   数值型
            -   整数类型（byte，short，int，long）
            -   浮点类型（float，double）
        -   字符型（char）
        -   布尔型（boolean）
    -   引用数据类型（reference type）
        -   类（class）
        -   接口（interface）
        -   数组（vector）
        -   null

    char 是 unicode 字符，两个字节。

    Java 里没有 bool 这个关键词，是 boolean 和 Boolean。

    Java 里的类型都是 signed。

    float -> double -> BigDecimal

    ```java
    byte    b   =   3;
    int     i   =   b;

    double  y   =   2.7;
    int     x   =   (int)y;
    ```

    自动类型转换：

    ```
            char --+
                    \
    byte -> short ---+--> int -> long -> float -> double
    ```

    ```java
    // 类型提升
    byte a = 40;
    byte b = 50;
    byte c = 60;
    int  d = a*b/c;         // 'a*b/c' 自动提升到了 int

    byte b = 50;
    b =  b * 2;             // ERROR: b*2 提升到了 int，赋值失败
    b =  (byte)(b * 2);     // 这样就对了

    "Hello!" + 'a' + 7;     // Hello!a7
    'a' + 7 + "Hello!";     // 104Hello!
    ```

作用域。

算术运算符 -<

:   ```java
    +   -   *   /   %   ++  --
    ```

赋值运算符 -<

:   其实是赋值表达式（assignment expression）：

    ```java
    x = y = z = 5;
    ```

    有时候这被认为是一个 side-effect。
    比如这篇文章：[为什么我不喜欢赋值表达式 - weakish - SegmentFault](https://segmentfault.com/a/1190000000402506)。

比较运算符 -<

:   true / false

    和 C++ 一样的有：

    ```java
    ==
    !=
    <
    >
    <=
    >=
    ```

    除此之外，还有 `instanceof` 运算符：

    ```java
    "World" instanceof String   // true
    ```

逻辑运算符 -<

:   ```java
    &
    |
    ^
    !
    &&          // 短路
    ||          // 短路
    ```

    因为 Java 没有二进制的处理，所以 `&` 和 `&&` 的区别不是
    【“二进制”与】和【“逻辑”与】，而是
    【“不短路”与】和【“短路”与】。

流程控制 -<

:   if -<

    :   ```java
        if ( COND ) {
            ...
        }

        if ( COND1 ) {
            ...
        } else if( COND2 ) {
            ...
        } else if( COND3 ) {
            ...
        } else {
            ...
        }
        ```

        三元运算符：

        ```java
        y = x>0 ? x : -x;
        ```

    switch -<

    :   ```java
        switch( EXPR ) {
        case VAL1:
            ...
            break;
        case VAL2:
        case VAL3:
            ...
            break;
        default:
            ...
        }
        ```

        byte, short, char, int, String (since Java 7)

    while & do-while -<

    :   ```java
        while( COND ) {
            ...
        }
        ```

        ```java
        do {
            ...
        } while( COND );
        ```

    for -<

    :   ```java
        for( int n = 0; n < 100; ++n ) {
            System.out.println( "tick " + n );
        }
        ```

        ```java
        String[] books = {"AOAPC", "SICP", "POSIX"};
        for (String book : books) {
            book = "NULL";
            System.out.println(book);   // "NULL"
        }
        System.out.println(book[0]);    // "AOAPC"
        ```

    break, continue -<

    :   除了和 C++ 一样的部分，Java 还提供 break 某一个标签的功能：

        ```java
        class ContinueWithLabelDemo {
            public static void main(String[] args) {

                String searchMe = "Look for a substring in me";
                String substring = "sub";
                boolean foundIt = false;

                int max = searchMe.length() -
                          substring.length();

            test:
                for (int i = 0; i <= max; i++) {
                    int n = substring.length();
                    int j = i;
                    int k = 0;
                    while (n-- != 0) {
                        if (searchMe.charAt(j++) != substring.charAt(k++)) {
                            continue test;
                        }
                    }
                    foundIt = true;
                        break test;
                }
                System.out.println(foundIt ? "Found it" : "Didn't find it");
            }
        }
        ```

数组 -<

:   数组基础 -<

    :   ```java
        // 这都一样
        int arr[]   = new int[10];
        int []arr   = new int[10];
        int[] arr   = new int[10];
        // int arr;                             // 这样绝对是错误的

        // 可以初始为 null。与 C++ 不同的是，Java 可以重新引用，而且引用可以为空
        int arr[] = null;
        arr = new int[10];

        // 这也是一样的
        int days[] = new int[]{ 1, 3, 5 };      // 这样就不要手动写元素个数了（反而容易出错）
        int days[] = { 1, 3, 5 };

        // 二位数组也是可以得
        int grid[][] = new int[3][4];
        int[] grid[] = new int[3][4];
        int grid[][] = new int[][] {{ 1, 2, 3, 4 },
                                    { 1, 2, 3, 4 },
                                    { 1, 2, 3, 4 }  };
        int grid[][] = new int[3][];            // 3 个 row，每个 row 多少 col 还不一定
        ```

        `int [3][]` 和 C++ 恰好相对。因为 C++ 内存布局。

        Java 会进行边界检查。（所以效率相对不高，所以安全，所以健壮。）

    数组相关操作 -<

    :   System.arraycopy() -<

        :   ```java
            System.arraycopy( src, 0, dst, 0, num );    // 从 src 位置 0 开始，复制 num 个到，dst 0 开始
            ```

        Arrays.sort() -<

        :   ```java
            int nums[] = new int;
            Arrays.sort( nums );
            ```

        Arrays -<

        :   ```java
            type[] copyOf(type[] orig, int length);
            type[] copyOfRange(type[] orig, int length);
            ```

方法与方法的重载 -<

:   ```java
    public class Func {
        public static void drawRectangle(int x, int y) {
            ...
            // 函数可以 return 返回值或 void。（当然要和声明的一样）
        }
        public static void main(String[] args) {
            ...
            drawRectangle(1, 2);
            ...
        }
    }
    ```

    ```java
    // 重载
    class MethodOverloading {
        void receive(int i) {
            ...
        }
        void receive(double d) {
            ...
        }
        void receive(String s) {
            ...
        }
    }
    ```

面向对象 -<

:   -   继承（Inheritance）
    -   封装（Encapsulation）
    -   多态（Polymorphism）

    ```java
    public class Man {
        private String name;
        private int height;
        private int weight;
        public Man () { }
        public Man (String name, int height, int weight) {
            this.name = name;
            this.height = height;
            this.weight = weight;
        }
        public void doSth() {
            System.out.println("height" + height);
        }
    }

    Man p1 = new Man();
    ```

    封装和继承的访问权限问题：

    -   成员的访问控制：private, default, protected, public
    -   类的访问控制：public 和 default

变量的初始值 -<

:   -   0, 0L, 0.0F: Byte, Short, Int, Long, float, double
    -   `\u0000`: char
    -   false: boolean
    -   all reference type（引用）: null

对象的比较 -<

:   ```java
    String str1 = new String("123");
    String str2 = new String("123");
    String str3 = str1;

    // 这里比的是 reference 是否在一个对象
    if (str1 == str2) { // false
        ...
    } else {
        ...
    }

    if (str1 == str3) { // true
        ...
    } else {
        ...
    }

    // 如果要比较值得话，用 String 的 equals 方法
    if (str1.equals(str2)) {    // true
        ...
    }
    ```

    重写对象的 equals 方法（`equals(rhs)`{.java}）大致有如下几个步骤：

    -   是否 `==`，即引用同一对象？
    -   rhs 为 null？返回 false（有对象那就不是 null）。
    -   运行时类（用 `getClass()` 获取）相等？
    -   最后才是你的逻辑

匿名对象的使用 -<

:   ```java
    new Cylinder().setCylinder(2.5, 5, 3.14);
    getSOmeOne( new MyClass() );                            // 这个和 C++ 一样的。
    ```

    和 C++ 下其实类似。只是第一种情况，C++ 要多加一个括号：

    ```cpp
    #include <iostream>
    using namespace std;
    class C {
    public:
        int x = 0;
        C(int x) : x(x) {}
        void fun() { cout << x << "\n"; }
    };

    int main() {
        (new C(5))->fun(); // "5"，注意：有内存泄漏
        return 0;
    }
    ```

CTor -<

:   跟 C++ 一样，可以重载，不能有返回值（返回的肯定这个类的实例啊），而且编译器会提供默认的 ctor。

    ```java
    public class Sample {
        private int x;
        public Sample() {           // no arg
            this(1);
        }
        public Sample(int x) {      // one arg ctor
            this.x = x;
        }
        public int Sample(int x) {  // not ctor
            return x++;
        }
    }
    ```

    This 句柄。

参数传递 -<

:   其实就是【对象语义】和【值语义】，两种情况：

    -   基本数据类型的参数传递，比如 int，是按值传递。这是 value semantic。
    -   引用类型的参数传递：数组、除 String 以外的其他所有类型的对象。

垃圾回收机制 -<

:   只能用 new 申请内存，Java 承包了内存释放和垃圾回收。
    垃圾回收减免了两种常见错误：【内存泄漏】和【无效内存的引用】。

    强制垃圾回收：

    -   `System.gc();`{.java}
    -   `Runtime.getRuntime().gc();`{.java}

    内存管理小技巧：

    -   用直接量 `String str = "Okay"` 而不是 `String str = new String("Okay")`

    -   用 StringBuilder 和 stringBuffer 拼接字符串

    -   释放没用的变量

        ```java
        public void info() {
            Object obj = new Object();
            System.out.println(obj.toString());
            System.out.println(obj.hashCode());
            obj = null;                 // 不可达，于是会尽早被释放
            // ...                      // 这里就可能有更充足的内存资源
        }
                                        // 在外面的话，就无所谓了，都一样
        ```

    -   减少静态变量的使用，避免在 for 循环中 new 对象。

    -   缓存

    -   不要画蛇添足地使用 finalize

    -   大量的数组元素，可以考虑 Softreference

强引用、软引用、弱引用、虚引用 -<

:   -   StrongReference（所指对象不会被回收）

    -   SoftReference（内存不够，可能会被回收）

    -   WeakReference

        ```java
        import java.lang.ref.WeakReference;

        String str = "A String";
        WeakReference<String> wr = new WeakReference<String>(str);
        str = null;
        System.out.println(wr.get()); // A String
        ```

        和 C++ 的 `weak_ptr`（smart pointer） 似乎一样。

    -   PhantomReference

Static -<

:   和 C++ 的完全一致，除了 Java 的静态成员变量可以直接在类里面初始化。

    而且，这是变量的定义，而不像 C++ 那样，只是声明。
    C++ 的静态成员必须要在类外面定义和初始化（除了 int 类型）。

    ```java
    class American {
        static String country = "美国";
        ...
        static {
            ...                         // 【静态代码块】，在类被载入时执行
        }
        public SomeStaticFunction() {
            ...                         // 【静态函数】，在类实例化对象的时候执行。注意：没有返回值
        }
    }
    System.out.println("American is "+American.country);
    ```

    `public static void main(String[] args) { }`{.java} 是静态的。
    所以执行一个类的 main 函数的时候，不能用 this。

类的继承 -<

:   superclass、subclass

    C++ 里面用 `class D : public B { ... };`，Java 里用 `class D extends B { ... }`，
    可以看到只是把 `:` 变成 `extends` 而已，大同小异。

    外，注意 C++ 类定义的大括号后面有 `;` 而 Java 的没有。因为 C++ 允许立马定义一个类变量（为了兼容 C），
    所以语法有点怪。

    ```java
    // SuperClass
    class SuperClass extends Object {
        SuperClass() {
            ...
        }
    }

    // ChildClass1
    class ChildClass1 extends SuperClass {
        ChildClass1() {
            super();                            // 调用 SuperClass 的构造。但是，这句话可以省略
            ...
        }
    }

    // ChildClass2
    class ChildClass2 extends ChildClass1 {
        ChildClass2() {
            ...
        }
    }
    ```

    子类可以重写父类的函数，也可以修改访问权限。但是不能把 public 函数重写为 private。

    继承 v.s. 组合：【继承破坏了封装。】

抽象类和接口 -<

:   抽象类、函数

    -   abstract
    -   不能被实例化

    ```java
    abstract class DemoAbstract {
        abstract int abstractMethod(int a, int b);              // 都是定义接口，所以没有函数体。
    }
    ```

    因为不能实例化，也就无所谓访问控制了（public、private 什么的）。

    如果抽象类的所有方法【都是抽象的】，那这个类就是“接口”。

    ```java
    // 接口
    public interface Runner {
        int Id = 1;                 // public static final
        void run();
    }

    // 接口也可以继承
    interface Animal extends Runner {
        void breathe();
    }

    interface LandAnimal implements Animal {
        public void breathe() {         // 既然是 implements，那就要把函数定义出来
            ...
        }
    }

    // 实例
    class Fish implements Animal {
        public void run() {
            ...
        }
        public void breathe() {
            ...
        }
    }
    ```

    类可以同时 extends 和 implements，注意要先 `extends` 再 `implements`（其实只有这样才合理）。

    没有把接口的 method 都实现，那它还是一个抽象类，不能实例化对象。

    ```java
    public interface Output
    {
        // 接口里定义的成员变量只能是常量
        int MAX_CACHE_LINE = 50;
        // 接口里定义的普通方法只能是 public 的抽象方法
        void out();
        void getData(String msg);
        // 在接口中定义默认方法，需要使用 default 修饰
        default void print(String... msgs) {
            for (String msg : msgs) {
                System.out.println(msg);
            }
        }
        // 在接口中定义默认方法，需要使用 default 修饰
        default void test() {
            System.out.println("默认的 test() 方法");
        }
        // 在接口中定义类方法，需要使用 static 修饰
        static String staticTest() {
            return "接口里的类方法";
        }
    }
    ```

Lambda 匿名函数 -<

:   Java 8 在 java.util.function 包下定义了许多函数式接口，比如：

    -   `XxxFunction`：有 `apply()` 抽象方法
    -   `XxxConsumer`：有 `accept()` 抽象方法
    -   `XxxSupplier`：有 `getAsXxx()` 抽象方法
    -   `XxxPredicate`：有 `test()` 抽象方法

    ```java
    @FunctionalInterface
    ```

对象的多态性 -<

:   万物之本：Object 类 -<

    :   或多或少继承了 `java.land.Object`。

        Objects 类中主要包括 `clone()`、`finalize()`、**`equals()`**、**`toString()`**。
        子类可以重写这些函数。

        但是不可重写 getClass，notify，notifyAll，wait 等方法，因为这些都是 final 类型。

        getClass(), toString()

        ```java
        public class Instance {
            public String toString() {
                return "string of Instance instance.\n";
            }
        }
        System.out.println(new Instance());
        ```

    和 C++ 多态的使用没有太大的区别。

    ```java
    public class Employee extends Object   { }
    public class Manager  extends Employee { }
    Employee e = new Manager();                     // 合法
    ```

    唯一可能的不同是，Interface 也可看成一种“基类”。用起来也像是“多态”。

异常 -<

:   五个关键字：try、catch、finally、throw、throws

    主要有两种异常：

    -   **runtime exception**: `java.lang.RuntimeException`{.java} 或者 `java.lang.Error`{.java}
    -   **checked exception**: `java.lang.Exception`{.java}

    ```java
    public class ExceptionalClass {
        public void method1() throws CheckedException {
            ...
            throw new CheckedException( "Wrong..." );
        }
        public void method2( String arg ) {
            if( arg == null ) {
                throw new NullPointerException( "Wrong..." );           // 这是 runtime exception，不用在声明时加上 throws xxxException
            }
        }
        public void method3() throws CheckedException {
            method1();
        }

        public static void main( String[] args ) {
            exceptionalClass example = new ExceptionalClass();
            try {
                example.method1();                                      // method1 和 method3 可能会 throw CheckedException，
                example.method3();                                      // 所以【一定】要放在 try-catch 块里
            } catch( CheckedExcetipn ex ) {
                ...
            }
            example.method2( null );                                    // 而且不用放在 try-catch 里面
        }
    }
    ```

    checked 异常，要直接在函数定义的时候就考虑到，会直接“体现”在签名上（交给别人处理异常），或者放在 try-catch 里（自己处理掉异常）。

    Runtime 的异常则“不必”。

    <!--![](http://journals.ecs.soton.ac.uk/java/tutorial/java/exceptions/images/throwableHierarchy_trans.gif)-->

    ```
                        Object
                           |
                           |
                           V
                        Throwable
                         /   \
                        /     \
                    Error   Exception
                      /      /    \
                     /      /      \
                                Runtime Exception
                                    /
                                   /

    ```

    try-catch-finally

    ```java
    FileInputStream fis = null;
    try {
        fis = new FileInputStream("a.txt");
    }
    catch (IOException ioe) {
        System.out.println(ioe.getMessage());
        // return语句强制方法返回
        return;
        // 使用 exit 来退出虚拟机
        // System.exit(1);
    }
    finally {
        ...
        // 关闭磁盘文件，回收资源
        if (fis != null) {
            try {
                fis.close();
            }
            catch (IOException ioe) {
                ioe.printStackTrace();
            }
        }
        System.out.println("执行 finally 块里的资源回收!");
    }
    ```

    **AutoClosable，Closable 接口。**

    ```java
    public static void main(String[] args) throws IOException {
        try (
                // 声明、初始化两个可关闭的资源
                // try 语句会自动关闭这两个资源。
                BufferedReader br = new BufferedReader(new FileReader("AutoCloseTest.java"));
                PrintStream ps = new PrintStream(new FileOutputStream("a.txt"));
        ) {
            // 使用两个资源
            System.out.println(br.readLine());
            ps.println("庄生晓梦迷蝴蝶");
        }
    }
    ```

    各种 IO 类，JDBC 的 Connection、Statement 类，都支持这个。

    这个很像 C 语言中 `int i; for( i = 0; ...) {...}` 到 `for( int i; ...) {...}` 的转变。

    自己定义 Exception：

    ```java
    public class AuctionException extends Exception {
        // 无参数的构造器
        public AuctionException() { }
        // 带一个字符串参数的构造器
        public AuctionException(String msg) {
            super(msg);
        }
    }
    ```

    Catch all... 这个好牛逼……但是推荐不要这样：

    ```java
    try {
        ...
    }
    catch (Throwable t) {
        ...
    }
    ```

    最后，捕捉异常不只是为了打印看看，要处理异常！

    refs and see also

    -   [The Throwable Class and Its Subclasses](http://journals.ecs.soton.ac.uk/java/tutorial/java/exceptions/throwable.html)

包 -<

:   目录树。用 `.` 来分隔目录，就避免了【是 `/`？还是 `\`？的麻烦】。

    两点保证包机制：1）源文件里使用 package 语句；2）class 文件在目录下。

    建议包名小写。

    ```java
    package pkg;

    // import，然后直接使用
    import pkg.sub.Class;
    Class c1 = new Class();

    // 不 import，用全名
    Class c2 = new pkg.sub.Class();
    ```

    ```java
    // static import
    import static java.lang.System.*;
    import static java.lang.Math.*;
    out.println(PI);
    out.println(sqrt(256));
    ```

    ```java
    package ocean.javatest;

    public class Person {
        public static void main(String[] args) {
            System.out.println("I'm a Person.");
        }
    }
    ```

    ```bash
    # 编译
    $ javac -d . Person.java                  # 路径下生成了 `ocean/javatest` 子文件夹。以及 Person.class 文件。

    # 看看目录下有啥
    $ find .
    .
    ./ocean
    ./ocean/javatest
    ./ocean/javatest/Person.class
    ./Person.java

    # 运行 Person 类
    $ java ocean.javatest.Person
    I'm a Person.
    ```

    Java 提供的常用包：

    -   `java.lang`：String、Math、System、Thread（无需 import）
    -   `java.util`：Arrays、List、Set
    -   `java.net`：网络编程
    -   `java.io`：输入输出
    -   `java.text`：格式化
    -   `java.sql`：JDBC 数据库编程
    -   `java.awt`、`java.swing`：GUI 编程

Jar 包 -<

:   **java archive file**，看上去，用法和 `tar`{.bash} 也基本雷同。

    ```bash
    $ where jar
    C:\Program Files\Java\jdk1.8.0_60\bin\jar.exe

    $ jar
    用法: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...
    选项:
        -c  创建新档案
        -t  列出档案目录
        -x  从档案中提取指定的 (或所有) 文件
        -u  更新现有档案
        -v  在标准输出中生成详细输出
        -f  指定档案文件名
        -m  包含指定清单文件中的清单信息
        -n  创建新档案后执行 Pack200 规范化
        -e  为捆绑到可执行 jar 文件的独立应用程序
            指定应用程序入口点
        -0  仅存储; 不使用任何 ZIP 压缩
        -P  保留文件名中的前导 '/' (绝对路径) 和 ".." (父目录) 组件
        -M  不创建条目的清单文件
        -i  为指定的 jar 文件生成索引信息
        -C  更改为指定的目录并包含以下文件
            如果任何文件为目录, 则对其进行递归处理。
            清单文件名, 档案文件名和入口点名称的指定顺序
            与 'm', 'f' 和 'e' 标记的指定顺序相同。

    示例 1: 将两个类文件归档到一个名为 classes.jar 的档案中:
            jar cvf classes.jar Foo.class Bar.class

    示例 2: 使用现有的清单文件 'mymanifest' 并将 foo/ 目录中的所有文件归档到 'classes.jar' 中:
            jar cvfm classes.jar mymanifest -C foo/ .
    ```

    可以对目录下的 class 文件进行压缩打包。

    ```bash
    $ jar cf  test.jar test                 # test 子目录 -> test.jar
    $ jar tf  test.jar                      # 列出目录
    $ jar xf  test.jar                      # 解压

    // verbose 版本
    $ jar cvf test.jar test
    $ jar tvf test.jar
    $ jar xvf test.jar
    ```

    c: cerate, t: tree (directory listing), x: extract

    可以用解压软件如 7-zip 来解压 jar 包。

    JAR 和普通压缩的区别在于，它包含了一个 META-INF/MANIFEST.MF 的清单文件。

    好处：

    -   安全
    -   压缩了，容量小
    -   封装在一起，版本可控
    -   可移植

    其实，一个 `*.jar` 文件，就是一个目录的 class 文件。

String 和 StringBuffer -<

:   都在 `java.lang` 中，不需要 import。

    ```java
    String s;               // String 是 immutable 的
    s.replace("j", "i");    // 这只会返回新对象，而不会修改 s

    StringBuffer sb;
    sb.append("C");         // sb 被改变了
    ```

    一些基本的 API：

    ```java
    String

        equals( STR )
        equalsIgnoreCase( STR )
        indexOf( STR )
        toUpperCase()
        toLowerCase()
        trim()

    String strs[] = str.split(" ");

    StringBuffer

        append( STR )
        delete( start, end )
        deleteCharAt( index )
        setCharAt( index, C )
        lastIndexOf( STR )
        length()
        replace( int start, int end, STR )
        reverse()
        subString( start )
        subString( start, end )
        toString()
        insert( index, STR )
        setLength( SIZE )
    ```

    调用 stringbuffer 的 equals 的时候，你可能需要的是 `sb.toString().equals( rhs.toString() )`。

    可以用 `instanceof` 关键字判断能否正确。

    String、StringBuffer，StringBuilder 都实现了 `CharSequence`，可以看成是一个字符串的协议接口。

    StringBuilder 的效率更高，但是线程不安全。
    StringBuffer 线程安全。（记忆：**Buffer is safer -> bis，缓冲保平安。**）

基本数据类型的包装类 -<

:   | 类型 | 包装类 |
    | :---: | :---: |
    | boolean | Boolean |
    | byte | Byte |
    | char | Character |
    | short | Short |
    | int | Int |
    | long | Long |
    | float | Float |
    | double | Double |

    还提供一些类似 C++ 中 `<climits>` 里提供的常量：

    ```java
    Float.SIZE              // #bits
    Float.MIN_VALUE;
    Float.MAX_VALUE;
    ```

    可以看到，因为 Java 有包装类这个概念，这些变量命名都很规范，比 C++ 那个好使。
    更好使的是 autoboxing 和 autounboxing。

    AutoBoxing、AutoUnboxing

    :   ```java
        Integer i =  5;
        int i2 = i;

        Object obj = true;
        ```

    包装类都提供：

    -   parse 函数：`parseXxx(String s)`
    -   构造函数：`Xxx(String s)`
    -   compare 函数：`compare(Type v1, Type v2)`

    Java 8 增加了无符号运算：（原来 Java 的变量类型都是有符号的）

    -   `static String toUnsignedString()`
    -   `static Xxx parseUnsignedXxx()`
    -   `static int CompareUnsignedXxx()`

    我觉得 Java 都用有符号类型，其实才是大智慧。
    不知道搞这几个新的东西有啥用。

集合类，Collection & Iterator，Java 中的集合 -<

:   很多人用 C++ 基本只会用 vector，却不知道 map, hashmap, unordered_map,
    queue, stack, deque, priority_queue, set, unordered_set 以及 `<algorithms>`
    头文件下的许多方法（我好喜欢 `copy` 和 `ostream_iterator`），导致写得代码又臭又长。

    所以，这部分太特么重要了。搞定了这部分，对 Java 语法的掌握才落了地。
    C++ 的容器对应 Java 的集合。主要有下面几类：

    -   HashSet: equals(), hashCode(), HashSet s = new HashSet(); s.add(new Object());
    -   LinkedHashSet：性能低，但迭代访问效率高，虽然是 linked list 来存储，但作为 set，不允许重复元素。
    -   TreeSet，`comparator()` 返回比较准则，如果用的默认的，返回 null；
        `Object first/last()`，`Object lower/higher(Object e)`

        subset(), headSet(), tailSet()

    感觉提供的集合的选择比 C++ 丰富，而且接口更多。
    但并不代表使用难度（使用而言的复杂度）更大，
    因为【一个集合或者说容器，所提供的操作和性能都是不言而喻、顾名思义的。】
    比如一个 Stack、Queue，不管什么语言，提供的接口都有那几个啊，
    一个 TreeHashSet 一眼也能看出来它的性能相比 HashSet 有啥么区别。

    外，从命名上，C++ 用了 C 的下划线风格：`priority_queue`，Java 用了 CamelCase：`PriorityQueue`。

    下面这篇文章对 Java 的 Collection 有一个整体而概括的说明：

    The Interface and Class Hierarchy Diagram of Java Collections -<

    :   1.  Collection vs Collections -<

            :   First of all, "Collection" and "Collections" are two different
                concepts. As you will see from the hierarchy diagram below,
                "Collection" is a root interface in the Collection hierarchy but
                "Collections" is a class which provide static methods to manipulate
                on some Collection types.

                ![](http://whudoc.qiniudn.com/2016/CollectionVsCollections.jpeg)

        2.  Class hierarchy of Collection -<

            :   The following diagram demonstrates class hierarchy of Collection.

                ![](http://whudoc.qiniudn.com/2016/java-collection-hierarchy.jpeg)

                主要分三块：Set（HashSet、LinkedHashSet、TreeSet）、List（ArrayList、Vector、LinkedList）、Queue（LinkedList，PriorityQueue）

        3.  Class hierarchy of Map -<

            :   Here is class hierarchy of Map.

                ![](http://whudoc.qiniudn.com/2016/MapClassHierarchy-600x354.jpg)

                简单地说就是：HasaMap、LinkedHashMap、TreeHashMap 和 HashTable 都实现了 Map 接口。

        4.  Summary of classes -<

            :   ![](http://whudoc.qiniudn.com/2016/collection-summary.png)

                还有一点可以说说的是，Java 的集合的成员可以是不同类型的（反正都当成 Object 类型）。
                如果要固定类型，可以用泛型（类同 C++ 的模板）。

        5.  Code Example -<

            :   The following is a simple example to illustrate some collection types:

                ```java
                List<String> a1 = new ArrayList<String>();
                a1.add("Program");
                a1.add("Creek");
                a1.add("Java");
                a1.add("Java");
                System.out.println("ArrayList Elements");
                System.out.print("\t" + a1 + "\n");

                List<String> l1 = new LinkedList<String>();
                l1.add("Program");
                l1.add("Creek");
                l1.add("Java");
                l1.add("Java");
                System.out.println("LinkedList Elements");
                System.out.print("\t" + l1 + "\n");

                Set<String> s1 = new HashSet<String>(); // or new TreeSet() will order the elements;
                s1.add("Program");
                s1.add("Creek");
                s1.add("Java");
                s1.add("Java");
                s1.add("tutorial");
                System.out.println("Set Elements");
                System.out.print("\t" + s1 + "\n");

                Map<String, String> m1 = new HashMap<String, String>(); // or new TreeMap() will order based on keys
                m1.put("Windows", "2000");
                m1.put("Windows", "XP");
                m1.put("Language", "Java");
                m1.put("Website", "programcreek.com");
                System.out.println("Map Elements");
                System.out.print("\t" + m1);
                ```

                Output:

                ```
                ArrayList Elements
                    [Program, Creek, Java, Java]
                LinkedList Elements
                    [Program, Creek, Java, Java]
                Set Elements
                    [tutorial, Creek, Program, Java]
                Map Elements
                    {Windows=XP, Website=programcreek.com, Language=Java}
                ```

        refs and see also

        -   [The Interface and Class Hierarchy Diagram of Java Collections](http://www.programcreek.com/2009/02/the-interface-and-class-hierarchy-for-collections/)

    Vector & Enumeration

    ```java
    int a = System.in.read();           // read a char
    Vector v = new Vector();
    v.addElement( new Integer(a-'0') );

    Enumeration en = v.elements();
    while (en.hasMoreElements()) {
        Integer i = (Integer) en.nextElement();
        ...
    }
    ```

    ```java
    boolean                 add                 ( Object o );
    boolean                 remove              ( Object o );

    int                     size                ();
    boolean                 isEmpty             ();
    boolean                 contains            ( Object o );
    Iterator                iterator            ();

    boolean                 containsAll         ( Collection c );
    boolean                 addAll              ( Collection c );
    void                    clear               ();
    void                    removeAll           ( Collection c );       // A \ C
    void                    retainAll           ( Collection c );       // A & C

    Object[]                toArray             ();
    Object[]                toArray             ( Object []a );
    ```

    ```java
    Iterator iter = new ArrayList().iterator();
    while (iter.hasNext()) {
       Integer i = (Integer) iter.next();
    }
    ```

    Java 的 Comparable 接口，里面定义了一个 `compareTo(Object obj)` 的方法。
    常用的类都实现了这个接口。TreeSet 里面的元素，必然要实现这个接口，否则在比较的
    时候会抛出异常。而且啊，不同类型的对象怎么比较呢？所以 **TreeSet** 里面只能添加同一种类型。

    在 new TreeSet 的时候，可以把 compareTo 的 Lambda 函数传入。

    ```java
    TreeSet ts = new TreeSet((o1 , o2) -> {
        M m1 = (M)o1;
        M m2 = (M)o2;
        // 根据 M 对象的 age 属性来决定大小，age 越大，M 对象反而越小
        return m1.age > m2.age ? -1 : m1.age < m2.age ? 1 : 0;
    });
    ```

    EnumSet

    List 是有序的所以有一些有序的方法：

    -   add(index, elem)
    -   addAll(index, collection)
    -   Object get(index)
    -   int indexOf(obj)，因为可能重复，所以这其实是第一个元素的 index
    -   int lastIndexOf(obj)
    -   set(index, obj)
    -   remove(index)

    ArrayList() 和 Vector()

    ArrayList 线程不安全，Vector 安全，所以前者效率低。

    Vector 的子类有 Stack，提供 push、pop、peek

    固定长度的 List 有 `Arrays.asList("...", "...", ...);`

    这样的 list 在 add 和 remove 的时候都会抛出异常（UnSupportedOperationException）

    Queue 呢，有

    -   `add(elem)`
    -   `element()`，队首
    -   还有挺多接口，挺无聊的

    对集合的操作，可以用 Collections，

    -   Collections.shuffle
    -   Collections.reverse
    -   Collections.sort(list),
    -   Collections.sort(list, comparator)
    -   Collections.swap(list, i1, i2)
    -   Collections.rotate(list, distance)
    -   Collections.binarySearch
    -   Collections.max

    Hashtable 和 Properties 类 -<

    :   HashMap

        ```java
        Hashtable numbers = new Hashtable();
        numbers.put("One", new Integer(1));
        numbers.put("Two", new Integer(2));

        Integer n = (Integer) numbers.get("One");
        if( n != null ) {
            ...
        }
        ```

        `Object.hashCode` 和 `Object.equals` 是 HashMap，HashSet 中最重要的依赖。

        Perperties 是在 Hashtable 基础上加了序列化功能。Tiger 还可以序列化到 XML。

        ```java
        import java.util.*;
        import java.io.*;

        public class LoadSample {
            public static void main(String[] args) throws Exception {
                Properties prop = new Properties();
                FileIniputStream fis = new FileInputStream("sample.properties");
                prop.load(fis);
                prop.list(System.out);
                System.out.println("\nThe foo property: " + prop.getProperty("foo"));
            }
        }
        ```

    下文对集合操作，有更详细的介绍（代码）。

System -<

:   `in`, `out`, `err`

    `gc()`, `exit()`, `getenv()`, `getProperties()`, `arraycopy()`, `currentTimeMillis()`;

    Date, Calendar, DateFormat, Math, Random,

IO :hearts: -<

:   File -<

    :   File 类，表示一个文件或者目录（也是文件）。

        -   File( String parent, String child )
        -   File( File parent, String child )
        -   File( URI uri )
        -   File( String pathname )

        ```java
        File file = new File("file");
        if (!file.exists()) {
            file.mkdir();
            file.createNewFile();
            file.mkdirs();
        }
        ```

        -   java.io.File.pathSeparator: `:` (Linux), `;` (Windows)
        -   java.io.File.separator: `/` (Linux), `\` (Windows)
        -   canRead
        -   canWrite
        -   compareTo( rhs ): 0-> 相同；比较路径名
        -   createNewFile() throws IOException
        -   delete
        -   exists
        -   File getAbsoluteFile()：返回绝对路径
        -   String getAbsolutePath()：返回绝对路径
        -   String getName （类似于 `basename`）, getParent
        -   isFile, isHidden
        -   long lastModified()，和 Qt 的 QDateTime::msecsSinceEpoch() 一样。
        -   length：文件大小；目录的话，没太大意义
        -   `String[] list()`：目录下 entrylist
        -   `String[] list( filter )`：目录下 entrylist
        -   `File[] listFiles()`
        -   public static File[] listRoots()：`/bin`，`/etc`，`/tmp`，等等
        -   mkdir, mkdirs，后者类似于 `mkdir -p Many/DIRS`
        -   renameTo( File dest )
        -   setReadOnly()


        ```java
        import java.io.File;
        import java.io.IOException;
        public class FileDemo {
            public static void main(String[] args) {
                File file = new File("FileDemo.txt");
                try {
                    file.createNewFile();
                    System.out.println("Generated file " + file.getAbsolutePath());
                }
                catch (IOException e) {
                    System.out.println("Failed creating file " + file.getAbsolutePath());
                    e.printStackTrace();
                }
            }
        }
        ```

    InputStream -<

    :   -   int available()，还可以读取的字节数
        -   void close()
        -   int read()，读入一个字节（0~255），如果 -1，则是 EOF。
        -   `int read(byte[] b)`
        -   `int read(byte[] b, offset, lengh)`
        -   reset()
        -   skip( size )

        ```java
        File file = new File(...);
        InputStream is = new InputStream(file);
        byte buf[] = new byte[(int)file.length()];
        is.read(buf);
        is.close();
        System.out.println(new String(buf));

        // 一个字节一个字节来
        int temp;
        while ((temp=is.read()) != -1) {
            buf[len++] = (byte)temp;
        }

        byte b[] = str.getBytes();
        ```

    FileOutputStream

    Reader

    Writer

    InputStreamReader

    OutputStreamWriter

    Random Access File -<

    :   ```java
        StringBuilder builder = new StringBuilder(name);
        builder.setLength(15);
        this.name = builder.toString();

        RandomAccessFile raf = new RandomAccessFile(file, "rw");
        raf.writeChars(name);
        raf.writeInt(age);
        raf.seek( 0 );

        Scanner scanner = new Scanner(System.in);
        int num = scannr.nextInt();
        ```

Final 和 Immutable -<

:   **Final 变量**

    Final 是说变量不可以再变了。类似于 C++ 的 const，不过不要求定义的时候赋初始值。

    外，或许类的 final 变量，不必加载类（loadClass）。

    ```java
    public class FinalDemo {
        final float PI = 3.14PI;
        final int arrInt[] = { 1, 2, 3, 4 };
        final int num;
        {
            num = 5;                    // 在静态代码块里初始化，于是再不能被修改了
        }
        final String str;
        public FinalDemo {
            str = "不能再改了";         // 在构造函数初始化，于是不能再修改了
        }
    }
    ```

    **final 的方法**（最终方法）：不允许被覆盖（可以重载一个参数不一样的，但是不能覆盖）

    ```java
    class Base {
        public final void add(int x, int y) {
            ...
        }
    }
    ```

    **final 的类**：不可以被继承

    ```java
    final class Base {
        ..
    }
    ```

    不可变类（immutable class），比如 double，String（的包装类），
    讲的是对象的不可修改。有点类似于【值语义】的感觉。
    就是说：2 就是 2，2 不是一个变量。

内部类 -<

:   ```java
    class Outer {
        class Inner {
            ...
        }
        public void fun() {
            Inner in = new Inner();
            ...
            class Inner2 {
                ...
            }
        }
        ...
    }

    Outer.Inner outin = new Outer().new Inner();    // Outer.Inner 是不是有种静态成员的感觉？
    ```

    内部类是一个类，不能获取外部类的非静态常量（因为你根本没有那个 object 实例啊）。

断言 -<

:   ```java
    assert 3 < 5;
    assert 3 > 5: "这当然是不对的。"
    ```

    打开断言：`java -ea SomeClass`

    ```java
    e.printStackTrace();
    ```

泛型的意义 -<

:   先看基本使用：

    ```java
    List lst = new ArrayList();
    List<String> lst = new ArrayList<String>();
    Map<String, Integer> map = new HashMap<String, Integer>();

    // 可以自动推导，所以后面为空也是可以得
    List<String> lst = new ArrayList<>();
    Map<String, Integer> map = new HashMap<>();
    ```

    ```java
    public class Apple<T> {
        ...
    }

    public class A extends Apple<String> { }
    public class A extends Apple { }

    // 但这个就是错的
    public class A extends Apple<T> { }
    ```

    `LinkedList<String>()` 和 `LinkedList<Integer>()` 具有同样的 `getClass()` 输出。

    `List<String>` 不是 `List<Object>` 的子类。

    解决：

    ```java
    void test(List<?> c) { // ? 是类型通配符。
        ...
    }
    ```

    泛型方法：

    ```java
    static <T> void fromArrayToCollection(T[] a, Collection<T> c) {
        for (T o : a) {
            c.add(o);
        }
    }


    // 下面代码中 T 代表 Object 类型
    Object[] oa = new Object[100];
    Collection<Object> co = new ArrayList<>();
    fromArrayToCollection(oa, co);

    // 下面代码中 T 代表 String 类型
    String[] sa = new String[100];
    Collection<String> cs = new ArrayList<>();
    fromArrayToCollection(sa, cs);
    ```

    ```java
    // 声明一个泛型方法，该泛型方法中带一个 T 形参
    static <T> void test(Collection<? extends T> from , Collection<T> to) {
        for (T ele : from) {
            to.add(ele);
        }
    }
    public static void main(String[] args)
    {
        List<Object> ao = new ArrayList<>();
        List<String> as = new ArrayList<>();
        // 下面代码完全正常
        test(as , ao);
    }
    ```

    ```java
    // 1
    public interface Collection<E> {
        boolean containsAll(Collection<?> c);
        boolean addAll(Collection<? extends E> c);
    }

    // 2
    public interface Collection<E> {
        <T> boolean containsAll(Collection<T> c);
        <T extends E> boolean addAll(Collection<> c);
    }
    ```

## 界面

放弃。不要用 Java，用 JavaScript（或者，TypeScript）。

## String

-   \#1 - with plus operator，直接用 `+`

-   \#2 - with StringBuilder -<

    :   ```java
        StringBuilder builderConcatenated = new StringBuilder();
        builderConcatenated.append("You ");
        builderConcatenated.append("can use ");
        builderConcatenated.append("the StringBuilder class.");
        System.out.println(builderConcatenated.toString());
        // You can use the StringBuilder class.
        ```

        和 StringBuilder 类似有一个 StringBuffer，线程安全。

-   \#3 - with String formatter -<

    :   ```java
        String.format("%s may prefer %s.", "Or you", "String.format()");
        // Or you may prefer String.format().
        ```

        类似于 C++ 中的 printf

打印输出的时候，还可以用 `System.out.printf()`，用法和 C++ 一样。

字符的操作。还包括：正则表达式。

## Vector, Set, Multiset, Map, HashMap, etc

数组

```java
int nums[] = new int[20];
int len = nums.length;
for (int n: nums) {
    ...
}
for (int i = 0; i < nums.length; ++i) {
    ...
}
```

```java
java.util.Arrays

Arrays.sort( ARR )
Arrays.copyOfRange( ARR, start, end )
Arrays.equals( ARR1, ARR2 )
```

## 输入输出

InputStream / Reader

outputStream / Writer

## 系统调用，C++ 联动 & 序列化 & 网络通信

或许用 TCP 来通信是个不错的想法。
还有 protbuf。

[google/protobuf: Protocol Buffers - Google's data interchange format](https://github.com/google/protobuf)

[4ker/face2face: 基于netty的异步非阻塞实时聊天(IM)服务器。](https://github.com/4ker/face2face)

[Netty - 话题精华 - 知乎](https://www.zhihu.com/topic/19732975/top-answers)

## 数据库

[H2 Database Engine](http://www.h2database.com/html/main.html)

**JDBC：Java Database Connectivity**，Java 数据库连接，可以执行 SQL 的 API。

JDBC 常用类和接口：

-   DriverManager
-   Connection
-   Statement
-   ResultSet

步骤：

-   加载数据库驱动
-   通过 DriverManager 获取数据库 Connection
-   通过 Connection 创建 Statement
-   通过 Statement 执行 SQL 语句
-   操作结果集
-   回收数据库资源

实例代码 -<

:   ```java
    public class ConnMySql {
        public static void main(String[] args) throws Exception {
            // 1. 加载驱动，使用反射的知识，现在记住这么写。
            Class.forName("com.mysql.jdbc.Driver");
            try(
                    // 2. 使用 DriverManager 获取数据库连接,
                    // 其中返回的 Connection 就代表了 Java 程序和数据库的连接
                    // 不同数据库的 URL 写法需要查驱动文档知道，用户名、密码由 DBA 分配
                    Connection conn = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/select_test", "root" , "32147");

                    // 3. 使用 Connection 来创建一个 Statment 对象
                    Statement stmt = conn.createStatement();

                    // 4. 执行 SQL 语句
                    //      Statement 有三种执行 sql 语句的方法：
                    //      1:  execute 可执行任何 SQL 语句。- 返回一个 boolean 值，
                    //          如果执行后第一个结果是 ResultSet，则返回 true，否则返回 false
                    //      2:  executeQuery 执行 Select 语句 － 返回查询到的结果集
                    //      3:  executeUpdate 用于执行 DML 语句。－ 返回一个整数，
                    //          代表被 SQL 语句影响的记录条数
                    ResultSet rs = stmt.executeQuery("select s.* , teacher_name from student_table s , teacher_table t where t.teacher_id = s.java_teacher");

            ) {

                // ResultSet 有系列的 getXxx(列索引 | 列名)，用于获取记录指针
                // 指向行、特定列的值，不断地使用 next() 将记录指针下移一行，
                // 如果移动之后记录指针依然指向有效行，则 next() 方法返回 true。
                while (rs.next()) {
                    System.out.println(rs.getInt(1) + "\t" + rs.getString(2) + "\t" + rs.getString(3) + "\t" + rs.getString(4));
                }
            }
        }
    }
    ```

查询用 executeQuery，DML 和 DDL，用 `executeUpdate()` 和 `executeLargeUpdate()`

和 ResultlSet 相比，RowSet 是可滚动、可更新、可序列化的结果集。而且便于网络传输。

事务具有 4 个特性：

-   原子性（Atomicity）、
-   一致性（Consistency）、
-   隔离性（Isolation）和
-   持续性（Durability）。

Java 8 的批量更新：`SupportsBatchUpdates()`

Redis

## 日志

log4j

[Apache Log4j 2：一款全新的日志记录工具 - 资源 - 伯乐在线](http://hao.jobbole.com/log4j2/)

## 并发

## MISC

-   [waylau/rest-in-action: REST in Action 《REST 实战》。基于 Jersey 构建 RESTful 服务。](https://github.com/waylau/rest-in-action)
-   [jobbole/awesome-java-cn: Java资源大全中文版，包括开发库、开发工具、网站、博客、微信、微博等，由伯乐在线持续更新。](https://github.com/jobbole/awesome-java-cn)
-   [akullpp/awesome-java: A curated list of awesome Java frameworks, libraries and software.](https://github.com/akullpp/awesome-java)
-   [google/jimfs: An in-memory file system for Java 7+](https://github.com/google/jimfs)

## Annotation（注释）

这是一种元数据。

注解：注解本身 + java.lang.Annotation

5 个基本的 Annotation：

-   @Overide（我不是一个新函数，我要“覆盖”先辈）
-   @Deprecated（这个函数过时了，使用地话要挨警告）
-   @SupressWarnings（比如放弃提示“堆污染”错误，什么的）
-   @SafteVarags
-   @FunctionalInterface（一个接口，一个抽象方法）

其他的

-   @Retention（保留）
-   @Target
-   @Documented
-   @Inherited

自定义 Annotation（可以用于程序、接口、类）

```java
public @interface Test {}

...
@Test
...
```

Java 8 的 Type Annotation

-   static void setErr(PrintStream err);
-   static void setIn(InputStream in);
-   static void setOut(PrintStream out);
-   InputStream getErrorStream();
-   InputStream getInputStream();

序列化

```java
File tmp = File.createTempFile("tmp" , null);
tmp.deleteOnExit();
FileOutputStream tmpOut = new FileOutputStream(tmp);
```

privaet transient int age;

除了 Serializable，还有 Externalizable 接口。
后者自由度大，必须手工实现，效率更高。

还可以加上 ID：

serialver Person

来查看。

## NIO

提供的 channel 和 buffer。

channel 与 InputStream / OutputStream 的区别是提供 map()，可以处理“块”
buffer 位于 channel 和数据之间。

CharBuffer，ShortBuffer，DoubleBuffer，etc

0 <= mark <= position <= limit <= capacity

两个重要的函数是 flip() 和 clear()

Channel 不应该通过构造器创建，而是要通过
传统的节点 InputStream、OutputStream 的 getChannel() 方法
来返回对象的 Channel。

-   FileInputStream / FileOutputStream .getChannel() -> FileChannel
-   PipedInputStream / PipedOutputStream .getChannel() -> Pipe.SinkChannel, Pipe.SourceChannel

map() -> ByteBuffer
read() write()

## 字符集

```java
import java.nio.charset.Charset;
import java.util.SortedMap;

SortedMap<String, Charset> map = Charset.availableCharsets();
for (String alias : map.keySet()) {
    System.out.println(alias + " -----> " + map.get(alias));
}
```

## 多线程

独立，动态，并发。

-   并发：同时
-   并行：看上去是同时

主线程 main()，子线程 run()

Thread.currentThread() 返回正在执行的线程。
thread.getName() 返回这个 thread 的名字。

线程的生命周期：New、Runnable、Running、Blocked、Dead。

调用 start() 还是 run()？直接用后者的话，只是一个函数。

static void Thread::sleep(miliseconds)

## 类的加载

拷贝到内存，然后创建 java.lang.Class 对象。

---

Maven 简单来说是一个项目管理工具，被认为是 Ant 的替代品或者继任者。事实上 Maven 的功
能要远远超出 Ant，它不仅仅提供编译的脚本，更是在整 个项目周期中提供测试，发布，
文档生成等功能，并且有着独特的依赖性管理方法。但是强大的功能的代价就是复杂的使
用方法，第一次使用 Maven 往往需要将 近半个小时的时间（国内网速）来下载一个本地的
依赖库，这无疑会使很多开发人员“知难而退”。虽然广受诟病，一个不争的事实就是 Maven
逐渐代替了 Ant，使用 Maven 也成了 Java 开发人员的一个必要技能。

比起 Eclipse 通通放进右键菜单的行为，IntelliJ IDEA 有着单独的窗口可以完成 Maven 的操
作。你可以针对不同 Module 进行 Clean Compile Package Install 等操作，各个 Plug-in 的
操作也一清二楚。

%M2_HOME%：`C:\cmdtools\apache-maven-3.3.9`

Maven Module

:   For the Maven projects IntelliJ IDEA provides a dedicated module type. For
    each Maven Module, IntelliJ IDEA creates a pom.xml file. So doing, a Maven
    Module can be created either with the basic pom.xml file, or from a certain
    pattern called Maven archetype.

    IntelliJ 支持 pom.xml 的编辑代码高亮和补全。

    打开 pom 文件，就可以导入 maven 工程。 


[Maven 与 IntelliJ IDEA 的完美结合 - OPEN 开发经验库](http://www.open-open.com/lib/view/1388650391891)

[Maven – Guide to Mirror Settings](http://maven.apache.org/guides/mini/guide-mirror-settings.html)

```
C:\cmdtools\apache-maven-3.3.9\conf\settings.xml
C:\Program Files (x86)\JetBrains\IntelliJ IDEA Community Edition 2016.2.4\plugins\maven\lib\maven2\conf\settings.xml
C:\Users\tzx\.m2\settings.xml

<url>http://repository.jboss.org/nexus/content/groups/public</url>
<url>http://maven.aliyun.com/nexus/content/groups/public/</url>
```

```xml
<settings>
    ...
    <mirrors>
        <mirror>
            <id>AliyunMirrorSite</id>
            <name>Aliyun</name>
            <url>http://maven.aliyun.com/nexus/content/groups/public/</url>
            <mirrorOf>*</mirrorOf>
        </mirror>
    </mirrors>
    ...
</settings>
```

`C:\Users\tzx\.IdeaIC2016.2\config\options\vim_settings.xml`


```xml
<shortcut-conflicts>
    <shortcut-conflict owner="vim">
        <text>ctrl pressed N</text>
    </shortcut-conflict>
    <shortcut-conflict owner="vim">
        <text>ctrl pressed C</text>
    </shortcut-conflict>
    <shortcut-conflict owner="vim">
        <text>ctrl pressed V</text>
    </shortcut-conflict>
    <shortcut-conflict owner="ide">
        <text>ctrl pressed P</text>
    </shortcut-conflict>
    <shortcut-conflict owner="vim">
        <text>ctrl pressed W</text>
    </shortcut-conflict>
    <shortcut-conflict owner="vim">
        <text>ctrl pressed G</text>
    </shortcut-conflict>
</shortcut-conflicts>
```

C:\Program Files (x86)\JetBrains\IntelliJ IDEA Community Edition 2016.2.4\bin\idea64.exe.vmoptions


```
-Xms128m
-Xmx750m
```

```
-Xms1024m
-Xmx2048m
```

[Releases · MSOpenTech/redis](https://github.com/MSOpenTech/redis/releases)

[YouMeek Code](http://code.youmeek.com/)

-   IntelliJ IDEA 相关核心文件和目录介绍：[IntelliJ-IDEA-Tutorial/installation-directory-introduce.md at newMaster · judasn/IntelliJ-IDEA-Tutorial](https://github.com/judasn/IntelliJ-IDEA-Tutorial/blob/newMaster/installation-directory-introduce.md)
-   IntelliJ IDEA 界面介绍：[IntelliJ-IDEA-Tutorial/interface-introduce.md at newMaster · judasn/IntelliJ-IDEA-Tutorial](https://github.com/judasn/IntelliJ-IDEA-Tutorial/blob/newMaster/interface-introduce.md)
-   IntelliJ IDEA 主题、字体、编辑区主题、文件编码修改：[IntelliJ-IDEA-Tutorial/theme-settings.md at newMaster · judasn/IntelliJ-IDEA-Tutorial](https://github.com/judasn/IntelliJ-IDEA-Tutorial/blob/newMaster/theme-settings.md)
-   [IntelliJ IDEA 2016.2 Help :: Symbols](https://www.jetbrains.com/help/idea/2016.2/symbols.html)
-   IntelliJ IDEA 编译方式介绍：[IntelliJ-IDEA-Tutorial/make-introduce.md at newMaster · judasn/IntelliJ-IDEA-Tutorial](https://github.com/judasn/IntelliJ-IDEA-Tutorial/blob/newMaster/make-introduce.md)

Maven 的两个概念：坐标和依赖。

POM：Project Object Model。

archetype，`['ɑrkə'taɪp]`，n. 原型

dependency mediation（依赖调解）

-   近者优先
-   先申明优先

Maven 仓库

-   本地仓库
-   远程仓库
-   中央仓库
-   私服
-   公共仓库：central、JBoss、Java.net

声明周期：

-   initialize，初始化
-   compile，编译
-   test，测试
-   package，打包
-   integrateionTest，集成测试
-   deploy，部署

三套声明周期：

-   clean（pre-clean，clean，post-clean）
-   default（validate，intialize，generate-sources，process-sources，generate-resources，process-resoures，compile，process-classes，generate-test-sources，etc）
-   site

插件：

maven-help-plugin

[How to create a .jar file or export jar on IntelliJ (like eclipse java archive export) - Stack Overflow](http://stackoverflow.com/questions/2025607/how-to-create-a-jar-file-or-export-jar-on-intellij-like-eclipse-java-archive-e)

InputStream -> InputStreamReader -> BufferedReader

reader.readLine()

https://google.github.io/styleguide/javaguide.html 这里面是一些java编码规范
http://www.blogjava.net/zh-weir/archive/2014/02/08/409608.html这是中文版的
