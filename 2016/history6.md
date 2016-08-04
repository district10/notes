---
title: 历史笔记 6
...

## 历史笔记 6

原载于 <https://github.com/district10/blog/blob/master/_pages/notes.md>。

---

[CSS "position: fixed;" on iPad/iPhone? - Stack Overflow](http://stackoverflow.com/questions/4889601/css-position-fixed-on-ipad-iphone) -<

:   A lot of mobile browsers **deliberately do not support `position:fixed;`{.css}** on the
    grounds that **fixed elements could get in the way on a small screen**.

    我说自己的 pad 上怎么不能 fix 回到主页的按钮，原来他们是有意为之。

    （不过，实际上。本站左上角的按钮就 hover 成功了。）

    refs and see also

    -   [The fifth position value - QuirksBlog](http://www.quirksmode.org/blog/archives/2010/12/the_fifth_posit.html)
    -   [Issues with position fixed & scrolling on iOS](https://remysharp.com/2012/05/24/issues-with-position-fixed-scrolling-on-ios)

[Skywind Inside » 关于路径搜索算法的实用性优化](http://www.skywind.me/blog/archives/60){.heart} -<

:   程序员也有三六九等：

    初等程序员靠知识来挣钱，会别人会的东西，喜欢折腾架构和框架，以掌握更多新潮
    东西而沾沾自喜，以模仿各种奇技淫巧重新实现一遍而四处炫耀

    这些人能够迅速的学会各种项目需要的架构套件，以自己的生产力来挣钱。

    高等程序员靠智慧挣钱，会别人不会的东西，上能抉择技术方向，下能解决性能瓶颈
    ；讨论方案时，腾讯怎么做的，阿里怎么做的，我们该怎么做，如数家珍；写完代码
    后，初读让人赏心悦目，再读让人恍然大悟，三读让人心悦诚服。常见台词：“webp
    压缩比不高，我改了一版新 webp，用 H265 帧内预测来保存 RGB，用 lzma2 来保存
    alpha 比 webp 好多了”，“erlang 大家不熟悉，我做了一个库，让大家可以象写
    erlang 一样来写 C++，照顾大家开发习惯，又可以象 erlang 一样写多线程”。“
    Micheal Abrash 这几行代码还有很大优化空间，其实性能还可以更好！”她们都是以
    解决别人不能解决的问题来挣钱。

    上等程序员靠创新来挣钱，能促进行业的发展，在这个充满咨询的年代，学习大家都
    掌握的东西只是一个基本过程，没什么值得称道的，当你 baidu 上找不到方案，
    google里没有参考，国内外没有任何人能给你启示的时候，任然能够充满创造的分析
    问题，抽象问题，并解决问题。找到别人完全没有走过的路，创造前人从来没有创造
    过的东西，这是他们的价值所在。他们的常见台词是：“别烦我！”，“忙着呢！”，“谷
    歌搜呀，这都问我？”，上等程序员是国宝，**他们的时间不应该浪费在无意义的事情
    上**。

    即便做到上面几点，在神级程序员眼里，也只不过如此罢了。真正的神级程序员，不
    靠知识和智慧挣钱，更不靠创新来挣钱，而是靠**意志**来挣钱，十八般语言门门精
    通，上能架构操作系统，下可开发嵌入芯片；成功项目无数份，胸中代码千万行！不
    果这些也只是基本功而已，牛逼的神级程序员，左手抱四十八斤人体工学键盘，右手
    提二百斤纯铁鼠标，竞争对手哪怕有千军万马，也近不得他办公桌前半步！**三十六
    小时连续编码依旧气定神闲，体力耐力无人能及。**上市公司首席科学家，创新项目
    的领导者，在他们看来，也只是尘土而已，不出三回合，毕斩其首级于电脑前。他们
    常见的台词是：“杀！”，“弄死你！”，**高手们总是睥睨天下而又冷言少语**。

    为什么要说……“杀”……

[Skywind Inside » 美术资源超级压缩方法](http://www.skywind.me/blog/archives/1176) -<

:   压缩比从强到弱依次是：WDP > WEBP > JPEG2000 > JPEG。因此换用 WDP 格式能缩小不少资源。

    抛弃 ZLIB 换用 LZMA2

    换用 LZMA2 能够高于 zlib 差不多 25% 的压缩率（LZMA1 只有 18% 左右）。现在 Linux 内核压
    缩文件已经从 bz2 改为 LZMA2 的 xz 格式了。

[Skywind Inside » 【原创】快速除以255的方法](http://www.skywind.me/blog/archives/988){.heart} -<

:   经过若干次试验修改，研究出下面这个快速 /255 的宏，可以在 X 属于 [0，65536] 的范围内误差为零：

    ```cpp
    #define div_255_fast(x)    (((x) + (((x) + 257) >> 8)) >> 8)
    ```

    传统来说，人们习惯于将 `/255` 改为 `>> 8`，但是这样误差挺大的，比如先乘以 255 再除
    以 255，连续做十次，如果用 `>>8` 来代替除法，那么十次之后，误差为 10. 另外一种常
    见的近似法是 `((x) + 255) >> 8`，这种累积误差也挺厉害的。

    因此 `>>8` 代替 `/255` 结果是比较粗糙的。而这个宏的开销比起 `>>8` 来说成本大 12%。

    [计算机图形算法中的光滑边缘算法经历了那些变迁？](http://www.skywind.me/blog/archives/1541)

    [还原被摄像机透视的纹理](http://www.skywind.me/blog/archives/1363)

    [MINI-FOOLTRIS](http://www.skywind.me/maker/fooltris.htm)

    具体可以参考 Linux Kernel的 include/linux/list.h:

    ```cpp
    struct list_head {
        struct list_head *next, *prev;
    };

    #define INIT_LIST_HEAD(ptr) do { \
        (ptr)->next = (ptr); (ptr)->prev = (ptr); \
    } while (0) // 这样就可以加上分号了……
    ```

    函数组装：

    想象一下，你写图形图像的代码，现在你需要给像素合成实现 `SRC_ATOP`, `SRC_OVER`,
    `SRC_IN`, `SRC_OUT`, `DST_ATOP`, `DST_OVER`, `DST_IN`, `DST_OUT`, `XOR`,
    `PLUS`, `ALLANON`, `TINT`, `DIFF`, `DARKEN`, `LIGHTEN`, `SCREEN`, `OVERLAY`, 等
    等二十种像素合成的方法，你如果不用宏，那么你需要写多少个函数？20 多个看起来类
    似的函数，你不得写疯了么？此时用函数指针其实是很浪费性能的事情，那么该如何写呢
    ？你可以规定一系列用来计算 composite 的方法，接受两组 RGBA，生成新的，比如：

    ```cpp
    /* compositing */
    #define IBLEND_COMPOSITE(sr, sg, sb, sa, dr, dg, db, da, FS, FD) do { \
            (dr) = _ipixel_mullut[(FS)][(sr)] + _ipixel_mullut[(FD)][(dr)]; \
            (dg) = _ipixel_mullut[(FS)][(sg)] + _ipixel_mullut[(FD)][(dg)]; \
            (db) = _ipixel_mullut[(FS)][(sb)] + _ipixel_mullut[(FD)][(db)]; \
            (da) = _ipixel_mullut[(FS)][(sa)] + _ipixel_mullut[(FD)][(da)]; \
        }   while (0)

    /* premultiply: src over */
    #define IBLEND_OP_SRC_OVER(sr, sg, sb, sa, dr, dg, db, da) do { \
            IUINT32 FD = 255 - (sa); \
            IBLEND_COMPOSITE(sr, sg, sb, sa, dr, dg, db, da, 255, FD); \
        }   while (0)

    /* premultiply: dst atop */
    #define IBLEND_OP_DST_ATOP(sr, sg, sb, sa, dr, dg, db, da) do { \
            IUINT32 FS = 255 - (da); \
            IUINT32 FD = (sa); \
            IBLEND_COMPOSITE(sr, sg, sb, sa, dr, dg, db, da, FS, FD); \
        }   while (0)

    /* premultiply: dst in */
    #define IBLEND_OP_DST_IN(sr, sg, sb, sa, dr, dg, db, da) do { \
            IUINT32 FD = (sa); \
            IBLEND_COMPOSITE(sr, sg, sb, sa, dr, dg, db, da, 0, FD); \
        }   while (0)
    ```

    然后用 # 连接各种方法和格式，生成不同的函数，比如：

    ```cpp
    #define IPIXEL_COMPOSITE_FN(name, opname) \
    static void ipixel_comp_##name(IUINT32 *dst, const IUINT32 *src, int w)\
    { \
        IUINT32 sr, sg, sb, sa, dr, dg, db, da; \
        for (; w > 0; dst++, src++, w--) { \
            _ipixel_load_card(src, sr, sg, sb, sa); \
            _ipixel_load_card(dst, dr, dg, db, da); \
            IBLEND_OP_##opname(sr, sg, sb, sa, dr, dg, db, da); \
            dst = IRGBA_TO_A8R8G8B8(dr, dg, db, da); \
        } \
    }
    ```

    然后开始生成我们的各种合成函数：

    ```cpp
    IPIXEL_COMPOSITE_PREMUL(pre_xor, XOR);
    IPIXEL_COMPOSITE_PREMUL(pre_plus, PLUS);
    IPIXEL_COMPOSITE_PREMUL(pre_src_atop, SRC_ATOP);
    IPIXEL_COMPOSITE_PREMUL(pre_src_in, SRC_IN);
    IPIXEL_COMPOSITE_PREMUL(pre_src_out, SRC_OUT);
    IPIXEL_COMPOSITE_PREMUL(pre_src_over, SRC_OVER);
    IPIXEL_COMPOSITE_PREMUL(pre_dst_atop, DST_ATOP);
    IPIXEL_COMPOSITE_PREMUL(pre_dst_in, DST_IN);
    IPIXEL_COMPOSITE_PREMUL(pre_dst_out, DST_OUT);
    IPIXEL_COMPOSITE_PREMUL(pre_dst_over, DST_OVER);
    ```

    这样你相当于定义了：

    ```cpp
    ipixel_comp_pre_xor (...)
    ipixel_comp_pre_plus (...)
    ....
    ipixel_comp_dst_over (...)
    ```

    等好几个函数了，并且这些函数都是被你 **“组装” 出来的**，你并没有使用函数指针，也没
    有笨重的去写 20 多个函数。进一步如果你写图形图像你会发现你需要面对多种设备的像素
    格式，从 A8R8G8B8, A8B8G8R8 到 A1R5G5B5, 主流需要处理的像素格式都有 10 多种。

    那么你可以把 “从不同格式读取 r,g,b,a”， 以及 “将 r,g,b,a 组装成任意格式”，展开成
    很多个宏，然后不管你在这些像素格式里面做转换还是要做一些其他处理，你都可以用任
    意的 “像素读写” 宏 + “像素计算” 宏 组装成一个个具体需要的函数。

    所以用宏来解决性能问题，并且简化自己的程序设计往往能起到 inline 不能起的作用，甚
    至能完成很多 template 所不能完成的任务。

    【改名新传】乞讨的改叫众筹，算命的改叫分析师，八卦小报改叫自媒体，统计改叫大数
    据分析，忽悠改叫互联网思维，做 IDC 的自称云计算，办公室出租改叫孵化器，圈地盖楼改
    叫科技园区，放高利贷改叫 P2P，看场子收保护费的改叫平台战略，搅局的改叫颠覆式创新。

    所谓搬砖几乎不需要封装，因为大部分只用一次，今天把砖头从东搬到西明天又从西搬到
    东搬回来，后天又回去，既然如此**任何封装都是容易过度**，不比老实搬砖复制来的直接高
    效。就像正则表达式，每次都重写，写熟了后也并不需要想着封装复用下老的，每次重写
    为主，复制改写为辅。搬砖搬多了也和写正则一样，每次重写即可，简单高效，无需封装。

    记住，砖是搬不完的，你搬累了，又有人来接替你搬了。**不要天真谈创造**，现在不是
    单干的时代，远离个人英雄主义，你的所有成绩来自集体，个人离开集体啥都不是，没有
    谁是不可替代的，少了谁地球一样转。

    戒骄戒躁，努力做好社会主义的螺丝钉，凡事就怕认真二字。简单的事情重复做，你就是
    专家；重复的事情用心做，你就是行家！再小的地方，他也能干出成绩！

    [Skywind Inside » 视频编码原理简介](http://www.skywind.me/blog/archives/1566)

    [Skywind Inside » 如何写一个视频编码器演示篇](http://www.skywind.me/blog/archives/1609)

    [Skywind Inside » 如何写一个软件渲染器？](http://www.skywind.me/blog/archives/1498)

    My annotated code: [mini3d/mini3d.c at master · 4ker/mini3d](https://github.com/4ker/mini3d/blob/master/mini3d.c).

    实现个**简单的固定渲染管线软渲染器**不算复杂，差不多 700 行代码就可以搞定了。之所以
    很多人用 D3D 用的很熟，写软渲染却坑坑洼洼，主要是现在大部分讲图形的书，讲到透视
    投影时就是分析一下透视变换矩阵如何生成，顶点如何计算就跳到其他讲模型或者光照的
    部分了。

    因为今天基本上是直接用 D3D 或者 OGL，真正光栅化的部分不了解也不影响使用，所以大
    部分教材都直接跳过了一大段，摄像机坐标系如何转换？三角形如何生成？CVV 边缘如何
    检测？四维坐标如何裁剪？边缘及步长如何计算？扫描线该如何绘制？透视纹理映射具体
    代码该怎么写？framebuffer zbuffer 到底该怎么用？z-test 到底是该 test z 还是 w
    还是 1/z 还是 1/w ？这些都没讲。

    早年培训学生时候，我花两天时间写的一个 DEMO，今天拿出来重新调整注释一下，性能和
    功能当然比不过高大上的软件渲染器。但一般来讲，工程类项目代码不容易阅读，太多边
    界情况和太多细节优化容易让初学者迷失，这个 mini3d 的项目不做任何优化，主要目的
    就是为了突出主干：

    操作方式：左右键旋转，前后键前进后退，空格键切换模式，ESC 退出。

    -   模型标准：标准 D3D 坐标模型，左手系 + WORLD/VIEW/PROJECTION 三矩阵
    -   实现裁剪：简单 CVV 裁剪
    -   纹理支持：最大支持 1024 x 1024 的纹理
    -   深度缓存：使用深度缓存判断图像前后
    -   边缘计算：精确的多边形边缘覆盖计算
    -   透视贴图：透视纹理映射以及透视色彩填充
    -   实现精简：渲染部分只有 700行， 模块清晰，主干突出。
    -   详细注释：主要代码详细注释

    ```bash
    mingw: gcc -O3 mini3d.c -o mini3d.exe -lgdi32
    msvc: cl -O2 -nologo mini3d.c
    ```

[Coordinate Systems (Direct3D 9) (Windows)](https://msdn.microsoft.com/en-us/library/windows/desktop/bb204853(v=vs.85).aspx) -<

:   ![](https://i-msdn.sec.s-msft.com/dynimg/IC412518.png)

    **Direct3D uses a left-handed coordinate system**. If you are porting an
    application that is based on a right-handed coordinate system, you must make
    two changes to the data passed to Direct3D.

      - Flip the order of triangle vertices so that the system traverses them
        clockwise from the front. In other words, if the vertices are v0, v1, v2,
        pass them to Direct3D as v0, v2, v1.
      - Use the view matrix to scale world space by -1 in the z-direction. To do
        this, flip the sign of the _31, _32, _33, and _34 member of the D3DMATRIX
        structure that you use for your view matrix.

`轮子哥`{.heart} -<

:   后来跟他讨论为何不用 C++，他说其实没有什么特别的，就是习惯和爱好而已，后又
    补充：

    >   **如果不用多态 (polymorphism) 的话，其实不管怎么写，不管用那种语言写，
    >   都算不上真正的 OO。**

    忽然觉得很有道理……

    有兴趣你可以读读《Unix 编程艺术》，OOP 的思维模式，是大一统的；C 的思维模式，是
    分离的。前者方便但容易造成高耦合，后者灵活但开发开发太累。用 C 开发，应该刻意强
    调 “简单” 和 “可拆分”。一个个象搭积木一样的把基础系统搭建出来，哪个模块出问题，
    局部替换即可。

    自底向上的开发模式，并不是从不站在大局考虑问题，而是从某个子系统具体实现开始，
    从局部迭代，逐步反思全局设计，刻意保持低偶合，一个模块一个模块的来，再逐步尝试
    组合。

    自底向上强调先有实践，再总结理论，理论反过来指导实践，又从实践中迭代修正理论。
    这和人类认识世界的顺序是一样的，先捕猎筑巢，反思自然是怎么回事，又发现可以生火，
    又思考自然到底怎么回事情。

    **人类为什么要互相伤害？**

    到了工作，基本就是

    -   本来冲着去弄 Visual Studio 的，而且学生时期还不喜欢 SQL，结果工作的时候
        由于经济危机的关系给我弄到 SQL 去了，工作的内容包含了学习专业的数据库知
        识和拖控件。
    -   但是我做了几年还是觉得不喜欢 SQL，就跳槽到了 MSRA，结果 MSRA 拼命让我搞
        数据库的东西。也不想想本来我就是不喜欢弄这个才走的……
    -   后来我想好吧，反正编译器没得搞了，那我还是拖控件吧。于是我就告诉 Office
        的人说，你看我做 GacUI 多屌不屌！Office 的人说，屌！于是把我招了进来，
        专门负责组里面不是 GUI 的那部分。
    -   过了半年老板开始安排工作了，我想了个办法表达了一下我还是喜欢弄别的东西。
        于
        是终于干起了老本行——给 Office 的程序员开发内部的编译器了。

    **总算最后还是做了喜欢的工作。**

[Skywind Inside » ATOM 同 Vim/Emacs/Sublime 的深度比较](http://www.skywind.me/blog/archives/1652)

[韦易笑 答过的问题 - 知乎](http://www.zhihu.com/people/skywind3000/answers?order_by=vote_num) -<

:   1.  实现简单的 HTTP 服务器（支持 GET/POST/CGI），然后用浏览器访问，里面有个 CGI 留言板。
    2.  实现一个简版 REDIS，或者给 Redis 加 10 条命令，或者把后面存储引擎换成 unqlite，再开源
    3.  给 apache 实现一个 module，可以支持 lua 来写服务。
    4.  给 nginx 写一个 python 模块，可以 python 来写服务。
    5.  用 C/C++/go 写个代理翻墙软件，跑在你的海外租的 vps 上。
    6.  实现一套简单的 TCP RPC 框架，并再基础上做一个简单聊天。
    7.  阅读 Linux 代码，应用层实现一个 Linux 的定时器。

    很多人觉得程序主要是思考，你思路对了，打字只是小事，经常听到说某某高手打字
    是二指禅。以前我也这么认为，但是专门抽时间练习了以后，发现真正打字流畅的人，
    打字的 cpu 占用很低，不会因为打错字而影响思考，更不会因为要低下头去看数字符
    号打断你的思路。

    先单纯练习从 A 打到 Z，最开始是 15 秒，慢慢熟练到 10 秒，最后到 5 秒。又从
    最基本的单词开始，不断的重复同一节 TT 的课程，同一个动作重复 300 次，肌肉就
    会有记忆，而同一个动作重复 600 次，脊柱就会有记忆。别人打字要经过大脑，大脑
    一个字母一个字母，一根手指一根手指的指挥，是比较费脑的，而你打字如果真正进
    入了脊柱反应的条件反射时代，那么看到一个单词或者一串数字，大脑只需要下一个
    指令，脊柱这个协处理器就自动完成了，根本不需要过大脑。

    我们说 Fabrice 牛逼，因为他对数学，信号处理，计算机体系等三个方面有着深刻
    的认识，从而他能做出 ffmpeg, qemu, tinycc 这样的项目来，从而他算 pi 可以算
    到世界第一快，所以大家觉得很牛逼，这并不是因为听说他 C++ 有多牛。

    所以对于大部分普通员工，都是怀揣着一颗暴发户的心，过着猪狗不如的日子，在常
    年累月的日子里不断的在 加班和项目重组的死循环里折腾。公司呢？公司只要**几十
    个项目成一个就够吃很长时间**了。于是常用的管理手段就是造神运动，发车，发现
    金给老员工，给他们极高的待遇和荣誉，让所有新人都跟打了鸡血一样燃烧着自己的
    生命向前冲。

    观点 5：劣币驱逐良币

    这个现象从页游开始出现，你想当年一个典型的页游广告都是些啥，仿照一个：一座
    山峰，一个半裸美女，大大的几个红字：“你想和我一起体验巅峰的感觉么”，下面是
    “想”，“非常想”，旁边是游戏名称：“《巅峰三国》---无兄弟不战场，登录送坐骑礼
    包”，下面一行小字：“十万美女玩家任你选，江山美人我都要”，很熟悉吧。

    试想，越来越多的**色情营销**，你想想正常人看着都恶心会去点么？越来越多赤裸
    裸的游戏设定，端游时代，优秀的玩家用户基础一点点的被破坏了。什么样的人会去
    点击那些广告呢会喜欢那些坑爹的游戏设定呢？我没做过专门的分析，随便乱写两条
    他们的特点，可能有些不准确，即：急功近利的、缺乏耐心的，易怒易冲动的、好斗
    虚荣的、和家庭关系不好的。这样的用户越来越多，而以往良性的希望通过自己技巧
    或者努力成功的成就型玩家在现在游戏里受尽屈辱，以往以发现游戏各种隐藏要素为
    乐趣的探索性玩家在游戏里失去兴趣，以往喜欢同人聊天的社交型玩家发现聊天对象
    变了。

    总之由于多年的破坏，比起当年的端游，现在玩家层次越来越低，越来越差了，你说
    你新做一款游戏上线，能不去迎合现在的玩家么？而你越迎合，好的的用户越少，而
    后面的产品也就越难。虽然你想改变，但是会发现阻力越来越大，完全不是自己一个
    产品能改变的事情，这叫劣币驱逐良币。

    **有牛逼的研究生吗？有！但不是因为读研牛逼，而是因为他本身就牛逼。**包括但
    不限于以下几种：一不小心被保研，碍于老师爱了自己四年的份上读个研；啊工作太
    无聊读个研把；麻蛋我是科学家我得搞学术呢我怎么能工作呢；等等

    当然，哪怕是上面两类，也不乏很多进入研究生阶段后把握时间，成功逆袭的人。

    但更多的是混日子的，工程能力基本 0 分，科研能力一般 8 分（满分 100）。张口
    闭口机器学习，自然语言处理，实际上就是把别人 matlab 代码抄来改改代码，跑个
    结果还用 ps 美颜一下最后抄几篇论文毕业。

    所以那，真的没必要因为“读研”这个选择不被认可而感到愤怒。读研并不比工作高贵，
    只是一个普通地选择而已。就是那种今天我是吃面还是吃米线那种选择。

    经常有些小公司的朋友问我，他们应该选 mongodb 还是 mysql， 或者是选择 PHP 还
    是 GO，哪个性能会更好, 我就觉得奇怪他为什么有这样的困惑，因为以他们的产品的
    水平，选哪个都能解决问题，肯定是哪个简单哪个好招人用哪个，而且等这个成为瓶
    颈时，你们已经不是一家小公司了。

    我想从一个比较奇怪的角度来切入，这里不得不提到一个人，新东方的创始人之一——
    王强。

    我之前听过王强的一场演讲，他在演讲中讲到自己在美国的求学之路，里面有一段讲
    他是如何成功说服计算机系主任同意让他这样一个英语专业的人进入计算机系攻读硕
    士的，这段非常有料。他之前在北大英语系呆了十年，四年本科，然后又教了六年书，
    简单讲就是一个纯正的文科生，而计算机是工科范畴，一个没有数理基础的文科学生
    要求到需要整天和数理打交道的工科念硕士，这听起来是稍微有点天方夜谭，但王强
    愣是靠自己三寸不烂之舌说服了计算机系主任，成功进入纽约州立大学计算机系攻读
    硕士。

    他就讲了三个点：（手里没有逐字稿，我就用自己的话概括一下）

      - 人通过软件来与计算机交互，而软件说穿了就是人向机器发送的一系列逻辑指令，
        这些逻辑指令是在编程语言（programming language）这种媒介的承载之下发送
        出去的，而我在北大十年，掌握了四门 language，programming language 本质
        上就是一种 language，我对 language 太熟悉不过了，所以没理由学不好编程。
      - 计算机指令和硬件进行交互，靠的是运算逻辑。我在本科期间修过逻辑课，而在
        北大六年的教书生涯中，为了把课讲好讲的有逻辑，我又在讲台上历练了六年自
        己的逻辑思维，我敢保证，我的逻辑思维能力可以碾压任何一个美国计算机四年
        级本科生。
      - 任何科研工作者，都需要极强的抽象能力，即从纷繁复杂的现象中抽丝剥茧提炼
        抽象的能力，计算机的问题也需要把实际问题抽象成数学模型，我搞了十年英语，
        文学著作基本看了个遍，我有很高的文学修养，而文学修养是美学修养的一种，
        美学修养说白了，就是一种高度的抽象能力，比如一个美女走过，你可以把他身
        上成亿的信息点抽象成一个词——“美”，这就是抽象能力。

    **事情从来就没有高下，有高下的是人。**

[javascript - How to make a DIV always float on the screen in top right corner? - Stack Overflow](http://stackoverflow.com/questions/4236151/how-to-make-a-div-always-float-on-the-screen-in-top-right-corner) -<

:   ```css
    .box {
        position: fixed;
        left: 1em;
        top: 1em;
    }
    * html .box {
        position: absolute;
    }
    ```

    refs and see also

    -   [CSS absolute and fixed positioning - W3C Wiki](https://www.w3.org/wiki/CSS_absolute_and_fixed_positioning)

[Joseph Stalin - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Joseph_Stalin) -<

:   Joseph Vissarionovich Stalin (`/ˈstɑːlɪn/`; birth surname: Jughashvili; 18
    December 1878 – 5 March 1953) was the **leader of the Soviet Union** from the
    mid-1920s until his death in 1953. Holding the post of the General
    Secretary of the Central Committee of the Communist Party of the Soviet
    Union, he was effectively the dictator of the state.

    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/6/65/Stalin_Joseph.jpg/330px-Stalin_Joseph.jpg)

    Stalin led the Soviet Union through its post-war reconstruction phase,
    which saw a significant rise in tension with the Western world that would
    later be known as the Cold War. During this period, the USSR became the
    second country in the world to successfully develop a nuclear weapon, as
    well as launching the Great Plan for the Transformation of Nature in
    response to another widespread famine and the Great Construction Projects
    of Communism. In the years following his death, Stalin and his regime have
    been condemned on numerous occasions, most notably in 1956 when his
    successor Nikita Khrushchev denounced his legacy and initiated a process of
    de-Stalinization and rehabilitation to victims of his regime. Stalin
    remains a controversial figure today, with many regarding him as a
    tyrant. However, popular opinion within the Russian Federation is
    mixed. The exact number of deaths caused by Stalin's regime is
    still a subject of debate, but it is widely agreed to be in the order of
    millions.

[John F. Kennedy - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/John_F._Kennedy) -<

:   **John Fitzgerald "Jack" Kennedy** (May 29, 1917 – November 22, 1963), commonly
    referred to by his initials **JFK**, was an American politician who served as
    the 35th President of the United States from January 1961 until his
    assassination in November 1963. The Cuban Missile Crisis, The Bay of Pigs
    Invasion, the Nuclear Test Ban Treaty, the establishment of the Peace
    Corps, developments in the Space Race, the building of the Berlin Wall, the
    Trade Expansion Act to lower tariffs, the Civil Rights Movement, the "New
    Frontier" domestic program, and abolition of the federal death penalty in
    the District of Columbia all took place during his presidency. Kennedy also
    avoided any significant increase in the American presence in Vietnam,
    refusing to commit combat troops and keeping the level of others, mostly
    military advisors, to only 16,000, compared to the 536,000 troops committed
    by his successor, Lyndon Johnson, by 1968.

    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1e/JFK_White_House_portrait_looking_up_lighting_corrected.jpg/330px-JFK_White_House_portrait_looking_up_lighting_corrected.jpg)

[依云 的留言簿](http://lilydjwg.is-programmer.com/guestbook) -<

:   It's a girl...

[unix - How to open a new file in vim in a new window - Stack Overflow](http://stackoverflow.com/questions/10760310/how-to-open-a-new-file-in-vim-in-a-new-window) -<

:   `gvim --remote-tab-silent`{.bash}

    ```vim
    :new filename.ext

    :vert new filename.ext
    :vnew filename.ext

    :vsp  new filename.ext
    ```

    my windows bashrc

    ```
    export PATH=$PATH:/c/windows
    alias gvim="gvim.bat --remote-tab-silent"
    export EDITOR="gvim.bat --remote-tab-silent"
    alias gall="git add -A; git commit -m \"done\"; git push;"
    ```

[使用心理学中的冥想技术，打通英语语音的基础关](https://www.douban.com/note/517755867/) -<

:   最近看到一个哈佛的研究，说是让一组人实际练习钢琴，另一组用想象练习，两组人
    在手指的指标上都有了很大提高。实际上，做为体验，研究这种心理预演方法多年的
    实践者，我已经知道，这种**想象练习**，具有非常大的潜力，目前还远没有挖掘出来。

    先介绍**影子跟读**方式，就是对方一边说，被试以最快的速度复述，最高的速度是
    仅仅落后一个音节。而影子跟读在外语学习者中也经常被采用，做为提高听说能力的
    一个良方。

    在听的时候，并不需要你像影子跟读那样读出声，而是在脑子里默想，想象出真实的
    发音动作，根据前面关于“附体”的介绍，直到造成这样的错觉，是你的嗓子在发出这
    些声音。跟着音乐学唱歌的可能也有这样的体会。

    “附体感”的产生，跟材料的选取是有很大关系的，如果材料过难，你没有办法用这种
    方式跟上语速，也就没法产生这种感觉，这也成为你筛选材料的标准。当然也不要求
    你能够完全跟上，只要这种感觉能够经常产生，就能够起到很好的练习效果了。

    这种练习，是直接练习你的大脑，而这种状态，非常接近于一种“冥想”状态，影子跟
    读由于要读出声，对脑内的过程造成了干扰，导致注意力不够集中。

[《黑镜》中的屏蔽恐怖在哪？（文/王路）](https://www.douban.com/note/473598288/) -<

:   唯一的可能，就是一旦 B 拿起牙刷准备刷牙的时候，刚刚想起 A，思路就断了，自动跳回想
    到 A 之前的事情上。给他的大脑植入一块芯片，一旦联想到和 A 相关的一切，注意力自动跳
    转到前一步。

    假如全世界的人都是盲人，假如由于电脑的使用，未来全人类的视力都退化得厉害，变成
    天生的高度近视，这并不会让全人类都承受被屏蔽的痛苦。一个盲人的痛苦来源于他清醒
    地认识到自己的缺陷，并明白这种缺陷永远无法弥补。这，才是无穷痛苦的根源。不过，
    如果他的周围全是盲人，痛苦就会小很多，因为大家一样了，引起烦恼的缘由一时被隐藏
    了。

    屏蔽掉一个人，看不到他的样子，听不到他的声音，却抑制不了不去想他。
    **世间的痛苦和烦恼，不在于不能得到，而在于不能割舍。**不在于不想屏蔽的东西被屏蔽，而在
    于想屏蔽的东西无法屏蔽。

[Emacs 绑定键盘的技巧。](http://docs.huihoo.com/homepage/shredderyin/wiki/KeyBinding.html)

[归档 | 始终](http://liam0205.me/archives/){.heart} -<

:   ```bash
    cat <filename> | sort | uniq -d             # 只显示重复的行，每行只显示一次
    cat <filename> | sort | uniq -D             # 只显示重复的行
    cat <filename> | sort | uniq -i             # 忽略大小写
    cat <filename> | sort | uniq -u             # 只显示只出现一次的行

    sort <file1> <file2> | uniq -d              # 交集
    sort <file1> <file2> | uniq                 # 并集
    sort <file1> <file2> <file2> | uniq -u      # 差集
    sort <file1> <file2> | uniq -u              # 对称差集
    ```

    ![](http://liam0205.me/uploads/images/English/oxford-comma.jpg)

    Without the Oxford comma:

    |   *We invited the strippers, jfk and stalin. （这是要死……）*

    With the Oxford comma:

    |   *We invited the strippers, jfk, and stalin.（这也差不多要死……的节奏）*

    所谓牛津逗号（Oxford Comma），当然和牛津大学有点关系。牛津逗号，指的是用英
    文枚举一些示例的时候，紧跟在并列连词（通常是 and 和 or）之前的那个逗号。举
    个栗子：

    |   *Mary likes apple, banana, and strawberry.*

    这个例子里面，and 之前的逗号，就是所谓的牛津逗号。叫它牛津逗号，是因为牛津
    大学出版社要求作者必须在枚举的并列连词之前加上一个逗号。不过，由于哈佛大学
    出版社也有这么一个要求，所以这种逗号也可以称为哈佛逗号（Harvard Comma）。当
    然，你也可以根据它所处的环境，把它叫做 **Serial Comma**。

    [Serial comma - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Serial_comma) -<

    :   In English language punctuation, a serial comma or series comma (also
        called Oxford comma and Harvard comma) is a comma placed immediately
        before the coordinating conjunction (usually and or or) in a series of
        three or more terms. For example, a list of three countries might be
        punctuated either as "France, Italy, and Spain" (with the serial
        comma), or as "France, Italy and Spain" (without the serial comma).

        Opinions among writers and editors differ on whether to use the serial
        comma. In American English, a majority of style guides mandate use of
        the serial comma, including APA style, The Chicago Manual of Style, The
        MLA Style Manual, Strunk and White's Elements of Style, and the U.S.
        Government Printing Office Style Manual. 但英国出版社一般都不用 serial comma。

        Use of the comma **is inconsistent with conventional practice**.

        >   To my mother, Ayn Rand, and God

        the serial comma after Ayn Rand creates ambiguity about the writer's
        mother because it uses punctuation identical to that used for an
        **appositive phrase**, leaving it unclear whether this is a list of three
        entities (1, my mother; 2, Ayn Rand; and 3, God) or of only two
        entities (1, my mother, who is Ayn Rand; and 2, God). Without a serial
        comma, the above dedication would read: To my mother, Ayn Rand and God,
        a phrase ambiguous only if the reader accepts the interpretation my
        mother, who is both Ayn Rand and God.

    LaTeX 圈子流行着一句话：**使用模板就不要管格式**。简单来说，目前的模板已经
    适配了美赛官方对论文格式的全部要求，不需要用户再做任何修改。在美赛有限的参
    赛时间内，纠结诸如「给目录中的 `\section` 添加引导符」之类的审美上的需求，
    纯粹是自作自受且自讨苦吃。

    ```
     20 = 0001 0100(补)
    -20 = 1110 1100(补)
    ```

    所以啊，在被请教的时候，以及，更多地在生活的细微末节上，都不要吝惜自己的知
    识不乐于分享，更不要自觉高人一等盛气凌人。我一直认为，成长不是变得势利，而
    是变得温柔，对全世界都温柔。乐于分享，乐于共同进步，就是一种温柔呢。

    refs and see also

    -   [取得一个整型变量二进制表示的最后一个「1」 | 始终](http://liam0205.me/2015/10/02/how-to-get-the-last-1-bit-of-an-integer/)

[有什么知识，你知道后你的世界马上就不一样了？ - 生活 - 知乎](http://www.zhihu.com/question/38632401) -<

:   ![](http://whudoc.qiniudn.com/2016/215b4168ea6f23ddf5603a649eb7a76c_r.png)

[邓爱姣_百度百科](http://baike.baidu.com/view/1125043.htm) -<

:   邓爱姣，女，1974 年 9 月出生。1995 年毕业于武汉大学数学系统计与概率专业，获
    理学学士学位，同时免试保送为本专业的硕博连读的研究生，2000 年 6 月毕业于武
    汉大学数学与计算机科学学院，获得理学博士学位，毕业后留校从事概率论与数理统
    计方面的科研和教学工作。2002 年 10 月被评为副教授。

    主讲过本科生的《数理统计》、《概率论与数理统计》、《多元统计分析》、《数量
    方法》、《回归分析》等课程和研究生的《随机分形》。在攻读学位和留校工作期间，
    一直从事随机过程和随机分形相关课题的研究。

[图灵社区, 阅读, 陈皓, 我的精神家园](http://www.ituring.com.cn/article/details/9174) -<

:   我还记得，有一天，有一个和网络相关的技术问题，同事们搞了三四个通宵，也没弄
    明白，后来想起我好像在看这方面的书，他们就让我去看看、试试，结果我只用了 20
    分钟就搞定了。基础真的很重要，这受益于我看了《TCP/IP 详解》这套书。

[【智能便携打字机】 – 北大新媒体](http://www.looooker.com/archives/24235) -<

:   智能。

    features:

    -   E Ink screen with frontlight
    -   Full-size mechanical keyboard feature Cherry MX keyswitches
    -   Internal capacity for over one million pages
    -   Document cloud sync through WiFi
    -   International language support
    -   Rugged construction with aluminum body and stowable handle

    refs and see also

    -   [求推荐一个便捷输入设备 - V2EX](http://v2ex.com/t/280303#reply15)

[include dir, li-dvorak4tzx](http://dvorak4tzx.lofter.com/post/1d4021c8_b0ec95c)

[王自如与罗永浩辩论时应当说什么才能反杀老罗？ - 锤子手机 - 知乎](http://www.zhihu.com/question/25015684) -<

:   老罗用了道具 PPT，王自如需要的道具是：一个白板和一支油性笔。

    老罗说，我的手机就是不耐摔，但是我们……。自如：您等等，等我写一下“老罗承认不
    耐摔”，好的您继续。

    老罗说，大部分的石墨都不贴着后盖，这样后盖热的集中度会很热，自如：您等等，
    我记一下，“锤子和大部分手机一样有发热问题”，好的您继续

    老罗说：我不是揣测，我在讽刺你，你懂吗？自如：您等下，我写上，“老罗说他在讽
    刺我”。

    老罗说：除了三星和苹果，谁能做到色温上下 2000K 以内？国产厂商哪家能做到？自
    如：您等下，我写上“锤子和其他国产厂商一样，无法做到色温温差在 2000K 以内”

    自如：罗老师，能让我说一句话吗？

    老罗：你说。

    自如：也许有的观众刚刚打开视频，白板上有我们刚才谈的精华内容，导播请给个画
    中画，谢谢。罗老师，您继续……

    老罗：我不专业，是工匠精神的吉祥物，真正的工匠是工程师们，你也不专业，你一
    个学英语的……

    自如：您等下，我写上，“罗老师说他只是是工匠精神吉祥物”

    老罗：我后面还有呢，我还说你不专业呢，你怎么不写？

    自如：写不下，还有，这是我的白板，你要是让我连续说5分钟，我就写上

    一个小时后……

    自如同学在每行下面写了一个+号，在最后一行画一个长长的横线，最后一行写上：=
    东半球最好用的手机

    然后把笔放到桌子上，面对摄像机，说：各位观众，本次节目到此结束，思考题，你
    们觉得我白板上面这个等式成立么？转头，面向罗老师：来的路费谁给报？

    ---

    老罗的辩论逻辑非常清晰，我知道你们为什么黑他人品，但是不明白你们为什么看扁
    他的辩论能力。利益相关：我只是个路人，看了直播而已。

    作为一名在某教育机构兼职 GMAT 逻辑老师的准人民教师，我试图还原一下在老罗攻
    击下暴露出来的王自如的逻辑弱点，并且用简单的例子佐证。老罗打得真可谓稳狠准，
    通过就事说事、由事及人、就人说人三步有策略、有层次的赢得了辩论意义上的胜利。

    ---

    还有就是老罗的逻辑非常清晰，我看的时候有点恍如多年前做 GRE 阅读和写 GRE
    Argu 的感觉。证据 ->发现 ->结论三段的攻击，环环入扣。

    "Wang claims that T1 can't pass the falling test. Then he argues that T1 is
    fragile and concludes that it is not an acceptable phone for consumers."
    Please argue.

    Luo's Answer:

    First of all, Wang's claim on the falling test is not informative since he
    doesn't explain his standard. There are many different standards for
    falling tests and we know that T1 passes the Motorola test. So his standard
    may not be useful to determine the robustness of a phone.

    Second, even if Wang's test provides useful information on the robustness,
    we still don't know whether T1 is fragile compared to other mobile phones
    on the market.

    Final, even if T1 is fragile compared to other phones, one can not conclude
    that T1 phone is not acceptable for consumers. Consumers may prefer
    beautiful though fragile phones to non-fragile ones. Examples are iPhone 1
    and iPhone 4.

    In summary, Wang's evidence is not necessarily useful, and the link between
    the evidence and the finding on the phone's robustness is weak, and the
    conclusion can not be drawn from the finding on the phone's robustness.

    refs and see also

    -   [罗永浩在和王自如对质时的逻辑是否有问题？ - 辩论 - 知乎](http://www.zhihu.com/question/25011349)

[世界最轻宝座易主：松下 Let's Note 系列 RZ4C 笔记本 仅重 745g_资讯中心_什么值得买](http://news.smzdm.com/p/8465/){.heart} -<

:   应该说英特尔 **14nm Core M** 一出，商务本似乎迎来第二春，联想 Yoga、ThinkPad Helix、
    HP Elitebook 等各路轻薄本屡屡现身。不过既然说到便携，日系品牌才一直都是代表，
    在今年 10 月，其实 Panasonic（松下）也跟进了 Let's Note 系列中最新款 RZ4C，就用上了
    Core M 小心脏，而且重量也得此控制在 745g，超越 NEC LaVie GZ，坐上世界最轻笔记本的
    宝座。

    配置方面，RZ4C 采用 10.1 英寸 1920 x 1200 分辨率（16:10）IPS 触控幕，类似 Yoga 那种
    360 度可翻转设计。搭载 Core M-5Y10 处理器，性能和 i3 相当，不过功耗仅有 4.5W，因
    此续航最长达到 10 小时。最大 8GB 内存 + 256GB 固态硬盘。连接性没有做出牺牲是非常
    值得称赞的，HDMI、VGA、3 个 USB 3.0、千兆网口、SD 读卡器、蓝牙 4.0 也都一并带来
    ，即使厚度 19.5mm 不算极致纤薄，但实用性比那些舍弃 VGA、网口、USB 数量的同行好
    多了。

    此外内置 Windows 8.1 系统，颜色有传统银色和少见的蓝粉色两种可选，做工方面通过
    了 76cm 跌落、100kg 重压测试，继承了松下一贯的高品质，这也是很多值友选择日系本
    重要原因之一。需要注意的是，键盘为日版设计，个别键位有所不同。

    refs and see also

    -   [松下 Let's Note 秋冬产品线更新，迷你型 RZ 系列重出江湖](http://cn.engadget.com/2014/10/02/panasonic-lets-note-rz4-autumn-winter/)
    -   [Panasonic Let's note AX3（豆瓣）](https://dongxi.douban.com/show/1830665/)

[vim - Paste in insert mode? - Stack Overflow](http://stackoverflow.com/questions/2861627/paste-in-insert-mode) -<

:   ```vim
    :echo @% " current filename
    ```
    -   `Control+R +` -> `"+p`, 粘贴代码的时候换行还不会错。
    -   `Control+R %` -> insert filename
    -   `Control+R /`
    -   gq -> gqq (format cur line)
    -   set nolist, show $ as `$`.
        +   set listchars? -> `eol:$`
    -   `/^$\n^$`, search consecutive empty lines
    -   reg, show reg entries
        +   `\s\+$`, `"/p`

    `xclip -out -sel clipboard`{.bash}

[masters - Advisor tries to reproduce my results to ensure my honesty. Is it the norm? - Academia Stack Exchange](http://academia.stackexchange.com/questions/68732/advisor-tries-to-reproduce-my-results-to-ensure-my-honesty-is-it-the-norm) -<

:   **It is not that you will be overpaid as a grad student. It is that you were
    extremely underpaid as an undergrad tutor.**

    Thank you!!! I really appreciate your feedback!

    As many have pointed out in the comments (Nate Eldredge, Dan Romik, Per
    Alexandersson, etc.), the point is not to catch you cheating (as if you
    were intentionally trying to manipulate your results), but rather to verify
    your process of obtaining such results. We all should be so lucky as to
    have an adviser take the time out of his/her schedule to verify our
    processes.

    I would also like to add that -- and this assumes your thesis could/will lead
    to an academic publication at a journal or conference -- that your adviser's
    reputation is potentially on the line by attaching his/her name to such a
    document. In other words, by becoming a co-author on your [future] publication,
    your adviser is essentially saying, "Yes, I helped work on this, and I am sure
    of the methods and the results contained within."

    The bottom line (tl;dr) is that you shouldn't take this as a personal attack.
    **You should be thankful to have someone who can invest the amount of time
    necessary to ensure the correctness of the work you've done**.

    Beyond that, if the professor has the "**If your name is on the paper, you should
    be able to explain what happened**" philosophy, beyond verifying the professor
    may just want to see the implementation. – Fomite

    There may be another reason your advisor wants to do this: perhaps the work can
    be continued in the future by another of their students, and your advisor wants
    to **be able to explain the details to that (potential) future student**.

    Regardless, I think it's praise that your advisor is giving you.

    The advisor's reputation is always on the line when signing a thesis. It
    doesn't matter whether there is also a journal article. – David Ketcheson

[Should I share my horrible software? - Academia Stack Exchange](http://academia.stackexchange.com/questions/37370/should-i-share-my-horrible-software){.heart} -<

:   My **flippant** (`['flɪpənt]`, 嘴碎的；没礼貌的) answer: Can you name one
    person who got tenure because of their well-written code, or their careful
    git commits?

    Sounds like **academic software**.

    Yes, you should.

    First, most scientific software is terrible. I'd be very surprised if yours
    is worse than average: the mere fact you know design patterns and the
    difference between recursion and loops suggests it's better.

    Second, it's unlikely you'll have the incentive or motivation to make it
    better unless, or until, it's needed by someone else (or you in 6 months).
    Making it open gives you that incentive.

    Potential upsides: **possible new collaborators**, bugfixes, extensions,
    publications.

    Potential downsides: **timesink** (maintaining code or fixing problems for
    other people), getting scooped. I'll be clear: I don't take either of these
    downsides very seriously.

    After I had published my paper, some people asked me to share the software
    that I developed. At first, I was very happy that my paper attracted some
    attention, and I was happy to share not only the binary but also the source
    code, case studies etc. **But looking at my software, I feel very
    embarrassed.**

    refs and see also

    -   [Should I share my horrible software? - Academia Stack Exchange](http://academia.stackexchange.com/questions/37370/should-i-share-my-horrible-software)

[conference - How to ask dumb questions - Academia Stack Exchange](http://academia.stackexchange.com/questions/51631/how-to-ask-dumb-questions) -<

:   Having reviewed over 2000 first posts on this site, I must say this is one
    of the best questions I ever reviewed. I can imagine many graduate students
    would have the same problem. One sugegestion, start your question by saying
    "**I am a graduate student.**" so that everyone in the room will understand.

    I do wish people would stop saying "there's no such thing as a stupid
    question". **It's simply untrue.** In any given context, there are stupid
    questions. And given almost any specific **answerable question**, there exist
    contexts where it is a stupid question.

    There is no such thing as a dumb question is a good adage (`['ædɪdʒ]` 格言
    ，谚语；箴言) for the classroom, where our mission is to teach students,
    and we have a number of weeks to **accomplish the learning objectives**. We
    use this maxim to encourage students to ask questions rather than fall behind.

    However, there is a such thing as an **annoying question** can be an equally
    true corollary, particularly in a conference setting where someone is
    trying to cram months worth of research into a 45-minute talk in front of
    presumed experts in the field. In such cases, it might be preferable to not
    derail the speaker's presentation.

    Asking the question will not benefit anyone.

    I would start by pointing out that, generally, you won't be the only
    student in the room and there will almost certainly be others thinking of
    the same 'stupid question' but not asking. Many times these questions arise
    due to the incompetence of the speaker and not the audience. Secondly, it
    is an academic environment, questions should be encouraged. Those academics
    who don't encourage bright young students are the problem, not you.

[research - How should I deal with discouragement as a graduate student? - Academia Stack Exchange](http://academia.stackexchange.com/questions/2219/how-should-i-deal-with-discouragement-as-a-graduate-student) -<

:   The fact is research is hard. It appears to consist primarily of staring at
    a problem for days and days and days without getting anywhere. Sometimes,
    rarely, I do figure something out and that feels wonderful, but the
    overwhelming majority of my time appears to be spent banging my head
    against a mostly figurative wall. I am not complaining about the material
    being hard, and I am not averse to putting in hard work, but I get
    frequently discouraged when I realize the vast volumes of mathematics that
    I yet know nothing about (and probably never will). It's very hard to
    quantify progress - in particular, there are **too few tangible returns after
    too many hours worked**. I find myself thinking along the lines of "Oh, if
    only someone actually smart were thinking about this problem they would
    have solved it in moments" and so on.

    I've talked about this to some number of people; here is some advice I have
    received:

      - Take a day off. Putting in hours upon hours of trying things doesn't
        magically lead to a solution, particularly if the brain is tired and
        just wants to sleep.
      - Have a hobby. Since math research doesn't exactly provide **instant
        gratification**, a hobby might provide some instead.
      - Talk to other graduate students. Realize that many graduate students go
        through this.

    I've found it extremely useful to have two or three walls to bang my head
    against at any given time. Surprisingly, sometimes **banging my head against
    one wall** actually makes one of the other walls weaker. But most walls prove
    considerably stronger than my head; so it's helpful to have options, so I
    don't feel so bad about walking away with some scalp intact.

    If you're very lucky, one **good smack on the bricks** will actually bring the
    ceiling crashing around your ears. That takes a long time to clean up, but
    sometimes the debris will knock down other walls for you. And then you have
    a whole new set of even bigger walls to bang your head against!

    I find myself thinking along the lines of "Oh, if only someone actually
    smart were thinking about this problem they would have solved it in
    moments" and so on.

    Do not listen to the **Impostor Syndrome**. Everyone "actually smart" is
    hearing exactly the same voice in their head saying "Oh, if only someone
    who actually knew how to hit walls with their forehead hit this wall, it
    would come down like a stack of cards." when in fact the wall really is
    made of brick.

    Impostor syndrome is an evil and pernicious ( `[pɚ'nɪʃəs]` 有害的；险恶的)
    thing.

    And yet if you continue killing mice, you're bound to hate your field so
    much that you'll eventually have a PhD in something you can't even stomach.
    Not to mention the damage you'll likely do to your psyche in that time. I
    don't have a good answer for you - though my heart hurts for you :( I will
    say this - the knowledge you've gained over this time, and the publications
    you've made cannot be taken away from you. So even if you leave and start
    again elsewhere, you won't have nothing. Remember that as you move forward.

    As a biologist, I'm amazed by this story and I have a hard time believing
    something. To use animals in experiments, you need a kind of approbation
    (`['æprə'beʃən]`) by an animal care board (maybe called something else in
    Germany). It's doubtful you can publish without saying you have this
    approbation. It's more doubtful you can get an approbation without a
    careful and respectful plan of how you're going to euthanized
    (`['juθənaɪz]` vt. 使安乐死；) animals. How did you publish without this?

    Forgot to mention this in my earlier comment, but - if you are feeling
    depressed/mentally exhausted/emotionally distressed, do not hesitate to go
    see **a mental health counselor/psychologist**. **They are trained to help you in
    these scenarios.**

`C++ 中文`{.heart} -<

:   ```cpp
    #include <iostream>
    #include <string>
    #include <iomanip>

    int main ( int argc, char **argv )
    {
        std::string str;
        if (argc >= 2)   { str = argv; }
        if (str.empty()) { str = "English & 中文"; }

        std::wstring wStr(str.begin(), str.end());
        std::wstring::iterator i = wStr.begin();
        for (; i != wStr.end(); ++i) {
            // actually numbers, you can add one
            std::cout << "\t" << std::hex << 1+(*i);
        }
        std::cout << std::endl;
    }
    ```

    ```bash
    $ ./WideString.exe
            46      6f      68      6d      6a      74      69      21      27      21      ffd7    ffd1    ffcf    ffc5

    $ ./WideString.exe "hay 嗨"
            69      62      7a      21      ffe1    ffcc
    ```

[【在线影展】乡土往事，岁月如歌_图片频道_新闻中心_腾讯网](http://news.qq.com/original/zaixianyingzhan/soilsong.html) -<

:   ![](http://img1.gtimg.com/ninja/1/2016/05/ninja146362891359003.jpg)

    ![](http://img1.gtimg.com/ninja/1/2016/05/ninja146362901367818.jpg)

    一般来说，中国人的财富表现为现金和房产，但房屋产权概念一直很薄弱，人们被允
    许住在自己的房子里面，但同时也被告知，政府有权重新安置居民，并支付一定的补
    偿款。但是由于很多人对政府提供的赔偿金不满意，便导致了“钉子户”的产生。不过
    时间是一台巨大的推土机，中国的许多“钉子户”最终被收买、赶走或者死去，因为许
    多人都是老年人。

    refs and see also

    -   [【鹅眼】上海最贵土地上的“钉子户”_图片频道_新闻中心_腾讯网](http://news.qq.com/original/eyan/guangfuli.html)

[c++ - How to detect c++11 support of a compiler with cmake - Stack Overflow](http://stackoverflow.com/questions/10984442/how-to-detect-c11-support-of-a-compiler-with-cmake/20165220#20165220) -<

:   **cmake cxx compile features**, **cmake cxx known features**
    **target compile features**

    ```cmake
    cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
    project(foobar CXX)
    message("Your C++ compiler supports these C++ features:")
    foreach(i ${CMAKE_CXX_COMPILE_FEATURES})
        message("${i}")
    endforeach()
    ```

    Visual Studio 14 2015 Win64 -<

    :   ```tzx-bigquote
        Your C++ compiler supports these C++ features:
        cxx_alias_templates
        cxx_alignas
        cxx_alignof
        cxx_auto_type
        cxx_binary_literals
        cxx_contextual_conversions
        cxx_decltype
        cxx_decltype_auto
        cxx_default_function_template_args
        cxx_defaulted_functions
        cxx_defaulted_move_initializers
        cxx_delegating_constructors
        cxx_deleted_functions
        cxx_digit_separators
        cxx_enum_forward_declarations
        cxx_explicit_conversions
        cxx_extended_friend_declarations
        cxx_extern_templates
        cxx_final
        cxx_func_identifier
        cxx_generalized_initializers
        cxx_generic_lambdas
        cxx_inheriting_constructors
        cxx_inline_namespaces
        cxx_lambdas
        cxx_lambda_init_captures
        cxx_local_type_template_args
        cxx_long_long_type
        cxx_noexcept
        cxx_nonstatic_member_init
        cxx_nullptr
        cxx_override
        cxx_range_for
        cxx_raw_string_literals
        cxx_reference_qualified_functions
        cxx_return_type_deduction
        cxx_right_angle_brackets
        cxx_rvalue_references
        cxx_sizeof_member
        cxx_static_assert
        cxx_strong_enums
        cxx_template_template_parameters
        cxx_thread_local
        cxx_trailing_return_types
        cxx_unicode_literals
        cxx_uniform_initialization
        cxx_unrestricted_unions
        cxx_user_literals
        cxx_variadic_macros
        cxx_variadic_templates
        ```

    Visual Studio 10 2010 Win64 -<

    :   ```tzx-bigquote
        cxx_auto_type
        cxx_decltype
        cxx_extended_friend_declarations
        cxx_extern_templates
        cxx_lambdas
        cxx_local_type_template_args
        cxx_long_long_type
        cxx_nullptr
        cxx_override
        cxx_right_angle_brackets
        cxx_rvalue_references
        cxx_static_assert
        cxx_template_template_parameters
        cxx_trailing_return_types
        cxx_variadic_macros
        ```

    ```cmake
    # method 1
    add_executable(prog main.cc)
    set_property(TARGET prog PROPERTY CXX_STANDARD 11)
    set_property(TARGET prog PROPERTY CXX_STANDARD_REQUIRED ON)

    # method 2
    get_property(known_features GLOBAL PROPERTY CMAKE_CXX_KNOWN_FEATURES)
    foreach(i ${known_features})
        message("${i}")
    endforeach()

    add_executable(foobar main.cc)
    set(needed_features
        cxx_strong_enums
        cxx_constexpr
        cxx_auto_type)
    target_compile_features(foobar PRIVATE ${needed_features})
    ```

    refs and see also

    -   [target_compile_features — CMake 3.1.3 Documentation](https://cmake.org/cmake/help/v3.1/command/target_compile_features.html)

[[DPI Scaling Fix] Bold, Blurry or Hard to Read Font Problem in Windows 8.1 / 10 - AskVG](http://www.askvg.com/fix-bold-blurry-or-hard-to-read-font-problem-in-windows-8-1/) -<

:   ![](https://i-technet.sec.s-msft.com/dynimg/IC695128.jpg)

[karan/Projects-Solutions: Links to others' solutions to Projects (https://github.com/karan/Projects/)](https://github.com/karan/Projects-Solutions)

[如何理解「索尼大法好」？ - 科技 - 知乎](http://www.zhihu.com/question/25150363)

[Jason’s home - 博客频道 - CSDN.NET](http://blog.csdn.net/wsj18808050)

[Milo Yip - 博客园](http://www.cnblogs.com/miloyip/)

[Qt 静态编译 – My SCARLET](http://scarletpan.github.io/static/) -<

:   refs and see also

    -   [Qt for Windows：Qt 5.6.0 MinGW 静态编译版本制作 - Jason’s home - 博客频道 - CSDN.NET](http://blog.csdn.net/wsj18808050/article/details/50909381)

[district10/bcp: Boost.org bcp module, and a CMakeLists.txt for lazy people.](https://github.com/district10/bcp) -<

:   -   <http://whudoc.qiniudn.com/2016/bcp_standalone.exe> (561 KB)
    -   <http://whudoc.qiniudn.com/2016/bcp_standalone_linux> (917 KB)
    -   <http://whudoc.qiniudn.com/2016/bcp_standalone_linux_i386> (900 KB)
    -   <http://whudoc.qiniudn.com/2016/boost_1_58_0_headers.7z> (6.29 MB)
    -   <http://whudoc.qiniudn.com/2016/boost_1_58_0_headers_sources.7z> (37.6 MB)
    -   <http://whudoc.qiniudn.com/2016/boost_1_58_0_vs2010_x64.7z> (103 MB)

    You can newer (maybe newer) copy of bcp at
    <https://github.com/district10/bcp/tree/standalone#0-get-bcp-binary--boost-source-file>

    TODO: 编译 x86 的 windows 版本。

    refs and see also

    -   [bcp，只为boost库瘦身 - iqfifty的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/iqfifty/article/details/8997909)

[Telegram 传奇：一个关于俄罗斯富豪、黑客、极权和阴谋的创业故事 - 钛媒体官方网站](http://www.tmtpost.com/1443098.html){.featured .heart} -<

:   被警察监听，Pavel Durov 决心做一个为隐私和安全而生的通讯工具

    这架纸飞机后来被做为了 Telegram 的 Logo。Pavel 非常喜欢扔纸飞机那个时刻，他
    觉得那非常能代表他叛逆精神。那并不是暴发户对金钱的挥霍，而是**对自由的向往**。

    今年年初，笑来老师迷上了 Telegram，想在上面做一些东西，那段时间我帮他读了不
    少 Telegram 的代码。边读边佩服这个团队的优秀。Nikolai 设计的协议 MTProto 极
    其优秀，兼具数学和工程之美，它的加密基础非常完善，同时又在工程上很出色，
    Telegram 传递的消息实际是函数，可扩展性相当强。同时，所有代码都是开源的，在
    github 上可以看到每个项目的贡献者人数都很少，但代码质量相当高。我很惊讶于如
    此短的开发时间，如此少的人数，产生出这么高质量的代码。

    Telegram 的特色就是快，它的快体现在各方面，不仅仅是协议本身精简造成的传输速
    度快，Telegram 在各平台上的实现几乎都是从最底层的简单 API 实现，几乎不使用
    常见的库，而是自己实现所有界面控件。他们的所有控件样式也相当简单，从而让绘
    制效率非常高。这些努力最终得到的回报，就是它使用起来速度极快，极流畅。如果
    你在一个正常的网络环境使用，会非常直观的感受到它的效率和稳定。

    到今天，已经加入了相当多功能的 Telegram（包括自定义的贴纸表情和机器人）iOS
    版只有 30M 的体积，而微信早就到了 90 多 M，就算是功能简单的多的 Whatsapp 也
    有 40 多 M。**有兴趣琢磨代码的同学可以去 Github 上慢慢研究他们开源的代码，肯
    定会大有收获。**

[Advanced Code Search](https://github.com/search/advanced?q=%E9%BB%91%E5%AE%A2&repository=blog&user_id=district10&utf8=%E2%9C%93) -<

:   github code search

[www.iki.fi/sol - Tutorials - IMGUI](http://sol.gfxile.net/imgui/)

[Immediate Mode Model/View/Controller](http://www.johno.se/book/imgui.html)

[lua_binding_benchmark/.travis.yml at master · satoren/lua_binding_benchmark](https://github.com/satoren/lua_binding_benchmark/blob/master/.travis.yml) -<

:   ```yaml
    sudo: false
    language: cpp
    compiler:
    - g++
    before_install:
    - git submodule update --init --recursive
    install:
    - if [ "$CXX" = "g++" ]; then export CXX="g++-4.9"; fi
    addons:
      apt:
        sources:
        - ubuntu-toolchain-r-test
        - kalakris-cmake
        packages:
        - liblua5.2-dev
        - lua5.2
        - libboost-all-dev
        - g++-4.9
        - cmake
    env:
      matrix:
      - BUILD_TYPE=Release
      global:
      - GH_REF: github.com/satoren/lua_binding_benchmark.git
      - secure: FOVj8m7GhZN3roaK..........................................
    script:
     - cmake ../ -DCMAKE_BUILD_TYPE=${BUILD_TYPE} -DCMAKE_CXX_FLAGS=${CXX_FLAGS} \
       && make execute_benchmark
    after_success:
     - [ "$TRAVIS_BRANCH" == master ] && \
       [ "$TRAVIS_PULL_REQUEST" == "false" ] && \
       ./deploy.sh
    ```

[Download Microsoft Visual Studio Community 2015 from Official Microsoft Download Center](https://www.microsoft.com/en-us/download/confirmation.aspx?id=48146) -<

:   VS2015

[lua-users wiki: Lua Style Guide](http://lua-users.org/wiki/LuaStyleGuide) -<

:   C++03 compiler with boost library or C++11 compiler(gcc 4.8+, clang 3.4+,
    MSVC2015) without boost.

    Selene `[si'li:nə]` n. 月之女神（希腊神话中的一个形象）

    Sol makes use of C++11/14 features. GCC 4.9 and Clang 3.4 (with `std=c++1z` and
    appropriate standard library) or higher should be able to compile without
    problems. However, the officially supported and CI-tested compilers are:

    -   GCC 4.9.0+
    -   Clang 3.5+
    -   Visual Studio 2015 Community (Visual C++ 14.0)+

`define vars at compiling`{.heart} -<

:   main.cpp

    ```cpp
    #include <cstdio>

    int main( void )
    {
        printf( "VAR: %s\n__FILE__: %s\n", VAR, __FILE__ );
    }
    ```

    compile & run

    ```bash
    $ g++ -D'VAR="Variable"' main.cpp -o main
    $ ./main
    VAR: variable
    __FILE__: main.cpp
    ```

    感觉应该是，编译的时候，编译器会定义一些变量给程序。比如 `__FILE__`，你还可
    以自己添加一些，比如这里的 `VAR`。这些都是“环境变量”。

    在 CMake 里，可以用

    ```cmake
    add_definitions(-DDATA_DIR="${PROJECT_SOURCE_DIR}/data")
    ```

    这跟用 cmake 的 config 文本一样。

    CMake 的 configs：

    :   Configs.h.in

        ```
        #define CMAKE_SOURCE_DIR "@CMAKE_SOURCE_DIR@"
        ```

        CMakeLists.txt

        ```
        configure_file(
            "${PROJECT_SOURCE_DIR}/Configs.h.in"
            "${PROJECT_BINARY_DIR}/Configs.h" )
        ```

        Configs.h

        ```
        #define CMAKE_SOURCE_DIR "D:/txt/data"
        ```

[ToyBox開發日誌: In-depth: Functional programming in C++ - 在C++上面使用函數式編程](http://toyauthor.blogspot.jp/2015/10/in-depth-functional-programming-in-c-c.html) -<

:   我認為 FP 確實有它存在的價值，但是光憑這點就去呼籲大家放棄 C++ 然後改用
    Lisp、Haskell 這些語言是不負責任的發言。

    refs and see also

    -   [Gamasutra - In-depth: Functional programming in C++](http://www.gamasutra.com/view/news/169296/Indepth_Functional_programming_in_C.php)

[Ubuntu Pastebin](http://paste.ubuntu.com/16385769/) -<

:   gist-alike

[Shopping Cart - HostUS](https://my.hostus.us/cart.php?a=confproduct&i=0)

[Marching Cubes - Augusdi的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/Augusdi/article/details/6621720)

[ShareX/ShareX: ShareX is a free and open source program that lets you capture or record any area of your screen and share it with a single press of a key. It also allows uploading images, text or other types of files to over 80 supported destinations you can choose from.](https://github.com/ShareX/ShareX) -<

:   !!! Good! :smile:

[新手如何在 gdb 中存活 - Jack47 - 博客园](http://www.cnblogs.com/Jack47/p/survive-in-gdb.html){.heart} -<

:   `man 7 signal`

    ```tzx-bigquote
    Signal     Value     Action   Comment
    ──────────────────────────────────────────────────────────────────────
    SIGHUP        1       Term    Hangup detected on controlling terminal
                                  or death of controlling process
    SIGINT        2       Term    Interrupt from keyboard
    SIGQUIT       3       Core    Quit from keyboard
    SIGILL        4       Core    Illegal Instruction
    SIGABRT       6       Core    Abort signal from abort(3)
    SIGFPE        8       Core    Floating point exception
    SIGKILL       9       Term    Kill signal
    SIGSEGV      11       Core    Invalid memory reference
    SIGPIPE      13       Term    Broken pipe: write to pipe with no
                                  readers
    SIGALRM      14       Term    Timer signal from alarm(2)
    SIGTERM      15       Term    Termination signal
    SIGUSR1   30,10,16    Term    User-defined signal 1
    SIGUSR2   31,12,17    Term    User-defined signal 2
    SIGCHLD   20,17,18    Ign     Child stopped or terminated

    SIGCONT   19,18,25    Cont    Continue if stopped
    SIGSTOP   17,19,23    Stop    Stop process
    SIGTSTP   18,20,24    Stop    Stop typed at terminal
    SIGTTIN   21,21,26    Stop    Terminal input for background process
    SIGTTOU   22,22,27    Stop    Terminal output for background process

    The signals SIGKILL and SIGSTOP cannot be caught, blocked, or ignored.
    ```

    -   `l`, list source
    -   `l 7`, list source at line 7
    -   `l print_str`, list `print_str`
    -   `set listsize 20`, list 20 lines of code each time
    -   `b 9`, break line 9
    -   `r`, run
    -   `p str`, print var `str`'s value

    -   debug via dumped file

        ```bash
        # setup & run
        $ ulimit -c unlimited
        $ ./main
            10226 segmentation fault (core dumped)  ./main

        gdb main core   # `core' is the dumped file
        ```

        ```
        (gdb) bt        # backtrace
        #0  0x000000000040055c in print_str (str=0x400657 "hello, world!") at main.c:5
        #1  0x0000000000400584 in b (b=0x400657 "hello, world!") at main.c:9
        #2  0x000000000040059f in a (a=0x400657 "hello, world!") at main.c:10
        #3  0x00000000004005be in main () at main.c:14
        ```

    -   debug running program

        `ps aux ｜grep main`

    refs and see also

    -   [Unix signal - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Unix_signal)
    -   [用 GDB 调试程序（一） - 陈皓专栏　【空谷幽兰，心如皓月】 - 博客频道 - CSDN.NET](http://blog.csdn.net/haoel/article/details/2879)

[C 语言中为什么不能用 char 类型来存储 getchar() 的返回值 - Jack47 - 博客园](http://www.cnblogs.com/Jack47/archive/2012/12/23/2819111.html){.heart} -<

:   `int getchar ( void );`

    `fgetc()`
      ~ reads the next character from stream and returns it as an unsigned char cast to an int, or EOF on
        end of file or error.

    `getc()`
      ~ is equivalent to `fgetc()` except that it may be implemented as a macro which evaluates stream  more
        than once.

    `getchar()`
      ~ is equivalent to `getc(stdin)`.

    `gets()`
      ~ reads a line from stdin into the buffer pointed to by s until either a terminating newline or EOF,
        which it replaces with a null byte ('\0').  No check for buffer overrun is performed (see BUGS below).

    `fgets()`
      ~ reads in at most one less than size characters from  stream  and  stores  them  into  the  buffer
        pointed  to  by s.  Reading stops after an EOF or a newline.  If a newline is read, it is stored into the
        buffer.  A terminating null byte ('\0') is stored after the last character in the buffer.

    `ungetc()`
      ~ pushes c back to stream, cast to unsigned char, where it is available for subsequent read operations.
        Pushed-back characters will be returned in reverse order; only one pushback is guaranteed.

    ```
    ---------------------------------      ----------------------------------------------
    |    int到char转化（截断）      |      |       |             char到int转化（扩展）  |
    ---------------------------------      ----------------------------------------------
    | 十进制  |  int        |  char |      |  char |unsigned char=>int| signed char=>int|
    |---------|-------------|-------|      |-------|------------------|-----------------|
    |  2      |00 00 00 02  |  02   |      |  02   |  00 00 00 02     |00 00 00 02      |
    |  1      |00 00 00 01  |  01   |      |  01   |  00 00 00 01     |00 00 00 01      |
    |  0      |00 00 00 00  |  00   |      |  00   |  00 00 00 00     |00 00 00 00      |
    | EOF(-1) |FF FF FF FF  |  FF   |      |  FF   |  00 00 00 FF     |FF FF FF FF      |
    |  -2     |FF FF FF FE  |  FE   |      |  FE   |  00 00 00 FE     |FF FF FF FE      |
    --------------------------------       ----------------------------------------------
    ```

    refs and see also

    -   [[翻译]禅与文件和文件夹组织的艺术 上 - Jack47 - 博客园](http://www.cnblogs.com/Jack47/archive/2013/01/15/zen-and-the-art-of-file-and-folder-organization-part1.html)

[Permanently change keyboard layout on Ubuntu Server 11.10](http://krisreeves.com/things-that-should-be-easy/permanently-change-keyboard-layout-on-ubuntu-server-11-10/) -<

:   `dpkg-reconfigure console-setup`{.bash}

    You need to edit `/etc/default/keyboard`. After that, run
    `sudo dpkg-reconfigure console-setup`{.bash} to commit your settings.

    When you run console-setup, it compiles in the keyboard layout listed in
    that file, which is why console-data’s changes were not kept. In the file
    are four lines:

    ```
    XKBMODEL="pc105"
    XKBLAYOUT="us"
    XKBVARIANT=""
    XKBOPTIONS=""
    ```

    I can’t seem to find a list of acceptable arguments online either. You can
    browse or search `/usr/share/X11/xkb/rules/xorg.lst` for valid values, which
    I will include here for your convenience. (Shortcuts: model layout variant
    option)

[Remap keyboard on the Linux console - Unix & Linux Stack Exchange](http://unix.stackexchange.com/questions/177024/remap-keyboard-on-the-linux-console) -<

:   Linux uses two independent keyboard mappings. One for the graphical mode X
    and one for the console.

    You usually change the first one with setxkbmap (or xmodmap) and the second
    one with loadkeys. All those tool have a fine manpage.

    For loadkeys you can find the existing keymaps under /usr/share/kbd/keymaps.
    The description of those files is available in man 5 keymaps.

    The  program  loadkeys reads the file or files specified by filename....
    Its main purpose is to load the kernel keymap for the console.  You can
    specify console device by the `-C` (or `--console` ) option.

    ```
    $ locate dvorak
    /usr/lib/aspell/dvorak.kbd
    /usr/share/vim/vim74/keymap/dvorak.vim
    /usr/share/vim/vim74/keymap/russian-dvorak.vim
    /usr/share/vim/vim74/keymap/ukrainian-dvorak.vim
    /usr/share/vim/vim74/macros/dvorak
    ```

[Parsing expression grammar - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Parsing_expression_grammar) -<

:   In computer science, a parsing expression grammar, or PEG, is a type of
    analytic formal grammar, i.e. it describes a formal language in terms of a
    set of rules for recognizing strings in the language. The formalism was
    introduced by Bryan Ford in 2004 and is closely related to the family of
    top-down parsing languages introduced in the early 1970s. Syntactically,
    PEGs also look similar to context-free grammars (CFGs), but they have a
    different interpretation: the choice operator selects the first match in
    PEG, while it is ambiguous in CFG. This is closer to how string recognition
    tends to be done in practice, e.g. by a recursive descent parser.

`locate`{.bash .heart} -<

:   ```bash
    $ locate qmake
    /usr/bin/qmake
    /usr/bin/qmake-qt4
    /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
    /usr/share/doc/qt4-qmake
    /usr/share/doc/qt4-qmake/LGPL_EXCEPTION.txt
    /usr/share/doc/qt4-qmake/changelog.Debian.gz
    /usr/share/doc/qt4-qmake/copyright
    /usr/share/man/man1/qmake-qt4.1.gz
    /usr/share/perl5/Debian/Debhelper/Buildsystem/qmake.pm
    /usr/share/perl5/Debian/Debhelper/Buildsystem/qmake_qt4.pm
    /usr/share/qt4/bin/qmake
    /usr/share/qt4/mkspecs/aix-g++/qmake.conf
    /usr/share/qt4/mkspecs/aix-g++-64/qmake.conf
    /usr/share/qt4/mkspecs/aix-xlc/qmake.conf
    /usr/share/qt4/mkspecs/aix-xlc-64/qmake.conf
    /usr/share/qt4/mkspecs/blackberry-armv7le-qcc/qmake.conf
    ```

[Modern CMake with Qt and Boost - 推酷](http://www.tuicool.com/articles/bMRJVb) -<

:   ```cmake
    find_package( Qt5Widgets 5.2 REQUIRED )
    add_executable( myapp main.cpp )
    target_link_libraries( myapp
        Qt5::Widgets
    )
    ```

    One of the nice (and recent) features of CMake (in master branch, to become
    CMake 3.0.0) is that it gives diagnostics if I try to use a dependency
    without first finding it. CMake now recognises a pattern of double-colons
    `::` in the name of a dependency as denoting a special meaning that it is a
    IMPORTED target which encodes a lot of information about how to use it.

    CMake is aware that using the Qt5::Widgets library involves a compilation
    step and a linking step. It knows that because Qt5::Widgets is a target
    defined in files shipped by Qt in the lib/cmake directory.

    ```cmake
    set_property( TARGET Qt5::Widgets
        INTERFACE_INCLUDE_DIRECTORIES
            "${relativeLocation}/include/QtWidgets"
    )
    ```

    and for the Qt5Core library looks something like this:

    ```cmake
    set_property(TARGET Qt5::Core
        INTERFACE_INCLUDE_DIRECTORIES
             "${relativeLocation}/include"
             "${relativeLocation}/include/QtCore"
    )
    ```

    The Qt5::Core target specifies the ‘top level include’, and the
    Qt5::Widgets target depends transitively on the `Qt5::Core` target.

    All of these special features are available when using both Qt 4 and Qt 5.

    CMake is aware of these features file types and code generators, and can
    enable special handling of them. If you enable CMAKE_AUTOMOC CMake will
    scan compiled files for the `Q_OBJECT` macro and automatically run the `moc`{.bash}
    tool as needed (since CMake 2.8.6 ).

    People often ask whether CMake ‘supports’ C++11. That is the wrong question
    to ask . What people are thinking is ‘Can it automatically add the
    -std=c++11 flag for me?’

    Hmm, or should I use `-std=c++0x` for this compiler?

    Or wait, is this a C++14 feature? Maybe I need `-std=c++1y`?

    **Oh, wait I’m using MSVC, no flag is needed at all.**

    The right questions to ask are ‘Does the compiler have the feature I need?’
    and ‘Is any flag required to enable that feature?’. The version of the C++
    standard that specifies the feature is then not relevant to the user and
    can be encoded in the implementation of CMake. Aiming for ‘C++11 support in
    CMake’ would not be **future-proof** or even **past-proof**.

    Because the standard version which introduced the feature is irrelevant,
    the user does not need to care whether -std=c++11 or -std=c++98 is needed.
    By not requiring the user to enable the flags manually, a cross-platform
    trap can be avoided.

    For example, it will generate a define for each of the features and whether
    the feature is supported by the users compiler. This is essentially the
    same kind of thing that the Boost.Config library and qcompilerdetection.h
    are doing.

    ```cmake
    project( Qt5Project )
    cmake_minimum_required( VERSION 2.8.11 )

    # root of your msvc14 x64 prebuild, there should be a `/lib/cmake` dir
    set( CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "C:/Qt/Qt5-msvc14/5.6/msvc2015_64" )
    set( CMAKE_INCLUDE_CURRENT_DIR ON )
    set( CMAKE_AUTOMOC ON )

    find_package( Qt5Widgets REQUIRED )
    qt5_wrap_ui( UI_HEADERS mainwindow.ui )
    qt5_add_resources( QRCS resources.qrc )
    add_executable( ${PROJECT_NAME} main.cpp mainwindow.cpp ${UI_HEADERS} ${QRCS} )
    target_link_libraries( ${PROJECT_NAME} Qt5::Widgets )
    ```

[ant - Why is no one using make for Java? - Stack Overflow](http://stackoverflow.com/questions/2209827/why-is-no-one-using-make-for-java) -<

:   The difference between:

    ```bash
    javac Main.java
    javac This.java
    javac That.java
    javac Other.java
    ```

    and

    ```bash
    javac Main.java This.java That.java Other.java
    ```

    is night and day.

    Exacerbate that with hundreds of classes, and it just becomes **untenable**.

    Make also **isn't very good at determining what files are out of date, at a
    collection level**.

[Restore previous session - Configure when Firefox shows your most recent tabs and windows | Firefox Help](https://support.mozilla.org/en-US/kb/restore-previous-session) -<

:   history -> restore previous session

    ![restore previsous session](https://support.cdn.mozilla.net/media/uploads/gallery/images/2014-03-21-07-23-00-df468d.png)

[Anti-lock braking system - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Anti-lock_braking_system) -<

:   An **anti-lock braking system** or **anti-skid braking system  (ABS)** is an
    automobile safety system that allows the wheels on a motor vehicle to
    maintain tractive contact with the road surface according to driver inputs
    while braking, preventing the wheels from locking up (ceasing rotation) and
    avoiding uncontrolled skidding. It is an automated system that uses the
    principles of threshold braking and cadence braking which were practiced by
    skillful drivers with previous generation braking systems. It does this at
    a much faster rate and with better control than a driver could manage.

    ABS generally offers improved vehicle control and decreases stopping
    distances on dry and slippery surfaces; however, on loose gravel or
    snow-covered surfaces, ABS can significantly increase braking distance,
    although still improving vehicle control.

    ABS was first developed for aircraft use in 1929 by the French automobile
    and aircraft pioneer Gabriel Voisin, as threshold braking on airplanes.

    ![](https://upload.wikimedia.org/wikipedia/commons/6/68/Anti-lock_braking_system_logo.png)

[智能单元 - 知乎专栏](https://zhuanlan.zhihu.com/intelligentunit)

[grab all descendents · district10/CuteWatchDog@c496e03](https://github.com/district10/CuteWatchDog/commit/c496e03bfaebea37d9b16a99df9ac15922a91676#diff-34ab4d129103a08bf0033d323034e0c9R78){.heart} -<

:   用栈实现目录的输出。

    ```cpp
    QStringList CuteWatchDog::grabAllDescendents( const QString &root )
    {
        QStringList dirEntries;
        QDir dir( root );
        QQueue<QDir> queue;
        queue.enqueue( dir );
        while( !queue.isEmpty() ) {
            QDir d = queue.dequeue();
            dirEntries << d.absolutePath();
            foreach( const QFileInfo &info, d.entryInfoList(QDir::Dirs|QDir::NoDotAndDotDot) ) {
                 QDir subdir( info.absoluteFilePath() );
                 queue.enqueue( subdir );
             }
        }
        return dirEntries;
    }
    ```

    refs and see also

    -   [yhlleo/FindFilesWithinFolder: Find and generate a file list of the folder.](https://github.com/yhlleo/FindFilesWithinFolder)

[highlight-treeview](http://asciidocfx.github.io/highlight-treeview.js/) -<

:   -   win: `tree /F /A`
    -   linux: `tree`

    refs and see also

    -   [asciidocfx/AsciidocFX: Asciidoc Editor and Toolchain written with JavaFX 8 (Build PDF, Epub, Mobi and HTML books, documents and slides)](https://github.com/asciidocfx/AsciidocFX)

[Pro Git - GitBook](https://www.gitbook.com/book/gitbookio/progit/details){title="title works (tooltip.)"}

[progit/progit: Pro Git Book Content, 1st Edition - See 2nd edition at progit2](https://github.com/progit/progit)

[强大的CMake - 推酷](http://www.tuicool.com/articles/MVBFZ3)

[CMake使用总结 - MWB日常笔记](http://blog.atime.me/note/cmake.html)

[Shamir's Secret Sharing - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Shamir%27s_Secret_Sharing)

[我对顶功的分析 - 输入法讨论专区 - 北大中文论坛 www.pkucn.com - Powered by Discuz!](http://www.pkucn.com/thread-298521-1-1.html)

[QT 编写的中文双拼输入法最终版 - QTCN 开发网 - Powered by phpwind](http://www.qtcn.org/bbs/read-htm-tid-58920.html)

[networking - Network usage top/htop on Linux - Stack Overflow](http://stackoverflow.com/questions/368002/network-usage-top-htop-on-linux)

[亚马逊为什么要投资福昕软件？投资额是多少？ - 亚马逊 (Amazon.com) - 知乎](http://www.zhihu.com/question/19958342) -<

:   “事隔一年半，软件升了级，我还得去谈（合同），再交 5 万美元押金——到时候很可
    能就不只是 5 万美元的事了。”熊雨前觉得无理，又给 Adobe 发邮件：福昕还是很小
    的公司，没这么多钱，有没有可能降低押金？这次回复倒挺快：可以，但要提高单价。
    福昕就这样被逼上梁山。当时，国内软件开发企业大都在过苦日子，在主场寻求不到
    什么便利。在国外，通用软件虽有市场，但没有品牌，没有核心技术，福昕只能做些
    边角料的活儿，公司财务几度捉襟见肘。在接下来一年多时间，熊雨前把营销、财务
    全部交给员工，自己做起甩手掌柜，自主研发 PDF 核心技术，每天就一件事——写代码。

    真正令熊雨前意识到他的软件“可以直接转化为钱”的，是微软这位大客户的不约而至。
    2008 年底，全球金融危机正酣，微软揣着云计算中心 PDF 索引工具的合同，同时敲
    响了 Adobe、福昕两家的门。微软 SharePoint Online 产品经理李公布了测评结果：
    过滤 2676 份、共计 2406MB 的 PDF 文档，福昕比 Adobe 快了 5 倍。此前差不多一
    年，微软企业搜索产品部已经“面试”过这两家——福昕当时充其量小有名气，美国分公
    司只有 1 个人，微软一开始愣是没找到门儿，几经打听，才发现福昕的北京分部就在
    微软亚洲研究院的斜对面，两家是邻居。第一次的测评结果：过滤 1041 份、共计
    1751MB 的 PDF 文档，福昕比 Adobe 快了 4 倍。

    防打印确实只是设置了个标志位，大多数 PDF 软件都遵循这个标准罢了。只针对打印
    的密码也是防君子不防小人的。

    refs and see also

    -   [PDF to JPG - Convert your PDFs to Images online for free](https://smallpdf.com/pdf-to-jpg)
    -   [Foxit Software | Fast, Affordable, and Secure PDF Solutions](https://www.foxitsoftware.com/)
    -   [福昕软件 - 全球领先的PDF文档核心技术与应用服务](http://www.foxitsoftware.cn/)
    -   [福昕栅格化程序 .NET 平台软件开发工具包 - 福昕软件](http://www.foxitsoftware.cn/products/sdk/rasterizer/)
    -   [福昕软件 - 企业新闻 - 福昕软件收购澳洲 PDF 厂商 Debenu](http://www.foxitsoftware.cn/company/press_details.php?&url=html/notice/2016/foxit_press_id=284.html)
    -   [福昕网页浏览器 PDF 软件开发工具包 - 福昕软件](http://www.foxitsoftware.cn/products/sdk/web-pdf-sdk/)

[Mount Rushmore - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Mount_Rushmore) -<

:   Mount Rushmore National Memorial is a sculpture carved into the granite
    face of Mount Rushmore, a granite batholith formation in the Black Hills in
    Keystone, South Dakota, United States. Sculpted by Danish-American Gutzon
    Borglum and his son, Lincoln Borglum, Mount Rushmore features 60-foot (18
    m) sculptures of the heads of four United States presidents: George
    Washington (1732–1799), Thomas Jefferson (1743–1826), Theodore Roosevelt
    (1858–1919), and Abraham Lincoln (1809–1865) The entire memorial covers
    1,278.45 acres (2.00 sq mi; 5.17 km2) and is 5,725 feet (1,745 m) above sea
    level.

    ![Sculptures of George Washington, Thomas Jefferson, Theodore Roosevelt and
        Abraham Lincoln (left to right)](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f3/Dean_Franklin_-_06.04.03_Mount_Rushmore_Monument_%28by-sa%29-3_new.jpg/426px-Dean_Franklin_-_06.04.03_Mount_Rushmore_Monument_%28by-sa%29-3_new.jpg)

    ![Mount Rushmore commemorative stamp of 1952](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c4/Mount_Rushmore_stamp_3c_1952_issue.JPG/255px-Mount_Rushmore_stamp_3c_1952_issue.JPG)

    ![Mount Rushmore is near Keystone, South Dakota.](https://upload.wikimedia.org/wikipedia/commons/8/89/LocMap_Mount_Rushmore.png)

[睡眠非常浅的人，该怎样改善睡眠质量？ - 健康 - 知乎](http://www.zhihu.com/question/19575624) -<

:   表示自己睡眠质量太好……我只是知道我为什么睡眠质量这么好。除了自己总是在适当
    的时间起床外（非 REM 期）。

    refs and see also

    -   [如何高效地睡眠？ - 生活 - 知乎](http://www.zhihu.com/question/19551007)
    -   [上班族如何完美解决「早起毁一天」的问题？（多图）](http://daily.zhihu.com/story/4498237)

[一个死在百度和部队医院之手的年轻人](http://mp.weixin.qq.com/s?__biz=MzI5NDEzMjc0OQ==&mid=3045317271&idx=1&sn=9cca5718716cb641a9a081cba60c0cc3&scene=23&srcid=0501aPeNW1CjDrsYYn0GU3Ct#rd)

[王路：弟子混得不好想改行，孔子怎么挽留？](https://www.douban.com/note/554510957/) -<

:   业余棋手直接看专业九段下的棋，是一头雾水的，他完全不知道为什么这样下，反而
    觉得业余选手杀来杀去比较痛快。《飞狐外传》里讲到两个绝世高手比武，旁边围观
    的都看困了，两个高手你也不动，我也不动，不知道在干嘛。当一个人不去琢磨自己
    不懂的东西如何高明的时候，就容易陷入盲目的自大。

    “**吾不如老农**”，简简单单五个字，体现出十分丰富的层次：

    人人都以为孔子知识多，但孔子不以此自居。假如别人问我一个编程问题，我只懂一
    点，又不确定，也会告诉他。我的动机是什么呢？不是让他得到更详尽的解答，而是
    向他表示我有这方面的知识。孔子不需要这种虚荣心，他总**以让对方受益为目标，不
    以展示自己的渊博为目标**。

    “查字典去”是命令的口吻。命令的口吻会令对方不快。当一个人用命令的口吻与他人
    交流时，隐含的假定是：我比你高明，我可以**使役**你。这种倨傲的姿态，可能会
    伤害到一部分请教者。请教者可能说：“我懒得查，我难道不知道字典上有吗，问你只
    是因为你就在手边，比字典好用。”这就引发了**意气之争**。

    “吾不如老农”，不是使役的语气，而是事实的陈述。陈述事实给对方，让对方自己来
    抉择。**这就不是命令，而是启发了。**

    樊迟此刻，是遭遇到人生路径的选择问题了。我见过很多小孩，初中没读完，成绩不
    行，跟家长说，“我想学电脑”。真的想学电脑吗？数学满分 100 考 6 分还想学电脑？
    说想学电脑，其实是想玩电脑，学习态度不行，又**讳（hui）言**这点，就绕个弯，
    表示自己有别的兴趣和爱好。樊迟就是这个情况。

    以孔子之睿智，对樊迟之鲁钝，依然不肯说出那种虚伪的鼓励。固然那些话会让樊迟
    很舒服，但不说，才是对樊迟的尊重。

    孔子真是诚实的人。他不会说什么“三百六十行，行行出状元”。这种话，应该是自己
    对自己说的，因为爱惜职业，所以告诉自己，我所从事的劳作，并不比任何一种劳作
    低贱。但没有一个父母会对子女说，你成绩这么差，干脆别读书了，种地去吧。如果
    父母从心底认为读书比种地好，还这么劝子女，其实是从心底放弃了他。但孔子怎能
    如此放弃樊迟呢。

[Personal information management - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Personal_information_management) -<

:   Personal information management (PIM) is the activities people perform in
    order to acquire, organize, maintain, retrieve and use personal information
    items such as documents (paper-based and digital), web pages and email
    messages for everyday use to complete tasks (work-related or not) and
    fulfill a person’s various roles (as parent, employee, friend, member of
    community, etc.). More simply, PIM is the art of getting things done in
    our lives through information.

    There are six ways in which information can be personal:

    -   Owned by "me"
    -   About "me"
    -   Directed toward "me"
    -   Sent/Posted by "me"
    -   Experienced by "me"
    -   Relevant to "me"

[Uniq - Removing duplicate lines - Vim Tips Wiki - Wikia](http://vim.wikia.com/wiki/Uniq_-_Removing_duplicate_lines) -<

:   how to remove duplicate lines??

    可惜这个解决方案不是 vim 原生的，所以我不予采纳。

    方便地，还是把 `uniq.exe` 放到 PATH 吧。

[丽莉·克亚芙 (豆瓣)](https://movie.douban.com/celebrity/1237039/) -<

:   refs and see also

    -   [丽莉·克亚芙 R-dvorak4tzx](http://dvorak4tzx.lofter.com/post/1d4021c8_ad82963)
    -   [Riley Keough on IMDb: Movies, TV, Celebs, and more... - Photo Gallery - IMDb](http://www.imdb.com/name/nm2142336/mediaindex?ref_=nm_mv_close)

[关于异形的前世今生上抱下破 (普罗米修斯 影评)](https://movie.douban.com/review/5460211/)

[Ex (relationship) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Ex_(relationship)) -<

:   In social relationships, an ex (plural is exes) is someone with whom a
    person was once associated, in a relationship, marriage, or once talked to.
    As a prefix, ex- can refer to a variety of different relationships; for
    example, one might refer to a music group's ex-guitarist, or someone's
    ex-friend. When used alone, ex as a noun is assumed to refer to a former
    sexual or romantic partner, especially a former spouse. This often has a
    derogatory tinge, especially if it refers to unrequited feelings.


Biologist and statistician Ronald Fisher -<

:   ![Statistician William Sealy Gosset, known as "Student"](https://upload.wikimedia.org/wikipedia/commons/thumb/4/42/William_Sealy_Gosset.jpg/255px-William_Sealy_Gosset.jpg)

    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/3/37/Biologist_and_statistician_Ronald_Fisher.jpg/300px-Biologist_and_statistician_Ronald_Fisher.jpg)

    ![](https://upload.wikimedia.org/wikipedia/commons/a/aa/Youngronaldfisher2.JPG)

[Impostor syndrome - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Impostor_syndrome) -<

:   Impostor (`[ɪm'pɑstər]`) syndrome (also spelled imposter syndrome, also
    known as impostor phenomenon or **fraud syndrome**) is a term coined in
    1978 by clinical psychologists Dr. Pauline R. Clance and Suzanne A. Imes
    referring to high-achieving individuals marked by an inability to
    internalize their accomplishments and a persistent fear of being exposed as
    a "fraud".  Despite external evidence of their competence, those exhibiting
    the syndrome remain convinced that they are frauds and do not deserve the
    success they have achieved. Proof of success is dismissed as luck, timing,
    or as a result of deceiving others into thinking they are more intelligent
    and competent than they believe themselves to be. Some studies suggest that
    impostor syndrome is particularly common among high-achieving women, while
    others indicate that men and women are equally affected.

    Demographics `[.demə'ɡræfɪks]` n.人口统计数据

    :   The impostor syndrome is **particularly common among high-achievers**.
        Another demographic group that often suffers from this phenomenon is
        African Americans. Being the beneficiary of affirmative action may
        cause a person who belongs to a visible minority to doubt their own
        abilities and suspect that their skills were not what allowed them to
        be hired. Impostor syndrome has been commonly reported by graduate
        students and scientists beginning tenure track positions.

    refs and see also

    -   [Impostor Syndro-dvorak4tzx](http://dvorak4tzx.lofter.com/post/1d4021c8_86aa9c9)

[linux - What does "rc" mean in dot files - Stack Overflow](http://stackoverflow.com/questions/11030552/what-does-rc-mean-in-dot-files) -<

:   The ‘rc’ suffix goes back to Unix's grandparent, CTSS.  It had
    **a command-script feature called "runcom"**. Early Unixes used ‘rc’ for the name
    of the operating system's boot script, as a tribute to CTSS runcom.

    refs and see also

    -   [linux - What does the 'rc' in `.bashrc`, etc. mean? - Super User](http://superuser.com/questions/173165/what-does-the-rc-in-bashrc-etc-mean)

[Control point (mathematics) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Control_point_(mathematics)) -<

:   GCP, Ground Control Point

[Pan and scan - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Pan_and_scan) -<

:   ![A 2.35:1 image panned and scanned to 1.33:1. Nearly half of the original image has been cropped.](https://upload.wikimedia.org/wikipedia/commons/thumb/2/26/Image_cropping_133x1.jpg/360px-Image_cropping_133x1.jpg)

    Pan and scan is a method of adjusting widescreen film images so that they
    can be shown within the proportions of a standard definition 4:3 aspect
    ratio television screen, often cropping off the sides of the original
    widescreen image to focus on the composition's most important aspects.
    Some film directors and film enthusiasts disapprove of pan and scan
    cropping, because it can remove up to 45% of the original image on 2.35:1
    films or up to 53% on earlier 2.55:1 presentations, changing the director
    or cinematographer's original vision and intentions. The worst examples
    remove up to 75% of the original picture on such aspect ratios as 2.75:1 or
    even 3:1 in epics such as Ben-Hur, King of Kings or Lawrence of Arabia.
    The vertical equivalent is known as "tilt and scan" or "reverse pan and
    scan". The method was most common in the days of VHS, before widescreen
    home media such as DVD and Blu-ray.  Retract

HOWTO install infinality font-settings for Debian -<

:   <http://forums.debian.net/viewtopic.php?f=16&t=88545>

Rootless Root -<

:   Master Foo nodded and replied: “When you are hungry, eat; when you are
    thirsty, drink; when you are tired, sleep.”

    The novice frowned and said: “Perl's regexps would be excessive for so
    simple a task. I do not know awk, and I have been writing sed scripts in
    the last few weeks. As I have some experience with sed, at the moment I
    would prefer it. But if the job only needed to be done once rather than
    repeatedly, a text editor would suffice.”

    “And who better understands the Unix-nature?” Master Foo asked. “Is it he
    who writes the ten thousand lines, or he who, perceiving the emptiness of
    the task, gains merit by not coding?”

    “Complexity increases the possibility of failure; a twin-engine airplane
    has twice as many engine problems as a single-engine airplane.” By analogy,
    in both software and electronics, the rule that simplicity increases
    robustness. It is correspondingly argued that the right way to build
    reliable systems is to put all your eggs in one basket, after making sure
    that you've built a really good basket.

    |   Premature optimization is the root of all evil!
    |
    |   -- Donald Knuth
    |
    |   It always takes longer than you expect, even when you take into account
    |   Hofstadter’s Law.
    |
    |   -- Hofstadter’s Law
    |
    |   Debugging is twice as hard as writing the code in the first place. Therefore,
    |   if you write the code as cleverly as possible, you are, by definition, not
    |   smart enough to debug it.
    |
    |   -- Brian Kernighan
    |
    |   PHP is a minor evil perpetrated and created by incompetent amateurs, whereas
    |   Perl is a great and insidious evil, perpetrated by skilled but perverted
    |   professionals.
    |
    |   -- Jon Ribbens
    |
    |   Always code as if the guy who ends up maintaining your code will be a violent
    |   psychopath who knows where you live.
    |
    |   -- Rick Osborne
    |
    |   Saying that Java is good because it works on all platforms is like saying anal
    |   sex is good because it works on all genders
    |
    |   -- Unknown
    |
    |   An algorithm must be seen to be believe!

    "No Silver Bullet — Essence and Accidents of Software Engineering" is a widely
    discussed paper on software engineering written by Fred Brooks in 1986.
    Brooks argues that "there is no single development, in either technology or
    management technique, which by itself promises even one order of magnitude
    tenfold improvement within a decade in productivity, in reliability, in
    simplicity." He also states that "we cannot expect ever to see two-fold gains
    every two years" in software development, like there is in hardware development
    (Moore's law).

    Stupid: I'm having problems with my motherboard. Can anybody help?

    J. Random Hacker's response to this is likely to be “Right. Do you need burping and diapering, too?”,
    followed by a punch of the delete key.

    Smart: I tried X, Y, and Z on the S2464 motherboard. When that didn't work, I tried A, B, and C.
    Note the curious symptom when I tried C. Obviously the florbish is grommicking, but the results
    aren't what one might expect. What are the usual causes of grommicking on Athlon MP
    motherboards? Anybody got ideas for more tests I can run to pin down the problem?

    This person, on the other hand, **seems worthy of an answer**. He/she has
    **exhibited problem-solving intelligence** rather than **passively waiting for an answer**
    to drop from on high.

    In the last question, notice the subtle but important difference between
    demanding “Give me an answer” and “Please help me figure out what additional
    diagnostics I can run to achieve enlightenment.

`Minimal test case`{.heart} -<

:   provide a minimal bug-demonstrating test case

    refs and see also

    -   [I've just been asked to write a minimal example, what is that? - TeX - LaTeX Meta Stack Exchange](http://meta.tex.stackexchange.com/questions/228/ive-just-been-asked-to-write-a-minimal-example-what-is-that)

Infinite monkey theorem -<

:   The infinite monkey theorem states that a monkey hitting keys at random on
    a typewriter keyboard for an infinite amount of time will almost surely
    type a given text, such as the complete works of William Shakespeare.

OpenCV notes -<

:   ```cpp
    CommandLineParser parser(argc, argv, keys);
    string image = parser.get<string>("1");
    string templ = parser.get<string>("2");
    Mat img = imread(image.c_str(), 0);

    Mat img_yuv;
    cvtColor(img, img_yuv, CV_BGR2YCrCb); // convert image to YUV color space.
                                          // The output image will be created automatically
    vector<Mat> planes;                   // Vector is template vector class, similar to STL's vector.
                                          // It can store matrices too.
    split(img_yuv, planes);               // split the image into separate color planes
    ```

yelp — browse system documentation -<

:   The GNOME Help Browser includes detailed documentation for the majority of
    applications, utilities and other components, such as the panel or the
    Nautilus file manager.  Yelp can display some HTML and XML files when
    passed on the command-line, but it's primarily called from applications.
    You can also start Yelp by choosing Desktop->Help. This will show the
    top-level help system page, listing all GNOME docu‐ments conveniently
    organized by topic.

`whatis`{.bash .heart} -<

:   ```bash
    $ whatis intro
    intro (4) - Introduction to special files
    intro (2) - Introduction to system calls
    intro (8) - Introduction to administration and privileged commands
    intro (5) - Introduction to file formats
    intro (3) - Introduction to library functions
    intro (6) - Introduction to games
    intro (7) - Introduction to overview, conventions, and miscellany ...
    intro (1) - Introduction to user commands
    ```

PPA -- Personal Package Archive -<

:   <http://www.makeuseof.com/tag/ubuntu-ppa-technology-explained/>

    The solution to this is the PPA. This is a repository, provided by
    Canonical (the company behind Ubuntu), that allows developers and
    enthusiasts to offer up-to-date versions of software to all Ubuntu users.
    Originally PPAs were limited to programmers and testers, but Canonical
    opened PPAs to everyone in late 2007.

    A PPA, or Personal Package Archive, is a collection of software not
    included in Ubuntu by default.

    ```bash
    sudo add-apt-repository ppa:hotot-team
    sudo apt-get update
    sudo apt-get install hotot
    ```

[c++ - How to get rid of `deprecated conversion from string constant to ‘char*’` warnings in GCC? - Stack Overflow](http://stackoverflow.com/questions/59670/how-to-get-rid-of-deprecated-conversion-from-string-constant-to-char-warnin){.heart} -<

:   warning：deprecated conversion from string constant to 'char *'

    solution

    -   signature: `char *` -> `const char *`
    -   `-Wno-write-strings`

`Colorworks`{.heart} -<

:   `What are POD types in C++?`{.heart} -<

    :   POD stands for **Plain Old Data** - that is, a struct...

        A Plain Old Data Structure in C++ is an aggregate class that contains only
        PODS as members, has no user-defined destructor, no user-defined copy
        assignment operator, and no nonstatic members of pointer-to-member type.

        In computer science and object-oriented programming, a passive data
        structure (PDS, not to be confused with IBM's partitioned data sets; also
        termed a plain old data structure, or plain old data (POD)), is a term for
        a record, to contrast with objects. It is a data structure that is
        represented only as passive collections of field values (instance
        variables), without using object-oriented features.

        refs and see also

        -   [c++ faq - What are POD types in C++? - Stack Overflow](http://stackoverflow.com/questions/146452/what-are-pod-types-in-c)
        -   [Passive data structure - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Plain_Old_Data_Structures)

    Double ended queue -<

    :   deque (usually pronounced like "deck") is an irregular acronym of
        double-ended queue. Double-ended queues are sequence containers with
        dynamic sizes that can be expanded or contracted ended queues are sequence
        containers with dynamic sizes that can be expanded or contracted on both
        ends (either its front or its back).

    apt-file -<

    -   Install `apt-file` and run `apt-file update`（和 `locate file.h` 有什么异同？）
    -   Then use `apt-file search sphinx-build` to search for packages contanining a file named `sphinx-build`

    Time-of-flight camera -<

    :   A time-of-flight camera (ToF camera) is a range imaging camera system that
        resolves distance based on the known speed of light, measuring the
        time-of-flight of a light signal between the camera and the subject for
        each point of the image.

        The time-of-flight camera is a class of scannerless LIDAR, in which the
        entire scene is captured with each laser or light pulse, as opposed to
        point-by-point with a laser beam such as in scanning LIDAR systems.

    `.S`{.heart} file(assembly file) -<

    :   `S` files are code written in assembly, they are extremely low-level form of
        programming. They contain assembly instructions to the processor in
        sequential order and are typically compiled based on the selected
        architecture for compiling the kernel.

    Virtual to Physical Documentation and Sample Configurations -<

    :   <http://www.vmware.com/support/v2p/>

    Understanding the Network Terms SSID, BSSID, and ESSID -<

    :   <http://www.juniper.net/techpubs/en_US/junos-space-apps12.3/network-director/topics/concept/wireless-ssid-bssid-essid.html>

    两个 linux 共享同一个 `/home` 分区 -<

    :   <http://os.chinaunix.net/a2007/1210/1046/000001046724.shtml>

    Polytope -<

    :   A convex polytope may be defined as the Convex Hull of a finite set of
        points (which are always bounded), or as the intersection of a finite set
        of half-spaces.

    Triskaidekaphobia `[trɪskaɪdekə'fəʊbɪə]` -<

    :   fear of bad luck number 13.

        欧美很多大厦都以 12A 层取代第 13 层。房间号码、地址号码，甚至连飞机座位也是以
        12A 取代 13。在法国巴黎，若请客吃饭时共有 13 人, 为了避煞，会请一职业客人来凑足
        14 人。

        Dozen
          ~ 12

        Gross
          ~ 144

    **A harmonic of a wave** is a component frequency of the signal that is an
    integer multiple of the fundamental frequency, i.e. if the fundamental
    frequency is f, the harmonics have frequencies 2f, 3f, 4f, . . . etc. The
    harmonics have the property that they are all periodic at the fundamental
    frequency, therefore the sum of harmonics is also periodic at that frequency.
    Harmonic frequencies are equally spaced by the width of the fundamental
    frequency and can be found by repeatedly adding that frequency. For example, if
    the fundamental frequency (first harmonic) is 25 Hz, the frequencies of the
    next harmonics are: 50 Hz (2nd harmonic), 75 Hz (3rd harmonic), 100 Hz (4th
    harmonic) etc.

    **Oscillation** is the repetitive variation, typically in time, of some measure
    about a central value (often a point of equilibrium) or between two or more
    different states.  Familiar examples include a swinging pendulum and AC power.
    The term vibration is sometimes used more narrowly to mean a mechanical
    oscillation but is sometimes used as a synonym of "oscillation". Oscillations
    occur not only in physical systems but also in biological systems, from human
    society to the brain.

    refusenik, `[rɪ'fjuznɪk]`, n. （俄）被拒绝移民者（等于 refusednik）

    :   Refusenik (Russian: отказник, otkaznik, from "отказ", otkaz "refusal") was
        an unofficial term for individuals, typically but not exclusively Soviet
        Jews, who were denied permission to emigrate abroad by the authorities of
        the former Soviet Union and other countries of the Eastern bloc. The
        term refusenik is derived from the "refusal" handed down to a prospective
        emigrant from the Soviet authorities.  Over time, "refusenik" has entered
        colloquial English for person who refuses to do something, especially by
        way of protest.

    |   charlie: I've seen that term used on alt.foobar often.
    |   lisa: Send it to Erik for the File.
    |   lisa: Oops...`s/Erik/Eric/`.

    gls, SMS language/txtspk for "**Gay Little Smirk**".  Used in SMS language
    (texting language) to express an individual's true reaction to a humorous text
    message.  This abbreviation is a more accurate alternative to writing "lol".
    Clearly, he/she is not laughing out loud in a literal sense, but is instead
    staring at his/her mobile phone while brandishing a gay little smirk. :smirk:

    |   (In a texting conversation)
    |   AJ: Dude, she is seriously smokin' hot. I would be her on-demand asshole licker.
    |       Let me explain to you what that entails. I would lick her asshole on-demand.
    |   Karthik: gls

    pointy-haired

    -   **An esp. stupid person** who may or may not be your boss. Often associated
        with managers and stupid bosses, **the phrase was coined in the daily comic
        strip "Dilbert" by Scott Adams**, in which Dilbert's boss (Pointy-Haired Boss
        happened to be his name) had a pointy, devil-horn-like haircut and was
        especially stupid and **over-promoted**.
    -   Our new mission statement is "We envision to authoritatively foster quality
        intellectual capital while maintaining the highest standards." Whoever made
        that up must have been pointy-haired.

`兴趣从何而来？`{.heart} -<

:   <http://bbs.sciencenet.cn/home.php?mod=space&uid=2068&do=blog&id=452096>

沙文主义（英语：chauvinism） -<

:   原指极端的、不合理的、过分的爱国主义（因此也是一种民族主义）。如今的含义也囊括
    其他领域，主要指盲目热爱自己所处的团体，并经常对其他团体怀有恶意与仇恨，是
    一种有偏见的情绪。经过演变，如今“沙文主义”这个词在英语中更多场合中指种族歧
    视与性别歧视，尤其是后者。极端民族主义; 大国沙文主义; 男性沙文主义; 女性沙
    文主义;在恋爱和婚姻关系中希望得到独立的自由和尊重，却又认为男性应该扛起大部
    分的责任。认为男性对女性的价值评判标准是物化女性，却又对男性采取极高标准。
    简单的说，在一波新的价值观转换和革命当中，一些女性什么好处都想要得到，却不
    肯付出相对应的代价；在扩张自身权利的时候，眼睛永远只看到别人有的，和自己没
    有的。

`airplane rule`{.heart} -<

:   “Complexity increases the possibility of failure; a twin-engine airplane
    has twice as many engine problems as a single-engine airplane.” By analogy,
    in both software and electronics, the rule that **simplicity increases
    robustness**.

    It is correspondingly argued that the right way to build reliable systems
    is to put all your eggs in one basket, after making sure that you've built
    a really good basket.

Extra-Sensory-Perception. -<

:   Often referred to as "The sixth Sense". Often used in conversation when one
    makes a lucky guess as to what someone is about to say.

    |   M.C. Hammer: I want to-
    |   Patrick Surtain: SLEEP!
    |   M.C. Hammer: Hey! I was just going to say that!
    |   Patrick Surtain: I must have ESP!

    ESP 还可以是 Especially Silly People……

我有一个妈妈，她经常做一些奇怪的事。 -<

:   我是一身高 170+，体重 120+ 的女性，于是你就知道我的体态了。

    我初一就被叫过阿姨，也被叫过哥哥，于是你就知道我的面相了。

    去年夏天我妈给我买了一套睡衣，为此在电话里吹嘘了半年，我认为她是给我买了一套镀金袈裟。

    今天我见到了我的镀金袈裟。

    ![](https://img1.doubanio.com/view/note/large/public/p7928519.jpg)

[在下坂本，有何贵干？（佐野菜见创作的日本漫画）_百度百科](http://baike.baidu.com/view/10918346.htm) -<

:   2015 年 3 月份，在日本媒体调查的“希望动画化的漫画作品排行榜”中，
    《在下坂本，有何贵干？》得票率超过总投票的 25%，名列第 1 位。

    《在下坂本，有何贵干？》是一部风格非常另类的校园漫画，讲述思维方式和行为动
    作都异于常人的男子高中生坂本的故事，各种恶搞画面和令人猜不透结局的剧情发展
    令本作成为深受网友喜爱的神作。

    近年来，装逼已经成为了不少动漫作品里必备的元素，但是相信很难有一部作品可以
    如同《在下坂本，有何贵干？》那样将装逼发挥到极致。尽管作品充斥着满满的装逼
    风格，但其实剧情方面非常正能量，因此也吸引了很多动漫迷关注。  （腾讯动漫评）

字体渲染 -<

:   各个操作系统的字体渲染都不一样 ，从效果上说，苹果机一直完虐 Linux 和 Windows ，
    而且是开箱即用。Linux 的字体渲染首选 Infinity，效果那是极好，不截图了。
    Windows上，微软自己有 ClearType，当年我也是玩过的人，说实话，没感觉用了和没
    用有什么区别，除此之外，只能通过第三方的软件来改善字体，其中最好莫过
    MacType，美极，极美，十分美。之前我也是弄过，但最近匆忙，装机后也没折腾，似
    乎没必要。今天弄好了，一下就感觉之前的字体就像砣屎，怎么能是“没必要”呢！

    有图有真相。

    Before:

    ![](http://gnat-tang-shared-image.qiniudn.com/before1.png)

    After:

    ![](http://gnat-tang-shared-image.qiniudn.com/after.png)

    渲染文字：

    ![](http://gnat-tang-shared-image.qiniudn.com/another_example.png)

[有情人，一切尽在眼神中][love-in-your-eye] -<

:   1.  人具有解读眼神的天赋，从婴儿时期就显露出来
    2.  眼神泄露了心灵的焦点
    3.  微笑的眼神，最具吸引力
    4.  眼神不同于其他面部表情和肢体语言，仅仅是一个直视的眼神就可以激活一个脑
        区：大脑腹侧纹状体（ventral striatum），这是一个预测奖励和惩罚的脑区
    5.  眼神是一种天然的语言
    6.  直视的目光更被信赖
    7.  直视的目光显示出更强的竞争力
    8.  喜欢一个人时，男人会变得话多，凝视少；女人会话少，凝视多

[love-in-your-eye]: http://sex.guokr.com/post/1049163/

CRX -<

:   -   [Ad Block：屏蔽广告](http://gnat.qiniudn.com/archive/crx/Ad-Block.crx)
    -   [Block Site：屏蔽网站](http://gnat.qiniudn.com/archive/crx/Block-Site.crx)
    -   [Copy as Markdown：生成页面的 Markdown 链接](http://gnat.qiniudn.com/archive/crx/Copy-as-Markdown.crx)
    -   [Edit with Emacs：调用 Emacs 编辑文字](http://gnat.qiniudn.com/archive/crx/Edit-with-Emacs.crx)
    -   [Extension Downloader：下载插件 CRX 文件](http://gnat.qiniudn.com/archive/crx/Extension-Downloader.crx)
    -   [All Cheat Sheets：Cheet Sheet 大全](http://gnat.qiniudn.com/archive/crx/All-Cheat-Sheets_v1.1.crx)
    -   [Tampermonkey：油猴](http://gnat.qiniudn.com/archive/crx/Tampermonkey_v3.6.3737.80.crx)
    -   [Vimium：给 Chrome 提供 Vim 版快捷键](http://gnat.qiniudn.com/archive/crx/Vimium_v1.44.crx)
    -   [CollaMark：？](http://gnat.qiniudn.com/archive/crx/CollaMark.crx)
    -   [Coursera-Alfred：Coursera 必备](http://gnat.qiniudn.com/archive/crx/Coursera-Alfred.crx)
    -   [DouBean：豆藤](http://gnat.qiniudn.com/archive/crx/DouBean.crx)
    -   [Markdown-Here：用 Markdown 写邮件](http://gnat.qiniudn.com/archive/crx/Markdown-Here.crx)
    -   [Stay-Focused：Stay Focused](http://gnat.qiniudn.com/archive/crx/Stay-Focused.crx)
    -   [Webpage-Screenshot：页面截屏](http://gnat.qiniudn.com/archive/crx/Webpage-Screenshot.crx)
    -   [Youdao-Translate：有道翻译](http://gnat.qiniudn.com/archive/crx/Youdao-Translate.crx)
    -   [YoudaoDict：有道词典](http://gnat.qiniudn.com/archive/crx/YoudaoDict.crx)
    -   [Zh-space-En：在中英文之间加空格](http://gnat.qiniudn.com/archive/crx/Zh-space-En.crx)
    -   [Eye Dropper](http://gnat.qiniudn.com/archive/crx/Eye-Dropper.crx)
    -   [IE Tab](http://gnat.qiniudn.com/archive/crx/IE-Tab.crx)
    -   [Web Developer](http://gnat.qiniudn.com/archive/crx/WebDeveloper.crx)

一个妹子一首歌 -<

:   这个妹子：

    ![Jodie Foster](http://img3.douban.com/view/photo/photo/public/p917876874.jpg){title="Jodie Foster"}

    这首歌：

    [Geek in the Pink!](http://www.xiami.com/play?ids=/song/playlist/id/2079006/object_name/default/object_id/0#loaded)

`OpenSceneGraph`{.heart} -<

:   ```bash
    $ cd ~/dev/OpenSceneGraph-3.4.0
    $ mkdir build && cd build
    $ cmake ..
    $ make -j4
    $ sudo ldconfig
    $ sudo make install
    ```

    ```bash
    $ pkg-config --libs openscenegraph
    -losg -losgDB -losgFX -losgGA -losgParticle -losgSim -losgText -losgUtil
    -losgTerrain -losgManipulator -losgViewer -losgWidget -losgShadow
    -losgAnimation -losgVolume -lOpenThreads

    $ osgviewer cow.osg
    osgviewer: error while loading shared libraries: libosg.so.130: cannot open
               shared object file: No such file or directory

    $ cat >> ~/.zshrc <<EOF
    export OSG_ROOT=/home/tzx/dev/OpenSceneGraph-3.4.0/build
    export OSG_BIN_PATH=${OSG_ROOT}/bin
    export OSG_LIB_PATH=${OSG_ROOT}/lib
    export OSG_INCLUDE_PATH=${OSG_ROOT}/include
    export OSG_FILE_PATH=/home/tzx/data/OpenSceneGraph-Data-3.0.0:/home/tzx/data/OpenSceneGraph-Data-3.0.0/Images

    export PATH=${PATH}:${OSG_BIN_PATH}
    export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${OSG_LIB_PATH}
    EOF

    $ source ~/.zshrc && osgviewer cow.osg
    ```

    for windows:

    ```bash
    OSG_ROOT=C:\OSG
    OSG_BIN_PATH=%OSG_ROOT%\bin
    OSG_LIB_PATH=%OSG_ROOT%\lib
    OSG_INCLUDE_PATH=%OSG_ROOT%\include
    OSG_FILE_PATH=%OSG_ROOT%\data;%OSG_ROOT%\data\Images
    ```

解决 Qt 的 moc 处理 boost 代码的问题 -<

:   >   This is a major change and will never be backported to Qt4.
    >   Until you port your code to Qt5, you can use this work around of
    >   wrapping any problematic include within `#ifndef Q_MOC_RUN`:
    >
    >   ```cpp
    >   #ifndef Q_MOC_RUN
    >   #include <boost/python.hpp> # boost headers go here
    >   #endif
    >   ```

    refs and see also

    -   [OSG+VS2010+win7环境搭建 - 缑城浪子 - 博客园](http://www.cnblogs.com/eaglezhao/archive/2011/07/12/eaglezhao.html)

RAINBOCTOCAT -<

:   单词是我胡诌的。

    ![before coloring](http://upload-images.jianshu.io/upload_images/29284-4fcc0c62100ba6f7.png?imageMogr2/auto-orient/strip|imageView2/2/w/1240)

    ![RAINBOCTOCAT](http://upload-images.jianshu.io/upload_images/29284-a45fc0cc90f15e56.png?imageMogr2/auto-orient/strip|imageView2/2/w/1240)

    ![150x200](http://gnat.qiniudn.com/rainboctocat.png?imageView2/1/w/150/h/200)

    ![180x180](http://gnat.qiniudn.com/rainboctocat.png?imageView2/1/w/180/h/180)

`unzip`{.heart} -<

:   **c**, compress; **x**, extract, **f**, file

    .zip (`zip & unzip`)

    :   ```bash
        zip     -r          archive_name.zip directory_to_compress   # r: recursive
        unzip               archive_name.zip
        ```

    .tar (`{c/x}vf`)

    :   ```bash
        tar     -cvf        archive_name.tar directory_to_compress
        tar     -xvf        archive_name.tar.gz
        tar     -xvf        archive_name.tar -C /tmp/extract_here/   # C: change outdir
        ```

    .tar.gz (`.tar + z`)

    :   ```bash
        tar     -zcvf       archive_name.tar.gz directory_to_compress
        tar     -zxvf       archive_name.tar.gz
        tar     -zxvf       archive_name.tar.gz -C /tmp/extract_here/
        ```

    .tar.bz2 (`.tar + j`)

    :   ```bash
        tar     -jcvf       archive_name.tar.bz2 directory_to_compress
        tar     -jxvf       archive_name.tar.bz2 -C /tmp/extract_here/
        ```

    .tar.xz (`.tar + x`)

    :   ```bash
        tar     xvfJ        filename.tar.xz
        tar     xpvf        /path/to/my_archive.tar.xz -C /path/to/extract
        tar     --xz -xvf   filename.tar.xz
        ```

    refs and see also

    -   [bash - How to extract tar.xz files in Linux? - Stack Overflow](http://stackoverflow.com/questions/12298368/how-to-extract-tar-xz-files-in-linux)
    -   [How to create and extract zip, tar, tar.gz and tar.bz2 files in Linux - Simple Help](http://www.simplehelp.net/2008/12/15/how-to-create-and-extract-zip-tar-targz-and-tarbz2-files-in-linux/)
    -   [oh-my-zsh/extract.plugin.zsh at master · robbyrussell/oh-my-zsh](https://github.com/robbyrussell/oh-my-zsh/blob/master/plugins/extract/extract.plugin.zsh)

[Mysterious New Line](http://stackoverflow.com/questions/71417/why-is-r-a-newline-for-vim) -<

:   ```vimrc
    :%s/%/\r/g
    :%s/\n/%/g
    ```

    vim

    :   ```vim
        :w !sudo tee %

        :earlier 15m
        :later

        :r!date
        :.!date

        :%!xxd
        :%!xxd -r

        U
        viwU
        va{U
        ```

        gv (last visual selection) -> gi (last edit)

        Control-arrow

        ```vim
        `.              ; :h `.
        '.
        g;
        g,
        mx
        `x
        'x
        ```

        ```vim
        >i{
        >iB
        >a{

        ==
        4==
        =%
        =2a{
        gg=G

        ma
        >'a
        ='a

        v
        3>
        ```

        refs and see also

        -   <http://stackoverflow.com/questions/726894/what-are-the-dark-corners-of-vim-your-mom-never-told-you-about>
        -   <http://stackoverflow.com/questions/235839/indent-multiple-lines-quickly-in-vi>

    Of course, on the system I administrate, **vi** is symlinked to **ed**.
    **Emacs** has been replaced by a shell script which

    -   1) Generates a syslog message at level LOG_EMERG;
    -   2) reduces the user's disk quota by 100K; and
    -   3) RUNS ED!!!!!!

GoogleTech Talk by Carsten Dominik (2008): Emacs -<

:   -   [Emacs Chat: Carsten Dominik (author of org-mode)][emacs-chat]
    -   GoogleTech Talk by Carsten Dominik (2008), [优酷][carsten-dominik-org-chat]

    ![][01-intro]
    ![][02-working-with-text-files?]
    ![][03-notes-based-project-planning]
    ![][04-step1-fixing-outline-mode-visually]
    ![][05-step2-fixing-outline-mode-keys]
    ![][06-fixed01]
    ![][07-fixed02]
    ![][08-step3-easy-structure-editing]
    ![][09-org-mode-as-a-note-taking-app]
    ![][10-step4-meta-data]
    ![][11-meta-data-in-a-hierachical-document]
    ![][12-special-interfaces-for-meta-data]
    ![][13-special-interfaces-column-view]
    ![][14-step5-capture-with-remember]
    ![][15-step6-collect-and-display]
    ![][16-exporting-and-publishing]
    ![][17-tircks-tables]
    ![][18-tricks-radio-tables]
    ![][19-internals-context-sensitive-keys]
    ![][20-how-org-mode-is-used-tody]
    ![][21-org-mode-is-not]
    ![][22-evolved-software]
    ![][23-acknowledgement]

[emacs-chat]: http://v.youku.com/v_show/id_XNjgwNDY4MzM2.html
[carsten-dominik-org-chat]: http://v.youku.com/v_show/id_XMTUxMzUyNzE2.html
[01-intro]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/01-intro.png
[02-working-with-text-files?]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/02-working-with-text-files.png
[03-notes-based-project-planning]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/03-notes-based-project-planning.png
[04-step1-fixing-outline-mode-visually]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/04-step1-fixing-outline-mode-visually.png
[05-step2-fixing-outline-mode-keys]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/05-step2-fixing-outline-mode-keys.png
[06-fixed01]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/06-fixed01.png
[07-fixed02]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/07-fixed02.png
[08-step3-easy-structure-editing]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/08-step3-easy-structure-editing.png
[09-org-mode-as-a-note-taking-app]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/09-org-mode-as-a-note-taking-app.png
[10-step4-meta-data]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/10-step4-meta-data.png
[11-meta-data-in-a-hierachical-document]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/11-meta-data-in-a-hierachical-document.png
[12-special-interfaces-for-meta-data]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/12-special-interfaces-for-meta-data.png
[13-special-interfaces-column-view]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/13-special-interfaces-column-view.png
[14-step5-capture-with-remember]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/14-step5-capture-with-remember.el.png
[15-step6-collect-and-display]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/15-step6-collect-and-display.png
[16-exporting-and-publishing]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/16-exporting-and-publishing.png
[17-tircks-tables]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/17-tircks-tables.png
[18-tricks-radio-tables]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/18-tricks-radio-tables.png
[19-internals-context-sensitive-keys]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/19-internals-context-sensitive-keys.png
[20-how-org-mode-is-used-tody]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/20-how-org-mode-is-used-tody.png
[21-org-mode-is-not]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/21-org-mode-is-not.png
[22-evolved-software]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/22-evolved-software.png
[23-acknowledgement]: http://gnat-tang-shared-image.qiniudn.com/emacs/org-mode/23-acknowledgement.png

<http://gnat.qiniudn.com/ag.exe>

[GNU readline](https://en.wikipedia.org/wiki/Readline) -<

:   GNU Readline is a software library that provides line-editing and history
    capabilities for interactive programs with a command-line interface, such
    as Bash. It is currently maintained by Chet Ramey as part of the GNU
    Project.

    It allows users to move the text cursor, search the command history,
    control a kill ring (a more flexible version of a copy/paste clipboard) and
    use tab completion on a text terminal.

    Ctrl+r : (reverse search) recalls the last command including the specified
    character(s). A second Ctrl+r recalls **the next anterior command** that
    corresponds to the search.

    An Emacs-style notation is used to denote keystrokes.  Control keys are denoted
    by C-key, e.g., C-n means Control-N.  Similarly, meta keys are denoted by
    M-key, so M-x means Meta-X.  (On keyboards  without  a  meta key,  M-x means
    ESC x, i.e., press the Escape key then the x key.  This makes ESC the meta
    prefix.  The combination M-C-x means  ESC-Control-x, or  press the Escape key
    then hold the Control key while pressing the x key.)

    manpage: ` man readline`

    -   readline - get a line from a user with editing
    -   快捷键也可以设置成 vi （默认是 Emacs）
        +   Bash: `set -o vi`, `set -o emacs`
        +   Zsh:  `bindkey -v`, `bindkey -e`
    -   Customize: `set variable-name value`
    -   COMMANDS

    ```tzx-bigquote
    beginning-of-line (C-a)                         quoted-insert (C-q, C-v)
    end-of-line (C-e)                               tab-insert (M-TAB)
    forward-char (C-f)                              self-insert (a, b, A, 1, !, ...)
    backward-char (C-b)                             transpose-chars (C-t)
    forward-word (M-f)                              transpose-words (M-t)
    backward-word (M-b)                             upcase-word (M-u)
    clear-screen (C-l)                              downcase-word (M-l)
    redraw-current-line                             capitalize-word (M-c)
    accept-line (Newline, Return)                   overwrite-mode
    previous-history (C-p)                          kill-line (C-k)
    next-history (C-n)                              backward-kill-line (C-x Rubout)
    beginning-of-history (M-<)                      unix-line-discard (C-u)
    end-of-history (M->)                            kill-whole-line
    reverse-search-history (C-r)                    kill-word (M-d)
    forward-search-history (C-s)                    backward-kill-word (M-Rubout)
    non-incremental-reverse-search-history (M-p)    unix-word-rubout (C-w)
    non-incremental-forward-search-history (M-n)    unix-filename-rubout
    history-search-forward                          delete-horizontal-space (M-\)
    history-search-backward                         kill-region
    yank-nth-arg (M-C-y)                            copy-region-as-kill
    yank-last-arg (M-., M-_)                        copy-backward-word
    delete-char (C-d)                               copy-forward-word
    backward-delete-char (Rubout)                   yank (C-y)
    forward-backward-delete-char                    yank-pop (M-y)
    ```

    笑点: Bugs 里写到： `"It's too big and too slow."`

    ```cpp
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <readline/readline.h>
    #include <readline/history.h>

    int main()
    {
        char* input, shell_prompt;

        // Configure readline to auto-complete paths when the tab key is hit.
        rl_bind_key('\t', rl_complete);

        for(;;) {
            // Create prompt string from user name and current working directory.
            snprintf(shell_prompt, sizeof(shell_prompt), "%s:%s $ ", getenv("USER"), getcwd(NULL, 1024));

            // Display prompt and read input (n.b. input must be freed after use)...
            input = readline(shell_prompt);

            // Check for EOF.
            if (!input)
                break;

            // Add input to history.
            add_history(input);

            // Do stuff...

            // Free input.
            free(input);
        }
    }
    ```

Young Sailor II -<

:   [![*The Young Sailor II*](http://images.metmuseum.org/CRDImages/ma/web-large/DP261547.jpg)](http://www.metmuseum.org/collection/the-collection-online/search/489994)

    **The Young Sailor II**[^ys] is a painting by [Henri Matisse](https://en.wikipedia.org/wiki/Henri_Matisse) from 1906.

    -----------------------         --------------------------------------------------
    **Artist:**                     Henri Matisse (French, Le Cateau-Cambrésis 1869–1954 Nice)
    **Date:**                       1906
    **Medium:**                     Oil on canvas
    **Dimensions:**                 39 7/8 x 32 5/8 in. (101.3 x 82.9 cm)
    **Classification:**             Paintings
    **Credit Line:**                Jacques and Natasha Gelman Collection, 1998
    **Accession Number:**           1999.363.41
    **Rights and Reproduction:**    ©2015 Succession H. Matisse / Artists Rights Society (ARS), New York
    -----------------------         --------------------------------------------------

[^ys]: [Henri Matisse | Young Sailor II | The Metropolitan Museum of Art](http://www.metmuseum.org/collection/the-collection-online/search/489994)

一些 Linux 相关知识 -<

:   获取源码的方式: e.g. `apt-get source coreutils` -<

    -   [Unix shell][unix-shell]
    -   [Linux Newbie Guide: Shortcuts And Commands][linux-newbie]

    (这里不区别 Linux，GNU/Linux，和 Unix。简单粗暴地称为 Linux。)

    Linux Shell 用来和系统交互。基于命令行 ([CLI][cli]), 是我们使用 Linux Utilities
    的平台。

    **你最好知道的知识有: **

    -   [File System][filesystem]: 也就是格式化磁盘的格式, 如:
        -   Windows 的 NTFS
        -   U 盘的 Fat16
        -   类 Unix 系统的 ext4
    -   [File Descriptor][fd]: 文件描述符, `stdin`, `stdout`, `stderr` 等。
    -   [Pipeline][pipe]: 管道，流化地处理输入输出。`echo How Are You | xclip -selection c`
    -   [Readline][readline]: Shell 用到的交互方式。常用的快捷命令有:
        -   `c-r` 搜索历史命令
        -   `c-w` 删除一个单词
        -   按 Tab 键自动补全
    -   [Man Page][man]: man (manual) 帮助文档。居家生活必备。类似的有 [info][info]
    -   目录: `..` 或者 `../` 上级目录; `.` 或者 `./`当前目录;

    一些常用简单命令：

    ```bash
    ls, dir, vdir
    echo "hello world"
    cd ..
    pwd
    date | xclip -selection c
    ```

    ```bash
    pip install --upgrade pip
    pip install -U numpy scipy scikit-learn
    ```

    我说 `man -k printf` 和 `apropos printf` 怎么都是一样的结果。试了好几个关键词，
    然后 `man man` 才发现 **`man -k keyword`** 和 **`apropos -r keyword`** 是一样的。

[cli]: https://en.wikipedia.org/wiki/Command-line_interface
[filesystem]: https://en.wikipedia.org/wiki/Filesystem
[fd]: https://en.wikipedia.org/wiki/File_descriptor
[pipe]: https://en.wikipedia.org/wiki/Pipeline_(Unix)
[readline]: https://en.wikipedia.org/wiki/GNU_Readline
[man]: https://en.wikipedia.org/wiki/Man_page
[info]: https://en.wikipedia.org/wiki/Info_(Unix)
[unix-shell]: https://en.wikipedia.org/wiki/Unix_shell
[linux-newbie]: http://www.unixguide.net/linux/linuxshortcuts.shtml

恐同症 (homophobia) -<

:   恐同症又称“[同性恋恐惧症](http://baike.baidu.com/view/573602.htm)”（英文
    homophobia 和 homophobic）是指对同性恋行为以及同性恋者的非理智性的恐惧和憎恨。对
    同性恋的恐惧在很多国家有法律上的定义，例如在有争议的同性恋恐慌防卫（gay panic
    defense）、精神错乱防卫（insanity defense）或在仇视罪行立法中。

    **Homophobia** encompasses a range of
    negative [attitudes](https://en.wikipedia.org/wiki/Attitude_(psychology)) and
    feelings toward [homosexuality](https://en.wikipedia.org/wiki/Homosexuality) or
    people who are identified or perceived as
    being lesbian, gay, bisexual or transgender...

    Some people believe that sexual orientation is innate and fixed; however,
    sexual orientation develops across a person’s lifetime.

    毫无疑问，拒绝以上任何一点都要求相当的政治勇气，也必然会承担相应的政治风险。它
    意味着必须抛弃先天论所赐予的坚固堡垒，而被迫在话语层面与不同政治力量进行激烈的
    斗争；意味着必须以新的方式来建构同性恋作为政治群体的本真利益，并以此换取行动的
    可能；意味着必须想象一种新的未来，而在这个未来中未必有同性恋者这一称号。

    refs and see also

    -   [恐同症_百度百科](http://baike.baidu.com/link?url=fpF_kg0XkogQ3GVBL9vzH7cUvgmCHjp-TiV14gGwLsJz1gjqvCbDZnyVDK9vrB2gXao2mGqZDVLaIMFG1P5ZMa)
    -   [Homophobia - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Homophobia)
    -   [没有人天生是同性恋](http://www.douban.com/note/442922272/)

乙状结肠（**sigmoid colon**），这个中文翻译……醉了……但是确实挺准确……

[为什么内地女星演 OL，都逃不过尴尬症？](http://mp.weixin.qq.com/s?__biz=MzA5Mzc3NTUwNw==&mid=2653747608&idx=1&sn=23c3815eb395de160a234bf1812098b1&scene=0#wechat_redirect) -<

:   OL: Office Lady

    陈凯歌居然说这角色是“悲剧英雄”云云，导演对职业和社会的理解幼稚至此，如何能
    期待女演员们演好普通而合逻辑的上班族？

    此外就是编剧本身的人物塑造问题，带着一种上世纪**外企崇拜症里的浮夸描述** 。

    为了体现“高素质”安排了一段和情节完全无关也没什么炫技的英文台词。

    但是她和男律师过招时仍旧翻着郭芙蓉的标志性表情，看材料时若想展示胸有成竹，
    则必须要撇一下高傲的嘴角，未免流于形式。

    说话就像机关枪，擅长吵架，只撂狠话而无逻辑，听得人脑袋生疼。

    还有个常见的故事毛病是，着力展示所谓“都市气息”“高大上”，而讲起商业来逻辑脆
    弱，剧情彻底“悬浮”，是成年人的《小时代》。

    更重要的是，从故事到人物，都应该有一种对“专业主义”的尊重。

    编剧写职业就好好想想职业本身会有什么冲突，而非家长里短狗血恋爱，或者铺陈专
    业词汇而不理解其真意；

    演员则要抛开虚张声势，演出“专业”姿态。

    在这件事上，最怀念巅峰时期的陈慧珊

    大多数女人都是全职主妇的日本，魅力 OL 形象还是比中国的多。

    天海佑希这样的女王，律师警察医生都演得，把女式西服穿得气象万千，而我相信她
    看上去就是有智商的样子。

[倪湛舸的广播](https://www.douban.com/people/10686358/status/1834580640/){.heart} -<

:   其实文科教育，尤其在本科阶段，培养的是做人做事的规范。书该怎么读，问题该怎
    么讨论，文章该怎么写，其实都是有规矩的，规矩管的就是如何做自己、如何待他人
    、如何在集体劳动中做个人贡献，天朝的许多乱象，根源和对策似乎都在于缺乏最基
    础的人文教育，抄袭这种事定期就要闹一闹，还真不是孤立现象。

[阿男的广播](https://www.douban.com/people/weinanli/status/1834205107/) -<

:   这些年越发明白一个道理：做一件事，努力并不是最重要，最重要是往正确的方向做
    积累。这些年看到了太多人和事，很努力地往错误的方向上狂奔而去。＃还不如原地休息＃

    **坚持对我来讲是最简单的事**，找到方向这件事才是**一直不断在追寻**的。

[普林斯顿助理教授的 Loser 简历, 和爱因斯坦没有得到的博士学位](http://mp.weixin.qq.com/s?src=3&timestamp=1461979824&ver=1&signature=4v3T2FME4bKLP-ihJvc1BT3-DaC9SIIoHtaEtOUFXFgqHocMgg-8-AtUFMOSxN0LxpmWwBM576dN3ZIKDISn0WAPDd1leEvfNHg1h8EHfYpNxJEXJkhRrWXaUI1qDsfDd8JVSna3CC0sYcXcsdz5hUjRK2UCW*ZHFI1RfHduNSQ=)

`%HOST%`{.heart} -<

:   `C:\Windows\System32\drivers\etc\host`

[ssh ubuntu@119.29.191.128](http://119.29.191.128:8000/)

[深度学习caffe的代码怎么读？ - 机器学习 - 知乎](http://www.zhihu.com/question/27982282)

[Fisher–Yates shuffle - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle)

[Zhu Jingsi 答过的问题 - 知乎](http://www.zhihu.com/people/zhu-jingsi/answers?order_by=vote_num)

[使用 BitTorrent Sync 同步分享文件_百度经验](http://jingyan.baidu.com/article/a17d52853cc29f8098c8f29b.html)

[Comparison of reference management software - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Comparison_of_reference_management_software)

[写学术论文时需要引用大量论文，但最后需要花费大量时间匹配引用，有什么好方法或经验？ - 论文写作 - 知乎](http://www.zhihu.com/question/20533954)

[Zotero 文献管理小组](https://www.douban.com/group/zotero/)

[javascript - Convert jquery element to html element - Stack Overflow](http://stackoverflow.com/questions/7114780/convert-jquery-element-to-html-element) -<

:   Try `myJQueryElement.get(0)` or `myJQueryElement`. (get() is most useful
    when you need negative indices, for example, as described in the documentation
    for `get()`.)

    `$("#foo")` will get you an HTML element. Using brackets is a tiny bit
    faster than using `.get()` but not something you'll likely notice unless
    you are doing it millions of times.

    And not even then! If you run it 10 million times, brackets will take 150
    seconds, get will take 170 seconds. I bet you cannot notice without sitting
    there counting "1-Mississippi, 2-Mississippi..." Mississippilessly, it's
    impossible to tell the difference. Do whichever way you feel is more
    readable.  (BTW, I'm only posting this comment because it gives me the
    change to use the word "Mississippilessly" in a sentence. If anyone wants
    to discuss the future of the Anglican Church with me, I'm dying to use
    "antidisestablishmentarianistically".

`如何花最少的钱购买正版 Windows 和 Office？`{.heart} -<

:   - Step 1. 通过面试成为微软员工
    - Step 2. 上班
    - Step 3. 直接获得 MSDN 账号

    不但有免费 Win+Office，还有工资拿

[[新闻] Chez Scheme 开源了 - 编程语言与高级语言虚拟机杂谈（仮） - 知乎专栏](https://zhuanlan.zhihu.com/p/20808925) -<

:   我大三开始学 Scheme 和啃 SICP 是从 Petite Chez Scheme 7.4 开始的。能一睹完
    整版 Chez Scheme 的芳容真是太爽了

    现在的小朋友要学习这方面，从入门级到高度优化的产品级项目都有众多开源项目可
    参考，多方便啊。我都恨不得想迟个十来年出生了，正好能在学校里赶上这浪潮 >_<

    refs and see also

    -   [cisco/ChezScheme: Chez Scheme](https://github.com/cisco/ChezScheme)

[学习编程语言与编译优化的一个书单 - 编程语言与高级语言虚拟机杂谈（仮） - 知乎专栏](https://zhuanlan.zhihu.com/p/20130808?refer=hllvm)

别 TM**拿圣人的标准要求被人，用贱人的标准要求自己**。 -<

:   老师们对他们的态度，是重在管制，只希望他们不要惹是生非，而绝对不会去鼓励他
    们好好学习，没用。

    这些学业上已经毫无希望的学生。

    他们闲着，他们无聊，他们缺乏教育，他们毫无顾忌，他们叛逆，他们崇尚暴力。

    这种精神状态，不去惹是生非才怪。

    现在理解家长为什么拼命让孩子上好学校，不仅是为了成绩，还**为了远离人渣**。

[春节回家你打算怎么和亲友介绍、解释自己的专业都是干什么的？ - 夏洋的回答 - 知乎](https://www.zhihu.com/question/39917930/answer/86817635) -<

:   不大熟的朋友亲戚聚会什么的，我一般都说我在一个广告公司里做一些基础的杂活，
    管管仓库啊调度啊之类的，体力活。**然后就没人问了，各种清静。**

    我真没骗人啊，我在 Google 做 Ads Infrastructure 的，Data Warehouse 相关，给超大
    规模分布式数据库写 Query Dispatcher 的......

    **另外占用资源什么的，难道还能比 chrome 更占资源？**

    （我这么黑公司真的大丈夫吗？）

    **多微笑，别反口，事情很快过去的。**

    亲戚们未必真关心你干什么，只是想找个话题聊天而已。他们也未必真在意回答，所
    以微笑，找话题，就过去了。

    所以，回答时，如果可以不当面呛回去，就不必太用力呛。大多数亲戚并无恶意，只
    是交流能力不佳、见识也有局限性而已。

    ```cpp
    using VOS = aa::bbb::VeryLongType<WithOrzTemplate>::Subtype;  // short hand
    ```

    所以国人呐，开车要好车，衣服要名牌，至于内裤破了几个洞，『无所谓啦！』

    我是支持现场手写（在纸上写）代码的，至少对于初级职位。

    我的想法是：一般来说，面试题本身并不会特别复杂，那么如果你能从上到下地在纸
    上写出代码（或者伪代码），说明你：

    -   能在脑子里很快构建出清晰的结构。能够很快地走过从“全局的框架”到“各处的细节”
        这样一个自顶而下的过程，这不仅是语言熟练度的问题，更多能体现出一种“**解决
        问题的思考方式**”；
    -   你的脑容量足够大。毕竟在一个面试题级别的题目里，很多细节是“牵一发而动全身”
        的（比如写一个递归，那么状态设计在一开始就要想好）。那么如果你能从上到下
        一遍写好，保持比较干净清爽的卷面，往往你在写第一个字的时候其实已经在脑子
        里把最后一个字都已经“写”了一遍，说明你的大脑能够装下一定复杂度的问题。反
        过来，如果习惯了“想到哪写到哪”的风格，依赖于“出错误了再去调试下”，这样的
        工作模式可能会带来比较高的 bug 率。

    在 Google 快两年，我也有过很忙的时候（极其偶尔）。有一阵子忙的时候，休息时一
    群同事（含上司，tech lead 等）聊天，他们就提到了这样一个结论：**一直在“执行”的
    话，“思考”就少了，容易干出笨事**，这对于大型软件系统来说往往是很糟糕的：设计
    烂了导致开发和维护的成本显著性上升；疲劳驾驶时 bug 也会明显增多。从大局上看真
    能降低成本么？未必。

    像我这种二次元废柴，**基于兴趣划分圈子**，绝大多数情况下并不考虑对方是哪国
    人的问题。感兴趣的各种事情大多都有一个相应的圈子，每个圈子内又细分成许多小
    圈子（比如唱歌分华语流行/日语二次元，敲码分前端/后端等等），圈子之间偶有交
    叉但保持在低水平，这算抱团还是不抱团？

    老美同事讲笑话我听不懂没关系，直接问对方相关的背景知识，能抓到笑点的话一样
    哈哈哈（重点是因为这确实好笑，而不是什么融入不融入的问题）；老中同事一起吃
    饭，他们聊养娃买房的时候我照样端着盘子抱着手机一边刷知乎去。

    **事实上，绝大多数时候不跟人玩......所以觉得在国内/国外并没有特别大的区别。**

    我在很早起就形成了稳定的风格和路数，到现在没怎么变，所以看老代码和新代码差
    不多。甚至早期会更多地用语言技巧，**现在写的更朴实。**

    一次开会的时候，在阿凡达的渲染器 PantaRay 里看到了一段代码，越看越熟悉，这特
    么不是我 N 年前写给 Halo 的吗。

    后来搞清楚了授权链，发现确实是我的。怪不得看阿凡达的时候发现连 artifact 都那
    么熟悉。

    所以，**不是年纪大了都转行，而是水平差的都淘汰了。**

    [神仙姐姐美嘉的广播](https://www.douban.com/people/vip_fiona/status/1833166448/) -<

    :   公司发展到一定阶段，能力强的员工容易离职，因为他们对公司内愚蠢的行为的容忍
        度不高，他们也容易找到好工作；能力差的员工倾向于留着不走，他们也不太好找工
        作，年头久了，他们就变中高层。这种现象叫做死海效应：好员工像死海的水一样蒸
        发掉，然后死海盐度就变得很高，**正常生物不容易存活**。

    ```cpp
    // This function has been here since 1987. DON'T FXXKING TOUCH IT
    ```

    国外一开源，国内就有自主研发

    余国荔（Corrinne Yu）是谁？
      ~ 微软唯一一个图形比我强的女性。

    原 Halo 引擎架构师。Bungie 从微软分出去之后她留在微软的 343 工作室，继续做 Halo 系
    列，期间发明了动态 radiosity 算法，并删掉了我在 Halo3 里用的优化 lightmap 的系统。

    后来因为受不了 xbox one sdk beta 的脑残行为，离开微软去了 sony 搞 ps4。

    最后，今年她又跳槽去了 Amazon，也受不了 ps4 了？

    Python 很简单的，很容易学。我看这本书，就花了一节课的功夫，40 分钟，就学完了。

    ![](https://img1.doubanio.com/mpic/s10347319.jpg)

    但问题在于，因为不常用，每次用之前，都得再花 40 分钟。。。

    老鸟和新手的一个很大区别来自于 debug 的能力。其中最主要又可以从两方面看出来：

    1.  从高层往底层找错。
    2.  科学方法。

    refs and see also

    -   [夏洋 答过的问题 - 知乎](https://www.zhihu.com/people/xia-yang-7/answers?order_by=vote_num)
    -   [为什么「道理都懂，然执行力差」的现象如此普遍？ - 曾旻的回答 - 知乎](https://www.zhihu.com/question/30161095/answer/47601545)

[Contrast Preserving Decolorization](http://www.cse.cuhk.edu.hk/leojia/projects/color2gray/index.html)

[Decolorization — OpenCV 3.0.0-dev documentation](http://docs.opencv.org/3.0-beta/modules/photo/doc/decolor.html)

[单身路上偷的懒，迟早用孤独去偿还](https://www.douban.com/note/550264000/) -<

:   可是孩子谁带？保姆的工资比你挣得高。做什么？几年没和社会接触过，你连 ppt 都要
    从头培训。比起老公嘲笑你，你**更怕的是，其实心里知道他们说的是对的**。

    对女人而言，工作不是一定要找一间办公室，一个老板，几个同事，自己混到五点下
    班就好了。真正的工作是永远在学习，无论在怎样的境地下，都要抽空去学习，愈是
    有疼爱自己的老公，体贴的家人，愈是有对自己“再无要求”的环境，愈是要学习。唯
    有这样，才会永远有突围孤独的出口。

    比起腰上的肥肉渐长，一个已婚女人最大的黯然，是开口就是芝麻绿豆，灵气尽失。

    一个人如何对待工作，其实也是如何对待自己。多少未婚年轻女孩子，抱怨工作比潜
    心工作的精力花得多，为了换得舒服生活，傻乎乎去傍上金龟婿。新婚之际，谁都洋
    洋得意，可是你根本不知道，一个女人在单身路上如果偷了懒，迟早要在生完孩子以
    后用孤独去偿还。因为你单身时候的战斗力越弱，你就越难成为一个敢于突围的已婚
    女人。而且后来，你就会死死陷入一种“是婚姻困住了我”的假象。

    这个时候你才发现，一个女人，总有一天，多么怀念有一份工作的时光，多么怀念永
    远不会被困住的日子，多么怀念真心去为了自己的成长而过好每一天的青春岁月。虽
    然累，可是，累得好爽。

    在三十岁以后，工作带来的美好体验远超爱情。

[dragondjf/QMarkdowner: Editor for Markdown based on PyQt4 with Metro](https://github.com/dragondjf/QMarkdowner)

[district10/CuteMarkEd: Qt Markdown Editor](https://github.com/district10/CuteMarkEd)

[求图形学基本算法好书推荐? - 知乎](https://www.zhihu.com/question/27525631){.heart} -<

:   [Scratchapixel](http://www.scratchapixel.com/)

    我看到这个网站后，感动得要哭！这一个网站就够了！！好好珍惜吧！

    想学 opengl, 就用这个网站 [OpenGL Step by Step - OpenGL Development](http://ogldev.atspace.co.uk/)。
    非常赞！老外好无私！

    想学 DX，就看‘Practical Rendering and Computation with Direct3D 11’。 这本书
    把 pipeline 讲得非常清晰。这是我见过最好的一本 DX 的书。 （小八卦，real-time
    rendering 的作者曾把这书当礼物送给我同事）

    如果你能读《RTR3》，就先把它读完一遍再说吧，届时希望能发一份简历给我。相关
    问题：系统的学习计算机图形学，有哪些不同阶段的书籍的推荐？ - Milo Yip 的回
    答

    refs and see also

    -   [系统的学习计算机图形学，有哪些不同阶段的书籍的推荐？ - Milo Yip 的回答 - 知乎](https://www.zhihu.com/question/26720808/answer/33885578)

[wpf - How does Cocoa compare to Microsoft, Qt? - Stack Overflow](http://stackoverflow.com/questions/2442340/how-does-cocoa-compare-to-microsoft-qt)

[白板编程浅谈——Why, What, How - Lucida](http://lucida.me/blog/whiteboard-coding-demystified/){.heart}

[灵魂机器 答过的问题 - 知乎](https://www.zhihu.com/people/soulmachine/answers?order_by=vote_num){.heart} -<

:   所以，你自己在提这个问题之前，其实已经知道了答案，就不妨明说吧，你在二本学
    校，进 google 的可能性有，但是概率非常非常非常低，比其他学校的学生概率要低得
    多。如果你在大学四年，不玩命学习，每天学习时间不超过 11 小时（类似于武侠小说
    的主角，基本都有一段奇遇，经历过后功力大涨），**你就洗洗睡吧。**

    首先最基本的两点建议，

    1.  无论白天黑夜，不要带手机在身边，每天只在睡觉前把手机打开 15 分钟，处理未接
        电话和未读短信，**最好是把手机砸了**（作为学生社交关系非常简单，完全没
        必要拥有手机）
    2.  打开电脑除了 Google, Stackoverflow 等编程网站，不要上其他社交网站，例如 QQ，
        微博等等，禁止开机进入 Windows, 装个 Ubuntu.

    2015/02/18日更新：

    不少人觉得这方法很偏激，我才说了两点建议。。。我不妨说的更具体一点，说说我
    当年是如何操作的吧

    1.  戒手机。每天只在 23:30 睡觉前开机手法短信，回几个电话，当然，随着与世隔绝
        的日子一天一天下去，我的未接短信和未接电话越来越少，几个月后只有几个亲人
        偶尔有联系。
    2.  戒网。比前面的建议更激进，基本一个月只上一次网，每次上网也是查查信息。
    3.  戒电脑。我认为大部分人打开电脑后，注意力会涣散，一会儿就偏离开机前心里想
        要做的事，四处看网页去了，于是我一狠心让自己每天只用一个小时电脑。
    4.  由于戒了电脑，我只能在纸上写代码。我一般会花几个小时，写上十几页的代码，
        然后用一个小时，把代码敲进去，编译运行。这锻炼了我一次性写出 bug free 代码
        的能力，后来一部分代码还行形成了一本开源书, soulmachine/acm-cheat-sheet · GitHub
    5.  由于戒了电脑，没有 evernote 做笔记了, 我便用纸和笔记笔记，用掉了五六个笔记
        本，每当写满了一百多页后，便集中开电脑几个小时，把笔记敲进电脑。这些笔记
        后来也形成了一些电子书, / - soulmachine - a brank new AI architecture ,
        曾经受到很多考研朋友的喜爱。
    8.  每天学习 11 个小时。很多人觉得 11 个小时没什么，不错，一天两天如此没什么，可
        是天天如此，就需要对时间安排极度精准了，我的日程是这样的，每天 7:00 起床,
        10 分钟吃早餐，10 分钟步行到自习室, 7:30 准时开始看书，11:30 去食堂吃饭，
        17:30 吃晚饭, 23:00 下自习，回到租住的房间洗漱睡觉。

    有几个 tips 要注意，

    -   早餐一定要简单，如果你去食堂吃或者路边买早餐，10 分钟搞定不可能，所以我都
        是每周末去一次超市，买一袋子面包片，每天早晨两片面包，其他复杂的食物，例
        如果汁，水煮鸡蛋等都很费时间
    -   午睡在桌子上趴着睡就好，回到房间睡床上，一睡就不想起来。

    总结，以上所有方法都是围绕一个核心，**与世隔绝，极致专注。**

    再打个比方，不少人说用 Kindle 看书比 iPad Mini 效率高，我估计可能因为
    Kindle 干别的都不行，只好专心看书。我使用过两者均长达一年多，亲身体验，确实
    是这个原因。那这个例子跟本答案有类似之处。如果你想学习，就把自己放到一个除
    了学习什么都干不了的环境中。

    对一个人说的话找错误是非常容易的，如果我把我所说的话，全部在逻辑上修复严密，
    比如“戒网”改成“在一定程度上戒网”，如此这般把所有文字修改一遍，那这些话就变
    成了**政治正确的完美废话**，重要观点就淹没在琐碎冗长的文字之中了。因此，我
    会直接忽视那些抬杠的，挑小毛病的评论。

    作为面试官，我曾经听说过几个面试者对我给他们的面试经历评价为“明明小公司一个，
    面什么算法”。后来我曾经找出了其中一些人的简历，回忆了一下面试过程，基本上他
    们都满足以下四条中的两条以上：

    -   简历上 4-5 个项目经历，结果一问，别说不是项目主持了，根本就是参与度极低，
        一问三不知。（我曾遇到过同一个大概不超过 1 万行的项目在 3 个人简历上同时出
        现的，而且他们都不是项目主持）
    -   简历上声称熟练掌握的内容，掌握程度仅限于最基本的使用，缺乏任何的设计分
        析能力。
    -   对所面试的岗位毫无概念，不明白自己是否符合岗位描述上的必要条件
    -   对面试提问思路不清晰，或思路表达不清晰。面对问题时，不是仅仅得不到完美
        的最终答案，而是思路一片空白。
    -   **坚决认为 C++ 是王道，“我还是想做 C++”，拒绝多语言工作和学习。但实际上 C++
        掌握的并不好。**

    鄙公司（小公司招人不容易啊！）面试程序时，除非简历上写明了 ACM 获奖经历，否
    则我给他们安排的所谓“算法题”基本上不会超过二分查找的难度，而且其实并没有太
    多思路上的扩展，仅仅是算法实现而已。而且这仅限于我实在找不出任何的其它亮点，
    完全无法满足一个 C++ 岗位的要求，还坚持想从事 C++ 岗位的时候才会进行这样的
    提问。因为我们其实是相信员工在岗位上的成长的，面试时不允许查找资料，时间也
    有限，能解决的问题难度不如工作时所能解决的问题难度也是很正常的。但至少你要
    有点思路吧？二分查找不会写个枚举也好吧？白卷是闹哪样？

    结果他们认为是因为算法题表现不好而被我拒绝了。

    除了鄙公司，以我在大公司的被面试以及面试经验，虽然连基本的算法题都答不出实
    在是一件值得鄙视和怀疑的事情，但我依然觉得如果你各方面能力均表现优秀，十分
    符合岗位所需的要求，其实是不太会因为一个复杂的算法题没有答上来而直接被挂掉
    的。**当然，如果你在面试算法题时毫无思路，或缺乏基本的算法复杂度分析等能力，
    被扣分也几乎是一定的。**你被各方面都不比你差，算法问题表现比你更强的面试者
    干掉，也是很有可能的。

    说了那么多，总结起来只有一句：“因为公司面算法而义愤填膺的，肯定是面试挂掉了
    而不知道自己究竟为什么挂掉了的。”

    我觉得未来的面试都改成综艺节目那种形式，四个人一组，现场用答题板答题，这样
    被刷掉的就不会有那么多怨言了……

    PS: 爱抱怨的还是少数。我遇到的面试者中，还是有不少虽然我没有录取（不符合岗
    位需求），但性格和沟通上还是很喜欢的孩子的。

    算法题是用来衡量你思考和解决问题的能力的。如果是大公司的研发岗位，面一些很
    难的算法题我也不觉得为过，当然，不代表一定要答出最完美的答案，**更重要的是
    你的思考、沟通、验证、以及执行过程**。我当初在面试百度的时候，面的是一个算
    是很高端的字符串匹配题，最完美的答案（改进版 AC 自动机）我当时是既不知道又
    是即使知道了也写不出来，然而我给出了我能力范围内最漂亮的答案（后缀数组），
    复杂度虽然多了一个 lgN，但面试官也看到了我的分析能力以及思考过程的清晰、方
    案的完整度以及快速可实施性，后来一样还是过了。至于“ACM 级别”，我想你太小瞧
    ACM 了，真的，就这道题目，在 ACM 圈子里是最 low 的模板题而已，稍微集训过几
    个月的人都会，完全不值得讨论……

    至于“没本事不要设立高门槛”，我倒是觉得，不管有没有本事，有钱就有资格设置高
    门槛。至于门槛是设在这种看似不直接产生作用的算法能力上，还是设在什么管理、
    项目经验上，还是设在外貌性别上，这是企业站在自己的角度根据自己的需求选择的，
    你觉得不合适，大可选择别的企业，而不是到处抱怨。大企业，以及大企业出身的管
    理人员，尤其是面试应届毕业生的时候，都有可能会更倾向于成长型的员工。这种情
    况下，不面算法面什么？面你行业背景吗？面你项目经历吗？

    **可笑死了，没本事就嘲笑别人没本事。**

    还有一些情况是这样子的，例如我问超大整数乘法然后对方说用 Python 直接用乘号，
    又或者说我问快速排序对方说用 Haskell 一行写完。这就如同一个面试者打开公文包
    掏出一个轮子说「我这正好有一个，不知道是否合适？」呃……你的百宝袋里面还有什
    么？

    最后从面试官的角度来说，面试 ACM/ICPC 竞赛选手往往都很无聊。他们能够给出一
    个完美的轮子，但我不觉得我能从他们身上学到新东西。（面试过足够多的人后，要
    见到一个比已知完美轮子更完美的轮子其实非常难。）更有趣的面试者会说，「你知
    道吗，其实中国古代独轮手推车的轮子设计得比古罗马战车的轮子要合理」。其实我
    不知道你在说什么，但如果你能够把整套理论说得自圆其说的话我觉得你至少有点思
    维能力，同时你还真的对轮子感兴趣。事后我可能会去搜索一下看看你说的理论是否
    正确，但至少我会学到点新东西。

当然啦。。**看 C++ 要看 leveldb, 看 C 要看 redis** -<

:   我告诉你一个识别 C++ 代码质量的诀窍：找几个 class，如果其 dtor 有 delete 或释放
    资源的操作，看看作者是否同时正确禁用了 copy ctor 和 assignment operator（或者正
    确实现了它们，如果 class 确实应该是 copyable 的话），这反映了作者设计 C++ class
    的基本功：正确管理内存和其他资源，以及他有没有认真读过 Effective C++。

    其实，一个人要成牛人，最重要的不是看过多少书，而是有没有一个自己的世界观，并且
    从这个世界观出发，**知道什么要做，什么能做，什么要坚持，什么要追求，什么是命中注
    定，什么是此生无缘，然后才能选 A 不选 B，有决断心和行动力**。为此，得要体会过了别人
    选择的艰难，明白所要追求事业的难度，然后自己的选择才有意义。这些可以通过读书，
    也可以通过别的方式。

    在这个行业当实习生，待遇恰恰是最不重要的，你的起点高度跟你几年后能达到的水准没
    有任何必然关系。而且，你到岗后的努力也比你一开始的选择更加重要。

[yedf/handy: 简洁易用的 C++11 网络库 / 支持单机千万并发连接 / a simple C++11 network server framework](https://github.com/yedf/handy) -<

:   非常简洁的一个网络库，10 行代码能够编写一个完整的 echo 服务器，采用最新的 c++11
    语法，总共才 2 千行左右的代码

    学习中的建议：

    -   libevent、asio 等成熟的广泛应用的库，其中有大量的代码是为了跨平台，适合
        熟练的开发者阅读，不适合初学者。
    -   redis，memcache 等开源项目，适合进阶的开发者开发一个实际的应用，而
        handy有更多的例子，可以帮助开发者一步一步掌握网络编程的技巧。

[现在的大学生没有经过任何的论文写作训练，应该如何写论文？ - 知乎](https://www.zhihu.com/question/22011864)

[计算机领域有哪些短小精悍的轮子？(仅用于教学)？ - 知乎](https://www.zhihu.com/question/38737972)

[【云+校园计划】 1元=免费域名+专享服务器-腾讯云官方论坛](http://bbs.qcloud.com/thread-9953-1-1.html)

面总部肯定全英语，除非是遇到中国人

[酒店挂什么书法不俗气？ - 王路的粽子铺 - 知乎专栏](http://zhuanlan.zhihu.com/p/20798133) -<

:   酒店的厕所，也喜欢附庸风雅，男厕所叫“观瀑亭”，女厕所叫“听雨轩”。第一个想出
    这名字的人，脑子还算活络。但这个味道并不好。《红楼梦》大观园里有座亭子要挂
    牌匾，清客说挂“泻玉”，贾宝玉说“泻”字粗陋不雅。“观瀑”也有这个问题，虽说洗手
    间是撒尿的地方，但并不是必须得盯着尿看。况且，正常情况下，男性撒出来的尿是
    直线，如果是瀑流，表示前列腺有毛病。

    我想到的也是挂 Hello World 啊，然后回复了一个：“扑运托福，虾落我得。（
    printf("hello world.\n")）”，然后看到已经有人说了“挂 hello world 行吗？”，还
    有四个赞。

[qtproject/qt-creator](https://github.com/qtproject/qt-creator)

[什么是心理学专业毕业生的核心竞争力？ - 开放的智力 - 知乎专栏](http://zhuanlan.zhihu.com/p/20539579)

[你能解开女人这个谜吗？](http://daily.zhihu.com/story/8042298?utm_campaign=in_app_share&utm_medium=iOS&utm_source=pocket)

[爱情嘛，不止有性](http://daily.zhihu.com/story/8033348?utm_campaign=in_app_share&utm_medium=iOS&utm_source=pocket)

[地球上穷苦的人还很多，为什么要烧钱研究太阳系？](http://daily.zhihu.com/story/8037592?utm_campaign=in_app_share&utm_medium=iOS&utm_source=pocket)

[没有他，你或许永远不会听到那段「灯，等灯等灯」](http://daily.zhihu.com/story/8041676?utm_campaign=in_app_share&utm_medium=iOS&utm_source=pocket)

[我是一个只有 3 分钟热度的人](http://daily.zhihu.com/story/8051957) -<

:   你可能高估了兴趣爱好的价值。你所看到的那些每天早起背诵英语的人、每天坚持跑
    步的人、在寒夜中蹲点拍摄星空的人，他们能够坚持，不是因为他们有这样的兴趣爱
    好，而是因为他们有忍受枯燥的能力。

    我们这个时代，兴趣爱好是一件被过度美化的事。

    可你的潜意识知道**你真正想要的**，不是投入和专注现在的事——就像这些被兴趣爱
    好驱使的人一样——而**是投入后的成功**。它看出了这种矛盾背后的虚无，所以就劝
    你早早地放弃了。

    正因为没用，他才不用焦虑要练得多快多好或者要坚持多久，他才能练得好，他的成
    就才高。

    这种枯燥的训练，不是简单的时间的堆砌，还要我们去反思、总结，亲近我们所做的
    事，了解它背后的机理。

[程序人生](http://mp.weixin.qq.com/s?__biz=MjM5ODUxMjQ0MA==&mid=403964940&idx=1&sn=653984cf28c9e78c05d137427ea0c5d2&scene=2&srcid=0324fL7W3CdgbicHhMKCHtLD#wechat_redirect) -<

:   当我学了一点电脑知识后，就发现电脑将是我人生的最爱。读书时，我不是特别会搞
    关系的人，同学关系说不上差，也好不到那里去。

    大学毕业后，分到研究所，不太适应研究所的气氛。调槽到金山软件公司，开始了职
    业程序员的生涯。后来成了北京金山软件公司的经理，但我还是一名程序员。

    我刚接触电脑就发现电脑的妙处，电脑远没有人那么复杂。如果你的程序写得好，你
    就可以和电脑处好关系，就可以指挥电脑干你想干的事。

    写程序简直是在自杀，巨费精力巨费脑子巨累。但我爱编程这个工作，可以肯定我会
    干上一辈子，虽然我没有打算一生只干这一件事。用一生来编程序是一件既容易又困
    难的事。如果碌碌无为，为交差写点程序，这样写两辈子的人都有。但如果想全身心
    地写程序，写十年就不是一件容易的事。

    成为一个高级程序员并不是件困难的事

    成为高级程序员绝对不是追求的目标。

    我们换个工种来看，石匠应该是熟练工种，属于工人，更艺术似乎沾不上边。但正是
    这些石匠，给我们留下多少文物古迹，如乐山大佛、莫高窟等等。**应该说这些石匠给
    我们留下了无穷的文化财产。**

    我认为编程的工作和石匠比较相似，有很多是技术活甚至是体力活，但编写优秀软件
    是件很难的事。这两种想法都有片面性，编程应该说两种属性都有。编程不仅仅是技
    术，也还是艺术。

[Lionel Liu | Optimized C++](http://lionelliu.com/2016/optimized-c++.html)

![](http://www.doxdesk.com/img/updates/20091116-so-large.gif)

[C++11 support in compilers - KlayGE](http://www.klayge.org/wiki/index.php/C++11_support_in_compilers)

[Using abbreviations - Vim Tips Wiki - Wikia](http://vim.wikia.com/wiki/Using_abbreviations) -<

:   `:ab rasa refs and see also`

    `:abc`, clear all

[Lua 是怎样一门语言？ - 知乎](https://www.zhihu.com/question/19841006)

[FFLIB 之 FFLUA——C++ 嵌入 Lua& 扩展 Lua 利器 - 知然 - 博客园](http://www.cnblogs.com/zhiranok/archive/2013/01/27/fflua.html)

[fffaraz/awesome-cpp: A curated list of awesome C/C++ frameworks, libraries, resources, and shiny things. Inspired by awesome-... stuff.](https://github.com/fffaraz/awesome-cpp)

[xuelangZF/CS_Offer: 深入理解计算机面试中的经典题目！](https://github.com/xuelangZF/CS_Offer)

[hluk/CopyQ: Clipboard manager with advanced features](https://github.com/hluk/CopyQ)

[云风的 BLOG: Lua 不是 C++](http://blog.codingnow.com/2008/08/lua_is_not_c_plus_plus.html) -<

:   表面上看起来，这个粘合层是设计的是很精妙的，它隐藏了 lua 虚拟机的细节。C++
    程序员在写代码的时候，并不需要实际上也的确是，不知道 lua 的存在。而 lua 程
    序也不需要关心那个类是用 C++ 实现的。在 lua 中，可以按照 C++ 的对象模型继续
    对类进行继承扩展。一切都展现的完美无缺。

    C++ 的代码从某种程度上也显得非常有水准，template 的灵活使用，可以在可能存在
    的领域重复利用发挥出功效，大量使用的 stl 容器以及智能指针保证了底层领域的健
    壮。

    刨除大话 3 更为复杂的逻辑处理的因素，追根到底是，lua 的表达能力更强，导致了
    程序员用更 C++ 的方式去用 lua 。而原来的 LPC 的代码更接近 C 一些。

    对于那些新接触 lua 的 C/C++ 程序员来说，我的第一条建议通常是：**看看
    lisp/scheme 吧，可能 lua 的血统里，scheme 的成分比 C 更多一些。**要不玩一下
    Haskell ，增进对函数式编程的了解。C++ 借助 template 是可以玩玩函数式编程，
    但很少有人真的去用。进入 lua 的领域后，你得正正经经的理解一下了。

    但是，重新实现一个的意义在于：把这个子模块剥离出来，绕过原来的厚粘合层。而
    不是先前的那种设计：在 C++ 里实现一个 CTick 类，然后从 lua 中继承它，再注册
    回 C++ 中的 CTickMgr 。

    refs and see also

    -   [云风的 BLOG: 对面向对象的一些思考](http://blog.codingnow.com/2008/06/object_oriented.html)

[城市裡的赤狐（深入淺出跟你們聊聊狐狸的感情生活） - 文章](http://www.weibo.com/p/1001603967081782590306) -<

:   男人喜歡把好女人教壞，而總是試圖拯救壞女人。改變都是為了佔有（直男並沒有什
    麼好東西）

    赤狐更多的同性戀模式是雙性戀模式的，也就是兩隻雄狐跟一隻雌狐維持的伴侶關係，
    但是這種關係非常不穩定，因為大家都是千年的狐狸還玩什麼純愛，彼此姐妹撕逼，
    夫妻撕逼，姐妹磨逼，天打雷劈，之後還是會變成一對一的互動。

[一句话都不需要说 (空房间 影评)](https://movie.douban.com/review/1088158/) -<

:   韩国电影一贯展现出对国家势力的厌恶，以及个人对体制的抵抗。

    暴力也相当直接。下手真狠。

    相反，他们的电视剧就一点也不承载这些内容，

    一厢情愿的风花雪月国泰民安。

    所以，电影的出去拿奖，电视剧的在亚洲赚钱，

    大家真是各司其职啊！

[遇上同样的事，你会怎么做？ (伊甸湖 影评)](https://movie.douban.com/review/1603794/?start=400#comments)

[耽美（文学词汇）_百度百科](http://baike.baidu.com/link?url=rcotfZBXUU1p0KUJo-EjcDkjrLQbM9m4GCr8xb4puSrCaycNy_6gcSCvM9XMnfPrAfhIwjZZz4xUw2_Cwi5Q6xXJ5roicxbyaiITJm18O7O) -<

:   耽美（和制英语：Boys' Love），这个词最早是出现在日本近代文学中，为反对自然主义
    文学而呈现的另一种文学写作风格：耽美派。耽美派的最初本意是“反对暴露人性的丑恶面
    为主的自然主义，并想找出官能美、陶醉其中追求文学的意义”。耽美在日文中的发音为
    耽美（たんび）tanbi，本义为“唯美、浪漫”之意，如耽美主义就是浪漫主义。耽美，沉溺
    于美，详细解释则是「包含一切美丽事物，能让人触动的，最无瑕的美」。

    KUSO：漫画界或同人界都很常用的术语，正面来讲是搞笑，其实大多的意思是"恶意搞笑"，
    时常违背原作剧情，却赢得大批拥趸。

    ——同人：同人一词来自日语的“どうじん”（DOJIN），也有人认为来自中国。原指有着相同
    志向的人们、同好。作为 ACGN 文化的用词，所指的是，由漫画、动画、游戏、小说、影
    视等作品甚至现实里已知的人物、设定衍生出来的文章及其他如图片影音游戏等等，或“自
    主”的创作。

[如何找电子书和有声书资源](https://www.douban.com/note/550583018/) -<

:   -   http://readfree.me/ （我还买了 vip。这个网站可以上传书，所以我也经常去贡献一下。我知道还有其他类似的网站，但是我好像对这个情有独钟，哈哈）
    -   http://audioc.at/ （资源不是很多，但是书都选得不错）
    -   https://site.douban.com/196116/ （豆瓣小站）
    -   https://www.douban.com/group/410277/ （豆瓣小组，有很多爱好者自传的资源）

    （有声书我听小说比较多，因为运动时听比较不容易走神，而科普之类的写不好的都太啰嗦了。强推 Emilia Fox，非常喜欢她的声音，可惜我也没找到很多她读的好书。）

    有声书加电子书：

    -   http://so.baiduyun.me/ （搜百度盘，我觉得这个非常好用，大部分市面上有的都可以找到，虽然现在很多都打不开被和谐掉了，还是可以通过分享者的页面进去看到的）
    -   https://www.jiumodiary.com/ （搜百度盘和微盘，但我觉得微盘很多书都不全，所以不太喜欢）

    另外 piratebay 资源超级丰富，只是我在学校不太敢用。

[在 ACM-ICPC 中获得很好成绩的人，现在都在干什么？ - 程序猴子的回答 - 知乎](https://www.zhihu.com/question/26828533/answer/34212232)

[Layout – The Miniguru – Always on the Home Row](http://www.guru-board.com/english/layout_en)

![在像幅不变的情况下，如果增大焦距；
    就需要把 field of view 缩小；
    FOV 缩小，远处的东西就会变大](http://whudoc.qiniudn.com/2016/fov-focal.jpg)

[Dolly zoom - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Dolly_zoom)

[面试了个 985 的计算机应届生，还比不过个专科生，读 985 的计算机专业有什么用？ - 高天的回答 - 知乎](https://www.zhihu.com/question/41923868/answer/92880107) -<

:   在公司招聘的时候，花钱买的不光是一个人的**即战力**，还有一个人的**潜力**。

    有两种公司是完全不在乎应聘者的潜力的，第一是留不住人的公司，潜力刚开发一点，
    转换了一定的即战力，公司就留不住这个人了，人家就跳槽找高薪去了；第二是不需
    要潜力的公司，我对应聘者的要求只有这么高，多了没用，就是把同样的内容做一百
    遍。

    在这两种公司的眼里，对于一个应聘者的要求就是，来之能战，保持状态，战斗到走。
    因此对于应聘者的价值判断也往往更倾向于即战力，面试的内容也是和工作内容息息
    相关，比如用某一个框架做某一种网页的，就问这个框架做这个网页需要的控件的内
    容。这些有时候往往是专科生更擅长的。

    我绝不是鄙视或者讽刺这两种公司，恰恰相反，我认为这两种公司应该招更符合他们
    要求的人。即战力强，潜力低，安于现状。这样的人更容易给这样的公司做出稳定的
    性价比高的贡献。

    比较可怕的是另一种公司，他们自认为是一个有潜力，有发展，有进步的公司，但是
    却用以上两种公司的眼光去审视他们的面试者。明明应该考基本功的时候考技术分支，
    该考算法概念的时候考函数实现，该考功能设计的时候考语言特性，该考应聘者未来
    上限的时候考现在的下限。结果招来了一群战斗力强，潜力低的人，还嫌弃人家学东
    西慢。

    因此作为一个面试者，清晰地了解自己面试的目的，并根据目的调节面试方法是很重
    要的。当你问一个问题的时候，应该想到，这个问题如果让他学，他多久能学会，这
    个问题是不是在我们工作中需要的核心问题，这个问题是属于主干还是旁枝。比如你
    问 Android 添加按钮的方法，A 都明摆着说了没做过 Android，那他能会么？如果开始学
    Android，学会添加按钮需要多久，多大的能力呢？添加按钮对于你招聘这个岗位多重
    要呢？

    同样的钱，只能合理分配在即战力和潜力之间，这是根据岗位需求决定的。你 7000 块
    在上海，想找个即战力强，潜力大的 985CS 学生，人家可能都懒得看你。所以来你这里
    面试的，要么就是潜力稍大，即战力弱的 985 学生，要么就是即战力强，潜力低的专科
    生。至于你究竟需要那一种，我就不知道了。

    ---

    以下是一些逻辑上的补充，非常无趣，如果你只想点个赞，可以忽视下面的部分。

    看到了好多评论，针对质疑的比较多的地方统一解释一下好了。当时写的时候大多摆
    的结论，少有分析和说理（大部分知乎 er 也不太爱看这些无聊的内容）。

    首先，**稻草人谬误**。指的是“曲解对方论点，然后攻击曲解后的论点，再宣称自己推翻
    了对方的观点。”有一部分人犯了这个错误。

    其中包括认为我说“所有 985 学生都比任何专科学生潜力大”的人（此论点等价于“潜力
    最小的 985 学生大于潜力最大的专科学生”），包括认为我说“高考决定了一个学生的潜
    力的人”。

    我的观点是，平均意义上说，985 的学生潜力比专科学生的潜力要大很多。这里的潜力
    主要是指，在同样的时间内，受到相似的指导之后，技术或者说所谓即战力进步的幅
    度。为什么这么说呢？主要有两点原因。

    其一，高考是一个检验学生学习能力的相当好的测试。很多人说的有关高考的问题，
    包括省市之间差异，教育资源之间差异，都存在，但是并不影响高考成为一个相对公
    平有效的测试的事实。高考本身测试的是一个学生，在同样的时间之内，学习相似的
    内容，最后的掌握程度。这个结果是和学生的学习能力相关性很大的。如果你说某高
    考难省上上交的不一定比某省上清华的学习能力差，我非常同意，但是如果你说某省
    考专科的到了某省都能 985，就有点乱来了。在这里我们不多谈高考，知乎有很多问题
    讨论高考，只说我认为高考确实是一个检验人学习能力的很好的平台，其不具有“决定
    性”，但是有很大的“相关性”。

    其二，一个好的大学在这四年教给一个学生的，绝不仅仅是知识，还有学习能力。或
    许一部分学生知识掌握的不够牢固，但是在这四年的过程中，多少潜移默化地掌握了
    大学指导他们学习的方式。同时，大学这四年教的基础内容更像是地基，你看不见，
    摸不着，只有楼盖高了才能发现他们的重要性。有些内容我们觉得我们忘了，但是当
    我们需要捡起来的时候，会比从未接触过的人快一些。

    因此，我认为 985 的学生潜力比专科学生的潜力大（平均意义上）。

    其次，视而不见（断章取义）。

    有的人说“公司就要即战力”或者“潜力培养出来就跳槽了”。你们说的很对，我文中特
    意强调了，这个即战力和潜力的分配是由公司决定的，如果一个公司留不住人，或者
    对员工的要求就是做好现在他擅长的事情，那毫无疑问这是一个正确的筛选方式啊！
    没有不好使的螺丝刀，只有不合适的螺丝，错的永远不是螺丝刀，是你用他去拧不匹
    配的螺丝。因此我对这个面试方式本身一点成见都没有，我只是说这种方式更倾向于
    寻找到即插即用的学生。

    最后，以全概偏。

    我的答案本质上是一种分析和建议，我甚至没有评价题主的做法是否正确，因为我确
    实不了解题主的公司和招人需求。根据他的需求，他的做法可能是正确的，也可能是
    错误的。即使题主做法是不正确的，也并不意味着我认为他应该招那个被他拒绝的 985
    学生。有的评论从“这种招聘方式可能是有问题的”，引出“应该招 985 的学生”，从而再
    攻击“985 的学生有一事无成的”，然后反推回我的结论是错误的，这个逻辑是非常非常
    不完整的。

    我没有倾向于招 985 的学生，即使在我认为招 985 学生更好的那些看中潜力的公司
    ，也并不应该招每一个 985 的学生。985 里当然有一些一直打游戏挂科挂到死考不上
    研究生出来靠文凭混工作的人，但是他们是否有一定的潜力，题主的面试方式没有问
    到。题主的面试部分完全针对的是即战力，连尝试看看潜力的问题都比较缺乏。如果
    面试判断了，这个小子除了文凭一分钱不值，当然不能录，**985 文凭本身**并没有
    那么值钱。

    所以不要说什么“拿着差不多的钱，为什么不建设自己的祖国呢？”，真心不是这么回
    事儿。

    就光是钱的问题么？也不是。

    我现在每天开车 5 分钟上下班，这还是从我走出家门到走入办公室。不知道我大北京有
    多少人能完成这件事。在公司不打卡不加班，不用抄开源代码去改。每天睡醒了晃晃
    悠悠来上班，上累了高高兴兴回家，不知道国内有多少公司可以。

    当然最重要的是，我觉得我真的在做一些东西，是技术上的而不是实现上的。是一个
    别人很少做的，业内领先的，对于客户有帮助的产品；而不是某些人一拍脑袋想出的，
    只靠 idea 没有技术支撑的，拼凑的产品。我自己特别在乎这个，**我真的不想成为
    一个实现某些人莫名其妙想法的工具**。

    你说我有没有想回国的时候？天天都想。

    我想着我大北京的烤鸭，想着中国完爆美帝的麦当劳肯德基，想着街边的烤串，想着
    隔壁的火锅，最想最想大清食堂 20 块撑死的香锅和 3 块一个的肉夹馍。

    我也想爸妈，想刚去南京上学的表弟，想我人生中最重要的熊老师，想我的朋友，我
    的同学，我的知己。

    我从不为未能给国家效力感到羞愧，因为我知道我这一介屁民并不能带来什么实质上
    的影响，我不是钱学森，也不是施一公。或许一千个我，一万个我，十万个我，会让
    故事变得不一样，由量变产生质变，但是靠情怀，是叫不回十万个我的。

    因为谈情怀太贵。

    然而这些都不重要。

    无论是在清北还是在社会里，我们都会遇到我们不喜欢不理解的人，有时候我们觉得
    他在装，有时候觉得他傻。但是我们应该维护两个原则。

    己所不欲勿施于人。设身处地地思考一下，如果你是他，你能理解么，你会这么做么，
    你愿意接受什么样的回应？

    道不同不相为谋。如果无法理解，至少不卑不亢地走开，两个彼此无法理解的人是争
    不出什么结果的。**吵架只能让两个人都心情不好，对别的没有帮助。**

    就像知乎一样。

    作为一个“学渣”，从来没放弃过自己，没给过自己美好的幻想，却知道自己的底线。
    对于自己不喜欢不擅长的科目，努力爬上 70（好像只有一门工图 67），不抛弃，不放
    弃。对待自己喜欢擅长的科目，争取脱离底层。

    班里似乎唯一一个大一大二大三大四 GPA 逐年上升的人，虽然最后升到最高还没有人
    家最低的一年高。

    GRE 全班唯一一个没超过 1400 的人，申请基本全班最差地去了 Cornell 的 master。

    我经常说一句话，在清华这个已经被学习筛选过无数遍的学生群体里，或许非学习的
    能力才是让你脱颖而出的关键。无论你多么渣，你已经证明了你是这一届全国学习最
    好的几千个学生之一，只要你不放弃，虽然在这几千人里你可能垫底，但是拉出去之
    后你还是全国最拔尖的。然而如果你在其他方面也非常优秀，比如领导能力，语言表
    达能力，人际交往能力之类之类的，走出清华之后或许就会变成一个非常闪耀的人。

    为什么现代“城府深”的女人被骂心机的多？原因前面说了，她们城府并不深啊！只是
    **喜欢面前装无辜，背后捅刀子而已**。**这是个选择，而不是能力。**而且现代所
    谓“城府深”的女人，大多最终目的就是争个男朋友，或者备胎，或者“白富美”的称号，
    就这个浅显的目的，也未免太让人看不上眼了。

    最后，这绝不是一篇黑现代女人只会抢男人，大事都是男人去做的答案。只是想说明
    现在很多被说“有城府”的女人，真心谈不上“有城府”，**最多算是个“脸皮厚”**。

    **记得 05 年中考结束，和爸爸回了一趟他的老家。他出生在长白山脚下的一个小镇子，
    叫松江河镇。那里没有高楼大厦，没有绚丽繁华。要不是在这里可以爬上长白山看到
    天池，这里或许火车都还没通。**

    现在我在加州温暖的阳光下挣着亲戚们想都不敢想的钱，爸妈和老姨一家在海南买的
    房子里过冬度假，爷爷冬天在爸爸的陪伴下飞去海南，夏天再飞回北京郊区那个舒适
    的小区养老。在不久的将来，我可以选择让我的孩子生在美国，走 easy 模式，或者生
    在北京，走 hard 模式下的 easy 难度。这些其实和我的努力关系没有那么大。只是因为
    我的父亲当年做了一个正确的选择。

    正如我常说的，人生是一个积分，你的选择影响的绝不仅仅是你自己，还有你的孩子
    。**今天安逸的选择或许让你的人生某个阶段更加舒适，但是往往也意味着你给孩子
    设置了一个本可以没有的屏障。 **

    这东西和老婆一样，我就喜欢这姑娘，你和我说这姑娘长得不好看，腿短腰粗胸小脸
    大，家里没钱没权没背景，不会疼人不会做家务，有啥用？

    **一言蔽之，有钱难买俺乐意！**

    清华研究生给你带来的人脉和水平上的提高，远逊于清华本科。

    在美国税后能拿到 7W 美金。在中国税前我大概能找到个 20-30W RMB 的工作。

    在美国 3W+ 买个新 BMW320 在中国得 30W。

    在美国 50W 刀买个 2-3 室的加州小别墅在中国 500W 买个 2-3 室室内的公寓

    说白了，就是挣得多，还禁花。竟然有这么多人质疑这个“禁”字，还有人说我用错了。
    禁是禁得住，也就是承受的意思，给个查了《现代汉语词典》的链接“经不”“经得”与
    “禁不”“禁得”，经最多算是异形字。用经更正确的“经受”更多用于人，表承受意。钱
    禁花显然用“禁”比用“经”更合适，至少不是错误。

    我记得有个很有趣的笑话，80% 的司机都认为自己的开车水平在平均值以上。在我看
    来这并不是笑话，这很正常，因为每个司机评价开车水平的方式不同，然后都朝着他
    们认同的“高水准”努力，**而在别人眼里，他们就跑偏了**。

    你也是一样的，你用你的标准去考量身边的人，即使你们“综合素质”相似，你也会得
    到你更优秀的结论，因为你会从你自己的角度去评价他们，你也更关注你关注并且你
    擅长的方向。

    **狂妄自大，尖酸刻薄，聪明绝顶**

    -   阶段一：不知道自己不知道 (Unconscious incompetence)
    -   阶段二：知道自己不知道（Conscious incompetence）
    -   阶段三：知道自己知道（Conscious competence）
    -   阶段四：不知道自己知道（Unconscious competence）

    refs and see also

    -   [高天 答过的问题 - 知乎](https://www.zhihu.com/people/gao-tian-50/answers?order_by=vote_num)

Vim -<

-   ```tzx-bigquote
                                *[quotex]*
    ["x]        An optional register designation where text can be stored.
            See |registers|.  The x is a single character between 'a' and
            'z' or 'A' and 'Z' or '"', and in some cases (with the put
            command) between '0' and '9', '%', '#', or others.  The
            uppercase and lowercase letter designate the same register,
            but the lowercase letter is used to overwrite the previous
            register contents, while the uppercase letter is used to
            append to the previous register contents.  Without the ""x" or
            with """" the stored text is put into the unnamed register.
    ```

    `c_ctrl-r`, `i_ctrl-r`

    +   c: cmdline-mode

    +   i: insert-mode

-   `imap`, `map`, `cmap`

    +   `:map a b`

    +   `:imap a b` (remap keyboard)

-   `ctrl-v, del` -> `<Del>`

-   `ctrl-q, del` -> `<Del>` (win)

    This option allows switching your keyboard into a special language
    mode.  When you are typing text in Insert mode the characters are
    inserted directly.  When in command mode the 'langmap' option takes
    care of translating these special characters to the original meaning
    of the key.  This means you don't have to change the keyboard mode to
    be able to execute Normal mode commands.
    This is the opposite of the 'keymap' option, where characters are
    mapped in Insert mode.

    `:set langmap=ad`, `aa` -> `dd`

    `:echo globpath(&rtp, "keymap/*.vim")`
    `C:\Program Files (x86)\Vim\vim74\keymap`

    `:lmap`, check map

    ```tzx-bigquote
    :map    {lhs} {rhs}     |mapmode-nvo|       *:map*
    :nm[ap] {lhs} {rhs}     |mapmode-n|     *:nm* *:nmap*
    :vm[ap] {lhs} {rhs}     |mapmode-v|     *:vm* *:vmap*
    :xm[ap] {lhs} {rhs}     |mapmode-x|     *:xm* *:xmap*
    :smap   {lhs} {rhs}     |mapmode-s|         *:smap*
    :om[ap] {lhs} {rhs}     |mapmode-o|     *:om* *:omap*
    :map!   {lhs} {rhs}     |mapmode-ic|        *:map!*
    :im[ap] {lhs} {rhs}     |mapmode-i|     *:im* *:imap*
    :lm[ap] {lhs} {rhs}     |mapmode-l|     *:lm* *:lmap*
    :cm[ap] {lhs} {rhs}     |mapmode-c|     *:cm* *:cmap*
                Map the key sequence {lhs} to {rhs} for the modes
                where the map command applies.  The result, including
                {rhs}, is then further scanned for mappings.  This
                allows for nested and recursive use of mappings.

        COMMANDS                      MODES ~
                          Insert  Command-line  Lang-Arg ~
    :map!  :noremap!  :unmap!  :mapclear!       yes        yes     -
    :imap  :inoremap  :iunmap  :imapclear       yes     -      -
    :cmap  :cnoremap  :cunmap  :cmapclear        -         yes     -
    :lmap  :lnoremap  :lunmap  :lmapclear       yes*       yes*   yes*

    1.4 LISTING MAPPINGS                    *map-listing*

    When listing mappings the characters in the first two columns are:

          CHAR  MODE    ~
         <Space>    Normal, Visual, Select and Operator-pending
        n   Normal
        v   Visual and Select
        s   Select
        x   Visual
        o   Operator-pending
        !   Insert and Command-line
        i   Insert
        l   ":lmap" mappings for Insert, Command-line and Lang-Arg
        c   Command-line

    Just before the {rhs} a special character can appear:
        *   indicates that it is not remappable
        &   indicates that only script-local mappings are remappable
        @   indicates a buffer-local mapping

    Everything from the first non-blank after {lhs} up to the end of the line
    (or '|') is considered to be part of {rhs}.  This allows the {rhs} to end
    with a space.
    ```

[对不起，我只尊重值得尊重的老人 - 简书](http://www.jianshu.com/p/b48e9eeebbe5) -<

:   “不是老人变坏了，而是坏人变老了”

    儿时，以为可以把人简单归类。非好即坏，非白即黑，丁是丁卯是卯，又红一定又专，
    穷凶一定极恶。看电影，一定要去辨别谁是地下党谁是英雄是好汉是好人，哪是叛徒
    是狗腿子是汉奸是工贼是地富反坏右。

    老师看看我，淡淡地说“孟子是个思想家，不能用简单的好坏评价……”

    事实是，我们无法控制别人，也改变不了别人，更不可能教育好当了一辈子“坏人”的
    某些老魂灵。如果真的遇人不淑般遇到倚老卖老、为老不尊者，自己年龄又不比对方
    大，不能象教育孙子一样教育对方，还是象超市老板那样“敬而远之”吧，当他们是“三
    季人”；或者不妨回敬一句——我只尊重值得尊重的老人！或者干脆就学孔老夫子一样骂
    回去“老而不死是为贼！”

    因为，时间早晚会带走一切。

    比如打来电话先问一声“说话方便吧”

    80 年代中期，国家开始办理第一代“身份证”，很多单位要抽调专人去协助做相关的档
    案梳理工作。一天，车间领导找郭阿姨的女儿：小郭，你写字写得不错，调你去办公
    室协助整理档案……

    小郭同学很内秀很谦虚：我字写得不好啊！我不行！还是让别人去吧……

    当年的小廖恰在旁边，听到领导跟小郭的对话，自告奋勇毛遂自荐：领导，她不去，
    让我去试试吧！

    这个小廖，就是隔了 30 年，我们在电视上看到廖局长。

    如果一个人总是习惯性“拒绝”，拒绝接受别人善意的忠告，拒绝学习新鲜事物，拒绝
    去做“凡事都有至少三个解决方案”的尝试，我不行、我做不了、我从来没做过……你所
    拒绝的也许就是机会呢？往往就是机会啊！！

    refs and see also

    -   [你所拒绝的往往就是机会 - 简书](http://www.jianshu.com/p/e1481093e27f)
    -   [你是否专业，一出手别人就知道了 - 简书](http://www.jianshu.com/p/d6ac0031c48f)
    -   [在职场上你要懂点人情世故呀 - 简书](http://www.jianshu.com/p/d7d5d2c1d294#)
    -   [春的后面不是秋，何必为“单身”发愁 - 简书](http://www.jianshu.com/p/f3ddcf4ecfe9)
    -   [说起来，还是家教问题 - 简书](http://www.jianshu.com/p/37ccfc49eb0a)
    -   [面试时如何做“自我介绍” - 简书](http://www.jianshu.com/p/33ee641b108a)

[Shared libraries with GCC on Linux - Cprogramming.com](http://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html){.heart} -<

:   链接的时候用 `-L`, `-I` 还不够，运行的时候要 export `$LD_LIBRARY_PATH`，特别麻烦，

    Now let’s try rpath (first we’ll clear `LD_LIBRARY_PATH` to ensure it’s rpath
    that’s finding our library). Rpath, or the **run path**, is a way of embedding
    the location of shared libraries in the executable itself, instead of
    relying on default locations or environment variables. We do this during
    the linking stage. Notice the lengthy “-Wl,-rpath=/home/username/foo”
    option. The `-Wl` portion sends comma-separated options to the linker, so we
    tell it to send the `-rpath` option to the linker with our working directory.

    ```bash
    export LD_LIBRARY_PATH=/home/username/foo:$LD_LIBRARY_PATH

    # unset env var first
    unset LD_LIBRARY_PATH

    # rpath
    gcc -L/home/username/foo -Wl,-rpath=/home/username/foo -Wall -o test main.c -lfoo
    ```

    `rpath` *vs* `LD_LIBRARY_PATH`

    :   There are a few downsides to rpath, however. First, it requires that
        shared libraries be installed in a fixed location so that all users of
        your program will have access to those libraries in those locations.
        That means less flexibility in system configuration. Second, if that
        library refers to a NFS mount or other network drive, you may
        experience undesirable delays–or worse–on program startup.

    Using ldconfig to modify ld.so

    :   What if we want to install our library so everybody on the system can
        use it? For that, you will need admin privileges. You will need this
        for two reasons: first, to put the library in a standard location,
        probably /usr/lib or /usr/local/lib, which normal users don’t have
        write access to.  Second, you will need to modify the ld.so config file
        and cache. As root, do the following:

        ```bash
        $ cp /home/username/foo/libfoo.so /usr/lib
        $ chmod 0755 /usr/lib/libfoo.so
        ```

        Now the file is in a standard location, with correct permissions,
        readable by everybody. We need to tell the loader it’s available for
        use, so let’s update the cache:

        ```bash
        $ ldconfig
        ```

        That should create a link to our shared library and update the cache so
        it’s available for immediate use. Let’s double check:

        ```bash
        $ ldconfig -p | grep foo
        libfoo.so (libc6) => /usr/lib/libfoo.so
        ```

        Now our library is installed. Before we test it, we have to clean up a
        few things:

          - Clear our `LD_LIBRARY_PATH` once more, just in case: `unset LD_LIBRARY_PATH`{.bash}
          - Re-link our executable. Notice we don’t need the -L option since our
            library is stored in a default location and we aren’t using the rpath
            option: `gcc -Wall -o test main.c -lfoo`{.bash}

        Let’s make sure we’re using the /usr/lib instance of our library using
        ldd:

        ```bash
        $ ldd test | grep foo
        libfoo.so => /usr/lib/libfoo.so (0x00a42000)
        ```

        Good, now let’s run it:

        ```bash
        $ ./test
        This is a shared library test...
        Hello, I'm a shared library
        ```

        That about wraps it up. We’ve covered how to build a shared library,
        how to link with it, and how to resolve the most common loader issues
        with shared libraries–as well as the positives and negatives of
        different approaches.

「拎起来三斤半，放下去，还是三斤半。」 -<

:   -   [网易云音乐的歌单推荐算法是怎样的？ - 知乎](https://www.zhihu.com/question/26743347)
    -   [什么才算是真正的编程能力？ - 知乎](https://www.zhihu.com/question/31034164)
    -   [有哪些无限循环故事的作品？ - 知乎](https://www.zhihu.com/question/22448808)
    -   [如何用简单易懂的例子解释隐马尔可夫模型？ - 知乎](https://www.zhihu.com/question/20962240)
    -   [大公司笔试面试有哪些经典算法题目？ - 知乎](https://www.zhihu.com/question/19805213)
    -   [程序员必须掌握哪些算法？ - 知乎](https://www.zhihu.com/question/23148377)
    -   [游戏编程里面有哪些经典或者很酷的算法？ - Milo Yip 的回答 - 知乎](https://www.zhihu.com/question/27455969/answer/36760078)
    -   [SimonS 答过的问题 - 知乎](https://www.zhihu.com/people/simonshao/answers?order_by=vote_num)
    -   [和圆一样的三角形 | 科学人 | 果壳网 科技有意思](http://www.guokr.com/article/93390/)

[一拍一拍摄服务流程](https://ypy.douban.com/docs/about_service) -<

:   网页做得很精美，每个部分都用图片作为背景。

[【MOOC 学院专访】清华邓俊辉：用 MOOC 告诉你，数据结构可以很优美 | MOOC 学院](http://mooc.guokr.com/post/610516/) -<

:   这门课禁止了 STL 的使用，让学生自己动手实现这些功能。打个比喻吧，汽车系的学
    生不同驾校的学生。驾校的学生拿到驾照就达到目标了，汽车工程系则要深入学习汽车的
    原理和构造。要学会开车很简单，有说明手册，一踩油门就能走。但要开出高水平，只有
    两个途径，一个是经过长时间磨练，靠经验积累；另一个是学习它的原理和构造，深入地
    了解它的运作。数据结构课要学习的，也就是计算机的原理和结构。

    可以这么说，如果不得不压缩课时，有三门课是必须保留的。一门是程序设计，它就
    像教小孩子说话，教会他把话表达清楚；一门是数据结构与算法，这门课教会写文章，
    教文法，教怎样写出好文章；还有一门是计算机组成和体系，那是更深入的计算机课
    程。

    果壳网：你有什么书推荐给感兴趣的同学阅读？

    邓俊辉：我推荐**《计算几何》(Computation Geometry)**。

    在第一节课，我举了个例子：怎样从一些点中找出面积最小的三角形。这个问题看似
    复杂，无从下手，其实这个问题只是计算几何的一个经典应用。

    计算几何这门课在美国是很常规的一门课，在中国却不太流行。许多时候，计算机图
    形学、可视化都以它为基础。而且在实际中，有很多看似困难的问题，都能在这里找
    到答案。有兴趣的同学不妨一读。

    refs and see also

    -   [邓俊辉 - Junhui Deng](http://dsa.cs.tsinghua.edu.cn/~deng/index.htm)
    -   [DSACPP](http://dsa.cs.tsinghua.edu.cn/~deng/ds/dsacpp/index.htm)

[Unity & Cocos2D-x之间的战火硝烟](http://subject.manew.com/unity-cocos/index.html)

[ASCII Chart - cppreference.com](http://en.cppreference.com/w/cpp/language/ascii)

什么样的人会被夸性格好？ -<

:   给别人面子，能接受别人装逼，而且以上皆不出于自己的无能。

为什么吃饭吃得很干净会被嘲笑？ -<

:   哈哈哈哈。

    我翻了一下其他的答案，第一反应是你们都没洗过碗吗……

    我家是这样，洗碗的时候会先把食物残渣冲到水槽里，洗碗的水会从下水道流走，但
    水槽上的细缝漏斗会把残渣卡住，洗完碗之后最恶心的事情就是要用两根手指把漏斗
    夹起来，用手指把里面的饭粒和烂菜拨到垃圾篓里，然后你要清洗漏斗和手指。

    而简化这一流程的最简单方式就是，把饭和菜吃干净，我就是抱着这种慵懒的想法养
    成了吃干净的习惯。

    **或者你们一直不知道代替你们洗碗的家人一直在承受这样的痛苦……**

    因为我就是那个洗碗的( ･᷄ὢ･᷅ )

[IBM2016 校园招聘](http://search.ibmcampus.com/sc/show_job_detail.php?jobid=76686290) -<

:   小璇璇说想去试试这个。

[【GeoScience Café】樊珈珮：获得 special offer 的秘诀](http://www.lmars.whu.edu.cn/detail.jsp?id=y0iih62yl7)

[Geocafe](http://www.lmars.whu.edu.cn/list.jsp?id=y0hxafezty)

[下一个十年，能读完吗？ (评论: TCP/IP Illustrated)](https://book.douban.com/review/5555969/) -<

:   如果 Richard Steven 没有英年早逝，想必 Internet 的世界一定会因为他变得更美好一点点。

    10 年前开始读这本 2000 页的砖，一直在从里面吸取养分。

    TCP/IP 的 C 库是一个大宝藏，希望自己到 40 岁的时候，可以将这本书看完。

    一句雄心，一句壮志，道出生活之于人生的命题。你是翻山越岭的人，怎可因一次小小的跟头就垂头丧气。

    先说一句：开头的雪地真的很惊艳。看完电影后，我一直在想一个我始终不明白的问
    题，为什么人需要另一个人与之心灵相契？人们“孤独”地出生，“孤独”地死去，却要
    穷其一生去抗拒孤独。一个人存在于世的意义是否就是要在对方的心里证明自己“存在”过？

[星座和血型究竟有多么科学 | 王子亭的博客](https://jysperm.me/2012/06/518/) -<

:   >   处女座是很难做人的，其实他们骨子里是相当孤傲，很喜欢安静，不喜欢多说话，
    >   可是又不得不想让周围的人因为他们的存在而感到快乐和幸福！所以，稍微稳当点
    >   的处女座会被人说成清高，活泼点的就被人说成 2B……请理解处女座，清高的并没有
    >   瞧不起谁，2B 的只是为了你们能开心，幸福。

    如何用一句话噎死信星座的?

    我们处女座才不会相信星座呢…

[就你知道得多！你咋不上天呢？！ (死侍 影评)](https://movie.douban.com/review/7781499/) -<

:   我的好基友孙师傅在看了这部电影之后获得的人生经验是，**当满场的鬼佬都笑得像傻
    逼似的，自己不笑反而显得更像傻逼了**。看了这部电影我才更深刻地体会到自己英语
    有多差。生活就像死侍的嘴，你永远不知道下一句蹦出来的会是什么，**就算知道了也
    不一定能理解**。

    至于剧情，本片很聪明的用了插叙，先把最精彩的一场打戏提到了开场，然后再慢慢
    交代前因。如果没有玩儿这个花样，那整部电影就会沦为彻底的流水账，而且是故事
    可看性比较差的那一种。这么做还有一个好处，就是提前让观众对主角的颜值有心理
    准备。如果不是看之前就对死侍这个角色有所了解，估计没几个人能接受一个长得像
    被基因突变的沙皮狗咬了一样的男主角。毕竟电影主角承担着引领观众的责任，甚至
    在一定程度上是观众的化身，谁会闲得没事想象自己长得好像一只牛油果满怀怨恨地
    干了一只更老更丑的牛油果呢？如果电影按照正常时间顺序推进，等观众习惯了瑞恩
    雷诺兹的帅脸后，再把他变成个长了满口牙的[哔]丸，估计会有不少人电影看到一半
    就愤而离席了。所以一定要先让观众接受主角那副好像弗雷迪用脸操了犹他州地形图
    一样的尊荣，然后再慢慢告诉观众，其实他也帅过，不过大家随便看看就行了，**反正
    颜值就像天上的浮云一样，真正恒久远的只有他那一张贱嘴**。说实话，当反派在实验
    室里对主角说，经历了这里的一切后他的幽默感不会决保留下来的时候，我居然有点
    感动。我觉得能把自己那种玩世不恭的德性一直坚持下来，也需要一颗强大的内心。
    所以从这个角度去想，就觉得死侍就算不是“英雄”，起码也是条好汉。

    omni sexual (omni 全方位, `['ɑmni]`)

    ![](http://static1.squarespace.com/static/540f0c23e4b05f3219a3661f/t/56bf07f222482edc3dbf5de0/1455360123205/?format=1500w)

    refs and see also

    -   [Deadpool 电影——我喜欢/ 不喜欢的地方 (死侍 影评)](https://movie.douban.com/review/7771494/)

[千年女优【论一个影迷的自我修养】](https://www.douban.com/note/412268823/){.heart} -<

:   ![千代子的原型为传奇女优原节子这一点几乎不存争议。](https://img3.doubanio.com/view/note/large/public/p19639430.jpg)

    《千年女优》的故事取自黑泽明的战后反思电影“我对青春无悔”（原作请戳这里
    <http://movie.douban.com/subject/1301260/>）原节子在片中饰演等待情人归来的痴心
    女子，如她一贯的荧幕形象，可谓“永远的贞女”。

    ![](https://img3.doubanio.com/view/note/large/public/p17652222.jpg)

    节子的“贞女”形象，最叫人印象深刻的就是这部“东京物语”。丈夫死后不肯出嫁的妇人，
    恪守这承诺，不愿从阴影中走出。规劝者，“东京物语”选择了公公，“千年女优”则选择了
    母亲，不同的语气与面部表情源于不同的身份。

    当少女时代，千代子遇到了负伤逃难的画家，他匆忙中撞倒了她，毫无防备的她跌落在雪
    地上，也自此跌入了让她沉溺一生的爱情之海。实在说不出他有什么特别的，她只是看到
    了他被帽沿遮住的半张脸就爱上了他，他温柔的低语，手掌的温热，让她在一刹那就从懵
    懂的少女觉醒成为一个女人。

    千年女优, 根本不是一个关于爱和宿命的故事, 这就是一个<千代子快跑>的故事. 千代
    子寻找的并不是爱情，也不是自己的一见钟情者. catman 说得很好: "她而只是在追寻
    一种感觉、一种情绪来追寻他只是因为我喜欢呀。不，或者说是在通过追寻在保持自
    己的那种最宝贵的情感，或许那就是“纯真”吧. 记得电影里千代子说，‘她最喜欢睡莲’
    而睡莲则象征了"纯真".

    寻找是许多电影的主题。等待是许多女人的宿命。在等待和寻找之间游走挣扎，一生
    无比漫长，千年却也不过是一日——相遇的一日。那是黑白战争年代，只有少女是一抹
    亮色，鲜红的围巾，缚于他的伤腿上，也系上了一生痴缠。一把开启画箱的钥匙，恪
    守着一个承诺：要在和平到来之时见面，她归还钥匙，一起远赴北海道的雪原，在白
    雪皑皑中，他将完成未尽的画作。

    故事讲述到这里，千代子晕倒，救护车开过，远处电影场正在拆除。属于她的时代已
    经过去了。立花告诉虎吉，当年刀疤脸已经杀死了钥匙君，千代子一生追寻的是一个
    永远追赶不上的故人的身影。千代子安静地握着钥匙辞世。

    也许在某个时候，会发现就在转角的某个地方。于千万人之中遇见你所遇见的人，于
    千万年之中，时间无涯似的荒野里，恰恰的在这一刻，却只能问一句：“原来你也在这
    里。

    ![](https://img3.doubanio.com/view/photo/photo/public/p2239142960.jpg)

    很多年后，一直到我快结婚的时候，我们两的一个共同朋友说：你当时要是能理解他一下，也许你们就在一起了，哎。

    听了这样的话，我突然想起那个用力追逐，一直追逐到同一所大学，还声称要吊死一生的我。
    也许每一个人，都觉得，他是我一生的挚爱，如果我得到了，我一定会很幸福。

    而多年之后，我回想起来，我才明白，我喜欢的，只是那个声称要吊死在他这一棵树上的我自己。

    |   因为这样，我可以不变成计算着“女生要爱自己才会被爱”的女人；
    |   因为这样，我才可以不变成计算着“不能倒贴男人都是犯贱的”的女人；
    |   因为这样，我才可以不变成计算着“男人喜欢自己追求的女生”“谁先付出谁就输了”的女人；

    refs and see also

    -   [你不懂此片，不懂青春，也不懂日本女人 (千年女优 影评)](https://movie.douban.com/review/4458206/)

![](http://ww1.sinaimg.cn/mw690/005CNqf4jw1f2zfe2mcytg3046046abb.gif) -<

-   Q: 现在的很多保健品保健器材把不少中老年人吃的死死的，而绝大多数年轻人压根不信
    这一套，那么等过四五十年，这一代年轻人老了以后，会有什么新的骗术产生？
-   A: "爹，说过多少次这种降糖仪全是骗人的！" "可它是 EVA 限量版！"

[海外VPS测试概述 – 程序猿__int64Ago](https://int64ago.org/2015/12/20/%E6%B5%B7%E5%A4%96VPS%E6%B5%8B%E8%AF%95%E6%A6%82%E8%BF%B0/)

![`ag`{.bash} vs `pt`{.bash}](http://whudoc.qiniudn.com/2016/agvspt.png)

[密码检查器：使用强密码 | Microsoft 安全](https://www.microsoft.com/zh-cn/security/pc-security/password-checker.aspx)

[什么是“中国”——从准格尔汗国说起(转载)_煮酒论史_天涯论坛](http://bbs.tianya.cn/post-no05-188778-1.shtml)

[Egypt closes 27,000 places of worship - Al-Monitor: the Pulse of the Middle East](http://www.al-monitor.com/pulse/originals/2015/03/egypt-endowments-decision-close-worship-places.html#)

["你的最大问题，就是写得太少，想得太多“【... 来自程序员邹欣 - 微博](http://weibo.com/1912273717/DrbOmqq74?from=page_1005051912273717_profile&wvr=6&mod=weibotime&type=comment){.heart} -<

:   不想去实践的人，永远都有借口不实践。他会怪社会、父母、学校等等。二十年前我
    们学汇编语言，一周只有一个小时“上机”时间。那时候谁也没有计算机。我是先在笔
    记本上写指令，到时候用最快的速度敲进去。前后写了有近一百页的汇编程序。然后
    到处蹭机器，Turbo C, Pascal, Delphi, C++, Visual C++，MCAD, Mathematica,
    Matlab，前两年学了无数有用没用的语言和工具。96 年以后计算机多起来了，写各种
    小程序解决自己的小问题，然后自己找老师做科研项目，也写了上万行代码。计算机
    专业，本科毕业甚至硕士毕业，代码都撸不好还振振有词的，只能说是太不热爱自己
    的专业了！

    **这是一个自我驱动的问题，有强烈意愿实现自己想法的程序员动手能力都不会差**

    想起毕业那年，96 年吧，有些计算机病毒连 KV300 都杀不掉，要学汇编清除磁盘分区表

    **话说计算机算是实践最简单的专业了。比电子方便多了。**

    最近在招 NLP 工程师。对于“科班出身”的新毕业生，痛感几点不足。一是**想的能力超越
    实践能力，各种深度学习名词能讲，代码能力很烂**。二是不懂为什么要用某些方法，
    不知道传统低成本方法。三是不知道哪怕做一件小事，方方面面配套的技术有哪些。
    **说到底，三者都是动手太少的缘故。**

    **“你的最大问题，就是写得太少，想得太多”**

    西瓜大丸子汤：人不可能没有痛苦。有创造力的人就会解决这些痛苦，不会等待别人
    给他创造机会。认识一位北大美女，本科没毕业就写了十多万行代码了。//@--北城柳
    絮飞:关键是在学校里没有能够动手实践的机会呀。

    **动手能力的核心驱动，是好奇心。**也遇到过刚毕业的，甚至大学都没上过的，代码撸
    了无数，写起来行云流水。因为好奇心，他遇到不爽的事就要想办法动手解决，遇到
    不明白的就心痒难耐。这和在不在大公司工作过真没关系。

    【建议每三年换一次工作】一种观点：“在同一公司待超过 2 年，少赚 50%”。“若没有每
    三年换一次工作，找工作的技能退化，越来越难换工作了”。“常换工作的人工作中表
    现比较好，因为自知留不久，急于表现”。

    refs and see also

    -   ["你的最大问题，就是写得太少，想得太多“【... 来自程序员邹欣 - 微博](http://weibo.com/1912273717/DrbOmqq74?from=page_1005051912273717_profile&wvr=6&mod=weibotime&type=comment)
    -   [You Should Plan On Switching Jobs Every Three Years For The Rest Of Your Life | Fast Company | Business + Innovation](http://www.fastcompany.com/3055035/the-future-of-work/you-should-plan-on-switching-jobs-every-three-years-for-the-rest-of-your-?utm_source=wanqu.co&utm_campaign=Wanqu+Daily&utm_medium=social)

[Sieve of Eratosthenes - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)

[图灵社区 : 阅读 : LinkedIn高级分析师王益：大数据时代的理想主义和现实主义（图灵访谈）](http://www.ituring.com.cn/article/75445){.heart} -<

:   **其实体会过编程的乐趣的人，不容易沉迷于游戏** ——因为前者是人设计规则，让机
    器照着做；后者是人跟着机器的规则动，有点儿像围栏里的牛一样——当然是前者更有
    意思。我从高一开始接触和自学 C++ 语言。在高中阶段经常逃课，跑回家写程序。好
    几位老师很担心，多次来家访。我也很惭愧，但是抵不住编程的诱惑。

    这里有我的恩师李思昆教授——三界“银河功臣”、文职一级（相当于武职的中将）。国
    防科大有一个“优异生”制度——选择基础好的本科生当研究生培养。我从大二开始成为
    优异生，进了教研室跟李老师学习计算机图形学（computer graphics）。

    我从小数学不好。在计算机领域选了图形学，是因为我以为这里数学简单。我的博士
    导师周立柱老师是数据库方面的专家，但是他“因材施教”，推荐我去微软亚洲研究院
    图形学组实习。但是和研究院汇聚的全国高校精英同学们比起来，我脑子反应慢，研
    究工作做的不够好，所以跟周老师又要了一个去城市大学学“有道理的”机器学习的机
    会。不料去了以后才发现身边的同学都是数学“童子功”，他们嘴里蹦出来的词儿我都
    闻所未闻。午饭时大家顺便聊点儿科学问题，我完全听不懂。于是陷入深深的自卑感
    里了，没有勇气面对困难，每天混吃等死。

    可是认输又觉得对不起周老师给的那么多研究机会。再想想既然中学时能自学大学课
    程，当下好歹也该试着突破一下困境吧。于是从高中数学课本开始看，一直看到机器
    学习专业的教材。然后能看懂论文，了解最新的研究成果。随后自己找了一个把机器
    学习和图形学结合起来的研究方向——用多个摄像头采集人的动作，让机器学习这些动
    作数据，从而能自动合成三维动画。全力投入一年半之后，我重新自学了数学课，而
    且在这个方向上发表了10篇论文。虽然今天完全看不上当时论文的水平了，但是刘老
    师很高兴邀我二进香港。

    对技术水平的孜孜以求，不仅弱化了传统产品经理的角色，也模糊了工程师和研究员
    的界限——每一个追求技术突破的工程师，都自然会去读论文，追踪技术前沿，也就成
    了研究员。那么研究员也就别自高自大地指望自己设计了算法交给工程师去实现了。
    因为这个原因，Google里虽然有研究员，但是没有研究院，而且研究员的考核成绩与
    论文专利没有关系，主要看对产品的贡献。

    几百年来中国的文化就强调竞争，流传下来的口号也很多，比如“吃得苦中苦，方为人
    上人”。为什么要做“人上人”呢？很大程度上是为了多吃多占吧。

    在国内的科技行业，尤其是大公司，有一种说法“三十岁之后就干不动技术了，要尽早
    转管理”。其实我也见过很多很早转管理，技术上不再长进，丧失了技术行业的核心竞
    争力，从而不得不留在大公司混派系的例子。

    其中对我影响最大的是 Lisp，是我的同学王垠教我的，让我接触了一点计算的数学本
    质。

    我很珍惜我的同事们，他们给了我很多帮助和提示；但没有刻意选择加入大牌公司。
    毕竟如吴军在《浪潮之巅》里说的，闪耀的牌子都在一波波的浪潮中过去了——今天毕
    业入行的人记得 Sun 的不多了，知道 DEC 的基本没有。

    我在择业时也有很多茫然不决的时候。但是我有个好榜样，是原来 Hulu.com 的
    engineering VP 张小沛。她对择业的建议很简练：“最重要的是知道自己要的是什么”。

    refs and see also

    -   [王益：分布式机器学习的故事 - 文章 - 伯乐在线](http://blog.jobbole.com/57027/)
    -   [LinkedIn 高级分析师王益：大数据时代的理想主义和现实主义 - 图灵访谈 - SegmentFault](https://segmentfault.com/a/1190000002416822)
    -   [wangkuiyi/lasso: LASSO is a parallel regression model learning system](https://github.com/wangkuiyi/lasso)

[如何保持正确的坐姿？ - 知乎](https://www.zhihu.com/question/23238816)

[HTML 代码片段 - 简书](http://www.jianshu.com/p/2f4910883192) -<

:   ```html
    <!--[ifIE6]>
    IE6版本有效
    <![endif]-->
    <!--[if gt IE6]>
    IE6以上版本有效
    <![endif]-->
    <!--[if gte IE6]>
    IE6（包含）及以上版本有效
    <![endif]-->
    <!--[if lt IE8]>
    IE8以下版本有效
    <![endif]-->
    <!--[if lte IE8]>
    IE8（包含）及以下版本有效
    <![endif]-->
    <!--[if !IE]>-->
    除了IE
    <![endif]-->
    ```

    响应式 Meta `<meta name="viewport" content="width=device-width, initial-scale=1">`{.html}

    ```html
    <meta name="robots" content="noindex">
    <meta name="googlebot" content="noindex">
    <input name="q" type="text" autocomplete="off"/>
    ```

[fletcher/MultiMarkdown: Expanded perl version of John Gruber's original Markdown --- No longer under active development since MMD 3](https://github.com/fletcher/MultiMarkdown)

[为什么面试总喜欢考算法题？ - V2EX](https://www.v2ex.com/t/214579#reply28){.heart}

[如何评价崔永元在复旦大学与复旦生科院卢大儒教授就转基因问题的激烈争辩？ - 知乎](https://www.zhihu.com/question/29072461) -<

:   张江狗实名支持

    我一直相信人类会对表现出过人的智慧和非凡的勇气的的人心生敬佩。然而现实却是，
    大家听着科学家给你讲道理昏昏欲睡，听到“棉谷升”一两个阴险的陷阱却变得兴奋异
    常、掌声雷动。**所以漂亮话就是智慧，所以调戏就是勇气。**漂亮话可以调戏科学、
    政治可以凌驾于科学、“信息控制学”还可以控制科学。对不起，我错了，我“姿势水平
    不够，图样图僧破，上汤拿逸夫”了。

    你诉诸科研共同体，他不承认（还捏造出一个子虚乌有的新闻共同体）；你讲科研和
    实验，他讲伦理和知情权（这确实很重要，但和科学本身不是一回事）；你说一个专
    家的名字，他也说一个专家的名字（也许根本没人听说过，但急切之间谁会分辨）。
    趁你不注意，他还突然考你一两个精心预备的细节，若你一不小心应对失误，那就更
    加被动啦。

    结合崔永元那句“我们新闻共同体认为你们科学共同体才是最不靠谱的”和现场的反应
    说两句。

    中国的科学虽然起步晚，基础差，且受到社会动乱等因素的影响。但如今取得的成就，
    尤其是在所讨论的生物学和转基因领域，已经是毋庸置疑的世界领先，乃至顶尖水平。
    科技发展给大家生活带来的变化，也无需赘述了吧。

    反观国内的“新闻共同体”呢？你们展现出来的水准是怎样的？你们的口碑又是如何？
    排除新闻管制和制度因素，你们的职业水平和操守又是如何？

    我就想问问崔永元先生，你是何等厚颜无耻，才能代表“新闻共同体”，说出这样的话？

    请崔永元先生清醒一点，科学的进步靠的是踏实的实验和缜密的逻辑分析，而不是打
    嘴炮和胡搅蛮缠。而你作为一个公众人物和新闻界的旗帜和标杆，也不要晚节不保，
    更不要再给新闻共同体抹黑。

    而在场的诸位哄笑的新闻共同体的未来们，请你们能在大学学到新闻从业者最基本的
    思辨能力和职业素养，以崔永元先生为戒，努力为你们的共同体争光吧。

    至于崔先生，我仍在疑惑，广电总局为何不禁止患有心理或精神疾病的人员从事公众传媒。

    -   举凡辛苦攀登之后的所见所闻，未曾付出同样辛苦的人总是很难理解。
    -   山峦之上未必就是一览众山小，也可能只是得以一窥更加高耸的群山而已。

    谦虚不是习得的品德，是认识到自身渺小无知的正常反应。

    -   第一，你觉得清华北大的学生优秀是因为他们比你身边的人水平高，清华北大的人不觉
        得自己优秀是因为他们认识很多比他们水平高的人。平台不同，参照物不一样。
    -   第二，知识越多越觉得自己无知。

    总有那么点经不起推敲，并且是明眼人一看就明的那种。

    马克斯·普朗克于 1918 年荣获诺贝尔物理学奖，之后他在全德国作巡回报告。不管被
    邀请到哪里，他都会就新的量子力学演讲一番。他的司机渐渐对他的报告烂熟于心。
    “普朗克教授，老作同样的报告，你一定觉得无聊。我建议，在慕尼黑由我代你作报告，
    你坐最前排，戴上我的司机帽。让咱俩换换花样。”普朗克兴致盎然，欣然同意。于是
    司机为一群专家级听众作了一番有关量子力学的长篇报告。之后，一位物理学教授举
    手提问。司机回答说：“我压根儿没想到，在慕尼黑这样先进的城市里还会有人提出这
    么简单的问题。请我的司机来回答这个问题吧。”

    查理·芒格是全球最优秀的投资家之一，普朗克的故事我就是从他那里听来的。他认为知识
    有两种：一种是真知识，来自那些投入大量时间和思考以获得知识的人们；另一种就是司
    机的知识，按芒格故事里的意思，司机是指那些装得好像他们知道的人。他们会模仿别人
    表演，他们也可能拥有动听的声音或具有说服力的形象。但他们传播的知识是空洞的，他
    们高谈阔论地挥霍着华丽词汇。

    可惜越来越难将真知识与司机的知识区分开来。在新闻播音员身上还算简单，他们是
    演员，仅此而已。这一点人人都知道。但人们对这些“套话大师”是那么尊敬，这一点
    让人讶异不已。人们付给他们很多钱，邀请他们主持他们几乎力不从心的调查和访谈
    节目。

    这种区分在记者身上就困难一些。他们中的有些人确实掌握着扎实的知识，多是学习了很
    长时间的学生，或是那些长年专门研究某个领域的记者。他们真正努力理解和描绘一个复
    杂的事实。他们倾向于长篇大论，阐明多个事件和例外。

    可惜多数记者都属于司机范畴。他们变魔术似的会在最短的时间内从帽子里变出任意一篇
    内容的文章，或者，说得更准确些——从互联网里。他们的文章只有一页，简短、诙谐，经
    常是作为他们的司机知识的补偿。一家企业越大，人们就越期望它的首席执行官具有表演
    才能——所谓的交际能力。一个安静、固执但可靠的创造者是不行的，至少不能担任最高领
    导。股东和经济记者们显然相信，一个擅长宣传的人会带来更好的结果——实际上当然不是
    这么回事。

    查理·芒格的合作伙伴沃伦·巴菲特使用了一个美妙的概念：“能力范围”。在这个范围之内
    的，人们都像专家一样精通；在这个范围之外的，就不懂或只懂一部分。巴菲特的生活信
    条是：“请认清你的能力范围，并待在里面。这个范围有多大，并不重要。重要的是知道这
    个范围的界线在哪里。”查理·芒格重复说：“你必须找出自己的才能在哪里。我几乎可以向
    你保证，如果你必须在你的能力范围之外碰运气，你的职业生涯将会非常糟糕。”

    结论：请你不要信任司机的知识。请你不要将公司新闻发言人、爱出风头的人、新闻播音
    员、唠叨鬼、花言巧语者、爱说闲话的人与一个真正有知识的人搞混。你怎么能区分出来
    呢？这里有个明确的信号。真正有知识的人知道他们知道什么，也知道他们不知道什么。
    这类人一旦来到他的“能力范围”之外，他要么什么也不说，要么就说“我不知道”。他这么
    说时不会觉得难为情，甚至还会带着一定的骄傲。而从"司机们”那儿，你别的什么话都能
    听到，就是听不到这一句。

    --- 《清醒思考的艺术》[德]罗尔夫·多贝里

    **媒体人的问题不在于他们有了太多良心而掌握太少知识。
    而在于他们往往认为前者是可以代替后者的。**

    **用爱发电！**

    对以量化演绎和数理统计为支撑自然科学缺乏最起码的敬畏，对最前线的科研人员缺乏最
    起码的理解，对东道主缺乏最起码的尊重。跑到人家的地盘用自己完全没有数据支撑过家
    家般的理论大言不惭地去羞辱专注该领域多年的教授。我只能说，崔成功地把卢的智商拉
    到了他的水平然后用丰富的口活儿击败了他。

    **浮辞非贬，窃非所惧。**

    (为了明辨是非, 愿意拿出明显的证据来相互讨论，来核查真实的道理。至于那些捕风
    捉影无根据的贬斥，他丝毫也不惧怕。)

    又想起牛顿刚刚创立微积分的时候，因为理论极为不完善，甚至连无穷大（小）量的存在
    性都是问题，其本人也备受非议。教皇为此特意给牛顿捎了一句话，现在我把这句话献给
    各位科研前线的斗士们：

    >   向前走吧！你将更加自信！！！

    理论不完善那是修补匠的事情，为于世者，能筑者筑，能实壤者实壤。结构工程师何必要
    懂装潢！！你问我拱门的瓷片什么颜色贴一块儿会搭，我说不知道。你说工程师居然不懂
    造房子！！**劳资只懂塌不塌，你问劳资搭不搭，劳资搭你妈逼！！**逗我呢！！

    所以呢：

    **小丑还在跳，傻逼还在闹**，可是我们明天的实验还得接着做下去。

    什么？修正主义？走资派？你把我的实验记录还给我，你说是就是吧。

    不仅丢了新院的脸，**还丢了小米用户的脸**。

    refs and see also

    -   [崔永元 复旦大学转基因讲演问答环节完整版（51分钟+）—在线播放—优酷网，视频高清在线观看](http://v.youku.com/v_show/id_XOTIxNTI4MjY0.html)
    -   [如何看待崔永元表示“转录了七个基因”是在反讽方舟子？ - 生意库](http://www.kb2b.net/zhihu/29090369.html)

[关于编程的胡扯 - 陈梓瀚(vczh) - 博客园](http://www.cnblogs.com/geniusvczh/archive/2012/06/22/2558407.html) -<

:   在这之前，刚好 MSR 的 Daan Leijen 因为来北京参加 programming language 相关
    的 conference，就来我们这里参观了一下。后来我看他做过 GUI，做过 parser
    combinator，发明实现过语言，就前去搭讪，结果发现他读书的时候的导师竟然是
    Erik Meijer。按照他的话说，“then we are connected”，如果说成中文，就是有缘
    分吧。接着就跟他讨论了一些 parser combinator 和类型系统之类的东西。我说我之
    前也搞过这些东西，最后还贡献了一部分给公司，换了个组之后还开了讲座什么的。
    他讲到他读书的时候，也是学校没教自己自学的这些东西，后来周围也没什么人做，
    但是并没有让他丧失动力。然后就说了一句话让我印象很深刻：“原来你也做这些东西
    啊，我应该可以看到为什么你要从产品组跳到 MSRA 来了。”他直到今天，头发都基本
    上掉光了，还在那里继续研究programming language 的东西，还给了我几篇论文。我
    觉得很好，人就该像他那样。

    重写我的一些 idea 上面了。譬如说编译器就写了五六个，GUI 库就写了八遍，还有
    些杂七杂八的。不过从这个过程之中，可以明显感觉到自己什么时候比以前更进一步。这
    种 signal 有很多，譬如说当你决定要添加一个比较复杂的功能，也可以迅速知道怎么做
    而不用动到架构啦；譬如说你觉得你的代码越来越顺眼啦；譬如说你因为架构不行决定重
    写的时候，你发现前一个版本的代码可以捡起来继续用的部分越来越多啦。

    写到这里，我想起很多人都问过我，程序要怎么写才能写得好，或者说设计模式要怎
    么写，之类的问题。如果把学习编程花费的精神代价做标准的话，捷径是没有的。但
    是如果仅仅把时间作为标准的话，捷径显然是有的。**怎样才能加速你学习的过程呢？
    答案就是，先写再看书。对于像编译原理这种略微高深的知识，总要自己写过几遍，
    吃了一些苦头，才能知道为什么书里非要把算法那么设计结构那么安排。**对于像设
    计模式这种需要大量经验才可以领悟到的知识，**如果你从来没独立写过一个上万行
    的程序，你觉得你能理解设计模式在讲什么吗？**我觉得这种时候能做的也就是背下
    来，理解什么的都是扯淡。诸如此类，学习程序，如果要加速那个过程，肯定要花大
    量的时间写代码。当你把项目做得越大、越复杂、算法越扭曲、界面越华丽、尺寸已
    经大到你觉得不学习新的方法论就肯定会让代码失控的时候，这个时候你来看设计模
    式的书，保证是每**看到一个模式都觉得人家说到你心坎里去了**。那你不仅可以迅
    速理解，而且以后还可以不由自主的想起来使用它。

    学生做这个最方便了，工作之后，如果刚好遇上个黑心公司要你天天加班，你反而没
    时间做学习区的内容了，公司给你的肯定是舒适区的苦力活。

    说到这里，如果你还有时间练习的话，千万不要去想：“我每一个程序都要跨平台”，“
    我只做这个语言”等等。反正将来，语言你都要会，平台的差异你都要知道，为什么要
    断送自己了解这些东西的机会呢？你真的以为不知道垃圾收集的原理，和一些底层的
    可以通过 C++ 的练习而得到的的操作，你真的可以在某些关键时刻操纵好 C# 吗？当
    然有些人会觉得，我估计一辈子不会遇到这些问题的，所以我还是不管他了。人各有
    志嘛，C# 不渡你，也是你自己的事情。如果你真的可以一辈子都在一个平台上用一种
    语言做同一种程序做到退休，那真是幸福的生活啊。

    refs and see also

    -   [进入 2012 -- 回顾我走过的编程之路 - 陈梓瀚 (vczh) - 博客园](http://www.cnblogs.com/geniusvczh/archive/2011/12/16/2290808.html)

[有多少程序员后悔英语没学好？或者庆幸学好了? - 知乎](https://www.zhihu.com/question/27867216) -<

:   英语想要投入日常生活中使用还是比较难的，不过幸好有声称“我 6 级差点就到 600”的
    老婆，我实在听不懂就让她弄，啊哈哈哈。

[CoCo - A Python Virtual Machine](http://knuth.luther.edu/~leekent/CoCo/)

[Microsoft/ChakraCore: ChakraCore is the core part of the Chakra Javascript engine that powers Microsoft Edge](https://github.com/Microsoft/ChakraCore)
