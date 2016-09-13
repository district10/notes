---
title: Working Notes
...

-   **You should blog even if you have no readers.**

-   360 的自我保护模式，关闭，然后才能退出。 -<

    :   真想不通图书馆那个重启后自动回复到原始状态的电脑上干嘛要装 360，你还得
        手工关闭着破玩意。

        还有那蛋疼的有道词典以及它蛋疼的弹窗。以及搜狗输入法。即使搜狗输入再好
        ，我也不愿意用，因为它打扰我，妈的智障软件。

        还有蛋疼的 Adobe 阅读器，安装后没有打开过一次，害得所有人打开后看它长长
        的license，都要点“接受”。

        还有图书馆的【有道笔记本】，txt 居然默认用这货打开！这货修改后没保存居
        然没有提示。当然我说的不是退出的时候直接就退出了，我说的是他居然没有显
        示一个`*` 表示内容已经修改，这不是行业规范吗？！

-   `CMAKE_BUILD_TYPE=Release/Debug`{.cmake} -<

    :   A Release build is equivalent to use the
        `--enable-optimized` flag in the configure script, while a Debug build is
        equivalent to the `--disable-optimized` flag.

-   VS 版本号 -<

    :   For Visual Studio 2013, use the generator for Visual Studio 12. The
        name of the generator uses the Visual Studio version instead of its
        commercial name.

        **VC Version Number & Prebuild**

        | compiler  | IDE |
        | :-------: | :---: |
        | `vc14`    |  Visual Studio 2015 (OpenCV3) |
        | `vc12`    |  Visual Studio 2013 (OpenCV2, OpenCV3)  |
        | `vc11`    |  Visual Studio 2012 (OpenCV2) |
        | `vc10`    |  Visual Studio 2010 |
        | `vc9`     |  Visual Studio 2008 |
        | `vc8`     |  Visual Studio 2005 |
        | `vc7.1`   |  Visual Studio .NET 2003 |
        | `vc7`     |  Visual Studio .NET 2002 |
        | `vc6`     |  Visual Studio 6.0 |

-   about LLVM  -<

    :   The most noticeable design decision of LLVM is its segregation between backend
        and frontend as two separate projects, LLVM core and Clang. LLVM started as a set
        of tools orbiting around the LLVM intermediate representation (IR) and depended
        on a hacked GCC to translate high-level language programs to its particular IR,
        stored in bitcode files. Bitcode is a term coined as a parody of Java bytecode files. An
        important milestone of the LLVM project happened when Clang appeared as the first
        frontend specifically designed by the LLVM team, bringing with it the same level of
        quality, clear documentation, and library organization as the core LLVM. It is not
        only able to convert C and C++ programs into LLVM IR but also to supervise the
        entire compilation process as a flexible compiler driver that strives to stay compatible
        with GCC.

        +   clang check
        +   clang format
        +   C/C++ program ---clang--> LLVM IR

        clang:

        1.  c/c++ -> LLVM IR
        2.  dump the internal Clang Abstract Syntax Tree (AST) representation of any
            program

        Clang Modernizer
          ~ It is a code refactoring tool that scans C++ code and
            changes old-style constructs to conform with more modern styles proposed
            by newer standards, such as the C++-11 standard

        Clang Tidy
          ~ It is a linter tool that checks for common programming mistakes
            that violate either LLVM or Google coding standards

        Modularize
          ~ It helps you in identifying C++ header files that are suitable to
            compose a module, a new concept that is being currently discussed by C++
            standardization committees (for more information, please refer to Chapter 10,
            Clang Tools with LibTooling)

        PPTrace
          ~ It is a simple tool that tracks the activity of the Clang
            C++ preprocessor

        ```bash
        $ clang-modernize –version
        clang-modernizer version 3.4
        ```

        Understanding Compiler-RT

        :   The Compiler-RT (runtime) project provides target-specific support for low-level
            functionality that is not supported by the hardware. For example, 32-bit targets
            usually lack instructions to support 64-bit division. Compiler-RT solves this problem
            by providing a target-specific and optimized function that implements 64-bit division
            while using 32-bit instructions. It provides the same functionalities and thus is the
            LLVM equivalent of libgcc. Moreover, it has runtime support for the address and
            memory sanitizer tools. You can download Compiler-RT Version 3.4 at http://llvm.
            org/releases/3.4/compiler-rt-3.4.src.tar.gz or look for more versions at
            http://llvm.org/releases/download.html

        ```cpp
        #include <stdio.h>
        #include <stdint.h>
        #include <stdlib.h>
        int main() {
            uint64_t a = 0ULL, b = 0ULL;
            scanf ("%lld %lld", &a, &b);
            printf ("64-bit division is %lld\n", a / b);
            return EXIT_SUCCESS;
        }
        ```

        ```bash
        clang -S -m32 test.c -o test-32bit.S    # -m32  --> 32 bit x86 program
        clang -S test.c -o test-64bit.S         # .S    --> assembly lang
        ```

        Even with the rise of Clang, DragonEgg persists today because Clang only handles
        the C and C++ languages, while GCC is able to parse a wider variety of languages.

        refs and see also

        -   <http://blog.csdn.net/yeliping2011/article/details/7210700>

-   tasklist, taskkill

-   一个中科大 LUG 的 Qt 教程：<https://lug.ustc.edu.cn/sites/qtguide/>

-   ShareX, <-- .net 4.0

-   CSAPP: encoding -<

    :   ```cpp
        /* WARNING: This is buggy code */
        float sum_elements(float a[], unsigned length)
        {
            int i;
            float result = 0;

            for (i = 0; i <= length-1; i++)
                result += a[i];
            return result;
        }
        ```

        In the single-precision floating-point format (a float in C), fields s,
        exp, and frac are 1, k = 8, and n = 23 bits each, yielding a 32-bit
        representation. In the double-precision floating-point format (a double in C),
        fields s, exp, and frac are 1, k = 11, and n = 52 bits each, yielding a
        64-bit representation.

        ```
        exp  = e_{k-1}...e_0 -> E
        frac = f_{n-1}...f_0 -> M

        s           k (exp)                         n (frac~[0, 1))
        1    +       8 (0-- 255,  -128-- 127)   +   23=32
        1    +      11 (0--2047, -1024--1023)   +   52=64
        ```

        exp = 0 -> denormalized form.

        page 89

-   i3 快捷键 -<

    :   -   Mod1 + 数字 切换到不同虚拟桌面 (container)
        -   Mod1 + enter 启动 terminal 终端
        -   Mod1 + v 启动 dmenu, 可以方便启动各个程序
        -   Mod1 + f 全屏当前程序
        -   Mod1 + 方向键 在一个虚拟桌面 container 里切换不同程序界面
        -   Mod1 + Shift + 数字键 将当前程序移动到指定虚拟桌面
        -   Mod1 + Shift + ; 改变窗口排列为纵向
        -   Mod1 + Shift + q 退出当前程序窗口
        -   Mod1 + Shift + r 重启 i3, 不会关闭当前程序窗口, 但是会失去窗口的布局
        -   Mod1 + Shift + e 注销退出 i3, 会关闭所有程序
        -   Alt-Shift-<方向键>

-   [这部好片我一直舍不得安利 - 简书](http://www.jianshu.com/p/d8790315b483#) -<

    :   破碎人生

        Demolition

        还是在悼念妻子的晚宴，他都面无表情，一副找抽的臭脸。

        但妻子一死，他也立马变成行尸走肉。

        好矛盾的男人。

        想缅怀一下妻子，却连一滴眼泪也挤不出来。

        一起去沙滩旁的马戏团，看荒废的旋转木马。

        他俩可没上床！

        为啥？因为本片的导演是让·马克·瓦雷啊，他才不讲狗血的故事。

        他擅长的，是找一个独特的切口。

        让你意外地看见：

        哦，对啊，这才是我们容易忽略的、个人生活的阴暗面啊。

        他们遇到一道生活的坎，还要孤独地走出来，毫无外界助力。

        在《破碎人生》里，妻子的去世，其实并不是这道坎。

        他的坎，是老婆死了，我却哭不出来。

        他真的不爱自己的妻子吗？

        不，他不爱的人，是自己。

        他对一切都漠不关心。

        “不是我的椅子，我就不关心”

        命题作文啊，同学们。

        影片的英文原名Demolition，意为拆毁，破坏。

        编剧布莱恩·斯普最初的灵感，就来源于年轻时做过的拆迁工作——

        我挥动大锤，砸碎窗户，砸裂天花板，砸倒围墙。然后建筑工人才能把他们重新组合到一起。

        男主的岳父在片中无意间说出了，拆东西的哲理——

        如果你想修好什么

        在Sir看来，这其实不是一个怪人的故事。

        这是一个时代的故事。

        男主，很像王朔笔下的“橡皮人”。

        当你一旦认清事实，你就永远无法否认，回避，自欺欺人了。我带着我那副惨白，发着橡皮光泽和质感的面孔走在街上，任何人哪怕是白痴也能一眼认出我的非人。

        ——《橡皮人》

        身为这个高压社会中的凡人，我们都有内心阴暗的一面。

        区别在于——

        你有没有勇气，把一切推翻、拆散，再重建？

-   [还以为她只有胸和屁股，那她怎么靠声音拿影后 - 简书](http://www.jianshu.com/p/66fd396bc62b) -<

    :   好莱坞被这个天生会演戏的小姑娘震惊，称她为——

        The New Hot Thing.

        这大概就是我们“小鲜肉”的最初由来。

        此后，身材越露越少，戏份却越来越重。

        如今，她已经成为复联团队不可缺少的一员——

        是超级英雄们最可靠的帮手。

        这股劲，是自信。

        来源于内心对表演的追求——

        名利不是我追求的东西。

        我只想一辈子当个演员。

-   [奶爸的英语教室-微广场-关注你最关心的内容](http://www.iwgc.cn/list/2128)

-   不断地练习，直到你的每一根手指都能清楚记得周围的按键在什么地方。

-   [电影下载帮助 - BT电影天堂](http://btbt.tv/bangzhu.html) -<

    :   清晰度注解？

        1、**CAM（枪版）** -<

        :   CAM 通常是用数码摄像机从电影院盗录。有时会使用小三角架，但大
            多数时候不可能使用，所以摄像机会抖动。因此我们看到画面通常偏暗人物常常会失
            真，下方的 字幕时常会出现倾斜。 由于声音是从摄像机自带的话筒录制，所以经常
            会录到观众的笑声等声音。因为这些因素，图象和声音质量通常都很差。

        2、**TS (准枪版)** -<

        :   TS 是 TELESYNC 的缩写。TS 与 CAM 版的标准是相同的。但它使用的是外置
            音源（一般是影院座椅上为听力不好的人设的耳机孔）这个音源不能保证是好的音源，
            因为受到很多背景噪音的干扰。TS 是在空的影院或是用专业摄像机在投影室录制，所
            以图象质量可能比 CAM 好。但画面的起伏很大。论坛上常出现的有一般 TS 版和经过修复
            清晰 TS 版

        3、**TC (胶片版)** -<

        :   TC 是 TELECINE 的缩写。TC 使用电视电影机从胶片直接数字拷贝。画面
            质量还不错, 但亮度不足，有些昏暗。很多时候制作 TC 使用的音源来自 TS，因此音质很
            差，但画面质量远好过 TS。如果不是太讲究的话 TC 版还是不错的选择。

        4、**DVDSCR (预售版)** -<

        :   SCR 是 SCREENER 的缩写。DVDSCR 预览版的或者是测试版的 DVD，非
            正式出版的版本。从预览版 DVD 中获取，通过 mpeg-4 技术进行高质量压缩的视频格式。
            能比 DVDRip 早发布，但画质稍差。（经常有一些不在黑边里在屏幕下方滚动的消息，
            包含版权和反盗版电话号码 ，会影响观看。）如果没有严格的划分它的画质应与 TC 版
            差不多。

        5、**R5（俄罗斯5区版）** -<

        :   俄罗斯 5 区版的 DVD，因为配音为俄语，所以需要去寻找英语音
            轨，R5 版本就是一种合成版本（俄 5 区 DVD 视频＋通过其它渠道获得的英语音轨），R5
            版本的画质一般都不错，音频部分由于音轨的来源不同，效果有好有差。

        6、**HD RIP（高清版）** -<

        :   HDRip 是 HDTVRip（高清电视资源压缩）的缩写，是用
            DivX/XviD/x264 等 MPEG4 压缩技术对 HDTV 的视频图像进行高质量压缩，然后将视频、音
            频部分封装成一个.avi 或.mkv 文件，最后再加上外挂的字幕文件而形成的视频格式。
            画面清晰度更高。

        7、**BD（蓝光版）** -<

        :   BD 是 Blue Disk 的简称，翻译成中文是“蓝光影碟”的意思。就是从蓝
            光影碟转录的视频和音频，画面清晰度很高。

        8、**DVD,HDVD,DVD5,DVD9 DVD** -<

        :   的英文全名是 Digital Video Disk, 即数字视频光盘或数
            字影盘, 它利用 MPEG2 的压缩技术来储存影像。

        9、**HDVD（压缩碟或者经济版DVD）** -<

        :   HDVD 俗称压缩碟或者经济版 DVD，介质通常为 DVD-5
            （容量 4.7G）也有 DVD-9 的（容量 8.5G），采用 MPEG-1 或 MPEG-2 编码，由于码流较低，
            所以每张盘可容纳长达 7 个小时的视频节目，画质水平略高于或等同于 VCD。用于看连
            续剧最省钱。

        10、**VHSRip VHSRip** -<

        :   是从零售版 VHS 录象带转制，主要是滑冰 / 体育内容的发布。

        11、**TVRip** -<

        :   从电视（最好是从数码有线电视 / 卫星电视捕捉）转制的电视剧，或接收由
            卫星提前几天向电视网传送的预播节目（不包含加密但有时有雪花）。有些节目，比
            如 WWF RAW IS WAR 包含多余的部分；"DARK MATCHES"和 CAMERA/COMMENTARY 测试被包含
            在 TVRip 里。PDTV 是从 PCI 数码电视卡捕捉，通常效果最好；破解组织倾向于使用 SVCD
            来发布。VCD/SVCD/DivX/XviD rips 也都被用于发布 TVRip。

        12、**WORKPRINT (WP) WORKPRITN (WP)** -<

        :   是从未完成的电影拷贝转制而成，可能会缺失镜
            头和音乐。质量可能从最好到很差。有些 WP 可能和最终版本相差很远。(MEN IN BLACK
            的 WP 丢失了所有的外星人，代之以演员)；另一些则包括多余的镜头 (Jay and Silent
            Bob). WPs 可以作为有了好质量的最终版本后的附加收藏。

        13、**DivX Re-Enc** -<

        :   DivXRe-Enc 是从原始 VCD 发布用 DivX 编码成的小一些的文件。通常可
            在文件共享网络找到。它们通常以 Film.Name.Group(1of2) 等形式命名。常见的发布
            组织有 SMR 和 TND。这些版本通常不值得下载，除非你不清楚某部电影，只想要 200MB
            的版本。一般应避免。

        14、Watermarks 很多从 Asian Silvers/PDVD (参看下面) 来的电影带有制作人的标记。
        通常是一个字母，名字缩写或图标，位于屏幕一角。最有名的是"Z","A"和"Globe"。

        15、Asian Silvers / PDVD Asian Silvers / PDVD 是亚洲盗版商发行影片的，通常被
        一些发布组织购买来当做他们自己的发布。Silvers 很便宜，在很多国家都很容易找到。
        发布 Silvers 很容易，所以现在有很多发布，主要是由一些小的组织发布；这些组织通
        常发布几个 RELEASE 后就不见了。PDVD 和 Silver 一样，不过是压在 DVD 上。 PDVD 通常有
        外挂字幕，质量也比 Silver 好。PDVD 象普通的 DVD 一样转制，但通常用 VCD 的格式发布
        Scene Tags 发布文件的标志。

        16、PROPER 根据发布规则，最先发布 Telesync (TS) 的组织赢得 (TS 发布的) 比赛。但
        是，如果这个发布版本质量很差，同时另一组织有另一 TS 版本 (或质量更好的同一片
        源)，那么标记 PROPER 被加到目录上以避免重复。PROPER 是一个最主观的标记，很多人
        会争论是否 PROPER 比原始发布版本好。很多发布组织只不过因为输掉了发布比赛而发
        布 PROPER。发布 PROPER 的原因因该总是包含在 NFO 文件里。

        17、SUBBED 对于 VCD 发布而言，SUBBED 通常表示字幕被压进了电影。它们通常是马来
        语 / 中文 / 泰文等，有时有两种语言。它们可能占据了很大一部分屏幕。SVCD 支持外挂
        字幕，所以 DVDRip 用外挂字幕发布。这些信息可以在 NFO 文件中找到。

        18、UNSUBBED 当一部电影曾经发布过有字幕的 SUBBED 版本，没字幕的 UNSUBBED 版本也
        可能发布。

        19、LIMITED LIMITED 电影指该电影只在有限的电影院放映，通常少于 250 家。通常较
        小的电影（比如艺术电影）的发行是 LIMETED。

        20、INTERNAL INTERNAL 发布有几个原因。经典的 DVD 组织有很多.INTERNAL. 发布版本，
        这样不会引起混淆。同时，低质量的发布会加以 INTERNAL 标记，这样不会降低发布组
        织的声誉，或由于已经发布的数量。INTERNAL 发布可以正常的在组织的会员网站上获
        取，但没有其他网站管理员的要求它们不可以被交换到其他网站。一些 TERNAL 发布仍
        然流到 IRC/NEWSGROUP，这通常取决于电影及其流行度。今年早些时候，人们把
        CENTROPY 做为 INTERNAL。这表示发布组织只向其会员和网站管理员发布。这和其通常
        意思不同。

        21、STV STV 表示电影从未在电影院放映过就被发布，因此很多望网站不允许 STV。

        22、ASPECT RATIO TAGS *ws*表示宽银幕，*FS*表示全屏幕。

        23、RECODE RECODE 是以前已经发布过的版本，通常用 TMPGenc 编码过滤以去除字幕，
        纠正颜色等。虽然它们看起来好一些，但通常不认为这是好的行为因为发布组织应该
        去找他们自己的片源。

        24、REPACK 如果发布组织发布了一个坏的版本，他们会发布 REPACK 来解决这些问题。

        25、NUKED 一个发布可能因为多种原因被 NUKE 掉。有些网站会因为违犯他们的规则而
        NUKE 发布 (比如不允许发布 TS 版本)。但如果发布的版本有很大的问题 (如 20 分钟没有
        声音，CD2 是错误的电影或游戏)，那么所有的网站都会 NUKE 这个发布。在这些网站上
        交换 NUKED 版本的人会失掉他们的信誉。但 NUKED 发布仍然可以通过 P2P/USENET 传播，
        所以应该总是首先找到其被 NUKE 的原因以防万一。如果发布组织发觉他们的发布有问
        题，他们可以要求 NUKE。

-   [Terr Tai's Blog](http://terrytai.me/profile/)

-   [如何评价电影《夏洛特烦恼》？ - 温建波的回答 - 知乎](https://www.zhihu.com/question/35514477/answer/66122643) -<

    :   大春最后的回答让人明白了：即便真有这么一个人，穿越回到97年，极力告诉你想尽
        办法买房，你也不会因房致富。

        因为就算你买了你也会过两年就迅速卖掉，你不会撑到 15 年 20 年后再卖掉。当时的人
        是脱离不了当时人的思维的。在当时人看来，5000 涨到了 7000 这已经非常恐怖了，迅
        速卖掉是最好的选择。你会沾沾自喜，等着后面房价降下来接手你房子的人吃苦果。

        你根本不会去相信 7 千会涨到 1 万，1 万会涨到 2 万，2 万涨到 3 万，现在二环
        边上都没有 5 万一平的均价了。。这种轮番上涨是当时代的人没法想象的。

        所以啊，思维是脱离不了时代的窠臼的。

        ---

        二十年之后的人过来告诉你房价那时候是一百二十万一平，你现在也不会去买的

        （话说，看了这个电影，真心不喜欢。）

-   任何智商正常人士都不会在这个问题上持太过标新立异的看法。

-   [上海的中学教育有何厉害之处？ - 知乎](https://www.zhihu.com/question/22195196#answer-3433815) -<

    :   哈哈哈。英语确实。

-   [图灵社区 : 图书 : Chrome 扩展及应用开发（首发版）](http://www.ituring.com.cn/book/1421)

-   [《用 CvANN_MLP 进行路牌判别》by 唐志雄 来自爱可可-爱生活 - 微博](http://weibo.com/1402400261/E1xsWvZ47?type=comment#_rnd1470039381546)

-   [如何比较 UPA 和萨格勒布学派的动画作品？ - 知乎](https://www.zhihu.com/question/22230758)

-   [Image Transforms - Fourier Transform](http://homepages.inf.ed.ac.uk/rbf/HIPR2/fourier.htm)

-   [2016 校招小结 - 作业部落 Cmd Markdown 编辑阅读器](https://zybuluo.com/chaoren-fly/note/191366)

-   [WebGL Indoor Real-Scene Application System Based on Three.js](http://www.swoda.cn/Panorama/)

-   [ffmpeg Documentation](http://ffmpeg.org/ffmpeg.html)

    :   <http://whudoc.qiniudn.com/2016/ffmpeg.exe>（36.9 MB）

        refs and see also

        -   [ffmpeg 基本用法 (转) - wainiwann - 博客园](http://www.cnblogs.com/wainiwann/p/4031129.html)

-   <http://gnat.qiniudn.com/misc/pano/Panorama.7z>

-   [广埠屯杀人案真相调查：一个电脑城的孤独守望者为什么会变成绝望者？](http://mp.weixin.qq.com/s?__biz=MzAwNDA5NDIwNA==&mid=2650149457&idx=1&sn=59d3c72c19749567153e289421a3fe24&scene=23&srcid=0804I12ZsEVleKiErUxQAzuk#rd)

-   [罗雪娟：“泳池中的水不太干净，但我是干净地站起来的！” - 七七影音书 - 诗生活网](http://www.poemlife.com/thread-537459-1-1.html){.featured}

-   晒脸直播的危害，远远比你能想到的强烈。 -<

    :   词汇的贫瘠，品位的庸俗，都不是最可怕的。最可怕的是居心的无耻和恶毒。有些女主播，
        长得很好，一开口就恶毒不堪：“进来就走的会变短，不关注的也变短。”我观察了一分
        钟，来来回回就是“变短”、“变长”，谁送礼物，就阿谀谁，谁不关注，就诅咒谁。

        这是很恐怖的事：只靠一分钟说二十遍“谢谢关注”、“谢谢宝宝”，就可以成为职业，月入
        数万，这是狠狠扇了辛苦劳作的人一巴掌，让人人都想不劳而获。这种风气蔓延开，社会
        就会越来越糟糕。

        埋头苦干的人灰心之后，会普遍泛起一种观念：傻子太多，想混口饭吃，只有去当骗子。
        于是一窝蜂转型当骗子。然后发现，连骗子都吃不饱了，骗子也变成了傻子。

        晒脸直播的危害，远远比你能想到的强烈。当好逸恶劳、哗众取宠成为竞相标榜的东西，
        我们所处的环境会越来越糟糕，贫富会两极分化，人变得越来越蠢。真正有价值的内容，
        不再有人关注，因为缺乏受众，也会慢慢生产不起，廉价愚昧的东西会更加泛滥。

-   [四元數與旋轉](http://openhome.cc/Gossip/ComputerGraphics/QuaternionsRotate.htm)

-   [齊次座標](http://openhome.cc/Gossip/ComputerGraphics/HomogeneousCoordinate.htm)

-   [三維直角座標之繞軸旋轉](http://openhome.cc/Gossip/ComputerGraphics/Rotate3Dimension.htm)

-   iterator 是標準函式庫定義類別（Class），它是一個指標，指向 iterator 物件的
    真正位址，對它進行 ++ 的動作，表示移動至 iterator 的下一個元素，對它使用*運
    算子（Dereferences operator），表示提取出 iterator 目前位址的值，如果
    iterator 走訪至結束位置的 iterator 的位址，表示元素走訪完畢。

-   [Password-Generator](http://devnotes.org/note/Password-Generator.html)

-   [如何管理并设计你的口令 | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/2428.html)

-   mkdir mkdirs -<

    :   ```bash
        $ a2 mkdir -p a/a{1,2}/ b/b{1,2} c/c{1,2}
        $ a2 for i in a/a{1,2}/{i,ii,iii}; do echo $i > $i.md; done
        $ a2 tree a
        a
        ├── a1
        │   ├── iii.md
        │   ├── ii.md
        │   └── i.md
        └── a2
            ├── iii.md
            ├── ii.md
            └── i.md

        2 directories, 6 files
        $ a2 cat a/a1/iii.md
        a/a1/iii
        ```

    4 GB or 4 Gb？

-   [Comfortable handling of registers - Vim Tips Wiki - Wikia](http://vim.wikia.com/wiki/Comfortable%5Fhandling%5Fof%5Fregisters) -<

    :   -   `/`, `control R`, `%`
        -   `:let @+=@%`

        refs and see also

        -   [vim - Copy from one register to another - Stack Overflow](http://stackoverflow.com/questions/1502218/copy-from-one-register-to-another)

-   `#pragma GCC diagnostic error "-std=c++11"`

-   [北京户籍的学生进入清华北大以后和外省的学生有没有水平差异？ - 知乎](https://www.zhihu.com/question/21335841)

    :   我认为一个优秀程序员的思维是缜密细致的，在出问题后，他会详细的先研究问题出在哪
        里，思考缘由，而非闷头瞎使用 printf 大法，然后去撞大运，头痛医头，脚疼医脚，因
        为这样解开了 Bug 其实连自己都心虚。而优秀的程序员即使解开了 Bug，他也会扩展问题，
        并且思考是否其它部分是否也有类似的问题，只是还未体现，而且他也会详细反思获得的
        经验。

        在美国念书的时候，有一次做老美的车，闲来无事就跟他扯了扯国内是怎样追女生的，说
        的起劲我就给他说了下在中国如果你对一个妹子很好但是她不喜欢你那她就会给你发“好人
        卡”（nice person card 我一激动瞎编的……）。我想了想他大概不知道好人卡是什么，正
        想跟他解释，他突然恍然大悟般地地拍着方向盘跟我说，“对对对，我曾经追过一个女生好
        久，后来她也跟我说‘你是个很好的人，但是我们不适合’”。

        虽然隔着太平洋那么宽的文化鸿沟，我们的心里却流下了相同的泪水 T-T。

        很多群众的不满来源于，揭露三鹿的不是央视，揭露地沟油的不是央视，揭露黑砖窑的不
        是央视，揭露PM2.5的不是央视，堂堂中央媒体揭露人所共知的东莞问题如此大张旗鼓，各
        频道配合作战。这是为捏软柿子，算不得光彩。

        部下仓官王垢入秉操曰：“兵多粮少，当如之何？”操曰：“可将小斛散之，权且救一时之急。”
        垢曰“：兵士尚怨，如何？”操曰“：吾自有策。”垢依命，以小斛分散。操暗使人各寨探
        听， 无不嗟怨。皆言丞相欺众。操乃密召王垢入曰：“吾欲问汝借一物，以压众心，汝勿
        吝。”垢曰： 丞相欲用何物？”操曰“：欲借汝头以示众耳。”垢大惊曰“：垢实无罪！”操曰：
        “吾亦知汝无罪，但不杀汝，军心变矣。汝死后，汝妻子吾自养之，汝勿虑也。”垢再欲
        言时，操早呼刀斧手推出门外，一刀斩讫，悬头高竿，出榜晓示曰：“王垢故行小斛，盗窃
        官粮，谨按军法。”于是，众怨始解。

-   [完全用命令行工作 — 一年后的思考](http://blog.youxu.info/2011/01/24/keyboard-only-thoughts-one-year-later/)

-   [How to move the mouse cursor with the keyboard in Windows.](http://www.computerhope.com/issues/ch000542.htm)

-   [He "Lonnie" Liu - CSE, UC San Diego](http://liulonnie.net/)

-   [18-25岁：也许是一生中最困难的时候｜Emerging Adulthood - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/20493903)

-   [如何看待王宝强与马蓉离婚？ - 夺命帅逼阿凡提的回答 - 知乎](http://www.zhihu.com/question/49581600/answer/116875215)

-   [像我王宝强这样的男人，帅起来根本挡不住… - 屌私型格 - 知乎专栏](https://zhuanlan.zhihu.com/p/20164622)

-   [关于读书的流水账 - 捣乱小子 - 博客园](http://www.cnblogs.com/daoluanxiaozi/archive/2012/03/14/2397033.html) -<

    :   有大牛跟我说过，当你发现一本书写的非常不错而且很适合你的时候，那么该是你认
        真的时候了。因为在以后你几乎没有机会回头看那本书。这一点我非常有感触，所以
        每一本机经可以说都是生命中的过客，当你与之际遇之时，好好领略领略它的魅力，
        切勿囫囵吞枣，因为没有什么比时间更重要了。^_^加油，各位。

-   [最大的悲剧：不是坏人的嚣张 而是好人的沉默_文化_腾讯网](http://cul.qq.com/a/20140618/011928.htm) -<

    :   “**我们这一代人终将感到悔恨，不仅因为坏人可憎的言行，更因为好人可怕的沉默。**”这是
        马丁·路德·金的名言，出自《伯明翰监狱来信》（1963 年）。此言在中国引用率极高，有
        时还被改头换面，以适应中土的气候，如最常见的这一版：“历史将会记录在这个社会转型
        期，最大的悲剧不是坏人的嚣张，而是好人的沉默。”无论翻译的版本怎么变异，批判的方
        向却始终不易：好人的沉默。

        除了恐惧，沉默如瘟疫一般蔓延，还有一个原因。我们都听过安徒生的童话《皇
        帝的新装》，为什么最后站出来指出皇帝没有穿衣服的会是一个孩子呢？泽鲁巴
        维尔认为：“这一点很难被称之为巧合，因为社会习俗告诉我们不要去关注不该关
        注的事物，而孩子正是还未曾学会该社会习俗的人。”

-   CSS background -<

    :   ```css
        body {
            background-image: url('http://invisible-island.net/img/xterm-icons.jpg');
            background-repeat: no-repeat;
            background-position: center 100pt;
            background-attachment: fixed;
        }
        ```

-   [笔记:把时间当做朋友 | Wilbeibi Blog](http://wilbeibi.com/2012/12/2012-12-05-timeasfriend/)

-   if a man is always political right -<

    :   -   too dumb, can't figure out the truth
        -   too coward, afread to say the truth
        -   too bad, want to get something from this system

-   [那些无用的人----《人类简史》读后感 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2016/08/useless-people.html) -<

    :   "今天，人类正在让许多物种灭绝，甚至可能包括自己。如果今天发生核灾而让世界末
        日降临，人类将毁灭，而老鼠和蟑螂很可能继续生存下去。或许 6500 万年后，会有一
        群高智商的老鼠心怀感激地回顾人类造成的这场灾难。"

        我们还有多久时间？没有人真正知道。如果智人的历史确实即将谢幕，我们这些最后
        一代的智人，或许该花点时间回答最后一个问题：我们究竟想要变成什么？"

        今年 5 月，美国达拉斯发生袭警案，一名狙击手放冷枪，打死了 5 个警察。最后，他被
        包围在一片建筑群里面，但不知道他的确切位置。

        ![](http://www.ruanyifeng.com/blogimg/asset/2016/bg2016081605.jpg)

        警方就派出一个遥控机器人，在建筑群里巡查，一发现目标，就扔出一颗炸弹，一下
        子就把罪犯炸死了。整个行动高效、快速，警方没有任何流血。更重要的是，这是历
        史上第一次，机器人警察杀死人类。

        将来越来越多的人会发现，他们根本不可能找到工作。智力和体力两方面，机器都比
        人类能干。你要么比机器更能干，要么比机器更便宜，否则你怎么跟机器竞争工作岗
        位呢？

-   [为什么美国中小学生学的数学比我们简单，美国人却还能做出超级牛的东西？ - 阿尔塔夏的回答 - 知乎](https://www.zhihu.com/question/20953633/answer/50573056)

-   [为什么中国的游戏开发制作技术那么落后？ - 知乎](https://www.zhihu.com/question/20403852#answer-6783204)

-   [为什么恐怖片里往往小孩子是让人觉得最恐怖的？ - 知乎](https://www.zhihu.com/question/19909627#answer-1329397) -<

    :   古龙在他的小说里曾经说过，江湖上最不能惹的便是老人、小孩和女人——他们既然敢
        出来闯荡江湖，必有些过人的绝招。恐怖片里看似柔弱的女人和小孩也是如此：你完
        全想不到他们会如何杀死你，你也完全不知道如何能逃脱死亡的命运。

-   [Victor Diors Guo 答过的问题 - 知乎](https://www.zhihu.com/people/victor-diors-guo/answers?order_by=vote_num)

-   [如何理解和避免「信息不对称」？ - 知乎](https://www.zhihu.com/question/24709876#answer-6863219)

-   [坏人做了好事就是好人，为什么好人只做一件坏事就不能被原谅？ | 科学人 | 果壳网 科技有意思](http://www.guokr.com/article/5642/)

-   [GitHub - ldong/github_issues_viewer](https://github.com/ldong/github_issues_viewer)

-   [一个关于数学归纳法的悖论问题：到底是第 N 天有 N 个红眼睛自杀，还是什么都不会发生？ - 逻辑 - 知乎](http://www.zhihu.com/question/21262930)

    :   [长大以后，你悟出过哪些不一样的道理？ - 生活 - 知乎](http://www.zhihu.com/question/29064753)

        我承认这个回答的确是吐槽阿里 HR 的做事态度。毕竟我看到的都是不负责，不公开，
        不透明。但是在评论区看到说我看热闹的言论，引起了我的自省。我是不是太偏激了
        是不是太过分了。

        深思熟虑后，我的答案是：没有。

        另外，奉劝一下，阿里的员工，尤其是 HR 之类的人，最好提前养一些知乎的小号，
        以备不时之需。要不一上来，都是刚注册的零发言零提问的帐号来发信息，你们自己
        不丢人吗？阿里是不是应该在内部开展一个《如何做一个合格的水军》的培训了?

        工号，本来是十进制的数字，转成二进制的点点点隐藏在页面上，一般不注意的话看
        不出来

        [如何评价左耳朵耗子因为工作居住证离开阿里巴巴？ - 程序员 - 知乎](https://www.zhihu.com/question/30778071)

        待人友善是修养，独来独往是性格。

        其实“性格好”“讲道理”往往是身体健康精力充沛的人才有资格表现的品质。

        和人一起爬山，有人两步就嚷嚷累，不一定是他毫不在意出游的气氛，可能是他身体
        弱容易觉得累。这时有人接过他的包就扛在自己肩上，固然是这人慷慨相助，但也是
        他体力充沛，以至于不觉得帮人拿个包有什么了不起的。我以前觉得只要努力，就可
        以意识集中，可以提高工作效率，可以温柔地对待任何自己想要温柔对待的人。但在
        身体状况不好的时候我发现，控制情绪的难易程度和身体状况是息息相关的，意志力
        能解决的问题比我想象中的少得多。人们眼中的奇葩可能很想成为让人们喜欢的人，
        只是没有办法。身心健康，身在心前。正在经受身体痛苦的人很难保持内心不扭曲。

        “现代社会越来越物质化，社会上充斥的信息都是刺激你去消费，然而这些让你消费的
        东西，往往是你不需要的。关键是要想清楚，如何在这个欲望爆炸的时代，做回你自
        己。”

        长大后，慢慢地明白，其实很多时候，学习应该是一件快乐的事。靠着自虐式的
        吃苦，能换来一时的进步，可是要想保持，始终还是不能用“吃得苦中苦”来麻醉
        自己。

        【- 唯有行动才能解决焦虑 -】

        在没有彩虹表，计算能力不强的年代，一个 md5 加密的确可以解决问题。后来随
        着计算能力的提升，人们把常见的字符组合都拿去 md5 跑一遍，生成彩虹表，简
        单的 md5 就没有用了。所以一般都需要加盐，并且每个用户的盐都不同。这样即
        使别人直接拿到了你的数据库数据，他也没办法根据彩虹表知道用户密码是啥了。

-   [启发式提问指南 - 开放的智力 - 知乎专栏](https://zhuanlan.zhihu.com/p/20115497)

-   [人为什么要多读书？ - 豆瓣 - 知乎](https://www.zhihu.com/question/22169271)

-   [技术性书籍如何做读书笔记和总结？ - 互联网 - 知乎](https://www.zhihu.com/question/29451585)

-   [怎么看待北京暴雨外卖小哥被辱骂事件？ - 覃超的回答 - 知乎](http://www.zhihu.com/question/48754812/answer/112788057) -<

    :   我一直秉持的原则是：尊重是相互的。你敬我一尺，我敬你一丈。你若不客气，
        不好意思，我会更不客气。

-   [世界上最没用的东西是什么？ - 覃超的回答 - 知乎](http://www.zhihu.com/question/21905681/answer/93573344) -<

    :   “没有实力的愤怒”

        a comment:

        >   我感觉中国人听中国人讲的英语更容易听懂，比如听马云说话明显比听奥巴马说话更容易听懂(同一话题)

        ...

        1995 年，Elon 拿到 物理学 和 经济学 的本科双学位，并来到 Stanford 攻读应用物
        理的 PhD 博士。但是仅仅过了两天，他便着迷于硅谷的互联网和创业文化，于是申请
        退学正式工作和创业。

        Elon Musk 称其在最为痛苦的时刻，“睡着觉也在哭”：因为醒来的时候，发现整个枕
        头是湿的。这里借用他在 Ask me anything 里的一句话：“if you're going through
        the hell, keep going.”（来自丘吉尔）

        接下来是我更加关心的问题，为什么 Elon Musk 这么猛？ 他如何跨学科学习的？他的思维模式是怎样的？ -<

        :   他极度勤奋且酷爱学习

            :   在看他的自传里，很多时候描述就是：他每天都在思考和阅读，经常几个小时就可以读完一本书，然后挑里面的关键内容再花一天时间精读；

            他创业的方向一直是他从小热爱的东西

            :   这很重要但是容易被大家忽视。兴趣是最好的老师，而做感兴趣的事情才是
                可以坚持一生的事情。不管是火箭，外太空旅行还是可再生能源，这些都是
                Elon Musk 在孩提时期就很着迷的事情，另外更加重要的是，它们对整个人
                类发展有重大的意义。可能我们没有这么好的机遇或者本钱去做改变人类命
                运的事情，但是我们应该学会去追求自己儿时一直喜欢的兴趣，并想方设法
                将兴趣和自己的工作相结合，亦或是出来做自己喜欢的创业项目。

            他的学习方法和思维模式

            :   在 TED 的采访中，他坦言自己最赞同的思维模式是 “First principle
                thinking”。 “First principle thinking” 的详细解释和如何运用我会在另
                外的问题专门回答。简单说来，First principle thinking 就是从事物最基
                本的公理为出发点来进行推导的思维方式。其对立的方法是 Analogy（类推
                法），简单说来就是别人或者其他事物如何如何，所以我也要如何如何。

                举例说明：“现在我有 1 万刀的现金想投资股票，我应该买什么股票？”
                Analogy ：“别人家之前买了这几支股票，赚了不少，或者我旁边有个股
                票大神也买了这几个股票，赚了，所以我也准备买这几个股票。”First
                principle thinking：“首先去弄明白股票的原理，看清股票涨跌的本质，
                然后分析公司的背后价值，接着根据自己的需求，看自己是想长久投价
                值，然后在 A 股市场利用趋势捞一波。当然也有可能，在分析过程中发现
                股票市场的风险大小超过了自己的承受范围，从而放弃投资股票。转而
                杀入债市或者定期投资等。”

                从上面可以看出几点：First principle thinking 对一个人的学习能力要求
                很高，同时分析问题的过程冗长；类推法则很方便，直接 O(1) 出解，只是并
                不知其所以然，并且缺乏对本质问题的理解。这两种思维模式的选取是一个
                辩证的问题：在大部分的问题上可以采用 Analogy，节约时间。但是对于重
                要的可能决定自己命运轨迹的问题，则采用 first principle thinking（比
                如创业 方向？模式？，长期投资等）。

                最后， 如何像 Elon Musk 一样厉害呢？ 做好的上面的三点 + N小时的
                “精深练习”。推荐一篇最近看到的文章，说努力的重要性：
                <http://zhuanlan.zhihu.com/kungfucharlie/20129091> （生活规律 +
                专注+ 坚持）

    [数据｜程序员为什么不炫富？ - 覃超帝国兴亡史 - 跨越美利坚 & 技术精进之路 - 知乎专栏](https://zhuanlan.zhihu.com/p/21112258?refer=qinchao)

    [你的努力程度之低，根本轮不到拼天赋 - 功夫查理的编剧笔记 - 知乎专栏](https://zhuanlan.zhihu.com/p/20129091)

[Pi - 5 Trillion Digits](http://www.numberworld.org/misc_runs/pi-5t/details.html)

[个性也是一种竞争力 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2016/04/personality.html)

[Image Optimization Part 2: Selecting the Right File Format](http://yuiblog.com/blog/2008/11/04/imageopt-2/)

[比较下中国大陆和香港之间的个税差异 - 老赵点滴 - 追求编程之美](http://blog.zhaojie.me/2013/07/china-hongkong-taxing-comparison.html)

:   至于其他开销，由于已经去除了差距最大的“房租”部分，我个人并不认为大陆一线大
    城市（北京、上海、深圳）与香港相比有明显差距，更何况在某些方面，例如电子产品，
    手机费，宽带费，还有女性日常所需的化妆品保养品等方面，香港似乎都还比大陆便宜不
    少。

    因此我认为，假如您的收入较高（例如年入超过60w人民币），不如考虑下在香港发展的机会。

[理查德·汉明《你和你的研究》 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2016/04/you-and-your-research.html)

[Rule of thumb - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Rule_of_thumb)

[partitioning - How to enable exFAT in Ubuntu 14.04 - Ask Ubuntu](http://askubuntu.com/questions/451364/how-to-enable-exfat-in-ubuntu-14-04)

:   ```
    Error mounting /dev/sdb1 at /media/tzx/Lubuntu: Command-line `mount -t "exfat"
        -o "uhelper=udisks2,nodev,nosuid,uid=1000,gid=1000,iocharset=utf8,namecase=0,errors=remount-ro,umask=0077"
        "/dev/sdb1" "/media/tzx/Lubuntu"' exited with non-zero exit status 32: mount:
        unknown filesystem type 'exfat'
    ```

    ```bash
    sudo apt-get install exfat-fuse exfat-utils
    sudo mkdir /media/exfat
    sudo mount -t exfat /dev/sdxx /media/exfat
    ```

[在宿舍写代码总被一个室友认为在装逼，该怎么办？ - 知乎](https://www.zhihu.com/question/30362260)

:   大多数时候所谓合群，都渐渐成了平庸。如果大家原本就不一样，保持不一样就挺好。

    大学的时候室友经常聚在一起看NBA或者少儿不宜的片子，而我只是一个人默默的敲键
    盘。

    他们经常会嘲讽我：还真是小看你了，丫还是一个文人呢。

    我回应着说：我不是文人，我是骚客。

    [程序员到底有多累、多辛苦？ - 知乎](https://www.zhihu.com/question/39813913)

    :   中铁大桥局，执全球桥梁工程牛耳，云南普立大桥，当前全球第一高桥。现场资
        深建筑工程师，住工程房，餐风宿雪，一年回不了几次家，月收入不足两万。

        中国水电，全球水电工程项目几无敌手，某主力勘探院资深工程师，非洲丛林住
        简易房，一呆一个多月，国内出差以月计，平时半数在西藏，周六基本为工作日，
        国内时月入一万出头。

        以上两例，均是 **30-40 之间的，智力体力都在巅峰**。程序员同学自行对比。

        IT 至今仍是投入产出比最高的行业之一，很多人天天挂在嘴边的金融IT男，不是
        空穴来风。

        这个行业这不算苦，不算累，只是有点智力门槛而已。

        我们程序员闲的没事时候，又习惯性不想离开计算机，然后就总编些自黑的段子，
        又苦又累也好，收入低早衰也罢，包括找不到媳妇之类，全是这么出来的，行
        外人不必当真。

        只不过，段子传的时间长了，信的人就多了。
        现在居然一些自己人也信了。

[Whiplash (2014 film) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Whiplash_(2014_film)) -<

:   refs and see also

    -   [爆裂鼓手_百度百科](http://baike.baidu.com/link?url=RNj8w_HrmNEbgJuZ4cgc27qdps_Nc4Cg7P4o8sU7aq8PgoWsxyKkejdU1PvCnbMrlM5xVO_xd7Jip0NeFLMTStZjK8eHEvPJsZclYmdblBy5EFUR1Gy-mALX9fu4I0Tv) -<

[百度百科_V百科_东北的老人谁来养](http://baike.baidu.com/vbaike/%E4%B8%9C%E5%8C%97%E7%9A%84%E8%80%81%E4%BA%BA%E8%B0%81%E6%9D%A5%E5%85%BB/10517)

[笨猪五国_百度百科](http://baike.baidu.com/link?url=wY7kDlT6tt-KV4Y3HJA6Tg9uacKJL94P_6V2Fec2lD_xug8Ivv-PcOaGtW5pKUDh0PgyrDlqCNVFBhXExF42iq9Pk0XIo2qAtdB8gKop8hytOZ6MYdkkCjYPdkcsWtV4sSJkHNjmakjjBfKvhoQy1rcZ_CW8I3T1xQAlBnQ-Pwgtwt3lIOhV7ibLzMBSAy1_)

[恋人相处 - 话题精华 - 知乎](https://www.zhihu.com/topic/19691659/top-answers) -<

:   进化从来不保留无用的东西。在夜间，彩色视觉基本没用，所以哺乳动物丢失了绿和蓝两
    种颜色的视蛋白，而进化出了对运动物体更敏感，更适于夜间使用的灰度视觉。红和紫在
    光谱是位于可见光的两端，离得太远。于是，作为一种补偿，哺乳动物的红色视蛋白向短
    波方向偏移了一些，到了黄色区域。

    当灵长类出现以后，它们懂得食用果实，以更高效地获取能量。成熟的果实才甜，糖分才
    高。如果比别的同类更能发现成熟的果实，无疑是一种生存优势。于是，灵长类在进化中
    重新获得了彩色视觉。它们的黄绿色视蛋白（曾经是红色视蛋白）进化出了一个副本，而
    这个副本向红色方向偏移，使灵长类能够区分红绿两色。

    当我在努力试着让自己达到一个知乎公认，甚至女朋友身边闺蜜，我身边朋友，以及旁观
    者所认为的，一个优秀的男朋友时，她认为这些都是理所当然，而对于自己是否做到了一
    个优秀的女朋友的标准，她一点都不知道。

    更重要的是，男生对于爱情的思维方式很简单：

    >   我对你好，但也请你， 对我好一点。

    然而并非如此。她离开我只是因为我们不合适。生活经历的不同导致生活理念的不同，正
    如她所言：“我们注定是不合适的。”

    她的丈夫对她呵护备至，正筹划生第二个孩子。每当我看见她在微信上和家人开心地合影时，我明白，其实分手都是有原因的，并不该为此后悔。如果勉强继续，才该后悔。

    每个人都不该为前任后悔，每个人也不会为前任后悔。

    最多只是为不如意的现今发个慨叹，或是怀念一下当年的青涩与纯真罢了。

    我始终认为，
    男孩子请了你，是男孩子有风度，
    男孩子和你A，是男孩子尊重你。

    |   退出前，我很“傻”的打出了一大段“政治正确”的“教导语”，告诉队友不该没有礼貌，不该无脑把队友当傻瓜，不该爆粗口。
    |   然后换来了更大一屏的侮辱性更甚的谩骂。
    |
    |   局后同学跟我说，你太逗了吧，说这些干嘛？
    |   我说：这是我最后一局 dota。
    |   同学：啥？！为啥？！
    |   我一指屏幕：你看，堂堂一个重点大学，都是高考六百好几十分进来的，打 dota 的却尽是这种人。吾虽不肖，不屑与这等人为伍。
    |   朋友张张嘴又合上了，大概是认为我说的不对，但又一时不知道该如何反驳。

    喜欢睡姑娘又不想恋爱，你就大大方方告诉对方，我不找女友，近几年也不会结婚，你要
    是觉得跟我在一起开心那咱们就好好开心，你要是接受不了这种关系那抱歉咱们以后有缘
    再见。不想找男友只想约会的姑娘多了，追求一致的，happy起来也更痛快不用瞻前顾后啊。
    你偏偏要假装爱对方，诱使对方动了真情，以男友的身份骗了几炮就要跑，那也就莫怪别
    人一哭二闹三上吊了。

    **约前卑躬屈膝像条狗，约后大义凛然骂人不自爱，渣得空前绝后。**

    东北话叫敞亮、北京话叫局气、湖北话叫耍拉、湖南话叫撩瞥、云南话叫板扎、四川话叫
    不扯谎瞭白、普通话叫，爱要坦荡荡。

    在这个前提下，我们看到的，才是一个真实的男人，其余那些，都是**蹩脚的演员**。

[我该拿什么拯救你的英语写作能力 - The Dairy of Marisa - 知乎专栏](https://zhuanlan.zhihu.com/p/20761142?refer=marisa)

[只增不减的互联网恶习](http://yanyiwu.com/work/2016/01/21/silly-increment.html)

[姚氏教学法成功案例分析](http://yanyiwu.com/work/2015/12/19/yao-style-leadership.html)

[假如真的有寒冬](http://yanyiwu.com/work/2015/09/05/if-the-winter-is-coming.html)

:   互联网的价值是什么？ 我认为是效率，互联网公司具有传统公司不具备的高效率。

[影响我一生的两个选择](http://yanyiwu.com/life/2014/10/11/choices-change-my-life.html)

:   在大三的时候我过去北大互联网实验室实习，是想使用自己的保送研究生的资格保送
    到北大读研究生。 可惜后来保送北大落选（最后保送到北邮的网络研究院，也就是去
    年因为毕业去谷歌的人数多而在应届生小有名气的研究生院）。 而在那个大三的暑假，
    我回家用了一个月的时间和家人亲戚朋友谈我不打算继续读研的想法， 长辈几乎没人
    理解，为什么一个他们眼中的好学生会有这么大逆不道的想法？ 而当我在他们的要求
    下继续读了研究生之后，我更加坚定了我的想法。 正如许大神当时备考了清华计算机
    研究生却在最后选择了直接工作的原因相同： 研究生不过是在给导师打工而已。 而
    我从大三开始就一直在外面疯狂的实习。 我深刻知道外面工作 和 给导师打工 之间
    个人能力提升的巨大差别。 而且我实习的内容属于个性化推荐和搜索服务，广告系统
    的工程实践性工作。 这方面我所读的研究生院导师项目，那些所谓的国家级 863 项目，
    无法给予我任何帮助。 读研的最大收获是让我明白原来以前仰慕的各种 863 国家项目，
    原来都是可以浑水摸鱼忽悠过去的。

    所以当时摆在我面前的无非有两条路，一是继续留在学校里面，像那些最后去谷歌的
    学长学姐一样，疯狂的刷面试题目。 等找工作之前先去微软亚洲研究院实习，然后继
    续刷题，最后运气不差的话，拿个谷歌的 offer 。 网上有不少拿了谷歌 offer 的应
    届生写长篇大论关于如何拿到谷歌 offer 如何难如何难 ，其实秘籍很简单：刷题 + 实
    习。 这个秘籍并不是我无中生有，这是有法可依的，至少从去年和今年看，这个方法
    屡试不爽。 今年刚听说一个本科和我一起组队搞北邮 ACM 校赛的学长，也是这么干
    的，然后也是顺理成章拿到了谷歌美国的 offer。

[如何成为内在动机驱使的人？ - 阳志平的网志](http://www.yangzhiping.com/psy/YangQ&A-SelfDetermination.html)

:   之后，放弃了学术康庄大路，走上了创业林萌小路。十来年，我一直在心理学这个狭
    小领域工作，看着全国高校心理系数量从我就读时的二十个扩张为两百个；看着心理
    学从无人听闻到今天成为显学，人工智能、产品设计与企业管理无处不在。十来年，
    我的经验是，越凭兴趣去做的事，越容易取得预想不到的成就，如果一上来精打细算，
    奔着名利去，那么它也就是那么回事。

    看起来一切都很好，就是感觉太物质了…过上怎样的精神追求就看个人了。其实有钱还
    是好啊，可以专心 IT/EE 技术宅，不愁买不起设备。也可以雇几个 phd 每周给自己
    讲篇 paper 愉悦一下身心。只不过香港没有领先的制造业光搞金融不是回事。不知道
    自己一个人技术宅下去是不是足够有趣……当然地球已经是平的了，能做到什么地步还
    是靠自己。

[Lu Wang's Page](http://coolwanglu.github.io/)

:   His name is written as 王璐 in Chinese.

    He [codes](http://github.com/coolwanglu/).

    He draws.

    He plays.

    He talks.

    He [types](http://data.typeracer.com/pit/profile?user=coolwanglu).

    He notes.

    He is not cool at all despite his stupid username.

[Re: TopLanguage {经典演讲}庞加莱关于数学发现的心理学的演讲 - Google 网上论坛](https://groups.google.com/forum/#!topic/pongba/PfyE4FBkhsw) -<

:   以下是导读和自己的一点感想：

    在读《数学领域发现的心理学》的时候看到脚注里面提到庞加莱的这篇演讲。最喜欢
    数学家讲problem solving心理学了。认知科学家、神经科学家没有数学家解决复杂问
    题时候的心理体验，所以做的研究缺乏一些也许只能靠内省来获得的知识，而且使用
    的问题也趋于简单。而数学家又往往不通心理学，或者干脆就不关心问题到底是怎么
    解决的，只关心能否解决。

    所幸庞加莱，这个被称为最后一位数学全才的人，对解题的心理学也非常有兴趣。在
    演讲中可以发现，他对于自己解决数学问题过程中的心理过程作了深刻的反省，虽然
    庞加莱不是认知神经科学家，但演讲中的使用的类比以及描述基本上都是靠谱的。

    其中最有意思的是他也提到了自己的几次顿悟的瞬间（其中有一次就是著名的踏上马
    车一瞬间想到解的那次）。

    庞加莱认为下意识里面会对问题的各个元素（条件）进行组合，然后根据人对于知识
    的某种美感上的偏好筛选出来，那些足够"美"的东西就会浮上意识层面，于是产生顿
    悟。这也是我看了一些认知科学的书之后得到的说法。但此外庞加莱同时也认为下意
    识进行的探索是相当多的，他认为也许远远大于意识层面进行的探索（组合）。而我
    倾向于认为下意识层面能进行的逻辑推理是有限远的，一般一到两步就了不得了。下
    意识里面更多的进行的是某种模糊的模式匹配，或者说模糊联想。这就是为什么对问
    题有一个全局感性认识那么重要的原因，这样的认识足够模糊足够全局，有助于提取
    出重要的相关知识来。此外，一个总体的认识往往包含了问题的最重要（往往也是最
    本质的）要素，将这些要素同时装进工作记忆有着非常重要的意义----使它们有机会
    组合在一起，衍生出新的知识。否则就是陷在在问题的某个局部（某几个局部条件）
    下，得到不相干的知识。

    另外他也提到了对问题整体理解的另一个好处，当你对解的大致过程有了一个整体认
    识之后，即便缺乏某个局部的细节，也可以在这个整体视图的指导下将其推导出来
    （填充出来）。说到这里顺便说一个有关的思维心理学实验：大家知道围棋高手能够
    记忆非常复杂的残局，而新手简直连半部残局也记忆不了。原因其实就是围棋高手具
    有领域知识：对各种各样围棋套路的知识，对各种局面的形态的知识。有了这些知识，
    只要记住局面的一个大概，就可以推导出那些细节了。事实上，当让高手们记忆一盘
    毫无规律放置的棋局时，他们的表现并不比门外汉好。

    以下是全文转载(via)：Mathematical Creation How is mathematics made? What
    sort of brain is it that can compose the propositions and systems of
    mathematics? How do the mental processes of the geometer or algebraist
    compare with those of the musician, the poet, the painter, the chess
    player? In mathematical creation which are the key elements? Intuition? An
    exquisite sense of space and time? The precision of a calculating machine?
    A powerful memory? Formidable skill in following complex logical sequences?
    A supreme capacity for concentration?

    The essay below, delivered in the first years of this century as a lecture
    before the Psychological Society in Paris, is the most celebrated of the
    attempts to describe what goes on in the mathematician's brain. Its author,
    Henri Poincaré, cousin of Raymond, the politician, was peculiarly fitted to
    undertake the task. One of the foremost mathematicians of all time,
    unrivaled as an analyst and mathematical physicist, Poincaré was known also
    as a brilliantly lucid expositor of the philosophy of science. These
    writings are of the first importance as professional treatises for
    scientists and are at the same time accessible, in large part, to the
    understanding of the thoughtful layman.

    Poincaré on Mathematical Creation The genesis of mathematical creation is a
    problem which should intensely interest the psychologist. It is the
    activity in which the human mind seems to take least from the outside
    world, in which it acts or seems to act only of itself and on itself, so
    that in studying the procedure of geometric thought we may hope to reach
    what is most essential in man's mind...

    A first fact should surprise us, or rather would surprise us if we were not
    so used to it. How does it happen there are people who do not understand
    mathematics? If mathematics invokes only the rules of logic, such as are
    accepted by all normal minds; if its evidence is based on principles common
    to all men, and that none could deny without being mad, how does it come
    about that so many persons are here refractory?

    That not every one can invent is nowise mysterious. That not every one can
    retain a demonstration once learned may also pass. But that not every one
    can understand mathematical reasoning when explained appears very
    surprising when we think of it. And yet those who can follow this reasoning
    only with difficulty are in the majority; that is undeniable, and will
    surely not be gainsaid by the experience of secondary-school teachers.

    And further: how is error possible in mathematics? A sane mind should not
    be guilty of a logical fallacy, and yet there are very fine minds who do
    not trip in brief reasoning such as occurs in the ordinary doings of life,
    and who are incapable of following or repeating without error the
    mathematical demonstrations which are longer, but which after all are only
    an accumulation of brief reasonings wholly analogous to those they make so
    easily. Need we add that mathematicians themselves are not infallible?...

    As for myself, I must confess, I am absolutely incapable even of adding
    without mistakes... My memory is not bad, but it would be insufficient to
    make me a good chess-player. Why then does it not fail me in a difficult
    piece of mathematical reasoning where most chess-players would lose
    themselves? Evidently because it is guided by the general march of the
    reasoning. A mathematical demonstration is not a simple juxtaposition of
    syllogisms, it is syllogisms placed in a certain order, and the order in
    which these elements are placed is much more important than the elements
    themselves. If I have the feeling, the intuition, so to speak, of this
    order, so as to perceive at a glance the reasoning as a whole, I need no
    longer fear lest I forget one of the elements, for each of them will take
    its allotted place in the array, and that without any effort of memory on
    my part.

    We know that this feeling, this intuition of mathematical order, that makes
    us divine hidden harmonies and relations, cannot be possessed by every one.
    Some will not have either this delicate feeling so difficult to define, or
    a strength of memory and attention beyond the ordinary, and then they will
    be absolutely incapable of understanding higher mathematics. Such are the
    majority. Others will have this feeling only in a slight degree, but they
    will be gifted with an uncommon memory and a great power of attention. They
    will learn by heart the details one after another; they can understand
    mathematics and sometimes make applications, but they cannot create.
    Others, finally, will possess in a less or greater degree the special
    intuition referred to, and then not only can they understand mathematics
    even if their memory is nothing extraordinary, but they may become creators
    and try to invent with more or less success according as this intuition is
    more or less developed in them.

    In fact, what is mathematical creation? It does not consist in making new
    combinations with mathematical entities already known. Anyone could do
    that, but the combinations so made would be infinite in number and most of
    them absolutely without interest. To create consists precisely in not
    making useless combinations and in making those which are useful and which
    are only a small minority. Invention is discernment, choice.

    It is time to penetrate deeper and to see what goes on in the very soul of
    the mathematician. For this, I believe, I can do best by recalling memories
    of my own. But I shall limit myself to telling how I wrote my first memoir
    on Fuchsian functions. I beg the reader's pardon; I am about to use some
    technical expressions, but they need not frighten him, for he is not
    obliged to understand them. I shall say, for example, that I have found the
    demonstration of such a theorem under such circumstances. This theorem will
    have a barbarous name, unfamiliar to many, but that is unimportant; what is
    of interest for the psychologist is not the theorem but the circumstances.

    For fifteen days I strove to prove that there could not be any functions
    like those I have since called Fuchsian functions. I was then very
    ignorant; every day I seated myself at my work table, stayed an hour or
    two, tried a great number of combinations and reached no results. One
    evening, contrary to my custom, I drank black coffee and could not sleep.
    Ideas rose in crowds; I felt them collide until pairs interlocked, so to
    speak, making a stable combination. By the next morning I had established
    the existence of a class of Fuchsian functions, those which come from the
    hypergeometric series; I had only to write out the results, which took but
    a few hours.

    Then I wanted to represent these functions by the quotient of two series;
    this idea was perfectly conscious and deliberate, the analogy with elliptic
    functions guided me. I asked myself what properties these series must have
    if they existed, and I succeeded without difficulty in forming the series I
    have called theta-Fuchsian.

    Just at this time I left Caen, where I was then living, to go on a geologic
    excursion under the auspices of the school of mines. The changes of travel
    made me forget my mathematical work. Having reached Coutances, we entered
    an omnibus to go some place or other. At the moment when I put my foot on
    the step the idea came to me, without anything in my former thoughts
    seeming to have paved the way for it, that the transformations I had used
    to define the Fuchsian functions were identical with those of non-Euclidean
    geometry. I did not verify the idea; I should not have had time, as, upon
    taking my seat in the omnibus, I went on with a conversation already
    commenced, but I felt a perfect certainty. On my return to Caen, for
    conscience's sake I verified the result at my leisure.

    Then I turned my attention to the study of some arithmetical questions
    apparently without much success and without a suspicion of any connection
    with my preceding researches. Disgusted with my failure, I went to spend a
    few days at the seaside, and thought of something else. One morning,
    walking on the bluff, the idea came to me, with just the same
    characteristics of brevity, suddenness and immediate certainty that the
    arithmetic transformations of indeterminate ternary quadratic forms were
    identical with those of non-Euclidean geometry.

    Returned to Caen, I meditated on this result and deduced the consequences.
    The example of quadratic forms showed me that there were Fuchsian groups
    other than those corresponding to the hypergeometric series; I saw that I
    could apply to them the theory of theta-Fuchsian series and that
    consequently there existed Fuchsian functions other than those from the
    hypergeometric series, the ones I then knew. Naturally I set myself to form
    all these functions. I made a systematic attack upon them and carried all
    the outworks, one after another. There was one, however, that still held
    out, whose fall would involve that of the whole place. But all my efforts
    only served at first the better to show me the difficulty, which indeed was
    something. All this work was perfectly conscious.

    Thereupon I left for Mont-Valérien, where I was to go through my military
    service; so I was very differently occupied. One day, going along the
    street, the solution of the difficulty which had stopped me suddenly
    appeared to me. I did not try to go deep into it immediately, and only
    after my service did I again take up the question. I had all the elements
    and had only to arrange them and put them together. So I wrote out my final
    memoir at a single stroke and without difficulty.

    I shall limit myself to this single example; it is useless to multiply
    them...

    Most striking at first is this appearance of sudden illumination, a
    manifest sign of long, unconscious prior work. The role of this unconscious
    work in mathematical invention appears to me incontestable, and traces of
    it would be found in other cases where it is less evident. Often when one
    works at a hard question, nothing good is accomplished at the first attack.
    Then one takes a rest, longer or shorter, and sits down anew to the work.
    During the first half-hour, as before, nothing is found, and then all of a
    sudden the decisive idea presents itself to the mind...

    There is another remark to be made about the conditions of this unconscious
    work; it is possible, and of a certainty it is only fruitful, if it is on
    the one hand preceded and on the other hand followed by a period of
    conscious work. These sudden inspirations (and the examples already cited
    prove this) never happen except after some days of voluntary effort which
    has appeared absolutely fruitless and whence nothing good seems to have
    come, where the way taken seems totally astray. These efforts then have not
    been as sterile as one thinks; they have set agoing the unconscious machine
    and without them it would not have moved and would have produced nothing...

    Such are the realities; now for the thoughts they force upon us. The
    unconscious, or, as we say, the subliminal self plays an important role in
    mathematical creation; this follows from what we have said. But usually the
    subliminal self is considered as purely automatic. Now we have seen that
    mathematical work is not simply mechanical, that it could not be done by a
    machine, however perfect. It is not merely a question of applying rules, of
    making the most combinations possible according to certain fixed laws. The
    combinations so obtained would be exceedingly numerous, useless and
    cumbersome. The true work of the inventor consists in choosing among these
    combinations so as to eliminate the useless ones or rather to avoid the
    trouble of making them, and the rules which must guide this choice are
    extremely fine and delicate. It is almost impossible to state them
    precisely; they are felt rather than formulated. Under these conditions,
    how imagine a sieve capable of applying them mechanically?

    A first hypothesis now presents itself; the subliminal self is in no way
    inferior to the conscious self; it is not purely automatic; it is capable
    of discernment; it has tact, delicacy; it knows how to choose, to divine.
    What do I say? It knows better how to divine than the conscious self, since
    it succeeds where that has failed. In a word, is not the subliminal self
    superior to the conscious self? You recognize the full importance of this
    question...

    Is this affirmative answer forced upon us by the facts I have just given? I
    confess that, for my part, I should hate to accept it. Re-examine the facts
    then and see if they are not compatible with another explanation.

    It is certain that the combinations which present themselves to the mind in
    a sort of sudden illumination, after an unconscious working somewhat
    prolonged, are generally useful and fertile combinations, which seem the
    result of a first impression. Does it follow that the subliminal self,
    having divined by a delicate intuition that these combinations would be
    useful, has formed only these, or has it rather formed many others which
    were lacking in interest and have remained unconscious?

    In this second way of looking at it, all the combinations would be formed
    in consequence of the automatism of the subliminal self, but only the
    interesting ones would break into the domain of consciousness. And this is
    still very mysterious. What is the cause that, among the thousand products
    of our unconscious activity, some are called to pass the threshold, while
    others remain below? Is it a simple chance which confers this privilege?
    Evidently not; among all the stimuli of our senses, for example, only the
    most intense fix our attention, unless it has been drawn to them by other
    causes. More generally the privileged unconscious phenomena, those
    susceptible of becoming conscious, are those which, directly or indirectly,
    affect most profoundly our emotional sensibility.

    It may be surprising to see emotional sensibility invoked à propos of
    mathematical demonstrations which, it would seem, can interest only the
    intellect. This would be to forget the feeling of mathematical beauty, of
    the harmony of numbers and forms, of geometric elegance. This is a true
    esthetic feeling that all real mathematicians know, and surely it belongs
    to emotional sensibility.

    Now, what are the mathematic entities to which we attribute this character
    of beauty and elegance, and which are capable of developing in us a sort of
    esthetic emotion? They are those whose elements are harmoniously disposed
    so that the mind without effort can embrace their totality while realizing
    the details. This harmony is at once a satisfaction of our esthetic needs
    and an aid to the mind, sustaining and guiding. And at the same time, in
    putting under our eyes a well-ordered whole, it makes us foresee a
    mathematical law... Thus it is this special esthetic sensibility which
    plays the role of the delicate sieve of which I spoke, and that
    sufficiently explains why the one lacking it will never be a real creator.

    Yet all the difficulties have not disappeared. The conscious self is
    narrowly limited, and as for the subliminal self we know not its
    limitations, and this is why we are not too reluctant in supposing that it
    has been able in a short time to make more different combinations than the
    whole life of a conscious being could encompass. Yet these limitations
    exist. Is it likely that it is able to form all the possible combinations,
    whose number would frighten the imagination? Nevertheless that would seem
    necessary, because if it produces only a small part of these combinations,
    and if it makes them at random, there would be small chance that the good,
    the one we should choose, would be found among them.

    Perhaps we ought to seek the explanation in that preliminary period of
    conscious work which always precedes all fruitful unconscious labor. Permit
    me a rough comparison. Figure the future elements of our combinations as
    something like the hooked atoms of Epicurus. During the complete repose of
    the mind, these atoms are motionless, they are, so to speak, hooked to the
    wall...

    On the other hand, during a period of apparent rest and unconscious work,
    certain of them are detached from the wall and put in motion. They flash in
    every direction through the space (I was about to say the room) where they
    are enclosed, as would, for example, a swarm of gnats or, if you prefer a
    more learned comparison, like the molecules of gas in the kinematic theory
    of gases. Then their mutual impacts may produce new combinations.

    What is the role of the preliminary conscious work? It is evidently to
    mobilize certain of these atoms, to unhook them from the wall and put them
    in swing. We think we have done no good, because we have moved these
    elements a thousand different ways in seeking to assemble them, and have
    found no satisfactory aggregate. But, after this shaking up imposed upon
    them by our will, these atoms do not return to their primitive rest. They
    freely continue their dance.

    Now, our will did not choose them at random; it pursued a perfectly
    determined aim. The mobilized atoms are therefore not any atoms whatsoever;
    they are those from which we might reasonably expect the desired solution.
    Then the mobilized atoms undergo impacts which make them enter into
    combinations among themselves or with other atoms at rest which they struck
    against in their course. Again I beg pardon, my comparison is very rough,
    but I scarcely know how otherwise to make my thought understood.

    However it may be, the only combinations that have a chance of forming are
    those where at least one of the elements is one of those atoms freely
    chosen by our will. Now, it is evidently among these that is found what I
    called the good combination. Perhaps this is a way of lessening the
    paradoxical in the original hypothesis...

    I shall make a last remark: when above I made certain personal
    observations, I spoke of a night of excitement when I worked in spite of
    myself. Such cases are frequent, and it is not necessary that the abnormal
    cerebral activity be caused by a physical excitant as in that I mentioned.
    It seems, in such cases, that one is present at his own unconscious work,
    made partially perceptible to the over-excited consciousness, yet without
    having changed its nature. Then we vaguely comprehend what distinguishes
    the two mechanisms or, if you wish, the working methods of the two egos.
    And the psychologic observations I have been able thus to make seem to me
    to confirm in their general outlines the views I have given.

    Surely they have need of [confirmation], for they are and remain in spite
    of all very hypothetical: the interest of the questions is so great that I
    do not repent of having submitted them to the reader.

[信息时代的独立阅读者（一）：内心的小声音](http://mp.weixin.qq.com/s?__biz=MzIzNTA4ODA2Ng==&mid=2247483654&idx=1&sn=13f7b4190ae3a6eaa14ee38fd2ec5810&scene=0#wechat_redirect) -<

:   没有什么路是躺着走出来的。

    独立思考，从来都是一种人格，而不是一门技术。敢于在汹涌的外部声音中站定，并仍然
    听得到内心的小声音。敢于在冲突的湍流中抚摸逻辑链中最微妙的环节，品咂思维和情感
    的纹路，在因果链的最深处寻找幽暗但无可置疑的光亮。并敢于对各种信息保持开放的心
    智，而不是急于寻找安全的高地。

    所以「独立思考」的重点在于「独立」，而不是「思考」。思考是人类的本能，但缺乏独
    立的勇气，不管怎么思考都是在一个隐形的框内。

    所以，拥有独立思考的人格，Critical Thinking 只是一个技术细节而已。不拥有独立思
    考的人格，Critical Thinking 只是多了一个自我辩护的强大工具而已。

    按理来说，高度信息化的现代社会，应该很大的缓解社会阶层固化的问题，因为教育资源
    不再是一个稀缺和昂贵品（例如可汗学院的课就比大多数课堂教育更好）。然而现实却是
    阶层固化仍在继续，好大学仍然无比重要，因为阻挡人的成长的力量来自心智内部——再多/
    好的外部资源，心智不解锁，仍然是无法受用的

[網誌 - BYVoid](https://www.byvoid.com/zht/blog/tag/C++)

:   幾天以來還認識了不少同學，水平都遠超過我。從前在七中的時候，我有一種登峰造
    極的幻覺，因爲沒有人能與我的水平匹敵，可是來到這個培訓班卻發現，原來僅僅在
    河南省就有這麼多比我強的人。十天之內老師講的東西超出了我大腦能夠承受的全部，
    我深深地感受到了自己的渺小，原來前方的道路還那麼漫長。

    我向常老師申請得到了機房旁邊的一個小型辦公室，廢棄很久了，裏面放着學校網絡
    的交換機。有了這個小屋，我和馬浩、高翔三人就能更加自由地掌控來機房的時間和
    次數了，也能脫離混亂的機房環境（裏面有很多人打遊戲）。我越來越覺得，衝擊省
    選、參加 NOI 和努力學習文化課是存在着某種衝突的，時間上不可調和的衝突。我下
    定決心，在省選前將近一個月，我開始停課專門投入到競賽中。省選成功了就繼續努
    力 NOI，失敗了告別 OI，回教室補課，準備年底的保送生考試，總之，成敗在此一舉。
    馬浩和我的想法一樣，於是我們兩人便一起開始停課。然而高翔，做出了讓我至今不
    解的行爲，就在省選前一個月，他突然放棄了，不再把任何精力投入到競賽中，甚至
    連「試試」都不願意，一心去準備保送生考試了。

    從 6 月 1 號開始，我和馬浩再次停課，這次的目標是 NOI。不得不承認，學到這個
    時候，功利的心理越來越強了。以省隊隊員的身份，只要在 NOI 上獲了銀牌，就能直
    接與大學「簽約」，也就是說可以不用參加保送生考試直接保送大學。具體一點，獲
    得銀牌成績可以去上交大、復旦，銀牌前幾名可以去北大，金牌可以去清華。多麼誘
    人啊，但前來參賽的也是各路高手，想要脫穎而出並非易事。六月初我和馬浩在常老
    師的帶領下，去了廣東參加培訓，在那裏見到了更多的強人，不得不驚歎河南是個小
    地方。七月初，我和馬浩又去紹興參加了「特別夏令營」，這裏幾乎全部是各省頂尖
    人物，我深深地感受到了自己的渺小，但也積累了很好地經驗，因爲有實力不一定能
    夠成功，適當的投機很有必要。

    |   勸君莫惜金縷衣
    |   勸君惜取少年時
    |   花開堪折直須折
    |   莫待無花空折枝

    說實話，還沒開始軍訓我就後悔當時沒選擇去北大了。原因有很多，最主要的莫過於
    是清華過於強調「集體觀念」，經常強迫人做毫無意義的事情。這裏我認爲「毫無意
    義」的事情，別人也許並不這麼覺得，這也是體現了價值觀的差異。我不喜歡的是清
    華對「異端」的容忍程度要遠遠小於北大。後來我看到一篇文章，說清華人和北大人
    的差異，大致意思是清華人最大的特點是抱團，北大人各個卻像是獨行俠一樣。清華
    人創辦的企業，排他性非常強，北大人很難任職高層，而相反卻不一樣。漸漸我也明
    白了，所謂「傳統」是如何產生的。清華並非外界傳說的那樣封閉保守，但其兼容性
    真的有待於提高。一年下來，如果讓我重新選擇一次，我還會選擇清華。不知道爲什
    麼，也許祗是懼怕重來一次吧。

    自由意志主義者。信仰新不可知論，堅持古典自由主義，支持放任市場、自由貿易和
    全球化，反對政府擴張、福利主義及民粹主義。支持大城市、核電站、集約化養殖、
    轉基因作物，反對有機農業，反對「人類活動導致氣候變化說」。

[全栈工程师、极客和领导者 · BlahGeek's Blog](https://blog.blahgeek.com/fullstack-and-geek/)

:   我只是为自己又一次成为了曾经的自己不想成为的人而悲伤。

[標籤](https://www.byvoid.com/blog/tag)

[我不和運氣差的人合作，嗎？ - Tzeng Yuxio](http://tzengyuxio.me/blog/2012/04/11/to-hire-lucky-or-unlucky-its-a-question/)

:   吾少也賤，故多能鄙事。

    Ernestine 的回答點出了重點。如果我們今天有 50 個不錯的人才，那我很樂意找出到底
    哪一半的人有進公司的熱誠，哪一半沒有。但如果我們今天的履歷裡有 99 個庸才跟一個
    天才，那我的首要目標是要想辦法找出這一個天才是誰，至於誰比較有進公司的熱誠則是
    次要的了。

    >   hiring programmers, not ascetics or rock stars

    Ernestine 甚至會抗拒去查看求職者在社交媒體上分享的資訊。她不想因為求職者在政治、
    興趣等觀點上與她志趣相投或是理念不同，而產生偏見，進而影響求職者被錄用與不錄用
    （這在美國也是違法的），同時這對公司也不是件好事。她雇用時，單純只考量求職者在
    專業技能上是否滿足條件。從招聘的觀點來看，去考慮對方是否跟你合不合得來，其實就
    只是種運氣的問題，而非適任不適任的問題。

    Ernestine 的方法很簡單。今天如果我要找程式設計師，我就只專注在相關的技能、
    經驗或作品上。而不是看著履歷表上洋洋灑灑一大堆與適任與否無關的資訊或情報。


[Your Brain is 60% Female, 40% Male](http://www.blogthings.com/whatgenderisyourbrainquiz/results/?result=60)

:   -   You tend to notice when someone has poor etiquette

    Your Brain is 60% Female, 40% Male

    :   |   Your brain is a healthy mix of male and female
        |   You are both sensitive and savvy
        |   Rational and reasonable, you tend to keep level headed
        |   But you also tend to wear your heart on your sleeve

[深入理解 C 语言 | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/5761.html)

[十分钟后开始使用英语…… | {am} xiaolai](http://xiaolai.li/2016/06/11/makecs-appendix01/)

[你学你的，用不着别人批准 | {am} xiaolai](http://xiaolai.li/2016/06/14/teach-yourself-without-permission/)

[About | Xcat Liu's Blog](http://blog.xcatliu.com/about/)

[javascript - onchange event on input type=range is not triggering in firefox while dragging - Stack Overflow](http://stackoverflow.com/questions/18544890/onchange-event-on-input-type-range-is-not-triggering-in-firefox-while-dragging)

[BoroMeke | 故事有些长，有机会全都讲给你听](http://www.boromeke.com/)

[离岸公司科普 | Ntkrnl](http://shabi.us/2011/11/05/offshore-company/)

[女生拥有一头短发是一种什么体验？ - 知乎](https://www.zhihu.com/question/31159026#answer-42351840)

[事后才感觉「好像有哪里不对」是一种怎样的体验？ - 知乎](https://www.zhihu.com/question/38766625#answer-43170465) -<

:   几个程序员去吃饭，有人点了一道菜，麻辣牛蛙。然后其中有个人说自己不吃牛蛙，
    于是负责点菜的直接在麻辣牛蛙前划了两道斜线，就像这样：

    `//麻辣牛蛙`

    现场没有任何人觉得有哪里不对。

    背单词，遇到了 itch，意思是“痒；渴望”，突然有了一个了不起的发现：bitch....

[身高 2 米以上是一种怎样的体验？ - 知乎](https://www.zhihu.com/question/26730775#answer-43045149) -<

:   替我大学同寝室下铺哥们怒答一发：

    -   2 米 02 身高，体重 100kg，天天俯卧撑加仰卧起坐的魔鬼筋肉人，非虚胖那种。
        浑身毛发发达，三寸护心毛飘洒胸前。
    -   大学刚报道第一天其实我是他下铺，结果这哥们一进门我就决定跟他换上铺了。
        他说呵呵你人真好。我心想：我是为自己生命安全着想好么。睡你下铺哪天塌了
        被压死就不值了。

    发型无所谓，鼻毛必须修剪得漂亮。

    那时还找过《英儿》这本书来看，到图书馆收集相关信息，没有互联网的时代太艰难
    了。。。最后的感觉就是顾城跟我家邻居那个文盲老太差不多，神叨叨的，啥事情只
    能看到自己脚下三步之内，简单说就是自私敏感至极。

    说回节目，也许很多人不喜欢谢娜的主持风格，并把她台上的形象等同于成她本身的
    性格，进而开始讨厌这个人。但我们应该了解一件事，由于《快本》的定位是一档在
    周末老中青幼四代人都可以看的消遣节目，所以为了便于各年龄层观众的理解，对于
    主持人的角色性格设定一定要粗暴直接，也叫「脸谱化」。

    有一天，坐公交车，上来一个姑娘，迷迷糊糊没睡醒的样子。
    她掏出一张一元纸钞，在交通卡感应区来回刷。

    车门那儿的人全笑了。
    司机边笑边提醒：丫头，交通卡。

    姑娘满脸通红，慌乱的从包里翻出交通卡，麻利的塞进了投币箱。

[如何评价《生活大爆炸》里的 Amy？ - 知乎](https://www.zhihu.com/question/23515489)

[怎样更有技巧的做一个话题终结者（聊天狗带百用指南） - 简书](http://www.jianshu.com/p/e7ee8529a39a)

[什么时候会有「这 TM 都是套路」的体验？ - 知乎](https://www.zhihu.com/question/47315089#answer-43298758)

:   |   大学毕业去青海旅游，包车去青海湖的路上有一个叫日月山的景点，我们也就顺道上去看看，在山顶刚停好车便有几个卖那种藏式披肩的商人围了上来。于是我和一位卖披肩的商人发生了以下让我一生难忘的对话：
    |   “小伙子，要不要披肩啊！”
    |   “多钱啊大叔。”
    |   “300一条。”
    |   “我去，好贵啊…”
    |   “哎呀，小伙子你不会砍价吗，你问问我30一条卖不卖。”
    |   “那………30卖不？”
    |   “卖卖卖，小伙子你们要几条？”
    |   “……………”

    中国人性情是总喜欢调和、折中的。譬如你说，这屋子太暗，须在这里开一个窗，大
    家一定不允许的。但如果你主张拆掉屋顶，他们就会来调和，愿意开窗了。没有更激
    烈的主张，他们总连平和的改革也不肯行。 。。。。。你们校长深谙此道

[毛毛雨 答过的问题 - 知乎](https://www.zhihu.com/people/mmymmy/answers?order_by=vote_num)

先说一个粗俗的笑话，请大家谅解：

|   学生问老师：“男人和女人做爱做的事的时候，谁更有快感。”
|   老师说：“你挖鼻孔的时候，是手指更舒服还是鼻孔更舒服？”
|   学生又问：“既然女人更有快感，为什么男人强*女人的时候，女人要反抗呢？”
|   老师说：“你走在路上，别人来挖你鼻孔，你愿不愿意？”

之所以要说这个粗俗的笑话，就是因为，在这件事情里面，罗辑思维的工作人员向我表达的意思就是——“挖你鼻孔这么舒服的事情，你为什么会有意见？”

[你认为最优美的数据结构是什么，理由又是什么？ - 知乎](https://www.zhihu.com/question/32163076)

[王路：英语，内向，坑](https://www.douban.com/note/568781129/)

：  当时英语角也很火。去英语角的人一般有两种目的，很难分清是为了练口语还是为了泡妞
    撩汉。颜值高的人，无论口语多么蹩脚，总有异性来搭讪。如果颜值平平，口语却很好，
    也会围来一圈人。因为有了选择的余地，他往往跟异性聊得更热，对其他人只勉强敷衍两
    句。那些口语又烂，颜值又不高的人，在英语角里总是被冷落的角色，一个晚上都在看别
    人互献殷勤。

[中国人为何不守规则](https://www.douban.com/note/579036155/) -<

:   不守规则的根源之一，正是“守规则吃亏”的潜规则。

    在现实情形中，不少中国人还常常处于一种不自知的矛盾之中：他们喜欢他人守规则，
    但自己则谋求凌驾于规则之上灵活任意行事的特权。这不仅是掌握实际权力的人如此，
    普通人也不例外，很多闹事者都有这样的心理：我的任何要求（哪怕其实是无理要求）
    你都应满足我，但我不愿守任何规矩，谁谁谁都不遵守为啥我要遵守？这种心态甚至
    渗透到了商业文化之中。当我朋友代表某媒体集团去和国内一家大型代理公司谈业务
    时，说明己方的广告政策是对外一律六折，对方盛气凌人而不耐烦地说：“我知道你们
    是六折，但难道对我们也六折？”


    理由是，在印度城市高峰拥堵的时刻，“在他心目中，想要在复杂的路况中杀出一条路，
    就不要像别人一样去遵循那些规则。”

    许多人都有这样的体会：在上海这样一个经历现代化洗礼的商业城市，合同条款谈起
    来很累，但谈好后就可以放心对方会照此履行；然而在不少地方则相反，开头满口答
    应，但签署完合同才发现只是痛苦磨合的开始。一般来说，在国内越是发达的地区，
    其商业环境越遵守规范。


    只要结果好，先斩后奏的行为都会在事后得到原谅，乃至赞许和奖励，一如《寻路中
    国》中所说的那样，在中国，人们发现事后求得谅解要比事先得到许可容易得多。

    如果老有人插队，又无人维持秩序并制止这些行为，那势必造成的一个后果便是：老
    实排队的那些人反而吃亏了。

[古戈](https://www.douban.com/people/starlv/)

:   不要再问我是男是女了。如果你喜欢女生，我就是男的；如果你喜欢男生，我就是女的；
    如果你既喜欢女生又喜欢男生，那我就是小狗，汪汪汪。如果你连小狗都喜欢，那我就是
    领导在周五下午 5 点 20 分发给你的今晚加班通知。

    [装睡的人永远叫不醒](https://www.douban.com/note/261096603/)

[全世界最美丽女科学家——CDMA之母海蒂小姐](https://www.douban.com/note/205856206/)

[为什么我们公司的程序员那么拽？ - 知乎](https://www.zhihu.com/question/31243834)

[我也来说说崔添翼_洹水泛舟_新浪博客](http://blog.sina.com.cn/s/blog_52f526870102wkcf.html)

[直播世界的镜像之争 - 填坑笔记 - 知乎专栏](https://zhuanlan.zhihu.com/p/21357707)

[2014，漫步](http://xiaohanyu.me/posts/2015-04-10-2014-summary/) -<

:   说到底，我们只是不想因为金钱的缘故在自由方面向长辈妥协。我们的父母眼界过于
    狭窄，总是想着要把子女留在自己身边，努力赚钱为子女准备房车、铺好一条在他们
    看来金光闪闪的人生大道，同时也把自己后半生的幸福全部压在子女身上。

    而这无形之中带给了我们相当大的心理压力。因此不到万不得已，我们不会向父母开口。

    >   When you don't create things, you become defined by your tastes rather
    >   than ability. Your tastes only narrow & exclude people. So create.
    >
    >   --why the luck stuff «http://whymirror.github.io/»

    不知不觉已经远程工作两年多了。两年中，1/3 的时间工作赚钱，1/3 的时间阅读学
    习，1/3 的时间打把撒欢——随心所欲创造一些玩具而已。

[Hijab - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Hijab)

[Comic strip - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Comic_strip)

情商智商正常的人，即便观点不和，为了共同利益也还是会与你合作，但是傻逼只会想办法把你拉到跟他一样的水平，然后用丰富的经验打败你。

[如何看待豆瓣小组「Anti-Parents 父母皆祸害」？ - 知乎](https://www.zhihu.com/question/20326426)

:   -   在中国，亲情是一种宗教。子女只有接受的义务，没有证明或证伪的权利。
    -   对那些曾经被自己的父母亲逼得走投无路的孩子们来说，这个小组是他们最后的
        避风港。
    -   任何人都可以指责他们。但指责他们之前请想一想，将心比心，如果您自己觉得
        和自己的父母作对是痛苦的，那么请相信那些孩子也一样痛苦。

    完毕。

    这个世界有很多愚昧的人，贪婪的人，歹毒的人，心胸狭窄的人，狡诈多疑的人，好
    高骛远的人，胆小怕事的人，暴躁鲁莽的人，仗势欺人的人……难道这些人做了伟大的
    父母，这些劣行和缺陷就一夜之间消失了么？不，不仅没消失，反而在自己孩子面前
    最真实地展现着。慢水煮青蛙似的伤害着孩子的感情，身体力行地传递着这些品质。
    孩子往往就是第一个或者最大的受害者。

    反观很多为人父母的学渣，不肯把打麻将耗费的时间与金钱的十分之一拿出来做调查，
    反而积极干预子女选择。

[About - Jaylee](https://www.jaylee.cc/about.html)

[把AI逻辑推理提高100倍的青年是如何炼成的 - 今日头条(TouTiao.com)](http://toutiao.com/i6314159853078053378/)

[姑娘，你没男朋友不是因为你不美。 - 简书](http://www.jianshu.com/p/82be46a270fa)

:   这意淫我给 59 分。

    外点评一句：傻逼吃了哈哈屁。

    呵呵呵呵呵呵。 :angry: 如此优雅为哪般？答曰：人生不为其他，只求嫁个好人家。

    最后，引用知乎上高天的一段话：

    >   为什么现代“城府深”的女人被骂心机的多？原因前面说了，她们城府并不深啊！
    >   【只是喜欢面前装无辜，背后捅刀子而已。这是个选择，而不是能力。】
    >   而且现代所谓“城府深”的女人，大多最终目的就是争个男朋友，或者备胎，
    >   或者“白富美”的称号，就这个浅显的目的，也未免太让人看不上眼了。
    >
    >   最后，这绝不是一篇黑现代女人只会抢男人，大事都是男人去做的答案。
    >   只是想说明现在很多被说“有城府”的女人，真心谈不上“有城府”，最多算是个“脸皮厚”。

    本文里面所谓的优雅女人，不也就这么点出息么。呵呵。

    和这个 [“名媛培训班”的虚拟与现实：两三天花费数万，高喊我是女王_澎湃人物_澎湃新闻-The Paper](http://m.thepaper.cn/newsDetail_forward_1524473)，不谋而合：

    >   -   来这里培训的不是企业家就是企业家夫人，家里很有钱，却不知道怎么**变得优雅**。
    >   -   学员石秋身材高挑，上身穿一字漏肩雪纺衣，搭配一件一步裙，“有点小性感，有
            点甜美，还有一点职业。”她笑着评价自己。
    >   -   石秋说自己毕业于上海的一所大学，因出身农村而自卑，抱着拓展人脉的目的上
            培训班，“或者就为了找一种感觉。我以前挺不自信，感觉身边的朋友都很优秀。”
    >   -   以前，束丽芬喜欢买名牌包，“现在我宁愿花两三万去做一次超声刀，水光针，保
            养一次皮肤。花10万块钱做一次血液净化，肝脏排毒。这样我内部所有的器官很
            年轻，**又回到了二三十岁的时候样子**，我的生命是生生不息的。我想做赵雅芝那
            样子的不老女神。”
    >   -   “虽然现在很多女性被叫做女汉子，但实际上女汉子还是带有对女性的贬义，男人
            还是希望女性更像女性。喜欢那种不是那么强势不是那么强大，在穿衣打扮上都
            会更展露女性气质的一面（的女性）在中国社会科学院社会学研究所家庭与性别
            研究室副主任马春华看来，这正是这类名媛培训班存在的**社会土壤**。

[知乎的广播](https://site.douban.com/120771/status/1886597152/) -<

:   对于吃不吃早餐，每个人还是遵循自己身体的信号就好，没必要非得相信怎样才是一个最
    优的生活方案。不吃不舒服的人，就吃；赶不上的时候或者本来就没这习惯的，也没必要
    惶惶不可终日，不舒服的时候不要死扛，随身带些随时就能吃的储备粮就行。不吃早饭是
    有生理影响，但健康人的身体还没那么脆弱，饿了就吃总没错。

    「这，叫沐浴露，很高级的！」她认真地给我介绍。

    我点头如捣蒜。

    [近视的人如何改善视力？ - 眼镜有点道 - 知乎专栏](https://zhuanlan.zhihu.com/p/19819871)

[如何评价王健林「先定一个能达到的小目标，比方说我先挣它一个亿」 刷爆朋友圈？ - 暗涌的回答 - 知乎](https://www.zhihu.com/question/50126427/answer/119858578?utm_campaign=weekly230&utm_source=weekly-digest&utm_medium=email)

:   学渣问学霸：“数学怎样才能考 148 分？”学霸淡定答：“填错一个选择题就行了。”

    很多人如果没有看原视频的话很容易被误导，其实王健林说这句话是有前提的，他说
    的是“很多学生一见面就说我要当首富，我要做世界上最大的公司”但是这些学生们并
    没有具体的目标和计划，所以和“首富”这个目标相对应，王健林才让学生逐步实现自
    己的目标，才提出的先赚一个亿，你先赚了一个亿，再去考虑赚十个亿，一百个亿，
    去当首富。

    因为和成为首富相比，先赚一个亿真的只不过是一个小目标啊。虽然他后面还有一句
    说的是你是预备三年挣一个亿呢还是五年挣一个亿呢（手动摇手

[“名媛培训班”的虚拟与现实：两三天花费数万，高喊我是女王_澎湃人物_澎湃新闻-The Paper](http://m.thepaper.cn/newsDetail_forward_1524473)

[女生发现长得漂亮的人有捷径后，三观发生变化怎么办？ - 知乎](https://www.zhihu.com/question/50090386) -<

:   小孩子就是这么残酷。

    这一切让我觉得很荒唐。我是班上最好的学生之一，别人读哈利波特的时候我已经开
    始读马尔克斯，我还是个野生段子手。但这些都不能保护我，我的胖掩盖了我所有的
    优点。

    真正专业的圈子，靠脸是混不进去的。

    别人会因为你的外表喜欢你，但绝不会因此尊重你。因为专业能力而被人尊重，那种
    满足感是完全不一样的。

    所谓的粗服乱头不掩国色只是传说，保持外貌优势需要持续投入时间、精力和金钱，
    而这些资源是有限的，你选择投资外表，其他方面就必然受到损失。这些人选择放弃
    外表，是因为他们还有更大的野心。

    这年头美貌早就不是什么稀缺资源，直播平台上满屏的大眼睛锥子脸活像一个妈生的，
    花上十几万你也可以跟她们一样，靠撒娇卖萌混口饭吃。这不是天赋，只是一种选择。
    做出怎样的选择，取决于你想要什么。

    ---

    一个肤白貌美大长腿，恰逢夏天，穿个短裙，两条大白腿晃啊晃的确实很养眼。来的
    时候分到我这边，小姑娘人聪明活泼，嘴也很甜，经常和科里其他几个研究生打打闹
    闹玩的蛮欢乐。他们出去吃饭或者有其他什么好事时经常带着她一起。美女嘛，谁都
    喜欢接触。特别是我们普外科这些屌丝中的战斗机，长年看不到几个女的和尚科室。

    带了她 2 个星期，发现不好使，懒，交代她点事老是给我偷机耍滑。干活粗糙的一比，
    写个病历换个药都不让我省心。有时候实在看不过去了，说她几句，**就摆出一副无
    辜的眼神装可怜**。从来就不会主动问临床中不懂的问题。后面因为又犯了比较大的
    错事，骂了她一次，一脸不爽的说我对她有意见，我也就没怎么理她了，随她在临床
    中打酱油。

    **也许这姑娘平时仗着漂亮，被人捧习惯了，也知道怎样用自己的美貌去和人处好关
    系，得到想要的东西。就算有事时，估计撒个娇卖个萌装下可怜也能解决，都养成习
    惯来着了。**

    其他行业不清楚，反正我们当医生的，科里要的是能干活的。考研考博时，导师要的
    也是学习好、能干活的。**花瓶嘛，没事时欣赏欣赏也就罢了，没人会想拿她当顶梁
    柱的。**

[75 Years Later, Study Still Tracking Gen...](http://www.nytimes.com/1995/03/07/science/75-years-later-study-still-tracking-geniuses.html?pagewanted=all)

[Visual C++ for Linux Development | Visual C++ Team Blog](https://blogs.msdn.microsoft.com/vcblog/2016/03/30/visual-c-for-linux-development/)

[怎么样让中国文化输出到全世界？ - 知乎](https://www.zhihu.com/question/49900813)

[这个剑桥学霸，创业后做了个聚集 100 万人的技术社区 | 爱范儿](http://www.ifanr.com/687555)

[小马哥终于扬眉吐气了，碾压百度，脚踩马云，越中国移动，终登顶 - 今日头条(TouTiao.com)](http://toutiao.com/a6326768234532012289/)

[迷妹是什么意思？ - 知乎](https://www.zhihu.com/question/28905081)

:   迷妹,就是粉丝的另外一种称呼。

    狭义地来说,迷妹是指比较狂热的粉丝(大多因为外貌而喜欢从而忽略其他因素)

    经济学家研究过一个短裙定律。女性裙子越短，经济势头越好。推论是，当你去餐厅，
    看见女服务员一个个都比原来漂亮，就表示经济滑坡了。在经济往上走的时候，漂亮
    姑娘很少会来饭店端盘子。

[有哪些你看了以后大呼过瘾的编程书？ - 知乎](https://www.zhihu.com/question/50408698)

[「登月无用，不如拿来改善民生」的说法有道理吗？ - 知乎](https://www.zhihu.com/question/22158238)

[程序员们， 来说说站立式电脑桌吧？ - V2EX](https://www.v2ex.com/t/305014#reply30)

[我就是讨厌人多 - 简书](http://www.jianshu.com/p/699557a122ba)

:   你又有多少次，见到一堆人在饭局上讨论南海争端，一个比一个了解得多，这个人的
    老乡是国防部的，那个人的舅是国务院的，什么党派纷争，什么政治矛盾一个比一个
    懂。但是饭局散了还是互不联系？都是 bullshit，老子还他妈是彭丽媛的小情人呢。

[ReportLab - Complete Hosted Solutions - ReportLab.com](http://www.reportlab.com/solutions/)

[各大彩妆、护肤品牌英语怎么读？](http://mp.weixin.qq.com/s?__biz=MjM5OTMwMjYyMw==&mid=2651790425&idx=1&sn=3bba34d900d1b09544fb337aa7ec88c6&scene=0#wechat_redirect)

[英语指导](http://mp.weixin.qq.com/s?__biz=MzI4MzExMDU1Nw==&mid=502374246&idx=1&sn=716b711a9fe05f3a7d0fa445dc6c5925&scene=18#wechat_redirect)

:   [你是如何将词汇量提升到 2 万，甚至 3 万的？ - 知乎](https://www.zhihu.com/question/26814125)

    [看加菲猫学英语汇总目录](http://mp.weixin.qq.com/s?__biz=MzI4MzExMDU1Nw==&mid=502373927&idx=1&sn=0132758c1f37c6f357b7d019e6fc8198&scene=18#wechat_redirect)

[杰出的文学家、艺术家、科学家大多是男性，可以说明男性比女性优秀吗？ - 知乎](https://www.zhihu.com/question/20573941)

[Learn TypeScript | Xcat Liu's Blog](http://blog.xcatliu.com/2016/01/29/learn-typescript/)

[你最穷的时候是什么时候，是怎么熬过来的？ - 知乎](https://www.zhihu.com/question/46324613)

>   打听了一下，各部门情况差不多，公司内忽悠、混子、老油条占比大于业界平均值，
>   少数几个渴望技术，想把事情干好的人，最后都被逼得主动辞职了。

[Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/knowyourself) -<

:   [被高估的“情商” | The Dark Side of Emotional Intelligence - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/20206659?refer=knowyourself) -<

    :   高情商的人善于伪装、隐藏真实的自己，为了个人利益故意给对方留下良好的印象，
        从而操纵他人。

        敬畏效应 | Awestruck Effect -<

        :   有一种过度注重情商会带来的负面效果，被称为**“敬畏效应”（Awestruck Effect）**，
            也被称为**惊吓效应（dumbstruck effect）**。

            一些情商很高的人，善于在谈话、演讲时使用技巧感染他人。如果你的沟通是抱着高
            尚的目的，就会取得好的效果，比如马丁·路德·金著名的演讲。然而，剑桥大学
            Jochen Menges教授的研究团队发现，当一名演讲者饱含激情地讲述鼓舞人心的内容时，
            听众们不会注意其实际传达的信息，也很少能记住具体的内容。而更讽刺的是，听众
            们由于受到了情绪的感染和触动，会宣称自己能将演讲的内容复述得八九不离十。

        透明度错觉 | Transparency Illusion -<

        :   也许你觉得，只要不存坏心，不误入歧途，掌握情商就能读懂他人的情绪，工作生活
            就能一帆风顺。但其实，即便出发点是好的，过多地注意情商也可能会引发他人的误
            解，影响你自己的工作和生活质量。

            社会心理学家 Heidi Grant Halvorson研究发现，当你试图传递给他人信息时，他人
            接受起来，就可能变成了截然不同的解读。

            “透明度错觉”（Transparency Illusion） ：给予信息的一方相信，他们的意图都已
            经表达得明明白白，尽管他们并没有真的把这些意思表达到位。

            当一些人过分考虑情商，认为自己在使用一些“人际技巧”，试图巧妙地传达自己时，
            很有可能会弄巧成拙：

            这其实也和中国传统文化有关，认为应当婉转，很多话不要说透。其实，心理学家
            Halverson 建议，如果你希望更好达到彼此的理解，直白、清晰、明确地表达意图，
            而不是释放模棱两可的信号，希望对方花更多的功夫来理解。因为，你控制不了别人
            如何理解，你能控制的只是自己如何表达，清晰直白的表达也许一时会引起对方的情
            绪，却能避免出现长期的问题。

        不是所有人都需要高情商 -<

        :   在另外一些（低情感需求的）职业，比如机械师、科学家、会计等，过多追求情商反
            而是负担。因为从事这些职业的人，精力应该更多地花在专业上，而非人情世故。

        >   **直接和诚实可能无法给你带来“许多”朋友，却能给你带来“对的”那几个。**

        Be direct. Be honest. This values more than any interpersonal skills.

    [最好的伴侣之间需要一点“欺骗”｜研究说：拥有以下6个特点的伴侣比较容易幸福 - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/20641504?refer=knowyourself)

    [研究：怎样才能睡得更好？｜睡眠正在成为全人类的难题 - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/22366741?refer=knowyourself)

    :   ASMR 自主感官刺激反应

        一种被称为“自主感官刺激反应”（Autonomous Sensory Meridian Response, ASMR）
        的放松技术被认为能够达到助眠的效果。尽管 ASMR 给人带来的感受很难具体通过语
        言描述，但研究发现，它能像传统的冥想技巧一样帮助人们放松（Fairyington, 2014）。

        在 ASMR 中，你能听到轻敲、擦拭等细微的声音，也能听到有人轻声对你说一些温暖
        的话语，让你感到平静和镇定。有人描述说，“那种刮擦的声音，听起来感觉就是有人
        直接在我的大脑皮层上按摩一样。”（今天的文首音频中我们插入了一段 ASMR, 你可
        以听听感受一把）

    [研究：什么是内向者专属的“社交宿醉”？｜一份写给内向者的社交指南 - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/22344910?refer=knowyourself)

    :   2016 年的新研究指出，对于一些内向者来说，如果经历了太大强度的社交，他们真的会像
        喝多了酒一样，出现“宿醉”般的体验。Courter 提出，“社交宿醉”（social hangover）指
        的是由于接受超出自己承受范围内的社交刺激，引起精神或生理上的不适，这种体验和宿
        醉很像 (Courter, 2016)。

        而这个实验的结果表明，内向的人更倾向于选择延迟满足。他们更能够为了长期更大的利
        益，拒绝掉眼前的诱惑。而社交场合有时是愚蠢而欢乐的，因而他们往往是人群中那个“有
        点扫兴”、“玩不起来”的人。

        内向者想要深度的沟通，因此他们不喜欢、也不善于应付社交中的表面寒暄。

        Laurie Helgoe(2013) 说，但这并不代表他们不喜欢人类。他们认为，寒暄是一种，不需
        要两个人对对方有任何真正的了解，就可以无止尽的继续下去的对话。内向者讨厌寒暄，
        是因为他们认为寒暄是一种表面的谈话形式，实际上阻碍了真正的人与人之间的互动。

        >   Why can't you understand that I'm just happy being alone.

    [为什么越是有能力悠闲生活的人，越是选择忙？｜Harried Leisure Class - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/20735147?refer=knowyourself) -<

    :   是那些相对精英的阶层正在变得更忙

        忙的人更忙了，闲的人更闲了。在闲暇这件事上，就像“知识鸿沟”、“收入鸿沟”一样，
        出现了“休闲鸿沟”（leisure gap）。

        从地区上来说，经济发展速度越快的地区，人们越是忙碌；贫穷的、或者经济增速缓
        慢的地区则节奏更慢（比如欧洲）。从人群上来说，学历低的人群会拥有更多的休息
        时间，而学历高的人则非常忙碌。

        越是收入高的人，越是感觉到时间不够用。瑞典经济学家StaffanLinder为此创造了一个概
        念——“受折磨的有闲阶级”（Harried Leisure Class）。在经济学家的预言里，他们本来可
        以是最该拥有闲暇的人，但却养成了最忙碌的生活习惯。他们渐渐取消了午休，也取消了
        专门的吃饭时间，习惯一边吃饭一边谈事、处理工作，或者干脆在车上、在电脑前吃外带
        食品。

        当我们习惯同时处理多项任务时（即便是休闲和工作同时进行），都会让我们感到时间更
        紧迫，Brigid Schulte 称之为**“精神的无尽循环现象”（mental tape-loop phenomenon）**，
        它使我们不断地、永无止境地耗费着精力。

    [为什么说孤独的人其实更擅长社交？| 社交焦虑与自我意识 - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/20652426?refer=knowyourself)

    [分手之后 | 关于失恋你该知道的 - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/20101079?refer=knowyourself)

    [形体焦虑：我和我身体的战争 | 一个平均体态的男人长什么样？ - Know Yourself - 知乎专栏](https://zhuanlan.zhihu.com/p/20797335?refer=knowyourself)

[《欢乐颂》：成年人世界，智商在一个层次的人，才能在一起玩](https://www.douban.com/note/554171702/)

[关于企业环境负债若干问题的思考](http://cn.whu.findplus.cn/?h=articles&id=203054213)

[『阿男的技术漫谈时间』＊08＊年糕试讲《自然语言生成的现状与展望》](https://www.douban.com/note/576844902/)

[『阿男的技术漫谈时间』＊08＊年糕试讲《自然语言生成的现状与展望》](https://www.douban.com/note/576844902/)

[『阿男的技术漫谈时间』＊08＊年糕试讲《自然语言生成的现状与展望》](https://www.douban.com/note/576844902/)

[孝与婚姻 · Jan Fan](https://janfan.github.io/chinese/2015/04/05/parents-and-marriage.html) -<

:   回到我们开始的问题，为什么要孝敬父母？ 通常的回答是父母这么辛苦把你一把屎一
    把尿地拉扯大，你说你怎么能不好好孝敬他们？ 仅仅是这样吗？

    我当年家里养了一只波斯猫，我是天天好生侍候啊，它吃的肉比我都多，结果长大之
    后别说孝敬了，它连摸都不肯让我摸一下，肥硕的身躯却如此矫健地跑开了。

    小时候听毛主席说“世界是你们的，也是我们的，但归根结底还是你们的。你们青年人
    朝气蓬勃，好像早晨八、九点钟的太阳……”。昨晚查资料，发现毛是对莫斯科大学的中
    国红二代留学生说的。是我理解错了！

    世界上只有一种真正的英雄主义,那就是认清生活的真相后还依然热爱生活。

    ——罗曼·罗兰

[掌握多种编程语言的大牛，最后都做了什么工作？ - 知乎](https://www.zhihu.com/question/50284352)

[金融，想说爱你不容易 - 辍耕录 - 知乎专栏](https://zhuanlan.zhihu.com/p/22414244)

![](https://gvanrossum.github.io/images/internetdog.gif)

中年谢顶的男人为什么爱对小姑娘实习生讲为人处事的道理，他怎么不上大街上摆摊儿给过路的人讲为人处事的道理呢？

另外，简历或者邮件不符合规范的事情我比骆先生应该见得更多也算是更深受其害，但是
职业 hr 对这种情况没有一个敢喊出来我司不要 QQ 邮箱或者 word 格式（实际上作为 hr
我反倒讨厌 pdf 格式，因为导入管理系统的时候非常容易出错），因为很可能引发极为严
重的公关事件，对招聘的影响会很大（之前不少某些公司的招聘公关出错了，结果影响甚
至超过两年），但是骆先生作为创始人这么大方地讲出来，要么真的是无脑乱喷，要么就
是策划好的营销事件，就骆先生在知乎迅速有计划性的回复来看，恐怕就是后者了。

你可以默默地后台把所有 QQ 或者 163 的邮箱扔进垃圾箱，说出来，非常有问题。

---

[九章免费讲座 - 硅谷顶尖 IT 企业一线工程师在线免费讲座传授求职经验](http://www.jiuzhang.com/seminar/28/) -<

:   报名火爆，为确保最有需要的朋友前来听课，请按以下步骤完成报名：

    -   关注微信公众号“九章算法”(扫描右侧二维码)，回复关键词“机器学习”；
    -   分享本期讲座微信图文消息到朋友圈或50人以上微信群，截图发给公众号，并附
        上你的报名邮箱

    我们会在您完成以上分享步骤后 12 小时内 (且确保在讲座开始前)，将直播链接发到
    您的邮箱，如果查收不到邮件，建议查看订阅邮件或垃圾邮件。

    ---

    shit.

    ---

    <https://applauncher.gotowebinar.com/#notStarted/4927377074646872833/en_US>

    The webinar will start in 4 days

    Contact the organizer for more information: info@jiuzhang.com

    【九章免费讲座】如何自学 Machine Learning

    Sun, Sep 18, 2016 1:00 AM - 2:35 PM CST

    讲座时间: 2016/9/18 上午 1:00:00

[如何看待王垠的《微软感受》？ - 知乎](https://www.zhihu.com/question/50539172)

[为什么关系特别好的人愿意借好几百给别人却不肯发几块钱的红包？ - 知乎](https://www.zhihu.com/question/49543841) -<

:   |   几块钱是小事，以关系好为由逼人做不情愿的事是很讨厌的。
    |   人家不发，你会说：哟，几块钱都不舍得，这人是不是抠啊！
    |   不是抠，是反感被逼迫。反感把生命浪费在跟无聊的人打交道上。

[有文化到底有多可怕？ - 知乎](https://www.zhihu.com/question/50200915) -<

:   >   钱钟书 19 岁那年被清华大学破格录取，一入学就发宏愿"横扫清华图书馆"，历来被
    >   传为美谈。当时清华图书馆藏书很多，中文洋文都有，整日开放，但许多同学都摸不
    >   到门，钱钟书可谓地道的行家。有一次，在校园咖啡馆，曹禺见吴组缃进来，便偷偷
    >   对他说："你看，钱钟书就坐在那里，还不赶紧叫他给你开几本英文淫书？"曹禺和吴
    >   组缃也是 1929 年考进清华的，是当时著名的校园才子，他们都很佩服同年级的"清华
    >   第一才子"钱钟书，知道他学识渊博，阅读量大。吴组缃听罢，便走到钱钟书桌边，请
    >   他给自己开录三本英文黄书。钱钟书也不推辞，随手拿过桌上一张纸，飞快地写满正
    >   反两面。吴组缃接过一看，数了数，竟记录了四十几本英文淫书的名字，还包括作者
    >   姓名与内容特征，不禁叹服。

    有文化的人污起来都能碾压你。

[没文化有多可怕？ - 知乎](https://www.zhihu.com/question/26192324#answer-43127555) -<

:   小学的时候《社会》课讲到了两弹一星，说到中国第一颗原子弹爆炸。

    老师是一个中年妇女，这样给我们描述原子弹：“原子弹就是一种炸弹，它爆炸了以后
    散发出来的味道，隔着很远被人闻到，人就不行了”

    作为一个熟读《十万个为什么》《少儿百科全书》的好少年，我怎么可能不知道原子
    弹是什么，小学我就知道它中间是空的。

    我跟老师说，原子弹是核武器，不是生化武器……

    老师看了我一眼，幽幽的说了一句：“你是武器专家？课是我讲还是你讲？”

    同学们炙热的目光让我很尴尬。

    我那一瞬间突然明白，知道的再多也没有用，除非你能跳出一个无知的圈子，远离自以为是的人。

[现在社会的阶层在固化吗？ - 知乎](https://www.zhihu.com/question/22714379)

[清华北大有考试作弊现象吗？ - 知乎](https://www.zhihu.com/question/27611823) -<

:   “所谓诚其意者，毋自欺也。”——《礼记·大学》

    |   北大有个神奇的学院叫马克思主义学院, 有个神奇的专业叫思想政治教育专业.
    |   某年公布的作弊名单, 全校一共有8个, 其中7个是上面那个专业的.
    |   就是这样一伙人当了政治老师, 然后给大家做思想政治教育.

    说个 2010 年的事情。

    当时心理系的 P 老师刚从 Berkeley 回国，开了一门心理学概论。因为培养方案原因选修
    的主要是我学院和心理系，以我学院为大多数。期中考试是闭卷，全部选择题，在明理楼
    119。这是一个阶梯教室，由于选修的人多，当时就没有隔行隔列坐，监考的也就是两三个
    助教。

    那场考试从考试中间起教室里就动静不断，我甚至可以听到后面有两人对答案的声音。

    再后来助教也拦不住，整个教室都是对答案的声音。已经喧闹到了让人觉得“我不作弊简直
    就亏了”。

    当然我自己也不是什么好人。我抄了旁边大神两道选择题的答案。

    过了一周上课时候，我们学院院长来到课堂骂了十分钟。期中考试的成绩也取消了。但那
    时候我才意识到我们所有人有多么不知廉耻。

    而且到现在为止，似乎在各种场合承认过作弊的（包括我自己）还不超过 10 个人吧。每
    每想到这件事就有点寒心。

    |   我在北大时，凌晨四点半给哈佛的同学打电话，他们居然都在学习，吓尿了！！
    |   我在哈佛时，凌晨四点半给北大的同学打电话，他们居然都在学习，吓尿了！！！！
