---
title: Learning Java
...

# Learning Java

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

        %JAVA_HOME%

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
        public static void main(String args[]) {
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

    **数据类型**

    -   基本数据类型
        -   数值型
            -   整数类型（byte，short，int，long）
            -   浮点类型（float，double）
        -   字符型（char）
        -   布尔型（boolean）
    -   引用数据类型
        -   类（class）
        -   接口（interface）
        -   数组

    char 是 unicode 字符，两个字节。

    Java 里没有 bool 这个关键词，是 boolean 和 Boolean。

    ```java
    byte    b   =   3;
    int     i   =   b;

    double  y   =   2.7;
    int     x   =   (int)y;
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
    ```

作用域。

算术运算符 -<

:   ```java
    +   -   *   /   %   ++  --
    ```

赋值运算符 -<

:   ```java
    x = y = z = 5;
    ```

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
        // int arr;                     // 这样绝对是错误的

        // 可以初始为 null。与 C++ 不同的是，Java 可以重新引用，而且引用可以为空
        int arr[] = null;
        arr = new int;

        // 这也是一样的
        int days[] = new int[]{ 1, 3, 5 };
        int days[] = { 1, 3, 5 };

        // 二位数组也是可以得
        int grid[][] = new int[3][4];
        int[] grid[] = new int[3][4];
        int grid[][] = new int[3][4] {  { 1, 2, 3, 4 },
                                        { 1, 2, 3, 4 },
                                        { 1, 2, 3, 4 }  };
        int grid[][] = new int[3][];
        ```

        `int [3][]` 和 C++ 恰好相对。因为 C++ 内存布局。

        Java 会进行边界检查。


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

方法与方法的重载 -<

:   ```java
    public class Func {
        public static void drawRectangle(int x, int y) {
            ...
            // 函数可以 return 返回值或 void。（当然要和声明的一样）
        }
        public static void main(String [] args) {
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

:   -   基本数据类型的参数传递，比如 int，是按值传递。这是 value semantic。
    -   引用类型的参数传递：数组、除 String 以外的其他所有类型的对象。

垃圾回收机制 -<

:   只能用 new 申请内存，Java 承包了内存释放和垃圾回收。
    垃圾回收减免了两种常见错误：内存泄漏和无效内存的引用。

Static -<

:   和 C++ 的完全一致，除了 Java 的静态成员变量可以直接在类里面初始化（而且，这
    是变量的定义，而不像 C++ 那样，只是声明）。

    ```java
    class American {
        static String country = "美国";
        ...
        static {
            ...                         // 静态代码块，在类被载入时执行
        }
        public SomeStaticFunction() {
            ...                         // 静态函数，在类实例化对象的时候执行
        }
    }
    System.out.println("American is "+American.country);
    ```

    `public static void main(String args[]) { }` 是静态的。
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

抽象类和接口 -<

:   -   abstract
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

对象的多态性 -<

:   Object 类 -<

    :   或多或少继承了 `java.land.Object`。

        Objects 类中主要包括 `clone()`、`finalize()`、**`equals()`**、**`toString()`**。
        子类可以重写这些函数。

        但是不可重写 getClass，notify，notifyAll，wait 等方法，因为这些都是 final 类型。

        getClass()

        toString()

        ```java
        public class Instance {
            public String toString() {
                return "string of Instance instance.\n";
            }
        }
        System.out.println(new Instance());
        ```

    多态 -<

    :   ```java
        public class Employee extends Object   { }
        public class Manager  extends Employee { }
        Employee e = new Manager();                     // 合法
        ```

异常 -<

:   -   runtime exception: java.lang.RuntimeException 或者 java.lang.Error
    -   checked exception: java.lang.Exception

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

        public static void main( String args[] ) {
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

包 -<

:   目录树。用 `.` 来分隔目录，就避免了【是 `/`？还是 `\`？的麻烦】。

    ```java
    package ocean.javatest;

    public class Person {
        public static void main(String args[]) {
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

    $ java ocean.javatest.Person
    I'm a Person.
    ```

    `import cn.symbio.example.*;`

    成员的访问控制：private, default, protected, public

    类的访问控制：public 和 default

Jar 包 -<

:   java archive file

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
    示例 2: 使用现有的清单文件 'mymanifest' 并
               将 foo/ 目录中的所有文件归档到 'classes.jar' 中:
           jar cvfm classes.jar mymanifest -C foo/ .
    ```

    可以对目录下的 class 文件进行压缩打包。

    ```bash
    $ jar cf  test.jar test                 # test 子目录 -> test.jar
    $ jar cvf test.jar test                 # verbose
    $ jar tf  test.jar                      # 列出目录
    $ jar tvf test.jar                      # 列出目录
    $ jar xf  test.jar                      # 解压
    $ jar xvf test.jar                      # 解压
    ```

    可以用解压软件如 7-zip 来解压 jar 包。

String 和 StringBuffer -<

:   都在 java.lang 中，不需要 import。

    ```java
    String s;               // String 是 immutable 的
    s.replace("j", "i");    // 这只会返回新对象，而不会修改 s

    StringBuffer sb;
    sb.append("C");         // sb 被改变了
    ```

基本数据类型的包装类 -<

:   ```java
    Float.SIZE              // #bits
    Float.MIN_VALUE;
    Float.MAX_VALUE;
    ```

集合类 -<

:   Vector & Enumeration

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

Collection & Iterator -<

:   ```java
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

    Collection，Set，List,

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

    Object.hashCode

    Object.equals

    Perperties 是在 Hashtable 基础上加了序列化功能。
    Tiger 还可以序列化到 XML。

    ```java
    import java.util.*;
    import java.io.*;

    public class LoadSample {
        public static void main(String args[]) throws Exception {
            Properties prop = new Properties();
            FileIniputStream fis = new FileInputStream("sample.properties");
            prop.load(fis);
            prop.list(System.out);
            System.out.println("\nThe foo property: " + prop.getProperty("foo"));
        }
    }
    ```

System -<

:   in, out, err

    gc(), exit(), getenv, getProperties(), arraycopy(), currentTImeMillis();

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
        -   String [] list()：目录下 entrylist
        -   String [] list( filter )：目录下 entrylist
        -   `File[] listFiles()`
        -   public static File[] listRoots()：`/bin`，`/etc`，`/tmp`，等等
        -   mkdir, mkdirs，后者类似于 `mkdir -p Many/DIRS`
        -   renameTo( File dest )
        -   setReadOnly()


        ```java
        import java.io.File;
        import java.io.IOException;
        public class FileDemo {
            public static void main(String args[]) {
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

    InputStream

    :   ```java
        ...
        ```

        -   int available()，还可以读取的字节数
        -   void close()
        -   int read()，读入一个字节（0~255），如果 -1，则是 EOF。
        -   int read(byte[] b)
        -   int read(byte[] b, offset, lengh)
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

## 界面

放弃。不要用 Java，用 JS。

## String

-   \#1 - with plus operator，直接用 `+`

-   \#2 - with StringBuilder

    :   ```java
        // This way doesn't create any intermediate strings. It just stores the string pieces, and ties them together
        // when toString() is called.
        // Hint: This class is not thread safe. A thread-safe alternative (with some impact on performance) is StringBuffer.
        StringBuilder builderConcatenated = new StringBuilder();
        builderConcatenated.append("You ");
        builderConcatenated.append("can use ");
        builderConcatenated.append("the StringBuilder class.");
        System.out.println(builderConcatenated.toString()); // only now is the string built
        // Output: You can use the StringBuilder class.
        ```

        提供的接口有：

-   \#3 - with String formatter

    :   ```java
        // Another alternative way to create strings. Fast and readable.
        String.format("%s may prefer %s.", "Or you", "String.format()");
        // Output: Or you may prefer String.format().
        ```

        类似于 C++ 中的 printf

        // Arrays
        // The array size must be decided upon instantiation
        // The following formats work for declaring an array
        // <datatype>[] <var name> = new <datatype>[<array size>];
        // <datatype> <var name>[] = new <datatype>[<array size>];
        ```

```java
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

调用 stringbuffer 的 equals 的时候，你可能需要的是 sb.toString().equals( rhs.toString() )

可以用 instanceof 关键字判断能否正确。

```java
java.io
java.lang
java.math
java.net
java.sql
java.text
java.util
```

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

## 系统调用，C++ 联动

## 序列化 & 网络通信

## 数据库

## 日志

## 并发

---

## JVM

-   Loading
-   Linking
-   Initializing

[Windows - Bazel](https://www.bazel.io/versions/master/docs/windows.html#installing-bazel-on-windows)

Release binaries are available on our GitHub [release](https://github.com/bazelbuild/bazel/releases) page.

To run the binary you will need:

-   Java JDK 8 or later
-   msys2 (need to be installed at C:\tools\msys64\).
    We build against version 20160205, the newer versions should also work. Older versions are known to have issues.

Before you run the binary, you will need to set some environment variables:

```bash
export JAVA_HOME="$(ls -d C:/Program\ Files/Java/jdk* | sort | tail -n 1)"
export BAZEL_SH=c:/tools/msys64/usr/bin/bash.exe
```

If you run outside of bash, ensure that msys-2.0.dll is in your PATH (if you install msys2 to c:\tools\msys64, just add c:\tools\msys64\usr\bin to PATH).

[H2 Database Engine](http://www.h2database.com/html/main.html)

[Apache Log4j 2：一款全新的日志记录工具 - 资源 - 伯乐在线](http://hao.jobbole.com/log4j2/)

[google/protobuf: Protocol Buffers - Google's data interchange format](https://github.com/google/protobuf)

[uniVocity-parsers：速度最快功能最全的CSV开发库之一 - 资源 - 伯乐在线](http://hao.jobbole.com/univocity-parsers/)

[jobbole/awesome-java-cn: Java资源大全中文版，包括开发库、开发工具、网站、博客、微信、微博等，由伯乐在线持续更新。](https://github.com/jobbole/awesome-java-cn)
[akullpp/awesome-java: A curated list of awesome Java frameworks, libraries and software.](https://github.com/akullpp/awesome-java)

[google/jimfs: An in-memory file system for Java 7+](https://github.com/google/jimfs)

-   boolean, Boolean
-   byte, Byte
-   char, Char
-   short, Short
-   int, Int
-   long, Long
-   float, Float
-   double, Double

```java
public class FinalDemo {
    final float PI = 3.14PI;
    final int arrInt[] = { 1, 2, 3, 4 };
    final int num;
    final String str;
    {
        num = 5;                    // 再不能被修改了
    }
    public FinalDemo {
        str = "不能再改了";
    }
}
```

final 的方法（最终方法）：不允许被覆盖（可以重载一个参数不一样的，但是不能覆盖）

```java
class Base {
    public final void add(int x, int y) {
        ...
    }
}
```

final 的类：不可以被继承

```java
final class Base {
    ..
}
```

内部类：

```java
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

断言：

```java
assert 3 < 5;
assert 3 > 5: "这当然是不对的。"
```

打开断言：`java -ea SomeClass`

```java
e.printStackTrace();
```

[JVM Minimal Survival Guide – Hadi Hariri](http://hadihariri.com/2013/12/29/jvm-minimal-survival-guide-for-the-dotnet-developer/)

[IntelliJ IDEA Minimal Survival Guide – Hadi Hariri](http://hadihariri.com/2014/01/06/intellij-idea-minimal-survival-guide/)

IntelliJ IDEA Tips

-   To quickly see the documentation for a class or method at caret, press Ctrl+Q (View | Quick Documentation).
