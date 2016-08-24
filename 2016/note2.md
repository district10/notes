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
