---
title: Algorithms
...

Algorithms
==========

>   同样动作重复 300 次，肌肉就会有记忆，而一个动作重复 600 次，脊椎就会有记忆。
>
>   --- 李小龙

ASCII table -<

:   ```
                             +------------------------------------------+
                             |  SP      "               &   '   (   )   |
                             |  )   !   @   #   $   %   ^   &   *   (   |
                             |  0   1   2   3   4   5   6   7   8   9   |
                             +--|---------------------------------------+
                                |
                                |                                           aqaq @ grave
      0         16      32      |48     64      80     96       112
                                |       阿      卡       琳      酱
      NULL     DEL      SP     [0]      @       P       `       p           |   <-------------- 0
                         !      1       A       Q       a       q           |   <-------------- 1
                         "      2                                           |   <-------------- 2
                         .      .                                           |   <-------------- .
    ------------------------------------------------------------------------+
        0       1       2       3       4       5       6       7
    ```

    ![](http://whudoc.qiniudn.com/ascii.png)

TODOs:

-   rewrite UFS.c in C++: union, find, init.

## 0.

[我的算法学习之路 - Lucida](http://lucida.me/blog/on-learning-algorithms/) -<

:   基友在人人发百度实习内推贴，当时自我感觉牛逼闪闪放光芒，于是就抱着看看国内 IT 环
    境 + 虐虐面试官的变态心理投了简历，结果在第一面就自己的师兄爆出翔：他让我写一个
    `stof`（字符串转浮点数），我磨磨唧唧半天也没写出完整实现，之后回到宿舍赶快写了一
    个版本发到师兄的邮箱，结果对方压根没鸟我。

    这件事对我产生了很大的震动——

    -   原来自己连百度实习面试都过不去。
    -   原来自己还是一个**编程弱逼**。
    -   原来自己还是一个**算法菜逼**。

    我也很 happy，因为没想到自己写的库居然比 MS 的还要快几十倍，同时小十几倍。

    从这个事情之后我变得特别理解那些造轮子的人——你要想想，如果你需要一个飞机轮子但
    市场上只有自行车轮子而且老板还催着你交工，你能怎么搞。

    实习实习着就到了研二暑假，接下来就是求职季。

    求职季时我有一种莫名的复仇感——尼玛之前百度实习面试老子被你们黑的漫天飞翔，
    这回求职老子要把你们一个个黑回来，尼玛。

    现在回想当时的心理实属傻逼 + 幼稚，但这种黑暗心理也起了一定的积极作用：我丝毫不敢
    有任何怠慢，以至于在 5 月份底我就开始准备求职笔试面试，比身边的同学早了两个月不止。

    我没有像身边的同学那般刷题——而是继续看书抄代码学算法，因为我认为那些难得离谱的
    题面试官也不会问——事实上也是如此。

    **编程珠玑** & 更多的编程珠玑

    没听说过这两本书请自行面壁。前者偏算法理论，后者偏算法轶事，前者提升能力，
    后者增长谈资，都值得一读。

    证明简单代码段的正确性是一个很神奇的技能——因为面试时大多数公司都会要求在纸上写
    一段代码，然后面试官检查这段代码，如果你能够自己证明自己写的代码是正确的，面试
    官还能挑剔什么呢？

    之后就是各种面试，详情见之前的博客，总之就是**项目经历**、**【纸上代码】**加
    **【正确性证明】**这三板斧，摧枯拉朽。

    MIT 教授 Erik Demaine 则更为直接：

    >   **If you want to become a good programmer, you can spend 10 years
    >   programming, or spend 2 years programming and learning algorithms.**

[9 个 offer，12 家公司，35 场面试，从微软到谷歌，应届计算机毕业生的 2012 求职之路 - _Luc_ - 博客园](http://www.cnblogs.com/figure9/archive/2013/01/09/2853649.html) -<

:   外企（Google、MS、Yahoo 等）>国内互联网（阿里、腾讯、百度、网易等）>企事业单位（基本不考虑）

    我的微软 mentor 曾提到过，我的实习面试表现一般，但后来表现出的动手能力大大
    超出之前面试的预估，而有些面试表现很出色，问题对答如流的选手，入职之后反而
    不是很理想，至少没有达到面试时发挥出的水准。

    这说明一个问题，就是**笔试面试，准备和不准备会差异很大**。如果你的简历不是
    那么 NB，那就只能靠笔试和面试的加分撑场面。身边经常有同学纳闷这样代码都编不
    利索的傻屌都能进 MS 为什么我不能进，答案往往很简单：人家比你多准备了一个月。
    平时电脑上写程序可能很利索，笔试面试时在纸上写写试试你就知道什么叫拙计。

    IT 公司的笔试和面试的题量都不大（相对于企事业单位和银行动辄上百道选择题的题
    量，算是很少），一般十几道选择题，三四道大题就算题量很大。但计算机的东西实
    在又是太多，程序设计、数据结构、算法设计、操作系统、体系结构、编译原理、数
    据库、软件工程等分支，编译的话太难（一千个码农里也没几个人能在纸上写一个最
    基础的递归下降 LLParser），软件工程、体系结构、数据库这些太水（不是说这些分
    支没用，而是它们很难考察，尤其对应届生来说这些都是些文字游戏，比如说面向对
    象的三要素五原则，有个鸟用），这么一排除，再把数据结构和算法设计一合并，就
    剩下**程序设计**、**算法**和**操作系统**。没错，这三项搞定，国内外 IT 公司
    通杀。

    **Tips**

    -   重温之前自己做过的靠谱项目，并总结里面的关键难题和解决思路
    -   重读 Programming Pearls 和 More Programming Pearls，并完成所有课后题
    -   独立解决编程之美里面的题目（国内不少企业选题用的这本书）
    -   完成 Careercup 里 Amazon、Google 和 Microsoft 这三个分类下面的前 20 页面试题
    -   完成 TopCoder 的数十道 D1L2~D2L1 难度区间的算法题目
    -   重读 Computer Systems a Programmer's Perspective 的关键章节，回顾里面的关键点

    从七月底开始一直到十一月，花了接近四个月，很多东西都是一边面试一边准备：
    **面试->发现盲点->修复盲点**。

    简历

    -   篇幅。控制在一页以内。倒不是说不能写两页，而是 HR 没时间看两页这么多。
        而且就我看过的几百封简历而言，凡是超过两页的没一个靠谱，有这么高的先验
        概率，HR 才没工夫一个个筛，反正中国有的是人。
    -   重点。一定要有重点，做到让 HR 通过简历在 20 秒内确定你靠不靠谱。可以用
        加黑字体进行视觉引导。
    -   别字。千万不要出现错别字，别字简历一般直接干掉。一页的简历都能出问题，
        一般不会靠谱。

    但是研发的算法题是一样的，最后一道算法题很有意思，我花了一个多小时才想到利用组
    合数学里面的知识（多元一次方程非负解）给出设计方案，后来和面试官聊这道题时他们
    也挺吃惊，因为我的方案比他们的答案还要优化。

    微软：

    -   题型只有**二十道不定项选择题**，难度较难，要求在一小时四十分钟完成。难
        度较难，覆盖面非常广，从设计模式，算法分析，代码阅读到 C++ 语言特性，甚
        至连冷门的函数式程序设计语言都有涉及。
    -   微软的笔试题目 BT 之处在于其独特的积分机制：答对了加分，不答无分，答错
        了倒扣。这就使得很多 ds 答完试卷感觉自我良好但实际已经被倒扣出翔。以最
        后一道题为例，答对了加 7 分，答错倒扣 13 分，相当于一下子损失 20 分。所
        以微软的笔试题会做就得做对，不会做就别蒙，要不更惨。
    -   此外，微软的笔试题是英文的，加上时间比较短，有些人题都读不完，有些 ds
        连 functional language 是什么都不知道，自然败的很惨。

    从笔试题可以明显看出，国外的大型 IT 公司（比如雅虎，微软和谷歌等）并不在意你现在
    的 skill set，而更看重你的 potential，因此题目大多很基础，并具备相当的深度，以确
    保你对 CS 有深刻的理解并能够走的很远；而国内的 IT 公司（比如百度、搜狗和人人等）更
    看重你现在的 skill set，因此会出现不少语言特性，OS 操作之类的具体题目，以确保你能
    够以尽快的速度上手干活，至于能发展到啥程度他们就不 care 了。

    考虑到几乎所有的公司都有编程题目，也就是在纸上写代码，这里推荐几本相关书籍：

    -   1 **Elements of programming style** 2nd，写出良好风格的代码。纸上代码一
        般不长，但短短几行代码往往可以看出这个人的水准，风格很差的代码往往会被
        pass 掉。
    -   2 **Algorithm design manual** 2nd，作为非 ACM 出身的码农，这本书比算导
        实用很多，课后题也很实在，对回溯，动态规划这些编程技巧讲的非常清楚。
    -   3 **C interfaces and implementation**，无论是面试还是笔试，一般都会用 C
        写程序，这本书包含大量的工业级 C 代码，绝佳的参考和模仿素材。

    最后推荐下 Elements of programming 和 Structure and interpretation of
    computer programs，这两本书难度很高，需要大量的时间阅读，不适合临场阅读准备，
    但读过后，写出的代码绝逼会上两个层次，这里我就不多介绍了。

[白板编程浅谈——Why, What, How - Lucida](http://lucida.me/blog/whiteboard-coding-demystified/){.heart} -<

:   技术面试中的问题大致可以分为 5 类：

    -   编码
          ~ 考察面试者的编码能力，一般要求面试者在 20 ~ 30 分钟之内编写一段需
            求明确的小程序（例：编写一个函数划分一个整形数组，把负数放在左边，零放
            在中间，正数放在右边）；
    -   设计
          ~ 考察面试者的设计/表达能力，一般要求面试者在 30 分钟左右内给出一个
            系统的大致设计（例：设计一个类似微博的系统）
    -   项目
          ~ 考察面试者的设计/表达能力以及其简历的真实度（例：描述你做过的 xxx
            系统中的难点，以及你是如何克服这些难点）
    -   脑筋急转弯
          ~ 考察面试者的『反应/智力』（例：如果你变成蚂蚁大小然后被扔进
            一个搅拌机里，你将如何脱身？）
    -   查漏
          ~ 考察面试者对某种技术的熟练度（例：Java 的基本类型有几种？）

    因为几乎所有的当面（On-site）技术面试均要求面试者在白板上写出代码，而不是在
    面试者熟悉的 IDE 或是编辑器中写出。

    为什么要进行白板编程（WHY）

    :   -   除了判定面试者的开发效率，白板编程还有助于展示面试者的编程思路，并
            便于面试者和面试官进行交流
        -   让面试者在解题的过程中将他/他的思维过程和编码习惯展现在面试官面前，
            以便面试官判定面试者是否具备清晰的逻辑思维和良好的编程素养
        -   如果面试者陷入困境或是陷阱，面试官也可以为其提供适当的辅助，以免面
            试陷入无人发言的尴尬境地

    什么是合适的白板编程题目（WHAT）

    :   下面是一些问滥的编程问题：

        -   编程之美 书里的所有题目；
        -   July 的算法博客 中的绝大多数题目（包括 面试 100 题 中的所有题目）；
        -   leecode 里的大部分题目；

        需要注意的是，尽管过于直接的算法题目不适合面试，但是我们可以将其进行一
        点改动，从而使其变成合理的题目，例如稳定划分和二分搜索计数（给出有序数
        组中某个元素出现的次数）就不错，尽管它们实际是快速排序和二分搜索的变种

        这些题目往往要求面试者拥有极强的算法背景，尽管算法问题是否过于复杂因人而异

        -   需要 aha! moment（参考 脑筋急转弯）
        -   需要使用某些『非主流』数据结构/算法才能求解
        -   耗时过长（例如实现红黑树的插入/删除）

        应该问什么问题

        -   不止一种解法 -<

            :   良好的编程问题都会有不止一种解法。这样面试者可以在短时间内给出
                一个不那么聪明但可实现的『粗糙』算法，然后通过思考（或面试官提
                示）逐步得到更加优化的解法，面试官可以通过这个过程观察到面试者
                的思维方式，从而对面试者进行更客观的评估。

                以【数组最大子序列和】为例，它有一个很显然的 O(n3) 解法，将 O(n3)
                解法稍加改动可以得到 O(n2) 解法，利用分治思想，可以得到
                O(nlogn) 解法，除此之外它还有一个 O(n) 解法。（编程珠玑 和 数
                据结构与算法分析 C 语言描述 对这道题均有非常精彩的描述，有兴趣的
                朋友可以自行阅读）

        -   考察点明确

        -   延伸问题

            :   良好的编程问题应拥有延伸问题。延伸问题既可以应对面试者背题的情
                况，也可以渐进的（Incremental）考察面试者的编程能力，同时还保证
                了面试的延续性（Continuity）。

    如何进行白板编程（HOW）

    :   面试者应该做什么

        -   面试前 :hearts:

            -   拥有扎实的数据结构/算法基础
            -   知道如何利用 **前条件/不变式/后条件** 这些工具编写正确的程序
            -   能够在白板（或纸上）实现基本的数据结构和算法（如果 1 和 2 做到
                这一步是水到渠成）
            -   **在 leetcode 或 careercup 上面进行过练习，了解常见的技术面试题目
                （我个人不鼓励刷题，但在面试前建立起对面试题的『感觉』非常重要）**

        -   面试中

            -   理解题目，**确认需求**

            -   使用实例数据**验证** (testing is important) 自己的程序 -<

                :   ```cpp
                    Given range [2, 3, 4, 5, 1] and pivot 3

                    [ 2, 3, 4, 5, 1 ]
                      ^             ^
                     p,b            e

                    [ 2, 3, 4, 5, 1 ]
                         ^          ^
                        p,b         e

                    [ 2, 3, 4, 5, 1 ]
                         ^  ^       ^
                         p  b       e

                    [ 2, 3, 4, 5, 1 ]
                         ^     ^    ^
                         p     b    e

                    [ 2, 1, 4, 5, 3 ]
                            ^     ^ ^
                            p     b e

                    [ 2, 1, 4, 5, 3 ]
                            ^       ^
                            p      b,e

                    Now we have all [0, p) < 3 and all [p, e) >= 3
                    ```

            -   他们在面试时会自带一根细笔迹的水笔，专门用于白板编程。

        不会做怎么办

        -   至少先给出一个暴力（Brute force）解法
        -   寻找合适的数据结构（例如栈 / 队列 / 树 / 堆 / 图）和算法（例如分治 / 回溯 / 动
            态规划 / 贪婪）
        -   从小数据集开始尝试
        -   如果还是没有头绪，重新考虑题目的前条件，思考是否漏掉了条件（或是隐
            含的条件）
        -   如果 3 分钟过后还是没有任何思路，请求面试官提示，不要觉得不好意思——
            经过提示给出答案远强于没有答案

    个人不建议面试者在面试之后把题目发到网上，很多公司在面试前都会和面试者打招
    呼，有的会签订 NDA（Non Disclosure Agreement）条款以确保面试者不会泄露面试
    题目。尽管他们很少真的去查，但如果被查到那绝对是得不偿失。

    我自己在面试之后会把面试中的编程题目动手写一遍（除非题目过于简单不值得），
    这样既能够验证自己写的代码，也可以保证自己不会在同一个地方摔倒两次。

    |   东瀛修炼绝世武功（在校刻苦学习技术）；
    |   远赴中原挑战群雄（即将毕业开始求职）；
    |   拔剑削枯枝作战书（撰写简历进行面试）；
    |   惊动中原第一高手（简历 / 面试得到赏识）；
    |   海上决战名扬天下（得到 Offer 搞定工作）。

[知其所以然（以算法学习为例）](http://mindhacks.cn/2008/07/07/the-importance-of-knowing-why/) -<

:   徐宥在讨论中提到，这种策略的本质可以概括成“让未知世界无机可乘”。它是没有“弱
    点的”，答案的任何一个分支都是等概率的。反之，一旦某个分支蕴含的可能性更多，
    当情况落到那个分支上的时候你就郁闷了。比如猜数字游戏最糟糕的策略就是一个一
    个的猜：是 1 吗？是 2 吗？… 因为这种猜法最差的情况下需要 64 次才能猜对，下
    界非常糟糕。二分搜索为什么好，就是因为它每次都将可能性排除一半并且无论如何
    都能排除一半（它是最糟情况下表现最好的）。

    如何称的指导原则有了，构造一个称的策略就不是什么太困难的事情了。首先不妨解
    释一下为什么最直观的称法不是最优的——6、6 称：在 6、6 称的时候，天平平衡的可
    能性是 0。刚才说了，最优策略应该使得天平三种状态的概率均等，这样才能三等分
    答案的所有可能性。

    在堆排里面有大量这种近乎无效的比较，因为被拿到堆顶的那个元素几乎肯定是很小
    的，而靠近堆顶的元素又几乎肯定是很大的，将一个很小的数和一个很大的数比较，
    结果几乎肯定是“小于”的，这就意味着问题的可能性只被排除掉了很小一部分。

    这就是为什么堆排比较慢（堆排虽然和快排一样复杂度都是 O(NlogN) 但堆排复杂度
    的常系数更大）

    本来呢，MacKay 写那篇文章是想用信息论来解释为什么堆排慢，以及为什么快排也慢
    的。MacKay 在他的文章中的解释是，只有提出每种答案的概率都均等的问题，才能获
    得最大信息量。然而，仔细一想，其实这里信息论并不是因，而是果。这里不需要用
    信息论就完全能够解释，而且更明白。信息论只是对这个解释的一个形式化。

    >   另外，这几天我重新把 TAOCP 第三卷 (第二版) 翻出来看了看 Knuth 怎么说这
    >   个问题的, 发现真是牛大了：
    >
    >   先说性能：
    >
    >   pp148, section 5.2.3 说：
    >
    >   When N = 1000, the approximate average runiing time on MIX are
    >
    >   -   160000u for heapsort
    >   -   130000u for shellsort
    >   -   80000u  for quicksort
    >
    >   这里,  Knuth 同学发现一般情况下 heapsort 表现很不好. 于是，在下文他就说，
    >   习题 18 (pp156, 难度 21)
    >
    >   (R.W.Floyd) During the selection phase of heapsort, the key K tends to
    >   be quite small, so that nearly all the comparisons in step H6 find
    >   K<K_j. Show how to modify the algorithm so that K is not compared with
    >   K_j in the main loop of the computation, thereby nearly cutting the
    >   average number of comparisons in half.
    >
    >   答案里面的方法和 DMK 的方法是一样的。(我觉得 DMK 是看了这个论文或者
    >   TAoCP 的) 这里说 by half，就正好和快排差不多了。
    >
    >   再说信息论分析：
    >
    >   在 5.3.1 (pp181) 高爷爷就说, “排序问题可以看成是一个树上的鸟儿排排站的
    >   问题. (还特地画了一棵树), 下一段就说, 其实这个也有等价说法, 就是信息论,
    >   我们从称球问题说起…”
    >
    >   然后后面一直讲信息论和最小比较排序…

    高爷爷真不愧是姓高的，囧 rz..

    refs and see also

    -   [数学之美番外篇：快排为什么那样快](http://mindhacks.cn/2008/06/13/why-is-quicksort-so-quick/)
    -   [知其所以然（三）：为什么算法这么难？](http://mindhacks.cn/2011/07/10/the-importance-of-knowing-why-part3/)
    -   [数学之美番外篇：快排为什么那样快](http://mindhacks.cn/2008/06/13/why-is-quicksort-so-quick/)

## 1.

A Bit of Logic -<

:   --------------------------------------------------------------------------------------------------------------
    【Axiom】                                       【Signification】
    ------------------------------------            --------------------------------------------------------------
    **Associativity** (结合律) of addition          `u + (v + w) = (u + v) + w`

    **Commutativity** `[kə,mjuːtə'tɪvɪtɪ]`          `u + v = v + u`
    (交换律) of addition

    **Identity element** of addition                There exists an element 0 ∈ V,
                                                    called the zero vector, such that `v + 0 = v` for all v ∈ V.

    **Inverse elements** of addition                For every v ∈ V, there exists an element −v ∈ V,
                                                    called the additive inverse of v, such that v + (−v) = 0
    --------------------------------------------------------------------------------------------------------------


    XOR: either one, but not both

    ------------------------------------------------
    Symbol  Operator
    ------  ----------------------------------------
    `&`     bitwise AND

    `|`     bitwise inclusive OR

    `^`     bitwise XOR (eXclusive OR)

    `<<`    left shift

    `>>`    right shift

    `~`     bitwise NOT (one's complement) (unary)
    ------------------------------------------------

    refs and see also

    -   [Bitwise operation - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Bitwise_operation)
    -   [Bitwise operations in C - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Bitwise_operations_in_C)
    -   [Exclusive or - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Exclusive_or)
    -   [Linear algebra - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Linear_algebra)
    -   [Bit field - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Bit_field)

九章算法班/强化班 (JiuZhang) -<

:   >   没有报这个班（关键是穷 ==），但从这个列表（syllabus），可以制定自己的复习内容。

    （我把 ACM-Cheatsheet 和 AOAPC 两本书的内容整合过来了。） -<

    :   ACM-Cheatsheet -<

        :   ditched. have been merged into JiuZhang.

            -   chap2. Linear List
            -   chap3. String
            -   chap4. Stack and Queue
            -   chap5. Tree
            -   chap6. Searching
            -   chap7. Sorting
            -   chap8. Brute Force
            -   chap9. BFS
            -   chap10. DFS
            -   chap11. Divide & Conquer
            -   chap12. Greedy
            -   chap13. DP
            -   chap14. Graph
            -   chap15. Math Methods and Models
            -   chap16. Big Integer
            -   chap17. Functionalities

        aoapc-book -<

        :   ditched. have been merged into JiuZhang.

            **第一部分：语言篇**

            -   第 1 章，程序设计入门
            -   第 2 章，循环结构程序设计
            -   第 3 章，数组和字符串
            -   第 4 章，函数和递归

            **第二部分：基础篇**

            -   第 6 章，数据结构基础
            -   第 7 章，暴力求解法

            **第三部分：竞赛篇**

            -   第 8 章，高级算法设计
            -   第 9 章，动态规划初步
            -   第 10 章，数学概念与方法
            -   第 11 章，图论模型与算法
            -   第 12 章，高级专题

    Lessons for Whom?

    -   无算法基础，或算法基础薄弱，不系统
    -   希望求职 Facebook, Google, Linkedin, Airbnb, Uber 等硅谷知名企业
    -   面试经验少或无面试经验，不知道与面试官如何正确的沟通和展现自己
    -   网上练习题目那么多，不知道该从哪些题开始准备
    -   获取最新面试动向
    -   认识一起找工作的其他小伙伴

    D:\tzx\git\aoapc-book\aoapc-bac2nd\README.md

    :scissors: 2016/07/31 上午 9:30:00 1. Introducing Algorithm Interview && Coding Style【免费试听】 -<

    :   -   通过 strStr 这一道常见面试题讲解面试中的常见误区 -<

            :   用常规的循环来做的话，复杂度是 O(mn)，参考代码如下：

                ```cpp
                int strstr(char *str, char *sub)
                {
                    if ( !str || !sub) { return -1; }

                    int nstr = strlen(str);
                    int nsub = strlen(sub);
                    if ( nstr < nsub ) { return -1; }

                    int len = nstr - nsub;
                    int i,j;
                    for ( int i = 0; i <= len; ++i ) {
                        for ( int j = 0; j < nsub; ++j ) {
                            if ( str[i+j] != sub[j] ) {
                                break;
                            }
                        }
                        if ( j == nsub ) {
                            return i + 1;
                        }
                    }
                    return -1;
                }
                ```

                误区？：

                -   结果正确 v.s. 条理清晰
                -   代码风格
                -   分析、描述问题
                -   边界检查？
                -   难度？

                这个博客很好的说明了面试官的考察思路：

                [从武侠小说到程序员面试 - Lucida](http://lucida.me/blog/from-wuxia-to-programmer-interview/) -<

                :   回到程序员面试，大多数笔试/面试题目都可以在网上找到，而一些
                    公司在招聘时为了省事甚至直接到网上搜题，这就导致看似很高的
                    程序员面试门槛实际变的很低——得到一份还不错的工作并不需要花
                    一两年系统的学习计算机技术，而只需一两个月到leetcode、
                    CareerCup以及未名求职版刷题目。原本很有区分度的算法题目也变
                    的毫无价值——谁知道你是自己想出来的还是背出来的。就像轻功水
                    上漂，谁知道你是真的功力深厚，还是提前在水底打了暗桩。

                    接下来我会问面试者能不能改善它的可读性（Readability）: `input - 32` -> `input - 'a' + 'A'`

                    其实就是用 `'a' <= input && input <= 'z'` 替代 `input >= 'a' && input <= 'z'` ——
                    这个技巧源自于代码大全，代码大全里面专门有一节讲解如何编写可读的布尔表达式。从
                    这里我可以看出这些面试者都没有读过代码大全，考虑到代码大全几乎是程序设计的必读
                    书籍，我可以推断出这些面试者很可能没有阅读习惯，而不阅读的程序员一般都不会太出色。

                    接下来我会询问能不能进一步提升性能: table

                    如果面试者能提到他是从 C语言标准库 里面学到这个技巧，加10分 :–)

                    有的面试者会想到使用宏： `#define TO_UPPER(input) convert_table[input]`
                    这时我会询问宏的优点和缺点，以及在这里使用宏会不会有错误。
                    总之就是确定面试者确实理解宏，而不是从哪里（比如编程之美之
                    类的面试书籍）背了一个答案出来。

                    接下来，让我们回顾这道简单的题目都考察了哪些点：

                    -   函数的概念（而不是写在main里）;
                    -   缩进和命名（而不是拼音）；
                    -   使用可读的字面量（'a' - 'A'而非32）；
                    -   **API设计**（当to_upper接收到非小写字母字符应该返回什么
                        ？0？报错？还是返回原值？考虑到to_upper的应用场景是把一
                        个字符串中的小写字母转化为大写，返回原值显然更合理）；
                    -   **是否有阅读习惯**（至少可以看出你有没有认真的读过代码大全）；
                    -   是否读过C标准库源码（指出toupper数组实现的出处）；
                    -   数组的运用（使用转换表）；
                    -   了解宏，以及宏的危害（使用宏）；
                    -   是否背过这道题（在第一时间给出使用数组+宏的最优方案）；
                    -   EOF以及C标准库风格。

                    接下来我还会要求面试者测试这个函数并给出**测试**代码，这里恕不赘述。

                    我的答案是，排除对算法的盲目崇拜，因为这样的题目非常难出，
                    而且对面试官的要求又很高，所以绝大多数面试官都选择去网上搜
                    题目而不是自己出题这条捷径。殊不知这条捷径正是人才招聘失败
                    的源泉——优秀的程序员因为没有背题而被拒绝，而水平平平的“裘千
                    丈”们却因为背过题目而被录用，这些录用的“裘千丈”们又会用同样
                    的方式招聘下一批更加糟糕的“裘千丈”，讽刺至级。

                从面试者的角度来说，出题的目的？: **qualified.**

                -   tell them you are professional
                -   tell them you are smart
                -   tell them you match

                思路：

                -   可以用 bitmap
                -   可以排序，然后用 i，j 来判断。

                还可以用牛逼闪闪的 KMP 算法。

                KMP :hearts: -<

                :   KMP 算法是 Knuth、Morris 和 Pratt 在 1976 年发表的。它的基本思
                    想是，当出现不匹配时，就能知晓一部分文本的内容（因为在
                    匹配失败之前它们已经和模式相匹配）。我们可以利用这些信
                    息避免将指针回退到所有这些已知的字符之前。这样，当出现
                    不匹配时，可以提前判断如何重新开始查找，**而这种判断只取决于模式本身**。

                    推荐网上的几篇比较好的博客，讲的是部分匹配表 (partial match table) 的方法（即 next 数组）:

                    -   [字符串匹配的KMP算法 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2013/05/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm.html) -<

                        :   ![](http://image.beekka.com/blog/201305/bg2013050109.png)

                            移动位数 = 已匹配的字符数 - 对应的部分匹配值

                            ![](http://image.beekka.com/blog/201305/bg2013050110.png)

                            ![](http://image.beekka.com/blog/201305/bg2013050114.png)

                            ![](http://whudoc.qiniudn.com/2016/kmp-table.png)

                            "部分匹配"的实质是，有时候，字符串头部和尾部会有重复。比如，
                            "ABCDAB"之中有两个"AB"，那么它的"部分匹配值"就是 2（"AB"的长
                            度）。搜索词移动的时候，第一个"AB"向后移动 4 位（字符串长度 -
                            部分匹配值），就可以来到第二个"AB"的位置。

                            [字符串匹配的 Boyer-Moore 算法 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2013/05/boyer-moore_string_search_algorithm.html)

                            在一个字符串中找到第一个只出现一次的字符。如输入 abaccdeff，则输出 b。

                            ```
                                A   B   C   D   A   B   D
                                0   0   0   0   1   2   0

                            "部分匹配值"就是"前缀"和"后缀"的最长的共有元素的长度。以"ABCDABD"为例，
                            -   "A"的前缀和后缀都为空集，共有元素的长度为 0；
                            -   "AB"的前缀为 [A]，后缀为 [B]，共有元素的长度为 0；
                            -   "ABC"的前缀为 [A, AB]，后缀为 [BC, C]，共有元素的
                                长度 0；
                            -   "ABCD"的前缀为 [A, AB, ABC]，后缀为 [BCD, CD, D]，
                                共有元素的长度为 0；
                            -   "ABCDA"的前缀为 [A, AB, ABC, ABCD]，后缀为
                                [BCDA, CDA, DA, A]，共有元素为"A"，长度为 1；
                            -   "ABCDAB"的前缀为 [A, AB, ABC, ABCD, ABCDA]，后缀
                                为 [BCDAB, CDAB, DAB, AB, B]，共有元素为"AB"，长
                                度为 2；
                            -   "ABCDABD"的前缀为 [A, AB, ABC, ABCD, ABCDA, ABCDAB]，
                                后缀为 [BCDABD, CDABD, DABD, ABD, BD, D]，共有元素的长度为 0。

                                      |
                            BBC ABCDAB ABCDABCDABDE
                                ABCDABD
                                      |

                            BBC ABCDAB ABCDABCDABDE
                                    --
                                ABCDABD
                                --
                            ```

                    -   [KMP算法详解 | Matrix67: The Aha Moments](http://www.matrix67.com/blog/archives/115) -<

                        :   ```
                            i = 1 2 3 4 5 6 7 8 9 ……
                            A = a b a b a b a a b a b …
                            B = a b a b a c b
                            j = 1 2 3 4 5 6 7
                                          ^

                            i = 1 2 3 4 5 6 7 8 9 ……
                            A = a b a b a b a a b a b …
                            B =     a b a b a c b
                            j =     1 2 3 4 5 6 7
                            ```

                            预处理不需要按照 P 的定义写成 `O(m^2)` 甚至 `O(m^3)` 的。我们
                            可以通过 `P[1], P[2], …, P[j-1]` 的值来获得 `P[j]` 的值。对于
                            刚才的 `B="ababacb"`，假如我们已经求出了 `P[1], P[2], P[3]`
                            和 `P[4]`，看看我们应该怎么求出 `P[5]` 和 `P[6]`。`P[4] = 2`，那
                            么 `P[5]` 显然等于 `P[4]+1`，因为由 `P[4]` 可以知道，`B[1,2]` 已
                            经和 `B[3,4]` 相等了，现在又有 `B[3]=B[5]`，所以 `P[5]` 可以由
                            `P[4]` 后面加一个字符得到。`P[6]` 也等于 `P[5]+1` 吗？显然不
                            是，因为 `B[ P[5]+1 ] != B[6]`。那么，我们要考虑“退一步”
                            了。我们考虑 `P[6]` 是否有可能由 `P[5]` 的情况所包含的子串
                            得到，即是否 `P[6]=P[ P[5] ]+1`。这里想不通的话可以仔
                            细看一下：

                            ```
                                1 2 3 4 5 6 7
                            B = a b a b a c b
                            P = 0 0 1 2 3 ?
                            ```

                            `P[5]=3` 是因为 `B[1..3]` 和 `B[3..5]` 都是 "aba"；而 `P[3]=1` 则告
                            诉我们，`B[1]`、`B[3]` 和 `B[5]` 都是"a"。既然 `P[6]` 不能由 `P[5]`
                            得到，或许可以由 `P[3]` 得到（如果 `B[2]` 恰好和 `B[6]` 相等的
                            话，`P[6]` 就等于 `P[3]+1` 了）。显然，`P[6]` 也不能通过 `P[3]`
                            得到，因为 `B[2] != B[6]`。事实上，这样一直推到 `P[1]` 也不
                            行，最后，我们得到，`P[6]=0`。

                            怎么这个预处理过程跟前面的 KMP 主程序这么像呢？其实，
                            KMP 的预处理本身就是一个 B 串“自我匹配”的过程。它的代
                            码和上面的代码神似：

                            ```
                            P[1]:=0;
                            j:=0;
                            for i:=2 to m do
                            begin
                               while (j>0) and (B[j+1]<>B[i]) do j:=P[j];
                               if B[j+1]=B[i] then j:=j+1;
                               P[i]:=j;
                            end;
                            ```

                    -   [Knuth-Morris-Pratt Algorithm](http://www.ics.uci.edu/~eppstein/161/960227.html)
                    -   [从头到尾彻底理解KMP（2014年8月22日版） - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_july_v/article/details/7041827)

                    ```cpp
                    #include <stdio.h>
                    #include <stdlib.h>
                    #include <string.h>

                    void compute_prefix(const char *pattern, int next[]) {
                        int i;
                        int j = -1;
                        const int m = strlen(pattern);

                        next[0] = j;
                        for ( i = 1; i < m; i++ ) {
                            while (j > -1 && pattern[j + 1] != pattern[i]) { j = next[j]; }
                            if( pattern[i] == pattern[j + 1] ) { j++; }
                            next[i] = j;
                        }
                    }

                    int kmp(const char *text, const char *pattern) {
                        int i;
                        int j = -1;
                        const int n = strlen(text);
                        const int m = strlen(pattern);
                        if (n == 0 && m == 0) return 0; /* "","" */
                        if (m == 0) return 0;  /* "a","" */
                        int *next = (int*)malloc(sizeof(int) * m);

                        compute_prefix(pattern, next);

                        for (i = 0; i < n; i++) {
                            //              printf( "\n\n\n" );
                            //              printf( "      %*si = %d\n", i, "", i );
                            //              printf( "      %*s|\n", i, "");
                            //              printf( "text: %s\n", text );
                            //              while (j > -1 && pattern[j + 1] != text[i]) {
                            //                  printf( "\nj: %d->", j );
                            //                  j = next[j];
                            //                  printf( "%d\n", j );
                            //              }
                            //              printf( "      %*s%s\n", i-j-1, "", pattern );
                            //              printf( "      %*s|\n", i, "");
                            //              printf( "      %*sj:%d->", i-1, "", j );

                            if (text[i] == pattern[j + 1]) j++;
                            if (j == m - 1) {
                                free(next);
                                return i-j;
                            }
                        }

                        free(next);
                        return -1;
                    }


                    int main(int argc, char *argv[]) {
                        char text[] = "ABC ABCDAB ABCDABCDABDE";
                        char pattern[] = "ABCDABD";
                        char *ch = text;
                        int i = kmp(text, pattern);

                        if (i >= 0) printf("matched @: %s\n", ch + i);

                        //              const char *needles[] = {
                        //                  "ABCDABD",
                        //                  "ABC",
                        //                  "ABC"
                        //              };
                        //              for( int i = 0; i < sizeof(needles)/sizeof(needles[0]); ++i ) {
                        //                  const char *pattern = needles[i];
                        //                  static int next[50];
                        //                  int m = strlen( pattern );
                        //                  memset( next, 0, sizeof(next) );
                        //                  compute_prefix( pattern, next );
                        //                  printf( "next[] for: " );
                        //                  for( int i = 0; i < m; ++i ) { printf("  %c  ", pattern[i] ); }
                        //                  printf( "\n" );
                        //                  printf( "            " );
                        //                  for( int i = 0; i < m; ++i ) { printf("%3d  ", next[i] ); }
                        //                  printf( "\n" );
                        //              }
                        return 0;
                    }
                    ```

                    ```cpp
                    void compute_prefix(const char *pattern, int next[]) {
                        int i;
                        int j = -1;
                        const int m = strlen(pattern);

                        next[0] = j;
                        for (i = 1; i < m; i++) {
                            while (j > -1 && pattern[j + 1] != pattern[i]) j = next[j];

                            if (pattern[i] == pattern[j + 1]) j++;
                            next[i] = j;
                        }
                    }

                    next[] for:   A    B    C    D    A    B    D
                                 -1
                                      -1                                p[i=1] != p[j+1=0]
                                           -1                           p[i=2] != p[j+1=0]
                                                -1                      p[i=3] != p[j+1=0]
                                                      0                 p[i=4] == p[j+1=0], ++j, (j=1 now)
                                                           ?            p[1]   == p[5], not inside while
                                                           1            p[i=5] == p[j+1=1], ++j, (j=2 now)
                                                                ?       p[2]   != p[6], j = next[j=2] = -1
                                                               -1
                    so:
                                 -1   -1   -1   -1    0    1   -1

                    ```

                    ```
                          i = 0
                          |
                    text: ABC ABCDAB ABCDABCDABDE
                          ABCDABD
                          |
                         j:-1

                           i = 1
                           |
                    text: ABC ABCDAB ABCDABCDABDE
                          ABCDABD
                           |
                          j:0

                            i = 2
                            |
                    text: ABC ABCDAB ABCDABCDABDE
                          ABCDABD
                            |
                           j:1

                             i = 3
                             |
                    text: ABC ABCDAB ABCDABCDABDE
                          ABCDABD, j: 2->-1 ("ABC" -> ["A", "AB"], ["BC", "C"])
                             ABCDABD
                             |
                            j:-1

                              i = 4
                              |
                    text: ABC ABCDAB ABCDABCDABDE
                              ABCDABD
                              |
                             j:-1

                               i = 5
                               |
                    text: ABC ABCDAB ABCDABCDABDE
                              ABCDABD
                               |
                              j:0

                                i = 6
                                |
                    text: ABC ABCDAB ABCDABCDABDE
                              ABCDABD
                                |
                               j:1

                                 i = 7
                                 |
                    text: ABC ABCDAB ABCDABCDABDE
                              ABCDABD
                                 |
                                j:2

                                  i = 8
                                  |
                    text: ABC ABCDAB ABCDABCDABDE
                              ABCDABD
                                  |
                                 j:3

                                   i = 9
                                   |
                    text: ABC ABCDAB ABCDABCDABDE
                              ABCDABD
                                   |
                                  j:4

                    +-----------------------------------------------------------------------+
                    |       while (j > -1 && pattern[j + 1] != text[i]) { j = next[j]; }    |
                    |       j > -1                          : may backroll                  |
                    |       pattern[j+1] != text[i]         : mismatch                      |
                    +-----------------------------------------------------------------------+
                    |                     0    1    2    3    4    5    6                   |
                    |       next[] for:   A    B    C    D    A    B    D                   |
                    |                    -1   -1   -1   -1    0    1   -1                   |
                    |                     0    0    0    0    1    2    0                   |
                    +-----------------------------------------------------------------------+

                                    i = 10
                                    |
                    text: ABC ABCDAB ABCDABCDABDE
                              ABCDABD               jump:   5   ->   1
                                  ABCDABD           jump:   1   ->  -1
                                    ABCDABD
                                    |
                                   j:-1

                                     i = 11
                                     |
                    text: ABC ABCDAB ABCDABCDABDE
                                     ABCDABD
                                     |
                                    j:-1

                                      i = 12
                                      |
                    text: ABC ABCDAB ABCDABCDABDE
                                     ABCDABD
                                      |
                                     j:0

                                       i = 13
                                       |
                    text: ABC ABCDAB ABCDABCDABDE
                                     ABCDABD
                                       |
                                      j:1

                                        i = 14
                                        |
                    text: ABC ABCDAB ABCDABCDABDE
                                     ABCDABD
                                        |
                                       j:2

                                         i = 15
                                         |
                    text: ABC ABCDAB ABCDABCDABDE
                                     ABCDABD
                                         |
                                        j:3

                                          i = 16
                                          |
                    text: ABC ABCDAB ABCDABCDABDE
                                     ABCDABD
                                          |
                                         j:4

                                           i = 17
                                           |
                    text: ABC ABCDAB ABCDABCDABDE
                                     ABCDABD        jump:   5   ->   1
                                         ABCDABD
                                           |
                                          j:1

                                            i = 18
                                            |
                    text: ABC ABCDAB ABCDABCDABDE
                                         ABCDABD
                                            |
                                           j:2


                                             i = 19
                                             |
                    text: ABC ABCDAB ABCDABCDABDE
                                         ABCDABD
                                             |
                                            j:3

                                              i = 20
                                              |
                    text: ABC ABCDAB ABCDABCDABDE
                                         ABCDABD
                                              |
                                             j:4

                                               i = 21
                                               |
                    text: ABC ABCDAB ABCDABCDABDE
                                         ABCDABD
                                               |
                                              j:5
                    ```

                    see more?

                    -   Boyer-Moore -<

                        :   推荐网上的几篇比较好的博客，[“字符串匹配的 Boyer-Moore 算法”](http://www.ruanyifeng.com/blog/2013/05/boyer-moore_string_search_algorithm.html)，
                            图文并茂，非常通俗易懂，作者是阮一峰；[Boyer-Moore algorithm](http://www-igm.univ-mlv.fr/~lecroq/string/node14.html)。

                            有兴趣的读者还可以看原始论文\footnote{BOYER R.S.,
                            MOORE J.S., 1977, A fast string searching
                            algorithm. Communications of the ACM. 20:762-772.}。

                            ```cpp
                            /**
                             * 本代码参考了 http://www-igm.univ-mlv.fr/~lecroq/string/node14.html
                             * 精力有限的话，可以只计算坏字符的后移，好后缀的位移是可选的，因此可以删除
                             * suffixes(), pre_gs() 函数
                             */
                            #include <stdio.h>
                            #include <stdlib.h>
                            #include <string.h>

                            #define ASIZE 256  /* ASCII字母的种类 */

                            /*
                             * @brief 预处理，计算每个字母最靠右的位置.
                             *
                             * @param[in] pattern 模式串
                             * @param[out] right 每个字母最靠右的位置
                             * @return 无
                             */
                            static void pre_right(const char *pattern, int right[]) {
                                int i;
                                const int m = strlen(pattern);

                                for (i = 0; i < ASIZE; ++i) right[i] = -1;
                                for (i = 0; i < m; ++i) right[(unsigned char)pattern[i]] = i;
                            }

                            static void suffixes(const char *pattern, int suff[]) {
                                int f, g, i;
                                const int m = strlen(pattern);

                                suff[m - 1] = m;
                                g = m - 1;
                                for (i = m - 2; i >= 0; --i) {
                                    if (i > g && suff[i + m - 1 - f] < i - g)
                                        suff[i] = suff[i + m - 1 - f];
                                    else {
                                        if (i < g)
                                            g = i;
                                        f = i;
                                        while (g >= 0 && pattern[g] == pattern[g + m - 1 - f])
                                            --g;
                                        suff[i] = f - g;
                                    }
                                }
                            }

                            /*
                             * @brief 预处理，计算好后缀的后移位置.
                             *
                             * @param[in] pattern 模式串
                             * @param[out] gs 好后缀的后移位置
                             * @return 无
                             */
                            static void pre_gs(const char pattern[], int gs[]) {
                                int i, j;
                                const int m = strlen(pattern);
                                int *suff = (int*)malloc(sizeof(int) * (m + 1));

                                suffixes(pattern, suff);

                                for (i = 0; i < m; ++i) gs[i] = m;

                                j = 0;
                                for (i = m - 1; i >= 0; --i) if (suff[i] == i + 1)
                                    for (; j < m - 1 - i; ++j) if (gs[j] == m)
                                        gs[j] = m - 1 - i;
                                for (i = 0; i <= m - 2; ++i)
                                    gs[m - 1 - suff[i]] = m - 1 - i;
                                free(suff);
                            }
                            ```

                    -   Rabin-Karp -<

                        :   TODO

        -   从面试官的角度分析面试的考察点 -<

            :   -   如果没有 strlen？要自己写一个？还是融汇在的自己代码里。
                -   输入参数上，`char *str` 改成 `const char *str` 是不是更好？
                -   参数命名上，str 和 sub 好不好？要不换成 haystack 和 needle
                    怎么样？
                -   int len = strlen(str) 这里 len 的类型换成 size_t 是不是更好？
                    int 型最多表示多长的字节？2^31-1/2^10(k)/2^10(m)/2^10(g) =
                    2^{31-30} = 2 GB。我猜完全没有必要用……

                上面的问题你怎么回答。

        -   从 Subset 中了解算法面试中模板的重要性 -<

            :   挺重要。

                >   同样动作重复 300 次，肌肉就会有记忆，而一个动作重复 600 次，
                >   脊椎就会有记忆。
                >
                >   --- 李小龙

        -   程序设计入门建议 -<

            :   -   我们的目标是解决问题，而不是为了写程序而写程序，同时应保持简单
                    （**Keep It Simple and Stupid, KISS**），而不是自己创造条件去展示编
                    程技巧。

                -   三整数排序

                    :   ```cpp
                        #include <stdio.h>

                        int main() {
                            int a, b, c, t;
                            scanf( "%d%d%d", &a, &b, &c );
                            if( a > b ) { t = a; a = b; b = t; } // a <= b
                            if( a > c ) { t = a; a = c; c = t; } // a <= c
                            if( b > c ) { t = b; b = c; c = t; } // a <= b <= c
                            printf( "%d %d %d\n", a, b, c );
                            return 0;
                        }
                        ```

                -   重定向（便于本地测试）

                    ```cpp
                    freopen( "data.in",  "r", stdin  );
                    freopen( "data.out", "w", stdout );
                    ```

                -   编程不是看书看会的，也不是听课听会的，而是**练**会的。

        refs and see also

        -   [程序员编程艺术：第四章、现场编写类似 strstr/strcpy/strpbrk 的函数 - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_JULY_v/article/details/6417600)

    :scissors: 2016/00/00 上午 9:30:00 0. 编程初步以及 STL 入门 -<

    :   -   第 3 章，数组和字符串 -<

            :   -   蛇形填数 -<

                    :   ```cpp
                        #include <stdio.h>
                        #include <string.h>
                        #define maxn 20
                        int a[maxn][maxn];

                        int main() {
                            int n, x, y, tot = 0;
                            while( 1 == scanf( "%d", &n ) && n > 0 && n < maxn ) {
                                memset( a, 0, sizeof(a) );
                                tot = a[x=0][y=n-1] = 1;
                                while( tot < n*n ) {
                                    while( x+1 <  n && !a[x+1][y] ) { a[++x][y] = ++tot; }
                                    while( y-1 >= 0 && !a[x][y-1] ) { a[x][--y] = ++tot; }
                                    while( x-1 >= 0 && !a[x-1][y] ) { a[--x][y] = ++tot; }
                                    while( y+1 <  n && !a[x][y+1] ) { a[x][++y] = ++tot; }
                                }
                                for( x = 0; x < n; ++x ) {
                                    for( y = 0; y < n; ++y ) {
                                        printf( "%5d", a[x][y] );
                                    }
                                    printf( "\n" );
                                }
                            }
                            return 0;
                        }
                        ```

                -   最好在做一件事之前检查是不是可以做，而不要做完再后悔。
                    因为“毁棋”往往比较麻烦。

                -   `if( strchr( s, c ) == NULL ) { ... }`{.cpp}

                -   `fgetc` 返回 int？因为 EOF（值为 -1）不容易转化成 char。

                -   回文词（Palindromes） -<

                    :   输入中没有 "0"。

                        ```cpp
                        #include <stdio.h>
                        #include <string.h>
                        #include <ctype.h>
                        //                 ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789
                        const char *rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
                        const char *msg[] = {   "not a palindrome",
                                                "a regular palindrome",
                                                "a mirrored string",
                                                "a mirrored palindrome" };

                        char r( char ch ) {
                            if( isupper(ch) ) {
                                return rev[ch-'A'];
                            } else if( '0' < ch && ch <= '9' ) {
                                return rev[ch-'1'+26];
                            } else {
                                return 0; // then should not equal
                            }
                        }

                        int main() {
                            char s[30];
                            while( scanf( "%s", s ) == 1 ) {
                                int len = strlen(s);
                                int p = 1, m = 1;
                                // 不是 len/2，你说为什么呢？
                                for( int i = 0; i < (len+1)/2; ++i ) {
                                    if(   s[i]  != s[len-1-i] ) { p = 0; }
                                    if( r(s[i]) != s[len-1-i] ) { m = 0; }
                                    if( !p && !m ) { break; }
                                }
                                printf( "%s -- is %s.\n\n", s, msg[m*2+p] );
                            }
                            return 0;
                        }
                        ```

                        编译运行：

                        ```bash
                        $ gcc palindromes.c -o palindromes -std=c99

                        $ cat input.txt
                        NOTAPALINDROME
                        ISAPALINILAPASI
                        2A3MEAS
                        ATOYOTA

                        $ cat input.txt | palindromes
                        NOTAPALINDROME -- is not a palindrome.

                        ISAPALINILAPASI -- is a regular palindrome.

                        2A3MEAS -- is a mirrored string.

                        ATOYOTA -- is a mirrored palindrome.
                        ```

                -   环状序列（Circular Sequence） -<

                    :   ```
                        +--------->---------+
                        |  T  C    G       \|/
                        |              A    |
                        | C               G |
                        ^                   |
                        | G               T |
                        |     G    A  C     |
                        +-----<----^--------+
                                    \
                                     +----- 最小从这里开始
                        ```

                        ```cpp
                        #include <stdio.h>
                        #include <string.h>
                        #define maxn 105

                        int less( const char *s, int p, int q ) {
                            int n = strlen(s);
                            for( int i = 0; i < n; ++i ) {
                                if( s[(p+i)%n] != s[(q+i)%n] ) {
                                    return s[(p+i)%n] < s[(q+i)%n];
                                }
                            }
                            return 0; // equal
                        }

                        int main() {
                            char s[maxn];
                            while( 1 == scanf( "%s", s ) ) {
                                int ans = 0;
                                int n = strlen(s);
                                for( int i = 1; i < n; ++i ) {
                                    if( less(s, i, ans) ) { ans = i; }
                                }
                                printf( "%s --> \"", s );
                                for( int i = 0; i < n; ++i ) {
                                    putchar( s[(i+ans)%n] );
                                }
                                printf( "\"\n" );
                            }
                            return 0;
                        }
                        ```

                -   猜数字 -<

                    :   输入：

                        ```
                        4                           # 对于一个 case，4 表示每行四个数字
                        1   3   5   5               # 猜测的数字
                        1   1   2   3               # 正确的数字
                        4   3   3   5               # 猜测
                        6   5   5   1               # 正确
                        6   1   3   5
                        1   3   5   5
                        0   0   0   0               # 全 0，结束
                        0                           # 0，表示所有输入结束
                        ```

                        统计输出有多少数字位置正确（A），多少数字在两个序列多出现了但位置不对（B）。

                        分析：

                        统计可以得到 A。对 1~9，统计两者出现的次数 c1 和 c2，则 min( c1, c2 ) 就是该数字对 B 的贡献（最后要减去 A 的部分）。

                        ```cpp
                        #include<stdio.h>
                        #define maxn 1000 + 10

                        int main() {
                            int n, a[maxn], b[maxn];
                            int kase = 0;
                            while( scanf("%d", &n) == 1 && n ) {            // n=0 时输入结束
                                printf( "Game %d:\n", ++kase );
                                for( int i = 0; i < n; i++ ) { scanf("%d", &a[i]); }
                                for( ; ; ) {
                                    int A = 0, B = 0;
                                    for( int i = 0; i < n; i++ ) {
                                        scanf( "%d", &b[i] );
                                        if( a[i] == b[i] ) { A++; }         // 统计 A
                                    }
                                    if( b[0] == 0 ) { break; }              // 正常的猜测序列不会有 0，所以只判断第一个数是否为 0 即可
                                    for(int d = 1; d <= 9; d++) {
                                        int c1 = 0, c2 = 0;                 // 统计数字 d 在答案序列和猜测序列中各出现多少次
                                        for(int i = 0; i < n; i++) {
                                            if(a[i] == d) c1++;
                                            if(b[i] == d) c2++;
                                        }
                                        B += c1 < c2 ? c1 : c2;
                                    }
                                    printf("    (%d,%d)\n", A, B-A);
                                }
                            }
                            return 0;
                        }
                        ```

                -   生成元 -<

                    :   x 加上 x 的各个数字得到 y，就说 x 是 y 的生成元。给出 n（1<=n<=100000），求最小生成元。无解输出 0。
                        例如，n=216，121，2005 时的解围 198，0， 1979。

                        ```cpp
                        #include<stdio.h>
                        #include<string.h>
                        #define maxn 100005
                        int ans[maxn];

                        int main() {
                          int T, n;
                          memset(ans, 0, sizeof(ans));
                          for(int m = 1; m < maxn; m++) {
                            int x = m, y = m;
                            while(x > 0) { y += x % 10; x /= 10; }
                            if(ans[y] == 0 || m < ans[y]) ans[y] = m;
                          }
                          scanf("%d", &T);
                          while(T--) {
                            scanf("%d", &n);
                            printf("%d\n", ans[n]);
                          }
                          return 0;
                        }
                        ```

                        我的分析：一个五位数（最多），最多能添加 9x5，所以要求 y 的生成元，只要在
                        `[y-9*5, y)` 枚举就可以了。书中给的代码适合本来就有很多数字需要判断，我的适合于
                        只有一两个数字需要判断。代码就不贴了（因为很简单）。

        -   第 4 章，函数和递归 -<

            :   -   知识点 -<

                    :   -   由于使用了调用栈，C 语言自然支持了递归。在 C 语言中，
                            调用自己和调用其他函数并没有本质不同。
                        -   正文段（Text Segment）存储指令，数据段（Data
                            Segment）用于存储已经初始化的全局变量；BSS 段（BSS
                            Segment）用于存储没赋值的全局变量所需的空间。运行时
                            创建的调用栈所在段区被称为堆栈段（Stack Segment），
                            越界访问就会出现 Segment Fault。栈帧太多，可能越界，
                            这叫栈溢出（Stack Overflow）。

                            可以用 `ulimit -a` 显示 stack size，用 `ulimit -s
                            32768` 设置为 32 MB。Windows 上也可以设置。

                            局部变量太大，也可能 stack overflow。

                -   古老的密码 -<

                    :   一个随意的字符串 JWPUDJSTVP 能不能通过字符变换变成
                        VICTORIOUS，只要统计单词的频率，看是否匹配就可以了。

                        ```cpp
                        #include <stdio.h>
                        #include <string.h>                                             // strlen
                        #include <stdlib.h>                                             // qsort

                        int cmp( const void *a, const void *b ) {
                            return *(int *)a - *(int *)b;
                        }

                        int main() {
                            char s1[200], s2[200];
                            while( scanf( "%s%s", s1, s2 ) == 2 ) {
                                int n = strlen(s1);
                                // assert( strlen(s1) == strlen(s2) );
                                int cnt1[26] = {0}, cnt2[26] = {0};
                                for( int i = 0; i < n; i++ ) { cnt1[s1[i] - 'A']++; }   // 统计
                                for( int i = 0; i < n; i++ ) { cnt2[s2[i] - 'A']++; }
                                qsort( cnt1, 26, sizeof( int ), cmp );                  // 对字频排序
                                qsort( cnt2, 26, sizeof( int ), cmp );
                                int ok = 1;
                                for( int i = 0; i < 26; i++ ) {
                                    if( cnt1[i] != cnt2[i] ) { ok = 0; }                // 是否匹配？
                                }
                                if( ok ) {
                                    printf( "YES\n" );
                                } else {
                                    printf( "NO\n" );
                                }
                            }
                            return 0;
                        }
                        ```

                        也可以用 c++ 的 sort，修改如下几行即可：

                        ```cpp
                        #include<algorithm>                                             // sort
                        sort( cnt1, cnt1 + 26 );
                        sort( cnt2, cnt2 + 26 );
                        ```

                -   骰子涂色 -<

                    :   rbgggr 和 rggbgr 一样。

                        ```
                                    +-------------+
                                   /             /|  +------------5
                                  /      1      / | /
                                 /             /  |/
                                +------------+/   |
                        3 ----> |            |    |
                                |            | 4  /
                                |     2      |   /
                                |            |  /
                                |            | /
                                +------------+/
                                      ^
                                      |
                                      +-- 6
                        ```

                -   天平 :hearts: -<

                    :   input:

                        ```
                        1

                        0 2 0 4
                        0 3 0 1
                        1 1 1 1
                        2 4 4 2
                        1 6 3 2
                        ```

                        ```cpp
                        #include <iostream>
                        using namespace std;

                        bool solve( int &W ) {
                            int W1, D1, W2, D2;
                            bool b1 = true, b2 = true;
                            cin >> W1 >> D1 >> W2 >> D2;
                            if( !W1 ) { b1 = solve( W1 ); }
                            if( !W2 ) { b2 = solve( W2 ); }
                            W = W1 + W2;
                            return b1 && b2 && ( W1*D1 == W2*D2 );
                        }

                        int main() {
                            int T, W;
                            cin >> T;
                            while( T-- ) {
                                if( solve(W) ) {
                                    cout << "YES\n";
                                } else {
                                    cout << "No\n";
                                }
                                if( T ) { cout << "\n"; }
                            }
                            return 0;
                        }
                        ```

        -   第 5 章，C++ 与 STL 入门 -<

            :   -   5.1 From C to C++ -<

                    :   template, reference, containers, iostream, operators, etc

                        ```cpp
                        template<typename T>
                        T sum( T *begin, T *end ) {
                            T ans = 0;
                            for( T *p = begin; p != end; ++p ) {
                                ans = ans + *p;
                            }
                            return ans;
                        }
                        ```

                -   5.2 STL 101 -<

                    :   -   大理石在哪儿？ -<

                            :   ```
                                input:

                                    4   1
                                    2   3   5   1
                                    5
                                    5   2
                                    1   3   3   3   1

                                output:

                                    CASE# 1:
                                    5 found at 4
                                    CASE# 2:
                                    2 not found
                                    3 found at 3
                                ```

                                ```cpp
                                #include <stdio.h>
                                #include <algorithm>
                                using namespace std;

                                const int maxn = 10000;

                                int main() {
                                    int n, q, x a[maxn], kase = 0;
                                    while( scanf( "%d%d", &n, &q ) == 2 && n ) {
                                        printf( "CASE# %d:\n", ++kase );
                                        for( int i = 0; i < n; ++i ) { scanf( "%d", &a[i] ); }
                                        sort( a, a+n );
                                        while( q-- ) {
                                            scanf( "%d", &x );
                                            int p = lower_bound( a, a+n, x ) - a;       // offset
                                            if( a[p] == x ) {
                                                printf( "%d found at %d\n", x, p+1 );
                                            } else {
                                                printf( "%d not found\n", x );
                                            }
                                        }
                                    }
                                    return 0;
                                }
                                ```

                                run it:

                                ```bash
                                $ echo "4 1\n2 3 5 1\n5" | ./a.out
                                CASE# 1:
                                5 found at 4
                                ```

                        -   木块问题 -<

                            :   use vector

                        -   Set, Map -<

                            :   elements in **set** already sorted.

                                ```cpp
                                int main() {
                                    string s, buf;
                                    set<string> dict;
                                    while( cin >> s ) {
                                        for( int i = 0; i < s.length(); ++i ) {
                                            if( isalpha(s[i]) ) {
                                                s[i] = tolower(s[i]);
                                            } else {
                                                s[i] = ' ';
                                            }
                                        }
                                        stringstream ss( s );
                                        while( ss >> buf ) {
                                            dict.insert( buf );                                                         // set.insert( item )
                                        }
                                        for( set<string>::iterator it = dict.begin(); it != dict.end(); ++it ) {        // 迭代器输出所有元素
                                            cout << *it << "\n";                                                        // already sorted
                                        }
                                    }
                                    return 0;
                                }
                                ```

                                **map**

                                ```cpp
                                string repr( const string &s ) {                    // signature
                                    string ans = s;
                                    for( int i = 0; i < ans.length(); ++i ) {
                                        ans[i] = tolower(ans[i]);
                                    }
                                    sort( ans.begin(), ans.end() );
                                    return ans;
                                }

                                int main() {
                                    ...
                                    while( cin >> s ) {
                                        string r = repr( s );
                                        if( !cnt.count(r) ) { cnt[r] = 0; }         // this is optional
                                        ++cnt[r];
                                    }
                                    vector<string> ans;
                                    for( int i = 0; i < words.size(); ++i ) {
                                        if( cnt[repr(words[i])] == 1 ) {
                                            ans.push_back( words[i] );
                                        }
                                    }
                                    sort( ans.begin(), ans.end() );
                                    for( int i = 0; i < ans.size(); ++i ) {
                                        coutt << ans[i] << "\n";
                                    }

                                    return 0;
                                }
                                ```

                                需要注意的是：

                                -   直接用 `++cnt[r]` 也是可以的；
                                -   `map.count( key )` 返回 1 或者 0；
                                -   `map.find( key )` 返回 iter，可能是 `map.end()`

                        -   Stack, Queue, Priority Queue -<

                            :   -   stack -<

                                    :   >   明白 stack，以及常用的 `push(item)`, `item = top()`, `pop()` 操作。

                                        The SetStack Computer，支持如下操作：

                                        -   PUSH：空集“{}”入栈
                                        -   DUP：复制栈顶并入栈
                                        -   UNION：出栈两个元素，求 union 并入栈
                                        -   INTERSECT：出栈两个元素，求 intersect 并入栈
                                        -   ADD：出栈两个元素，把先出的元素加到后出的元素，然后入栈

                                        集合的集合的表示？

                                        一个集合有整形的 id，它的内容用 `set<int>` 表示。整个栈用
                                        `stack<int>` 表示。

                                        ```cpp
                                        // UVa12096 The SetStack Computer
                                        #include <iostream>
                                        #include <string>
                                        #include <set>
                                        #include <map>
                                        #include <stack>
                                        #include <vector>
                                        #include <algorithm>
                                        using namespace std;

                                        #define ALL(x) x.begin(), x.end()
                                        #define INS(x) inserter(x, x.begin())

                                        typedef set<int> Set;
                                        map<Set,int> IDcache;                                       // 把集合映射成 ID
                                        vector<Set> Setcache;                                       // 根据 ID 取集合

                                        // 查找给定集合 x 的 ID。如果找不到，分配一个新 ID
                                        int ID( Set x ) {
                                            if( IDcache.count( x ) ) { return IDcache[x]; }
                                            Setcache.push_back( x );                                // 添加新集合
                                            return IDcache[x] = Setcache.size() - 1;
                                        }

                                        int main () {
                                            int T;
                                            cin >> T;
                                            while( T-- ) {
                                                stack<int> s;                                       // 题目中的栈
                                                int n;
                                                cin >> n;
                                                for( int i = 0; i < n; i++ ) {
                                                    string op;
                                                    cin >> op;
                                                    if( op[0] == 'P' ) {
                                                        s.push( ID( Set() ) );                      // push '{}'
                                                    } else if( op[0] == 'D' ) {
                                                        s.push( s.top(  ) );                        // dup
                                                    } else {
                                                        Set x1 = Setcache[s.top()]; s.pop();
                                                        Set x2 = Setcache[s.top()]; s.pop();
                                                        Set x;
                                                        if( op[0] == 'U' ) { set_union ( ALL( x1 ), ALL( x2 ), INS( x ) ); }
                                                        if( op[0] == 'I' ) { set_intersection ( ALL( x1 ), ALL( x2 ), INS( x ) ); }
                                                        if( op[0] == 'A' ) { x = x2; x.insert( ID( x1 ) ); }
                                                        s.push(ID(x));
                                                    }
                                                    cout << Setcache[s.top()].size() << endl;
                                                }
                                                cout << "***" << endl;
                                            }
                                            return 0;
                                        }
                                        ```

                                -   queue -<

                                    :   t 个队伍排队。新来的人，如果有队友，就插入到队友后面，如果没有，就只能排最后面。
                                        输入每个团队中所有队员的编号，要求支持如下 3 中命令：

                                        -   ENQUEUE x：把 x 入队
                                        -   DEQUEUE
                                        -   STOP：停止模拟

                                        对于每个 DEQUEUE 指令，输出出对的人的编号。

                                        ```cpp
                                        // UVa540 Team Queue
                                        #include <cstdio>
                                        #include <queue>
                                        #include <map>
                                        using namespace std;

                                        const int maxt = 1000 + 10;

                                        int main() {
                                            int t, kase = 0;
                                            while( scanf( "%d", &t ) == 1 && t ) {
                                                printf( "Scenario #%d\n", ++kase );

                                                map<int, int> team;                                     // team[x] 表示编号为 x 的人所在的团队编号
                                                for( int i = 0; i < t; i++ ) {
                                                    int n, x;
                                                    scanf( "%d", &n );
                                                    while( n-- ) { scanf( "%d", &x ); team[x] = i; }
                                                }

                                                // 模拟
                                                queue<int> q, q2[maxt];                                 // q 是团队的队列，而 q2[i] 是团队 i 成员的队列

                                                for( ;; ) {
                                                    int x;
                                                    char cmd[10];
                                                    scanf( "%s", cmd );
                                                    if( cmd[0] == 'S' ) { break; }
                                                    else if( cmd[0] == 'D' ) {
                                                        int t = q.front();
                                                        printf( "%d\n", q2[t].front() ); q2[t].pop(  );
                                                        if( q2[t].empty(  ) ) { q.pop(); }              // 团体 t 全体出队列
                                                    }
                                                    else if( cmd[0] == 'E' ) {
                                                        scanf( "%d", &x );
                                                        int t = team[x];
                                                        if( q2[t].empty() ) q.push( t );                // 团队 t 进入队列
                                                        q2[t].push( x );
                                                    }
                                                }
                                                printf( "\n" );
                                            }

                                            return 0;
                                        }
                                        ```

                                -   priority_queue -<

                                    :   ugly number 是不能被 2，3，5 以为的其他素数整除的数。
                                        （相比质数不是那么严格。）也就是 2，3，5 的各种）乘积的组合。

                                        如果 x 是 ugly number，2x，3x 和 5x 都会是 ugly number。用优先队列即可。

                                        ```cpp
                                        #include <iostream>
                                        #include <vector>
                                        #include <queue>
                                        #include <set>

                                        using namespace std;
                                        typedef long long LL;

                                        int main() {
                                            int n;
                                            while( scanf("%d", &n) && n ) {
                                                priority_queue<LL, vector<LL>, greater<LL> > pq;                            // greater 于是 ascend 排序
                                                pq.push( 1LL );
                                                set<LL> s;
                                                s.insert( 1LL );

                                                for( int i = 1; ; ++i ) {
                                                    LL x = pq.top(); pq.pop();  // the smallest ugly number
                                                    if( i == n ) {
                                                        cout << "The " << n << "'th ugly number is " << x << ".\n";
                                                        int j = 0;
                                                        for( set<LL>::iterator it = s.begin(); it != s.end(); ++it ) {
                                                            if( ++j == n ) {
                                                                cout << "The " << n << "'th ugly number is " << *it << ".\n";
                                                            }
                                                        }
                                                        break;
                                                    }
                                                    for( int j = 0; j < 3; ++j ) {
                                                        const int coeff[3] = {  2,  3,  5   };
                                                        LL x2 = x * coeff[j];
                                                        if( !s.count(x2) ) {
                                                            s.insert( x2 );
                                                            pq.push( x2 );
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        ```

                                        output:

                                        ```
                                        $ a.out
                                        1500<RET>
                                        The 1500'th ugly number is 859963392.
                                        The 1500'th ugly number is 859963392.
                                        ```

                                        从队列前面取出的第 n 个数正好是第 n 个大的 ugly number。

                                        注：

                                        -   `priority_queue<int> pq` 是越小的整数优先级越低（逆序）
                                        -   `priority_queue<int, vector<int>, greater<int> > pq` 是越大的整数优先级越低（正序）
                                        -   queue 使用 `front()` 出队，priority queue 使用 `top()`

                        -   Test STL -<

                            :   tips and guidelines

                                -   RAND_MAX may be only 32767 (2^15-1)
                                -   use `assert( ... )`, header file is `<assert.h>`
                                -   vector, set, map are fast.

                -   5.3 Big Integer -<

                    :   TODO: browser some other implementation.

                        ```cpp
                        bool operator >  ( const T &rhs ) const { return   rhs < *this;     }
                        bool operator <= ( const T &rhs ) const { return !(rhs < *this);    }
                        bool operator != ( const T &rhs ) const { return !(*this == rhs);   }
                        ```

                -   5.4 Selected Problems -<

                    :   -   Unix ls -<

                            :   像 `ls` 一样格式化打印（主要处理 column 对齐问题）。

                                ```cpp
                                #include <iostream>
                                #include <string>
                                #include <algorithm>
                                using namespace std;

                                const int maxcol    = 60;
                                const int maxn      = 100+5;
                                string filenames[maxn];

                                void print( const string &s, int len, char extra ) {
                                    cout<< s;
                                    if( len < 0 ) { return; }
                                    for( int i = 0; i < len-s.length(); ++i ) {
                                        cout << extra;
                                    }
                                }

                                int main() {
                                    int n;
                                    while( cin >> n ) {
                                        int M = 0;
                                        for( int i = 0; i < n; ++i ) {
                                            cin >> filenames[i];
                                            M = max( M, (int)filenames[i].length() );
                                        }
                                        int cols = (maxcol-M)/(M+2) + 1, rows = (n-1)/cols + 1;
                                        print( "", 60, '-' );
                                        cout << "\n";
                                        sort( filenames, filenames+n );
                                        for( int r = 0; r < rows; ++r ) {
                                            for( int c = 0; c < cols; ++c ) {
                                                int idx = c * rows + r;
                                                if( idx < n ) {
                                                    print( filenames[idx],
                                                           c == cols-1? M : M+2,
                                                           ' ' );
                                                }
                                            }
                                            cout << "\n";
                                        }
                                    }
                                    return 0;
                                }
                                ```

                                run it:

                                ```bash
                                (echo "`ls|wc -l` `ls`") | path/to/our/own/ls
                                ------------------------------------------------------------
                                LICENSE.txt  envs         lib          ssl
                                bin          etc          pkgs         var
                                conda-meta   include      share
                                ```

                        -   database -<

                            :   ```cpp
                                // UVa1592 Database
                                // Rujia Liu
                                // 本程序只是为了演示 STL 各种用法，效率较低。实践中一般用 C 字符串和哈希表来实现。

                                #include<iostream>
                                #include<cstdio>
                                #include<vector>
                                #include<string>
                                #include<map>
                                #include<sstream>
                                using namespace std;

                                typedef pair<int,int> PII;

                                const int maxr = 10000 + 5;
                                const int maxc = 10 + 5;

                                int m, n, db[maxr][maxc], cnt;

                                map<string, int> id;
                                int ID(const string& s) {
                                    if(!id.count(s)) {
                                        id[s] = ++cnt;
                                    }
                                    return id[s];
                                }

                                void find() {
                                    for(int c1 = 0; c1 < m; c1++)
                                        for(int c2 = c1+1; c2 < m; c2++) {
                                            map<PII, int> d;
                                            for(int i = 0; i < n; i++) {
                                                PII p = make_pair(db[i][c1], db[i][c2]);
                                                if(d.count(p)) {
                                                    printf("NO\n");
                                                    printf("%d %d\n", d[p]+1, i+1);
                                                    printf("%d %d\n", c1+1, c2+1);
                                                    return;
                                                }
                                                d[p] = i;
                                            }
                                        }
                                    printf("YES\n");
                                }


                                int main() {
                                    string s;
                                    while(getline(cin, s)) {
                                        stringstream ss(s);
                                        if(!(ss >> n >> m)) break;
                                        cnt = 0;
                                        id.clear();
                                        for(int i = 0; i < n; i++) {
                                            getline(cin, s);
                                            int lastpos = -1;
                                            for(int j = 0; j < m; j++) {
                                                int p = s.find(',', lastpos+1);
                                                if(p == string::npos) p = s.length();
                                                db[i][j] = ID(s.substr(lastpos+1, p - lastpos - 1));
                                                lastpos = p;
                                            }
                                        }
                                        find();
                                    }
                                    return 0;
                                }
                                ```

                        -   PGA Tour Price Money -<

                            :   ```cpp
                                // UVa207 PGA Tour Prize Money
                                // Rujia Liu
                                #include<cstdio>
                                #include<cstdlib>
                                #include<cstring>
                                #include<cmath>
                                #include<algorithm>
                                #include<cassert>
                                using namespace std;

                                #define REP(i,n) for(int i = 0; i < (n); i++)

                                const int maxn = 144;
                                const int n_cut = 70;

                                struct Player {
                                    char name[25];
                                    int amateur;
                                    int sc[4];
                                    int sc36, sc72, dq;
                                    int rnds;
                                } player[maxn];

                                int n;
                                double purse, p[n_cut];

                                bool cmp1(const Player& p1, const Player& p2) {
                                    if(p1.sc36 < 0 && p2.sc36 < 0) return false; // equal
                                    if(p1.sc36 < 0) return false; // p2 smaller
                                    if(p2.sc36 < 0) return true; // p1 smaller
                                    return p1.sc36 < p2.sc36;
                                }

                                bool cmp2(const Player& p1, const Player& p2) {
                                    if(p1.dq && p2.dq) {
                                        if(p1.rnds != p2.rnds) return p2.rnds < p1.rnds;
                                        if(p1.sc72 != p2.sc72) return p1.sc72 < p2.sc72;
                                        return strcmp(p1.name, p2.name) < 0;
                                    }
                                    if(p1.dq) return false;
                                    if(p2.dq) return true;
                                    if(p1.sc72 != p2.sc72) return p1.sc72 < p2.sc72;
                                    return strcmp(p1.name, p2.name) < 0;
                                }

                                void print_result() {
                                    printf("Player Name          Place     RD1  RD2");
                                    printf("  RD3  RD4  TOTAL     Money Won\n");
                                    printf("---------------------------------------");
                                    printf("--------------------------------\n");

                                    int i = 0, pos = 0;
                                    while(i < n) {
                                        if(player[i].dq) {
                                            printf("%s           ",player[i].name);
                                            REP(j,player[i].rnds) printf("%-5d", player[i].sc[j]);
                                            REP(j,4-player[i].rnds) printf("     ");
                                            printf("DQ\n");
                                            i++;
                                            continue;
                                        }

                                        int j = i;
                                        int m = 0; // number of tied players
                                        bool have_money = false;
                                        double tot = 0.0; // total pooled money
                                        while(j < n && player[i].sc72 == player[j].sc72) {
                                            if(!player[j].amateur) {
                                                m++;
                                                if(pos < n_cut) {
                                                    have_money = true; // yeah! they still have money
                                                    tot += p[pos++];
                                                }
                                            }
                                            j++;
                                        }

                                        // print player [i,j) together because they have the same rank
                                        int rank = i + 1; // rank of all these m players
                                        double amount = purse * tot / m; // if m=0, amount will be nan but we don't use it in that case :)
                                        while(i < j) {
                                            printf("%s ", player[i].name);
                                            char t[5];
                                            sprintf(t, "%d%c", rank, m > 1 && have_money && !player[i].amateur ? 'T' : ' ');
                                            printf("%-10s", t);
                                            REP(e,4) printf("%-5d", player[i].sc[e]);

                                            // with prize
                                            if(!player[i].amateur && have_money) {
                                                printf("%-10d", player[i].sc72);
                                                printf("$%9.2lf\n", amount / 100.0);
                                            } else
                                                printf("%d\n", player[i].sc72);
                                            i++;
                                        }
                                    }
                                }

                                int main() {
                                    int T;
                                    char s[40];

                                    gets(s);
                                    sscanf(s,"%d",&T);
                                    while(T--) {
                                        gets(s); // empty line

                                        // prize
                                        gets(s);
                                        sscanf(s,"%lf", &purse);
                                        REP(i,n_cut) {
                                            gets(s);
                                            sscanf(s, "%lf", &p[i]);
                                        }

                                        // players
                                        gets(s);
                                        sscanf(s, "%d", &n);
                                        assert(n <= 144);
                                        REP(k,n) {
                                            // read a 32-character line
                                            gets(s);

                                            // player name
                                            strncpy(player[k].name, s, 20);
                                            player[k].name[20] = 0;
                                            player[k].amateur = 0;
                                            if(strchr(player[k].name, '*')) {
                                                player[k].amateur = 1;
                                            }

                                            // scores
                                            player[k].sc36 = player[k].sc72 = player[k].dq=0;
                                            memset(player[k].sc, -1, sizeof(player[k].sc));
                                            REP(i,4) {
                                                // raw score
                                                char t[5];
                                                REP(j,3) t[j] = s[20 + i*3 + j]; t[3] = '\0';

                                                // parse
                                                if(!sscanf(t,"%d", &player[k].sc[i])) {
                                                    // DQ!
                                                    player[k].rnds = i;
                                                    player[k].dq = -1;
                                                    if(i < 2) player[k].sc36 = -1;
                                                    break; // skip other rounds (filled with -1, initially)
                                                } else {
                                                    player[k].sc72 += player[k].sc[i];
                                                    if(i < 2)
                                                        player[k].sc36 += player[k].sc[i];
                                                }
                                            }
                                        }

                                        // round 1
                                        sort(player, player+n, cmp1);
                                        assert(player[n_cut-1].sc36 >= 0);
                                        for(int i = n_cut-1; i < n; i++)
                                            if(i == n-1 || player[i].sc36 != player[i+1].sc36) { n = i+1; break; }

                                        // round 2
                                        sort(player, player+n, cmp2);

                                        // print result
                                        print_result();

                                        if(T) printf("\n");
                                    }

                                    return 0;
                                }
                                ```

                        -   The Letter Crarrier's Rounds, ACM/ICPC World Finals -<

                            :   ```cpp
                                // UVa814 The Letter Carrier's Rounds
                                // Rujia Liu
                                #include<iostream>
                                #include<string>
                                #include<vector>
                                #include<set>
                                #include<map>
                                using namespace std;

                                void parse_address(const string& s, string& user, string& mta) {
                                    int k = s.find('@');
                                    user = s.substr(0, k);
                                    mta = s.substr(k+1);
                                }

                                int main() {
                                    int k;
                                    string s, t, user1, mta1, user2, mta2;
                                    set<string> addr;

                                    // 输入所有MTA，转化为地址列表
                                    while(cin >> s && s != "*") {
                                        cin >> s >> k;
                                        while(k--) { cin >> t; addr.insert(t + "@" + s); }
                                    }

                                    while(cin >> s && s != "*") {
                                        parse_address(s, user1, mta1); // 处理发件人地址

                                        vector<string> mta; // 所有需要连接的mta，按照输入顺序
                                        map<string, vector<string> > dest; // 每个mta需要发送的用户
                                        set<string> vis;
                                        while(cin >> t && t != "*") {
                                            parse_address(t, user2, mta2); // 处理收件人地址
                                            if(vis.count(t)) continue;     // 重复的收件人
                                            vis.insert(t);
                                            if(!dest.count(mta2)) { mta.push_back(mta2); dest[mta2] = vector<string>(); }
                                            dest[mta2].push_back(t);
                                        }
                                        getline(cin, t); // 把"*"这一行的回车吃掉

                                        // 输入邮件正文
                                        string data;
                                        while(getline(cin, t) && t[0] != '*') data += "     " + t + "\n";

                                        for(int i = 0; i < mta.size(); i++) {
                                            string mta2 = mta[i];
                                            vector<string> users = dest[mta2];
                                            cout << "Connection between " << mta1 << " and " << mta2 <<endl;
                                            cout << "     HELO " << mta1 << "\n";
                                            cout << "     250\n";
                                            cout << "     MAIL FROM:<" << s << ">\n";
                                            cout << "     250\n";
                                            bool ok = false;
                                            for(int i = 0; i < users.size(); i++) {
                                                cout << "     RCPT TO:<" << users[i] << ">\n";
                                                if(addr.count(users[i])) { ok = true; cout << "     250\n"; }
                                                else cout << "     550\n";
                                            }
                                            if(ok) {
                                                cout << "     DATA\n";
                                                cout << "     354\n";
                                                cout << data;
                                                cout << "     .\n";
                                                cout << "     250\n";
                                            }
                                            cout << "     QUIT\n";
                                            cout << "     221\n";
                                        }
                                    }
                                    return 0;
                                }
                                ```

                        -   Urban Elevations, 1992 World Finals -<

                            :   ```cpp
                                // UVa221 Urban Elevations
                                // Rujia Liu
                                #include<cstdio>
                                #include<algorithm>
                                using namespace std;

                                const int maxn = 100 + 5;

                                struct Building {
                                    int id;
                                    double x, y, w, d, h;
                                    bool operator < (const Building& rhs) const {
                                        return x < rhs.x || (x == rhs.x && y < rhs.y);
                                    }
                                } b[maxn];

                                int n;
                                double x[maxn*2];

                                bool cover(int i, double mx) {
                                    return b[i].x <= mx && b[i].x+b[i].w >= mx;
                                }

                                // 判断建筑物 i 在 x=mx 处否可见
                                bool visible(int i, double mx) {
                                    if(!cover(i, mx)) return false;
                                    for(int k = 0; k < n; k++)
                                        if(b[k].y < b[i].y && b[k].h >= b[i].h && cover(k, mx)) return false;
                                    return true;
                                }

                                int main() {
                                    int kase = 0;
                                    while(scanf("%d", &n) == 1 && n) {
                                        for(int i = 0; i < n; i++) {
                                            scanf("%lf%lf%lf%lf%lf", &b[i].x, &b[i].y, &b[i].w, &b[i].d, &b[i].h);
                                            x[i*2] = b[i].x; x[i*2+1] = b[i].x + b[i].w;
                                            b[i].id = i+1;
                                        }
                                        sort(b, b+n);
                                        sort(x, x+n*2);
                                        int m = unique(x, x+n*2) - x; // x 坐标排序后去重，得到 m 个坐标

                                        if(kase++) printf("\n");
                                        printf("For map #%d, the visible buildings are numbered as follows:\n%d", kase, b[0].id);
                                        for(int i = 1; i < n; i++) {
                                            bool vis = false;
                                            for(int j = 0; j < m-1; j++)
                                                if(visible(i, (x[j] + x[j+1]) / 2)) { vis = true; break; }
                                            if(vis) printf(" %d", b[i].id);
                                        }
                                        printf("\n");
                                    }
                                    return 0;
                                }
                                ```

                        -   第六章，etc。放到 bonus 那边了。

    :scissors: 2016/08/06 上午 9:30:00 2. 二分搜索 Binary Search -<

    :   -   binary search -<

            :   ```cpp
                // 如果找到 x，则返回其下标。 如果找不到 x 且 x 小于 array
                // 中的一个或多个元素，则为一个负数，该负数是大于 x 的第一
                // 个元素的索引的按位求补。 如果找不到 x 且 x 大于 array 中
                // 的任何元素，则为一个负数，该负数是（最后一个元素的索引加 1）的按位求补。

                #include <stdio.h>

                int binary_search( const int A[], const int n, const int x ) {
                    int left = 0, right = n-1, mid;
                    while( left <= right ) {
                        mid = left + (right - left) / 2;
                        if( x > A[mid] ) {
                            left = mid + 1;
                        } else if(x < A[mid]) {
                            right = mid - 1;
                        } else {
                            return mid;
                        }
                    }
                    return -(left+1);           // instead of returning -1
                }
                // -(left+1) == ~left == ~(~(~left))，可以看到这个“编码” effective，而且直观。

                int main() {
                    int A[] = { 1,  5,  6,  9,  12,    18,    25,    73  };
                    int x;
                    while( scanf("%d", &x) == 1 ) {
                        int pos = binary_search( A, sizeof(A)/sizeof(A[0]), x );
                        for( int i = 0; i < sizeof(A)/sizeof(A[0]); ++i ) {
                            printf( "[%3d]", A[i] );
                        }
                        printf( "\n" );
                        if( pos >= 0 ) {
                            printf( "%*s  ^  hit, pos=%d\n", pos*5, "", pos );
                        } else {
                            printf( "%*s  |  insert before, pos=%d\n", (-pos-1)*5, "", pos );
                        }
                    }
                }
                ```

                ```bash
                $ ./a.out

                        7
                                  right left
                        [  1][  5][  6][  9][ 12][ 18][ 25][ 73]
                                         |  insert before, pos=-4

                        9
                                     left/right
                        [  1][  5][  6][  9][ 12][ 18][ 25][ 73]
                                         ^  hit, pos=3

                        1
                        left/right
                        [  1][  5][  6][  9][ 12][ 18][ 25][ 73]
                          ^  hit, pos=0

                        73
                                                         left/right
                        [  1][  5][  6][  9][ 12][ 18][ 25][ 73]
                                                             ^  hit, pos=7

                        98
                                                           right  left
                        [  1][  5][  6][  9][ 12][ 18][ 25][ 73]
                                                                  |  insert before, pos=-9

                        0

                  right  left
                        [  1][  5][  6][  9][ 12][ 18][ 25][ 73]
                          |  insert before, pos=-1
                ```

        -   学习 Binary Search 的通用模板，不再死循环 -<

            :   ```cpp
                int binary_search( int array[], int length, int value )
                {
                    // 这两个判断不必要
                    // if( length <= 0 ) { return -1; }
                    // if( length == 1 ) { return array[0] == value ? 0: -1; }

                    int low = 0;
                    int high = length-1;
                    int mid;
                    while( low <= high ) {
                        mid = (low+high)/2;
                        if( array[mid] == value ) {
                            return mid;
                        } else if( array[mid] > value ) {
                            high = mid-1;
                        } else {
                            low  = mid+1;
                        }
                    }
                    return -1;
                }
                ```

                什么情况下，mid-1 和 mid+1 不越界？length > 1。
                但还好有 left <= right 的判断，所以越界后，while 进不去。

                感受一下 mid 的位置 -<

                :   ```
                    中间有奇数个数字
                    [   0,  1,  2,  3,  4,  ... ]
                        ^       *       ^

                    [   0,  1,  2,  3,  4,  5,  ... ]
                            ^       *       ^

                    中间有偶数个数字
                    [   0,  1,  2,  3,  4,  5,  ... ]
                        ^       *           ^

                    [   0,  1,  2,  3,  4,  5,  6,  ... ]
                            ^       *           ^

                    中间啥都没有
                    [   0,  1,  ... ]
                        ^   ^
                        *

                    [   0,  ... ]
                        ^
                        ^
                        *
                    ```

                    总之因为 (left+right)/2 是向下 round（floor）。

                    需要注意的是 -3/2 = -1.5 = -1，-1/2 = -0.5 = 0；可见是向 0 round 的。

                    ```
                    如果有负的 index
                    [      -1,  0,  ... ]
                            ^   ^
                                *

                    [  -2, -1,  0,  ... ]
                        ^   ^
                            *

                    +-----------------------------------------------------------------------------------------------+
                    |   -2, 1 ->    (left+right)/2          = -1/2 = -0.5               = 0,    round to zero       |
                    |               left + (right-left)/2   = -2 + (1-(-2))/2 = -2+1.5  = -1,   more to the left    |
                    +-----------------------------------------------------------------------------------------------+
                    ```

                    但其实……怎么 round 是无所谓的。我这里只是让自己感受一下 mid
                    的位置。面试的时候可以快速的找到中点（而不是用 index 算）。

        -   讲解 Search in Rotated Sorted Array 等 5-7 道高频二分搜索题 -<

            :   -   Search in Rotated Sorted Array -<

                    :   ![](http://whudoc.qiniudn.com/2016/20141025161730953.png)

                        ```cpp
                        class Solution {
                        public:
                            int search(vector<int>& nums, int target) {
                                return search( nums, 0, nums.size(), target );
                            }
                            int search( vector<int> &nums, int left, int right, int target, int binarysearch = 0 ) {
                                if( binarysearch == 1 ) {
                                    int mid;
                                    while( left <= right ) {
                                        mid = (left+right)/2;
                                        if( target == nums[mid] ) {
                                            return mid;
                                        } else if( target < nums[mid] ) {
                                            right = mid-1;
                                        } else {
                                            left = mid+1;
                                        }
                                    }
                                    return -1;
                                }
                                if( left > right ) { return -1; }
                                if( left < 0 ) { left = 0; }
                                if( right >= nums.size() ) { right = nums.size()-1; }

                                int mid = (left+right)/2;
                                if( target == nums[left] ) { return left; }
                                if( target == nums[right] ) { return right; }
                                if( target == nums[mid] ) { return mid; }

                                if( nums[left] < nums[right] ) {
                                    //          case 1
                                    //
                                    //              /
                                    //             /
                                    //            /
                                    //           /
                                    //          /
                                    //
                                    if( target < nums[left] || target > nums[right] ) { return -1; }
                                    if( target < nums[mid] ) {
                                        return search( nums, left,  mid-1, target, 1 ); // ordinary binary search
                                    } else {
                                        return search( nums, mid+1, right, target, 1 ); // ordinary binary search
                                    }
                                } else if( nums[left] < nums[mid] /* && nums[left] > nums[right] */ ) {
                                    //          case 2
                                    //
                                    //            /
                                    //           /
                                    //          /
                                    //              /
                                    //             /
                                    //
                                    if( nums[left] < target && target < nums[mid] ) {
                                        return search( nums,  left, mid-1, target, 1 ); // ordinary binary search
                                    } else {
                                        return search( nums, mid+1, right, target );
                                    }
                                } else if( nums[right] > nums[mid] /* nums[left] > nums[right] */ ) {
                                    //          case 3
                                    //
                                    //           /
                                    //          /
                                    //              /
                                    //             /
                                    //            /
                                    //
                                    if( nums[mid] < target && target < nums[right] ) {
                                        return search( nums, mid+1, right, target, 1 ); // ordinary binary search
                                    } else {
                                        return search( nums,  left, mid-1, target );
                                    }
                                } else {
                                    //cout << "what...?!\n";
                                    return -1;
                                }
                            }
                        };
                        ```

                        refs and see also

                        -   [【LeetCode】Search in Rotated Sorted Array解题报告 - 跳出温水的青蛙 - 博客频道 - CSDN.NET](http://blog.csdn.net/ljiabin/article/details/40453607)。
                        -   [33. Search in Rotated Sorted Array | LeetCode OJ](https://leetcode.com/problems/search-in-rotated-sorted-array/)

                -   Search in Rotated Sorted Array II -<

                    :   Follow up for "Search in Rotated Sorted Array":

                        -   What if duplicates are allowed?
                        -   Would this affect the run-time complexity? How and why?
                        -   Write a function to determine if a given target is in the array.

                        ```cpp
                        class Solution {
                        public:
                            bool search(vector<int>& nums, int target) {
                                int low = 0;
                                int high = nums.size()-1;
                                int mid;
                                while( low <= high ) {
                                    if( nums[low] < nums[high] && (target<nums[low]||nums[high]<target) ) {
                                        return false;
                                    }
                                    // if dupilicates, remove the duplication
                                    while ( low < high && nums[low] == nums[high] ) {
                                        ++low;
                                    }
                                    mid = (low+high)/2;
                                    if ( nums[mid] == target || nums[low] == target || nums[high] == target ) {
                                        return true;
                                    }
                                    // left, not rotated
                                    if ( nums[low] < target && target < nums[mid] ) {
                                        high = mid-1;
                                        continue;
                                    }
                                    // right, not rotated
                                    if ( nums[mid] < target && target < nums[high] ) {
                                        low = mid+1;
                                        continue;
                                    }
                                    // rotated
                                    if  ( nums[low]  > nums[mid] ){ high = mid-1; continue; }
                                    if  ( nums[high] < nums[mid] ){ low  = mid+1; continue; }
                                    ++low;
                                }
                                return false;
                            }
                        };
                        ```

                        refs and see also

                        -   [81. Search in Rotated Sorted Array II | LeetCode OJ](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)

                -   Find Minimum in Rotated Sorted Array -<

                    :   Suppose a sorted array is rotated at some pivot unknown
                        to you beforehand.

                        (i.e., `0 1 2 4 5 6 7` might become `4 5 6 7 0 1 2`).

                        Find the minimum element.

                        You may assume no duplicate exists in the array.

                        ```cpp
                        class Solution {
                        public:
                            int findMin(vector<int>& nums) {
                                return findMin( nums, 0, nums.size()-1 );
                            }
                            int findMin( vector<int>& nums, int low, int high ) {
                                int mid = (low+high)/2;
                                if( mid == low || mid == high ) { return min( nums[low], nums[high] ); }
                                if( nums[low] < nums[high] ) {
                                    return nums[low];
                                } else {
                                    if( nums[low] < nums[mid] ) {
                                        return min( findMin( nums, mid+1, high ), nums[low] );
                                    } else {
                                        return min( findMin( nums, low, mid-1 ), nums[mid] );
                                    }
                                }
                            }
                        };
                        ```

                        refs and see also

                        -   [153. Find Minimum in Rotated Sorted Array | LeetCode OJ](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)

                -   Find Minimum in Rotated Sorted Array II -<

                    :   The array may contain duplicates.

                        没有通过 ==

                        ```cpp
                        class Solution {
                        public:
                            int findMin(vector<int>& nums) {
                                return findMin( nums, 0, nums.size()-1 );
                            }
                            int findMin( vector<int>& nums, int low, int high ) {
                                if( low > high ) { return INT_MAX; }
                                int mid = (low+high)/2;
                                if( mid == low || mid == high ) { return min( nums[low], nums[high] ); }
                                if( nums[low] < nums[high] ) {
                                    return nums[low];
                                } else {
                                    while ( low < high && nums[low] == nums[high] ) {
                                        ++low;
                                    }
                                    mid = (low+high)/2;
                                    if( mid == low || mid == high ) { return min( nums[low], nums[high] ); }
                                    if( nums[low] < nums[mid] ) {
                                        return min( findMin( nums, mid+1, high ), nums[low] );
                                    } else {
                                        return min( findMin( nums, low, mid-1 ), nums[mid] );
                                    }
                                }
                            }
                        };
                        ```

                -   Convert Sorted Array to Binary Search Tree -<

                    :   ```cpp
                        /**
                         * Definition for a binary tree node.
                         * struct TreeNode {
                         *     int val;
                         *     TreeNode *left;
                         *     TreeNode *right;
                         *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
                         * };
                         */
                        class Solution {
                        public:
                            TreeNode* sortedArrayToBST(vector<int>& nums) {

                                if(nums.size()==0){
                                    return NULL;
                                }
                                if(nums.size()==1){
                                    return new TreeNode(nums[0]);
                                }
                                int mid = nums.size()/2;

                                TreeNode *node = new TreeNode(nums[mid]);

                                vector<int>::const_iterator first = nums.begin();
                                vector<int>::const_iterator last  = nums.begin()+mid;

                                vector<int> v(first, last);
                                node->left = sortedArrayToBST(v);

                                if (mid==nums.size()-1){
                                    node->right = NULL;
                                } else {
                                    first = nums.begin()+mid+1;
                                    last = nums.end();
                                    vector<int> v(first, last);
                                    node->right = sortedArrayToBST(v);
                                }
                                return node;
                            }
                        };
                        ```

                        *Convert Sorted List to Binary Search Tree* 和这个类似，我加了一层转换就 pass 了：

                        ```cpp
                        TreeNode* sortedListToBST(ListNode* head) {
                            vector<int> nums;
                            while( head ) {
                                nums.push_back( head->val );
                                head = head->next;
                            }
                            return sortedArrayToBST( nums );
                        }
                        ```

                        refs and see also

                        -   [154. Find Minimum in Rotated Sorted Array II | LeetCode OJ](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)
                        -   [108. Convert Sorted Array to Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)
                        -   [109. Convert Sorted List to Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)

        refs and see also

        -   [Binary search algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Binary_search_algorithm)

    :scissors: 2016/08/07 上午 9:30:00 3. 二叉树问题与分治算法 Binary Tree & Divide Conquer -<

    :   -   二叉树的节点定义 -<

            :   ```cpp
                struct TreeNode {
                    int val;
                    TreeNode *left;
                    TreeNode *right;
                    TreeNode( int x ) : val(x), left(nullptr), right(nullptr) { }
                }
                ```

                递归版的都很容易：
                （Recursive solution is trivial `['trɪvɪəl]`, could you do it iteratively `['itə,reitivli] `?）

                ```cpp
                void traversal( TreeNode *root, vector<int> &result ) {
                    if( !root ) { return; }
                    // 如果先序（中序和后序只是调整一下位置）
                    result.push_back( root->val );
                    traversal( root->left,  result );
                    traversal( root->right, result );
                }
                ```

                ```
                【从维基百科查到的 iterative 方法的算法伪码】

                DPS: Depth-first search
                BPS: Breath-first search
                --------------------------------------------
                iterativePreorder(node)
                    if (node = null)
                        return
                    s ← empty stack
                    s.push(node)
                    while (not s.isEmpty())
                        node ← s.pop()
                        visit(node)
                        if (node.right ≠ null)
                            s.push(node.right)
                        if (node.left ≠ null)
                            s.push(node.left)
                --------------------------------------------
                iterativeInorder(node)
                   s ← empty stack

                   while (not s.isEmpty() or node ≠ null)
                       if (node ≠ null)
                           s.push(node)
                           node ← node.left
                       else
                           node ← s.pop()
                           visit(node)
                           node ← node.right
                --------------------------------------------
                iterativePostorder(node)
                    s ← empty stack                                               O  1                  X-> go left/down
                    lastNodeVisited ← null                                       /                      X-> go right?
                    while (not s.isEmpty() or node ≠ null)                   2  O                       X-> go up.
                        if (node ≠ null)                                       / \
                            s.push(node)                                   3  X-> O  4
                            node ← node.left                                     / \
                        else                                                5  O    O  7
                            peekNode ← s.peek()                              /     /
                            // if right child exists and traversing node    X 6   X 8
                            // from left child, then move right
                            if (peekNode.right ≠ null and lastNodeVisited ≠ peekNode.right)
                                node ← peekNode.right
                            else
                                visit(peekNode)
                                lastNodeVisited ← s.pop()
                --------------------------------------------
                levelorder(root)
                    q ← empty queue
                    q.enqueue(root)
                    while (not q.isEmpty())
                        node ← q.dequeue()
                        visit(node)
                        if (node.left ≠ null)
                            q.enqueue(node.left)
                        if (node.right ≠ null)
                            q.enqueue(node.right)
                ```

                template:

                ```cpp
                #include <stdio.h>
                #include <iostream>
                #include <queue>
                #include <stack>
                #include <vector>
                #define nullptr 0
                using namespace std;

                struct TreeNode {
                    int val;
                    TreeNode *left;
                    TreeNode *right;
                    TreeNode(int x = -1 ) : val(x), left(NULL), right(NULL) {}  // added default ctor
                };
                void link( TreeNode &root, TreeNode * left, TreeNode *right ) {
                    root.left  = left;
                    root.right = right;
                }

                class Solution {
                    public:
                    vector<vector<int> > levelOrder( TreeNode *root );
                    ...
                };

                int main() {
                    TreeNode node[10];
                    for( int i = 0; i < 10; ++i ) { node[i].val = i; }
                    printf( "         0               \n"
                            "        / \\             \n"
                            "       /   \\            \n"
                            "      1     2            \n"
                            "    /  \\     \\         \n"
                            "   3    4     5          \n"
                            "   \\    /    / \\       \n"
                            "    6  7    8   9        \n" );
                    link( node[0], &node[1], &node[2] );
                    link( node[1], &node[3], &node[4] );
                    link( node[2],       0 , &node[5] );
                    link( node[3],       0 , &node[6] );
                    link( node[4], &node[7],       0  );
                    link( node[5], &node[8], &node[9] );
                    link( node[6],       0 ,       0  );
                    link( node[7],       0 ,       0  );
                    link( node[8],       0 ,       0  );
                    link( node[9],       0 ,       0  );

                    Solution sol;
                    vector<vector<int> > ret = sol.levelOrder( &node[0] );
                    for( int i = 0; i < ret.size(); ++i ) {
                        for( int j = 0; j < ret[i].size(); ++j ) {
                            cout << " " << ret[i][j];
                        }
                        cout << "\n";
                    }
                    return 0;
                }
                ```

                refs and see also

                -   [Tree traversal - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Tree_traversal)
                -   [Binary Tree Preorder Traversal | LeetCode OJ](https://leetcode.com/problems/binary-tree-preorder-traversal/)
                -   [Binary Tree Inorder Traversal | LeetCode OJ](https://leetcode.com/problems/binary-tree-inorder-traversal/)
                -   [Binary Tree Postorder Traversal | LeetCode OJ](https://leetcode.com/problems/binary-tree-postorder-traversal/)
                -   [Binary Tree Level Order Traversal | LeetCode OJ](https://leetcode.com/problems/binary-tree-level-order-traversal/)
                -   [Depth-first search - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Depth-first_search)
                -   [Breadth-first search - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Breadth-first_search)

        -   二叉树的深度优先遍历 Binary Tree DFS Traversal -<

            :   -   先序 / 中序 / 后序 Preorder / inorder / postorder -<

                    :   -   先序遍历 -<

                            :   -   用栈 -<

                                    :   ```cpp
                                        // Time: O(n), Space: O(n)
                                        vector<int> preorderTravesal( TreeNode *root ) {
                                            vector<int> result;
                                            stack<TreeNode *> s;
                                            if( root ) { s.push(root); }                // nullptr 一定不要 push！
                                            while( !s.empty() ) {
                                                root = s.top(); s.pop();
                                                result.push_back( root->val );
                                                if( root->right ) { s.push( root->right); }   // 这里不要疏忽了
                                                if( root->left  ) { s.push( root->left ); }
                                            }
                                            return result;
                                        }
                                        ```

                                -   Morris 先序遍历 -<

                                    :   参考 [Morris Traversal方法遍历二叉树（非递归，
                                            不用栈，`O(1)` 空间） - AnnieKim - 博客园](http://www.cnblogs.com/AnnieKim/archive/2013/06/15/MorrisTraversal.html)。

                                        要使用 O(1) 空间进行遍历，最大的难点在
                                        于，遍历到子节点的时候怎样重新返回到父
                                        节点（假设节点中没有指向父节点的 p 指
                                        针），由于不能用栈作为辅助空间。为了解
                                        决这个问题，Morris 方法用到了线索二叉树
                                        （threaded binary tree）的概念。在
                                        Morris 方法中不需要为每个节点额外分配指
                                        针指向其前驱（predecessor）和后继节点
                                        （successor），只需要利用叶子节点中的左
                                        右空指针指向某种顺序遍历下的前驱节点或
                                        后继节点就可以了。

                                        ![moris preorder](http://images.cnitblog.com/blog/300640/201306/14221458-aa5f9e92cce743ccacbc735048133058.jpg)

                                        ```cpp
                                        // Time: O(n), Space: O(1)
                                        vector<int> preorderTraversal( TreeNode *root ) {
                                            vector<int> result;
                                            TreeNode *cur = root; *prev = nullptr;

                                            while( cur ) {
                                                if( cur->left ) {
                                                    result.push_back( cur->val );
                                                    prev    = cur;
                                                    cur     = cur->right;
                                                } else {
                                                    // 查找前驱
                                                    TreeNode *node = cur->left;
                                                    while( node->right && node->right != cur ) {
                                                        node = node->right;
                                                    }
                                                    if( !node->right ) {
                                                        result.push_back( cur->val );
                                                        node->right = cur;
                                                        prev        = cur;
                                                        cur         = cur->left;
                                                    } else {
                                                        node->right = nullptr;
                                                        cur = cur->right;
                                                    }
                                                }
                                            }
                                            return result;
                                        }
                                        ```

                        -   中序（inorder）遍历 :heart: -<

                            :   -   用栈 -<

                                    :   ```
                                        =while { if / else }=

                                         down to left loop
                                         +------->-------+
                                         |              \|/
                                         |               |
                                       +-----+       +--- ---------------+
                                       |while|       |  i f  -->-- else  |
                                       +-^---+       +--- ---------- ----+
                                         |               |          | go to right subtree
                                         +-------<-------+--<-------+

                                        +--+                           +----+
                                        |if|                           |else|
                                        +--+                           +----+
                                                    X
                                                   /                           i.  pop
                                                  X                            ii. visit
                                                 /                             iii. go right
                                                ?
                                        ```


                                        ```cpp
                                        vector<int> inorderTraveral( TreeNode *root ) {
                                            vector<int> result;
                                            stack<TreeNode *> s;
                                            while( !s.empty() || root ) {
                                                if( root ) {
                                                    s.push( root );                 // 计划处理 root（当前）
                                                    root = root->left;              // 但先处理左节点
                                                } else {
                                                    root = s.top(); s.pop();        // 处理 root（当前），它的左子树已经处理完了~
                                                    result.push_back( root->val );
                                                    root = root->right;             // 然后移到右边
                                                }
                                            }
                                            return result;
                                        }
                                        ```

                                -   Moris -<

                                    :   ```cpp
                                        null
                                        ```

                                        ![红色是为了定位到某个节点，黑色线是为了
                                            找到前驱节点。](http://images.cnitblog.com/blog/300640/201306/15150628-5285f29bab234750a62e2309394b6e14.jpg)

                                        ![moris inorder](http://images.cnitblog.com/blog/300640/201306/14214057-7cc645706e7741e3b5ed62b320000354.jpg)

                        -   后序遍历 -<

                            :   -   用栈 -<

                                    :   ```cpp
                                        vector<int> postorderTraversal( TreeNode *root ) {
                                            vector<int> ret;
                                            stack<TreeNode *> s;
                                            TreeNode *pre = nullptr;
                                            while( !s.empty() || root ) {
                                                if( root ) {                                    // keep going the left
                                                    s.push( root );
                                                    root = root->left;
                                                } else {
                                                    TreeNode *root = s.top();
                                                    if( root->right && root->right != pre ) {   // left way is finsised, keep going to the right way
                                                        root = root->right;
                                                    } else {
                                                        ret.push_back( root->val );             // both left and right has been accessed.
                                                        pre = root; s.pop();                    // root == s.top();
                                                    }
                                                }
                                            }
                                            return ret;
                                        }
                                        ```

                                        Another idea, by Chenhao. -<

                                        :   ```cpp
                                            vector<int> postorderTraversal( TreeNode *root ) {
                                                vector<int> ret;
                                                stack<TreeNode *> s;
                                                if( root ) { s.push( root ); }
                                                while( !s.empty() ) {
                                                    root = s.top(); s.pop();
                                                    ret.push_back( root->val );
                                                    if( root->left  ) { s.push( root->left ); }     // 和先序遍历几乎一模一样!!! 只是调换了顺序.
                                                    if( root->right ){ s.push( root->right ); }
                                                }
                                                std::reverse( ret.begin(), ret.end() );             // the trick
                                                return ret;
                                            }
                                            ```

                                            ```
                                                A                   postorder:  DFEBCA
                                               / \
                                              B   C
                                             / \
                                            D   E
                                               /
                                              F

                                            stack       vector      action
                                            -----       ---------   -------------
                                            ||          []
                                            |A|         []          push root
                                            |BC|        [A]         not empty, pop A, log A, push B, C
                                            |B|         [AC]        not empty, pop C, log C, no push
                                            |DE|        [ACB]       not empty, pop B, log B, push D, E
                                            |DF|        [ACBE]      not empty, pop E, log E, push F
                                            |D|         [ACBEF]     not empty, pop F, log F, no push
                                            ||          [ACBEFD]    not empty, pop D, log D, no push
                                            ||          [DFEBCA]    empty, reverse vec, return
                                            ```

                                -   Moris -<

                                    :   ```cpp
                                        null
                                        ```
                -   threaded tree -<

                    :   ```cpp
                        #include <stddef.h>                             // for NULL
                        #include <stdio.h>

                        typedef int elem_t;
                        typedef struct tbt_node_t {
                            int ltag;                                   // 0 for child, 1 for thread
                            int rtag;
                            struct tbt_node_t *left;                    // left child, or pre
                            struct tbt_node_t *right;                   // right child , or succ
                            elem_t elem;                                // node
                        } tbt_node_t;

                        static void in_thread(tbt_node_t *p, tbt_node_t **pre);
                        static tbt_node_t *first(tbt_node_t *p);
                        static tbt_node_t *next(const tbt_node_t *p);

                        void create_in_thread(tbt_node_t *root) {
                            tbt_node_t *pre=NULL;
                            if( !root ) {                   // 非空二叉树，线索化
                                in_thread( root, &pre );    // threaded in_order traversal
                                pre->right = NULL;          // the only last work to do
                                pre->rtag = 1;
                            }
                        }

                        void in_order( tbt_node_t *root, int(*visit)(tbt_node_t*) ) {
                            for( tbt_node_t *p = first(root); p; p = next(p) ) { visit(p); }
                        }
                        ```

                        ```
                        self->left -> pre
                                                    B (pre)
                                                  .^ \
                                                 .    \
                                                 .     \
                                                   . . .D (p)
                                                       /
                                                      /
                                                    ~~~~ no left child, make it point to it's pre
                        pre->right -> self
                                                      A (p)
                                                     /^
                                                    /   .
                                                   /      .
                                                  B        .
                                                   \      .
                                                    D.. . (pre)
                                                     \
                                                    ~~~~ no right child, make it point to it's succ
                        ```

                        ```cpp
                        static void in_thread( tbt_node_t *p, tbt_node_t **pre ) {
                            if( p ) {
                                in_thread( p->left, pre );
                                if( !p->left ) {                        // left child point to pre
                                    p->left = *pre;
                                    p->ltag = 1;
                                }
                                /* 建立前驱结点的后继线索 */

                                if( (*pre) && !(*pre)->right ) {        // pre's right child point to self
                                    (*pre)->right = p;
                                    (*pre)->rtag = 1;
                                }
                                *pre = p;
                                in_thread( p->right, pre );
                            }
                        }
                        ```

                        ```cpp

                        // 寻找线索二叉树的中序下的第一个结点.
                        // p 线索二叉树中的任意一个结点
                        // return 此线索二叉树的第一个结点
                        static tbt_node_t *first(tbt_node_t *p) {
                            if( !p ) { return NULL; }
                            while( p->ltag == 0 ) {
                                p = p->left;            // left-most node, (may not be leaf, (it may has right child))
                            }
                            return p;
                        }

                        static tbt_node_t *next( const tbt_node_t *p ) {
                            assert( p );
                            if( p->rtag == 0 ) {
                                return first(p->right);
                            } else {
                                return p->right;        // succ
                            }
                        }
                        ```

                -   rebuild tree -<

                    :   -   原理以及人工推演 -<

                            :   ```
                                                      +---------------------------------------------+
                                                      |                                             |
                                                      v                                             |
                                {pre}       =   [    pre,+---+  {leftpre},      {rightpre}  ];      |
                                {in}        =   [ {leftin},  +----->in,<-----+  {rightin}   ];      |
                                {post}      =   [ {leftpost},   {rightpost}, +-+post        ];      |
                                                                                   ^                |
                                                                                   |                |
                                                                                   +----------------+
                                ```

                                手工推演一下：

                                ```
                                pre = "ABDGCEF";
                                in  = "DGBAECF";

                                    DGBAECF(ABDGCEF)    ->          A               ->          A
                                        / \                                                    / \
                                       /   \                                                  /   \
                                  DGB(BDG) ECF(CEF)     ->      B       C                    B     C
                                                            DG(DG)  E       F               D     E F
                                                                                             G
                                ```

                        -   先序、中序字符串到后序字符串 -<

                            :   ```cpp
                                #include <stdio.h>
                                #include <string.h>

                                void build_post( const char * pre, const char *in, const int n, char *post ) {
                                    int left_len = strchr(in, pre[0]) - in;
                                    if(n <= 0) { return; }
                                    build_post( pre+1,          in,             left_len,       post );
                                    build_post( pre+left_len+1, in+left_len+1,  n-left_len-1,   post+left_len );
                                    post[n - 1] = pre[0];                   // you can put this line before recursion.
                                }

                                int main() {
                                    puts(
                                    " tree:                        \n"
                                    "            A                 \n"
                                    "           / \\               \n"
                                    "          /   \\              \n"
                                    "         B     C              \n"
                                    "        /     / \\            \n"
                                    "       D     E   F            \n"
                                    "        \\                    \n"
                                    "         G                    \n" );
                                    const char *pre = "ABDGCEF";
                                    const char *in  = "DGBAECF";
                                    //          post= "GDBEFCA";
                                    char post[10] = { 0 };
                                    build_post( pre, in, strlen(pre), post );
                                    printf( "pre:  %s\n", pre );
                                    printf( "in:   %s\n", in );
                                    printf( "post: %s\n", post );
                                }
                                ```

                                output:

                                ```
                                 tree:
                                            A
                                           / \
                                          /   \
                                         B     C
                                        /     / \
                                       D     E   F
                                        \
                                         G

                                pre:  ABDGCEF
                                in:   DGBAECF
                                post: GDBEFCA
                                ```

                        -   生成树 -<

                            :   ```cpp
                                void rebuild( const char *pre, const char *in, int n, bt_node_t **root ) {
                                    if( n <= 0 || !pre || !in ) {                                       // 检查终止条件
                                        return;
                                    }

                                    *root = (bt_node_t*) malloc(sizeof(bt_node_t));                     // 获得前序遍历的第一个结点
                                    (*root)->elem = *pre;
                                    (*root)->left = NULL;
                                    (*root)->right = NULL;

                                    int left_len = strchr( in, pre[0] ) - in;
                                    rebuild( pre + 1, in,                                               // 重建左子树
                                             left_len,          &((*root)->left) );
                                    rebuild( pre + left_len + 1, in + left_len + 1,                     // 重建右子树
                                             n - left_len - 1,  &((*root)->right) );
                                }
                                ```

                        -   双亲表示法 -<

                            :   ```cpp
                                #include <iostream>
                                #include <string>
                                #include <sstream>
                                #include <algorithm>
                                #include <iterator>
                                #include <assert.h>
                                #include <stdio.h>
                                using namespace std;

                                const int maxv = 100 + 10;
                                int in_order    [   maxv    ];
                                int post_order  [   maxv    ];
                                int lch         [   maxv    ];
                                int rch         [   maxv    ];

                                int n;

                                bool read_list( int *a ) {
                                    string line;
                                    if( !getline( cin, line ) ) { return false; }
                                    stringstream ss( line );
                                    n = 0;
                                    int x;
                                    while( ss >> x ) { a[n++] = x; }
                                    return n > 0;
                                }

                                //  in_order[L1..R1] 和 post_order[L2..R2] 建成一颗树，返回树根
                                int build( int L1, int R1, int L2, int R2 ) {
                                    if( L1 > R1 ) { return 0; }
                                    int root = post_order[ R2 ];
                                    int p = L1;
                                    while( in_order[p] != root ) { ++p; }
                                    int cnt = p-L1;
                                    lch[ root ] = build( L1, p-1, L2, L2+cnt-1 );
                                    rch[ root ] = build( p+1, R1, L2+cnt, R2-1 );
                                    return root;
                                }

                                string print( int root, string pad ) {
                                    if( root == 0 ) { return pad; }
                                    const static string space = "        ";
                                    char buf[20];
                                    sprintf( buf, "%d", root );
                                    string result = pad + space + string(buf);
                                    result += "\n";
                                    result += print( lch[root], pad );
                                    result += print( rch[root], pad+space+space );
                                    return result;
                                }

                                int best, best_sum;

                                //          u -> root
                                void dfs( int u, int sum ) {
                                    sum += u;
                                    if( !lch[u] && !rch[u] ) { // leaf
                                        if( sum < best_sum || (sum == best_sum && u < best) ) {
                                            best = u;
                                            best_sum = sum;
                                        }
                                    }
                                    if( lch[u] ) { dfs( lch[u], sum ); }
                                    if( rch[u] ) { dfs( rch[u], sum ); }
                                }

                                int main() {
                                    while( read_list( in_order ) ) {
                                        read_list( post_order );
                                        build( 0, n-1, 0, n-1 );
                                        best_sum = -1;
                                        dfs( post_order[n-1], 0 );
                                        cout << best << "\n";
                                        cout << print( post_order[n-1], "" );
                                        copy( lch, lch+n, ostream_iterator<int>(cout, " ") );
                                        cout <<"\n";
                                        copy( rch, rch+n, ostream_iterator<int>(cout, " ") );
                                        cout <<"\n";
                                    }
                                    return 0;
                                }
                                ```

                -   DFS 模板 Introduce DFS Template :dizzy: -<

                    :   DFS (depth-first search) 是深搜。

                        ```cpp
                        void dfs( type &input, type &path, type &result, int cur or gap ) {
                            if( 数据非法 ) { return 0; }            // 终止条件
                            if( cur == input.size() ) {
                                将 path 放入 result
                            }
                            if( 可以剪纸 ) { return; }
                            for( ... ) {                            // 执行所有可能的扩展动作
                                执行动作，修改 path
                                dfs( input, step+1 or gap--, result );
                                恢复 path
                            }
                        }
                        ```

                        [Depth-first search - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Depth-first_search)

                        DFS 和回溯（backtracking）不一样。Backtracking = DFS + 减枝。

                        [Backtracking - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Backtracking)

                        [Pruning (algorithm) - Wikipedia, the free encyclopedia](http://inimino.org/~inimino/tests/js/tree_explorer/wikipedia/Pruning_(algorithm).html)

        -   二叉树的宽度优先遍历 Binary Tree BFS Traversal -<

            :   就是层序遍历（level order traversal）

                -   递归版本 -<

                    :   ```cpp
                        // Time: O(n), Space: O(n)
                        vector<vector<int> > levelOrder( TreeNode *root ) {
                            vector<vector<int> > result;
                            traverse( root, 1, result );
                            return result;
                        }

                        void traverse( TreeNode *root, size_t level, vector<vector<int> > &result ) {
                            if( !root ) { return; }
                            if( level > result.size() ) {
                                result.push_back( vector<int>() );                  // 也可以用 resize( level );
                            }
                            result[level-1].push_back( root->val );
                            traverse( root->left,   level+1, result );
                            traverse( root->right,  level+1, result );
                        }
                        ```

                -   迭代版本 1 -<

                    :   ```cpp
                        // Time: O(n), Space: O(1)
                        vector<vector<int> > levelOrder( TreeNode *root ) {
                            vector<vector<int> > ret;
                            if( !root ) { return ret; };
                            queue<TreeNode *> cur, next;

                            cur.push( root );
                            while( !cur.empty() ) {
                                vector<int> level;
                                while( !cur.empty() ) {
                                    root = cur.front(); cur.pop();
                                    level.push_back( root->val );
                                    if( root->left  ) { next.push( root->left  ); }
                                    if( root->right ) { next.push( root->right ); }
                                }
                                ret.push_back( level );
                                swap( cur, next );
                            }
                            return ret;
                        }
                        ```

                -   迭代版本 2 -<

                    :   ```cpp
                        vector<vector<int> > levelOrder( TreeNode *root ) {
                            vector<vector<int> > ret;
                            if( !root ) { return ret; }
                            queue<TreeNode *> q;
                            q.push( root );
                            q.push( nullptr );      // indicate end of cur level
                            vector<int> cur;
                            do {
                                root = q.front(); q.pop();
                                if( root ) {
                                    cur.push_back( root->val );
                                    if ( root->left  ) { q.push( root->left  ); }
                                    if ( root->right ) { q.push( root->right ); }
                                } else if( !q.empty() ) {
                                    if( !cur.empty() ) {
                                        ret.push_back( cur );
                                        cur.clear();
                                    }
                                    q.push( nullptr );
                                }
                            } while( !q.empty() );
                            if( !cur.empty() ) { ret.push_back( cur ); }
                            return ret;
                        }
                        ```

                refs and see also

                -   [Stack-based breadth-first search tree traversal](http://www.ibm.com/developerworks/aix/library/au-aix-stack-tree-traversal/index.html)
                -   [《编程之美：分层遍历二叉树》的另外两个实现 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/archive/2010/05/12/binary_tree_traversal.html)

        -   二叉搜索树 Binary Search Tree -<

            :   -   What is BST (wikipedia) -<

                    :   In computer science, binary search trees (BST), sometimes
                        called ordered or sorted binary trees, are a particular type of
                        containers: data structures that store "items" (such as
                        numbers, names etc.) in memory. They allow fast lookup,
                        addition and removal of items, and can be used to implement
                        either dynamic sets of items, or lookup tables that allow
                        finding an item by its key (e.g., finding the phone number of a
                        person by name).

                        The major advantage of binary search trees over other data
                        structures is that **the related sorting algorithms and search
                        algorithms such as in-order traversal can be very efficient**;
                        they are also easy to code.

                        Binary search trees are a fundamental data structure used to
                        construct more abstract data structures such as sets,
                        multisets, and associative arrays. Some of their disadvantages
                        are as follows:

                        -   The shape of the binary search tree depends entirely on the
                            order of insertions and deletions, and can become
                            **degenerate**. 树的结构跟数据插入删除顺序相关，可能退化。
                            解决方案是平衡二叉树。
                        -   When inserting or searching for an element in a binary
                            search tree, the key of each visited node has to be
                            compared with the key of the element to be inserted or
                            found. **不是随机访问。**
                        -   The keys in the binary search tree may be long and the run
                            time may increase. 如果 key 的比较很耗时，那就很糟。
                        -   After a long intermixed sequence of random insertion and
                            deletion, the expected height of the tree approaches square
                            root of the number of keys, √n, which grows much faster
                            than log n. **深度的预期是 sqrt(n) 比 最好的 log(n) 差很多。**
                            不过这一点好像还是在说 degenerate……

                        删除操作比较麻烦，分三种情况：

                        -   Deleting a node with no children: simply remove the node from the tree.
                        -   Deleting a node with one child: remove the node and replace it with its child.
                        -   Deleting a node with two children: call the node to be
                            deleted N. Do not delete N. Instead, choose either its
                            in-order successor node or its in-order predecessor node,
                            R. Copy the value of R to N, then recursively call delete
                            on R until reaching one of the first two cases. If you
                            choose in-order successor of a node, as right sub tree is
                            not NIL (Our present case is node has 2 children), then its
                            in-order successor is node with least value in its right
                            sub tree, which will have at a maximum of 1 sub tree, so
                            deleting it would fall in one of the first 2 cases.

                        ![Deleting a node with two children from a binary
                            search tree.  First the rightmost node in the left
                            subtree, the inorder predecessor 6, is identified.
                            Its value is copied into the node being deleted.
                            The inorder predecessor can then be easily deleted
                            because it has at most one child. The same method
                            works symmetrically using the inorder successor
                            labelled 9. 这其实是在找一个比删掉节点（7）小（当然
                            是小）但经可能大的能够接替 7 的工作的节点。这个节点
                            在左边最右。这是如图所示。](https://upload.wikimedia.org/wikipedia/commons/thumb/4/46/Binary_search_tree_delete.svg/960px-Binary_search_tree_delete.svg.png)

                        ![Tree rotations are very common internal operations in binary
                            trees to keep perfect, or near-to-perfect, internal balance in the tree.](https://upload.wikimedia.org/wikipedia/commons/thumb/4/43/BinaryTreeRotations.svg/450px-BinaryTreeRotations.svg.png)

                -   Unique Binary Search Trees，多少个变形？ -<

                    :   Given n, how many structurally unique BST's (binary search trees) that store values 1...n?

                        For example,
                        Given n = 3, there are a total of 5 unique BST's.

                        ```
                           1         3     3      2      1
                            \       /     /      / \      \
                             3     2     1      1   3      2
                            /     /       \                 \
                           2     1         2                 3
                        ```

                        ```
                        【数组为 1, 2, ... 以 i 为根节点的树，左子树由 `[i, i-1]` 构成，右子树为 `[i+1, n]` 构成。】

                        如果 n 为 1：
                                            1

                        如果 n 为 2：
                                            1               或者        2
                                             \                         /
                                              2                       1

                        f(2) =  f(0) * f(1),    1 为根的情况
                             +  f(1) * f(0),    2 为根

                        f(3) =  f(0) * f(2),    1 为根
                             +  f(1) * f(1),    2 为根
                             +  f(2) * f(0),    3 为根
                        ```

                        递推公式为 `f(i) = sum{ f(k-1)*f(i-k) } for k = 1..i`，这是一个一维动态规划。

                        ```cpp
                        int numTrees( int n ) {
                            vector<int> f( n+1, 0 );
                            f[0] = f[1] = 1;
                            for( int i = 2; i <= n; ++i ) {
                                for( int k = 1; k <= n; ++k ) {
                                    f[i] += f[k-1] * f[i-k];
                                }
                            }
                            return f[n];
                        }
                        ```

                        refs and see also

                        -   [Unique Binary Search Trees | LeetCode OJ](https://leetcode.com/problems/unique-binary-search-trees/)

                -   Validate Binary Search Tree -<

                    :   ```cpp
                        bool isValidBST( TreeNode *root ) {
                            // leetcode 的 test case 里有 0xFFFFFFFF 和 0x7FFFFFFF，
                            // 简单考虑，直接变成 long long 再比较
                            return isValidBST( root, LLONG_MIN, LLONG_MAX );
                        }

                        bool isValidBST( TreeNode *root, long long min, long long max ) {
                            if( !root ) { return true; }
                            long long val = root->val;
                            return val > min && val < max &&
                                   isValidBST( root->left, min, root->val ) &&
                                   isValidBST( root->right, root->val, max );
                        }
                        ```

                        refs and see also

                        -   [Validate Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/validate-binary-search-tree/)

                -   Convert Sorted Array to Binary Search Tree -<

                    :   Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

                        dup problem, same idea. (思路是一样的，不过那边更直白。)
                        首先要明确，这个 BST 不唯一。

                        ```cpp
                        TreeNode * sortedArrayToBST( vector<int> &nums ) {
                            return sortedArrayToBST( nums.begin(), nums.end() );
                        }
                        template<typename RandomAccessIterator>
                        TreeNode * sortedArrayToBST( RandomAccessIterator first, RandomAccessIterator last ) {
                            const auto length = distance( first, last );
                            if( length <= 0 ) { return nullptr; }
                            RandomAccessIterator mid = first + length/2;
                            TreeNode *root = new TreeNode( *mid );
                            root->left = sortedArrayToBST( first, mid );
                            root->right = sortedArrayToBST( mid+1, last );
                            return root;
                        }
                        ```

                        refs and see also

                        -   [Convert Sorted Array to Balanced Binary Search Tree (BST) – LeetCode](http://articles.leetcode.com/convert-sorted-array-into-balanced)
                        -   [Convert Sorted Array to Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

                -   Convert Sorted List to Binary Search Tree :TODO: -<

                    :   这里和上面不同的是，list 不能随机存取。最省力的方法是，先把 list 转成 array……

                        不用这种化归的偷懒策略，有两种思路：

                        -   分治法，自顶向下 O(n^2)，O(logn)
                        -   自底向上 O(n)，O(logn)

                        refs and see also

                        -   [Convert Sorted List to Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)
                        -   [Convert Sorted List to Balanced Binary Search Tree (BST) – LeetCode](http://articles.leetcode.com/convert-sorted-list-to-balanced-binary/)

        -   分治 Divide & Conquer -<

            :   -   pow(x, n) -<

                    :   实现 power(x, n) 即 x^n

                        思路：

                        -   n 为奇数，x^n = x * x^{n-1}
                        -   n 为偶数，x^n = x^{n/2} * x^{n/2}

                        或者 x^n = x^{n/2} * x^{n/2} * x^{n%2}

                        ```cpp
                        // Time: O(logn), Space: O(1)
                        double pow( double x, int n ) {
                            if( n < 0  ) { return 1.0 / pow( x, -n); }
                            if( n == 0 ) { return 1.0; }
                            double v = pow( x, n/2 );
                            if( n%2 == 0 ) {                    // divide & conquer
                                return v * v;
                            } else {
                                return v * v * x;
                            }
                        }
                        ```

                -   sqrt(x) -<

                    :   ```cpp
                        int sqrt( int x ) {
                            int left = 1, right = x / 2 + 1, mid;
                            if( x < 2 ) { return x; }                   // ?<0->..., 0->0, 1->1
                            while( left <= right ) {
                                mid = (left+right)/2;
                                if( x / mid > mid ) {
                                    left = mid+1;
                                } else if ( x / mid < mid) {
                                    right = mid-1;
                                } else {
                                    // 9/3 == 3, 10/3 == 3, 15/3 > 3, so sqrt(15) = 4
                                    break; // return mid;
                                }
                            }
                            return mid;
                        }
                        ```

                -   chess covering -<

                    :   acm-cheat

                -   schedule -<

                    :   acm-cheat

        refs and see also

        -   [Binary Trees](http://cslibrary.stanford.edu/110/BinaryTrees.html)
        -   [Binary search tree - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Binary_search_tree)
        -   [Divide and conquer algorithms - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Divide_and_conquer_algorithms)

    :scissors: 2016/00/00 上午 9:30:00 0. Sortings -<

    :   -   util: print.cpp -<

            :   print.cpp

                ```cpp
                #include <stdio.h>
                #include <algorithm>

                void print( int A[], int n, const char *msg = 0 ) {
                    using namespace std;
                    int h = *max_element(A, A+n);
                    if( h >= 10 ) { return; }
                    if( msg ) { printf( "==== %s ====\n", msg ); }
                    for( int i = 0; i < n+1; ++i ) {
                        for( int j = 0; j < h; ++j ) {
                            if( i + A[j] == h+1 ) {
                                printf( " |%d| ", A[j] );
                            } else if( i+A[j] < h+1 ) {
                                printf( "     " );
                            } else {
                                printf( " |X| " );
                            }
                        }
                        printf( "\n" );
                    }
                    for( int i = 0; i < n; ++i ) { printf( "-----" ); }     printf( "\n" );
                    for( int i = 0; i < n; ++i ) { printf( "  %d  ", i ); } printf( "\t(index)\n\n\n" );
                }
                ```

                effect

                ```
                                            |9|
                                            |X|                 |8|
                                            |X|                 |X|  |7|
                                       |6|  |X|                 |X|  |X|
                                       |X|  |X|  |5|            |X|  |X|
                                       |X|  |X|  |X|       |4|  |X|  |X|
                                  |3|  |X|  |X|  |X|       |X|  |X|  |X|
                             |2|  |X|  |X|  |X|  |X|       |X|  |X|  |X|
                             |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)
                ```

        -   insertion sort -<

            :   -   straight insertion sort -<

                    :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-22-49-insert.gif)

                        ```cpp
                        #include <stdio.h>
                        #include <algorithm>
                        #include "print.cpp"

                        using namespace std;

                        void straight_insertion_sort( int A[], const int start, const int end ) {
                            int tmp;
                            int i, j;

                            // insert ith element
                            for (i = start + 1; i < end; i++) {
                                tmp = A[i];
                                for (j = i - 1; j >= start && tmp < A[j]; j--) {    // to the left
                                    A[j + 1] = A[j];                                // j->j+1
                                }
                                A[j + 1] = tmp;
                            }
                        }

                        int main() {
                            int A[] = { 3, 2, 6, 9, 5, 1, 4, 8, 7  };
                            int n = sizeof(A)/sizeof(A[0]);
                            straight_insertion_sort( A, 0, n );
                        }
                        ```

                        which is better, why?

                        ```cpp
                        for( int j = i - 1; j >= start && tmp < A[j]; --j ) {   // good
                            A[j + 1] = A[j];
                        }

                        for( int j = i - 1; j >= start && tmp < A[j]; ) {
                            A[j + 1] = A[j];
                            --j;                                                // better in some aspect
                        }
                        ```

                        pretty output -<

                        :   ```
                            ==== before sorting ====

                                            |9|
                                            |X|                 |8|
                                            |X|                 |X|  |7|
                                       |6|  |X|                 |X|  |X|
                                       |X|  |X|  |5|            |X|  |X|
                                       |X|  |X|  |X|       |4|  |X|  |X|
                             |3|       |X|  |X|  |X|       |X|  |X|  |X|
                             |X|  |2|  |X|  |X|  |X|       |X|  |X|  |X|
                             |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== i: 1, j+1: 0 ====

                                            |9|
                                            |X|                 |8|
                                            |X|                 |X|  |7|
                                       |6|  |X|                 |X|  |X|
                                       |X|  |X|  |5|            |X|  |X|
                                       |X|  |X|  |X|       |4|  |X|  |X|
                                  |3|  |X|  |X|  |X|       |X|  |X|  |X|
                             |2|  |X|  |X|  |X|  |X|       |X|  |X|  |X|
                             |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== i: 2, j+1: 2 ====

                                            |9|
                                            |X|                 |8|
                                            |X|                 |X|  |7|
                                       |6|  |X|                 |X|  |X|
                                       |X|  |X|  |5|            |X|  |X|
                                       |X|  |X|  |X|       |4|  |X|  |X|
                                  |3|  |X|  |X|  |X|       |X|  |X|  |X|
                             |2|  |X|  |X|  |X|  |X|       |X|  |X|  |X|
                             |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== i: 3, j+1: 3 ====

                                            |9|
                                            |X|                 |8|
                                            |X|                 |X|  |7|
                                       |6|  |X|                 |X|  |X|
                                       |X|  |X|  |5|            |X|  |X|
                                       |X|  |X|  |X|       |4|  |X|  |X|
                                  |3|  |X|  |X|  |X|       |X|  |X|  |X|
                             |2|  |X|  |X|  |X|  |X|       |X|  |X|  |X|
                             |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== i: 4, j+1: 2 ====

                                                 |9|
                                                 |X|            |8|
                                                 |X|            |X|  |7|
                                            |6|  |X|            |X|  |X|
                                       |5|  |X|  |X|            |X|  |X|
                                       |X|  |X|  |X|       |4|  |X|  |X|
                                  |3|  |X|  |X|  |X|       |X|  |X|  |X|
                             |2|  |X|  |X|  |X|  |X|       |X|  |X|  |X|
                             |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== i: 5, j+1: 0 ====

                                                      |9|
                                                      |X|       |8|
                                                      |X|       |X|  |7|
                                                 |6|  |X|       |X|  |X|
                                            |5|  |X|  |X|       |X|  |X|
                                            |X|  |X|  |X|  |4|  |X|  |X|
                                       |3|  |X|  |X|  |X|  |X|  |X|  |X|
                                  |2|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                             |1|  |X|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== i: 6, j+1: 3 ====

                                                           |9|
                                                           |X|  |8|
                                                           |X|  |X|  |7|
                                                      |6|  |X|  |X|  |X|
                                                 |5|  |X|  |X|  |X|  |X|
                                            |4|  |X|  |X|  |X|  |X|  |X|
                                       |3|  |X|  |X|  |X|  |X|  |X|  |X|
                                  |2|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                             |1|  |X|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== i: 7, j+1: 6 ====

                                                                |9|
                                                           |8|  |X|
                                                           |X|  |X|  |7|
                                                      |6|  |X|  |X|  |X|
                                                 |5|  |X|  |X|  |X|  |X|
                                            |4|  |X|  |X|  |X|  |X|  |X|
                                       |3|  |X|  |X|  |X|  |X|  |X|  |X|
                                  |2|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                             |1|  |X|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== i: 8, j+1: 6 ====

                                                                     |9|
                                                                |8|  |X|
                                                           |7|  |X|  |X|
                                                      |6|  |X|  |X|  |X|
                                                 |5|  |X|  |X|  |X|  |X|
                                            |4|  |X|  |X|  |X|  |X|  |X|
                                       |3|  |X|  |X|  |X|  |X|  |X|  |X|
                                  |2|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                             |1|  |X|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)

                            ==== after sorting ====

                                                                     |9|
                                                                |8|  |X|
                                                           |7|  |X|  |X|
                                                      |6|  |X|  |X|  |X|
                                                 |5|  |X|  |X|  |X|  |X|
                                            |4|  |X|  |X|  |X|  |X|  |X|
                                       |3|  |X|  |X|  |X|  |X|  |X|  |X|
                                  |2|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                             |1|  |X|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                            ---------------------------------------------
                              0    1    2    3    4    5    6    7    8     (index)
                            ```

                -   binary insertion sort -<

                    :   ```cpp
                        void straight_insertion_sort( int A[], const int start, const int end ) {
                            int tmp;
                            int i, j;
                            for (i = start + 1; i < end; i++) {
                                tmp = A[i];
                                int left = start, right = i-1, mid;
                                while( left <= right ) {
                                    mid = (left+right)/2;
                                    if( tmp < A[mid] ) {
                                        right = mid - 1;
                                    } else {
                                        left = mid + 1;
                                    }
                                }
                                for( j = i - 1; j >= left; --j ) {
                                    A[j + 1] = A[j];
                                }
                                A[left] = tmp;
                            }
                        }
                        ```

                        ```
                        +-------------------------------+
                        |   find 4                      |
                        |                       R   L   |
                        |   0   1   2   4   4   4   6   |
                        |                           ^   |
                        +-------------------------------+

                        L=0, R=6        ->      M=3

                        L           M           R
                        0   1   2   4   4   4   6

                                        L   M   R               target >= a[M], L=M+1
                        0   1   2   4   4   4   6

                                                L
                                                M
                                                R               target <  a[M], R=M-1
                        0   1   2   4   4   4   6

                                            R   L               a[R] == 4
                        0   1   2   4   4   4   6
                        ```

                -   shell insertion sort -<

                    :   从对直接插入排序的分析得知，其算法时间复杂度为 O(n^2)，
                        但是，若待排序记录序列为“正序”时，其时间
                        复杂度可提高至 O(n)。由此可设想，若待排序记录序列
                        按关键字“基本有序”，即序列中具有下列特性
                        $$R_i.key < \max\left\{R_j.key\right\},\; j<i$$
                        的记录较少时，直接插入排序的效率就可大大提高，从另
                        一方面来看，由于直接插入排序算法简单，则在 n 值很小时
                        效率也比较高。希尔排序正是从这两点分析出发对直接插
                        入排序进行改进得到的一种插入排序方法。

                        希尔排序 (Shell Sort) 的基本思想是：设待排序元素序
                        列有 n 个元素，首先取一个整数 gap = n/3+1 作为间隔，
                        将全部元素分为 gap 个子序列，所有距离为 gap 的元素放在
                        同一个子序列中，在每一个子序列中分别施行直接插入排
                        序。然后缩小间隔 gap，取 gap=n/3+1, 重复上述的子序列
                        划分和排序工作，直到最后取 gap=1，将所有元素放在同一
                        个序列中排序为止。

                        ```cpp
                        // 和一趟直接插入排序相比，仅有一点不同，就是前后元素的间距是 gap 而不是 1
                        // [start, end)
                        // gap 间隔
                        static void shell_insert( int A[], const int start, const int end, const int gap ) {
                            int tmp;
                            int i, j;
                            for( int i = start + gap; i < end; ++i ) {
                                tmp = A[i];
                                for( int j = i - gap; j>=start && A[j] > tmp; j -= gap ) {
                                    A[j + gap] = A[j];
                                }
                                A[j + gap] = tmp;
                            }
                        }

                        void shell_sort( int A[], const int start, const int end ) {
                            int gap = end - start;
                            while( gap > 1 ) {
                                gap = gap / 3 + 1;
                                shell_insert( A, start, end, gap );
                            }
                        }
                        ```

                        if `gap <- gap/3+1 > 1`, then it's buggy.

                        ```
                        gap: 4 2 1
                        gap: 5 2 1
                        gap: 7 3 2 1
                        gap: 8 3 2 1
                        gap: 9 4 2 1
                        ```

        -   exchange sort -<

            :   -   bubble sort -<

                    :   ```cpp
                        void bubble_sort( int A[], const int start, const int end ) {
                            int exchange;
                            int tmp;
                            // i is the element to set, in this loop
                            for ( int i = start; i < end - 1; i++) {
                                exchange = 0;
                                for ( int j = end - 1; j > i; j--) {        // 发生逆序，交换
                                    if (A[j - 1] > A[j]) {
                                        tmp = A[j - 1];
                                        A[j - 1] = A[j];
                                        A[j] = tmp;
                                        exchange = 1;
                                    }
                                }
                                if( exchange == 0 ) { return; }             // 本趟无逆序，停止处理
                            }
                        }
                        ```

                -   quick sort -<

                    :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-25-47-quick.gif)

                        ```cpp
                        void quick_sort( int A[], const int start, const int end ) {
                            if( start < end - 1 ) {                                     // 至少两个元素
                                const int pivot_pos = partition( A, start, end );
                                quick_sort( A, start, pivot_pos );
                                quick_sort( A, pivot_pos + 1, end );
                            }
                        }
                        ```

                        ```cpp
                        int partition( int A[], const int start, const int end ) {
                            int i = start;
                            int j = end - 1;
                            const int pivot = A[i];

                            while( i < j ) {
                                while( j > i && A[j] >= pivot ) { j--; }    // no need to move to left
                                A[i] = A[j];                                // move
                                while( i < j && A[i] <= pivot ) { i++; }    // no need to move to right
                                A[j] = A[i];                                // move to right
                            }
                            A[i] = pivot;
                            return i;
                        }
                        ```

                        ```
                        log:
                                    -------------------------------------
                                    p0:  3  2   6   9   5   1   4   8   7
                                    p1:  1  2   3   9   5   6   4   8   7
                                    ------------+------------------------
                                    p0:  1  2   |
                                    p1:  1  2   |
                                    ------------+------------------------
                                    p0:         |   9   5   6   4   8   7
                                    p1:         |   7   5   6   4   8   9
                                    ------------+-----------------------+
                                    p0:             7   5   6   4   8   |
                                    p1:             4   5   6   7   8   |
                                    ----------------------------+-------+
                                    p0:             4   5   6   |
                                    p1:             4   5   6   |
                                    ----------------+-----------+--------
                                    p0:             |   5   6
                                    p1:             |   5   6
                                    ----------------+--------------------

                        analysis

                            pivot = 3
                            ---------

                                    3   2   6   9   5   1   4   8   7
                                    i=0                             j=8         --j
                                                                j=7             --j
                                                            j=6                 --j
                                                        j=5
                                    1   2   6   9   5   1   4   8   7           A[i=0]  =   A[j=5]  = 1
                                    i=0                                         ++i
                                        i=1                                     ++i
                                            i=2
                                    1   2   6   9   5   6   4   8   7           A[j=5]  =   A[i=2]  = 6
                                            i=2         j=5                     i < j   ->  true, loop, --j
                                                    j=4                         --j
                                                j=3                             --j
                                            j=2                                 A[i=2]  =   A[j=2]  = 6
                                    1   2   6   9   5   6   4   8   7           i < j   -> false, loop end
                                    1   2   3   9   5   6   4   8   7           A[i]    =   pivot

                            pivot = 1
                            ---------

                                    1   2
                                    i=0 j=1                                     --j
                                    j=0
                                    1   2                                       A[i=0]  =   A[j=0]
                                    1   2                                       A[i=0]  =   A[j=0]
                                    1   2                                       i < j   ->  false
                                    1   2                                       A[i=0]  =   pivot

                            pivot = 9
                            ---------

                                    9   5   6   4   8   7
                                    i=0                 j=5
                                    7   5   6   4   8   7                       A[i=0]  =   A[j=5]  = 7
                                    i=0                                         ++i
                                        i=1                                     ++i
                                            i=2                                 ++i
                                                i=3                             ++i
                                                    i=4                         ++i
                                                        i=5
                                    7   5   6   4   8   7
                                                        i=5
                                                        j=5                     i < j   ->  false
                                    7   5   6   4   8   9                       A[i=5]  =   pivot   = 9

                            p1:  7 5 6 4 8 9

                            p0:  7 5 6 4 8
                            p1:  4 5 6 7 8

                            p0:  4 5 6
                            p1:  4 5 6

                            p0:  5 6
                            p1:  5 6
                        ```

                        refs and see also

                        -   [白话经典算法系列之六 快速排序 快速搞定 - MoreWindows - 博客园](http://www.cnblogs.com/morewindows/archive/2011/08/13/2137415.html)
                        -   [快速排序 · soulmachine/acm-cheat-sheet Wiki · GitHub](https://github.com/soulmachine/acm-cheat-sheet/wiki/%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F)

        -   selection sort -<

            :   -   simple selection sort -<

                    :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-19-47-select.gif)

                        ```cpp
                        void simple_selection_sort( int A[], int start, int end ) {
                            int tmp;

                            // A[i] will be put at right position
                            for( int i = start; i < end; ++i ) {
                                int k = i;
                                for( int j = i + 1; j < end; ++j ) {
                                    if( A[j] < A[k] ) { k = j; }          // 在 a[i] 到 a[end-1] 中寻找最小元素
                                }
                                if( k != i ) {
                                    tmp = A[i]; A[i] = A[k]; A[k]= tmp;
                                }
                            }
                        }
                        ```

                -   heap sort -<

                    :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-52-11-heap-sort.gif)

                        ```cpp
                        #include <stdio.h>
                        #include "heap.c"

                        int cmp( const int *x, const int *y ) {
                            int sub = *x - *y;
                            return sub < 0 ? 1 : sub > 0 ? -1 : 0;
                        }

                        void heap_sort( int *a, const int n, int (*cmp)(const int *, const int *) ) {
                            heap_t h;
                            h.cmp = cmp;
                            h.elems = a;
                            h.size = h.capacity = n;

                            int i = (h.size - 2)/2;             // 找最初调整位置：最后分支结点
                            while( i >= 0 ) {                   // 自底向上逐步扩大形成堆
                                heap_sift_down( &h, i );
                                --i;
                            }

                            int tmp;
                            for( int i = h.size - 1; i > 0; --i ) {
                                tmp = h.elems[i]; h.elems[i] = h.elems[0]; h.elems[0] = tmp;
                                h.size = i;                     // 相当于 --h.size
                                heap_sift_down( &h, 0 );
                            }
                        }

                        int main() {
                            int A[] = { 3, 2, 6, 9, 5, 1, 4, 8, 7  };
                            int n = sizeof(A)/sizeof(A[0]);
                            heap_sort( A, n, &cmp );
                        }
                        ```

                        ```
                         3 2 6 9 5 1 4 8 7
                        before sift at 3
                         3 2 6 9 5 1 4 8 7
                         3 2 6 9 5 1 4 8 7
                        before sift at 2
                         3 2 6 9 5 1 4 8 7
                         3 2 6 9 5 1 4 8 7
                        before sift at 1
                         3 2 6 9 5 1 4 8 7
                         3 9 6 8 5 1 4 2 7
                        before sift at 0
                         3 9 6 8 5 1 4 2 7
                         9 8 6 7 5 1 4 2 3
                        before sift at 0
                         3 8 6 7 5 1 4 2
                         8 7 6 3 5 1 4 2
                        before sift at 0
                         2 7 6 3 5 1 4
                         7 5 6 3 2 1 4
                        before sift at 0
                         4 5 6 3 2 1
                         6 5 4 3 2 1
                        before sift at 0
                         1 5 4 3 2
                         5 3 4 1 2
                        before sift at 0
                         2 3 4 1
                         4 3 2 1
                        before sift at 0
                         1 3 2
                         3 1 2
                        before sift at 0
                         2 1
                         2 1
                        before sift at 0
                         1
                         1
                         1 2 3 4 5 6 7 8 9
                        ```

        -   merge sort -<

            :   ```cpp
                //  input: tmp[i/j]
                //                         start       mid         end
                //                           ^          ^
                //                          [i]        [j]
                //                            \        /
                //                              \     /
                //                                \ /
                //                                 +
                //  output:  A[i/j]                |
                //                         start   |   mid         end
                //                           ^     |
                //                           |     |
                //                          [k]--<-+
                //
                static void merge( int A[], int tmp[],
                                   const int start,
                                   const int mid,
                                   const int end )
                {
                    for ( int i = 0; i < end; ++i ) {
                        tmp[i] = A[i];
                    }

                    int i, j, k;
                    for( i = start, j = mid, k = start; i < mid && j < end; k++ ) {
                        if (tmp[i] < tmp[j]) {
                            A[k] = tmp[i++];
                        } else {
                            A[k] = tmp[j++];
                        }
                    }
                    while (i < mid) { A[k++] = tmp[i++]; }
                    while (j < end) { A[k++] = tmp[j++]; }
                }

                void merge_sort( int A[], int tmp[], const int start, const int end ) {
                    //  first   last
                    if( start < end-1 ) {                       // more than one element
                        const int mid = (start + end) / 2;
                        merge_sort( A, tmp, start, mid );
                        merge_sort( A, tmp, mid, end );
                        merge( A, tmp, start, mid, end );
                    }
                }
                ```

                ```
                merging: 0, 1, 2
                merging: 2, 3, 4
                merging: 0, 2, 4
                merging: 4, 5, 6
                merging: 7, 8, 9
                merging: 6, 7, 9
                merging: 4, 6, 9
                merging: 0, 4, 9

                    ==== before sorting ====

                                    |9|
                                    |X|                 |8|
                                    |X|                 |X|  |7|
                               |6|  |X|                 |X|  |X|
                               |X|  |X|  |5|            |X|  |X|
                               |X|  |X|  |X|       |4|  |X|  |X|
                     |3|       |X|  |X|  |X|       |X|  |X|  |X|
                     |X|  |2|  |X|  |X|  |X|       |X|  |X|  |X|
                     |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)

                    ==== start: 0, mid: 1, end: 2 ====

                                    |9|
                                    |X|                 |8|
                                    |X|                 |X|  |7|
                               |6|  |X|                 |X|  |X|
                               |X|  |X|  |5|            |X|  |X|
                               |X|  |X|  |X|       |4|  |X|  |X|
                          |3|  |X|  |X|  |X|       |X|  |X|  |X|
                     |2|  |X|  |X|  |X|  |X|       |X|  |X|  |X|
                     |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)
                      ^----^----^

                    ==== start: 2, mid: 3, end: 4 ====

                                    |9|
                                    |X|                 |8|
                                    |X|                 |X|  |7|
                               |6|  |X|                 |X|  |X|
                               |X|  |X|  |5|            |X|  |X|
                               |X|  |X|  |X|       |4|  |X|  |X|
                          |3|  |X|  |X|  |X|       |X|  |X|  |X|
                     |2|  |X|  |X|  |X|  |X|       |X|  |X|  |X|
                     |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)
                                ^----^----^

                    ==== start: 0, mid: 2, end: 4 ====

                                    |9|
                                    |X|                 |8|
                                    |X|                 |X|  |7|
                               |6|  |X|                 |X|  |X|
                               |X|  |X|  |5|            |X|  |X|
                               |X|  |X|  |X|       |4|  |X|  |X|
                          |3|  |X|  |X|  |X|       |X|  |X|  |X|
                     |2|  |X|  |X|  |X|  |X|       |X|  |X|  |X|
                     |X|  |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)
                      ^---------^---------^

                    ==== start: 4, mid: 5, end: 6 ====

                                    |9|
                                    |X|                 |8|
                                    |X|                 |X|  |7|
                               |6|  |X|                 |X|  |X|
                               |X|  |X|       |5|       |X|  |X|
                               |X|  |X|       |X|  |4|  |X|  |X|
                          |3|  |X|  |X|       |X|  |X|  |X|  |X|
                     |2|  |X|  |X|  |X|       |X|  |X|  |X|  |X|
                     |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)
                                          ^----^----^

                    ==== start: 7, mid: 8, end: 9 ====

                                    |9|
                                    |X|                      |8|
                                    |X|                 |7|  |X|
                               |6|  |X|                 |X|  |X|
                               |X|  |X|       |5|       |X|  |X|
                               |X|  |X|       |X|  |4|  |X|  |X|
                          |3|  |X|  |X|       |X|  |X|  |X|  |X|
                     |2|  |X|  |X|  |X|       |X|  |X|  |X|  |X|
                     |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)
                                                         ^----^----^

                    ==== start: 6, mid: 7, end: 9 ====

                                    |9|
                                    |X|                      |8|
                                    |X|                 |7|  |X|
                               |6|  |X|                 |X|  |X|
                               |X|  |X|       |5|       |X|  |X|
                               |X|  |X|       |X|  |4|  |X|  |X|
                          |3|  |X|  |X|       |X|  |X|  |X|  |X|
                     |2|  |X|  |X|  |X|       |X|  |X|  |X|  |X|
                     |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)
                                                    ^----^---------^

                    ==== start: 4, mid: 6, end: 9 ====

                                    |9|
                                    |X|                      |8|
                                    |X|                 |7|  |X|
                               |6|  |X|                 |X|  |X|
                               |X|  |X|            |5|  |X|  |X|
                               |X|  |X|       |4|  |X|  |X|  |X|
                          |3|  |X|  |X|       |X|  |X|  |X|  |X|
                     |2|  |X|  |X|  |X|       |X|  |X|  |X|  |X|
                     |X|  |X|  |X|  |X|  |1|  |X|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)
                                          ^---------^--------------^

                    ==== start: 0, mid: 4, end: 9 ====

                                                             |9|
                                                        |8|  |X|
                                                   |7|  |X|  |X|
                                              |6|  |X|  |X|  |X|
                                         |5|  |X|  |X|  |X|  |X|
                                    |4|  |X|  |X|  |X|  |X|  |X|
                               |3|  |X|  |X|  |X|  |X|  |X|  |X|
                          |2|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                     |1|  |X|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)
                      ^-------------------^------------------------^

                    ==== after sorting ====

                                                             |9|
                                                        |8|  |X|
                                                   |7|  |X|  |X|
                                              |6|  |X|  |X|  |X|
                                         |5|  |X|  |X|  |X|  |X|
                                    |4|  |X|  |X|  |X|  |X|  |X|
                               |3|  |X|  |X|  |X|  |X|  |X|  |X|
                          |2|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                     |1|  |X|  |X|  |X|  |X|  |X|  |X|  |X|  |X|
                    ---------------------------------------------
                      0    1    2    3    4    5    6    7    8     (index)

                ```

        -   radix sort -<

            :   ```cpp
                ```

        -   conclusion -<

            :   -----------------------------------------------------------------
                排序方法        平均时间        最坏情况    辅助存储    是否稳定
                -----------     -----------     ----------  ---------   ---------
                直接插入排序    O(n^2)          O(n^2)      O(1)        是

                折半插入排序    O(n^2)          O(n^2)      O(1)        是

                希尔排序        N/A             N/A         O(1)        否

                冒泡排序        O(n^2)          O(n^2)      O(1)        是

                快速排序        O(nlogn)        O(n^2)      O(logn)     否

                简单选择排序    O(n^2)          O(n^2)      O(1)        否

                堆排序          O(nlogn)        O(nlogn)    O(1)        否

                二路归并        O(nlogn)        O(nlogn)    O(n)        是

                基数排序        O(d*(n+R))      O(d*(n+R))  O(R)        是
                -----------------------------------------------------------------

    :scissors: 2016/00/00 上午 9:30:00 0. Brute Force -<

    :   -   Simple Enumeration -<

            :   -   Division, abcde/fghij = n, a~j -> 0~9, n = 2..79 -<

                    :   fghij * {2, 3, 4, ... } = {xxxxx, ...}, then test 0~9

                        ```cpp
                        #include <iostream>
                        #include <vector>
                        #include <utility> // pair
                        #include <stdio.h>

                        using namespace std;

                        bool five( int n ) {
                            int numpad[10] = { 0 };
                            if( n < 1234 || n > 98765   ) { return false;   }
                            if( n < 9876                ) { ++numpad[0];    }
                            while( n ) {
                                int m = n % 10;
                                ++numpad[m];
                                if( numpad[m] >= 2 ) {
                                    return false;
                                }
                                n /= 10;
                            }
                            return true;
                        }

                        bool ten( int n1, int n2, int buf[] ) {
                            int numpad[10] = { 0 };
                            if( !five(n1) || !five(n2) ) { return false; }
                            while( n1 ) {
                                int m = n1 % 10;
                                ++numpad[m];
                                if( numpad[m] >= 2 ) {
                                    return false;
                                }
                                n1 /= 10;
                            }
                            while( n2 ) {
                                int m = n2 % 10;
                                ++numpad[m];
                                if( numpad[m] >= 2 ) {
                                    return false;
                                }
                                n2 /= 10;
                            }
                            return true;
                        }

                        int main() {

                            vector<pair<int, int> > result;

                            int fghij = 1234; // 01234, but careful, not octal!
                            for( int f = fghij; f <= 98765/2; ++f ) {
                                if( !five(f) ) { continue; }
                                for( int j = 2; j <= 79; ++j ) {
                                    int a = f * j;
                                    if( a >= 98765 ) { break; }
                                    if( !five(a) ) {
                                        continue;
                                    } else {
                                        int buf[10] = { 0 };
                                        if( ten(f, a, buf) ) {
                                            printf( "hit %05d/%05d = %d\n", a, f, j );
                                            result.push_back( pair<int,int>(a, f) );
                                        }
                                    }
                                }
                            }
                            cout << "size: " << result.size() << "\n";
                        }
                        ```

                        ```
                        hit 76508/01234 = 62
                        hit 08659/01237 = 7
                        hit 86590/01237 = 70
                        hit 89064/01237 = 72
                        hit 65879/01243 = 53
                        ...
                        hit 93702/46851 = 2
                        hit 96270/48135 = 2
                        hit 96702/48351 = 2
                        hit 97026/48513 = 2
                        hit 97032/48516 = 2
                        hit 97062/48531 = 2
                        hit 97230/48615 = 2
                        hit 97302/48651 = 2
                        size: 763
                        ```

                        原答案似乎简洁很多：

                        ```cpp
                        #include<cstdio>
                        #include<cstring>
                        #include<algorithm>
                        using namespace std;

                        int main() {
                            int n, kase = 0;
                            char buf[99];
                            while(scanf("%d", &n) == 1 && n) {
                                int cnt = 0;
                                if(kase++) printf("\n");
                                for(int fghij = 1234; ; fghij++) {
                                    int abcde = fghij * n;
                                    sprintf(buf, "%05d%05d", abcde, fghij);
                                    if(strlen(buf) > 10) break;
                                    sort(buf, buf+10);
                                    bool ok = true;
                                    for(int i = 0; i < 10; i++)
                                        if(buf[i] != '0' + i) ok = false;
                                    if(ok) {
                                        cnt++;
                                        printf("%05d / %05d = %d\n", abcde, fghij, n);
                                    }
                                }
                                if(!cnt) printf("There are no solutions for %d.\n", n);
                            }
                            return 0;
                        }
                        ```

                -   Maximum -<

                    :   ```cpp
                        // UVa11059 Maximum Product
                        // Rujia Liu
                        #include<iostream>
                        using namespace std;

                        int main() {
                            int S[20], kase = 0, n;
                            while(cin >> n && n) {
                                for(int i = 0; i < n; i++) cin >> S[i];
                                long long ans = 0;
                                for(int i = 0; i < n; i++) {
                                    long long v = 1;
                                    for(int j = i; j < n; j++) {
                                        v *= S[j];
                                        if(v > ans) ans = v;
                                    }
                                }
                                cout << "Case #" << ++kase << ": The maximum product is " << ans << ".\n\n";
                            }
                            return 0;
                        }
                        ```

                -   Fractual Again? -<

                    :   ```cpp
                        // UVa10976 Fractions Again?!
                        // Rujia Liu
                        #include<cstdio>
                        #include<vector>
                        using namespace std;

                        int main() {
                            int k;
                            while(scanf("%d", &k) == 1 && k) {
                                vector<int> X, Y;
                                for(int y = k+1; y <= k*2; y++) {
                                    // 1/k = 1/x + 1/y => x = ky/(y-k)
                                    if(k*y%(y-k) == 0)
                                    { X.push_back(k*y/(y-k)); Y.push_back(y); }
                                }
                                printf("%d\n", X.size());
                                for(int i = 0; i < X.size(); i++)
                                    printf("1/%d = 1/%d + 1/%d\n", k, X[i], Y[i]);
                            }
                            return 0;
                        }
                        ```

        -   枚举排列 -<

            :   -   next_permutation :hearts: -<

                    :   下面考虑用 C 语言实现。不难想到用数组表示 P 和 S。由于 P 和 S 是互补
                        的，它们二者知道其中给一个，另一个就完全确定了，因此不用保存 P。

                        ```
                        P[0]    P[1]    P[2]    P[3]    ...     P[cur]  ...     P[n-1]
                        |-------- used -------------------------|-----not used--------|
                        ```

                        ```cpp
                        #include <stdio.h>
                        #include <stdlib.h>

                        // permutation P, set S
                        static void print_permutation_r( int n, int cur, int P[] ) {
                            if( cur == n ) {                                            // 收敛条件
                                for( int i = 0; i < n; ++i ) { printf( "%d", P[i] ); }
                                printf( "\n" );
                            }

                            // 扩展状态，尝试在 A[cur] 中填各种整数 i，按从小到大的顺序
                            for( int i = 1; i <= n; i++ ) {
                                int used = 0;
                                for( int j = 0; j < cur; j++ ) {
                                    if (P[j] == i) { used = 1; }                        // 如果 i 已经在 A[0]~A[cur-1] 出现过，则不能再选
                                }
                                if( !used ) {
                                    P[cur] = i;
                                    print_permutation_r( n, cur + 1, P );               // 递归调用
                                                                                        // 不需要恢复 P[cur]，返回上层时时会被覆盖
                                }
                            }
                        }

                        void print_permutation( int n ) {
                            int *P = (int*)malloc(n * sizeof(int));
                            print_permutation_r( n, 0, P );
                            free( P );
                        }

                        int main() {
                            print_permutation( 3 );
                        }
                        ```

                -   生成 1~n 的全排列：next_permutation. -<

                    :   ```cpp
                        // 求1~n的全排列. n<100
                        // Rujia Liu
                        #include<cstdio>
                        using namespace std;

                        int A[101];

                        // 输出1~n的全排列
                        void print_permutation(int n, int* A, int cur) {
                            if(cur == n) { // 递归边界
                                for(int i = 0; i < n; i++) printf("%d ", A[i]);
                                printf("\n");
                            } else for(int i = 1; i <= n; i++) { // 尝试在A[cur]中填各种整数i
                                int ok = 1;
                                for(int j = 0; j < cur; j++)
                                    if(A[j] == i) ok = 0; // 如果i已经在A[0]~A[cur-1]出现过，则不能再选
                                if(ok) {
                                    A[cur] = i;
                                    print_permutation(n, A, cur+1); // 递归调用
                                }
                            }
                        }

                        int main() {
                            int n;
                            scanf("%d", &n);
                            print_permutation(n, A, 0);
                            return 0;
                        }
                        ```

                -   生成可重集的排列 -<

                    :   ```cpp
                        // 可重集的全排列
                        // Rujia Liu
                        #include<cstdio>
                        #include<algorithm>
                        using namespace std;

                        int P[100], A[100];

                        // 输出数组P中元素的全排列。数组P中可能有重复元素
                        void print_permutation(int n, int* P, int* A, int cur) {
                            if(cur == n) {
                                for(int i = 0; i < n; i++) printf("%d ", A[i]);
                                printf("\n");
                            } else for(int i = 0; i < n; i++) if(!i || P[i] != P[i-1]) {
                                int c1 = 0, c2 = 0;
                                for(int j = 0; j < cur; j++) if(A[j] == P[i]) c1++;
                                for(int j = 0; j < n; j++) if(P[i] == P[j]) c2++;
                                if(c1 < c2) {
                                    A[cur] = P[i];
                                    print_permutation(n, P, A, cur+1);
                                }
                            }
                        }

                        int main() {
                            int i, n;
                            scanf("%d", &n);
                            for(i = 0; i < n; i++)
                                scanf("%d", &P[i]);
                            sort(P, P+n);
                            print_permutation(n, P, A, 0);
                            return 0;
                        }
                        ```

                        ```cpp
                        // 可重集的全排列(next_permutation版)
                        // Rujia Liu
                        #include<cstdio>
                        #include<algorithm>
                        using namespace std;

                        int main() {
                            int n, p[10];
                            scanf("%d", &n);
                            for(int i = 0; i < n; i++) scanf("%d", &p[i]);
                            sort(p, p+n); // 排序，得到p的最小排列
                            do {
                                for(int i = 0; i < n; i++) printf("%d ", p[i]); // 输出排列p
                                printf("\n");
                            } while(next_permutation(p, p+n)); // 求下一个排列
                            return 0;
                        }
                        ```

        -   子集生成 -<

            :   -   增量构造法 -<

                    :   ```cpp
                        // {0~n-1}的所有子集：增量构造法
                        // Rujia Liu
                        #include<cstdio>
                        using namespace std;

                        void print_subset(int n, int* A, int cur) {
                            for(int i = 0; i < cur; i++) printf("%d ", A[i]); // 打印当前集合
                            printf("\n");
                            int s = cur ? A[cur-1]+1 : 0; // 确定当前元素的最小可能值
                            for(int i = s; i < n; i++) {
                                A[cur] = i;
                                print_subset(n, A, cur+1); // 递归构造子集
                            }
                        }

                        int A[10];
                        int main() {
                            int n;
                            scanf("%d", &n);
                            print_subset(n, A, 0);
                            return 0;
                        }
                        ```

                -   位向量法 -<

                    :   开一个位向量 B，B[i]=1 表示选择 S[i], B[i]=0 表示不选择。

                        ```cpp
                        // {0~n-1}的所有子集：位向量法
                        // Rujia Liu
                        #include<cstdio>
                        using namespace std;

                        void print_subset(int n, int* B, int cur) {
                            if(cur == n) {
                                for(int i = 0; i < cur; i++)
                                    if(B[i]) printf("%d ", i); // 打印当前集合
                                printf("\n");
                                return;
                            }
                            B[cur] = 1; // 选第cur个元素
                            print_subset(n, B, cur+1);
                            B[cur] = 0; // 不选第cur个元素
                            print_subset(n, B, cur+1);
                        }

                        int B[10];
                        int main() {
                            int n;
                            scanf("%d", &n);
                            print_subset(5, B, 0);
                            return 0;
                        }
                        ```

                -   二进制法 -<

                    :   前提：集合的元素不超过 int 位数。用一个 int 整数表示位
                        向量，第 i 位为 1，则表示选择 S[i]，为 0 则不选择。例如
                        S=\{A,B,C,D\}，则 0110=6 表示子集 \{B,C\}。

                        这种方法最巧妙。因为它不仅能生成子集，还能方便的表
                        示集合的并、交、差等集合运算。设两个集合的位向量分
                        别为 B1 和 B2，则 B1|B2, B1&B2, B1^B2 分别对应集合的
                        并、交、对称差。

                        ```cpp
                        // {0~n-1}的所有子集：二进制法
                        // Rujia Liu
                        #include<cstdio>
                        using namespace std;

                        void print_subset(int n, int s) {  // 打印{0, 1, 2, ..., n-1}的子集S
                            for(int i = 0; i < n; i++)
                                if(s&(1<<i)) printf("%d ", i); // 这里利用了C语言“非0值都为真”的规定
                            printf("\n");
                        }

                        int main() {
                            int n;
                            scanf("%d", &n);
                            for(int i = 0; i < (1<<n); i++)  // 枚举各子集所对应的编码 0, 1, 2, ..., 2^n-1
                                print_subset(n, i);
                            return 0;
                        }
                        ```

                -   test -<

                    :   ```cpp
                        #include <stdio.h>
                        #include <stdlib.h>

                        void print_subset1(int *S, int n, int *P, int cur, int ed);
                        void print_subset2(int *S, int n, char *B, int cur);
                        void print_subset3(int *S, int n);

                        int main() {
                            int n, i;

                            while(scanf("%d",&n) > 0) {
                                int *S = (int*)malloc(n * sizeof(int));
                                int *P = (int*)malloc(n * sizeof(int));
                                char *B = (char*)malloc(n * sizeof(char));

                                for(i = 0; i < n; i++) scanf("%d",&S[i]);

                                print_subset1(S, n, P, 0, 0); putchar('\n');
                                print_subset2(S, n, B, 0); putchar('\n');
                                print_subset3(S, n);

                                free(S);
                                free(P);
                                free(B);
                            }
                            return 0;
                        }
                        ```

        -   回溯法 -<

            :   -   n 皇后问题 -<

                    :   -   orig -<

                            :   ```
                                  y - x    ?dx == dy                                y + x    ? dx == -dy (dx+dy==0)
                                      +----------------------------------> y            +-----------------------------------> y
                                      |  0   1   2   3   4   5   6   7                  |  0   1   2   3   4   5   6   7
                                      | -1   0   1   2   3   4   5   6                  |  1   2   3   4   5   6   7   8
                                      | -2  -1   0   1   2   3   4   5                  |  2   3   4   5   6   7   8   9
                                      | -3  -2  -1   0   1   2   3   4                  |  3   4   5   6   7   8   9  10
                                      | -4  -3  -2  -1   0   1   2   3                  |  4   5   6   7   8   9  10  11
                                      | -5  -4  -3  -2  -1   0   1   2                  |  5   6   7   8   9  10  11  12
                                    x | -6  -5  -4  -3  -2  -1   0   1               x  |  6   7   8   9  10  11  12  13
                                      | -7  -6  -5  -4  -3  -2  -1   0                  |  7   8   9  10  11  12  13  14
                                      V                                                 V
                                ```

                                ```cpp
                                void search( int cur ) {
                                    if( cur == n ) {
                                        ++tot;
                                    } else {
                                        for( int i = 0; i < n; ++i ) {
                                            int ok = 1;
                                            C[cur] = i;
                                            for( int j = 0; j < cur; ++j ) {
                                                int dx = cur - j, dy = C[cur] - C[j];
                                                if( C[cur] == C[j] || dx == dy || dy == -dy ) {
                                                    ok = 0; break;
                                                }
                                                if( ok ) { search(cur+1); }
                                            }
                                        }
                                    }
                                }
                                ```

                                ```cpp
                                void search( int cur ) {
                                    if( cur == n ) {
                                        ++tot;
                                    } else {
                                        for( int i = 0; i < n; ++i ) {
                                            // vis: visited, vis[0] -> col, vis[1] -> major diag, vis[2] -> minor diag
                                            if( !vis[0][i] && !vis[1][cur+i] && !vis[2][cur-i+n] ) {
                                                C[cur] = i;
                                                // col         y-x=0           y+x=0
                                                vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 1;
                                                search( cur+1 );
                                                vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 0;    // 改回来
                                            }
                                        }
                                    }
                                }
                                ```

                                print the result:

                                ```cpp
                                ++tot;
                                // add several lines here
                                printf( "solve #%d:", tot );
                                for( int i = 0; i < n; ++i ) {
                                    printf( " %d", C[i] );
                                }
                                printf( "\n" );
                                ```

                                see all the 92 solves. -<

                                :   ```
                                    solve #1: 0 4 7 5 2 6 1 3
                                    solve #2: 0 5 7 2 6 3 1 4
                                    solve #3: 0 6 3 5 7 1 4 2
                                    solve #4: 0 6 4 7 1 3 5 2
                                    solve #5: 1 3 5 7 2 0 6 4
                                    solve #6: 1 4 6 0 2 7 5 3
                                    solve #7: 1 4 6 3 0 7 5 2
                                    solve #8: 1 5 0 6 3 7 2 4
                                    solve #9: 1 5 7 2 0 3 6 4
                                    solve #10: 1 6 2 5 7 4 0 3
                                    solve #11: 1 6 4 7 0 3 5 2
                                    solve #12: 1 7 5 0 2 4 6 3
                                    solve #13: 2 0 6 4 7 1 3 5
                                    solve #14: 2 4 1 7 0 6 3 5
                                    solve #15: 2 4 1 7 5 3 6 0
                                    solve #16: 2 4 6 0 3 1 7 5
                                    solve #17: 2 4 7 3 0 6 1 5
                                    solve #18: 2 5 1 4 7 0 6 3
                                    solve #19: 2 5 1 6 0 3 7 4
                                    solve #20: 2 5 1 6 4 0 7 3
                                    solve #21: 2 5 3 0 7 4 6 1
                                    solve #22: 2 5 3 1 7 4 6 0
                                    solve #23: 2 5 7 0 3 6 4 1
                                    solve #24: 2 5 7 0 4 6 1 3
                                    solve #25: 2 5 7 1 3 0 6 4
                                    solve #26: 2 6 1 7 4 0 3 5
                                    solve #27: 2 6 1 7 5 3 0 4
                                    solve #28: 2 7 3 6 0 5 1 4
                                    solve #29: 3 0 4 7 1 6 2 5
                                    solve #30: 3 0 4 7 5 2 6 1
                                    solve #31: 3 1 4 7 5 0 2 6
                                    solve #32: 3 1 6 2 5 7 0 4
                                    solve #33: 3 1 6 2 5 7 4 0
                                    solve #34: 3 1 6 4 0 7 5 2
                                    solve #35: 3 1 7 4 6 0 2 5
                                    solve #36: 3 1 7 5 0 2 4 6
                                    solve #37: 3 5 0 4 1 7 2 6
                                    solve #38: 3 5 7 1 6 0 2 4
                                    solve #39: 3 5 7 2 0 6 4 1
                                    solve #40: 3 6 0 7 4 1 5 2
                                    solve #41: 3 6 2 7 1 4 0 5
                                    solve #42: 3 6 4 1 5 0 2 7
                                    solve #43: 3 6 4 2 0 5 7 1
                                    solve #44: 3 7 0 2 5 1 6 4
                                    solve #45: 3 7 0 4 6 1 5 2
                                    solve #46: 3 7 4 2 0 6 1 5
                                    solve #47: 4 0 3 5 7 1 6 2
                                    solve #48: 4 0 7 3 1 6 2 5
                                    solve #49: 4 0 7 5 2 6 1 3
                                    solve #50: 4 1 3 5 7 2 0 6
                                    solve #51: 4 1 3 6 2 7 5 0
                                    solve #52: 4 1 5 0 6 3 7 2
                                    solve #53: 4 1 7 0 3 6 2 5
                                    solve #54: 4 2 0 5 7 1 3 6
                                    solve #55: 4 2 0 6 1 7 5 3
                                    solve #56: 4 2 7 3 6 0 5 1
                                    solve #57: 4 6 0 2 7 5 3 1
                                    solve #58: 4 6 0 3 1 7 5 2
                                    solve #59: 4 6 1 3 7 0 2 5
                                    solve #60: 4 6 1 5 2 0 3 7
                                    solve #61: 4 6 1 5 2 0 7 3
                                    solve #62: 4 6 3 0 2 7 5 1
                                    solve #63: 4 7 3 0 2 5 1 6
                                    solve #64: 4 7 3 0 6 1 5 2
                                    solve #65: 5 0 4 1 7 2 6 3
                                    solve #66: 5 1 6 0 2 4 7 3
                                    solve #67: 5 1 6 0 3 7 4 2
                                    solve #68: 5 2 0 6 4 7 1 3
                                    solve #69: 5 2 0 7 3 1 6 4
                                    solve #70: 5 2 0 7 4 1 3 6
                                    solve #71: 5 2 4 6 0 3 1 7
                                    solve #72: 5 2 4 7 0 3 1 6
                                    solve #73: 5 2 6 1 3 7 0 4
                                    solve #74: 5 2 6 1 7 4 0 3
                                    solve #75: 5 2 6 3 0 7 1 4
                                    solve #76: 5 3 0 4 7 1 6 2
                                    solve #77: 5 3 1 7 4 6 0 2
                                    solve #78: 5 3 6 0 2 4 1 7
                                    solve #79: 5 3 6 0 7 1 4 2
                                    solve #80: 5 7 1 3 0 6 4 2
                                    solve #81: 6 0 2 7 5 3 1 4
                                    solve #82: 6 1 3 0 7 4 2 5
                                    solve #83: 6 1 5 2 0 3 7 4
                                    solve #84: 6 2 0 5 7 4 1 3
                                    solve #85: 6 2 7 1 4 0 5 3
                                    solve #86: 6 3 1 4 7 0 2 5
                                    solve #87: 6 3 1 7 5 0 2 4
                                    solve #88: 6 4 2 0 5 7 1 3
                                    solve #89: 7 1 3 0 6 4 2 5
                                    solve #90: 7 1 4 2 0 6 3 5
                                    solve #91: 7 2 0 5 1 4 6 3
                                    solve #92: 7 3 0 2 5 1 6 4
                                    92
                                    ```

                                we can also print out the details:

                                ```cpp
                                printf( "-- Solve #%03d --\n", tot );
                                for( int i = 0; i < n; ++i ) {
                                    printf( "+-+-+-+-+-+-+-+-+\n" );
                                    for( int j = 0; j < n; ++j ) {
                                        printf( "|%c", C[i] == j ? 'X' : ' ' );
                                    }
                                    printf( "|\n" );
                                }
                                printf( "-----------------\n\n" );
                                ```

                                which yields to:

                                ```
                                -- Solve #092 --
                                +-+-+-+-+-+-+-+-+
                                | | | | | | | |X|
                                +-+-+-+-+-+-+-+-+
                                | | | |X| | | | |
                                +-+-+-+-+-+-+-+-+
                                |X| | | | | | | |
                                +-+-+-+-+-+-+-+-+
                                | | |X| | | | | |
                                +-+-+-+-+-+-+-+-+
                                | | | | | |X| | |
                                +-+-+-+-+-+-+-+-+
                                | |X| | | | | | |
                                +-+-+-+-+-+-+-+-+
                                | | | | | | |X| |
                                +-+-+-+-+-+-+-+-+
                                | | | | |X| | | |
                                -----------------
                                ```

                        -   生成 - 测试法 -<

                            :   ```cpp
                                // n皇后问题：生成-测试法
                                // Rujia Liu
                                #include<cstdio>
                                using namespace std;

                                int C[50], tot = 0, n = 8, nc = 0;

                                void search(int cur) {
                                    int i, j;
                                    nc++;
                                    if(cur == n) {
                                        for(i = 0; i < n; i++)
                                            for(j = i+1; j < n; j++)
                                                if(C[i] == C[j] || i-C[i] == j-C[j] || i+C[i] == j+C[j]) return;
                                        tot++;
                                    } else for(i = 0; i < n; i++) {
                                        C[cur] = i;
                                        search(cur+1);
                                    }
                                }

                                int main() {
                                    scanf("%d", &n);
                                    search(0);
                                    printf("%d\n", tot);
                                    printf("%d\n", nc);
                                    return 0;
                                }
                                ```

                        -   普通回溯法 -<

                            :   ```cpp
                                // n皇后问题：普通回溯法
                                // Rujia Liu

                                #include<cstdio>
                                using namespace std;

                                int C[50], tot = 0, n = 8, nc = 0;

                                void search(int cur) {
                                    int i, j;
                                    nc++;
                                    if(cur == n) {
                                        tot++;
                                    } else for(i = 0; i < n; i++) {
                                        int ok = 1;
                                        C[cur] = i;
                                        for(j = 0; j < cur; j++)
                                            if(C[cur] == C[j] || cur-C[cur] == j-C[j] || cur+C[cur] == j+C[j]) {
                                                ok = 0;
                                                break;
                                            }
                                        if(ok) search(cur+1);
                                    }
                                }

                                int main() {
                                    scanf("%d", &n);
                                    search(0);
                                    printf("%d\n", tot);
                                    printf("%d\n", nc);
                                    return 0;
                                }
                                ```

                        -   普通回溯法 -<

                            :   ```cpp
                                // n皇后问题：优化的回溯法
                                // Rujia Liu

                                #include<cstdio>
                                #include<cstring>
                                using namespace std;

                                int C[50], vis[3][50], tot = 0, n = 8, nc = 0;

                                void search(int cur) {
                                    int i, j;
                                    nc++;
                                    if(cur == n) {
                                        tot++;
                                    } else for(i = 0; i < n; i++) {
                                        if(!vis[0][i] && !vis[1][cur+i] && !vis[2][cur-i+n]) {
                                            C[cur] = i;
                                            vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 1;
                                            search(cur+1);
                                            vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 0;
                                        }
                                    }
                                }

                                int main() {
                                    scanf("%d", &n);
                                    memset(vis, 0, sizeof(vis));
                                    search(0);
                                    printf("%d\n", tot);
                                    printf("%d\n", nc);
                                    return 0;
                                }
                                ```

                -   prime ring -<

                    :   brute force.

                        ```cpp
                        #include <iostream>
                        #include <algorithm> // next_permutation
                        #include <stdio.h>
                        #include <string.h>
                        #include <math.h> // sqrt

                        using namespace std;

                        const int maxn = 20;
                        int isp[maxn*2];
                        int A  [maxn];

                        bool is_prime( int num ) {
                            if( num <2 ) { return false; }
                            int ceil = 1+(int)sqrt( (double)num );
                            for( int i = 2; i < ceil; ++i ) {
                                if( num%i == 0 ) {
                                    return false;
                                }
                            }
                            return true;
                        }

                        int main() {
                            memset( isp, 0, sizeof(isp) );
                            for( int i = 0; i < maxn*2; ++i ) {
                                isp[i] = is_prime(i);
                                // printf( "%d is%s prime.\n", i, isp[i]==1? "" : " not" );
                            }

                            int n;
                            while( scanf( "%d", &n ) && n > 0 ) {
                                memset( A,   0, sizeof(A  ) );
                                for( int i = 0; i < n;   ++i ) { A[i] = i+1; }
                                do {
                                    int ok = 1;
                                    for( int i = 0; i < n; ++i ) {
                                        if( !isp[A[i]+A[(i+1)%n]] ) {
                                            ok = 0;
                                            break;
                                        }
                                    }
                                    if( ok ) {
                                        for( int i = 0; i < n; ++i ) {
                                            printf( "%d ", A[i] );
                                        }
                                        printf( "\n" );
                                    }
                                } while( next_permutation(A+1, A+n) );
                            }
                        }
                        ```

                        backtrace (buggy)

                        ```cpp
                        #include <iostream>
                        #include <algorithm> // next_permutation
                        #include <stdio.h>
                        #include <string.h>
                        #include <math.h> // sqrt

                        using namespace std;

                        const int maxn = 20;
                        int isp[maxn*2];
                        int A  [maxn];
                        int vis[maxn];

                        bool is_prime( int num ) {
                            if( num < 2 ) { return false; }
                            int ceil = 1+(int)sqrt( (double)num );
                            for( int i = 2; i < ceil; ++i ) {
                                if( num%i == 0 ) { return false; }
                            }
                            return true;
                        }

                        void dfs( int cur, int n ) {
                            if( cur == n ) {
                                if( isp[A[0]+A[n+1]] ) {    // margin
                                    for( int i = 0; i < n; ++i ) {
                                        printf( "%d ", A[i] );
                                    }
                                    printf( "\n" );
                                } else {
                                    printf( "oops\n" );
                                }
                                return;
                            } else {
                                for( int i = 2; i <= n; ++i ) {
                                    if( !vis[i] && isp[i+A[cur-1]] ) {
                                        A[cur] = i;
                                        vis[i] = 1;
                                        dfs( cur+1, n );
                                        vis[i] = 0;
                                    }
                                }
                            }
                        }

                        int main() {
                            memset( isp, 0, sizeof(isp) );
                            for( int i = 0; i < maxn*2; ++i ) { isp[i] = is_prime(i); }
                            memset( vis, 0, sizeof(vis) );
                            for( int i = 0; i < maxn; ++i ) { A[i] = i+1; }

                            int n;
                            while( scanf( "%d", &n ) && n > 0 ) {
                                dfs( 0, n );
                            }
                        }
                        ```

                        orig code:

                        ```cpp
                        // UVa524 Prime Ring Problem
                        // Rujia Liu
                        #include<cstdio>
                        #include<cstring>
                        #include<algorithm>
                        using namespace std;

                        int is_prime(int x) {
                            for(int i = 2; i*i <= x; i++)
                                if(x % i == 0) return 0;
                            return 1;
                        }

                        int n, A[50], isp[50], vis[50];
                        void dfs(int cur) {
                            if(cur == n && isp[A[0]+A[n-1]]) {
                                for(int i = 0; i < n; i++) {
                                    if(i != 0) printf(" ");
                                    printf("%d", A[i]);
                                }
                                printf("\n");
                            }
                            else for(int i = 2; i <= n; i++)
                                if(!vis[i] && isp[i+A[cur-1]]) {
                                    A[cur] = i;
                                    vis[i] = 1;
                                    dfs(cur+1);
                                    vis[i] = 0;
                                }
                        }

                        int main() {
                            int kase = 0;
                            while(scanf("%d", &n) == 1 && n > 0) {
                                if(kase > 0) printf("\n");
                                printf("Case %d:\n", ++kase);
                                for(int i = 2; i <= n*2; i++) isp[i] = is_prime(i);
                                memset(vis, 0, sizeof(vis));
                                A[0] = 1;
                                dfs(1);
                            }
                            return 0;
                        }
                        ```

                -   困难的串 Krypton Factor -<

                    :   包含两个相邻的重复子串，称之为“容易的串”，否则，“困难的串”。
                        例如，“BB”、“ABCDACABCAB”、“ABCDABCD”都是容易的，
                        而“D”、“DC”、“ABDAB”、“CBABCBA”都是困难的串。

                        输入正整数 n 和 L，输出由钱 L 个字符组成的、字典序第 k 小的困难的串。

                        ```
                        input:

                            7   3
                            30  3

                        output:

                            ABAC ABA
                            ABAC ABCA CBAB CABA CABC ACBA CABA

                        ```

                        ```cpp
                        // UVa129 Krypton Factor
                        // Rujia Liu
                        #include<stdio.h>
                        int n, L, cnt;
                        int S[100];

                        int dfs(int cur) {                                       // 返回0表示已经得到解，无须继续搜索
                            if(cnt++ == n) {
                                for(int i = 0; i < cur; i++) {
                                    if(i % 64 == 0 && i > 0) printf("\n");
                                    else if(i % 4 == 0 && i > 0) printf(" ");
                                    printf("%c", 'A'+S[i]); // 输出方案
                                }
                                printf("\n%d\n", cur);
                                return 0;
                            }
                            for(int i = 0; i < L; i++) {
                                S[cur] = i;
                                int ok = 1;
                                for(int j = 1; j*2 <= cur+1; j++) {                  // 尝试长度为j*2的后缀
                                    int equal = 1;
                                    for(int k = 0; k < j; k++)                         // 检查后一半是否等于前一半
                                        if(S[cur-k] != S[cur-k-j]) { equal = 0; break; }
                                    if(equal) { ok = 0; break; }                       // 后一半等于前一半，方案不合法
                                }
                                if(ok) if(!dfs(cur+1)) return 0;                     // 递归搜索。如果已经找到解，则直接退出
                            }
                            return 1;
                        }

                        int main() {
                            while(scanf("%d%d", &n, &L) == 2 && n > 0) {
                                cnt = 0;
                                dfs(0);
                            }
                            return 0;
                        }
                        ```

                        回溯法要注意忽略不必要的判断。

                -   Bandwith -<

                    :   给出一个 n（n<=8）个节点的图 G 和一个节点的排列。定义节点 i 的带宽
                        b(i) 为 i 和相邻结点在排列中的最远距离，而所有 b(i) 的最大值就是
                        整个图的带宽。给定图 G，求出让带宽最小的节点排列，如图 7-7 所示。

                        ```
                                    A ------------- F
                                   /               /|
                                  /               / |
                                 /               /  H
                                B ------------- G   |
                                |               |   E
                                |               |  /
                                |               | /
                                C-------------- D

                                    图 G
                        ```

                        下面两个排列的带宽分别为 6 和 5。具体说，下面
                        左图的各个结点的带宽分别为 6，6，1，4，1，1，6，6，
                        右图的各个结点的带宽分别为 5，3，1，4，3，5，1，4。

                        ```
                            +-----------------------+         +-------------------+
                            |                       |         |                   |
                        +-----------------------+   |         |   +-----------+   |
                        |   |                   |   |         |   |           |   |
                        |   |                   |   |         |   |           |   |
                        A   B   C   D   E   H   F   G         A   B   C   D   G   F   H   E
                                    |               |                     |               |
                                    |               |                     |               |
                                    +---------------+                     +---------------+

                                    (a)                                 (b)
                        ```

                        ```cpp
                        // UVa140 Bandwidth
                        // Rujia Liu
                        #include<cstdio>
                        #include<cstring>
                        #include<vector>
                        #include<algorithm>
                        using namespace std;

                        const int maxn = 10;
                        int id[256], letter[maxn];

                        int main() {
                            char input[1000];
                            while(scanf("%s", input) == 1 && input[0] != '#') {
                                // 计算结点个数并给字母编号
                                int n = 0;
                                for(char ch = 'A'; ch <= 'Z'; ch++)
                                    if(strchr(input, ch) != NULL) {
                                        id[ch] = n++;
                                        letter[id[ch]] = ch;
                                    }

                                // 处理输入
                                int len = strlen(input), p = 0, q = 0;
                                vector<int> u, v;
                                for(;;) {
                                    while(p < len && input[p] != ':') p++;
                                    if(p == len) break;
                                    while(q < len && input[q] != ';') q++;
                                    for(int i = p+1; i < q; i++) {
                                        u.push_back(id[input[p-1]]);
                                        v.push_back(id[input[i]]);
                                    }
                                    p++; q++;
                                }

                                // 枚举全排列
                                int P[maxn], bestP[maxn], pos[maxn], ans = n;
                                for(int i = 0; i < n; i++) P[i] = i;
                                do {
                                    for(int i = 0; i < n; i++) pos[P[i]] = i; // 每个字母的位置
                                    int bandwidth = 0;
                                    for(int i = 0; i < u.size(); i++)
                                        bandwidth = max(bandwidth, abs(pos[u[i]] - pos[v[i]])); // 计算带宽
                                    if(bandwidth < ans) {
                                        ans = bandwidth;
                                        memcpy(bestP, P, sizeof(P));
                                    }
                                } while(next_permutation(P, P+n));

                                // 输出
                                for(int i = 0; i < n; i++) printf("%c ", letter[bestP[i]]);
                                printf("-> %d\n", ans);
                            }
                            return 0;
                        }
                        ```

                -   Mobile Computing -<

                    :   ```cpp
                        // UVa1354 Mobile Computing
                        // Rujia Liu
                        #include<cstdio>
                        #include<cstring>
                        #include<vector>
                        using namespace std;

                        struct Tree {
                            double L, R; // distance from the root to the leftmost/rightmost point
                            Tree():L(0),R(0) {}
                        };

                        const int maxn = 6;

                        int n, vis[1<<maxn];
                        double r, w[maxn], sum[1<<maxn];
                        vector<Tree> tree[1<<maxn];

                        void dfs(int subset) {
                            if(vis[subset]) return;
                            vis[subset] = true;

                            bool have_children = false;
                            for(int left = (subset-1)&subset; left; left = (left-1)&subset) {
                                have_children = true;

                                int right = subset^left;
                                double d1 = sum[right] / sum[subset];
                                double d2 = sum[left] / sum[subset];

                                dfs(left); dfs(right);

                                for(int i = 0; i < tree[left].size(); i++)
                                    for(int j = 0; j < tree[right].size(); j++) {
                                        Tree t;
                                        t.L = max(tree[left][i].L + d1, tree[right][j].L - d2);
                                        t.R = max(tree[right][j].R + d2, tree[left][i].R - d1);
                                        if(t.L + t.R < r) tree[subset].push_back(t);
                                    }
                            }

                            if(!have_children) tree[subset].push_back(Tree());
                        }

                        int main() {
                            int T;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%lf%d", &r, &n);
                                for(int i = 0; i < n; i++) scanf("%lf", &w[i]);
                                for(int i = 0; i < (1<<n); i++) {
                                    sum[i] = 0;
                                    tree[i].clear();
                                    for(int j = 0; j < n; j++)
                                        if(i & (1<<j)) sum[i] += w[j];
                                }

                                int root = (1<<n)-1;
                                memset(vis, 0, sizeof(vis));
                                dfs(root);

                                double ans = -1;
                                for(int i = 0; i < tree[root].size(); i++)
                                    ans = max(ans, tree[root][i].L + tree[root][i].R);
                                printf("%.10lf\n", ans);
                            }
                            return 0;
                        }
                        ```

        -   路径寻找问题 -<

            :   -   八数码问题 -<

                    :   ```
                        +---+---+---+        +---+---+---+
                        | 2 | 6 | 4 |        | 8 | 1 | 5 |
                        +---+---+---+        +---+---+---+
                        | 1 | 3 | 7 |        | 7 | 3 | 6 |
                        +---+---+---+        +---+---+---+
                        |   | 5 | 8 |        | 4 |   | 2 |
                        +---+---+---+        +---+---+---+

                        input: (current, goal)

                            2   6   4   1   3   7   0   5   8
                            8   1   5   7   3   6   4   0   2

                        output: (#steps)

                            31
                        ```

                        ```cpp
                        #include <iostream>
                        #include <algorithm> // next_permutation
                        #include <stdio.h>
                        #include <string.h>
                        #include <math.h> // sqrt

                        using namespace std;

                        typedef int State[9];
                        const int maxstate = 100000;

                        State st[maxstate], goal;
                        // int goal[9];
                        int dist[maxstate];

                        const int dx[] = {  -1,  1,  0,  0  };
                        const int dy[] = {   0,  0, -1,  1  };

                        int vis[362880], fact[9];
                        void init_lookup_table() {
                            fact[0] = 1;
                            for( int i = 1; i < 9; ++i ) {
                                fact[i] = fact[i-1] * i;
                            }
                        }

                        int try_to_insert( int s ) {
                            int code = 0;
                            for( int i = 0; i < 9; ++i ) {
                                int cnt = 0;
                                for( int j = i+1; j < 9; ++j ) {
                                    if( st[s][j] < st[s][i] ) {
                                        ++cnt;
                                    }
                                }
                                code += fact[8-i] * cnt;
                            }
                            if( vis[code] ) {
                                return 0;
                            } else {
                                return vis[code] = 1;
                            }
                        }

                        int bfs() {
                            init_lookup_table();
                            int front = 1, rear = 2;                // 0 is 'not exist'
                            while( front < rear ) {
                                State &s = st[front];
                                if( memcmp( goal, s, sizeof(s) ) == 0 ) {
                                    return front;                   // gotcha
                                }
                                int z;
                                for( z = 0; z < 9; ++z ) { if( !s[z] ) { break; } }     // get '0'
                                int x = z/3, y = z%3;
                                for( int d = 0; d < 4; ++d ) {
                                    int newx = x + dx[d];
                                    int newy = y + dy[d];
                                    int newz = newx * 3 + newy;
                                    if( newx >= 0 && newx < 3 && newy >= 0 && newy < 3 ) {
                                        State &t = st[rear];
                                        // seems, both `&t' or `t' will work
                                        memcpy( t, s, sizeof(s) );  // type of t, s: int[9] is actually a int *
                                        t[newz] = s[z];
                                        t[z] = s[newz];
                                        dist[rear] = dist[front] + 1;
                                        if( try_to_insert(rear) ) {
                                            ++rear;
                                        }
                                    }
                                }
                                ++front;
                            }
                            return 0;
                        }

                        int main() {
                            for( int i = 0; i < 9; ++i ) { scanf( "%d", &st[1][i] ); }
                            for( int i = 0; i < 9; ++i ) { scanf( "%d", &goal[i] ); }
                            int ans = bfs();
                            if( ans > 0 ) {
                                printf( "%d\n", dist[ans] );
                            } else {
                                printf( "-1\n" );
                            }
                            return 0;
                        }
                        ```

                        ```
                        input.txt

                            2   6   4   1   3   7   0   5   8
                            8   1   5   7   3   6   4   0   2

                        output.txt

                            1   2   3   4   5   6   7   8   0
                            1   2   3   4   5   6   8   7   0
                        ```

                        run it:

                        ```bash
                        g++ source.cpp -o source
                        cat input.txt | ./source
                        ```

                        完美哈希。

                -   埃及分数问题 -<

                    :   ```cpp
                        // 埃及分数问题
                        // Rujia Liu

                        #include<cstdio>
                        #include<cstring>
                        #include<iostream>
                        #include<algorithm>
                        #include<cassert>
                        using namespace std;

                        int a, b, maxd;

                        typedef long long LL;

                        LL gcd(LL a, LL b) {
                          return b == 0 ? a : gcd(b, a%b);
                        }

                        // 返回满足1/c <= a/b的最小c
                        inline int get_first(LL a, LL b) {
                          return b/a+1;
                        }

                        const int maxn = 100 + 5;

                        LL v[maxn], ans[maxn];

                        // 如果当前解v比目前最优解ans更优，更新ans
                        bool better(int d) {
                          for(int i = d; i >= 0; i--) if(v[i] != ans[i]) {
                            return ans[i] == -1 || v[i] < ans[i];
                          }
                          return false;
                        }

                        // 当前深度为d，分母不能小于from，分数之和恰好为aa/bb
                        bool dfs(int d, int from, LL aa, LL bb) {
                          if(d == maxd) {
                            if(bb % aa) return false; // aa/bb必须是埃及分数
                            v[d] = bb/aa;
                            if(better(d)) memcpy(ans, v, sizeof(LL) * (d+1));
                            return true;
                          }
                          bool ok = false;
                          from = max(from, get_first(aa, bb)); // 枚举的起点
                          for(int i = from; ; i++) {
                            // 剪枝：如果剩下的maxd+1-d个分数全部都是1/i，加起来仍然不超过aa/bb，则无解
                            if(bb * (maxd+1-d) <= i * aa) break;
                            v[d] = i;
                            // 计算aa/bb - 1/i，设结果为a2/b2
                            LL b2 = bb*i;
                            LL a2 = aa*i - bb;
                            LL g = gcd(a2, b2); // 以便约分
                            if(dfs(d+1, i+1, a2/g, b2/g)) ok = true;
                          }
                          return ok;
                        }

                        int main() {
                          int kase = 0;
                          while(cin >> a >> b) {
                            int ok = 0;
                            for(maxd = 1; maxd <= 100; maxd++) {
                              memset(ans, -1, sizeof(ans));
                              if(dfs(0, get_first(a, b), a, b)) { ok = 1; break; }
                            }
                            cout << "Case " << ++kase << ": ";
                            if(ok) {
                              cout << a << "/" << b << "=";
                              for(int i = 0; i < maxd; i++) cout << "1/" << ans[i] << "+";
                              cout << "1/" << ans[maxd] << "\n";
                            } else cout << "No solution.\n";
                          }
                          return 0;
                        }
                        ```

                -   7-8 UVa10603 Fill                               UVa10603.cpp -<

                    :   ```cpp
                        // UVa10603 Fill
                        // Rujia Liu
                        #include<cstdio>
                        #include<cstring>
                        #include<queue>
                        using namespace std;

                        struct Node {
                            int v[3], dist;
                            bool operator < (const Node& rhs) const {
                                return dist > rhs.dist;
                            }
                        };

                        const int maxn = 200 + 5;
                        int mark[maxn][maxn], dist[maxn][maxn], cap[3], ans[maxn];

                        void update_ans(const Node& u) {
                            for(int i = 0; i < 3; i++) {
                                int d = u.v[i];
                                if(ans[d] < 0 || u.dist < ans[d]) ans[d] = u.dist;
                            }
                        }

                        void solve(int a, int b, int c, int d) {
                            cap[0] = a; cap[1] = b; cap[2] = c;
                            memset(ans, -1, sizeof(ans));
                            memset(mark, 0, sizeof(mark));
                            memset(dist, -1, sizeof(dist));
                            priority_queue<Node> q;

                            Node start;
                            start.dist = 0;
                            start.v[0] = 0; start.v[1] = 0; start.v[2] = c;
                            q.push(start);

                            dist[0][0] = 0;
                            while(!q.empty()) {
                                Node u = q.top(); q.pop();
                                if(mark[u.v[0]][u.v[1]]) continue;
                                mark[u.v[0]][u.v[1]] = 1;
                                update_ans(u);
                                if(ans[d] >= 0) break;
                                for(int i = 0; i < 3; i++)
                                    for(int j = 0; j < 3; j++) if(i != j) {
                                        if(u.v[i] == 0 || u.v[j] == cap[j]) continue;
                                        int amount = min(cap[j], u.v[i] + u.v[j]) - u.v[j];
                                        Node u2;
                                        memcpy(&u2, &u, sizeof(u));
                                        u2.dist = u.dist + amount;
                                        u2.v[i] -= amount;
                                        u2.v[j] += amount;
                                        int& D = dist[u2.v[0]][u2.v[1]];
                                        if(D < 0 || u2.dist < D){
                                            D = u2.dist;
                                            q.push(u2);
                                        }
                                    }
                            }
                            while(d >= 0) {
                                if(ans[d] >= 0) {
                                    printf("%d %d\n", ans[d], d);
                                    return;
                                }
                                d--;
                            }
                        }

                        int main() {
                            int T, a, b, c, d;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d%d%d%d", &a, &b, &c, &d);
                                solve(a, b, c, d);
                            }
                            return 0;
                        }
                        ```

                -   7-9 UVa1601 The Morning after Halloween         UVa1601.cpp -<

                    :   ```cpp
                        // UVa1601 The Morning after Halloween
                        // Rujia Liu
                        // This code implements the simpliest yet efficient-enough algorithm I'm aware of
                        // Readers are encouraged to experiment on other algorithms (especially for better efficiency!)
                        #include<cstdio>
                        #include<cstring>
                        #include<cctype>
                        #include<queue>
                        using namespace std;

                        const int maxs = 20;
                        const int maxn = 150; // 75% cells plus 2 fake nodes
                        const int dx[]={1,-1,0,0,0}; // 4 moves, plus "no move"
                        const int dy[]={0,0,1,-1,0};

                        inline int ID(int a, int b, int c) {
                            return (a<<16)|(b<<8)|c;
                        }

                        int s[3], t[3]; // starting/ending position of each ghost

                        int deg[maxn], G[maxn][5]; // target cells for each move (including "no move")

                        inline bool conflict(int a, int b, int a2, int b2) {
                            return a2 == b2 || (a2 == b && b2 == a);
                        }

                        int d[maxn][maxn][maxn]; // distance from starting state

                        int bfs() {
                            queue<int> q;
                            memset(d, -1, sizeof(d));
                            q.push(ID(s[0], s[1], s[2])); // starting node
                            d[s[0]][s[1]][s[2]] = 0;
                            while(!q.empty()) {
                                int u = q.front(); q.pop();
                                int a = (u>>16)&0xff, b = (u>>8)&0xff, c = u&0xff;
                                if(a == t[0] && b == t[1] && c == t[2]) return d[a][b][c]; // solution found
                                for(int i = 0; i < deg[a]; i++) {
                                    int a2 = G[a][i];
                                    for(int j = 0; j < deg[b]; j++) {
                                        int b2 = G[b][j];
                                        if(conflict(a, b, a2, b2)) continue;
                                        for(int k = 0; k < deg[c]; k++) {
                                            int c2 = G[c][k];
                                            if(conflict(a, c, a2, c2)) continue;
                                            if(conflict(b, c, b2, c2)) continue;
                                            if(d[a2][b2][c2] != -1) continue;
                                            d[a2][b2][c2] = d[a][b][c]+1;
                                            q.push(ID(a2, b2, c2));
                                        }
                                    }
                                }
                            }
                            return -1;
                        }

                        int main() {
                            int w, h, n;

                            while(scanf("%d%d%d\n", &w, &h, &n) == 3 && n) {
                                char maze[20][20];
                                for(int i = 0; i < h; i++)
                                    fgets(maze[i], 20, stdin);

                                // extract empty cells
                                int cnt, x[maxn], y[maxn], id[maxs][maxs]; // cnt is the number of empty cells
                                cnt = 0;
                                for(int i = 0; i < h; i++)
                                    for(int j = 0; j < w; j++)
                                        if(maze[i][j] != '#') {
                                            x[cnt] = i; y[cnt] = j; id[i][j] = cnt;
                                            if(islower(maze[i][j])) s[maze[i][j] - 'a'] = cnt;
                                            else if(isupper(maze[i][j])) t[maze[i][j] - 'A'] = cnt;
                                            cnt++;
                                        }

                                // build a graph of empty cells
                                for(int i = 0; i < cnt; i++) {
                                    deg[i] = 0;
                                    for(int dir = 0; dir < 5; dir++) {
                                        int nx = x[i]+dx[dir], ny = y[i]+dy[dir];
                                        // "Outermost cells of a map are walls" means we don't need to check out-of-bound
                                        if(maze[nx][ny] != '#') G[i][deg[i]++] = id[nx][ny];
                                    }
                                }

                                // add fakes nodes so that in each case we have 3 ghosts. this makes the code shorter
                                if(n <= 2) { deg[cnt] = 1; G[cnt][0] = cnt; s[2] = t[2] = cnt++; }
                                if(n <= 1) { deg[cnt] = 1; G[cnt][0] = cnt; s[1] = t[1] = cnt++; }

                                printf("%d\n", bfs());
                            }
                            return 0;
                        }
                        ```

                -   7-10 UVa11212 Editing a Book                    UVa11212.cpp -<

                    :   ```cpp
                        // UVa11212 Editing a Book
                        // Rujia Liu
                        // This implementation is not very fast, but easy to understand
                        #include<cstdio>
                        #include<cstring>
                        using namespace std;

                        const int maxn = 9;
                        int n, a[maxn];

                        bool is_sorted() {
                            for(int i = 0; i < n-1; i++)
                                if(a[i] >= a[i+1]) return false;
                            return true;
                        }

                        // the number of integers with incorrect successor
                        int h() {
                            int cnt = 0;
                            for(int i = 0; i < n-1; i++)
                                if(a[i]+1 != a[i+1]) cnt++;
                            if(a[n-1] != n) cnt++;
                            return cnt;
                        }

                        bool dfs(int d, int maxd) {
                            if(d*3 + h() > maxd*3) return false;
                            if(is_sorted()) return true;

                            int b[maxn], olda[maxn];
                            memcpy(olda, a, sizeof(a));
                            for(int i = 0; i < n; i++)
                                for(int j = i; j < n; j++) {
                                    // cut
                                    int cnt = 0;
                                    for(int k = 0; k < n; k++)
                                        if(k < i || k > j) b[cnt++] = a[k];

                                    // insert before position k
                                    for(int k = 0; k <= cnt; k++) {
                                        int cnt2 = 0;
                                        for(int p = 0; p < k; p++) a[cnt2++] = b[p];
                                        for(int p = i; p <= j; p++) a[cnt2++] = olda[p];
                                        for(int p = k; p < cnt; p++) a[cnt2++] = b[p];

                                        if(dfs(d+1, maxd)) return true;
                                        memcpy(a, olda, sizeof(a));
                                    }
                                }
                            return false;
                        }

                        int solve() {
                            if(is_sorted()) return 0;
                            int max_ans = 5; // after experiments, we found ans <= 5 for n <= 9
                            for(int maxd = 1; maxd < max_ans; maxd++)
                                if(dfs(0, maxd)) return maxd;
                            return max_ans;
                        }

                        int main() {
                            int kase = 0;
                            while(scanf("%d", &n) == 1 && n) {
                                for(int i = 0; i < n; i++) scanf("%d", &a[i]);
                                printf("Case %d: %d\n", ++kase, solve());
                            }
                            return 0;
                        }
                        ```

                -   7-11 UVa12325 Zombie's Treasure Chest           UVa12325.cpp -<

                    :   ```cpp
                        // UVa12325 Zombie's Treasure Chest
                        // Rujia Liu
                        #include<cstdio>
                        #include<algorithm>
                        using namespace std;

                        typedef long long LL;

                        int main(){
                            int T;
                            scanf("%d", &T);
                            for(int kase = 1; kase <= T; kase++) {
                                int n, s1, v1, s2, v2;
                                scanf("%d%d%d%d%d", &n, &s1, &v1, &s2, &v2);
                                if(s1 > s2){
                                    swap(s1, s2);
                                    swap(v1, v2);
                                }
                                LL ans = 0;
                                if(n / s2 >= 65536){ // both s1 and s2 are small
                                    for(LL i = 0; i <= s1; i++){
                                        ans = max(ans, v2*i + (n-s2*i)/s1*v1);
                                    }
                                    for(LL i = 0; i <= s2; i++){
                                        ans = max(ans, v1*i + (n-s1*i)/s2*v2);
                                    }
                                }else{ // s2 is large
                                    for(LL i = 0; s2*i <= n; i++)
                                        ans = max(ans, v2*i + (n-s2*i)/s1*v1);
                                }
                                printf("Case #%d: %lld\n", kase, ans);
                            }
                            return 0;
                        }
                        ```

                -   7-12 UVa1343 The Rotation Game                  UVa1343.cpp -<

                    :   ```cpp
                        // UVa1343 The Rotation Game
                        // Rujia Liu
                        // This solutions uses IDA* instead of BFS described in the book, because it's shorter 8-)
                        // It's shorter because no need for lookup tables and "automatically" lexicographically smallest solution.
                        #include<cstdio>
                        #include<algorithm>
                        using namespace std;

                        /*
                           00    01
                           02    03
                           04 05 06 07 08 09 10
                           11    12
                           13 14 15 16 17 18 19
                           20    21
                           22    23
                           */

                        // lines E~H are computed with the help of rev[]
                        int line[8][7]={
                            { 0, 2, 6,11,15,20,22}, // A
                            { 1, 3, 8,12,17,21,23}, // B
                            {10, 9, 8, 7, 6, 5, 4}, // C
                            {19,18,17,16,15,14,13}, // D
                        };

                        const int rev[8] = {5, 4, 7, 6, 1, 0, 3, 2}; // reverse lines of each line

                        // center squares
                        const int center[8] = {6, 7, 8, 11, 12, 15, 16, 17};

                        int a[24];
                        char ans[1000];

                        bool is_final() {
                            for(int i = 0; i < 8; i++)
                                if (a[center[i]] != a[center[0]]) return false;
                            return true;
                        }

                        int diff(int target) {
                            int ans = 0;
                            for(int i = 0; i < 8; i++)
                                if(a[center[i]] != target) ans++;
                            return ans;
                        }

                        inline int h() {
                            return min(min(diff(1), diff(2)), diff(3));
                        }

                        inline void move(int i) {
                            int tmp = a[line[i][0]];
                            for(int j = 0; j < 6; j++) a[line[i][j]] = a[line[i][j+1]];
                            a[line[i][6]] = tmp;
                        }

                        bool dfs(int d, int maxd) {
                            if(is_final()) {
                                ans[d] = '\0';
                                printf("%s\n", ans);
                                return true;
                            }
                            if(d + h() > maxd) return false;
                            for(int i = 0; i < 8; i++) {
                                ans[d] = 'A' + i;
                                move(i);
                                if(dfs(d+1, maxd)) return true;
                                move(rev[i]);
                            }
                            return false;
                        }

                        int main() {
                            for(int i = 4; i < 8; i++)
                                for(int j = 0; j < 7; j++) line[i][j] = line[rev[i]][6-j];

                            while(scanf("%d", &a[0]) == 1 && a[0]) {
                                for(int i = 1; i < 24; i++) scanf("%d", &a[i]);
                                for(int i = 0; i < 24; i++) if(!a[i]) return 0;
                                if(is_final()) {
                                    printf("No moves needed\n");
                                } else {
                                    for(int maxd = 1; ; maxd++)
                                        if(dfs(0, maxd)) break;
                                }
                                printf("%d\n", a[6]);
                            }
                            return 0;
                        }
                        ```

                -   7-13 UVa1374 Power Calculus                     UVa1374.cpp -<

                    :   ```cpp
                        // UVa1374 Power Calculus
                        // Rujia Liu
                        #include<cstdio>
                        #include<cstring>
                        #include<algorithm>
                        using namespace std;

                        const int maxans = 13; // we got it by experimenting

                        int n, a[maxans+1];

                        bool dfs(int d, int maxd) {
                            if(a[d] == n) return true;
                            if(d == maxd) return false;

                            int maxv = a[0];
                            for(int i = 1; i <= d; i++) maxv = max(maxv, a[i]);
                            if((maxv << (maxd-d)) < n) return false;

                            // Always use the last value.
                            // I can't prove it, but we haven't found a counter-example for n <= 1000
                            for(int i = d; i >= 0; i--) {
                                a[d+1] = a[d] + a[i];
                                if(dfs(d+1, maxd)) return true;
                                a[d+1] = a[d] - a[i];
                                if(dfs(d+1, maxd)) return true;
                            }
                            return false;
                        }

                        int solve(int n) {
                            if(n == 1) return 0;
                            a[0] = 1;
                            for(int maxd = 1; maxd < maxans; maxd++) {
                                if(dfs(0, maxd)) return maxd;
                            }
                            return maxans;
                        }

                        int main() {
                            while(scanf("%d", &n) == 1 && n) {
                                printf("%d\n", solve(n));
                            }
                            return 0;
                        }
                        ```

                -   7-14 UVa1602 Lattice Animals                    UVa1602.cpp -<

                    :   ```cpp
                        // UVa1602 Lattice Animals
                        // Rujia Liu
                        #include<cstdio>
                        #include<cstring>
                        #include<algorithm>
                        #include<set>
                        using namespace std;

                        struct Cell {
                            int x, y;
                            Cell(int x=0, int y=0):x(x),y(y) {};
                            bool operator < (const Cell& rhs) const {
                                return x < rhs.x || (x == rhs.x && y < rhs.y);
                            }
                        };

                        typedef set<Cell> Polyomino;

                        #define FOR_CELL(c, p) for(Polyomino::const_iterator c = (p).begin(); c != (p).end(); ++c)

                        inline Polyomino normalize(const Polyomino &p) {
                            int minX = p.begin()->x, minY = p.begin()->y;
                            FOR_CELL(c, p) {
                                minX = min(minX, c->x);
                                minY = min(minY, c->y);
                            }
                            Polyomino p2;
                            FOR_CELL(c, p)
                                p2.insert(Cell(c->x - minX, c->y - minY));
                            return p2;
                        }

                        inline Polyomino rotate(const Polyomino &p) {
                            Polyomino p2;
                            FOR_CELL(c, p)
                                p2.insert(Cell(c->y, -c->x));
                            return normalize(p2);
                        }

                        inline Polyomino flip(const Polyomino &p) {
                            Polyomino p2;
                            FOR_CELL(c, p)
                                p2.insert(Cell(c->x, -c->y));
                            return normalize(p2);
                        }

                        const int dx[] = {-1,1,0,0};
                        const int dy[] = {0,0,-1,1};
                        const int maxn = 10;

                        set<Polyomino> poly[maxn+1];
                        int ans[maxn+1][maxn+1][maxn+1];

                        // add a cell to p0 and check whether it's new. If so, add to the polyonimo set
                        void check_polyomino(const Polyomino& p0, const Cell& c) {
                            Polyomino p = p0;
                            p.insert(c);
                            p = normalize(p);

                            int n = p.size();
                            for(int i = 0; i < 4; i++) {
                                if(poly[n].count(p) != 0) return;
                                p = rotate(p);
                            }
                            p = flip(p);
                            for(int i = 0; i < 4; i++) {
                                if(poly[n].count(p) != 0) return;
                                p = rotate(p);
                            }
                            poly[n].insert(p);
                        }

                        void generate() {
                            Polyomino s;
                            s.insert(Cell(0, 0));
                            poly[1].insert(s);

                            // generate
                            for(int n = 2; n <= maxn; n++) {
                                for(set<Polyomino>::iterator p = poly[n-1].begin(); p != poly[n-1].end(); ++p)
                                    FOR_CELL(c, *p)
                                        for(int dir = 0; dir < 4; dir++) {
                                            Cell newc(c->x + dx[dir], c->y + dy[dir]);
                                            if(p->count(newc) == 0) check_polyomino(*p, newc);
                                        }
                            }

                            // precompute answers
                            for(int n = 1; n <= maxn; n++)
                                for(int w = 1; w <= maxn; w++)
                                    for(int h = 1; h <= maxn; h++) {
                                        int cnt = 0;
                                        for(set<Polyomino>::iterator p = poly[n].begin(); p != poly[n].end(); ++p) {
                                            int maxX = 0, maxY = 0;
                                            FOR_CELL(c, *p) {
                                                maxX = max(maxX, c->x);
                                                maxY = max(maxY, c->y);
                                            }
                                            if(min(maxX, maxY) < min(h, w) && max(maxX, maxY) < max(h, w))
                                                ++cnt;
                                        }
                                        ans[n][w][h] = cnt;
                                    }
                        }

                        int main() {
                            generate();

                            int n, w, h;
                            while(scanf("%d%d%d", &n, &w, &h) == 3) {
                                printf("%d\n", ans[n][w][h]);
                            }
                            return 0;
                        }
                        ```

                -   7-15 UVa1603 Square Destroyer                   UVa1603.cpp -<

                    :   ```cpp
                        // UVa1603 Square Destroyer
                        // Rujia Liu
                        // This code implements a variant of an algorithm presented in a book. It's simple yet efficient.
                        // Readers are encouraged to experiment on other algorithms.
                        // However, it's still slow for n=5 and m=0 (which is NOT in judge input)
                        // If you really want an efficient solution, learn DLX (Algorithm X with dancing links)
                        // DLX is well expained (with code) in my other book <<Beginning Algorithm Contests -- Training Guide>>
                        #include<cstdio>
                        #include<cstring>
                        #include<cstdlib>
                        #include<algorithm>
                        using namespace std;

                        const int maxs = 60; // number of squares: 25+16+9+4+1=55
                        const int maxm = 60; // number of matches: 2*5*(5+1)=60

                        int n, exists[maxm]; // matches
                        int s, size[maxs], fullsize[maxs], contains[maxs][maxm]; // squares
                        int best;

                        inline int row_match(int x, int y) {
                            return (2*n+1)*x+y;
                        }

                        inline int col_match(int x, int y) {
                            return (2*n+1)*x+n+y;
                        }

                        // number of matches in a full n*n grid
                        inline int match_count(int n) {
                            return 2*n*(n+1);
                        }

                        void init() {
                            int m, v;
                            scanf("%d%d", &n, &m);
                            for(int i = 0; i < match_count(n); ++i) exists[i] = 1;
                            while(m--) {
                                scanf("%d", &v);
                                exists[v-1] = 0;
                            }

                            // collect full squares
                            s = 0;
                            memset(contains, 0, sizeof(contains));
                            for(int i = 1; i <= n; i++) // side length
                                for(int x = 0; x <= n-i; x++)
                                    for(int y = 0; y <= n-i; y++) {
                                        size[s] = 0;
                                        fullsize[s] = 4*i; // number of matches in a complete square
                                        for(int j = 0; j < i; j++) {
                                            int a = row_match(x, y+j); // up
                                            int b = row_match(x+i, y+j); // down
                                            int c = col_match(x+j, y); // left
                                            int d = col_match(x+j, y+i); // right
                                            contains[s][a] = 1;
                                            contains[s][b] = 1;
                                            contains[s][c] = 1;
                                            contains[s][d] = 1;
                                            size[s] += exists[a] + exists[b] + exists[c] + exists[d]; // number of matches now
                                        }
                                        ++s;
                                    }
                        }

                        int find_square() {
                            for(int i = 0; i < s; i++)
                                if(size[i] == fullsize[i]) return i;
                            return -1;
                        }

                        void dfs(int dep) {
                            if(dep >= best) return;

                            int k = find_square();
                            if(k == -1) {
                                best = dep;
                                return;
                            }

                            // remove a match in that square
                            for(int i = 0; i < match_count(n); i++)
                                if(contains[k][i]) {
                                    for(int j = 0; j < s; j++)
                                        if(contains[j][i]) size[j]--;
                                    dfs(dep + 1);
                                    for(int j = 0; j < s; j++)
                                        if(contains[j][i]) size[j]++;
                                }
                        }

                        int main() {
                            int T;
                            scanf("%d", &T);
                            while(T--) {
                                init();
                                best = n*n;
                                dfs(0);
                                printf("%d\n", best);
                            }
                            return 0;
                        }
                        ```

    :scissors: 2016/00/00 上午 9:30:00 0. 高效算法设计 -<

    :   -   算法分析初步 -<

            :   -   渐进时间复杂度
                -   上界分析
                -   分治法
                -   正确对待算法分析结果

        -   再谈排序与检索

            :   -   归并排序
                -   快速排序

        -   递归与分治

        -   贪心法 -<

            :   -   背包相关问题
                -   区间相关问题
                -   Huffman 编码
                -   Huffman 编码

        -   算法设计与优化策略 -<

            :   -   8-1 UVa120 Stacks of Flapjacks                      UVa120.cpp -<

                    :   ```cpp
                        // UVa120 Stacks of Flapjacks
                        // Rujia Liu
                        #include<cstdio>
                        #include<iostream>
                        #include<sstream>
                        #include<algorithm>
                        using namespace std;

                        const int maxn = 30 + 5;
                        int n, a[maxn];

                        // 翻转a[0..p]
                        void flip(int p) {
                            for(int i = 0; i < p-i; i++)
                                swap(a[i], a[p-i]);
                            printf("%d ", n-p);
                        }

                        int main() {
                            string s;
                            while(getline(cin, s)) {
                                cout << s << "\n";
                                stringstream ss(s);
                                n = 0;
                                while(ss >> a[n]) n++;
                                for(int i = n-1; i > 0; i--) {
                                    int p = max_element(a, a+i+1) - a; // 元素a[0..i]中的最大元素
                                    if(p == i) continue;
                                    if(p > 0) flip(p); // flip(0)没啥意思，是不？
                                    flip(i);
                                }
                                printf("0\n");
                            }
                            return 0;
                        }
                        ```

                -   8-2 UVa1605 Building for UN                         UVa1605.cpp

                    :   ```cpp
                        // UVa1605 Building for UN
                        // Rujia Liu
                        #include<cstdio>
                        using namespace std;

                        char country(int i) {
                            if(i < 26) return 'A' + i;
                            return 'a' + i - 26;
                        }

                        int main() {
                            int n;
                            while(scanf("%d", &n) == 1) {
                                printf("2 %d %d\n", n, n);
                                for(int i = 0; i < n; i++) {
                                    for(int j = 0; j < n; j++) printf("%c", country(i));
                                    printf("\n");
                                }
                                printf("\n");
                                for(int i = 0; i < n; i++) {
                                    for(int j = 0; j < n; j++) printf("%c", country(j));
                                    printf("\n");
                                }
                            }
                            return 0;
                        }
                        ```

                -   8-3 UVa1152 4 Values Whose Sum is Zero              UVa1152.cpp -<

                    :   ```cpp
                        // UVa1152 4 Values Whose Sum is Zero
                        // Rujia Liu
                        #include<cstdio>
                        #include<algorithm>
                        using namespace std;

                        const int maxn = 4000 + 5;
                        int n, c, A[maxn], B[maxn], C[maxn], D[maxn], sums[maxn*maxn];

                        int main() {
                            int T;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d", &n);
                                for(int i = 0; i < n; i++)
                                    scanf("%d%d%d%d", &A[i], &B[i], &C[i], &D[i]);
                                c = 0;
                                for(int i = 0; i < n; i++)
                                    for(int j = 0; j < n; j++)
                                        sums[c++] = A[i] + B[j];
                                sort(sums, sums+c);
                                long long cnt = 0;
                                for(int i = 0; i < n; i++)
                                    for(int j = 0; j < n; j++)
                                        cnt += upper_bound(sums, sums+c, -C[i]-D[j]) - lower_bound(sums, sums+c, -C[i]-D[j]);
                                printf("%lld\n", cnt);
                                if(T) printf("\n");
                            }
                            return 0;
                        }
                        ```

                -   8-4 UVa11134 Fabled Rooks                           UVa11134.cpp -<

                    :   ```cpp
                        // UVa11134 Fabled Rooks
                        // Rujia Liu
                        #include<cstdio>
                        #include<cstring>
                        #include <algorithm>
                        using namespace std;

                        // solve 1-D problem: find c so that a[i] <= c[i] <= b[i] (0 <= i < n)
                        bool solve(int *a, int *b, int *c, int n) {
                            fill(c, c+n, -1);
                            for(int col = 1; col <= n; col++) {
                                // find a rook with smalleset b that is not yet assigned
                                int rook = -1, minb = n+1;
                                for(int i = 0; i < n; i++)
                                    if(c[i] < 0 && b[i] < minb && col >= a[i]) { rook = i; minb = b[i]; }
                                if(rook < 0 || col > minb) return false;
                                c[rook] = col;
                            }
                            return true;
                        }

                        const int maxn = 5000 + 5;
                        int n, x1[maxn], y1[maxn], x2[maxn], y2[maxn], x[maxn], y[maxn];

                        int main() {
                            while(scanf("%d", &n) == 1 && n) {
                                for (int i = 0; i < n; i++)
                                    scanf("%d%d%d%d", &x1[i], &y1[i], &x2[i], &y2[i]);
                                if(solve(x1, x2, x, n) && solve(y1, y2, y, n))
                                    for (int i = 0; i < n; i++) printf("%d %d\n", x[i], y[i]);
                                else
                                    printf("IMPOSSIBLE\n");
                            }
                            return 0;
                        }
                        ```

                -   8-5 UVa11054 Wine trading in Gergovia               UVa11054.cpp -<

                    :   ```cpp
                        // UVa11054 Wine trading in Gergovia
                        // Rujia Liu
                        #include<iostream>
                        #include<algorithm>
                        using namespace std;

                        int main() {
                            int n;
                            while(cin >> n && n) {
                                long long ans = 0, a, last = 0;
                                for(int i = 0; i < n; i++) {
                                    cin >> a;
                                    ans += abs(last);
                                    last += a;
                                }
                                cout << ans << "\n";
                            }
                            return 0;
                        }
                        ```

                -   8-6 UVa1606 Amphiphilic Carbon Molecules            UVa1606.cpp -<

                    :   ```cpp
                        // UVa1606 Amphiphilic Carbon Molecules
                        // Rujia Liu
                        // To make life a bit easier, we change each color 1 point into color 0.
                        // Then we only need to find an angle interval with most points. See code for details.
                        #include<cstdio>
                        #include<cmath>
                        #include<cstring>
                        #include<algorithm>
                        using namespace std;

                        const int maxn = 1000 + 5;

                        struct Point {
                            int x, y;
                            double rad; // with respect to current point
                            bool operator<(const Point &rhs) const {
                                return rad < rhs.rad;
                            }
                        }op[maxn], p[maxn];

                        int n, color[maxn];

                        // from O-A to O-B, is it a left turn?
                        bool Left(Point A, Point B) {
                            return A.x * B.y - A.y * B.x >= 0;
                        }

                        int solve() {
                            if(n <= 2) return 2;
                            int ans = 0;

                            // pivot point
                            for(int i = 0; i < n; i++) {
                                int k = 0;

                                // the list of other point, sorted in increasing order of rad
                                for(int j = 0; j < n; j++)
                                    if(j != i) {
                                        p[k].x = op[j].x - op[i].x;
                                        p[k].y = op[j].y - op[i].y;
                                        if(color[j]) { p[k].x = -p[k].x; p[k].y = -p[k].y; }
                                        p[k].rad = atan2(p[k].y, p[k].x);
                                        k++;
                                    }
                                sort(p, p+k);

                                // sweeping. cnt is the number of points whose rad is between p[L] and p[R]
                                int L = 0, R = 0, cnt = 2;
                                while(L < k) {
                                    if(R == L) { R = (R+1)%k; cnt++; } // empty interval
                                    while(R != L && Left(p[L], p[R])) { R = (R+1)%k; cnt++; } // stop when [L,R] spans across > 180 degrees
                                    cnt--;
                                    L++;
                                    ans = max(ans, cnt);
                                }
                            }
                            return ans;
                        }

                        int main() {
                            while(scanf("%d", &n) == 1 && n) {
                                for(int i = 0; i < n; i++)
                                    scanf("%d%d%d", &op[i].x, &op[i].y, &color[i]);
                                printf("%d\n", solve());
                            }
                            return 0;
                        }
                        ```

                -   8-7 UVa11572 Unique snowflakes                      UVa11572.cpp -<

                    :   ```cpp
                        // UVa11572 Unique snowflakes
                        // Rujia Liu
                        #include<cstdio>
                        #include<set>
                        #include<algorithm>
                        using namespace std;

                        const int maxn = 1000000 + 5;
                        int A[maxn];

                        int main() {
                            int T, n;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d", &n);
                                for(int i = 0; i < n; i++) scanf("%d", &A[i]);

                                set<int> s;
                                int L = 0, R = 0, ans = 0;
                                while(R < n) {
                                    while(R < n && !s.count(A[R])) s.insert(A[R++]);
                                    ans = max(ans, R - L);
                                    s.erase(A[L++]);
                                }
                                printf("%d\n", ans);
                            }
                            return 0;
                        }
                        ```

                        ```cpp
                        // UVa11572 Unique snowflakes
                        // Rujia Liu
                        // 算法二：记录位置i的上个相同元素位置last[i]
                        #include<cstdio>
                        #include<map>
                        using namespace std;

                        const int maxn = 1000000 + 5;
                        int A[maxn], last[maxn];
                        map<int, int> cur;

                        int main() {
                            int T, n;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d", &n);
                                cur.clear();
                                for(int i = 0; i < n; i++) {
                                    scanf("%d", &A[i]);
                                    if(!cur.count(A[i])) last[i] = -1;
                                    else last[i] = cur[A[i]];
                                    cur[A[i]] = i;
                                }

                                int L = 0, R = 0, ans = 0;
                                while(R < n) {
                                    while(R < n && last[R] < L) R++;
                                    ans = max(ans, R - L);
                                    L++;
                                }
                                printf("%d\n", ans);
                            }
                            return 0;
                        }
                        ```

                        ```cpp
                        // UVa11572 Unique snowflakes
                        // Rujia Liu
                        // 算法二：记录位置i的上个相同元素位置last[i]。使用hash_map（gcc扩展）
                        #include<cstdio>
                        #include<ext/hash_map>
                        using namespace std;
                        using namespace __gnu_cxx; // hash_map

                        const int maxn = 1000000 + 5;
                        int A[maxn], last[maxn];
                        hash_map<int, int> cur;

                        int main() {
                            int T, n;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d", &n);
                                cur.clear();
                                for(int i = 0; i < n; i++) {
                                    scanf("%d", &A[i]);
                                    if(!cur.count(A[i])) last[i] = -1;
                                    else last[i] = cur[A[i]];
                                    cur[A[i]] = i;
                                }

                                int L = 0, R = 0, ans = 0;
                                while(R < n) {
                                    while(R < n && last[R] < L) R++;
                                    ans = max(ans, R - L);
                                    L++;
                                }
                                printf("%d\n", ans);
                            }
                            return 0;
                        }
                        ```

                -   8-8 UVa1471 Defense Lines                           UVa1471.cpp -<

                    :   ```cpp
                        // UVa1471 Defense Lines
                        // Rujia Liu
                        // Algorithm 1: use STL set to maintain the candidates.
                        // This is a little bit more intuitive, but less efficient (than algorithm 2)
                        #include<cstdio>
                        #include<set>
                        #include<cassert>
                        using namespace std;

                        const int maxn = 200000 + 5;
                        int n, a[maxn], f[maxn], g[maxn];

                        struct Candidate {
                            int a, g;
                            Candidate(int a, int g):a(a),g(g) {}
                            bool operator < (const Candidate& rhs) const {
                                return a < rhs.a;
                            }
                        };

                        set<Candidate> s;

                        int main() {
                            int T;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d", &n);
                                for(int i = 0; i < n; i++)
                                    scanf("%d", &a[i]);
                                if(n == 1) { printf("1\n"); continue; }

                                // g[i] is the length of longest increasing continuous subsequence ending at i
                                g[0] = 1;
                                for(int i = 1; i < n; i++)
                                    if(a[i-1] < a[i]) g[i] = g[i-1] + 1;
                                    else g[i] = 1;

                                // f[i] is the length of longest increasing continuous subsequence starting from i
                                f[n-1] = 1;
                                for(int i = n-2; i >= 0; i--)
                                    if(a[i] < a[i+1]) f[i] = f[i+1] + 1;
                                    else f[i] = 1;

                                s.clear();
                                s.insert(Candidate(a[0], g[0]));
                                int ans = 1;
                                for(int i = 1; i < n; i++) {
                                    Candidate c(a[i], g[i]);
                                    set<Candidate>::iterator it = s.lower_bound(c); // first one that is >= c
                                    bool keep = true;
                                    if(it != s.begin()) {
                                        Candidate last = *(--it); // (--it) points to the largest one that is < c
                                        int len = f[i] + last.g;
                                        ans = max(ans, len);
                                        if(c.g <= last.g) keep = false;
                                    }

                                    if(keep) {
                                        s.erase(c); // if c.a is already present, the old g must be <= c.g
                                        s.insert(c);
                                        it = s.find(c); // this is a bit cumbersome and slow but it's clear
                                        it++;
                                        while(it != s.end() && it->a > c.a && it->g <= c.g) s.erase(it++);
                                    }
                                }
                                printf("%d\n", ans);
                            }
                            return 0;
                        }
                        ```

                -   8-9 UVa1451 Average                                 UVa1451.cpp -<

                    :   ```cpp
                        // UVa1451 Average
                        // Rujia Liu
                        #include<cstdio>
                        using namespace std;

                        const int maxn = 100000 + 5;

                        int n, L;
                        char s[maxn];
                        int sum[maxn], p[maxn]; // average of i~j is (sum[j]-sum[i-1])/(j-i+1)

                        // compare average of x1~x2 and x3~x4
                        int compare_average(int x1, int x2, int x3, int x4) {
                            return (sum[x2]-sum[x1-1]) * (x4-x3+1) - (sum[x4]-sum[x3-1]) * (x2-x1+1);
                        }

                        int main() {
                            int T;
                            scanf("%d", &T);

                            while(T--) {
                                scanf("%d%d%s", &n, &L, s+1);

                                sum[0] = 0;
                                for(int i = 1; i <= n; i++) sum[i] = sum[i-1] + s[i] - '0';

                                int ansL = 1, ansR = L;

                                // p[i..j) is the sequence of candidate start points
                                int i = 0, j = 0;
                                for (int t = L; t <= n; t++) { // end point
                                    while (j-i > 1 && compare_average(p[j-2], t-L, p[j-1], t-L) >= 0) j--; // remove concave points
                                    p[j++] = t-L+1; // new candidate

                                    while (j-i > 1 && compare_average(p[i], t, p[i+1], t) <= 0) i++; // update tangent point

                                    // compare and update solution
                                    int c = compare_average(p[i], t, ansL, ansR);
                                    if (c > 0 || c == 0 && t - p[i] < ansR - ansL) {
                                        ansL = p[i]; ansR = t;
                                    }
                                }
                                printf("%d %d\n", ansL, ansR);
                            }
                            return 0;
                        }
                        ```

                -   8-10 UVa714 Copying Books                           UVa714.cpp -<

                    :   ```cpp
                        // UVa714 Copying Books
                        // Rujia Liu
                        #include<cstdio>
                        #include<cstring>
                        #include<algorithm>
                        using namespace std;
                        const int maxm = 500 + 5;
                        int m, k, p[maxm];

                        // how many scribers needed if each scriber can work on at most maxp pages
                        int solve(long long maxp) {
                            long long done = 0;
                            int ans = 1;
                            for(int i = 0; i < m; i++) {
                                if(done + p[i] <= maxp) done += p[i];
                                else { ans++; done = p[i]; }
                            }
                            return ans;
                        }

                        int last[maxm]; // last[i] = 1 iff i is the last book assigned to someone
                        void print(long long ans) {
                            long long done = 0;
                            memset(last, 0, sizeof(last));
                            int remain = k;
                            for(int i = m-1; i >= 0; i--) {
                                if(done + p[i] > ans || i+1 < remain) {
                                    last[i] = 1; remain--; done = p[i];
                                }
                                else {
                                    done += p[i];
                                }
                            }
                            for(int i = 0; i < m-1; i++) {
                                printf("%d ", p[i]);
                                if(last[i]) printf("/ ");
                            }
                            printf("%d\n", p[m-1]);
                        }

                        int main() {
                            int T;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d%d", &m, &k);
                                long long tot = 0;
                                int maxp = -1;
                                for(int i = 0; i < m; i++) {
                                    scanf("%d", &p[i]);
                                    tot += p[i];
                                    maxp = max(maxp, p[i]);
                                }
                                long long L = maxp, R = tot;
                                while(L < R) {
                                    long long M = L + (R-L)/2;
                                    if(solve(M) <= k) R = M; else L = M+1;
                                }
                                print(L);
                            }
                            return 0;
                        }
                        ```

                -   8-11 UVa10954 Add All                               UVa10954.cpp -<

                    :   ```cpp
                        // UVa10954 Add All
                        // Rujia Liu
                        #include<cstdio>
                        #include<queue>
                        using namespace std;

                        int main() {
                            int n, x;
                            while(scanf("%d", &n) == 1 && n) {
                                priority_queue<int, vector<int>, greater<int> > q;
                                for(int i = 0; i < n; i++) { scanf("%d", &x); q.push(x); }
                                int ans = 0;
                                for(int i = 0; i < n-1; i++) {
                                    int a = q.top(); q.pop();
                                    int b = q.top(); q.pop();
                                    ans += a+b;
                                    q.push(a+b);
                                }
                                printf("%d\n", ans);
                            }
                            return 0;
                        }
                        ```

                -   8-12 UVa12627 Erratic Expansion                     UVa12627.cpp -<

                    :   ```cpp
                        // UVa12627 Erratic Expansion
                        // Rujia Liu
                        #include<iostream>
                        using namespace std;

                        // how many red balloons after k hours
                        long long c(int i) {
                            return i == 0 ? 1 : c(i-1)*3;
                        }

                        // how many red balloons in the first i rows, after k hours
                        long long f(int k, int i) {
                            if(i == 0) return 0;
                            if(k == 0) return 1;

                            int k2 = 1 << (k-1);
                            if(i >= k2) return f(k-1, i-k2) + c(k-1)*2;
                            else return f(k-1, i) * 2;
                        }

                        // how many red balloons in the last i rows, after k hours
                        long long g(int k, int i) {
                            if(i == 0) return 0;
                            if(k == 0) return 1;

                            int k2 = 1 << (k-1);
                            if(i >= k2) return g(k-1, i-k2) + c(k-1);
                            else return g(k-1,i);
                        }

                        int main() {
                            int T, k, a, b;
                            cin >> T;
                            for(int kase = 1; kase <= T; kase++) {
                                cin >> k >> a >> b;
                                cout << "Case " << kase << ": " << f(k, b) - f(k, a-1) << "\n";
                            }
                            return 0;
                        }
                        ```

                -   8-13 UVa11093 Just Finish it up                     UVa11093.cpp -<

                    :   ```cpp
                        // UVa11093 Just Finish it up
                        // Rujia Liu
                        #include<cstdio>

                        const int maxn = 100000 + 5;
                        int n, p[maxn], q[maxn];

                        // returns s if success
                        // otherwise, return the station you failed to reach
                        // if you failed to reach the start, return -1
                        int go(int s) {
                            int fuel = p[s] - q[s];
                            for(int i = (s+1)%n; i != s; i = (i+1)%n) {
                                if(fuel < 0) return i;
                                fuel += p[i] - q[i];
                            }
                            if(fuel < 0) return -1; // this means sum(p) < sum(q), so this case is impossible
                            return s; // success
                        }

                        int solve() {
                            int start = 0;
                            for(;;) {
                                int finish = go(start);
                                if(finish < start) return -1; // wrapped around, or go(start) returns -1
                                if(finish == start) return start;
                                start = finish;
                            }
                        }

                        int main() {
                            int T;
                            scanf("%d", &T);
                            for(int kase = 1; kase <= T; kase++) {
                                scanf("%d", &n);
                                for(int i = 0; i < n; i++) scanf("%d", &p[i]);
                                for(int i = 0; i < n; i++) scanf("%d", &q[i]);
                                int ans = solve();
                                printf("Case %d: ", kase);
                                if(ans < 0) printf("Not possible\n");
                                else printf("Possible from station %d\n", ans+1);
                            }
                            return 0;
                        }
                        ```

                -   8-14 UVa1607 Gates                                  UVa1607.cpp -<

                    :   ```cpp
                        // UVa1607 Gates
                        // Rujia Liu
                        #include<cstdio>
                        #include<algorithm>
                        using namespace std;

                        const int maxm = 200000 + 5;

                        int n, m;

                        struct Gates {
                            int a, b, o;
                        } gates[maxm];

                        // returns the output of input 000..0111...1 (there are k 0's)
                        int output(int k) {
                            for(int i = 1; i <= m; i++) {
                                int a = gates[i].a;
                                int b = gates[i].b;
                                int va = a < 0 ? -a > k : gates[a].o;
                                int vb = b < 0 ? -b > k : gates[b].o;
                                gates[i].o = !(va && vb);
                            }
                            return gates[m].o;
                        }

                        // returns k such that
                        // 1. output(k) = output(n)
                        // 2. output(k-1) = output(0)
                        int solve(int vn) {
                            int L = 1, R = n;
                            while(L < R) {
                                int M = L + (R-L)/2;
                                if(output(M) == vn) R = M; else L = M+1;
                            }
                            return L;
                        }

                        int main() {
                            int T;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d%d", &n, &m);
                                for (int i = 1; i <= m; i++)
                                    scanf("%d%d", &gates[i].a, &gates[i].b);
                                int v0 = output(0);
                                int vn = output(n);
                                if(v0 == vn) {
                                    for(int i = 1; i <= n; i++) printf("0");
                                } else {
                                    int x = solve(vn);
                                    for(int i = 1; i < x; i++) printf("0");
                                    printf("x");
                                    for(int i = x+1; i <= n; i++) printf("1");
                                }
                                printf("\n");
                            }
                            return 0;
                        }
                        ```

                -   8-15 UVa12174 Shuffle                               UVa12174.cpp -<

                    :   ```cpp
                        // UVa12174 Shuffle
                        // Rujia Liu
                        #include<iostream>
                        #include<vector>
                        using namespace std;

                        const int maxn = 100000 + 5;
                        int s, n, x[maxn*3], cnt[maxn], ok[maxn*2];

                        int main() {
                            int T;
                            cin >> T;
                            while(T--) {
                                cin >> s >> n;

                                // add s "-1" to the left/right of orriginal sequence
                                // so we don't have to worry about negative subscript or wrapping round
                                fill(x, x+n+2*s, -1);
                                for(int i = 0; i < n; i++) cin >> x[i+s];

                                int tot = 0; // how many different integers in current sliding window
                                fill(cnt+1, cnt+s+1, 0); // cnt[i] is the number of occurrence of i in the current sliding window
                                fill(ok, ok+n+s+1, 0);   // ok[i] = 1 iff the i-th sliding window didn't have duplicate numbers

                                // compute "ok" array
                                for(int i = 0; i < n+s+1; i++) {
                                    if (tot == s) ok[i] = 1;              // complete window
                                    if (i < s && tot == i) ok[i] = 1;     // incomplete windows on the left side
                                    if (i > n && tot == n+s-i) ok[i] = 1; // incomplete windows on the right side

                                    // update cnt and tot for the next sliding window
                                    if (i == n+s) break; // no more sliding windows, so we stop here
                                    if (x[i] != -1 && --cnt[x[i]]==0) tot--; // remove the first one
                                    if (x[i+s] != -1 && cnt[x[i+s]]++==0) tot++; // add the next one
                                }

                                // check each possible answer
                                int ans = 0;
                                for(int i = 0; i < s; i++) {
                                    int valid = 1;
                                    for (int j = i; j < n+s+1; j += s)
                                        if(!ok[j]) valid = 0;;
                                    if(valid) ans++;
                                }
                                if(ans == n+1) ans = s; // special case
                                cout << ans << "\n";
                            }
                            return 0;
                        }
                        ```

                -   8-16 UVa1608 Non-boring sequences                   UVa1608.cpp -<

                    :   ```cpp
                        // UVa1608 Non-boring sequences
                        // Rujia Liu
                        #include<cstdio>
                        #include<map>
                        using namespace std;

                        const int maxn = 200000 + 5;
                        int A[maxn], prev[maxn], next[maxn];
                        map<int, int> cur;

                        inline bool unique(int p, int L, int R) {
                            return prev[p] < L && next[p] > R;
                        }

                        bool check(int L, int R) {
                            if(L >= R) return true;
                            for(int d = 0; L+d <= R-d; d++) {
                                if(unique(L+d, L, R))
                                    return check(L, L+d-1) && check(L+d+1, R);
                                if(L+d == R-d) break;
                                if(unique(R-d, L, R))
                                    return check(R-d+1, R) && check(L, R-d-1);
                            }
                            return false;
                        }

                        int main() {
                            int T, n;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d", &n);
                                cur.clear();
                                for(int i = 0; i < n; i++) {
                                    scanf("%d", &A[i]);
                                    if(!cur.count(A[i])) prev[i] = -1;
                                    else prev[i] = cur[A[i]];
                                    cur[A[i]] = i;
                                }
                                cur.clear();
                                for(int i = n-1; i >= 0; i--) {
                                    if(!cur.count(A[i])) next[i] = n;
                                    else next[i] = cur[A[i]];
                                    cur[A[i]] = i;
                                }

                                if(check(0, n-1)) printf("non-boring\n");
                                else printf("boring\n");
                            }
                            return 0;
                        }
                        ```

                -   8-17 UVa1609 Foul Play                              UVa1609.cpp -<

                    :   ```cpp
                        // UVa1609  Foul Play
                        // Rujia Liu

                        #include<cstdio>
                        #include<vector>
                        using namespace std;

                        const int maxn = 1024 + 5;
                        char table[maxn][maxn];

                        int main() {
                            int n;
                            while(scanf("%d", &n) == 1) {
                                for(int i = 1; i <= n; i++) scanf("%s", table[i]+1);

                                vector<int> win, lose; // teams that team 1 win/lose against.
                                for(int i = 2; i <= n; i++)
                                    if(table[1][i] == '1') win.push_back(i);
                                    else lose.push_back(i);

                                int nt = n;
                                while(nt > 1) {
                                    vector<int> win2, lose2, final; // phase 3/4

                                    // Phase 1
                                    for(int i = 0; i < lose.size(); i++) {
                                        int tlose = lose[i];
                                        bool matched = false;
                                        for(int j = 0; j < win.size(); j++) {
                                            int& twin = win[j];
                                            if(twin > 0 && table[twin][tlose] == '1') {
                                                printf("%d %d\n", twin, tlose);
                                                win2.push_back(twin); // go to the next round
                                                twin = 0; // not available
                                                matched = true;
                                                break;
                                            }
                                        }
                                        if(!matched) final.push_back(tlose); // to phase 3/4
                                    }

                                    // Phase 2
                                    bool first = true;
                                    for(int i = 0; i < win.size(); i++) {
                                        int twin = win[i];
                                        if(twin > 0) {
                                            if(first) { printf("1 %d\n", twin); first = false; }
                                            else final.push_back(twin);
                                        }
                                    }

                                    // Phase 3/4
                                    for(int i = 0; i < final.size(); i += 2) {
                                        printf("%d %d\n", final[i], final[i+1]);
                                        int keep = final[i];
                                        if(table[final[i+1]][keep] == '1') keep = final[i+1];
                                        if(table[1][keep] == '1') win2.push_back(keep);
                                        else lose2.push_back(keep);
                                    }
                                    win = win2;
                                    lose = lose2;
                                    nt >>= 1;
                                }
                            }
                            return 0;
                        }
                        ```

                -   8-18 UVa1442 Cave                                   uva1442.cpp -<

                    :   ```cpp
                        // UVa1442 Cav
                        // Rujia Liu
                        #include<cstdio>
                        #include<algorithm>
                        using namespace std;

                        const int maxn = 1000000 + 5;
                        int n, p[maxn], s[maxn], h[maxn];
                        int main() {
                            int T;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d", &n);
                                for(int i = 0; i < n; i++) scanf("%d", &p[i]);
                                for(int i = 0; i < n; i++) scanf("%d", &s[i]);

                                int ans = 0, level = s[0];
                                for(int i = 0; i < n; i++) {
                                    if(p[i] > level) level = p[i];
                                    if(s[i] < level) level = s[i];
                                    h[i] = level;
                                }
                                level = s[n-1];
                                for(int i = n-1; i >= 0; i--) {
                                    if(p[i] > level) level = p[i];
                                    if(s[i] < level) level = s[i];
                                    ans += min(h[i], level) - p[i];
                                }
                                printf("%d\n", ans);
                            }
                            return 0;
                        }
                        ```

                -   8-19 UVa12265 Selling Land                          UVa12265.cpp -<

                    :   ```cpp
                        // UVa12265 Selling Land
                        // Rujia Liu
                        // This code implements the algorithm described in the book
                        // Another way is: still use a stack to maintain the "staircase" shape
                        // But don't eliminate non-optimal rectangles in the stairecase.
                        // instead, let maxp[c] be the maximal half-perimeter whose rightmost column is c, which can be calculated with dp.
                        #include<cstdio>
                        #include<cstring>
                        #include<algorithm>
                        using namespace std;

                        const int maxn = 1000 + 10;

                        char s[maxn][maxn];
                        int height[maxn], ans[maxn*2];

                        struct Rect {
                            int c, h;
                            Rect(int c=0, int h=0):c(c),h(h){}
                        };

                        Rect rect[maxn]; // stack

                        int main() {
                            int n, m, T;
                            scanf("%d", &T);
                            while(T--) {
                                scanf("%d%d", &n, &m);
                                for(int i = 0; i < n; i ++) scanf("%s", s[i]);

                                memset(height, 0, sizeof(height));
                                memset(ans, 0, sizeof(ans));
                                for(int i = 0; i < n; i ++) {
                                    int top = -1;
                                    for(int j = 0; j < m; j ++) {
                                        if(s[i][j] == '#') {
                                            height[j] = 0;
                                            top = -1; // clear stack
                                        } else {
                                            height[j]++;
                                            Rect r(j, height[j]);
                                            if(top < 0) rect[++top] = r;
                                            else {
                                                while(top >= 0 && r.h <= rect[top].h) r.c = rect[top--].c;
                                                if(top < 0 || r.h - r.c > rect[top].h - rect[top].c) rect[++top] = r;
                                            }
                                            ans[j-rect[top].c+rect[top].h+1]++;
                                        }
                                    }
                                }
                                for(int i = 1; i <= n + m; i++)
                                    if(ans[i]) printf("%d x %d\n", ans[i], i*2);
                            }
                            return 0;
                        }
                        ```

    :scissors: 2016/00/00 上午 9:30:00 0. more BFS, DFS -<

    :   -   chap9. BFS -<

            :   -   maze :hearts: -<

                    :   ```
                        input:

                            0 1 0 0 0
                            0 1 0 1 0
                            0 0 0 0 0
                            0 1 1 1 0
                            0 0 0 1 0

                        output:

                            (0, 0)
                            (1, 0)
                            (2, 0)
                            (2, 1)
                            (2, 2)
                            (2, 3)
                            (2, 4)
                            (3, 4)
                            (4, 4)
                        ```

                        POJ 3984 迷宫问题, <http://poj.org/problem?id=3984>

                        ```cpp
                        #include <stdio.h>
                        #include <cstring>
                        #include <queue>
                        using namespace std;

                        const char name[4] = { 'U', 'R', 'D', 'L' };    //      |
                        const int dx[4] = { -1, 0, 1, 0 };              //      |
                        const int dy[4] = { 0, 1, 0, -1 };              //      V  rowsise: x

                        typedef struct state_t {
                            int data;
                            int action;
                            int father;
                        } state_t;

                        const int MAXN = 5;
                        int m = MAXN, n = MAXN;                                 // 迷宫的行数，列数
                        int map[MAXN][MAXN];                                    // 迷宫，0 表示空地，1 表示障碍物

                        const int STATE_MAX = MAXN * MAXN;                      // 状态总数
                        state_t nodes[STATE_MAX];
                        int state_hash(  const state_t &s ) {
                            return s.data;
                        }
                        int state_index( const state_t &s ) {
                            return state_hash(s);
                        }

                        void print_action(const int end) {
                            if( nodes[end].father == -1 ) { return; }           // no father
                            print_action( nodes[end].father );
                            putchar( name[nodes[end].action] );
                        }
                        void print_path( const int end ) {
                            if( nodes[end].father != -1 ) {                     // starting point
                                print_path( nodes[end].father );
                            }
                            printf("(%d, %d)\n", end / n, end % n);
                        }

                        const state_t END = { 24, -1, -1 };                     // (4, 4)
                        bool state_is_target( const state_t &s ) {              // end point
                            return s.data == END.data;
                        }

                        const int HASH_CAPACITY = STATE_MAX;
                        bool visited[HASH_CAPACITY];
                        void hashset_init() {
                            memset( visited, 0, sizeof(visited) );
                        }
                        bool hashset_find( const state_t &s ) {
                            return visited[state_hash(s)] == true;
                        }
                        void hashset_insert( const state_t &s ) {
                            visited[state_hash(s)] = true;
                        }

                        int x, y;                                               // 扩展点，即当前位置
                        int action_cur;
                        const int ACTION_BEGIN = 0;
                        const int ACTION_END   = 4;
                        void state_extend_init(const state_t &s) {
                            action_cur = ACTION_BEGIN;
                            x = s.data / n;
                            y = s.data % n;
                        }

                        bool state_extend( const state_t &s, state_t &next ) {
                            while( action_cur < ACTION_END ) {
                                const int nx = x + dx[action_cur];
                                const int ny = y + dy[action_cur];
                                if( 0 <= nx && nx < m && 0 <= ny && ny < n && !map[nx][ny] ) {  // in scope, and empty
                                    next.data = nx * n + ny;
                                    if( !hashset_find(next) ) {                                 // 判重
                                        next.action = action_cur;                               // 记录路径
                                        next.father = state_hash(s);
                                        nodes[state_index(next)] = next;
                                        ++action_cur;                                           // return 前别忘了增 1
                                        return true;
                                    }
                                }
                                ++action_cur;
                            }
                            return false;
                        }

                        int bfs( state_t &start ) {
                            queue<state_t> q;
                            hashset_init();

                            start.action = -1;
                            start.father = -1;

                            nodes[state_index(start)] = start;
                            hashset_insert(start);
                            if ( state_is_target(start) ) {
                                return state_index(start);
                            }

                            q.push(start);
                            while( !q.empty() ) {
                                const state_t s = q.front(); q.pop();
                                state_extend_init( s );
                                state_t next;
                                while( state_extend(s, next) ) {
                                    if( state_is_target(next) ) {       // the END
                                        return state_index(next);
                                    }
                                    q.push( next );
                                    hashset_insert( next );
                                }
                            }
                            return -1;
                        }

                        int main(void) {
                            for( int i = 0; i < m; ++i ) {
                                for( int j = 0; j < n; ++j ) {
                                    scanf( "%d", &map[i][j] );
                                }
                            }

                            state_t start = { 0, -1, -1 };                          // 左上角为起点
                            int end = bfs( start );
                            print_path( end );
                            return 0;
                        }
                        ```

                -   eight digit -<

                    :   ```cpp
                        /* POJ 1077 Eight, http://poj.org/problem?id=1077 */
                        #include <cstdio>
                        #include <cstring>
                        #include <queue>

                        using namespace std;

                        const int DIGITS = 9; // 棋盘中数字的个数，也是变进制数需要的位数
                        const int MATRIX_EDGE = 3;       // 棋盘边长

                        /***** 一些常量 *****/
                        const int SPACE_NUMBER = 0; // 空格对应着数字 0
                        // 上下左右四个方向
                        const int dx[] = {-1, 1, 0, 0};
                        const int dy[] = {0, 0, -1, 1};
                        const char name[] = { 'u', 'd', 'l', 'r' };

                        typedef char int8_t;

                        /**
                         * @strut 状态
                         */
                        typedef struct state_t {
                            int8_t data[DIGITS];  /** 状态的数据. */
                            int action; /* 由父状态移动到本状态的动作 */
                            int father; /* 父状态在 nodes[] 中的下标，也即父状态的哈希值 */
                            int count;  /** 所花费的步骤数（也即路径长度 -1） */
                        } state_t;

                        // 3x3 的棋盘，状态最多有 9! 种
                        const int STATE_MAX = 362880;  /* 状态总数 */

                        state_t nodes[STATE_MAX+1];

                        int state_hash(const state_t &s) {
                            return state_hash( &s );
                        }

                        int state_index(const state_t &s) {
                            return state_hash(s);
                        }

                        /**
                         * @brief 打印动作序列.
                         * @param[in] end 终点状态的哈希值
                         * @return 父状态
                         */
                        void print_action(const int end) {
                            if (nodes[end].father == -1) return;

                            print_action(nodes[end].father);
                            putchar(name[nodes[end].action]);
                        }

                        void hashset_init();

                        bool hashset_find(const state_t *s);

                        void hashset_insert(const state_t *s);

                        void state_extend_init(const state_t *s);

                        bool state_extend(const state_t *s, state_t *next);

                        bool state_is_target(const state_t *s);


                        int bfs(state_t *start) {
                            queue<state_t> q;
                            hashset_init();

                            start->action = -1;
                            start->father = -1;
                            start->count = 0;

                            nodes[state_index(*start)] = *start;
                            hashset_insert(start);
                            if (state_is_target(start))
                                return state_index(*start);
                            q.push(*start);

                            while (!q.empty()) {
                                const state_t s = q.front(); q.pop();
                                state_t next;

                                state_extend_init(&s);
                                while (state_extend(&s, &next)) {
                                    if (state_is_target(&next)) {
                                        // printf("%d\n", next.count);
                                        return state_index(next);
                                    }
                                    q.push(next);
                                    hashset_insert(&next);
                                }
                            }
                            return -1;
                        }

                        /**
                         * @brief 输入.
                         * @return 无
                         */
                        void input(state_t *start) {
                            int ch;
                            for (int i = 0; i < DIGITS; ++i) {
                                do {
                                    ch = getchar();
                                } while ((ch != EOF) && ((ch < '1') || (ch > '8')) && (ch != 'x'));
                                if (ch == EOF) return;
                                if (ch == 'x') start->data[i] = 0; // x 映射成数字 0
                                else           start->data[i] = ch - '0';
                            }
                        }

                        /** for wikioi 1225 */
                        void input1(state_t *start) {
                            int n;
                            scanf("%d", &n);

                            /* 将整数转化为棋盘 */
                            for(int i = DIGITS-1; i >= 0; i--) {
                                start->data[i] = n % 10;
                                n /= 10;
                            }
                        }

                        int main(void) {
                            state_t start;
                            int end; /* 目标状态在nodes[]中的下标 */
                            input(&start);

                            end = bfs(&start);

                            print_action(end);
                            printf("\n");
                            return 0;
                        }

                        /********** functions implement **************/

                        /********** 方案1，完美哈希，使用康托展开 **************/

                        // 9 位变进制数（空格）能表示 0 到 (9!-1) 内的所有自然数, 恰好有 9! 个，
                        // 与状态一一对应，因此可以把状态一一映射到一个 9 位变进制数

                        // 9 位变进制数，每个位数的单位，0!~8!
                        const int fac[] = {40320, 5040, 720, 120, 24, 6, 2, 1, 1};
                        /* 哈希表容量，要大于状态总数，若存在完美哈希方案，则等于状态总数 */
                        const int HASH_CAPACITY = STATE_MAX;

                        bool visited[HASH_CAPACITY];

                        int state_hash(const state_t *s) {
                            int key = 0;
                            for (int i = 0; i < DIGITS; i++) {
                                int cnt = 0;  /* 逆序数 */
                                for (int j = i + 1; j < DIGITS; j++) if (s->data[i] > s->data[j]) cnt++;
                                key += fac[i] * cnt;
                            }
                            return key;
                        }

                        void hashset_init() {
                            memset(visited, 0, sizeof(visited));
                        }

                        bool hashset_find(const state_t *s) {
                            return visited[state_hash(s)] == true;
                        }

                        void hashset_insert(const state_t *s) {
                            visited[state_hash(s)] = true;
                        }

                        int action_cur;
                        #define ACTION_BEGIN 0
                        #define ACTION_END 4

                        /* 扩展点，即0的位置 */
                        int z;

                        void state_extend_init(const state_t *s) {
                            action_cur = ACTION_BEGIN;
                            for (z = 0; z < DIGITS; z++) {
                                if (s->data[z] == SPACE_NUMBER) {
                                    break;  // 找 0 的位置
                                }
                            }
                        }

                        bool state_extend(const state_t *s, state_t *next) {
                            const int x = z / MATRIX_EDGE; // 行
                            const int y = z % MATRIX_EDGE; // 列

                            while (action_cur < ACTION_END) {
                                const int newx = x + dx[action_cur];
                                const int newy = y + dy[action_cur];
                                const int newz = newx * MATRIX_EDGE + newy;

                                if (newx >= 0 && newx < MATRIX_EDGE && newy >= 0 &&
                                        newy < MATRIX_EDGE) { // 没有越界
                                    *next = *s;
                                    next->data[newz] = SPACE_NUMBER;
                                    next->data[z] = s->data[newz];
                                    next->count = s->count + 1;
                                    if (!hashset_find(next)) { /* 判重 */
                                        next->action = action_cur;
                                        next->father = state_hash(s);
                                        /* 记录路径 */
                                        nodes[state_index(*next)] = *next;
                                        action_cur++; /* return前别忘了增1 */
                                        return true;
                                    }
                                }
                                action_cur++;
                            }
                            return false;
                        }

                        // 目标状态
                        const state_t END = {{1, 2, 3, 4, 5, 6, 7, 8, 0}, -1, -1};
                        // for wikioi 1225
                        const state_t END1 = {{1, 2, 3, 8, 0, 4, 7, 6, 5}, -1, -1};

                        bool state_is_target(const state_t *s) {
                            return memcmp(s->data, END.data, DIGITS * sizeof(int8_t)) == 0;
                        }
                        ```

                -   four go

                -   double DFS

                -   A* Algorithm

                -   Conclusion -<

                    :   -   适用场景 -<

                            :   -   输入数据：没什么特征，不像深搜，需要有“递归”的性质。如果是树或者图，概率更大。
                                -   状态转换图：树或者图。
                                -   求解目标：求最短。

                        -   思考的步骤 -<

                            :   -   是求路径长度，还是路径本身（或动作序列）？

                                    :   -   如果是求路径长度，则状态里面要存路径长度
                                        -   如果是求路径本身或动作序列
                                            -   要用一棵树存储宽搜过程中的路径
                                            -   是否可以预估状态个数的上限？能够预估状态总数，则开一个大数组，用树
                                                的双亲表示法；如果不能预估状态总数，则要使用一棵通用的树。这一步也
                                                是第4步的必要不充分条件。

                                -   如何表示状态？ -<

                                    :   即一个状态需要存储哪些些必要的数据，才能够完整提供如何扩展到
                                        下一步状态的所有信息。一般记录当前位置或整体局面。

                                -   如何扩展状态？ -<

                                    :   这一步跟第 2 步相关。状态里记录的数据不同，扩展方法就不同。对于
                                        固定不变的数据结构（一般题目直接给出，作为输入数据），如二叉树，图等，扩展
                                        方法很简单，直接往下一层走，对于隐式图，要先在第 1 步里想清楚状态所带的数据，
                                        想清楚了这点，那如何扩展就很简单了。

                                -   关于判重，状态是否存在完美哈希方案？

                                    :   即将状态一一映射到整数，互相之间不会冲突。

                                        -   如果不存在，则需要使用通用的哈希表（自己实现或用标准库，例如
                                            `unordered_set`）来判重；自己实现哈希表的话，如果能够预估状态个数的
                                            上限，则可以开两个数组，head 和 next，表示哈希表，参考第 subsec:eightDigits 节方案 2。
                                        -   如果存在，则可以开一个大布尔数组，作为哈希表来判重，且此时可以精确计算
                                            出状态总数，而不仅仅是预估上限。

                                -   目标状态是否已知？ -<

                                    :   如果题目已经给出了目标状态，可以带来很大便利，这时候可以
                                        从起始状态出发，正向广搜；也可以从目标状态出发，逆向广搜；也可以同时出发，
                                        双向广搜。

                        -   代码模板 -<

                            :   广搜需要一个队列，用于一层一层扩展，一个hashset，用于判重，一棵树（只求长度时不需要），用于存储整棵树。

                                对于队列，如果用纯 C，需要造一个队列轮子；如果用 C++，
                                可以用 \fn{queue}，也可以把 \fn{vector}当做队列使用。当求长度时，有两种做法：

                                -   只用一个队列，但在状态结构体 \fn{state_t}里增加
                                    一个整数字段 \fn{step}，表示走到当前状态用了多少
                                    步，当碰到目标状态，直接输出 \fn{step}即可。这个
                                    方案，可以很方便的变成 A*算法，把队列换成优先队
                                    列即可。
                                -   用两个队列，\fn{current, next}，分别表示当前层
                                    次和下一层，另设一个全局整数 \fn{level}，表示层
                                    数（也即路径长度），当碰到目标状态，输出
                                    \fn{level}即可。这个方案，状态可以少一个字段，
                                    节省内存。

                                对于 hashset，如果有完美哈希方案，用布尔数组
                                (\fn{bool visited[STATE_MAX]}或 \fn{vector<bool>
                                visited(STATE_MAX, false)}) 来表示；如果没有，可以用
                                STL 里的 \fn{set}或 \fn{unordered_set}。

                                对于树，如果用 STL，可以用 \fn{unordered_map<state_t,
                                state_t > father}表示一颗树，代码非常简洁。如果能够
                                预估状态总数的上限（设为 STATE_MAX），可以用数组
                                (\fn{state_t nodes[STATE_MAX]})，即树的双亲表示法来
                                表示树，效率更高，当然，需要写更多代码。

                                C++ template -<

                                :   ```cpp
                                    /**
                                     * @brief 反向生成路径.
                                     * @param[in] father 树
                                     * @param[in] target 目标节点
                                     * @return 从起点到 target 的路径
                                     */
                                    template<typename state_t>
                                    vector<state_t> gen_path(const unordered_map<state_t, state_t> &father,
                                            const state_t &target) {
                                        vector<state_t> path;
                                        path.push_back(target);

                                        state_t cur = target;
                                        while (father.find(cur) != father.end()) {
                                            cur = father.at(cur);
                                            path.push_back(cur);
                                        }
                                        reverse(path.begin(), path.end());

                                        return path;
                                    }

                                    /**
                                     * @brief 广搜.
                                     * @param[in] state_t 状态，如整数，字符串，一维数组等
                                     * @param[in] start 起点
                                     * @param[in] state_is_target 判断状态是否是目标的函数
                                     * @param[in] state_extend 状态扩展函数
                                     * @return 从起点到目标状态的一条最短路径
                                     */
                                    template<typename state_t>
                                    vector<state_t> bfs(state_t &start, bool (*state_is_target)(const state_t&),
                                            vector<state_t>(*state_extend)(const state_t&,
                                                    unordered_set<string> &visited)) {
                                        queue<state_t> next, current; // 当前层，下一层
                                        unordered_set<state_t> visited; // 判重
                                        unordered_map<state_t, state_t> father;

                                        int level = 0;  // 层次
                                        bool found = false;
                                        state_t target;

                                        current.push(start);
                                        visited.insert(start);
                                        while (!current.empty() && !found) {
                                            ++level;
                                            while (!current.empty() && !found) {
                                                const state_t state = current.front();
                                                current.pop();
                                                vector<state_t> new_states = state_extend(state, visited);
                                                for (auto iter = new_states.begin();
                                                        iter != new_states.end() && ! found; ++iter) {
                                                    const state_t new_state(*iter);

                                                    if (state_is_target(new_state)) {
                                                        found = true; //找到了
                                                        target = new_state;
                                                        father[new_state] = state;
                                                        break;
                                                    }

                                                    next.push(new_state);
                                                    // visited.insert(new_state); 必须放到 state_extend()里
                                                    father[new_state] = state;
                                                }
                                            }
                                            swap(next, current); //!!! 交换两个队列
                                        }

                                        if (found) {
                                            return gen_path(father, target);
                                            //return level + 1;
                                        } else {
                                            return vector<state_t>();
                                            //return 0;
                                        }
                                    }
                                    ```

        -   chap10. DFS -<

            :   -   four coloring
                -   all arrangements
                -   eight queen (see aoapc-book)
                -   restore IP addr
                -   combination sum
                -   combination sum ii
                -   conclusion

    :scissors: 2016/08/13 上午 9:30:00 4. 动态规划 Dynamic Programming I -<

    :   -   什么是动态规划？动态规划的意义是什么？ -<

            :   动态规划（Dynamic programming）中递推式的求解方法不是动态规划的本质。

                动态规划的本质，是对问题【**状态**】的定义和【**状态转移方程**】的定义。

                引自维基百科

                >   dynamic programming is a method for solving a complex
                >   problem by breaking it down into a collection of simpler
                >   subproblems.

                动态规划是通过拆分问题，定义问题状态和状态之间的关系，使得问题
                能够以递推（或者说分治）的方式去解决。本题下的其他答案，大多都
                是在说递推的求解方法，但**如何拆分问题，才是动态规划的核心**。
                而拆分问题，靠的就是状态的定义和状态转移方程的定义。

                动态规划迷思

                :   -   “缓存（memoization）”，“重叠子问题（subproblems）”，“记忆化”： -<

                        :   这三个名词，都是在阐述递推式求解的技巧。以
                            Fibonacci 数列为例，计算第 100 项的时候，需要计算第
                            99 项和 98 项；在计算第 101 项的时候，需要第 100 项
                            和第 99 项，这时候你还需要重新计算第 99 项吗？不需要，
                            你只需要在第一次计算的时候把它记下来就可以了。

                            上述的需要再次计算的“第 99 项”，就叫“重叠子问题”。如
                            果没有计算过，就按照递推式计算，如果计算过，直接使
                            用，就像“缓存”一样，这种方法，叫做“记忆化”，这是递
                            推式求解的技巧。这种技巧，通俗的说叫“花费空间来节省
                            时间”。都不是动态规划的本质，不是动态规划的核心。

                    -   “递归” -<

                        :   递归是递推式求解的方法，连技巧都算不上。

                    -   "无后效性"，“最优子结构” -<

                        :   上述的状态转移方程中，等式右边不会用到下标大于左边 i
                            或者 k 的值，这是"无后效性"的通俗上的数学定义，符合
                            这种定义的状态定义，我们可以说它具有“最优子结构”的
                            性质，在动态规划中我们要做的，就是找到这种“最优子结
                            构”。

                文艺的说，动态规划是寻找一种对问题的观察角度，让问题能够以递推
                （或者说分治）的方式去解决。**寻找看问题的角度**，才是动态规划
                中最耀眼的宝石！

                另一个回答：

                -   一个阶段的最优可以由前一个阶段的最优得到。
                -   如果一个阶段的最优无法用前一个阶段的最优得到呢？

                刚刚的情况实在太普遍，解决方法实在太暴力，有没有哪些情况可以避免如此的暴力呢？

                契机就在于**后效性**。

                有一类问题，看似需要之前所有的状态，其实不用。不妨也是拿最长上
                升子序列的例子来说明为什么他不必需要暴力搜索，进而引出动态规划
                的思路。（这其实是说你要仔细区分状态，那些是无所谓的状态，哪些
                是本质的必须要留意的状态。这也和上面的正确选择【状态】的定义一个意思。）

                这就可以纵容我们不需要记录之前所有的状态啊！既然我们的选择已经
                不受之前状态的组合的影响了，那时间复杂度自然也不是指数的了啊！
                虽然我们不在乎某序列之前都是什么元素，但我们还是需要这个序列的
                长度的。所以我们只需要记录以某个元素结尾的 LIS 长度就好！因此第
                i 个阶段的最优解只是由前 i-1 个阶段的最优解得到的，然后就得到了
                DP 方程：

                `LIS(i) = max{ LIS(j)+1 } for j<i & a[j] < a[i]`

                所以一个问题是该用递推、贪心、搜索还是动态规划，完全是由这个问
                题本身阶段间状态的转移方式决定的！

                -   每个阶段只有一个状态->递推；
                -   每个阶段的最优状态都是由上一个阶段的最优状态得到的->贪心；
                -   每个阶段的最优状态是由之前所有阶段的状态的组合得到的->搜索；
                -   每个阶段的最优状态可以从之前某个阶段的某个或某些状态直接得到而不管之前这个状态是如何得到的->动态规划。

                >   每个阶段的最优状态可以从之前某个阶段的某个或某些状态直接得到

                这个性质叫做**最优子结构（optimal substructure）**；

                >   而不管之前这个状态是如何得到的

                这个性质叫做**无后效性**。

                refs and see also

                -   [什么是动态规划？动态规划的意义是什么？ - 知乎](https://www.zhihu.com/question/23995189)

        -   [Dynamic programming - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Dynamic_programming) -<

            :   Sometimes, applying memoization to the naive recursive
                algorithm (namely the one obtained by a direct translation of
                the problem into recursive form) already results in a dynamic
                programming algorithm with asymptotically optimal time
                complexity, but for optimization problems in general the
                optimal algorithm might require more sophisticated algorithms.
                Some of these may be recursive (and hence can be memoized) but
                parametrized differently from the naive algorithm. For other
                problems the optimal algorithm may not even be a memoized
                recursive algorithm in any reasonably natural sense. An example
                of such a problem is the Egg Dropping puzzle described below.

                ![Figure 1. Finding the shortest path in a graph using optimal
                    substructure; a straight line indicates a single edge; a
                    wavy line indicates a shortest path between the two
                    vertices it connects (other nodes on these paths are not
                    shown); the bold line is the overall shortest path from
                    start to goal.](https://upload.wikimedia.org/wikipedia/commons/thumb/0/03/Shortest_path_optimal_substructure.svg/250px-Shortest_path_optimal_substructure.svg.png)

                ![Fibonacci 序列的子问题示意图：使用有向无环图（DAG, directed acyclic graph）
                    而非树表示重复子问题的分解。为什么是 DAG 而不是树呢？答案就
                    是，如果是树的话，会有很多重复计算，下面有相关的解释。 ](https://upload.wikimedia.org/wikipedia/commons/thumb/0/06/Fibonacci_dynamic_programming.svg/162px-Fibonacci_dynamic_programming.svg.png)

                为避免重复计算，可将已经得到的子问题的解保存起来，当我们要解决
                相同的子问题时，重用即可。该方法即所谓的缓存（memoization，而不
                是存储 memorization，虽然这个词亦适合，姑且这么叫吧，这个单词太
                难翻译了，简直就是可意会不可言传，其意义是没计算过则计算，计算
                过则保存）。当我们确信将不会再需要某一解时，可以将其抛弃，以节
                省空间。在某些情况下，我们甚至可以提前计算出那些将来会用到的子
                问题的解。

                ```
                var m := map(0 → 0, 1 → 1)
                function fib(n)
                    if key n is not in map m
                        m[n] := fib(n − 1) + fib(n − 2)
                    return m[n]
                ```

                This technique of saving values that have already been calculated is called memoization;

                refs and see also

                -   [动态规划算法 - 游戏人生 - C++博客](http://www.cppblog.com/Fox/archive/2008/05/07/Dynamic_programming.html)
                -   [Optimal substructure - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Optimal_substructure)
                -   [Overlapping subproblems - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Overlapping_subproblems)
                -   [Memoization - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Memoization)

        -   动态规划算法的适用条件 -<

            :   必须满足如下三点：

                -   **最优化原理**：如果问题的最优解所包含的子问题的解也是最优的，
                    就称该问题具有最优子结构（optimal substructure），即满足最优化原理。
                -   **无后效性**：即某阶段状态一旦确定，就不受这个状态以后决策的影
                    响。也就是说，某状态以后的过程不会影响以前的状态，只与当前
                    状态有关。
                -   **有重叠子问题（overlapping subproblem）**：即子问题之间是不独立的，一个子问题在下一阶段
                    决策中可能被多次使用到。（该性质并不是动态规划适用的必要条
                    件，但是如果没有这条性质，动态规划算法同其他算法相比就不具
                    备优势）

                refs and see also

                -   [动态规划的适用条件 - 和申的日志 - 网易博客](http://1985wanggang.blog.163.com/blog/static/776383320081052347452/)

        -   动态规划算法的四个解题要素 -<

            :   作为 Sia 粉（Sia Furler），我把它记作 sfia。

                -   状 态 State
                      ~ 灵感，创造力，存储小规模问题的结果
                -   方程 Function
                      ~ 状态之间的联系，怎么通过小的状态，来算大的状态
                -   初始化 Initialization
                      ~ 最极限的小状态是什么, 起点
                -   答案 Answer
                      ~ 最大的那个状态是什么，终点

        -   动规的两种实现方式：记忆化搜索 vs 循环递推

        -   面试中动态规划的常见类型 -<

            :   满足下面三个条件之一：

                -   求最大值、最小值
                -   判断是否可行
                -   统计方案个数

                则极有可能 是使用动态规划求解

                什么情况下不使用动态规划？

                :   满足下面三个条件之一：

                    -   求出所有**具体**的方案而非方案**个数**<http://www.lintcode.com/problem/palindrome-partitioning/>
                    -   输入数据是一个**集合**而不**序列**<http://www.lintcode.com/problem/longest-consecutive-sequence/>
                    -   暴力的算法已经是多项式级别，2^n → n^2 是 DP 擅长的事

                    则极不可能使用动态规划求解

        -   leetcode 中几道动态规划题 -<

            :   -   Triangle

                    :   Given a triangle, find the minimum path sum from top to
                        bottom. Each step you may move to adjacent numbers on the
                        row below.

                        For example, given the following triangle

                        ```
                        [
                             [2],
                            [3,4],
                           [6,5,7],
                          [4,1,8,3]
                        ]
                        ```

                        The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

                        Note:

                        Bonus point if you are able to do this using only O(n)
                        extra space, where n is the total number of rows in the
                        triangle.

                        ```
                            类似于图像处理里的【直方图 vs. 累计直方图】，概率论里的【PDF，CDF】：

                              [2],                                    [2]
                             [3,4],                            [ 5 =(2+3), 6 =(2+4) ]
                            [6,5,7],                      [ 11 =(5+6),  10 =(5+5 )   13 =(6+7) ]
                           [4,1,8,3]                  [   15         11        18          16       ]
                                                                      ^
                                                                      |
                                                                      +----got you

                        从下往上看呢？

                              | j = 0   1   2   3
                        ------+------------------------------------------------------------------------------
                        i = 0 |     2               |                   |                   |   11
                            1 |     3   4           |                   |   9   10          |   9   10
                            2 |     6   5   7       |   7   6   10      |   7   6   10      |   7   6   10
                            3 |     4   1   8   3   |   4   1   8   3   |   4   1   8   3   |   4   1   8   3
                        ```

                        首先，定义状态转移方程：`f(i,j) = min{ f(i+i,j), f(i+1,j+1)} + f(i,j) for j = 0..i, i = n-2..0`。

                        ```cpp
                        int minimumTotal( vector<vector<int>> &triangle ) {
                            for( int i = triangle.size() -2; i >= 0; --i ) {
                                for( int j = 0; j < i+1; ++j ) {
                                    vector<vector<int>> &t = triangle;                  // save some typing
                                    t[i][j] += min(t[i+1][j], t[i+1][j+1]);
                                }
                            }
                            return triangle[0][0];
                        }
                        ```

                        refs and see also

                        -   [Triangle | LeetCode OJ](https://leetcode.com/problems/triangle/)

                -   Maximum Subarray

                    :    Find the contiguous subarray within an array
                        (containing at least one number) which has the largest sum.

                        For example, given the array `[−2,1,−3,4,−1,2,1,−5,4]`,
                        the contiguous subarray `[4,−1,2,1]` has the largest sum = 6.

                        贯序地看，对于新加入数组的一个元素，我们有【两种选择】：

                        -   加入原来的 sub array，
                        -   新生成一个 sub array（原来的 sub array 为负）

                        `S[n]` 为序列，`S[j]` 为第 j 个元素（1 based）。
                        设状态 `f[j]` 表示以 `S[j]` 结尾的最大连续子序列和，则状态转移方程如下：

                        -   `f[j] = max( f[j-1]+S[j], S[j] ), j = 2..n, f[1] = S[1]`
                        -   `target = max{ f[j] }, j = 1..n`

                        代码：

                        ```cpp
                        // Time: O(n), Space: O(1)
                        int maxSubArray( vector<int> &nums ) {
                            int result = INT_MIN, f = 0;
                            for( int i = 0; i < nums.size(); ++i ) {
                                f = max( f+nums[i], nums[i] );
                                result = max( f, result );
                            }
                            return result;
                        }
                        ```

                        refs and see also

                        -   [Maximum Subarray | LeetCode OJ](https://leetcode.com/problems/maximum-subarray/)

                -   Minimum Path Sum -<

                    :   Given a m x n grid filled with non-negative numbers,
                        find a path from **top left** to **bottom right** which
                        minimizes the sum of all numbers along its path.

                        Note: You can only move either down or right at any
                        point in time.

                        状态转移方程：
                        `f[i][j] = min(f[i-1][j], f[i][j-1]) + grid(i,j)`

                        -   备忘录法 -<

                            :   ```cpp
                                class Solution {
                                public:
                                    int minPathSum( vector<vector<int>> &grid ) {
                                        const int m = grid.size();
                                        const int n = grid[0].size();
                                        this->f = vector<vector<int>>( m, vector<int>(n, -1) );
                                        return dfs( grid, m-1, n-1 );
                                    }
                                private:
                                    vector<vector<int>> f; // 缓存
                                private:
                                    int dfs( const vector<vector<int>> &grid, int x, int y ) {
                                        if( x < 0 || y < 0 )    { return INT_MAX; }
                                        if( x == 0 && y == 0 )  { return grid[0][0]; }
                                        return min( getOrUpdate(grid, x-1, y), getOrUpdate(grid, x, y-1) ) + grid[x][y];
                                    }
                                    int getOrUpdate( const vector<vector<int>> &grid, int x, int y ) {
                                        if( x < 0 || y < 0 )    { return INT_MAX; }
                                        if( f[x][y] >= 0 ) {
                                            return f[x][y];
                                        } else {
                                            return f[x][y] = dfs(grid,x,y);
                                        }
                                    }
                                };
                                ```

                                refs and see also

                                -   [Minimum Path Sum | LeetCode OJ](https://leetcode.com/problems/minimum-path-sum/)

                        -   动态规划 -<

                            :   ```cpp
                                int minPathSum( vector<vector<int>> &grid ) {
                                    const int m = grid.size();
                                    const int n = grid[0].size();
                                    int f[m][n];
                                    f[0][0] = grid[0][0];
                                    for( int i = 1; i < m; ++i ) {
                                        f[i][0] = f[i-1][0] + grid[i][0];
                                    }
                                    for( int j = 1; j < n; ++j ) {
                                        f[0][j] = f[0][j-1] + grid[0][j];
                                    }
                                    for( int i = 1; i < m; ++i ) {
                                        for( int j = 1; j <n; ++j ) {
                                            f[i][j] = min( f[i-1][j], f[i][j-1] ) + grid[i][j];
                                        }
                                    }
                                    return f[m-1][n-1];
                                }
                                ```

                        -   动态规划 + 滚动数组 -<

                            :   ```cpp
                                int minPathSum( vector<vector<int>> &grid ) {
                                    const int m = grid.size();
                                    const int n = grid[0].size();

                                    int f[n];
                                    fill( f, f+n, INT_MAX );
                                    f[0] = 0;

                                    for( int i = 0; i < m; ++i ) {
                                        f[0] += grid[i][0];
                                        for( int j = 1; j < n; ++j ) {
                                            f[j] = min( f[j-1], f[j] ) + grid[i][j];
                                        }
                                    }
                                    return f[n-1];
                                }
                                ```

        -   面试中常见的动态规划类型 -<

            :   -   **坐标型动态规划 15%**
                    -   state:
                        -   f[x] 表示我从起点走到坐标 x......
                        -   f[x][y] 表示我从起点走到坐标 x,y......
                    -   function: 研究走到 x,y 这个点之前的一步
                    -   initialize: 起点
                    -   answer: 终点
                -   **序列型动态规划 30%**
                    -   state: f[i] 表示前 i 个位置 / 数字 / 字符, 第 i 个...
                    -   function: f[i] = f[j] ... j 是 i 之前的一个位置
                    -   initialize: f[0]..
                    -   answer: f[n]..
                        -   一般 answer 是 f(n) 而不是 f(n-1)
                        -   因为对于 n 个字符, 包含前 0 个字符 (空串), 前 1 个字符...... 前 n 个字符。
                -   **双序列动态规划 30%**
                -   划分型动态规划 10%
                -   背包型动态规划 10%
                -   区间型动态规划 5%

                >   如果不是跟坐标相关的动态规划, 一般有 N 个数 / 字符, 就开 N+1 个位
                >   置的数组, 第 0 个位置单独留出来作初始化

        -   dp and memoization

        -   longest common subseq

        -   longest consequtive common subseq

        -   long M subseq

        -   backpack

        -   TODO -<

            :   [Word Break 参考程序 Java/C++/Python](http://www.jiuzhang.com/solutions/word-break/) -<

                :   Given a string s and a dictionary of words dict, determine if s can
                    be segmented into a space-separated sequence of one or more
                    dictionary words. For example, given s = "leetcode", dict =
                    ["leet", "code"].  Return true because "leetcode" can be segmented
                    as "leet code".

                    ```cpp
                    public class Solution {
                        private int getMaxLength(Set<String> dict) {
                            int maxLength = 0;
                            for (String word : dict) {
                                maxLength = Math.max(maxLength, word.length());
                            }
                            return maxLength;
                        }

                        public boolean wordBreak(String s, Set<String> dict) {
                            if (s == null || s.length() == 0) {
                                return true;
                            }

                            int maxLength = getMaxLength(dict);
                            boolean[] canSegment = new boolean[s.length() + 1];

                            canSegment[0] = true;
                            for (int i = 1; i <= s.length(); i++) {
                                canSegment[i] = false;
                                for (int lastWordLength = 1;
                                         lastWordLength <= maxLength && lastWordLength <= i;
                                         lastWordLength++) {
                                    if (!canSegment[i - lastWordLength]) {
                                        continue;
                                    }
                                    String word = s.substring(i - lastWordLength, i);
                                    if (dict.contains(word)) {
                                        canSegment[i] = true;
                                        break;
                                    }
                                }
                            }

                            return canSegment[s.length()];
                        }
                    }
                    ```

                    -   state: f[i] 表示“前 i”个字符能否被完美切分
                    -   function: f[i] = OR{f[j] && j+1~i is a word}, 其中 j < i
                    -   initialize: f[0] = true
                    -   answer: f[n]

                    注意:切分位置的枚举->单词长度枚举 O(NL 2), N: 字符串长度, L: 最长的单词的长度

                [Palindrome Partitioning II 参考程序 Java/C++/Python](http://www.jiuzhang.com/solutions/palindrome-partitioning-ii/)

                -   单序列动态规划（下） Sequnece DP

                -   双序列动态规划 Two Sequences DP -<

                    :   -   state: f[i][j] 代表了第一个 sequence 的前 i 个数字 / 字符, 配上第二个 sequence 的前 j 个...
                        -   function: f[i][j] = 研究第 i 个和第 j 个的匹配关系
                        -   initialize: f[i][0] 和 f[0][i]
                        -   answer: f[n][m]
                        -   n = s1.length()
                        -   m = s2.length()

                -   problems -<

                    :   求 Max, [Longest Common Subsequence 参考程序 Java/C++/Python](http://www.jiuzhang.com/solutions/longest-common-subsequence/) -<

                        :   -   http://www.lintcode.com/problem/longest-common-substring/
                            -   state: f[i][j] 表示前 i 个字符配上前 j 个字符的 LCS 的长度
                            -   function: f[i][j] = MAX(f[i-1][j], f[i][j-1], f[i-1][j-1] + 1) // A[i - 1] == B[j - 1] = MAX(f[i-1][j], f[i][j-1]) // A[i - 1] != B[j - 1]
                            -   intialize: f[i][0] = 0 f[0][j] = 0
                            -   answer: f[n][m]

                        求 Min, [Edit Distance 参考程序 Java/C++/Python](http://www.jiuzhang.com/solutions/edit-distance/)

                        求方案总数, [Distinct Subsequences 参考程序 Java/C++/Python](http://www.jiuzhang.com/solutions/distinct-subsequences/) -<

                        :   -   state: f[i][j] 表示 S 的前 i 个字符中选取 T 的前 j 个字符, 有多少种方案
                            -   function: f[i][j] = f[i - 1][j] + f[i - 1][j - 1] // S[i-1] == T[j-1] = f[i - 1][j] // S[i-1] != T[j-1]
                            -   initialize: f[i][0] = 1, f[0][j] = 0 (j > 0)
                            -   answer: f[n][m] (n = sizeof(S), m = sizeof(T))

                        求是否可行, [Interleaving String 参考程序 Java/C++/Python](http://www.jiuzhang.com/solutions/interleaving-string/)

                        什么情况下可能使用/不用动态规划?

                        -   最大值最小值 / 是否可行 / 方案总数
                        -   求所有方案 / 集合而不是序列 / 指数级到多项式
                        -   解决动态规划问题的四点要素
                        -   状态, 方程, 初始化, 答案
                        -   三种面试常见的动态规划类别及状态特点
                        -   坐标, 单序列, 双序列
                        -   两招独孤九剑
                        -   二维 DP 需要初始化第 0 行和第 0 列
                        -   n 个字符的字符串要开 n+1 个位置的数组

                        其他类型的动态规划(算法强化班) -<

                        :   背包类:

                            -   http://www.lintcode.com/problem/backpack/
                            -   http://www.lintcode.com/problem/backpack-ii/
                            -   http://www.lintcode.com/problem/minimum-adjustment-cost/
                            -   http://www.lintcode.com/problem/k-sum/

                            区间类:

                            -   http://www.lintcode.com/problem/coins-in-a-line-iii/
                            -   http://www.lintcode.com/problem/scramble-string/

                            划分类:

                            -   http://www.lintcode.com/problem/best-time-to-buy-and-sell-stock-iv/
                            -   http://www.lintcode.com/problem/maximum-subarray-iii/

    :scissors: 2016/08/14 上午 9:30:00 5. 动态规划 Dynamic Programming II -<

    :   -   数字三角形

        -   DAG 上的动态规划 -<

            :   -   小结与应用举例 -<

                    :   -   9-1 UVa1025 A Spy in the Metro                          uva1025.cpp -<

                            :   ```cpp
                                // UVa1025 A Spy in the Metro
                                // Rujia Liu
                                #include<iostream>
                                #include<cstring>
                                using namespace std;

                                const int maxn = 50 + 5;
                                const int maxt = 200 + 5;
                                const int INF = 1000000000;

                                // has_train[t][i][0]表示时刻t，在车站i是否有往右开的火车
                                int t[maxn], has_train[maxt][maxn][2];
                                int dp[maxt][maxn];

                                int main() {
                                    int kase = 0, n, T;
                                    while(cin >> n >> T && n) {
                                        int M1, M2, d;
                                        for(int i = 1; i <= n-1; i++) cin >> t[i];

                                        // 预处理，计算has_train数组
                                        memset(has_train, 0, sizeof(has_train));
                                        cin >> M1;
                                        while(M1--) {
                                            cin >> d;
                                            for(int j = 1; j <= n-1; j++) {
                                                if(d <= T) has_train[d][j][0] = 1;
                                                d += t[j];
                                            }
                                        }
                                        cin >> M2;
                                        while(M2--) {
                                            cin >> d;
                                            for(int j = n-1; j >= 1; j--) {
                                                if(d <= T) has_train[d][j+1][1] = 1;
                                                d += t[j];
                                            }
                                        }

                                        // DP主过程
                                        for(int i = 1; i <= n-1; i++) dp[T][i] = INF;
                                        dp[T][n] = 0;

                                        for(int i = T-1; i >= 0; i--)
                                            for(int j = 1; j <= n; j++) {
                                                dp[i][j] = dp[i+1][j] + 1; // 等待一个单位
                                                if(j < n && has_train[i][j][0] && i+t[j] <= T)
                                                    dp[i][j] = min(dp[i][j], dp[i+t[j]][j+1]); // 右
                                                if(j > 1 && has_train[i][j][1] && i+t[j-1] <= T)
                                                    dp[i][j] = min(dp[i][j], dp[i+t[j-1]][j-1]); // 左
                                            }

                                        // 输出
                                        cout << "Case Number " << ++kase << ": ";
                                        if(dp[0][1] >= INF) cout << "impossible\n";
                                        else cout << dp[0][1] << "\n";
                                    }
                                    return 0;
                                }
                                ```

                        -   9-2 UVa437 The Tower of Babylon                         UVa437.cpp -<

                            :   ```cpp
                                // UVa437 The Tower of Babylon
                                // Rujia Liu
                                // 算法：DAG上的最长路，状态为(idx, k)，即当前顶面为立方体idx，其中第k条边（排序后）为高
                                #include<cstdio>
                                #include<cstring>
                                #include<algorithm>
                                using namespace std;

                                #define REP(i,n) for(int i = 0; i < (n); i++)

                                const int maxn = 30 + 5;
                                int n, blocks[maxn][3], d[maxn][3];

                                void get_dimensions(int* v, int b, int dim) {
                                    int idx = 0;
                                    REP(i,3) if(i != dim) v[idx++] = blocks[b][i];
                                }

                                int dp(int i, int j) {
                                    int& ans = d[i][j];
                                    if(ans > 0) return ans;
                                    ans = 0;
                                    int v[2], v2[2];
                                    get_dimensions(v, i, j);
                                    REP(a,n) REP(b,3) {
                                        get_dimensions(v2, a, b);
                                        if(v2[0] < v[0] && v2[1] < v[1]) ans = max(ans, dp(a,b));
                                    }
                                    ans += blocks[i][j];
                                    return ans;
                                }

                                int main() {
                                    int kase = 0;
                                    while(scanf("%d", &n) == 1 && n) {
                                        REP(i,n) {
                                            REP(j,3) scanf("%d", &blocks[i][j]);
                                            sort(blocks[i], blocks[i]+3);
                                        }
                                        memset(d, 0, sizeof(d));
                                        int ans = 0;
                                        REP(i,n) REP(j,3) ans = max(ans, dp(i,j));
                                        printf("Case %d: maximum height = %d\n", ++kase, ans);
                                    }
                                    return 0;
                                }
                                ```

                        -   9-3 UVa1347 Tour                                        uva1347.cpp -<

                            :   ```cpp
                                // UVa1347 Tour
                                // Rujia Liu
                                #include<cstdio>
                                #include<cmath>
                                #include<algorithm>
                                using namespace std;

                                const int maxn = 50 + 5;
                                double x[maxn], y[maxn], dist[maxn][maxn], d[maxn][maxn];

                                int main() {
                                    int n;
                                    while(scanf("%d", &n) == 1) {
                                        for(int i = 1; i <= n; i++)
                                            scanf("%lf%lf", &x[i], &y[i]);
                                        for(int i = 1; i <= n; i++)
                                            for(int j = 1; j <= n; j++)
                                                dist[i][j] = sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));

                                        for(int i = n-1; i >= 2; i--)
                                            for(int j = 1; j < i; j++) {
                                                if(i == n-1) d[i][j] = dist[i][n] + dist[j][n]; // 边界
                                                else d[i][j] = min(dist[i][i+1] + d[i+1][j], dist[j][i+1] + d[i+1][i]);
                                            }
                                        printf("%.2lf\n", dist[1][2] + d[2][1]);
                                    }
                                    return 0;
                                }
                                ```

        -   多阶段决策问题 -<

            :   -   多段图的最短路 -<

                    :   -   9-4 UVa116 Unidirectional TSP                           UVa116.cpp -<

                            :   ```cpp
                                // UVa116 Unidirectional TSP
                                // Rujia Liu
                                // 算法：多段图的动态规划。因为要字典序最小，所以倒着来，设d[i][j]为从(i,j)到最后一列的最小开销，则d[i][j]=a[i][j]+max(d[i+1][j+1],d[i-1][j+1])
                                #include<cstdio>
                                #include<algorithm>
                                using namespace std;

                                const int maxn = 100 + 5;
                                const int INF = 1000000000;
                                int m, n, a[maxn][maxn], d[maxn][maxn], next[maxn][maxn];

                                int main() {
                                    while(scanf("%d%d", &m, &n) == 2 && m) {
                                        for(int i = 0; i < m; i++)
                                            for(int j = 0; j < n; j++)
                                                scanf("%d", &a[i][j]);

                                        int ans = INF, first = 0;
                                        for(int j = n-1; j >= 0; j--) {
                                            for(int i = 0; i < m; i++) {
                                                if(j == n-1) d[i][j] = a[i][j];
                                                else {
                                                    int rows[3] = {i, i-1, i+1};
                                                    if(i == 0) rows[1] = m-1;
                                                    if(i == m-1) rows[2] = 0;
                                                    sort(rows, rows+3);
                                                    d[i][j] = INF;
                                                    for(int k = 0; k < 3; k++) {
                                                        int v = d[rows[k]][j+1] + a[i][j];
                                                        if(v < d[i][j]) { d[i][j] = v; next[i][j] = rows[k]; }
                                                    }
                                                }
                                                if(j == 0 && d[i][j] < ans) { ans = d[i][j]; first = i; }
                                            }
                                        }
                                        printf("%d", first+1);
                                        for(int i = next[first][0], j = 1; j < n; i = next[i][j], j++) printf(" %d", i+1);
                                        printf("\n%d\n", ans);
                                    }
                                    return 0;
                                }
                                ```

                -   0-1 背包问题 -<

                    :   -   9-5 UVa12563 Jin Ge Jin Qu [h]ao                        UVa12563.cpp -<

                            :   ```cpp
                                // UVa12563 Jin Ge Jin Qu [h]ao
                                // Rujia Liu
                                #include<cstdio>
                                #include<cstring>
                                #include<algorithm>
                                using namespace std;

                                const int maxn = 50 + 5;
                                const int INF = 1000000000;

                                // d[i][j]: maximal number of songs from first i songs, whose total length is exactly j
                                int n, t, len[maxn], d[2][maxn*180+678];

                                int main() {
                                    int T;
                                    scanf("%d", &T);
                                    for(int kase = 1; kase <= T; kase++) {
                                        scanf("%d%d", &n, &t);
                                        for(int i = 1; i <= n; i++) scanf("%d", &len[i]);

                                        for(int i = 0; i < t; i++) d[0][i] = -1;
                                        d[0][0] = 0;

                                        int p = 1, ans = 0;
                                        for(int i = 1; i <= n; i++) {
                                            for(int j = 0; j < t; j++) {
                                                d[p][j] = d[p^1][j];
                                                if(j >= len[i] && d[p^1][j - len[i]] >= 0)
                                                    d[p][j] = max(d[p][j], d[p^1][j - len[i]] + 1);
                                                ans = max(ans, d[p][j]);
                                            }
                                            p ^= 1;
                                        }
                                        for(int i = t-1; i >= 0; i--)
                                            if(d[p^1][i] == ans) {
                                                printf("Case %d: %d %d\n", kase, ans + 1, i + 678);
                                                break;
                                            }
                                    }
                                    return 0;
                                }
                                ```

                -   更多经典模型 -<

                    :   -   线性结构上的动态规划 -<

                            :   -   9-6 UVa11400 Lighting System Design                     uva11400.cpp -<

                                    :   ```cpp
                                        // UVa11400 Lighting System Design
                                        // Rujia Liu
                                        #include<iostream>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 1000 + 5;

                                        struct Lamp {
                                            int v, k, c, l;
                                            bool operator < (const Lamp& rhs) const {
                                                return v < rhs.v;
                                            }
                                        } lamp[maxn];

                                        int n, s[maxn], d[maxn];

                                        int main() {
                                            while(cin >> n && n) {
                                                for(int i = 1; i <= n; i++)
                                                    cin >> lamp[i].v >> lamp[i].k >> lamp[i].c >> lamp[i].l;
                                                sort(lamp+1, lamp+n+1);
                                                s[0] = 0;
                                                for(int i = 1; i <= n; i++) s[i] = s[i-1] + lamp[i].l;
                                                d[0] = 0;
                                                for(int i = 1; i <= n; i++) {
                                                    d[i] = s[i] * lamp[i].c + lamp[i].k; // 前i个灯泡全买类型i
                                                    for(int j = 1; j <= i; j++)
                                                        d[i] = min(d[i], d[j] + (s[i] - s[j]) * lamp[i].c + lamp[i].k);
                                                }
                                                cout << d[n] << "\n";
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-7 UVa11584 Partitioning by Palindromes                UVa11584.cpp -<

                                    :   ```cpp
                                        // UVa11584 Partitioning by Palindromes
                                        // Rujia Liu
                                        // This code is slightly different from the book.
                                        // It uses memoization to judge whether s[i..j] is a palindrome.
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 1000 + 5;
                                        int n, kase, vis[maxn][maxn], p[maxn][maxn], d[maxn];
                                        char s[maxn];

                                        int is_palindrome(int i, int j) {
                                            if(i >= j) return 1;
                                            if(s[i] != s[j]) return 0;

                                            if(vis[i][j] == kase) return p[i][j];
                                            vis[i][j] = kase;
                                            p[i][j] = is_palindrome(i+1, j-1);
                                            return p[i][j];
                                        }

                                        int main() {
                                            int T;
                                            scanf("%d", &T);
                                            memset(vis, 0, sizeof(vis));
                                            for(kase = 1; kase <= T; kase++) {
                                                scanf("%s", s+1);
                                                n = strlen(s+1);
                                                d[0] = 0;
                                                for(int i = 1; i <= n; i++) {
                                                    d[i] = i+1;
                                                    for(int j = 0; j < i; j++)
                                                        if(is_palindrome(j+1, i)) d[i] = min(d[i], d[j] + 1);
                                                }
                                                printf("%d\n", d[n]);
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-8 UVa1625 Color Length                                UVa1625.cpp -<

                                    :   ```cpp
                                        // UVa1625 Color Length
                                        // Rujia Liu

                                        #include<cstdio>
                                        #include<cstring>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 5000 + 5;
                                        const int INF = 1000000000;

                                        char p[maxn], q[maxn]; // starts from position 1
                                        int sp[26], sq[26], ep[26], eq[26]; // sp[i] start positions of character i in p
                                        int d[2][maxn], c[2][maxn]; // c[i][j]: how many "incomplete" colors in the mixed sequence

                                        int main() {
                                            int T;
                                            scanf("%d", &T);
                                            while(T--) {
                                                scanf("%s%s", p+1, q+1);

                                                int n = strlen(p+1);
                                                int m = strlen(q+1);
                                                for(int i = 1; i <= n; i++) p[i] -= 'A';
                                                for(int i = 1; i <= m; i++) q[i] -= 'A';

                                                // calculate s and e
                                                for(int i = 0; i < 26; i++) { sp[i] = sq[i] = INF; ep[i] = eq[i] = 0; }
                                                for(int i = 1; i <= n; i++) {
                                                    sp[p[i]] = min(sp[p[i]], i);
                                                    ep[p[i]] = i;
                                                }
                                                for(int i = 1; i <= m; i++) {
                                                    sq[q[i]] = min(sq[q[i]], i);
                                                    eq[q[i]] = i;
                                                }

                                                // dp
                                                int t = 0;
                                                memset(c, 0, sizeof(c));
                                                memset(d, 0, sizeof(d));
                                                for(int i = 0; i <= n; i++){
                                                    for(int j = 0; j <= m; j++){
                                                        if(!i && !j) continue;

                                                        // calculate d
                                                        int v1 = INF, v2 = INF;
                                                        if(i) v1 = d[t^1][j] + c[t^1][j]; // remove from p
                                                        if(j) v2 = d[t][j - 1] + c[t][j - 1]; // remove from q
                                                        d[t][j] = min(v1, v2);

                                                        // calculate c
                                                        if(i) {
                                                            c[t][j] = c[t^1][j];
                                                            if(sp[p[i]] == i && sq[p[i]] > j) c[t][j]++;
                                                            if(ep[p[i]] == i && eq[p[i]] <= j) c[t][j]--;
                                                        } else if(j) {
                                                            c[t][j] = c[t][j - 1];
                                                            if(sq[q[j]] == j && sp[q[j]] > i) c[t][j]++;
                                                            if(eq[q[j]] == j && ep[q[j]] <= i) c[t][j]--;
                                                        }
                                                    }
                                                    t ^= 1;
                                                }
                                                printf("%d\n", d[t^1][m]);
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-9 UVa10003 Cutting Sticks                             UVa10003.cpp -<

                                    :   ```cpp
                                        // UVa10003 Cutting Sticks
                                        // Rujia Liu
                                        // 算法：设d[i][j]为切割小木棍i~j的最优费用，则d[i][j]=min{d[i][k]+d[k][j]}+a[j]-a[i]。最后的a[j]-a[i]是第一刀的费用。然后分成i~k和k~j两部分。
                                        #include<cstdio>
                                        #include<cstring>
                                        using namespace std;

                                        const int maxn = 50 + 5;
                                        int n, L, a[maxn], vis[maxn][maxn], d[maxn][maxn];

                                        int dp(int i, int j) {
                                            if(i >= j - 1) return 0;
                                            if(vis[i][j]) return d[i][j];
                                            vis[i][j] = 1;
                                            int& ans = d[i][j];
                                            ans = -1;
                                            for(int k = i+1; k <= j-1; k++) {
                                                int v = dp(i,k) + dp(k,j) + a[j] - a[i];
                                                if(ans < 0 || v < ans) ans = v;
                                            }
                                            return ans;
                                        }

                                        int main() {
                                            while(scanf("%d%d", &L, &n) == 2 && L) {
                                                for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
                                                a[0] = 0; a[n+1] = L;
                                                memset(vis, 0, sizeof(vis));
                                                printf("The minimum cutting is %d.\n", dp(0, n+1));
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-10 UVa1626 Brackets Sequence                          UVa1626.cpp -< -<

                                    :   ```cpp
                                        // LA2451 Brackets Sequence
                                        // Rujia Liu
                                        // 算法：形如(S)或者[S]，转移到d(S)，然后分成AB，转移到d(A)+d(B)。注意(S, [S, )S之类全部属于第二种转移。
                                        // 注意输入有空行。
                                        // 本程序是递推解法
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 100 + 5;
                                        char S[maxn];
                                        int n, d[maxn][maxn];

                                        bool match(char a, char b) {
                                            return (a == '(' && b == ')') || (a == '[' && b == ']');
                                        }

                                        void dp() {
                                            for(int i = 0; i < n; i++) {
                                                d[i+1][i] = 0;
                                                d[i][i] = 1;
                                            }
                                            for(int i = n-2; i >= 0; i--)
                                                for(int j = i+1; j < n; j++) {
                                                    d[i][j] = n;
                                                    if(match(S[i], S[j])) d[i][j] = min(d[i][j], d[i+1][j-1]);
                                                    for(int k = i; k < j; k++)
                                                        d[i][j] = min(d[i][j], d[i][k] + d[k+1][j]);
                                                }
                                        }

                                        void print(int i, int j) {
                                            if(i > j) return ;
                                            if(i == j) {
                                                if(S[i] == '(' || S[i] == ')') printf("()");
                                                else printf("[]");
                                                return;
                                            }
                                            int ans = d[i][j];
                                            if(match(S[i], S[j]) && ans == d[i+1][j-1]) {
                                                printf("%c", S[i]); print(i+1, j-1); printf("%c", S[j]);
                                                return;
                                            }
                                            for(int k = i; k < j; k++)
                                                if(ans == d[i][k] + d[k+1][j]) {
                                                    print(i, k); print(k+1, j);
                                                    return;
                                                }
                                        }

                                        void readline(char* S) {
                                            fgets(S, maxn, stdin);
                                        }

                                        int main() {
                                            int T;

                                            readline(S);
                                            sscanf(S, "%d", &T);
                                            readline(S);

                                            while(T--) {
                                                readline(S);
                                                n = strlen(S) - 1;
                                                memset(d, -1, sizeof(d));
                                                dp();
                                                print(0, n-1);
                                                printf("\n");
                                                if(T) printf("\n");
                                                readline(S);
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-11 UVa1331 Minimax Triangulation                      UVa1331.cpp -<

                                    :   ```cpp
                                        // UVa1331 Minimax Triangulation
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstdlib>
                                        #include<cmath>
                                        #include<cstring>
                                        #include<vector>
                                        #include<queue>
                                        #include<algorithm>
                                        using namespace std;

                                        const double eps = 1e-10;
                                        int dcmp(double x) {
                                            if(fabs(x) < eps) return 0; else return x < 0 ? -1 : 1;
                                        }

                                        struct Point {
                                            double x, y;
                                            Point(double x=0, double y=0):x(x),y(y) { }
                                        };

                                        typedef Point Vector;

                                        Vector operator + (const Vector& A, const Vector& B) { return Vector(A.x+B.x, A.y+B.y); }
                                        Vector operator - (const Point& A, const Point& B) { return Vector(A.x-B.x, A.y-B.y); }
                                        Vector operator * (const Vector& A, double p) { return Vector(A.x*p, A.y*p); }

                                        bool operator < (const Point& a, const Point& b) {
                                            return a.x < b.x || (a.x == b.x && a.y < b.y);
                                        }

                                        bool operator == (const Point& a, const Point &b) {
                                            return dcmp(a.x-b.x) == 0 && dcmp(a.y-b.y) == 0;
                                        }

                                        double Dot(const Vector& A, const Vector& B) { return A.x*B.x + A.y*B.y; }
                                        double Cross(const Vector& A, const Vector& B) { return A.x*B.y - A.y*B.x; }
                                        double Length(Vector A) { return sqrt(Dot(A, A)); }

                                        bool SegmentProperIntersection(const Point& a1, const Point& a2, const Point& b1, const Point& b2) {
                                            double c1 = Cross(a2-a1,b1-a1), c2 = Cross(a2-a1,b2-a1),
                                                   c3 = Cross(b2-b1,a1-b1), c4=Cross(b2-b1,a2-b1);
                                            return dcmp(c1)*dcmp(c2)<0 && dcmp(c3)*dcmp(c4)<0;
                                        }

                                        bool OnSegment(const Point& p, const Point& a1, const Point& a2) {
                                            return dcmp(Cross(a1-p, a2-p)) == 0 && dcmp(Dot(a1-p, a2-p)) < 0;
                                        }

                                        typedef vector<Point> Polygon;

                                        int isPointInPolygon(const Point& p, const Polygon& poly){
                                            int n = poly.size();
                                            int wn = 0;
                                            for(int i = 0; i < n; i++){
                                                const Point& p1 = poly[i];
                                                const Point& p2 = poly[(i+1)%n];
                                                if(p1 == p || p2 == p || OnSegment(p, p1, p2)) return -1; // 在边界上
                                                int k = dcmp(Cross(p2-p1, p-p1));
                                                int d1 = dcmp(p1.y - p.y);
                                                int d2 = dcmp(p2.y - p.y);
                                                if(k > 0 && d1 <= 0 && d2 > 0) wn++;
                                                if(k < 0 && d2 <= 0 && d1 > 0) wn--;
                                            }
                                            if (wn != 0) return 1; // 内部
                                            return 0; // 外部
                                        }

                                        const int maxn = 100 + 5;

                                        bool isDiagonal(const Polygon& poly, int a, int b) {
                                            int n = poly.size();
                                            for(int i = 0; i < n; i++)
                                                if(i != a && i != b && OnSegment(poly[i], poly[a], poly[b])) return false; // 中间不能有其他点
                                            for(int i = 0; i < n; i++)
                                                if(SegmentProperIntersection(poly[i], poly[(i+1)%n], poly[a], poly[b])) return false; // 不能和多边形的边规范相交
                                            Point midp = (poly[a] + poly[b]) * 0.5;
                                            return (isPointInPolygon(midp, poly) == 1); // 整条线段在多边形内
                                        }

                                        const double INF = 1e9;
                                        double d[maxn][maxn];

                                        double solve(const Polygon& poly) {
                                            int n = poly.size();

                                            for(int i = 0; i < n; i++)
                                                for(int j = 0; j < n; j++) d[i][j] = -1;
                                            for(int i = n-2; i >= 0; i--)
                                                for(int j = i+1; j < n; j++) {
                                                    if(i + 1 == j) d[i][j] = 0;
                                                    else if(!(i == 0 && j == n-1) && !isDiagonal(poly, i, j)) d[i][j] = INF;
                                                    else {
                                                        d[i][j] = INF;
                                                        for(int k = i+1; k < j; k++) {
                                                            double m = max(d[i][k], d[k][j]);
                                                            double area = fabs(Cross(poly[j]-poly[i], poly[k]-poly[i])) / 2.0; // triangle i-j-k
                                                            m = max(m, area);
                                                            d[i][j] = min(d[i][j], m);
                                                        }
                                                    }
                                                }
                                            return d[0][n-1];
                                        }

                                        int main() {
                                            int T, n;
                                            scanf("%d", &T);
                                            while(T--) {
                                                scanf("%d", &n);
                                                double x, y;
                                                Polygon poly;
                                                for(int i = 0; i < n; i++) { scanf("%lf%lf", &x, &y); poly.push_back(Point(x,y)); }
                                                printf("%.1lf\n", solve(poly));
                                            }
                                            return 0;
                                        }
                                        ```

                        -   数上的动态规划 -<

                            :   -   9-12 UVa12186 Another Crisis                            uva12186.cpp -<

                                    :   ```cpp
                                        // UVa12186 Another Crisis
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<vector>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 100000 + 5;
                                        int n, T;
                                        vector<int> sons[maxn];

                                        int dp(int u) {
                                            if(sons[u].empty()) return 1;
                                            int k = sons[u].size();
                                            vector<int> d;
                                            for(int i = 0; i < k; i++)
                                                d.push_back(dp(sons[u][i]));
                                            sort(d.begin(), d.end());
                                            int c = (k*T - 1) / 100 + 1;
                                            int ans = 0;
                                            for(int i = 0; i < c; i++) ans += d[i];
                                            return ans;
                                        }

                                        int main() {
                                            int f;
                                            while(scanf("%d%d", &n, &T) == 2 && n) {
                                                for(int i = 0; i <= n; i++) sons[i].clear();
                                                for(int i = 1; i <= n; i++) {
                                                    scanf("%d", &f);
                                                    sons[f].push_back(i);
                                                }
                                                printf("%d\n", dp(0));
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-13 UVa1220 Party at Hali-Bula                         UVa1220.cpp -<

                                    :   ```cpp
                                        // UVa1220 Party at Hali-Bula
                                        // Rujia Liu
                                        //
                                        // rev 2: fixed bug reported by EndlessCheng
                                        #include<cstdio>
                                        #include<iostream>
                                        #include<string>
                                        #include<algorithm>
                                        #include<vector>
                                        #include<map>
                                        using namespace std;

                                        const int maxn = 200 + 5;

                                        int cnt;
                                        vector<int> sons[maxn];
                                        int n, d[maxn][2], f[maxn][2];

                                        map<string, int> dict;
                                        int ID(const string& s) {
                                            if(!dict.count(s)) dict[s] = cnt++;
                                            return dict[s];
                                        }

                                        int dp(int u, int k) {
                                            f[u][k] = 1;
                                            d[u][k] = k;
                                            for(int i = 0; i < sons[u].size(); i++) {
                                                int v = sons[u][i];
                                                if(k == 1) {
                                                    d[u][1] += dp(v, 0);
                                                    if(!f[v][0]) f[u][1] = 0;
                                                } else {
                                                    d[u][0] += max(dp(v, 0), dp(v, 1));
                                                    if(d[v][0] == d[v][1]) f[u][k] = 0;
                                                    else if(d[v][0] > d[v][1] && !f[v][0]) f[u][k] = 0;
                                                    else if(d[v][1] > d[v][0] && !f[v][1]) f[u][k] = 0;
                                                }
                                            }
                                            return d[u][k];
                                        }

                                        int main() {
                                            string s, s2;
                                            while(cin >> n >> s) {
                                                cnt = 0;
                                                dict.clear();
                                                for(int i = 0; i < n; i++) sons[i].clear();

                                                ID(s);
                                                for(int i = 0; i < n-1; i++) {
                                                    cin >> s >> s2;
                                                    sons[ID(s2)].push_back(ID(s));
                                                }
                                                printf("%d ", max(dp(0, 0), dp(0, 1)));
                                                bool unique = false;
                                                if(d[0][0] > d[0][1] && f[0][0]) unique = true;
                                                if(d[0][1] > d[0][0] && f[0][1]) unique = true;
                                                if(unique) printf("Yes\n"); else printf("No\n");
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-14 UVa1218 Perfect Service                            uva1218.cpp -<

                                    :   ```cpp
                                        // UVa1218 Perfect Service
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<vector>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 10000 + 5;
                                        const int INF = 1000000000;

                                        vector<int> G[maxn], vertices;
                                        int p[maxn], d[maxn][3];

                                        // build a rooted tree and dfs sequence
                                        void dfs(int u, int fa) {
                                            vertices.push_back(u);
                                            p[u] = fa;
                                            for(int i = 0; i < G[u].size(); i++) {
                                                int v = G[u][i];
                                                if(v != fa) dfs(v, u);
                                            }
                                        }

                                        int main() {
                                            int n;
                                            while(scanf("%d", &n) == 1) {
                                                for(int i = 0; i < n; i++) G[i].clear();
                                                for(int i = 0; i < n-1; i++) {
                                                    int u, v;
                                                    scanf("%d%d", &u, &v); u--; v--;
                                                    G[u].push_back(v);
                                                    G[v].push_back(u);
                                                }
                                                vertices.clear();
                                                dfs(0, -1);
                                                for(int i = vertices.size()-1; i >= 0; i--) {
                                                    int u = vertices[i];
                                                    d[u][0] = 1; d[u][1] = 0;
                                                    for(int j = 0; j < G[u].size(); j++) {
                                                        int v = G[u][j];
                                                        if(v == p[u]) continue;
                                                        d[u][0] += min(d[v][0], d[v][1]); // u is server
                                                        d[u][1] += d[v][2]; // u is not server, u's father is server
                                                        if(d[u][0] > INF) d[u][0] = INF; // avoid overflow!
                                                        if(d[u][1] > INF) d[u][1] = INF;
                                                    }
                                                    d[u][2] = INF;
                                                    for(int j = 0; j < G[u].size(); j++) {
                                                        int v = G[u][j];
                                                        if(v == p[u]) continue;
                                                        d[u][2] = min(d[u][2], d[u][1] - d[v][2] + d[v][0]); // neither u or father is server
                                                    }
                                                }
                                                printf("%d\n", min(d[0][0], d[0][2]));
                                                scanf("%d", &n); // flag
                                            }
                                            return 0;
                                        }
                                        ```

                        -   复杂状态的动态规划 -<

                            :   -   9-15 UVa10817 Headmaster's Headache                     uva10817.cpp -<

                                    :   ```cpp
                                        // UVa10817 Headmaster's Headache
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<iostream>
                                        #include<sstream>
                                        using namespace std;

                                        const int maxn = 100 + 20 + 5;
                                        const int maxs = 8;
                                        const int INF = 1000000000;
                                        int m, n, s, c[maxn], st[maxn], d[maxn][1<<maxs][1<<maxs];

                                        // s1是一个人教的科目集合，s2是两个人教的科目集合
                                        int dp(int i, int s0, int s1, int s2) {
                                            if(i == m+n) return s2 == (1<<s) - 1 ? 0 : INF;
                                            int& ans = d[i][s1][s2];
                                            if(ans >= 0) return ans;

                                            ans = INF;
                                            if(i >= m) ans = dp(i+1, s0, s1, s2); // 不选

                                            // 选
                                            int m0 = st[i] & s0, m1 = st[i] & s1;
                                            s0 ^= m0;
                                            s1 = (s1 ^ m1) | m0;
                                            s2 |= m1;
                                            ans = min(ans, c[i] + dp(i+1, s0, s1, s2));
                                            return ans;
                                        }

                                        int main() {
                                            int x;
                                            string line;
                                            while(getline(cin, line)) {
                                                stringstream ss(line);
                                                ss >> s >> m >> n;
                                                if(s == 0) break;

                                                for(int i = 0; i < m+n; i++) {
                                                    getline(cin, line);
                                                    stringstream ss(line);
                                                    ss >> c[i];
                                                    st[i] = 0;
                                                    while(ss >> x) st[i] |= (1 << (x-1));
                                                }
                                                memset(d, -1, sizeof(d));
                                                cout << dp(0, (1<<s)-1, 0, 0) << "\n";
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-16 UVa1252 Twenty Questions                           UVa1252.cpp -<

                                    :   ```cpp
                                        // UVa1252 Twenty Questions
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<ctime>
                                        #include<cstring>
                                        #include<algorithm>
                                        #include<cassert>
                                        using namespace std;

                                        const int maxn = 128;
                                        const int maxm = 11;

                                        int kase, n, m;
                                        char objects[maxn][maxm + 100];

                                        int vis[1<<maxm][1<<maxm], d[1<<maxm][1<<maxm];
                                        int cnt[1<<maxm][1<<maxm]; // cnt[s][a]: how many object satisfies: Intersect(featureSet(i), s) = a

                                        // s: the set of features we already asked
                                        // a: subset of s that the object has
                                        int dp(int s, int a) {
                                            if(cnt[s][a] <= 1) return 0;
                                            if(cnt[s][a] == 2) return 1;

                                            int& ans = d[s][a];
                                            if(vis[s][a] == kase) return ans;
                                            vis[s][a] = kase;

                                            ans = m;
                                            for(int k = 0; k < m; k++)
                                                if(!(s & (1<<k))) { // haven't asked
                                                    int s2 = s|(1<<k), a2 = a|(1<<k);
                                                    if(cnt[s2][a2] >= 1 && cnt[s2][a] >= 1) {
                                                        int need = max(dp(s2, a2),     // the object has feature k
                                                                dp(s2, a)) + 1; // the object doesn't have feature k
                                                        ans = min(ans, need);
                                                    }
                                                }
                                            return ans;
                                        }

                                        void init() {
                                            for(int s = 0; s < (1<<m); s++) {
                                                for(int a = s; a; a = (a-1)&s)
                                                    cnt[s][a] = 0;
                                                cnt[s][0] = 0;
                                            }
                                            for(int i = 0; i < n; i++) {
                                                int features = 0;
                                                for(int f = 0; f < m; f++)
                                                    if(objects[i][f] == '1') features |= (1<<f);
                                                for(int s = 0; s < (1<<m); s++)
                                                    cnt[s][s & features]++;
                                            }
                                        }


                                        int main() {
                                            memset(vis, 0, sizeof(vis));
                                            while(scanf("%d%d", &m, &n) == 2 && n) {
                                                ++kase;
                                                for(int i = 0; i < n; i++) scanf("%s", objects[i]);
                                                init();
                                                printf("%d\n", dp(0, 0));
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-17 UVa1412 Fund Management                            uva1412.cpp -<

                                    :   ```cpp
                                        // UVa1412 Fund Management
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<vector>
                                        #include<map>
                                        using namespace std;

                                        const double INF = 1e30;
                                        const int maxn = 8;
                                        const int maxm = 100 + 5;
                                        const int maxstate = 15000;

                                        int m, n, s[maxn], k[maxn], kk;
                                        double c, price[maxn][maxm];
                                        char name[maxn][10];

                                        double d[maxm][maxstate];
                                        int opt[maxm][maxstate], prev[maxm][maxstate];

                                        int buy_next[maxstate][maxn], sell_next[maxstate][maxn];
                                        vector<vector<int> > states;
                                        map<vector<int>, int> ID;

                                        void dfs(int stock, vector<int>& lots, int totlot) {
                                            if(stock == n) {
                                                ID[lots] = states.size();
                                                states.push_back(lots);
                                            }
                                            else for(int i = 0; i <= k[stock] && totlot + i <= kk; i++) {
                                                lots[stock] = i;
                                                dfs(stock+1, lots, totlot + i);
                                            }
                                        }

                                        void init() {
                                            vector<int> lots(n);
                                            states.clear();
                                            ID.clear();
                                            dfs(0, lots, 0);
                                            for(int s = 0; s < states.size(); s++) {
                                                int totlot = 0;
                                                for(int i = 0; i < n; i++) totlot += states[s][i];
                                                for(int i = 0; i < n; i++) {
                                                    buy_next[s][i] = sell_next[s][i] = -1;
                                                    if(states[s][i] < k[i] && totlot < kk) {
                                                        vector<int> newstate = states[s];
                                                        newstate[i]++;
                                                        buy_next[s][i] = ID[newstate];
                                                    }
                                                    if(states[s][i] > 0) {
                                                        vector<int> newstate = states[s];
                                                        newstate[i]--;
                                                        sell_next[s][i] = ID[newstate];
                                                    }
                                                }
                                            }
                                        }

                                        void update(int day, int s, int s2, double v, int o) {
                                            if(v > d[day+1][s2]) {
                                                d[day+1][s2] = v;
                                                opt[day+1][s2] = o;
                                                prev[day+1][s2] = s;
                                            }
                                        }

                                        double dp() {
                                            for(int day = 0; day <= m; day++)
                                                for(int s = 0; s < states.size(); s++) d[day][s] = -INF;

                                            d[0][0] = c;
                                            for(int day = 0; day < m; day++)
                                                for(int s = 0; s < states.size(); s++) {
                                                    double v = d[day][s];
                                                    if(v < -1) continue;

                                                    update(day, s, s, v, 0); // HOLD
                                                    for(int i = 0; i < n; i++) {
                                                        if(buy_next[s][i] >= 0 && v >= price[i][day] - 1e-3)
                                                            update(day, s, buy_next[s][i], v - price[i][day], i+1); // BUY
                                                        if(sell_next[s][i] >= 0)
                                                            update(day, s, sell_next[s][i], v + price[i][day], -i-1); // SELL
                                                    }
                                                }
                                            return d[m][0];
                                        }

                                        void print_ans(int day, int s) {
                                            if(day == 0) return;
                                            print_ans(day-1, prev[day][s]);
                                            if(opt[day][s] == 0) printf("HOLD\n");
                                            else if(opt[day][s] > 0) printf("BUY %s\n", name[opt[day][s]-1]);
                                            else printf("SELL %s\n", name[-opt[day][s]-1]);
                                        }

                                        int main() {
                                            int kase = 0;
                                            while(scanf("%lf%d%d%d", &c, &m, &n, &kk) == 4) {
                                                if(kase++ > 0) printf("\n");

                                                for(int i = 0; i < n; i++) {
                                                    scanf("%s%d%d", name[i], &s[i], &k[i]);
                                                    for(int j = 0; j < m; j++) { scanf("%lf", &price[i][j]); price[i][j] *= s[i]; }
                                                }
                                                init();

                                                double ans = dp();
                                                printf("%.2lf\n", ans);
                                                print_ans(m, 0);
                                            }
                                            return 0;
                                        }
                                        ```

                        -   竞赛题目选讲 -<

                            :   -   9-18 UVa10618 Tango Tango Insurrection                  uva10618.cpp -<

                                    :   ```cpp
                                        // UVa10618 Tango Tango Insurrection
                                        // Rujia Liu
                                        // Tricky case: .RDLU
                                        // Answer: RLRLR (yes, you TURNED around!)
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<cassert>

                                        const int UP = 0;
                                        const int LEFT = 1;
                                        const int RIGHT = 2;
                                        const int DOWN = 3;

                                        const int maxn = 70 + 5;

                                        // d[i][a][b][s] means the minimal future energy when you already tapped i notes
                                        // your left foot at a, right foot at b, last foot is s
                                        int d[maxn][4][4][3];

                                        // if the optimal strategy is to move foot f(0~2) to position t, action=f*4+t
                                        int action[maxn][4][4][3];

                                        char seq[maxn], pos[256], footch[] = ".LR";

                                        // energy needed to move a foot FOR THE SECOND TIME, from a to ta
                                        int energy(int a, int ta) {
                                            if(a == ta) return 3;
                                            if(a + ta == 3) return 7; // across
                                            return 5; // adjacent
                                        }

                                        int energy(int i, int a, int b, int s, int f, int t, int& ta, int& tb) {
                                            ta = a; tb = b;
                                            if(f == 1) ta = t;
                                            else if(f == 2) tb = t;

                                            // check target arrows
                                            if(ta == tb) return -1;
                                            if(ta == RIGHT && tb == LEFT) return -1;
                                            if(a == RIGHT && tb != b) return -1; // you can't move you right foot before your left foot comes back
                                            if(b == LEFT  && ta != a) return -1;

                                            // compute energy
                                            int e;
                                            if(f == 0) e = 0; // no move
                                            else if(f != s) e = 1; // alternative foot, low energy
                                            else {
                                                if(f == 1) e = energy(a, ta);
                                                else e = energy(b, tb);
                                            }
                                            return e;
                                        }

                                        // update state (i,a,b,s). foot f is moved to t
                                        void update(int i, int a, int b, int s, int f, int t) {
                                            int ta, tb;
                                            int e = energy(i, a, b, s, f, t, ta, tb);
                                            if(e < 0) return; // invalid

                                            int cost = d[i+1][ta][tb][f] + e;
                                            int& ans = d[i][a][b][s];
                                            if(cost < ans) {
                                                ans = cost;
                                                action[i][a][b][s] = f * 4 + t;
                                            }
                                        }

                                        int main() {
                                            pos['U'] = 0; pos['L'] = 1; pos['R'] = 2; pos['D'] = 3;

                                            while(scanf("%s", seq) == 1) {
                                                if(seq[0] == '#') break;
                                                int n = strlen(seq);
                                                memset(d, 0, sizeof(d));
                                                for(int i = n-1; i >= 0; i--)
                                                    for(int a = 0; a < 4; a++)
                                                        for(int b = 0; b < 4; b++) if(a != b)
                                                            for(int s = 0; s < 3; s++) {
                                                                d[i][a][b][s] = 10*n;
                                                                if(seq[i] == '.') {
                                                                    update(i, a, b, s, 0, 0); // no move
                                                                    for(int t = 0; t < 4; t++) {
                                                                        update(i, a, b, s, 1, t); // move left foot
                                                                        update(i, a, b, s, 2, t); // move right foot
                                                                    }
                                                                } else {
                                                                    update(i, a, b, s, 1, pos[seq[i]]); // move left foot
                                                                    update(i, a, b, s, 2, pos[seq[i]]); // move right foot
                                                                }
                                                            }

                                                // print solution
                                                int a = LEFT, b = RIGHT, s = 0; // d[0][1][2][0] is out answer
                                                for(int i = 0; i < n; i++) {
                                                    int f = action[i][a][b][s] / 4;
                                                    int t = action[i][a][b][s] % 4;
                                                    printf("%c", footch[f]);
                                                    s = f;
                                                    if(f == 1) a = t;
                                                    else if(f == 2) b = t;
                                                }
                                                printf("\n");
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-19 UVa1627 Team them up!                              UVa1627.cpp -<

                                    :   ```cpp
                                        // UVa1627 Team them up!
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<iostream>
                                        #include<vector>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 100 + 5;

                                        int n, G[maxn][maxn], color[maxn], diff[maxn], cc;
                                        vector<int> team[maxn][2]; // team[cc][c] is the list of people in connected-component cc, color c

                                        // returns false if not bipartite graph
                                        bool dfs(int u, int c) {
                                            color[u] = c;
                                            team[cc][c-1].push_back(u);
                                            for(int v = 0; v < n; v++) {
                                                if(u != v && !(G[u][v] && G[v][u])) { // u and v must be in different groups
                                                    if(color[v] > 0 && color[v] == color[u]) return false;
                                                    if(!color[v] && !dfs(v, 3-c)) return false;
                                                }
                                            }
                                            return true;
                                        }

                                        bool build_graph() {
                                            memset(color, 0, sizeof(color));
                                            cc = 0; // current connected-component
                                            for(int i = 0; i < n; i++)
                                                if(!color[i]) {
                                                    team[cc][0].clear();
                                                    team[cc][1].clear();
                                                    if(!dfs(i, 1)) return false;
                                                    diff[cc] = team[cc][0].size() - team[cc][1].size();
                                                    cc++;
                                                }

                                            return true;
                                        }

                                        // d[i][j+n] = 1 iff we can arrange first i cc so that team 1 has j more people than team 2.
                                        int d[maxn][maxn*2], teamno[maxn];

                                        void print(int ans) {
                                            vector<int> team1, team2;
                                            for(int i = cc-1; i >= 0; i--) {
                                                int t;
                                                if(d[i][ans-diff[i]+n]) { t = 0; ans -= diff[i]; }
                                                else { t = 1; ans += diff[i]; }
                                                for(int j = 0; j < team[i][t].size(); j++)
                                                    team1.push_back(team[i][t][j]);
                                                for(int j = 0; j < team[i][1^t].size(); j++)
                                                    team2.push_back(team[i][1^t][j]);
                                            }
                                            printf("%d", team1.size());
                                            for(int i = 0; i < team1.size(); i++) printf(" %d", team1[i]+1);
                                            printf("\n");

                                            printf("%d", team2.size());
                                            for(int i = 0; i < team2.size(); i++) printf(" %d", team2[i]+1);
                                            printf("\n");
                                        }

                                        void dp() {
                                            memset(d, 0, sizeof(d));
                                            d[0][0+n] = 1;
                                            for(int i = 0; i < cc; i++)
                                                for(int j = -n; j <= n; j++) if(d[i][j+n]) {
                                                    d[i+1][j+diff[i]+n] = 1;
                                                    d[i+1][j-diff[i]+n] = 1;
                                                }
                                            for(int ans = 0; ans <= n; ans++) {
                                                if(d[cc][ans+n]) { print(ans); return; }
                                                if(d[cc][-ans+n]) { print(-ans); return; }
                                            }
                                        }

                                        int main() {
                                            int T;
                                            cin >> T;
                                            while(T--) {
                                                cin >> n;
                                                memset(G, 0, sizeof(G));
                                                for(int u = 0; u < n; u++) {
                                                    int v;
                                                    while(cin >> v && v) G[u][v-1] = 1;
                                                }

                                                if(n == 1 || !build_graph()) cout << "No solution\n";
                                                else dp();

                                                if(T) cout << "\n";
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-20 UVa10934 Dropping water balloons                   UVa10934.cpp -<

                                    :   ```cpp
                                        // UVa10934 Dropping water balloons
                                        // Rujia Liu
                                        #include<iostream>
                                        #include<cstring>
                                        using namespace std;

                                        const int maxk = 100;
                                        const int maxa = 63;

                                        unsigned long long d[maxk+1][maxa+1];

                                        int main() {
                                            memset(d, 0, sizeof(d));
                                            for(int i = 1; i <= maxk; i++)
                                                for(int j = 1; j <= maxa; j++)
                                                    d[i][j] = d[i-1][j-1] + 1 + d[i][j-1];

                                            int k;
                                            unsigned long long n;
                                            while(cin >> k >> n && k) {
                                                int ans = -1;
                                                for(int i = 1; i <= maxa; i++)
                                                    if(d[k][i] >= n) { ans = i; break; }
                                                if(ans < 0) cout << "More than " << maxa << " trials needed.\n";
                                                else cout << ans << "\n";
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-21 UVa1336 Fixing the Great Wall                      UVa1336.cpp -<

                                    :   ```cpp
                                        // UVa1336 Fixing the Great Wall
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<cmath>
                                        #include<algorithm>
                                        #include<cassert>
                                        using namespace std;

                                        const int maxn = 1000 + 5;
                                        const double INF = 1e30;

                                        struct Section {
                                            double x, c, dt;
                                            bool operator < (const Section& rhs) const {
                                                return x < rhs.x;
                                            }
                                        } s[maxn];

                                        int kase, n;
                                        int vis[maxn][maxn][2];
                                        double v, x, d[maxn][maxn][2];
                                        double psdt[maxn]; // prefix sum of dt

                                        // cost accumulated when walking from x1 and x2.
                                        // section[i~j] are already finished
                                        double cost(double x1, double x2, int i, int j) {
                                            double finished_dt = 0;
                                            assert(i <= j);
                                            if(i >= 0 && j >= 0) finished_dt += psdt[j] - psdt[i-1];
                                            return (psdt[n] - finished_dt) * fabs(x2 - x1) / v;
                                        }

                                        double dp(int i, int j, int p) {
                                            if(i == 1 && j == n) return 0;
                                            double& ans = d[i][j][p];
                                            if(vis[i][j][p] == kase) return ans;
                                            vis[i][j][p] = kase;

                                            ans = INF;
                                            double x = (p == 0 ? s[i].x : s[j].x);
                                            if(i > 1) ans = min(ans, dp(i-1, j, 0) + cost(x, s[i-1].x, i, j));
                                            if(j < n) ans = min(ans, dp(i, j+1, 1) + cost(x, s[j+1].x, i, j));
                                            return ans;
                                        }

                                        int main() {
                                            memset(vis, 0, sizeof(vis));
                                            while(scanf("%d%lf%lf", &n, &v, &x) == 3 && n) {
                                                ++kase;
                                                double sumc = 0;
                                                for(int i = 1; i <= n; i++) {
                                                    scanf("%lf%lf%lf", &s[i].x, &s[i].c, &s[i].dt);
                                                    sumc += s[i].c;
                                                }
                                                sort(s+1, s+n+1); // in increasing order of position

                                                psdt[0] = 0;
                                                for(int i = 1; i <= n; i++)
                                                    psdt[i] = psdt[i-1] + s[i].dt;

                                                s[0].x = -INF;
                                                s[n+1].x = INF;
                                                double ans = INF;
                                                for(int i = 1; i <= n+1; i++)
                                                    if(x > s[i-1].x && x < s[i].x) {
                                                        if(i > 1) ans = min(ans, dp(i-1, i-1, 0) + cost(x, s[i-1].x, -1, -1)); // move left
                                                        if(i <= n) ans = min(ans, dp(i, i, 0) + cost(x, s[i].x, -1, -1)); // move right
                                                        break;
                                                    }
                                                printf("%.0lf\n", floor(ans + sumc));
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-22 UVa12105 Bigger is Better                          UVa12105.cpp -<

                                    :   ```cpp
                                        // UVa12105 Bigger is Better
                                        // Rujia Liu
                                        // This solution is simpler than the one described in the book

                                        #include<cstdio>
                                        #include<cstring>

                                        using namespace std;

                                        const int maxn = 100 + 5;
                                        const int maxm = 3000 + 5;

                                        // dp[i][j] is the maximal length of the integer whose remainder is j (with at most i matches)
                                        // p[i][j] is the maximal digit for state (i,j)
                                        int n, m, dp[maxn][maxm], p[maxn][maxm];

                                        int needs[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

                                        int main(){
                                            int kase = 0;
                                            while(scanf("%d%d", &n, &m) == 2) {
                                                printf("Case %d: ", ++kase);

                                                for(int i = 0; i <= n; i++)
                                                    for(int j = 0; j < m; j++){
                                                        int& ans = dp[i][j];
                                                        ans = p[i][j] = -1;
                                                        if (j == 0) ans = 0;
                                                        for(int d = 9; d >= 0; d--)
                                                            if (i >= needs[d]){
                                                                int t = dp[i - needs[d]][(j * 10 + d) % m];
                                                                if (t >= 0 && t + 1 > ans){
                                                                    ans = t + 1;
                                                                    p[i][j] = d;
                                                                }
                                                            }
                                                    }

                                                if (p[n][0] < 0) printf("-1");
                                                else {
                                                    int i = n, j = 0;
                                                    for(int d = p[i][j]; d >= 0; d = p[i][j]){
                                                        printf("%d", d);
                                                        i -= needs[d];
                                                        j = (j * 10 + d) % m;
                                                    }
                                                }
                                                printf("\n");
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-23 UVa1204 Fun Game                                   UVa1204.cpp -<

                                    :   ```cpp
                                        // UVa1204 Fun Game
                                        // Rujia Liu
                                        #include<cstring>
                                        #include<iostream>
                                        #include<string>
                                        #include<algorithm>
                                        using namespace std;

                                        #define REP(i,n) for(int i = 0; i < (n); i++)

                                        const int maxn = 16;
                                        const int maxlen = 100 + 5;

                                        // the overlap length of a (left) and b (right)
                                        int calc_overlap(const string& a, const string& b) {
                                            int n1 = a.length();
                                            int n2 = b.length();
                                            for(int i = 1; i < n1; i++) { // place b at position i
                                                if(n2 + i <= n1) continue; // b cannot extend to the right of a
                                                bool ok = true;
                                                for(int j = 0; i + j < n1; j++)
                                                    if(a[i+j] != b[j]) { ok = false; break; }
                                                if(ok) return n1 - i;
                                            }
                                            return 0;
                                        }

                                        struct Item {
                                            string s, rev;
                                            bool operator < (const Item& rhs) const {
                                                return s.length() < rhs.s.length();
                                            }
                                        };

                                        int n;
                                        string s[maxn][2];
                                        int len[maxn];
                                        int overlap[maxn][maxn][2][2];

                                        void init() {
                                            // read input
                                            Item tmp[maxn];
                                            REP(i,n) {
                                                cin >> tmp[i].s;
                                                tmp[i].rev = tmp[i].s;
                                                reverse(tmp[i].rev.begin(), tmp[i].rev.end());
                                            }

                                            // remove strings that are occurred in another string
                                            int n2 = 0;
                                            sort(tmp, tmp+n);
                                            REP(i,n) {
                                                bool need = true;
                                                for(int j = i+1; j < n; j++) {
                                                    if(tmp[j].s.find(tmp[i].s) != string::npos ||
                                                            tmp[j].rev.find(tmp[i].s) != string::npos) { need = false; break; }
                                                }
                                                if(need) {
                                                    s[n2][0] = tmp[i].s; s[n2][1] = tmp[i].rev;
                                                    len[n2] = tmp[i].s.length();
                                                    n2++;
                                                }
                                            }
                                            n = n2;

                                            // calculate overlaps
                                            REP(i,n) REP(j,n) REP(x,2) REP(y,2)
                                                overlap[i][j][x][y] = calc_overlap(s[i][x] , s[j][y]);
                                        }

                                        // d[s][i][x] is the minimal total length if we used set s and the last string is s[i][x]
                                        int d[1<<maxn][maxn][2];

                                        inline void update(int& x, int v) {
                                            if(x < 0 || v < x) x = v;
                                        }

                                        void solve() {
                                            // dp
                                            memset(d, -1, sizeof(d));
                                            d[1][0][0] = len[0]; // always use string s[0][0] first
                                            int full = (1<<n) - 1;
                                            for(int s = 1; s < full; s++) {
                                                REP(i,n) REP(x,2) if(d[s][i][x] >= 0)
                                                    for(int j = 1; j < n; j++) // place j
                                                        if(!(s & (1<<j)))
                                                            REP(y,2) update(d[s|(1<<j)][j][y], d[s][i][x]+len[j]-overlap[i][j][x][y]);
                                            }

                                            // find answer
                                            int ans = -1;
                                            REP(i,n) REP(x,2) {
                                                if(d[full][i][x] < 0) continue;
                                                update(ans, d[full][i][x]-overlap[i][0][x][0]);
                                            }
                                            if(ans <= 1) ans = 2; // problem said: at least two children

                                            cout << ans << "\n";
                                        }

                                        int main() {
                                            while(cin >> n && n) {
                                                init();
                                                solve();
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-24 UVa12099 Bookcase                                  UVa12099.cpp -<

                                    :   ```cpp
                                        // UVa12099 The Bookcase
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 70 + 5;
                                        const int maxw = 30;
                                        const int INF = 1000000000;

                                        struct Book {
                                            int h, w;
                                            bool operator < (const Book& rhs) const {
                                                return h > rhs.h || (h == rhs.h && w > rhs.w);
                                            }
                                        } books[maxn];

                                        // We sort books in decreasing order of heights and place them one by one
                                        // So level 1's height is book 1's height
                                        // dp[i][j][k] is the minimal total heights of level 2 and 3 when we used i books, level 2 and 3's total widths are j and k,
                                        // level 1's width is (sumw[n] - j - k)
                                        int dp[2][maxn*maxw][maxn*maxw];
                                        int sumw[maxn]; // sum[i] is the sum of widths of first i books. sum[0] = 0.

                                        // increased height if you place a book with height h to a level with width w
                                        // if w == 0, that means the level if empty, so height is increased by h
                                        // otherwise, the height is unchanged because we're adding books in decreasing order of height
                                        inline int f(int w, int h) {
                                            return w == 0 ? h : 0;
                                        }

                                        inline void update(int& newd, int d) {
                                            if(newd < 0 || d < newd) newd = d;
                                        }

                                        int main () {
                                            int T;
                                            scanf("%d", &T);
                                            while(T--) {
                                                int n;
                                                scanf("%d", &n);
                                                for(int i = 0; i < n; i++)
                                                    scanf("%d%d", &books[i].h, &books[i].w);
                                                sort(books, books+n);

                                                sumw[0] = 0;
                                                for(int i = 1; i <= n; i++)
                                                    sumw[i] = sumw[i-1] + books[i-1].w;

                                                dp[0][0][0] = 0;
                                                int t = 0;
                                                for(int i = 0; i < n; i++) {
                                                    // Don't use memset. It's too slow
                                                    for(int j = 0; j <= sumw[i+1]; j++)
                                                        for(int k = 0; k <= sumw[i+1]-j; k++) dp[t^1][j][k] = -1;

                                                    for(int j = 0; j <= sumw[i]; j++)
                                                        for(int k = 0; k <= sumw[i]-j; k++) if(dp[t][j][k] >= 0) {
                                                            update(dp[t^1][j][k], dp[t][j][k]); // level 1
                                                            update(dp[t^1][j+books[i].w][k], dp[t][j][k] + f(j,books[i].h)); // level 2
                                                            update(dp[t^1][j][k+books[i].w], dp[t][j][k] + f(k,books[i].h)); // level 3
                                                        }
                                                    t ^= 1;
                                                }

                                                int ans = INF;
                                                for(int j = 1; j <= sumw[n]; j++) // each level has at least one book
                                                    for(int k = 1; k <= sumw[n]-j; k++) if(dp[t][j][k] >= 0) {
                                                        int w = max(max(j, k), sumw[n]-j-k);
                                                        int h = books[0].h + dp[t][j][k];
                                                        ans = min(ans, w * h);
                                                    }
                                                printf("%d\n", ans);
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-25 UVa12170 Easy Climb                                uva12170.cpp -<

                                    :   ```cpp
                                        // UVa12170 Easy Climb
                                        // Rujia Liu
                                        #include<iostream>
                                        #include<vector>
                                        #include<algorithm>
                                        using namespace std;

                                        typedef long long LL;

                                        const int maxn = 100 + 5;
                                        const int maxx = maxn*maxn*2;
                                        const LL  INF = (1LL << 60);

                                        LL h[maxn], x[maxx], dp[2][maxx];

                                        int main () {
                                            int T;
                                            cin >> T;
                                            while(T--) {
                                                int n;
                                                LL d;
                                                cin >> n >> d;
                                                for(int i = 0; i < n; i++) cin >> h[i];
                                                if(abs(h[0] - h[n-1]) > (n-1)*d) {
                                                    cout << "impossible\n";
                                                    continue;
                                                }

                                                // useful heights
                                                int nx = 0;
                                                for(int i = 0; i < n; i++)
                                                    for(int j = -n+1; j <= n-1; j++)
                                                        x[nx++] = h[i] + j*d;
                                                sort(x, x+nx);
                                                nx = unique(x, x+nx) - x;

                                                // dp
                                                int t = 0;
                                                for(int i = 0; i < nx; i++) {
                                                    dp[0][i] = INF;
                                                    if(x[i] == h[0]) dp[0][i] = 0;
                                                }
                                                for(int i = 1; i < n; i++) {
                                                    int k = 0;
                                                    for(int j = 0; j < nx; j++) {
                                                        while(k < nx && x[k] < x[j]-d) k++;
                                                        while(k+1 < nx && x[k+1] <= x[j]+d && dp[t][k+1] <= dp[t][k]) k++; // min in sliding window
                                                        if(dp[t][k] == INF) dp[t^1][j] = INF; // (t, k) is not reachable
                                                        else dp[t^1][j] = dp[t][k] + abs(x[j] - h[i]);
                                                    }
                                                    t ^= 1;
                                                }
                                                for(int i = 0; i < nx; i++)
                                                    if(x[i] == h[n-1]) cout << dp[t][i] << "\n";
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-26 UVa1380 A Scheduling Problem                       uva1380.cpp -<

                                    :   ```cpp
                                        // UVa1380 A Scheduling Problem
                                        // Rujia Liu
                                        #include<iostream>
                                        #include<string>
                                        #include<cstring>
                                        #include<sstream>
                                        #include<vector>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 200 + 5;
                                        const int INF = 1000000000;

                                        struct Edge {
                                            int u, v, d; // d=1 means u->v, d=2 means v->u, d=0 means u-v
                                            Edge(int u=0, int v=0, int d=0):u(u),v(v),d(d){}
                                        };

                                        vector<Edge> edges[maxn];
                                        int n, root, maxlen, f[maxn], g[maxn], have_father[maxn];

                                        // maximal length of a DIRECTED path starting from u
                                        int dfs(int u) {
                                            int ans = 0;
                                            for(int i = 0; i < edges[u].size(); i++) {
                                                int v = edges[u][i].v;
                                                if(edges[u][i].d == 1)
                                                    ans = max(ans, dfs(v)+1);
                                            }
                                            return ans;
                                        }

                                        bool read_data() {
                                            bool have_data = false;
                                            int a, b;
                                            n = 0;
                                            for(int i = 0; i < maxn; i++) edges[i].clear();
                                            memset(have_father, 0, sizeof(have_father));

                                            while(cin >> a && a){
                                                string str;
                                                have_data = true;
                                                if(a > n) n = a;
                                                while(cin >> str && str != "0"){
                                                    int len = str.length();
                                                    char dir = str[len-1];
                                                    if(dir == 'd' || dir == 'u') str = str.substr(0, len-1);
                                                    stringstream ss(str);
                                                    ss >> b; // b is a's son
                                                    if(b > n) n = b;
                                                    have_father[b] = 1;
                                                    if(dir == 'd'){
                                                        edges[a].push_back(Edge(a, b, 1)); // forward
                                                        edges[b].push_back(Edge(b, a, 2)); // backward
                                                    }else if(dir == 'u'){
                                                        edges[a].push_back(Edge(a, b, 2));
                                                        edges[b].push_back(Edge(b, a, 1));
                                                    }else{
                                                        edges[a].push_back(Edge(a, b, 0)); // it's a rooted tree, so we don't store edge to father
                                                    }
                                                }
                                            }
                                            if(have_data) {
                                                for(int i = 1; i <= n; i++)
                                                    if(!have_father[i] && !edges[i].empty()) { root = i; break; }
                                            }
                                            return have_data;
                                        }

                                        struct UndirectedSon {
                                            int w, f, g;
                                            UndirectedSon(int w=0, int f=0, int g=0):w(w),f(f),g(g){}
                                        };

                                        bool cmp_f(const UndirectedSon& w1, const UndirectedSon& w2) {
                                            return w1.f < w2.f;
                                        }

                                        bool cmp_g(const UndirectedSon& w1, const UndirectedSon& w2) {
                                            return w1.g < w2.g;
                                        }

                                        // calculate f[i] and g[i]
                                        // return true iff f[i] < INF
                                        // f[i] is the minimal length of the longest "->u" path if all subtree paths have length <= maxlen
                                        // g[i] is the minimal length of the longest "u->" path if all subtree paths have length <= maxlen
                                        // f[i] = g[i] = INF if "all subtree paths have length <= maxlen" cannot be satisfied
                                        bool dp(int i, int fa) {
                                            if(edges[i].empty()) {
                                                f[i] = g[i] = 0;
                                                return true;
                                            }
                                            vector<UndirectedSon> sons;
                                            int f0 = 0, g0 = 0; // f'[i] and g'[i] for directed sons

                                            // let f'[i] = max{f[w] | w->i}+1, g'[i] = max{g[w] | i->w}+1
                                            // then we should change some undirected edges to ->u or u-> edges so that f'[i]+g'[i] <= maxlen
                                            // then f[i] is the minimal f'[i] under this condition, and g[i] is the minimal g'[i]
                                            for(int k = 0; k < edges[i].size(); k++) {
                                                int w = edges[i][k].v;
                                                if(w == fa) continue;
                                                dp(w, i);
                                                int d = edges[i][k].d;
                                                if(d == 0) sons.push_back(UndirectedSon(w, f[w], g[w]));
                                                else if(d == 1) g0 = max(g0, g[w]+1);
                                                else f0 = max(f0, f[w]+1);
                                            }
                                            // If there is no undirected edges, we're done
                                            if(sons.empty()) {
                                                f[i] = f0; g[i] = g0;
                                                if(f[i] + g[i] > maxlen) { f[i] = g[i] = INF; }
                                                return f[i] < INF;
                                            }

                                            f[i] = g[i] = INF;

                                            // to calculate f[i], we sort f[w] of undirected sons in increasing order and make first p edges to w->i
                                            // then we calculate f'[i] and g'[i], check for f'[i]+g'[i] <= maxlen and update answer
                                            int s = sons.size();
                                            sort(sons.begin(), sons.end(), cmp_f);
                                            int maxg[maxn]; // maxg[i] is max{sons[i].g, sons[i+1].g, ...}
                                        maxg[s-1] = sons[s-1].g;
                                        for(int k = s-2; k >= 0; k--)
                                            maxg[k] = max(sons[k].g, maxg[k+1]);
                                        for(int p = 0; p <= sons.size(); p++) {
                                            int ff = f0, gg = g0;
                                            if(p > 0) ff = max(ff, sons[p-1].f+1);
                                            if(p < sons.size()) gg = max(gg, maxg[p]+1);
                                            if(ff + gg <= maxlen) f[i] = min(f[i], ff);
                                        }

                                        // g[i] is similar
                                        sort(sons.begin(), sons.end(), cmp_g);
                                        int maxf[maxn]; // maxf[i] is max{sons[i].f, sons[i+1].f, ...}
                                        maxf[s-1] = sons[s-1].f;
                                        for(int k = s-2; k >= 0; k--)
                                        maxf[k] = max(sons[k].f, maxf[k+1]);
                                        for(int p = 0; p <= sons.size(); p++) {
                                            int ff = f0, gg = g0;
                                            if(p > 0) gg = max(gg, sons[p-1].g+1);
                                            if(p < sons.size()) ff = max(ff, maxf[p]+1);
                                            if(ff + gg <= maxlen) g[i] = min(g[i], gg);
                                        }

                                        return f[i] < INF;
                                        }

                                        int main() {
                                            while(read_data()) {
                                                maxlen = 0;
                                                for(int i = 1; i <= n; i++) maxlen = max(maxlen, dfs(i));
                                                // Note: the problem asks for the number of nodes in path, but all the "lengths" above mean "number of edges"
                                                if(dp(root, -1)) cout << maxlen+1 << "\n";
                                                else cout << maxlen+2 << "\n";
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-27 UVa10559 Blocks                                    UVa10559.cpp -<

                                    :   ```cpp
                                        // UVa10559 Blocks
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 200 + 5;
                                        int n, A[maxn], d[maxn][maxn][maxn];

                                        // blocks i~j, plus k blocks whose color is the same as block j
                                        int dp(int i, int j, int k) {
                                            if(i > j) return 0;
                                            int& ans = d[i][j][k];
                                            if(ans >= 0) return ans;
                                            int p = j;
                                            while(p >= i && A[p] == A[j]) p--;
                                            p++; // leftmost position that block j's color can "extend" to
                                            ans = dp(i, p-1, 0) + (j-p+k+1)*(j-p+k+1); // click block j
                                            for(int q = i; q < p; q++)
                                                if(A[q] == A[j] && A[q] != A[q+1]) // remove q+1~p-1 first
                                                    ans = max(ans, dp(q+1, p-1, 0) + dp(i, q, j-p+k+1));
                                            return ans;
                                        }

                                        int main() {
                                            int T;
                                            scanf("%d", &T);
                                            for(int kase = 1; kase <= T; kase++) {
                                                scanf("%d", &n);
                                                for(int i = 0; i < n; i++) scanf("%d", &A[i]);
                                                memset(d, -1, sizeof(d));
                                                printf("Case %d: %d\n", kase, dp(0, n-1, 0));
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-28 UVa1439 Exclusive Access 2                         UVa1439.cpp -<

                                    :   ```cpp
                                        // UVa1439 Exclusive Access 2
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<algorithm>
                                        using namespace std;

                                        // This is different from problem statement
                                        // Here n is the number of resources, m is the number of processes (n in the problem statement)
                                        const int maxn = 15;
                                        const int maxm = 100 + 5;
                                        int n, m, u[maxm], v[maxm], G[maxn][maxn];
                                        int ind[1<<maxn], d[1<<maxn], best[1<<maxn], label[maxn];

                                        bool independent(int mask) {
                                            for(int i = 0; i < maxn; i++) if(mask & (1<<i))
                                                for(int j = 0; j < maxn; j++) if(mask & (1<<j))
                                                    if(i != j && G[i][j]) return false;
                                            return true;
                                        }

                                        // How many colors are needed to color the set 'mask'
                                        int dp(int mask) {
                                            int& ans = d[mask];
                                            if(ans >= 0) return ans;
                                            if(mask == 0) return 0;
                                            ans = maxn+1;
                                            for(int s = mask; s; s = (s-1)&mask)
                                                if(ind[s]) {
                                                    int v = dp(mask^s) + 1;
                                                    if(v < ans) { ans = v; best[mask] = s; }
                                                }
                                            return ans;
                                        }

                                        // mark the set 'mask' with color c
                                        void mark(int mask, int c) {
                                            for(int i = 0; i < maxn; i++)
                                                if(mask & (1<<i)) label[i] = c;
                                        }

                                        int main() {
                                            while(scanf("%d", &m) == 1) {
                                                memset(G, 0, sizeof(G));
                                                int useful = 0;
                                                for(int i = 0; i < m; i++) {
                                                    char r1[9], r2[9];
                                                    scanf("%s%s", r1, r2);
                                                    u[i] = r1[0]-'L', v[i] = r2[0]-'L';
                                                    G[u[i]][v[i]] = 1;
                                                    useful |= (1<<u[i]);
                                                    useful |= (1<<v[i]);
                                                }

                                                // find the independent sets
                                                memset(ind, 0, sizeof(ind));
                                                for(int s = useful; s; s = (s-1)&useful)
                                                    if(independent(s)) ind[s] = true;

                                                // dp
                                                memset(d, -1, sizeof(d));
                                                int ans = dp(useful);
                                                printf("%d\n", ans-2);

                                                // construct the answer
                                                int s = useful, k = 0;
                                                while(s) {
                                                    mark(s, k++);
                                                    s ^= best[s];
                                                }
                                                for(int i = 0; i < m; i++) {
                                                    if(label[u[i]] < label[v[i]]) swap(u[i], v[i]);
                                                    printf("%c %c\n", 'L'+u[i], 'L'+v[i]);
                                                }
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-29 UVa1228 Integer Transmission                       UVa1228.cpp -<

                                    :   ```cpp
                                        // UVa1228 Integer Transmission
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<iostream>
                                        #include<cstring>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 64;

                                        int n, d, K[maxn];
                                        unsigned long long f[maxn+1][maxn+1];

                                        int zcnt = 0, ocnt = 0;
                                        int Z[maxn], O[maxn]; // z[i] is the i-th zero from left (0-based)

                                        // now we received i zeros and j ones. Can we receive another zero at the next time?
                                        bool can_receive_zero(int i, int j) {
                                            return i+1 <= zcnt && (j == ocnt || O[j]+d >= Z[i]);
                                        }

                                        bool can_receive_one(int i, int j) {
                                            return j+1 <= ocnt && (i == zcnt || Z[i]+d >= O[j]);
                                        }

                                        unsigned long long minv, maxv;

                                        void greedy() {
                                            minv = maxv = 0;
                                            int i = 0, j = 0;
                                            while(i < zcnt || j < ocnt) {
                                                if(can_receive_zero(i, j)) { i++; minv = minv * 2; }
                                                else { j++; minv = minv * 2 + 1; }
                                            }
                                            i = j = 0;
                                            while(i < zcnt || j < ocnt) {
                                                if(can_receive_one(i, j)) { j++; maxv = maxv * 2 + 1; }
                                                else { i++; maxv = maxv * 2; }
                                            }
                                        }

                                        void solve() {
                                            // compute Z and O
                                            ocnt = zcnt = 0;
                                            for(int i = 0; i < n; i++)
                                                if(K[i] == 1) O[ocnt++] = i;
                                                else Z[zcnt++] = i;

                                            // greedy to get minv, maxv
                                            greedy();

                                            // dp
                                            memset(f, 0, sizeof(f));
                                            f[0][0] = 1;
                                            for(int i = 0; i <= zcnt; i++)
                                                for(int j = 0; j <= ocnt; j++) {
                                                    if(can_receive_zero(i, j)) f[i+1][j] += f[i][j];
                                                    if(can_receive_one(i, j)) f[i][j+1] += f[i][j];
                                                }
                                            cout << f[zcnt][ocnt] << " " << minv << " " << maxv << "\n";
                                        }

                                        int main() {
                                            int kase = 0;
                                            unsigned long long k;
                                            while(cin >> n >> d >> k) {
                                                for(int i = 0; i < n; i++) {
                                                    K[n-i-1] = k % 2; k /= 2;
                                                }
                                                cout << "Case " << ++kase << ": ";
                                                solve();
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-30 UVa1375 The Best Name for Your Baby                uva1375.cpp -<

                                    :   ```cpp
                                        // UVa1375 The Best Name for Your Baby
                                        // Rujia Liu
                                        #include<iostream>
                                        #include<string>
                                        #include<algorithm>
                                        #include<cstring>
                                        #include<vector>
                                        #include<queue>
                                        #include<map>
                                        using namespace std;

                                        const int maxn = 50 + 5;
                                        const int maxlen = 20 + 5;
                                        const int maxs = 50*20 + 52 + 5; // for a rule with right length x, we have x-1 symbols with length>1

                                        int n, L, ns;
                                        string rule[maxn];
                                        string sym[maxs]; // symbols
                                        int car[maxs], cdr[maxs]; // lisp names for "head" and "tail" 8-)
                                        string dp[maxs][maxlen];

                                        bool is_all_terminal(const string& s) {
                                            for(int i = 0; i < s.length(); i++)
                                                if(!(s[i] >= 'a' && s[i] <= 'z')) return false;
                                            return true;
                                        }

                                        string min(const string& a, const string& b) {
                                            if(a == "-") return b;
                                            return a < b ? a : b;
                                        }

                                        struct Node {
                                            int x;
                                            string s;
                                            Node(int x, string s):x(x),s(s){}
                                            // smaller string has higher priority, thus will be extracted earlier
                                            bool operator < (const Node& rhs) const {
                                                return s > rhs.s;
                                            }
                                        };

                                        struct Transform {
                                            int target, empty;
                                            Transform(int t, int e):target(t),empty(e){}
                                        };

                                        vector<Transform> tr[maxs];

                                        bool vis[maxs];
                                        // fill in other dp[?][len] reachable from existing dp[?][len] nodes via "epsilon edges"
                                        void search(int len) {
                                            memset(vis, 0, sizeof(vis));
                                            priority_queue<Node> q;
                                            for(int i = 0; i < ns; i++)
                                                if(dp[i][len] != "-") {
                                                    q.push(Node(i, dp[i][len]));
                                                }

                                            while(!q.empty()) {
                                                Node u = q.top(); q.pop();
                                                int x = u.x;
                                                string s = u.s;
                                                if(vis[x]) continue;
                                                vis[x] = true;
                                                for(int i = 0; i < tr[x].size(); i++) {
                                                    int target = tr[x][i].target;
                                                    int empty = tr[x][i].empty;
                                                    if(dp[empty][0] == "" && (dp[target][len] == "-" || s < dp[target][len])) {
                                                        dp[target][len] = s;
                                                        q.push(Node(target, s));
                                                    }
                                                }
                                            }
                                        }

                                        map<string,int> sym2id;

                                        int ID(const string& s) {
                                            if(!sym2id.count(s)) {
                                                sym[ns] = s;
                                                sym2id[s] = ns++;
                                            }
                                            return sym2id[s];
                                        }

                                        // S=HT, if H can be empty, S and T can be transformed to each other
                                        // we say h can reach s via epsilon edge t, and t can reach s via epsilon edge h
                                        void add_intermediate_symbol(const string& S) {
                                            int s = ID(S);
                                            if(S.length() < 2) return;
                                            int h = ID(S.substr(0,1));
                                            int t = ID(S.substr(1,S.length()-1));
                                            tr[h].push_back(Transform(s, t));
                                            tr[t].push_back(Transform(s, h));
                                            car[s] = h;
                                            cdr[s] = t;
                                        }

                                        int main() {
                                            while(cin >> n >> L && n) {
                                                sym2id.clear();
                                                ns = 0;

                                                ID(""); // make sure sym[0] = ""
                                                for(int i = 0; i < maxs; i++) tr[i].clear();

                                                for(int i = 0; i < n; i++) {
                                                    cin >> rule[i]; // for example, rule[i]="S=AbC"
                                                    int left = ID(rule[i].substr(0,1));
                                                    int right = ID(rule[i].substr(2));
                                                    tr[right].push_back(Transform(left, ID("")));  // AbC can be transformed to S
                                                    int len = rule[i].length();
                                                    for(int j = 2; j < len; j++) // AbC, bC, C
                                                        add_intermediate_symbol(rule[i].substr(j));
                                                }

                                                for(int i = 0; i < ns; i++)
                                                    for(int j = 0; j <= L; j++)
                                                        dp[i][j] = "-"; // impossible
                                                dp[0][0] = ""; // dp[i][j] means the first string with len j that symbol i can be transformed into

                                                for(int j = 0; j <= L; j++) {
                                                    for(int i = 0; i < ns; i++) {
                                                        if(sym[i].length() == j && is_all_terminal(sym[i])) dp[i][j] = sym[i];
                                                        if(sym[i].length() < 2) continue;
                                                        int s1 = car[i], s2 = cdr[i];
                                                        for(int k = 1; k < j; k++) {
                                                            if(dp[s1][k] != "-" && dp[s2][j-k] != "-")
                                                                dp[i][j] = min(dp[i][j], dp[s1][k] + dp[s2][j-k]);
                                                        }
                                                    }
                                                    search(j);
                                                }
                                                cout << dp[ID("S")][L] << "\n";
                                            }
                                            return 0;
                                        }
                                        ```

                                -   9-31 UVa1628 Pizza Delivery                             UVa1628.cpp -<

                                    :   ```cpp
                                        // UVa1628 Pizza Delivery
                                        // Rujia Liu
                                        #include<cstdio>
                                        #include<cstring>
                                        #include<algorithm>
                                        using namespace std;

                                        const int maxn = 100 + 5;

                                        int kase, n;
                                        int p[maxn], v[maxn];
                                        int d[maxn][maxn][maxn][2];
                                        int vis[maxn][maxn][maxn][2];

                                        // already considered s~e, still need to delivery to cnt people.
                                        // pos = 0 means at s, pos = 1 means at e
                                        int dp(int s, int e, int cnt, int pos) {
                                            if(cnt == 0) return 0;

                                            int &ans = d[s][e][cnt][pos];
                                            if(vis[s][e][cnt][pos] == kase) return ans;
                                            vis[s][e][cnt][pos] = kase;

                                            ans = 0;
                                            if(!pos) {
                                                for(int i = 0; i < s; i++)
                                                    ans = max(ans, v[i] - cnt * abs(p[i] - p[s]) + dp(i, e, cnt - 1, 0));
                                                for(int i = e + 1; i < n; i++)
                                                    ans = max(ans, v[i] - cnt * abs(p[i] - p[s]) + dp(s, i, cnt - 1, 1));
                                            }
                                            else {
                                                for(int i = 0; i < s; i++)
                                                    ans = max(ans, v[i] - cnt * abs(p[i] - p[e]) + dp(i, e, cnt - 1, 0));
                                                for(int i = e + 1; i < n; i++)
                                                    ans = max(ans, v[i] - cnt * abs(p[i] - p[e]) + dp(s, i, cnt - 1, 1));
                                            }
                                            return ans;
                                        }

                                        int main() {
                                            int T;
                                            scanf("%d",&T);
                                            memset(vis, 0, sizeof(vis));
                                            for(kase = 1; kase <= T; kase++) {
                                                scanf("%d", &n);
                                                for(int i = 0; i < n; i++) scanf("%d", &p[i]);
                                                for(int i = 0; i < n; i++) scanf("%d", &v[i]);

                                                int ans = 0;
                                                for(int k = 1; k <= n; k++)
                                                    for(int i = 0; i < n; i++)
                                                        ans = max(ans, v[i] - k * abs(p[i]) + dp(i, i, k - 1, 0));
                                                printf("%d\n",ans);
                                            }
                                            return 0;
                                        }
                                        ```

    :scissors: 2016/08/20 上午 9:30:00 6. 链表 Linked List -<

    :   -   介绍 Dummy Node 在链表问题中的运用 Introduce Dummy Node in Linked List -<

            :   Dummy node -> sentinel node. `['sɛntɪnl]`，哨兵。

                Linked list -<

                :   Advantages

                    -   Linked lists are a **dynamic data structure**, which
                        can grow and be pruned, allocating and deallocating
                        memory while the program is running.
                    -   **Insertion and deletion** node operations are easily
                        implemented in a linked list.
                    -   Linear data structures such as stacks and queues are
                        easily executed with a linked list.
                    -   They can reduce access time and may expand in real time
                        **without memory overhead**.

                    Disadvantages

                    -   They use **more memory than arrays** because of the
                        storage used by their pointers.
                    -   Nodes in a linked list must be read in order from the
                        beginning as linked lists are **inherently sequential
                        access**.
                    -   Nodes are **stored incontiguously**, greatly increasing
                        the time required to access individual elements within
                        the list, especially with a CPU cache.
                    -   Difficulties arise in linked lists when it comes to
                        **reverse traversing**. For instance, singly linked
                        lists are cumbersome to navigate backwards and while
                        **doubly linked lists are somewhat easier to read,
                        memory is wasted in allocating space for a back-pointer**.

                    ![A singly linked list whose nodes contain two fields: an
                        integer value and a link to the next node](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6d/Singly-linked-list.svg/408px-Singly-linked-list.svg.png)

                    ![A doubly linked list whose nodes contain three fields: an
                        integer value, the link forward to the next node, and the
                        link backward to the previous node](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5e/Doubly-linked-list.svg/610px-Doubly-linked-list.svg.png)

                    ![A circular linked list](https://upload.wikimedia.org/wikipedia/commons/thumb/d/df/Circularly-linked-list.svg/350px-Circularly-linked-list.svg.png)

                Sentinel nodes -<

                :   In computer programming, a sentinel node is a specifically
                    designated node used with linked lists and trees as a
                    **traversal path terminator**. This type of node does not hold
                    or reference any data managed by the data structure.

                    Sentinels are used as an alternative over using null as the
                    path terminator in order to get one or more of the
                    following benefits:

                    -   Increased speed of operations
                    -   Reduced algorithmic complexity and code size
                    -   Increased data structure robustness (arguably)

                    a singly linked list:

                    ```cpp
                    struct sll_node {                           // one node of the singly linked list
                       int key;
                       struct sll_node *next;                   // end-of-list indicator or -> next node
                    } sll, *first;
                    ```

                    First version using NULL as an end-of-list indicator

                    ```cpp
                    // global initialization
                    first = NULL;                               // before the first insertion (not shown)

                    struct sll_node *Search(struct Node *first, int search_key) {
                        for ( struct sll_node *node = first; node != NULL; node = node->next ) {
                            if (node->key == search_key) { return node; }                   // found
                        }
                        return NULL;                                                        // not found
                    }
                    ```

                    Second version using a sentinel node:

                    ```cpp
                    // global variable
                    sll_node Sentinel, *sentinel = &Sentinel;
                    // global initialization
                    sentinel->next = sentinel;
                    first = sentinel;                           // before the first insertion (not shown)

                    struct sll_node *SearchWithSentinelnode(struct Node *first, int search_key) {
                        struct sll_node *node;
                        sentinel->key = search_key;
                        for (node = first; node->key != search_key; node = node->next) {
                        }
                        if (node != sentinel)
                            return node;                        // found
                        // not found
                        return NULL;
                    }
                    ```

        -   sequential -> array

        -   linked -> single linked, double linked, xunhuan  danlianbao, xuanhuan double linked list

        -   sequential+linked -> static list

        -   你必须知道的几点 Linked List 的常用技巧 Basic skills in Linked List you should know -<

            :   TODO

        -   两根指针算法 Two pointers -<

            :   Splitting Linked List

                :   Given a list, split it into two sublists — one for the
                    front half, and one for the back half. If the number of
                    elements is odd, the extra element should go in the front
                    list.  So FrontBackSplit() on the list `{2, 3, 5, 7, 11}`
                    should yield the two lists `{2, 3, 5}` and `{7, 11}`.

                    ```cpp
                    void FrontBackSplit( Node *head, Node **front, Node **back ) {
                        if (!head) return;  // Handle empty list
                        Node *front_last_node, *slow, *fast;
                        slow = fast = head;
                        while( fast ) {
                            front_last_node = slow;
                            slow = slow->next;
                            fast = (fast->next) ? fast->next->next : NULL;
                        }
                        front_last_node->next = NULL;               // ends the front sublist
                        *front = head;
                        *back  = slow;
                    }
                    ```

                    ```
                    -----------------------------------------------
                        2   3   5   7   11  #               s: slow
                        ^                                   f: fast
                       s,f
                    -----------------------------------------------
                        2   3   5   7   11  #
                            ^   ^
                            s   f
                    -----------------------------------------------
                        2   3   5   7   11  #
                                ^       ^
                                s       f
                    -----------------------------------------------
                        2   3   5   7   11  #
                                    ^       ^
                                    s       f=0
                    -----------------------------------------------
                    ```

                Linked List Cycle -<

                :   if there is a cycle in the list, then we can use two pointers travers the list.
                    one pointer traverse one step each time, another one traverse two steps each time.
                    so, those two pointers meet together, that means there must be a cycle inside the list.

                    ```cpp
                    bool hasCycle(ListNode *head) {
                        if ( !head || !head->next ) { return false; }   // head->next?
                        ListNode *fast, *slow;
                        fast = slow = head;
                        do {
                            slow = slow->next;
                            fast = fast->next? fast->next->next : NULL;
                        } while( fast && fast->next && fast != slow );
                        return fast == slow? true : false;
                    }
                    ```

                    refs and see also

                    -   [Linked List Cycle | LeetCode OJ](https://leetcode.com/problems/linked-list-cycle/)

                Linked List Cycle II -<

                :   So, the idea is:

                    -   1)  Using the cycle-chcking algorithm.
                    -   2)  Once p1 and p1 meet, then reset p1 to head, and move p1 & p2 synchronously
                            until p1 and p2 meet again, that place is the cycle's start-point

                    ```cpp
                    class Solution {

                    private:
                        ListNode *p1, *p2;
                    public:
                        bool hasCycle(ListNode *head) {
                            if ( !head ) { return false; }
                            p1 = p2 = head;
                            while ( p1 && p2 ){
                                p1 = p1->next;
                                if ( !p2->next ) return false;
                                p2=p2->next->next;
                                if (p1==p2) return true;
                            }
                            return false;
                        }
                        ListNode *detectCycle(ListNode *head) {
                            if ( !hasCycle(head) ){ return NULL; }

                            p1 = head;
                            while (p1!=p2) {
                                p1 = p1->next;
                                p2 = p2->next;
                            }
                            return p1;
                        }
                    };
                    ```

                    refs and see also

                    -   [Linked List Cycle II | LeetCode OJ](https://leetcode.com/problems/linked-list-cycle-ii/)

        -   常见问题讲解 Frequent Questions -<

            :   TODO

        refs and see also

        -   [Linked list - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Linked_list#Sentinel_nodes)
        -   [Sentinel value - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Sentinel_value)
        -   [Sentinel node - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Sentinel_node)
        -   [Splitting Linked List – LeetCode](http://articles.leetcode.com/splitting-linked-list/)

    :scissors: 2016/08/21 上午 9:30:00 7. 数组与数 Array & Numbers -<

    :   -   旋转排序数组相关问题与三步翻转法的运用 Rotated Sorted Array & 3-step Reversion

            just this picture:

            ![](http://whudoc.qiniudn.com/2016/20141025161730953.png)

        -   两个排序数组的中位数 Median of Two Sorted Array -<

            :   There are two sorted arrays nums1 and nums2 of size m and n respectively.

                Find the median of the two sorted arrays. The overall run time complexity should be `O(log (m+n))`.

                Example 1:

                ```
                nums1 = [1, 3]
                nums2 = [2]
                ```

                The median is 2.0

                Example 2:

                ```
                nums1 = [1, 2]
                nums2 = [3, 4]
                ```

                The median is (2 + 3)/2 = 2.5

                ```
                double findMedianSortedArrays(int A[], int m, int B[], int n) {
                if( m == 0 ) {  // 1    2   3   4
                    return n%2 != 0 ?   B[n/2] : (B[n/2-1]+B[n/2])/2.0;
                }
                if( n == 0 ) {
                    return findMedianSortedArrays( B, n, A, m);
                }
                ...
                ```

                TODO, leetcode tijie.

                refs and see also

                -   [Median of Two Sorted Arrays | LeetCode OJ](https://leetcode.com/problems/median-of-two-sorted-arrays/)

        -   子数组相关问题 SubArray -<

            :   Maximum subarray -<

                :   DP.

                    -   `f[j] = max( f[j-1]+S[j], S[j] ), j = 2..n, f[1] = S[1]`
                    -   `target = max{ f[j] }, j = 1..n`

                    代码：

                    ```cpp
                    // Time: O(n), Space: O(1)
                    int maxSubArray( vector<int> &nums ) {
                        int result = INT_MIN, f = 0;
                        for( int i = 0; i < nums.size(); ++i ) {
                            f = max( f+nums[i], nums[i] );
                            result = max( f, result );
                        }
                        return result;
                    }
                    ```

                    If you have figured out the O(n) solution, try coding another
                    solution using the divide and conquer approach, which is more
                    subtle.

                    refs and see also

                    -   [Maximum subarray problem - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Maximum_subarray_problem)
                    -   [Maximum Subarray | LeetCode OJ](https://leetcode.com/problems/maximum-subarray/)

                Subset sum problem -<

                :   refs and see also

                    -   [Subset sum problem - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Subset_sum_problem)

        -   两根指针与 x-sum 问题 Two Pointers & x-sum -<

            :   TODO

        -   分割数组相关问题 Partition Array

    :scissors: 2016/08/27 上午 9:30:00 8. 数据结构 Data Structure -<

    :   -   线性数据结构 -<

            :   -   队列的原理、实现和运用, Queue -<

                    :   -   yangzi triangle -<

                            :   ```cpp
                                #include <queue>
                                #include <stdio.h>
                                using namespace std;
                                void yanghui_triangle(const int n);
                                int main() { yanghui_triangle( 5 ); }

                                void yanghui_triangle(const int n) {
                                    int i = 1;
                                    queue<int> q;
                                    q.push(i);                                  // 预先放入第一行的 1

                                    for(i = 0; i <= n; i++) {                   // 逐行处理
                                        int j;
                                        int s = 0;
                                        q.push(s);                              // 在各行间插入一个0

                                        for(j = 0; j < i+2; j++) {              // 处理第 i 行的 i+2 个系数（包括一个 0）
                                            int t = q.front(); q.pop();
                                            q.push( t+s );
                                            s = t;                              // 打印一个系数，第 i+2 个是 0
                                            if(j != i+1) {
                                                printf("%d ",t);
                                            }
                                        }
                                        printf("\n");
                                    }
                                }
                                ```

                                TODO

                                ```
                                                                        |   queue
                                ----------------------------------------+---------------------------
                                i = 0, j = [0, i+2), push 2 times       |   1
                                push 0                                  |   1   0
                                withdraw t=1                            |
                                push( t=1 + s=0 )                       |   0   1
                                s=t=1                                   |
                                withdraw t=0                            |
                                push( t=0 + s=1 )                       |
                                                                        |   1   1
                                ----------------------------------------+---------------------------
                                i = 1, j = [0, i+2), push 3 times       |   1   1
                                push 0                                  |   1   1   0
                                withdraw t=1, push(t=1+s=0)             |   1   0   1
                                s=t=1                                   |
                                withdraw t=1, push(t=1+s=1)             |   0   1   2
                                s=t=1                                   |
                                withdraw t=0, push(t=0+s=1)             |   1   2   1
                                ----------------------------------------+---------------------------
                                i = 2, j = [0, i+2), push 4 times       |   1   2   1
                                push 0                                  |   1   2   1   0
                                t=1, push(t=1+s=0), s=1                 |   2   1   0   1
                                t=2, push(t=2+s=1), s=2                 |   1   0   1   3
                                t=1, push(t=1+s=2), s=1                 |   0   1   3   3
                                t=0, push(t=0+s=1), s=0                 |   1   3   3   1
                                ----------------------------------------+---------------------------
                                i = 3, j = [0, i+2), push 5 times       |   1   3   3   1
                                push 0                                  |   1   3   3   1   0
                                t=1, push(t=1+s=0), s=1                 |   3   3   1   0   1
                                t=3, push(t=3+s=1), s=3                 |   3   1   0   1   4
                                t=3, push(t=3+s=3), s=3                 |   1   0   1   4   6
                                t=1, push(t=1+s=3), s=1                 |   0   1   4   6   4
                                t=0, push(t=0+s=1), s=0                 |   1   4   6   4   1
                                ----------------------------------------+---------------------------
                                i = 4, j = [0, i+2), push 6 times       |   1   4   6   4   1
                                push 0                                  |   1   4   6   4   1   0
                                t=1, push(t=1+s=0), s=1                 |   4   6   4   1   0   1
                                t=4, push(t=4+s=1), s=4                 |   6   4   1   0   1   5
                                t=6, push(t=6+s=4), s=6                 |   4   1   0   1   5   10
                                t=4, push(t=4+s=6), s=4                 |   1   0   1   5   10  10
                                t=1, push(t=1+s=4), s=1                 |   0   1   5   10  10  5
                                t=0, push(t=0+s=1), s=0                 |   1   5   10  10  5   1
                                ...

                                1                   i=0                 (a+b)^0 = 1
                                1 1                 i=1                 (a+b)^1 = a + b
                                1 2 1               i=2                 (a+b)^2 = a^2 + 2ab + b^2
                                1 3 3 1             i=3                 (a+b)^3 = a^3 + 3a^2b + 3ab^2 + b^3
                                1 4 6 4 1           i=4                 ...
                                1 5 10 10 5 1       i=6                 ...
                                ```

                -   栈的原理、实现和运用, Stack -<

                    :   TODO

                -   哈希表的原理、实现和运用, HashMap -<

                    :   -   hash table -<

                            :   -   [Open addressing - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Open_addressing){.featured} -<

                                    :   **Open addressing**, or **closed hashing**, is a
                                        method of **collision resolution** in hash tables. With
                                        this method a hash collision is resolved by
                                        probing, or searching through alternate locations
                                        in the array (the probe sequence) until either the
                                        target record is found, or an unused array slot is
                                        found, which indicates that there is no such key in
                                        the table. Well known probe sequences include:

                                        ```
                                        record pair { key, value }
                                        var pair array slot[0..num_slots-1]

                                        function find_slot(key)
                                            i := hash(key) modulo num_slots
                                            // search until we either find the key, or find an empty slot.
                                            while (slot[i] is occupied) and ( slot[i].key ≠ key )
                                                i = (i + 1) modulo num_slots
                                            return i
                                        ```

                                        -   Linear probing
                                              ~ in which the interval between probes is fixed — often at 1.
                                        -   Quadratic probing
                                              ~ in which the interval between probes increases linearly (hence, the indices are described by a quadratic function).
                                        -   Double hashing
                                              ~ in which the interval between probes is fixed for each record but is computed by another hash function.

                                        **Open Addressing 思想非常简单。如果第一次 Hash 寻找到得位置失败，那就不断进行位移，直到找到满足条件的位置。**

                                        Linear probing

                                        :   -   优点：思路简单，而且只要 Hash 表不满，总能
                                                找到满足条件的位置。
                                            -   缺点：容易产生**主聚合效应（primary
                                                clustering）**。简单来说，就是插入的点容易
                                                聚集到一块地方，从而使得第一次 Hash 到这块
                                                范围的数都必须顺序搜索这块范围。根据复杂的
                                                计算，我们可以得到，当 load factor（此概念
                                                在上一章介绍）为 0.5 时，平均每次插入（等同
                                                于非成功寻找）需要位移 2.5 次，平均每次成功
                                                寻找需要位移 1.5 次。将 load factor 保证在
                                                0.5 以下，那么时间是比较理想的。

                                        Linear probing
                                        :   -   顾名思义，就是 Function(i) = i^2。简单地计算
                                                可以得到：h(i+1)(x) = hi(x) + 2i -1. 另外，只有
                                                当 load factor 小于 0.5 且 Hash 表大小为质数时，才能
                                                保证每次插入都成功（可以证明，这里略）。
                                            -   优点：不会产生主聚合效应。
                                            -   缺点：虽然 Quadratic 方法不会产生主聚合效应。
                                                但会产生**次聚合效应（secondary clustering）**。
                                                即，第一次 Hash 到同一个位置的点，他们之后
                                                的搜索过程都完全一样，需要重复。

                                        延迟删除（lazy deletion）

                                        :   如果我们需要删除一个值，不能简单的把那个位置的值去掉。简单思索便可明白，因
                                            为这个点后面的值可能是通过位移过去的，如果这点被挖空，那么我们想寻找后面的
                                            值就变得不可能了。

                                            因此，我们使用一个延迟删除的技术。思想很简单，
                                            我们给每个点赋予一个状态，分别是被占用
                                            （legitimate,  `[ləˈdʒɪtəmɪt]`, 合法的；正当
                                            的），空（empty），被删除（deleted）。初始时所
                                            有点都为空，当被插入一个值时将状态设为被占用，
                                            但被删除时状态设为被删除。这样的话，如果我们要
                                            寻找一个点，只要搜索路径上的点非空，且其值与我
                                            们想要搜索的值不同，那么就不断搜索下去，直到找
                                            到空点或者相同值得点。（如果觉得拗口，请看下面
                                            的代码）。

                                        假設整個 hash table 的數據不在 cache。因為是開放尋
                                        址，每次 collision 要再跳到另一個 slot（即
                                        probing），hash table 越滿就會有越多次跳轉，產生較
                                        多 cache miss。

                                        若整個 hash table 都能儲存在 cache，怎樣做都不會出
                                        現 cache miss。

                                        但考慮 hash table 遠大於 cache 大小時，可以理解為每
                                        次不同的 hashing 都會 cache miss，collision 和
                                        cache miss 的概率成正比。

                                        refs and see also

                                        -   [《数据结构》学习-- Hash(3) --Open Addressing - 江饭 - 博客频道 - CSDN.NET](http://blog.csdn.net/jiangfan2014/article/details/46042747)
                                        -   [使用 open addressing 的 Hash 表载荷过高为什么会降低 CPU 的缓存命中率？ - 知乎](https://www.zhihu.com/question/22911718)

                                -   hash table -<

                                    :   哈希表处理冲突有两种方式，开地址法 (Open Addressing)
                                        和闭地址法 (Closed Addressing)。

                                        闭地址法也即拉链法 (Chaining)，每个哈希地址里不再是
                                        一个元素，而是链表的首地址。

                                        开地址法有很多方案，有线性探测法 (Linear Probing)、
                                        二次探测法 (Quadratic Probing) 和双散列法 (Double
                                        Hashing) 等。

                                        下面是拉链法的 C 语言实现。

                                        ```cpp
                                        template<typename elem_t>
                                        int elem_hash(const elem_t &e);

                                        template<typename elem_t>
                                        bool operator==(const elem_t &e1, const elem_t &e2);

                                        template<typename elem_t>
                                        class hash_set {
                                        public:
                                            hash_set(int prime, int capacity);
                                            ~hash_set();
                                            bool find(const elem_t &elem);                  // 查找某个元素是否存在.
                                            bool insert(const elem_t &elem);                // 添加一个元素，如果已存在则添加失败.
                                        private:
                                            int prime;                                      // 哈希表取模的质数，也即哈希桶的个数，小于 capacity
                                            int capacity;                                   // 哈希表容量，一定要大于元素最大个数

                                            int *head;                                      // head[PRIME], 首节点下标

                                            struct node_t {
                                                elem_t elem;
                                                int next;
                                                node_t():next(-1) {}
                                            } *node;                                        // node[HASH_SET_CAPACITY], 静态链表

                                            int size;
                                        };

                                        template<typename elem_t>
                                        hash_set<elem_t>::hash_set( int prime, int capacity ) {
                                            this->prime = prime;
                                            this->capacity = capacity;
                                            head = new int[prime];
                                            node = new node_t[capacity];
                                            fill( head, head + prime, -1 );
                                            fill( node, node + capacity, node_t() );
                                            size = 0;
                                        }

                                        template<typename elem_t>
                                        hash_set<elem_t>::~hash_set() {
                                            this->prime = 0;
                                            this->capacity = 0;
                                            delete[] head;
                                            delete[] node;
                                            head = NULL;
                                            node = NULL;
                                            size = 0;
                                        }

                                        template<typename elem_t>
                                        bool hash_set<elem_t>::find(const elem_t &elem) {
                                            for( int i = head[elem_hash(elem)]; i != -1; i = node[i].next ) {
                                                if( elem == node[i].elem ) { return true; }
                                            }
                                            return false;
                                        }

                                        template<typename elem_t>
                                        bool hash_set<elem_t>::insert(const elem_t &elem) {
                                            const int hash_code = elem_hash(elem);
                                            if( find(elem) ) { return false; }
                                            node[size].next = head[hash_code]; // 不存在，则插入在首节点之前
                                            node[size].elem = elem;
                                            head[hash_code] = size++;
                                            return true;
                                        }
                                        ```

                                -   babelfish (easy, use `dict.find`) -<

                                    :   input:

                                        ```
                                        dog ogday
                                        cat atcay
                                        pig igpay
                                        froot ootfray
                                        loops oopslay

                                        atcay
                                        ittenkay
                                        oopslay
                                        ```

                                        output:

                                        ```
                                        cat
                                        eh
                                        loops
                                        ```

                                        ```cpp
                                        /* POJ 2503 Babelfish , http://poj.org/problem?id=2503 */
                                        #include <cstdio>
                                        #include <map>
                                        #include <string>
                                        #include <cstring>

                                        using namespace std;

                                        /** 字符串最大长度 */
                                        const int MAX_WORD_LEN = 10;

                                        int main() {
                                            char line[MAX_WORD_LEN * 2 + 1];
                                            char s1[MAX_WORD_LEN + 1], s2[MAX_WORD_LEN + 1];
                                            map<string, string> dict;

                                            while ( fgets(line, MAX_WORD_LEN*2, stdin ) && (line[0] != 0 && line[0] != '\n') ) {
                                                sscanf(line, "%s %s", s1, s2);
                                                dict[s2] = s1;
                                            }

                                            while ( fgets(line, MAX_WORD_LEN*2, stdin ) ) {
                                                sscanf( line, "%s", s1 );
                                                // you should not use dict[s1].length() == 0
                                                if ( dict.find(s1) != dict.end() ) {
                                                    puts("eh");
                                                } else {
                                                    printf("%s\n", dict[s1].c_str());
                                                }
                                            }
                                            return 0;
                                        }
                                        ```

                                        ```bash
                                        cat fish.txt | ./a.out
                                        ```

                                        c++ version, buggy...

                                        ```cpp
                                        #include <iostream>
                                        #include <map>
                                        #include <string>
                                        #include <sstream>
                                        #include <stdio.h>

                                        using namespace std;

                                        int main() {
                                            string line;
                                            map<string, string> dict;

                                            while ( getline( cin, line ) && !line.empty() ) {
                                                stringstream ss( line );
                                                string s1, s2;
                                                ss >> s1 >> s2;
                                                dict[s2] = s1;
                                                // printf( "s1: %s, s2: %s\n", s1.c_str(), s2.c_str() );
                                            }

                                            while ( cin >> line && !line.empty() ) {
                                                if ( dict.find(line) != dict.end() ) {
                                                    cout << "eh" << endl;
                                                } else {
                                                    cout << dict[line] << endl;
                                                }
                                            }
                                            return 0;
                                        }
                                        ```

        -   树形数据结构 -<

            :   -   堆的原理、实现和运用, Heap -<

                    :   -   [Heap (data structure) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Heap_(data_structure)) -<

                            :   In computer science, a heap is a **specialized
                                tree-based data structure** that satisfies the
                                heap property: If A is a parent node of B then
                                the key (the value) of node A is ordered with
                                respect to the key of node B with the same
                                ordering applying across the heap. A heap can
                                be classified further as either a "**max
                                heap**" or a "**min heap**". In a max heap, the
                                keys of parent nodes are always greater than or
                                equal to those of the children and the highest
                                key is in the root node. In a min heap, the
                                keys of parent nodes are less than or equal to
                                those of the children and the lowest key is in
                                the root node. Heaps are crucial in several
                                efficient graph algorithms such as Dijkstra's
                                algorithm, and in the sorting algorithm
                                heapsort.  **A common implementation of a heap
                                is the binary heap, in which the tree is a
                                complete binary tree.**

                                ![Example of a complete binary max-heap with node
                                    keys being integers from 1 to 100](https://upload.wikimedia.org/wikipedia/commons/thumb/3/38/Max-Heap.svg/240px-Max-Heap.svg.png)

                                When a heap is a **complete binary tree**, it has a
                                smallest possible height—a heap with N nodes always
                                has (logN) height. A heap is a useful data structure
                                when you need to remove the object with the highest
                                (or lowest) priority.

                            [Heapsort - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Heapsort) -<

                            :   ```
                                iParent(i)     = floor((i-1) / 2)
                                iLeftChild(i)  = 2*i + 1
                                iRightChild(i) = 2*i + 2

                                procedure heapsort(a, count) is
                                    input: an unordered array a of length count

                                    (Build the heap in array a so that largest
                                    value is at the root) heapify(a, count)

                                    (The following loop maintains the invariants
                                    that a[0:end] is a heap and every element
                                    beyond end is greater than everything before it
                                    (so a[end:count] is in sorted order))

                                    end ← count - 1
                                    while end > 0 do
                                        // a[0] is the root and largest value. The
                                        // swap moves it in front of the sorted
                                        // elements.)
                                        swap(a[end], a[0])
                                        // the heap size is reduced by one
                                        end ← end - 1
                                        // the swap ruined the heap property, so restore it
                                        siftDown(a, 0, end)
                                ```

                                ![](https://upload.wikimedia.org/wikipedia/commons/4/4d/Heapsort-example.gif)

                        -   heap.c -<

                            :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-45-26-create-binary-heap-Onlgn.gif)

                                ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-46-26-create-binary-heap-On.gif)

                                ```cpp
                                #include <stdlib.h>                             // malloc
                                #include <string.h>                             // memcpy
                                typedef struct heap_t {
                                    int size;
                                    int capacity;
                                    int *elems;
                                    int (*cmp)(const int *, const int *);       // compare function
                                } heap_t;

                                int cmp_int( const int *x, const int *y ) {
                                    int sub = *x - *y;
                                    return sub > 0 ? 1 : sub < 0 ? -1 : 0;
                                }

                                heap_t * heap_create( const int capacity,
                                                      int (*cmp)(const int *, const int *) )
                                {
                                    heap_t *h = (heap_t*)malloc(sizeof(heap_t));
                                    h->size = 0;
                                    h->capacity = capacity;
                                    h->elems = (int *)malloc(capacity * sizeof(int));
                                    h->cmp = cmp;
                                    return h;
                                }

                                void heap_destroy( heap_t *h ) {
                                    free( h->elems );
                                    free( h );
                                }

                                int heap_empty( const heap_t *h ) {
                                    return h->size == 0;
                                }

                                int heap_size( const heap_t *h ) {
                                    return h->size;
                                }
                                ```

                                ```
                                sift down
                                ---------

                                3   9   6   8   5   1   4   2   7           9   8   6   7   5   1   4   2   3
                                             [3]                                          9
                                            /   \                                       /   \
                                           /      \                                    /      \
                                         9         6                                 8         6
                                        /  \       /  \                             /  \       /  \
                                      8     5     1    4                          7     5     1    4
                                     / \                                         / \
                                    2    7                                      2    [3]
                                                        tmp = h[j]

                                    (i)         can go down?
                                    /\
                                   /  \             j or j+1 ?
                                  /    \            h[i]    =   h[j]
                                (j)   (j+1)         h[i]    =   tmp
                                ```

                                ```cpp
                                void heap_sift_down( const heap_t *h, const int start ) {       // 小根堆的自上向下筛选算法.
                                    int i = start;
                                    const int tmp = h->elems[start];

                                    // 2*i+1: left child, 2*i+2: right child
                                    for( int j = 2*i+1; j < h->size; j = 2*j+1 ) {
                                        if( j+1 < h->size && h->cmp(&(h->elems[j]), &(h->elems[j + 1])) > 0 ) {
                                            j++;                                    // sift towards j, j 指向两子女中小者
                                        }
                                        if( h->cmp(&tmp, &(h->elems[j])) <= 0 ) {   // they are all big guys down there.
                                            break;
                                        } else {
                                            h->elems[i] = h->elems[j];
                                            i = j;
                                        }
                                    }
                                    h->elems[i] = tmp;
                                }
                                ```

                                ```
                                                        tmp = h[j]

                                           (i)          can go up?
                                           /\
                                          /  \              h[j]    =   h[i]
                                         /    \             j       =   i
                                       (j)     *            i       =   (j-1)/2


                                ```

                                ```
                                // 小根堆的自下向上筛选算法.
                                void heap_sift_up( const heap_t *h, const int start ) {
                                    const int tmp = h->elems[start];
                                    int j = start;
                                    int i= (j - 1) / 2;                             // parent
                                    while( j > 0 ) {
                                        if( h->cmp(&(h->elems[i]), &tmp) <= 0 ) {   // parent is small enough
                                            break;
                                        } else {
                                            h->elems[j] = h->elems[i];
                                            j = i;
                                            i = (j-1)/2;
                                        }
                                    }
                                    h->elems[j] = tmp;
                                }

                                void heap_push( heap_t *h, const int x ) {
                                    if( h->size == h->capacity ) {
                                        h->capacity *= 2;
                                        int *tmp = (int *)realloc( h->elems, h->capacity*sizeof(int) );
                                        h->elems = tmp;
                                    }
                                    h->elems[h->size++] = x;                        // append
                                    heap_sift_up( h, h->size - 1 );                 // sift up last node
                                }

                                void heap_pop( heap_t *h ) {
                                    h->elems[0] = h->elems[h->size - 1];
                                    --h->size;
                                    heap_sift_down( h, 0 );
                                }

                                int heap_top( const heap_t *h ) {
                                    return h->elems[0];
                                }
                                ```

                        -   Minimum N, (heap, priority_queue) -<

                            :   ```cpp
                                #include <cstdio>
                                #include <queue>
                                #include <algorithm>
                                #include <functional>
                                using namespace std;

                                int N;
                                const int MAXN = 100000;
                                int a[MAXN], b[MAXN];

                                typedef struct node_t {
                                    int sum;
                                    int b;                                          // b is the index, init with 0, sum=a[i]+b[b=0]
                                    bool operator>( const node_t &other ) const {   // std::greater<node_t>
                                        return sum > other.sum;
                                    }
                                } node_t;

                                void k_merge() {
                                    sort( a, a+N );
                                    sort( b, b+N );
                                    priority_queue< node_t, vector<node_t>, greater<node_t> > q;    // a min heap

                                    for( int i = 0; i < N; ++i ) {
                                        node_t tmp;
                                        tmp.b = 0;
                                        tmp.sum = a[i]+b[tmp.b];
                                        q.push( tmp );
                                    }

                                    for( int i = 0; i < N; ++i ) {
                                        node_t tmp = q.top(); q.pop();
                                        printf("%d ", tmp.sum);
                                        tmp.sum = tmp.sum - b[tmp.b] + b[tmp.b + 1];
                                        ++tmp.b;
                                        q.push(tmp);
                                    }
                                }

                                int main() {
                                    scanf( "%d", &N );
                                    for( int i = 0; i < N; ++i ) {
                                        scanf( "%d", &a[i] );
                                    }
                                    for( int i = 0; i < N; ++i ) {
                                        scanf( "%d", &b[i] );
                                    }
                                    k_merge();
                                    return 0;
                                }
                                ```

                                ```bash
                                $ cat input.txt
                                5
                                1   3   2   4   5
                                6   3   4   1   7

                                $ cat input.txt | ./a.out
                                2 3 4 4 5
                                ```

        -   数学概念与方法 -<

            :   -   数论初步 -<

                    :   -   欧几里德算法和唯一分解定理 -<

                            :   捻转相除法

                                :   ```cpp
                                    int gcd( int a, int b ) {
                                        return b == 0 ? a : gcd( b, a%b );
                                    }
                                    ```

                -   计数与概率基础
                -   其他数学专题
                -   竞赛题目选讲
                -   训练参考

    :scissors: 2016/08/28 上午 9:30:00 9. 图与搜索 Graph & Search -<

    :   -   图上的宽度优先搜索 Graph BFS

        -   DFS of graph -<

            :   Selected Problems -<

                :   -   Abbott 的复仇 :hearts: -<

                        :   ```cpp
                            // d[r][c][dir] 存储从初始状态到 (r,c,dir) 的最短长度，其父节点保存在
                            // p[r][c][dir]
                            // has_edge[r][c][dir][turn], now at (r,c,dir), can `turn`?
                            //  inside(r, c), inside the map

                            const char *dirs  = "NESW"; // north, east, south, west
                            const char *turns = "FLR";  // forward, left, right
                            int dir_id(  char c ) { return strchr(dirs, c) - dirs; }
                            int turn_id( char c ) { return strchr(turns, c) - turns; }

                            //   clockwise :    N   E   S   W           //          +-----------> y (col-wise)
                            const int dr[] = { -1,  0,  1,  0 };        //          |
                            const int dc[] = {  0,  1,  0, -1 };        //          |
                                                                        //          | x (row-wise)
                                                                        //          V

                            Node walk( const Node &u, int turn ) {
                                int dir = u.dir;                        // turn = 0, forward
                                if( turn == 1 ) { dir = (dir+3)%4; }    // turn = 1, left, counter clockwise
                                if( turn == 2 ) { dir = (dir+1)%4; }    // turn = 2, right, clockwise
                                return Node( u.r + dr[dir], u.c + dc[dir], dir );
                            }

                            void solve() {
                                queue<Node> q;
                                memset( d, -1, sizeof(d) );             // reset to -1
                                Node u( r1, c1, dir );                  // start pos
                                d[u.r][u.c][u.dir] = 0;                 // init distance
                                q.push( u );
                                while( !q.empty() ) {
                                    Node u = q.front(); q.pop();
                                    if( u.r == r2 && r.c == c2 ) { print_ans(u); return; }
                                    for( int i = 0; i < 3; ++i ) {      // enum turns
                                        Node v = walk( u, i );
                                        if( has_edge[u.r][u.c][u.dir][i] &&
                                            inside(v.r, v.c) &&
                                            d[v.r][v.c][v.dir] < 0 ) {  // 以前没有处于这个姿态
                                            // advance
                                            d[v.r][v.c][v.dir] = d[u.r][u.c][u.dir] + 1;
                                            p[v.r][v.c][v.dir] = u;
                                            q.push( v );                // 当前位置总是再 stack 顶端存着
                                        }
                                    }
                                }
                                printf( "No Solution Possible.\n" );
                            }

                            void print_ans( Node u ) {
                                vector<Node> nodes;
                                for( ;; ) {
                                    nodes.push_back( u );                   // 一路存起来
                                    if( d[u.r][u.c][u.dir] == 0 ) break;    // origin
                                    u = p[u.r][u.c][u.dir];                 // backtrace
                                }
                                nodes.push_back( Node(r1, c1, dir) );       // origin: r0, c0

                                int cnt = 0;
                                for( int i = nodes.size()-1; i >= 0; --i ) {
                                    if( cnt % 10 == 0 ) { printf( " " ); }
                                    printf( " (%d, %d)", nodes[i].r, nodes[i].c );
                                    if( ++cnt % 10 == 0 ) {
                                        printf( "\n" );
                                    }
                                }
                                if( nodes.size() % 10 != 0 ) { printf( "\n" ); }
                            }
                            ```

        -   拓扑排序 Topological Sorting

        -   组合类深度优先搜索 Combination Related DFS

        -   排列类深度优先搜索 Permutation Related DFS

        -   minal spanning tree

        -   shortest path

        -   key path

    【下面是强化班内容】

    :scissors: 2016/08/21 上午 7:00:00 FLAG 算法面试难度提高？如何准备？【免费试听】 -<

    :  -   HR 面试这一环可能会问到的问题 -<

            :   **What are your strengths?**

                -   I'm passionate about programming and I can write high
                    quality code. Besides, I have solid mathematical foundation
                    and know a little about machine learning.
                -   I'm a quick learner and I love programming. Because I love
                    it, I'm willing to spend my time, money, and energy into
                    it.

                **What is your greatest weakness?**

                I live in campus for a little long time, so I haven't write as much code as
                people at my age. Compared to people who started to work immediately after
                graduation, I have less real experience in production environment.

                **Why should I hire you?**

                My technical skills match Facebook

                **Five year plan?**

                I aims to become a world class topnotch developer in (Programming Lagnuage
                Design, Distributed system, Machine Learning, Data Mining etc).

                I want to solve hardcore technical problems with smart guys.

                I want to have a small and smart team, to build some world class tools. I tend
                to be more satisfied and happy when people can fully appreciate my work, so
                instead of user products, personally I prefer developer oriented
                tools/platforms, such as storage systems like HBase and Hive, or significant
                improvement of existing language implementations (for example, Facebook's
                HipHop for PHP, Google's V8 for JavaScript, Delvik for Java on mobile
                platform).

                **why Google?**

                In my opinion, Google is the most innovative company on the
                Earth. It created many successful products, for example web
                search engine, Android, Gmail. But it doesn't stop, it creates
                many products that sounds incredible, like Google driveless
                car, Google Glass etc.

                That's why I want to join Google and take part in making
                fantastic products.

                **why Facebook?**

                First, Facebook is a cool company, which has strong geek culture. The CEO, Mark
                Zuckerberg is a geek, and he recognises the value of engineers, today Facebook
                is still dominated by engineers, not product managers. Second, Facebook is the
                world's biggest social network website, in there my code will serve billions of
                people, which makes me feel a big sense of achievement.

                **Any questions?**

                Facebook

                There is a saying often said: Facebook and Google gathered a bunch of smartest
                people in the world, but they are just thinking day and night to attempt people
                to click all their ads! This sounds sad but it's somewhat true. I don't like
                ads, and I'm a big fan of adblock. How do you and Facebook engineers think
                about this saying?

                Is there any projects related to language design and implementation other than
                HipHop in Facebook? I heard that Facebook is actively developing a new PHP
                virtual machine, can I have some detail information?

                Is Facebook chat still powered by Erlang? What's the most challenging part of
                Facebook chat? How do you deal with spamming?

                Amazon

                Google has developed Spanner and F1, is Amazon developing its own large scale
                RDBMS? If not, why?

                When I worked in Baidu, all SDE must keep their mobile phone online 7x24, and
                be ready to be called at any time in case of online accidents. What's the
                process in Amazon to handle emergent online accidents? What's the division of
                labour?

                AeroFS

                Would please tell me something about your tool chain?

                Take LinkedIn as an example, free users' data are exactly the thing that
                commercial users want. Although AeroFS is quite different, do you have any idea
                to make your commercial users benifit from your free users?

                Dropbox turned to online music area, how do you think about this? Is this a
                signal that indicating personal cloud storage is not profitable enough?

                refs and see also

                -   [Top 10 HR Interview Questions & How To Answer Them | Human Resources Blog | Top HR Blog](http://humanresourcesblog.in/2012/09/26/top-10-hr-interview-questions-how-to-answer-them/)
                -   [HR 面试这一环可能会问到的问题 · soulmachine/acm-cheat-sheet Wiki · GitHub](https://github.com/soulmachine/acm-cheat-sheet/wiki/HR%E9%9D%A2%E8%AF%95%E8%BF%99%E4%B8%80%E7%8E%AF%E5%8F%AF%E8%83%BD%E4%BC%9A%E9%97%AE%E5%88%B0%E7%9A%84%E9%97%AE%E9%A2%98)

        -   各类 IT 企业的面试算法难度及风格
        -   如何解决中等难度以上的算法题
        -   如何解决 follow  up 问题
        -   Two sum
            -   1. Two sum follow up I
            -   2. Two sum follow up II - Triangle count
        -   Kth largest element
            -   1. 第 k 大元素的三层递进面试考察.
            -   2. 如何通过一道题区分 3 类面试者
            -   3. 剖析面试官面试的思路

    :scissors: 2016/08/28 上午 7:00:00 数据结构 Data Structure (上) -<

    :   -   并查集 -<

            :   basics ideas -<

                :   -   并查集的基本原理
                    -   并查集的相关运用
                    -   并查集的拓展（带路径压缩）
                    -   并查集的运用

                    并查集又称不相交集，有两个名字的原因在于它原就有两个不同的英文
                    名字，Disjoint sets和Union-find set。更准确点应该说并查集是用来
                    操作不相交集的数据结构。算法 导论上这一章就叫用于不相交集合的数
                    据结构（Data Structures for Disjoint Sets）。 维基百科上也说：

                    In computer science, a disjoint-set data structure, also called
                    a union–find data structure or merge–find set, is a data
                    structure that keeps track of a set of elements partitioned
                    into a number of disjoint (nonoverlapping) subsets. It supports
                    two useful operations:

                    -   Find: Determine which subset a particular element is in.
                        Find typically returns an item from this set that serves as
                        its "representative"; by comparing the result of two Find
                        operations, one can determine whether two elements are in
                        the same subset.
                    -   Union: Join two subsets into a single subset.

                    但一般说 Disjoint Sets 就指的是Data Structures for Disjoint Sets。

                Disjoint-set data structure -<

                :   Disjoint-set forests

                    :   In a disjoint-set forest, the representative of each
                        set is the root of that set's tree. Find follows parent
                        nodes until it reaches the root. Union combines two
                        trees into one by attaching the root of one to the root
                        of the other. One way of implementing these might be:

                        ```
                        function MakeSet(x)
                            x.parent := x

                        function Find(x)
                            if x.parent == x
                               return x
                            else
                               return Find(x.parent)

                        function Union(x, y)
                            xRoot := Find(x)
                            yRoot := Find(y)
                            xRoot.parent := yRoot
                        ```

                        the tree it creates can be **highly unbalanced** -> two ways to solve.

                        ```
                        function MakeSet(x)
                            x.parent := x
                            x.rank   := 0

                        function Union(x, y)
                            xRoot := Find(x)
                            yRoot := Find(y)
                            if xRoot == yRoot
                                return

                            // x and y are not already in same set. Merge them.
                            if xRoot.rank < yRoot.rank
                                xRoot.parent := yRoot
                            else if xRoot.rank > yRoot.rank
                                yRoot.parent := xRoot
                            else
                                yRoot.parent := xRoot
                                xRoot.rank := xRoot.rank + 1

                        function Find(x)
                            if x.parent != x
                               x.parent := Find(x.parent)
                            return x.parent
                        ```

                Union-Find Sets, c code -<

                :   -   ufs.c -<

                        :   ```cpp
                            #include <stdlib.h>

                            typedef struct ufs_t {
                                int *p;                         // 树的双亲表示法
                                int size;
                            } ufs_t;

                            ufs_t* ufs_create( int n ) {
                                ufs_t *ufs = (ufs_t *)malloc(sizeof(ufs_t));
                                ufs->p = (int*)malloc(n * sizeof(int));
                                for( int i = 0; i < n; ++i ) {
                                    ufs->p[i] = -1;             // init to disjoint, every node is root
                                }
                                return ufs;
                            }

                            void ufs_destroy( ufs_t *ufs ) {
                                free( ufs->p );
                                free( ufs );
                            }

                            // 带路径压缩，递归版, return index
                            int ufs_find( ufs_t *ufs, int x ) {
                                if( ufs->p[x] < 0 ) { return x; }
                                return ufs->p[x] = ufs_find( ufs, ufs->p[x] );      // parent
                            }

                            // 朴素版, deprecated
                            static int ufs_find_naive( ufs_t *ufs, int x ) {
                                while( ufs->p[x] >= 0 ) {
                                    x = ufs->p[x];
                                }
                                return x;
                            }

                            // 带路径压缩，迭代版
                            static int ufs_find_iterative( ufs_t *ufs, int x ) {
                                int oldx = x;
                                while( ufs->p[x] >= 0 ) {
                                    x = ufs->p[x];              // log the parent
                                }
                                while( oldx != x ) {
                                    int temp = ufs->p[oldx];    // go up, up and up. assign the x.
                                    ufs->p[oldx] = x;
                                    oldx = temp;
                                }
                                return x;
                            }

                            int ufs_union( ufs_t *ufs, int x, int y ) {
                                const int rx = ufs_find(ufs, x);
                                const int ry = ufs_find(ufs, y);
                                if( rx == ry ) { return -1; }

                                ufs->p[rx] += ufs->p[ry];
                                ufs->p[ry] = rx;
                                return 0;
                            }

                            int ufs_set_size( ufs_t *ufs, int x ) {
                                const int rx = ufs_find(ufs, x);
                                return -ufs->p[rx];
                            }
                            ```

                    -   infected student -<

                        :   ```cpp
                            #include <stdio.h>

                            #define MAXN 30000

                            #include "ufs.c"

                            int main() {
                                int n, m, k;
                                while( scanf("%d%d", &n, &m) && n > 0 ) {
                                    ufs_t *ufs = ufs_create(MAXN);
                                    while( m-- ) {
                                        int x, y;                           // two students
                                        int rx, ry;                         // x, y 所属的集合的根
                                        scanf("%d", &k);

                                        scanf("%d", &x); k--;
                                        rx = ufs_find(ufs, x);
                                        while( k-- ) {
                                            scanf("%d", &y);
                                            ry = ufs_find( ufs, y );
                                            ufs_union( ufs, rx, ry );       // merge y to x
                                        }
                                    }
                                    printf( "%d\n", ufs_set_size(ufs, 0) );
                                    ufs_destroy(ufs);
                                }
                                return 0;
                            }
                            ```

                            ```bash
                            $ cat input.txt
                            100 4
                            2 1 2
                            5 10 13 11 12 14
                            2 0 1
                            2 99 2

                            200 2
                            1 5
                            5 1 2 3 4 5

                            1 0
                            0 0

                            $ cat input.txt | ./a.out
                            4
                            1
                            1
                            ```

                    -   食物链 -<

                        :   动物王国中有三类动物 A,B,C，这三类动物的食物链构成了有趣的环形。A 吃 B， B 吃 C，C 吃
                            A。 现有 N 个动物，从 1 到 N 编号。每个动物都是 A,B,C 中的一种，但是我们并不知道它
                            到底是哪一种。

                            有人用两种说法对这 N 个动物所构成的食物链关系进行描述：

                            -   第一种说法是"1 X Y"，表示X和Y是同类。
                            -   第二种说法是"2 X Y"，表示X吃Y。

                            此人对 N 个动物，用上述两种说法，一句接一句地说出 K 句
                            话，这 K 句话有的是真的，有的是假的。当一句话满足下列
                            三条之一时，这句话就是假话，否则就是真话。

                            -   当前的话与前面的某些真的话冲突，就是假话；
                            -   当前的话中 X 或 Y 比 N 大，就是假话；
                            -   当前的话表示 X 吃 X，就是假话。

                            你的任务是根据给定的 N(1 < N < 50,000) 和 K 句话 (0 <= K <=100,000 )，输出假话的总数。


                            输出只有一个整数，表示假话的数目。

                            ```
                            input:

                                第一行是两个整数 N 和 K，以一个空格分隔。

                                以下 K 行每行是三个正整数 D，X，Y，两数之间用一个空格隔开，其中 D 表示说法的种类。

                                -   若 D=1，则表示 X 和 Y 是同类。
                                -   若 D=2，则表示 X 吃 Y。

                                100 7
                                1 101 1
                                2 1 2
                                2 2 3
                                2 3 3
                                1 1 3
                                2 3 1
                                1 5 5

                            output:

                                3
                            ```

                            ```cpp
                            /* POJ 1182 食物链, Catch them, http://poj.org/problem?id=1182 */
                            #include <stdio.h>
                            #include <stdlib.h>

                            typedef struct ufs_t {
                                int *p;
                                int *dist;                          // 表示 x 与父节点 p[x] 的关系，0 表示 x 与 p[x] 是同类，1 表示 x 吃 p[x]，2 表示 p[x] 吃 x
                                int size;
                            } ufs_t;

                            ufs_t* ufs_create(int n) {
                                ufs_t *ufs = (ufs_t*)malloc(sizeof(ufs_t));
                                ufs->p = (int*)malloc(n * sizeof(int));
                                ufs->dist = (int*)malloc(n * sizeof(int));
                                for( int i = 0; i < n; ++i ) {
                                    ufs->p[i] = -1;
                                    ufs->dist[i] = 0;               // 自己与自己是同类
                                }
                                return ufs;
                            }

                            void ufs_destroy( ufs_t *ufs ) {
                                free( ufs->p );
                                free( ufs->dist );
                                free( ufs );
                            }

                            int ufs_find( ufs_t *ufs, int x ) {
                                if( ufs->p[x] < 0 ) { return x; }

                                const int parent = ufs->p[x];
                                ufs->p[x] = ufs_find( ufs, ufs->p[x] );
                                ufs->dist[x] = (ufs->dist[x] + ufs->dist[parent]) % 3;  // ???
                                return ufs->p[x];
                            }

                            int ufs_union( ufs_t *ufs, int root1, int root2 ) {
                                if( root1 == root2 ) { return -1; }
                                ufs->p[root1] += ufs->p[root2];
                                ufs->p[root2] = root1;
                                return 0;
                            }

                            void ufs_add_relation( ufs_t *ufs, int x, int y, int relation ) {
                                const int rx = ufs_find(ufs, x);
                                const int ry = ufs_find(ufs, y);
                                ufs_union( ufs, ry, rx );                               // 注意顺序！
                                // rx 与 x 关系 + x 与 y 的关系 + y 与 ry 的关系 = rx 与 ry 的关系
                                ufs->dist[rx] = (ufs->dist[y] - ufs->dist[x] + 3 + relation) % 3;
                            }

                            int main() {
                                int result = 0;                                         // 假话的数目

                                ufs_t *ufs;
                                int n, k;
                                scanf("%d%d", &n, &k);
                                ufs = ufs_create(n + 1);

                                while( k-- ) {
                                    int d, x, y;
                                    scanf("%d%d%d", &d, &x, &y);

                                    if (x > n || y > n || (d == 2 && x == y)) {
                                        result++;
                                    } else {
                                        const int rx = ufs_find(ufs, x);
                                        const int ry = ufs_find(ufs, y);

                                        if (rx == ry) {                                 // 若在同一个集合则可确定x和y的关系
                                            if((ufs->dist[x] - ufs->dist[y] + 3) % 3 != d - 1)
                                                result++;
                                        } else {
                                            ufs_add_relation(ufs, x, y, d-1);
                                        }
                                    }
                                }

                                printf("%d\n", result);
                                ufs_destroy( ufs );
                                return 0;
                            }
                            ```

                refs and see also

                -   [Union Find - Algorithmist](http://www.algorithmist.com/index.php/Union_Find)
                -   [Disjoint-set data structure - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Disjoint-set_data_structure)
                -   [并查集 (Union-Find) 算法介绍 - dm_vincent 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/dm_vincent/article/details/7655764)
                -   [并查集(Disjoint Set)](http://www.roading.org//algorithm/introductiontoalgorithm/Disjoint_set.html)

        -   Trie 树
            -   Trie 树的相关运用
            -   Trie tree -<

                :   -   trie_tree.c -<

                        :   ```cpp
                            #include <stdio.h>
                            #include <string.h>
                            #include <stdlib.h>

                            #define MAXN 10000
                            #define CHAR_COUNT  10                      // 字符的种类，也即单个节点的子树的最大个数
                            #define MAX_CODE_LEN 10
                            #define MAX_NODE_COUNT  (MAXN * MAX_CODE_LEN + 1)  /** 字典树的最大节点个数. */
                                               /* 如果没有指定 MAXN，则是 CHAR_COUNT^(MAX_CODE_LEN+1)-1 */

                            typedef struct trie_node_t {
                                struct trie_node_t* next[CHAR_COUNT];
                                bool is_tail;                           // 当前字符是否位于某个串的尾部
                            } trie_node_t;

                            typedef struct trie_tree_t {
                                trie_node_t *root;                      /** 树的根节点 */
                                int size;
                                trie_node_t nodes[MAX_NODE_COUNT];
                            } trie_tree_t;

                            trie_tree_t* trie_tree_create(void) {
                                trie_tree_t *tree = (trie_tree_t*)malloc(sizeof(trie_tree_t));
                                tree->root = &(tree->nodes[0]);
                                memset(tree->nodes, 0, sizeof(tree->nodes));
                                tree->size = 1;
                                return tree;
                            }

                            void trie_tree_destroy(trie_tree_t *tree) {
                                free(tree);
                                tree = NULL;                            // not necessary
                            }

                            void trie_tree_clear(trie_tree_t *tree) {
                                memset(tree->nodes, 0, sizeof(tree->nodes));
                                tree->size = 1;                         // 清空时一定要注意这一步！
                            }

                            bool trie_tree_insert(trie_tree_t *tree, char *word) {
                                int i;
                                trie_node_t *p = tree->root;
                                while (*word) {
                                    int curword = *word - '0';
                                    if (p->next[curword] == NULL) {
                                        p->next[curword] = &(tree->nodes[tree->size++]);
                                    }
                                    p = p->next[curword];
                                    if (p->is_tail) {
                                        return false;                   // 某串是当前串的前缀
                                    }
                                    ++word;
                                }

                                p->is_tail = true;                      // 标记当前串已是结尾

                                // 判断当前串是否是某个串的前缀
                                for (i = 0; i < CHAR_COUNT; i++) {
                                    if (p->next[i] != NULL) {
                                        return false;
                                    }
                                }
                                return true;
                            }
                            ```

                    -   immediate decodebility -<

                        :   POJ 1056 IMMEDIATE DECODABILITY, <http://poj.org/problem?id=1056>

                            ```cpp
                            #include "trie_tree.c"

                            int main() {
                                int T = 0;
                                char line[MAX_NODE_COUNT];
                                trie_tree_t *trie_tree = trie_tree_create();
                                bool islegal = true;

                                while ( scanf("%s", line) != EOF ) {
                                    if (strcmp(line, "9") == 0) {
                                        if (islegal) {
                                            printf("Set %d is immediately decodable\n", ++T);
                                        } else {
                                            printf("Set %d is not immediately decodable\n", ++T);
                                        }
                                        trie_tree_clear(trie_tree);
                                        islegal = true;
                                    } else {
                                        if (islegal) {
                                            islegal = trie_tree_insert(trie_tree, line);
                                        }
                                    }
                                }
                                trie_tree_destroy(trie_tree);
                                return 0;
                            }
                            ```

                            ```bash
                            $ cat input.txt | ./a.out
                            Set 1 is immediately decodable
                            Set 2 is not immediately decodable
                            ```

        -   扫描线算法
            -   1. 扫描线的常规题目
            -   2. 扫描线和其他数据结构结合的拓展
            -   Interval Tree -<

                :   -   balanced line up -<

                        :   ```cpp
                            #include <stdio.h>
                            #include <stdlib.h>
                            #include <string.h>
                            #include <limits.h>

                            #define MAXN 50001                          // 0 位置未用
                            #define max(a,b) ((a)>(b)?(a):(b))
                            #define min(a,b) ((a)<(b)?(a):(b))
                            #define L(a) ((a)<<1)
                            #define R(a) (((a)<<1)+1)

                            typedef struct node_t {
                                int left, right;
                                int max, min;
                            } node_t;

                            int A[MAXN];

                            // 完全二叉树，结点编号从 1 开始，层次从 1 开始.
                            // 用一维数组存储完全二叉树，空间约为 4N，
                            // 参考 http://comzyh.tk/blog/archives/479/
                            node_t node[MAXN * 4];

                            int minx, maxx;                             // 存放查询的结果

                            void init() { memset(node, 0, sizeof(node)); }

                            // 以 t 为根结点，为区间 A[l,r] 建立线段树
                            void build(int t, int l, int r) {
                                node[t].left = l, node[t].right = r;
                                if (l == r) {
                                    node[t].max = node[t].min = A[l];
                                    return;
                                }
                                const int mid = (l + r) / 2;
                                build(L(t), l, mid);
                                build(R(t), mid + 1, r);
                                node[t].max = max( node[L(t)].max, node[R(t)].max );
                                node[t].min = min( node[L(t)].min, node[R(t)].min );
                            }

                            // 查询根结点为 t，区间为 A[l,r] 的最大值和最小值
                            void query(int t, int l, int r) {
                                if (node[t].left == l && node[t].right == r) {
                                    if (maxx < node[t].max)
                                        maxx = node[t].max;
                                    if (minx > node[t].min)
                                        minx = node[t].min;
                                    return;
                                }
                                const int mid = (node[t].left + node[t].right) / 2;
                                if (l > mid) {
                                    query(R(t), l, r);
                                } else if (r <= mid) {
                                    query(L(t), l, r);
                                } else {
                                    query(L(t), l, mid);
                                    query(R(t), mid + 1, r);
                                }
                            }

                            int main() {
                                int n, q, i;

                                scanf("%d%d", &n, &q);
                                for (i = 1; i <= n; i++) scanf("%d", &A[i]);

                                init();
                                // 建立以 tree[1] 为根结点，区间为 A[1,n] 的线段树
                                build(1, 1, n);

                                while (q--) {
                                    int a, b;
                                    scanf("%d%d", &a, &b);
                                    maxx = 0;
                                    minx = INT_MAX;
                                    query(1, a, b);                 // 查询区间 A[a,b] 的最大值和最小值
                                    printf("%d\n", maxx - minx);
                                }
                                return 0;
                            }
                            ```

                            [algorithm - What are the differences between segment trees, interval trees, binary indexed trees and range trees? - Stack Overflow](http://stackoverflow.com/questions/17466218/what-are-the-differences-between-segment-trees-interval-trees-binary-indexed-t)

                            [CSC378: Interval Trees](http://www.dgp.toronto.edu/people/JamesStewart/378notes/22intervals/)

                    -   josephus problem -<

                        :   ```
                            N = 8 children, count M, 1 <= N, M <= 30000

                                 1  2
                               8      3
                               7       4
                                 6  5
                            ```

                            约瑟夫问题的难点在于，每一轮都不能通过简单的运算得
                            出下一轮谁淘汰，因为中间有人已经退出了。因此一般只
                            能模拟，效率很低。

                            现在考虑，每一轮都令所有剩下的人从左到右重新编号，
                            例如 3 退出后，场上还剩下 1、2、4、5，则给 1 新编号 1，2
                            新编号 2，4 新编号 3，5 新编号 4。不妨称这个编号为“剩余
                            队列编号”。如下所示，括号内为原始编号：

                            ```
                            1(1) 2(2) 3(3) 4(4) 5(5) --> 剩余队列编号 3 淘汰，对应原编号 3
                            1(1) 2(2) 3(4) 4(5) --> 剩余队列编号 1 淘汰，对应原编号 1
                            1(2) 2(4) 3(5) --> 剩余队列编号 3 淘汰，对应原编号 5
                            1(2) 2(4) --> 剩余队列编号 1 淘汰，对应原编号 2
                            1(4) --> 剩余队列编号 1 滔天，对应原编号 4
                            ```

                            一个人在当前剩余队列中编号为 i，则说明他是从左到右
                            数第 i 个人，这启发我们可以用线段树来解决问题。用线
                            段树维护原编号 [i..j] 内还有多少人没 有被淘汰，这样
                            每次选出被淘汰者后，在当前线段树中查找位置就可以了。

                            例如我们有 5 个原编号，当前淘汰者在剩余队列中编号为 3
                            ，先看左子树，即原编号 [1..3] 区间内，如果剩下的人不
                            足 3 个，则说明当前剩余编号为 3 的 这个人原编号只能是在
                            [4..5] 区间内，继续在 [4..5] 上搜索；如果 [1..3] 内剩下
                            的人大于等于 3 个，则说明就在 [1..3] 内，也继续缩小范围
                            查找，这样即可在 O(\log N) 时间内完成对应。问题得到
                            圆满的解决。

                            ```cpp
                            #include <stdio.h>
                            #include <string.h>

                            #define L(a) ((a)<<1)
                            #define R(a) (((a)<<1)+1)
                            #define MAXN 30001

                            typedef struct node_t {
                                int left, right;
                                int count; /* 区间内的元素个数 */
                            } node_t;

                            /* 完全二叉树，结点编号从 1 开始，层次从 1 开始.
                             * 用一维数组存储完全二叉树，空间约为 4N，
                             * 参考 http://comzyh.tk/blog/archives/479/
                             */
                            node_t node[MAXN * 4];

                            void init() {
                                memset(node, 0, sizeof(node));
                            }

                            /* 以 t 为根结点，为区间 [l,r] 建立线段树 */
                            void build(int t, int l, int r) {
                                node[t].left = l;
                                node[t].right = r;
                                node[t].count = r - l + 1;
                                if (l == r) return;

                                const int mid = (r + l) / 2;
                                build(L(t), l, mid);
                                build(R(t), mid + 1, r);
                            }

                            /**
                             * @brief 输出i
                             * @param[in] t 根节点
                             * @param[in] i 剩余队列编号
                             * @return 被删除的实际数字
                             */
                            int remove(int t, int i) {
                                node[t].count--;
                                if (node[t].left == node[t].right) {
                                    printf("%d ", node[t].left);
                                    return node[t].left;
                                }
                                if (node[L(t)].count >= i) return remove(L(t), i);
                                else return remove(R(t), i - node[L(t)].count); /* 左子树人数不足，则在右子树查找 */
                            }

                            /**
                             * @brief 返回 1到i内的活人数
                             * @param[in] t 根节点
                             * @param[in] i 原始队列的数字
                             * @return 1到i内的活人数
                             */
                            int get_count(int t, int i) {
                                if (node[t].right <= i) return node[t].count;

                                const int mid = (node[t].left + node[t].right) / 2;
                                int s = 0;
                                if (i > mid) {
                                    s += node[L(t)].count;
                                    s += get_count(R(t), i);
                                } else
                                    s += get_count(L(t), i);
                                return s;
                            }

                            int main() {
                                int n, m;
                                scanf("%d%d", &n, &m);

                                init();
                                build(1, 1, n);

                                int i;
                                int j = 0; /* 剩余队列的虚拟编号 */
                                for (i = 1; i <= n; i++) {
                                    j += m;
                                    if (j > node[1].count)
                                        j %= node[1].count;
                                    if (j == 0) j = node[1].count;
                                    const int k = remove(1, j);
                                    j = get_count(1, k);
                                }
                                return 0;
                            }
                            ```

                            ```bash
                            $ echo 5 3 | ./a.out
                            3   1   5   2   4
                            ```

    :scissors: 2016/08/29 上午 7:00:00 数据结构 Data Structure (下) -<

    :   -   Heap的深入理解和运用
        -   Heap重要拓展：
            -   1. 带删除的堆hash-heap
            -   2. Trapping rain water
            -   3. Building Outline
        -   Median 问题拓展
        -   Sliding Windows问题总结
        -   双端队列Deque

    :scissors: 2016/09/04 上午 7:00:00 两个指针 Two Pointers -<

    :   -   对撞型指针
            -   1. Two sum 类
            -   2. Partition 类
        -   前向型指针
            -   1. 窗口类
            -   2. 快慢类
        -   两个数组上的指针

    :scissors: 2016/9/5 上午 7:00:00 动态规划 Dynamic Programming (上) -<

    :   -   记忆化搜索（区间动态规划、博弈类动态规划）
        -   背包类动态规划
        -   区间类动态规划

    :scissors: 2016/9/11 上午 7:00:00 动态规划 Dynamic Programming (下) -<

    :   -   记忆化搜索拓展
            -   1. 区间动态规划
            -   2. 博弈类动态规划
        -   背包类动态规划
            -   1. BackPack I/II
            -   2. K sum
            -   3. Minimum Adjustment Cost

    :scissors: 2016/9/12 上午 7:00:00 如何解决 follow up 问题 -<

    :   -   Peak Element I/II
        -   第 K 大
            -   1. 第 K 大
            -   2. 有序矩阵的第 K 大
            -   3. 两个数组乘积的第 K 大
            -   4. n 个数组第 K 大
            -   5. n 个数组多机第 K 大 (K 比较小)
            -   6. n 个数组多机第 K 大 (K 比较大)
        -   Subarray sum
            -   1. Subarray sum
            -   2. Submatrix sum
            -   3. Subarray Sum Closest
            -   4. Subarray sum II

    :scissors: 2016/00/00 上午 7:00:00 Math Methods and Models -<

    :   -   number theory
        -   combination

    :scissors: Bonus Problems -<

    :   [Bresenham's line algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm) -<

        :   Bresenham's line algorithm is named after Jack Elton Bresenham who developed it in 1962 at IBM.

            ![](https://upload.wikimedia.org/wikipedia/commons/thumb/a/ab/Bresenham.svg/300px-Bresenham.svg.png)

            $${\frac {y-y_{0}}{y_{1}-y_{0}}}={\frac {x-x_{0}}{x_{1}-x_{0}}}.$$

            ```
            function line(x0, y0, x1, y1)
                real deltax := x1 - x0
                real deltay := y1 - y0
                real error := -1.0
                real deltaerr := abs(deltay / deltax)       // Assume deltax != 0 (line is not vertical),
                                                            // note that this division needs to be done in a way that preserves the fractional part
                int y := y0
                for x from x0 to x1-1
                    plot(x,y)
                    error := error + deltaerr
                    if error ≥ 0.0 then
                        y := y + 1
                        error := error - 1.0

            +----------+                            +--------------+
            | y = f(x) |                            | f(x, y) = 0  |
            +----------+                            +--------------+
                                                                                A = dy
            y       = f(x) = mx + b                                             B = dx
                    = (dy/dx)x + b                                              C = dx*b
            dx*y    = dy*x + dx*b
            0       = dy*x - dx*y + dx*b            f(x,y)  = 0 = Ax + By + C

            +------+
            | e.g. |
            +------+

            y = 0.5 * x +1                          f(x, y) = x - 2y + 2
            ```

            starting point: f(x0, y0) = 0

            ![](https://upload.wikimedia.org/wikipedia/commons/thumb/1/14/Line_1.5x%2B1_--_candidates.svg/300px-Line_1.5x%2B1_--_candidates.svg.png)

            ```
            (x0+1, y0), (x0+1, y0+1)  ----- mid point : D = f(x0+1, y0+0.5)
                                                        D < 0   --->    go right
                                                        D > 0   --->    go down
            ```

            if D is positive, then choose ( x 0 + 1 , y 0 + 1 ), otherwise choose ( x 0 + 1 , y 0 ).

            Alternatively, the difference between points can be used instead of evaluating
            f(x,y) at midpoints. This alternative method allows for integer-only
            arithmetic, which is generally faster than using floating-point arithmetic. To
            derive the alternative method, define the difference to be as follows:

            ```
            D = f(x0+1, y0+0.5) - f(x0, y0) = A(x0+1-x0) + B(y0+0.5-y0)
              = A + 0.5*B
                       if    <   0 ---------->  (x0, y0)
                       if    >   0 ---------->  (x0, y0+1)

            plotLine(x0,y0, x1,y1)
                dx = x1 - x0
                dy = y1 - y0
                D = dy - dx
                y = y0

                for x from x0 to x1-1
                    plot(x,y)
                    if D ≥ 0
                        y = y + 1
                        D = D - dx
                    D = D + dy
            ```

            ![](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2b/Line_1.5x%2B1_--_points.svg/300px-Line_1.5x%2B1_--_points.svg.png)

            However, as mentioned above this is only for the first octant. This means there
            are eight possible cases to consider. The simplest way to extend the same
            algorithm, if implemented in hardware, is to flip the co-ordinate system on the
            input and output of the single-octant drawer.

            ```
             Octants:
              \2|1/
              3\|/0
             ---+---
              4/|\7
              /5|6\
            ```

            [Octant (plane geometry) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Octant_(plane_geometry))

            :   ![An 8-point windrose](https://upload.wikimedia.org/wikipedia/commons/thumb/b/bb/Windrose.svg/150px-Windrose.svg.png)

            [Orthant - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Orthant)

            :   ![In two dimensions, there are 4 orthants (called quadrants)](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1a/Cartesian_coordinates_2D.svg/220px-Cartesian_coordinates_2D.svg.png)

        Shift right -<

        :   from acm-cheatsheet/Functionalities

        Big Integer -<

        :   -   addition
            -   subtraction
            -   multiplication
            -   division
            -   power

            ```cpp
            #include<cstdio>
            #include<cstring>
            #include<vector>
            #include<iostream>
            using namespace std;

            struct BigInteger {
                static const int BASE = 100000000;
                static const int WIDTH = 8;
                vector<int> s;

                BigInteger(long long num = 0) { *this = num; }          // 构造函数
                BigInteger operator = (long long num) {                 // 赋值运算符
                    s.clear();
                    do {
                        s.push_back(num % BASE);
                        num /= BASE;
                    } while(num > 0);
                    return *this;
                }
                BigInteger operator = (const string& str) {             // 赋值运算符
                    s.clear();
                    int x, len = (str.length() - 1) / WIDTH + 1;
                    for(int i = 0; i < len; i++) {
                        int end = str.length() - i*WIDTH;
                        int start = max(0, end - WIDTH);
                        sscanf(str.substr(start, end-start).c_str(), "%d", &x);
                        s.push_back(x);
                    }
                    return *this;
                }
                BigInteger operator + (const BigInteger& b) const {
                    BigInteger c;
                    c.s.clear();
                    for(int i = 0, g = 0; ; i++) {
                        if(g == 0 && i >= s.size() && i >= b.s.size()) break;
                        int x = g;
                        if(i < s.size()) x += s[i];
                        if(i < b.s.size()) x += b.s[i];
                        c.s.push_back(x % BASE);
                        g = x / BASE;
                    }
                    return c;
                }
            };

            ostream& operator << (ostream &out, const BigInteger& x) {
                out << x.s.back();
                for(int i = x.s.size()-2; i >= 0; i--) {
                    char buf[20];
                    sprintf(buf, "%08d", x.s[i]);
                    for(int j = 0; j < strlen(buf); j++) out << buf[j];
                }
                return out;
            }

            istream& operator >> (istream &in, BigInteger& x) {
                string s;
                if(!(in >> s)) return in;
                x = s;
                return in;
            }

            #include<set>
            #include<map>
            set<BigInteger> s;
            map<BigInteger, int> m;

            int main() {
                BigInteger y;
                BigInteger x = y;
                BigInteger z = 123;

                BigInteger a, b;
                cin >> a >> b;
                cout << a + b << "\n";
                cout << BigInteger::BASE << "\n";
                return 0;
            }
            ```

        AOAPC 代码选讲 -<

        :   -   闰年 -<

                :   ```cpp
                    #include<stdio.h>
                    int main() {
                        int year;
                        scanf( "%d", &year );
                        if( year % 4 != 0 || (year % 100 == 0 && year % 400 != 0) ) {
                            printf( "no\n" );
                        } else {
                            printf("yes\n");
                        }
                        return 0;
                    }
                    ```

            -   6-1 UVa210 并行程序模拟，Concurrency Simulator                        ch6/UVa210.cpp -<

                :   模拟 n 个程序

                    ```cpp
                    // UVa210 Concurrency Simulator
                    #include <cstdio>
                    #include <queue>
                    #include <cstring>
                    #include <cstdlib>
                    #include <cctype>
                    using namespace std;

                    const int maxn = 1000;

                    deque<int> readyQ;
                    queue<int> blockQ;
                    int n, quantum, c[5], var[26], ip[maxn];                        // ip[pid] 是程序 pid 的当前行号。所有程序都存在 prog 数组，更类似真实的情况，代码也更短
                    bool locked;
                    char prog[maxn][10];

                    void run(int pid) {
                        int q = quantum;
                        while(q > 0) {
                            char *p = prog[ip[pid]];
                            switch(p[2]) {
                                case '=':
                                    var[p[0] - 'a'] = isdigit(p[5]) ? (p[4] - '0') * 10 + p[5] - '0' : p[4] - '0';
                                    q -= c[0];
                                    break;
                                case 'i': // print
                                    printf("%d: %d\n", pid+1, var[p[6] - 'a']);
                                    q -= c[1];
                                    break;
                                case 'c': // lock
                                    if(locked) { blockQ.push(pid); return; }
                                    locked = true;
                                    q -= c[2];
                                    break;
                                case 'l': // unlock
                                    locked = false;
                                    if(!blockQ.empty()) {
                                        int pid2 = blockQ.front(); blockQ.pop();
                                        readyQ.push_front(pid2);
                                    }
                                    q -= c[3];
                                    break;
                                case 'd': // end
                                    return;
                            }
                            ip[pid]++;
                        }
                        readyQ.push_back(pid);
                    }

                    int main() {
                        int T;
                        scanf("%d", &T);
                        while(T--) {
                            scanf("%d %d %d %d %d %d %d\n", &n, &c[0], &c[1], &c[2], &c[3], &c[4], &quantum);
                            memset(var, 0, sizeof(var));

                            int line = 0;
                            for(int i = 0; i < n; i++) {
                                fgets(prog[line++], maxn, stdin);
                                ip[i] = line - 1;
                                while(prog[line - 1][2] != 'd')
                                    fgets(prog[line++], maxn, stdin);
                                readyQ.push_back(i);
                            }

                            locked = false;
                            while(!readyQ.empty()) {
                                int pid = readyQ.front(); readyQ.pop_front();
                                run(pid);
                            }
                            if(T) printf("\n");
                        }
                        return 0;
                    }
                    ```

            -   6-2 UVa514 Rails                                        ch6/UVa514.cpp -<

                :   ```cpp
                    // UVa514 Rails
                    // Rujia Liu
                    #include<cstdio>
                    #include<stack>
                    using namespace std;
                    const int MAXN = 1000 + 10;

                    int n, target[MAXN];

                    int main() {
                        while(scanf("%d", &n) == 1) {
                            stack<int> s;
                            int A = 1, B = 1;
                            for(int i = 1; i <= n; i++)
                                scanf("%d", &target[i]);
                            int ok = 1;
                            while(B <= n) {
                                if(A == target[B]){ A++; B++; }
                                else if(!s.empty() && s.top() == target[B]){ s.pop(); B++; }
                                else if(A <= n) s.push(A++);
                                else { ok = 0; break; }
                            }
                            printf("%s\n", ok ? "Yes" : "No");
                        }
                        return 0;
                    }
                    ```

            -   6-3 UVa442 Matrix Chain Multiplication                  ch6/UVa442.cpp -<

                :   ```cpp
                    // UVa442 Matrix Chain Multiplication
                    // Rujia Liu
                    // 题意：输入n个矩阵的维度和一些矩阵链乘表达式，输出乘法的次数。假定A和m*n的，B是n*p的，那么AB是m*p的，乘法次数为m*n*p
                    // 算法：用一个栈。遇到字母时入栈，右括号时出栈并计算，然后结果入栈。因为输入保证合法，括号无序入栈
                    #include<cstdio>
                    #include<stack>
                    #include<iostream>
                    #include<string>
                    using namespace std;

                    struct Matrix {
                        int a, b;
                        Matrix(int a=0, int b=0):a(a),b(b) {}
                    } m[26];

                    stack<Matrix> s;

                    int main() {
                        int n;
                        cin >> n;
                        for(int i = 0; i < n; i++) {
                            string name;
                            cin >> name;
                            int k = name[0] - 'A';
                            cin >> m[k].a >> m[k].b;
                        }
                        string expr;
                        while(cin >> expr) {
                            int len = expr.length();
                            bool error = false;
                            int ans = 0;
                            for(int i = 0; i < len; i++) {
                                if(isalpha(expr[i])) s.push(m[expr[i] - 'A']);
                                else if(expr[i] == ')') {
                                    Matrix m2 = s.top(); s.pop();
                                    Matrix m1 = s.top(); s.pop();
                                    if(m1.b != m2.a) { error = true; break; }
                                    ans += m1.a * m1.b * m2.b;
                                    s.push(Matrix(m1.a, m2.b));
                                }
                            }
                            if(error) printf("error\n"); else printf("%d\n", ans);
                        }

                        return 0;
                    }
                    ```

            -   6-4 UVa11988 Broken Keyboard -<

                :   ```cpp
                    // UVa11988 Broken Keyboard
                    // Rujia Liu
                    #include<cstdio>
                    #include<cstring>
                    const int maxn = 100000 + 5;
                    int last, cur, next[maxn]; // 光标位于cur号字符之后面
                    char s[maxn];

                    int main() {
                        while(scanf("%s", s+1) == 1) {
                            int n = strlen(s+1); // 输入保存在s[1], s[2]...中
                            last = cur = 0;
                            next[0] = 0;

                            for(int i = 1; i <= n; i++) {
                                char ch = s[i];
                                if(ch == '[') cur = 0;
                                else if(ch == ']') cur = last;
                                else {
                                    next[i] = next[cur];
                                    next[cur] = i;
                                    if(cur == last) last = i; // 更新“最后一个字符”编号
                                    cur = i; // 移动光标
                                }
                            }
                            for(int i = next[0]; i != 0; i = next[i])
                                printf("%c", s[i]);
                            printf("\n");
                        }
                        return 0;
                    }
                    ```

            -   6-5 UVa12657 Boxes in a Line                            ch6/UVa12657.cpp

                :   ```cpp
                    // UVa12657 Boxes in a Line
                    // Rujia Liu
                    #include<cstdio>
                    #include<algorithm>
                    using namespace std;

                    const int maxn = 100000 + 5;
                    int n, left[maxn], right[maxn];

                    inline void link(int L, int R) {
                        right[L] = R; left[R] = L;
                    }

                    int main() {
                        int m, kase = 0;
                        while(scanf("%d%d", &n, &m) == 2) {
                            for(int i = 1; i <= n; i++) {
                                left[i] = i-1;
                                right[i] = (i+1) % (n+1);
                            }
                            right[0] = 1; left[0] = n;
                            int op, X, Y, inv = 0;

                            while(m--) {
                                scanf("%d", &op);
                                if(op == 4) inv = !inv;
                                else {
                                    scanf("%d%d", &X, &Y);
                                    if(op == 3 && right[Y] == X) swap(X, Y);
                                    if(op != 3 && inv) op = 3 - op;
                                    if(op == 1 && X == left[Y]) continue;
                                    if(op == 2 && X == right[Y]) continue;

                                    int LX = left[X], RX = right[X], LY = left[Y], RY = right[Y];
                                    if(op == 1) {
                                        link(LX, RX); link(LY, X); link(X, Y);
                                    }
                                    else if(op == 2) {
                                        link(LX, RX); link(Y, X); link(X, RY);
                                    }
                                    else if(op == 3) {
                                        if(right[X] == Y) { link(LX, Y); link(Y, X); link(X, RY); }
                                        else { link(LX, Y); link(Y, RX); link(LY, X); link(X, RY); }
                                    }
                                }
                            }

                            int b = 0;
                            long long ans = 0;
                            for(int i = 1; i <= n; i++) {
                                b = right[b];
                                if(i % 2 == 1) ans += b;
                            }
                            if(inv && n % 2 == 0) ans = (long long)n*(n+1)/2 - ans;
                            printf("Case %d: %lld\n", ++kase, ans);
                        }
                        return 0;
                    }
                    ```

            -   6-6 UVa679 Dropping Balls                               UVa679.cpp -<

                :   ch6, page148.

                    每个节点有一个开关，每次有小球通过，开关 toggle。初始为可以向左。

                    ```cpp
                    // UVa679 Dropping Balls
                    // Rujia Liu
                    #include<cstdio>
                    int main() {
                      int T, D, I;
                      scanf("%d", &T);
                      while(T--) {
                        scanf("%d%d", &D, &I);
                        int k = 1;
                        for(int i = 0; i < D-1; i++)
                          if(I%2) { k = k*2; I = (I+1)/2; }
                          else { k = k*2+1; I /= 2; }
                        printf("%d\n", k);
                      }
                      return 0;
                    }
                    ```

            -   6-8 UVa548 Tree                                         ch6/UVa548.cpp -<

                :   ch6, page156.

                    题意：给一棵点带权（权各不相同，都是正整数）二叉树的中序和后序遍历，找一个叶子使得它到根的路径上的权和最小。如果有多解，该叶子本身的权应尽量小

                    算法：递归建树，然后 DFS。注意，直接递归求结果也可以，但是先建树的方法不仅直观，而且更好调试

                    ```cpp
                    // UVa548 Tree
                    #include<iostream>
                    #include<string>
                    #include<sstream>
                    #include<algorithm>
                    using namespace std;

                    // 因为各个结点的权值各不相同且都是正整数，直接用权值作为结点编号
                    const int maxv = 10000 + 10;
                    int in_order[maxv], post_order[maxv], lch[maxv], rch[maxv];
                    int n;

                    bool read_list(int* a) {
                        string line;
                        if(!getline(cin, line)) return false;
                        stringstream ss(line);
                        n = 0;
                        int x;
                        while(ss >> x) a[n++] = x;
                        return n > 0;
                    }

                    // 把in_order[L1..R1]和post_order[L2..R2]建成一棵二叉树，返回树根
                    int build(int L1, int R1, int L2, int R2) {
                        if(L1 > R1) return 0; // 空树
                        int root = post_order[R2];
                        int p = L1;
                        while(in_order[p] != root) p++;
                        int cnt = p-L1; // 左子树的结点个数
                        lch[root] = build(L1, p-1, L2, L2+cnt-1);
                        rch[root] = build(p+1, R1, L2+cnt, R2-1);
                        return root;
                    }

                    int best, best_sum; // 目前为止的最优解和对应的权和

                    void dfs(int u, int sum) {
                        sum += u;
                        if(!lch[u] && !rch[u]) { // 叶子
                            if(sum < best_sum || (sum == best_sum && u < best)) { best = u; best_sum = sum; }
                        }
                        if(lch[u]) dfs(lch[u], sum);
                        if(rch[u]) dfs(rch[u], sum);
                    }

                    int main() {
                        while(read_list(in_order)) {
                            read_list(post_order);
                            build(0, n-1, 0, n-1);
                            best_sum = 1000000000;
                            dfs(post_order[n-1], 0);
                            cout << best << "\n";
                        }
                        return 0;
                    }
                    ```

                    也可以在递归的同时统计最优解。留给读者。

            -   Falling Leaves -<

                :   ```cpp
                    // UVa699 The Falling Leaves
                    // Rujia Liu
                    // 题意：给一棵二叉树，每个节点都有一个水平位置：左儿子在它左边1个单位，右儿子在右边1个单位。从左向右输出每个水平位置的所有结点的权值之和。按照递归方式输入，-1表示空树
                    // 算法：在“建树”的同时计算，无须真正的把树保存下来

                    #include<cstring>
                    #include<iostream>
                    using namespace std;

                    const int maxn = 200;
                    int sum[maxn];

                    // 输入并统计一棵子树，树根水平位置为p
                    void build(int p) {
                        int v;
                        cin >> v;
                        if(v == -1) return; // 空树
                        sum[p] += v;
                        build(p - 1);
                        build(p + 1);
                    }

                    // 边读入边统计
                    bool init() {
                        int v;
                        cin >> v;
                        if(v == -1) return false;

                        memset(sum, 0, sizeof(sum));
                        int pos = maxn/2; // 树根的水平位置
                        sum[pos] = v;
                        build(pos - 1); // 左子树
                        build(pos + 1); // 右子树
                    }

                    int main() {
                        int kase = 0;
                        while(init()) {
                            int p = 0;
                            while(sum[p] == 0) p++; // 找最左边的叶子

                            // 开始输出。因为要避免行末多余空格，所以稍微麻烦一点
                            cout << "Case " << ++kase << ":\n" << sum[p++];
                            while(sum[p] != 0) {
                                cout << " " << sum[p];
                                p++;
                            }
                            cout << "\n\n";
                        }
                        return 0;
                    }
                    ```

            -   Quadtree -<

                :   ch6, page160.

                    题意：给两棵四分树的先序遍历，求二者合并之后（黑色部分合并）
                    黑色像素的个数。p 表示中间结点，f 表示黑色（full），e 表示白色
                    （empty）

                    算法：先建树，然后统计

                    ```cpp
                    #include<cstdio>
                    #include<cstring>

                    const int len = 32;
                    const int maxn = 1024 + 10;
                    char s[maxn];
                    int buf[len][len], cnt;

                    // 把字符串 s[p..] 导出到以 (r,c) 为左上角，边长为 w 的缓冲区中
                    // 2 1
                    // 3 4
                    void draw(const char* s, int& p, int r, int c, int w) {
                        char ch = s[p++];
                        if(ch == 'p') {
                            draw(s, p, r,     c+w/2, w/2); // 1
                            draw(s, p, r,     c    , w/2); // 2
                            draw(s, p, r+w/2, c    , w/2); // 3
                            draw(s, p, r+w/2, c+w/2, w/2); // 4
                        } else if(ch == 'f') { // 画黑像素（白像素不画）
                            for(int i = r; i < r+w; i++)
                                for(int j = c; j < c+w; j++)
                                    if(buf[i][j] == 0) { buf[i][j] = 1; cnt++; }
                        }
                    }

                    int main() {
                        int T;
                        scanf("%d", &T);
                        while(T--) {
                            memset(buf, 0, sizeof(buf));
                            cnt = 0;
                            for(int i = 0; i < 2; i++) {
                                scanf("%s", s);
                                int p = 0;
                                draw(s, p, 0, 0, len);
                            }
                            printf("There are %d black pixels.\n", cnt);
                        }
                        return 0;
                    }
                    ```

            -   Oil Deposits -<

                :   ch6, page162.

                    题意：输入一个字符矩阵，统计字符 @ 组成多少个四连块

                    ```
                    input:

                        4   4                       # 4 行 4 列
                        *   *   *   *   @
                        *   @   @   *   @
                        *   @   *   *   @
                        @   @   @   *   @
                        @   @   *   *   @

                    output:

                        2
                    ```

                    ```cpp
                    #include<cstdio>
                    #include<cstring>
                    const int maxn = 100 + 5;
                    char pic[maxn][maxn];
                    int m, n, idx[maxn][maxn];

                    void dfs( int r, int c, int id ) {
                        if( r < 0 || r >= m || c < 0 || c >= n ) { return; }
                        if( idx[r][c] > 0  || pic[r][c] != '@' ) { return; }
                        idx[r][c] = id;
                        for( int dr = -1; dr <= 1; dr++ ) {
                            for( int dc = -1; dc <= 1; dc++ ) {
                                if( dr != 0 || dc != 0 ) {
                                    dfs( r+dr, c+dc, id );
                                }
                            }
                        }
                    }

                    int main() {
                        while( scanf("%d%d", &m, &n) == 2 && m && n ) {
                            int i = 0;
                            char c;
                            while( i < m*n && (c = getchar()) != EOF ) {
                                if( c != '*' && c != '@' ) {
                                    continue;
                                } else {
                                    pic[i/n][i%n] = c;
                                    ++i;
                                }
                            }
                            memset( idx, 0, sizeof(idx) );
                            int cnt = 0;
                            for( int i = 0; i < m; ++i ) {
                                for(int j = 0; j < n; ++j ) {
                                    if( idx[i][j] == 0 && pic[i][j] == '@' ) {
                                        dfs( i, j, ++cnt );
                                    }
                                }
                            }
                            printf( "%d\n", cnt );
                        }
                        return 0;
                    }
                    ```

                    求多维数组连通块的过程也称为种子填充（floodfill）。

            -   Ordering Tasks -<

                :   二元组 (u, v)，构造有向图，如果有环，关系“破裂”。

                    ```cpp
                    // UVa10305 Ordering Tasks
                    // Rujia Liu
                    // 题意：输入 n 和 m，以及 m 个二元组 (i,j)，求 1~n 的一个排列使得对于每个 (i,j)，i 在 j 的前面
                    // 算法：拓扑排序。注意 m 可能等于 0
                    #include <cstdio>
                    #include <cstring>
                    const int maxn = 1000;
                    int n, m, G[maxn][maxn], c[maxn], topo[maxn], t;

                    bool dfs( int u ) {
                        c[u] = -1;
                        for( int v = 0; v < n; v++ ) {
                            if( G[u][v] ) {
                                if( c[v]<0 ) { return false; }
                            } else {
                                if( !c[v]  ) { dfs(v); }
                            }
                        }
                        c[u] = 1; topo[--t] = u;
                        return true;
                    }

                    bool toposort() {
                        t = n;
                        memset( c, 0, sizeof(c) );
                        for( int u = 0; u < n; u++) {
                            if( !c[u] && !dfs(u) ) {
                                return false;
                            }
                        }
                        return true;
                    }

                    int main() {
                        while( scanf("%d%d", &n, &m) == 2 && n ) {
                            memset( G, 0, sizeof(G) );
                            for( int i = 0; i < m; i++ ) {
                                int u, v;
                                scanf( "%d%d", &u, &v );
                                G[u-1][v-1] = 1;
                            }
                            if( toposort() ) {
                                for( int i = 0; i < n-1; i++ ) {
                                    printf("%d ", topo[i]+1);
                                }
                                printf("%d\n", topo[n-1]+1);
                            } else {
                                printf("No\n"); // 题目没说无解输出什么，应该是保证有解吧
                            }
                        }
                    }
                    ```

                    ```
                    $ cat input.txt
                    5 3
                    2 1
                    4 2
                    3 2

                    3 3
                    3 2
                    2 1
                    1 3

                    $ cat input.txt | ./a.out
                    1 1 1 1 5
                    No
                    ```

            -   Play on Words -<

                :   ```cpp
                    // UVa10129 Play on Words
                    // Rujia Liu
                    // 题意：输入 n 个单词，是否可以排成一个序列，使得每个单词的第一个字母和上一个单词的最后一个字母相同
                    // 算法：把字母看作结点，单词看成有向边，则有解当且仅当图中有欧拉路径。注意要先判连通

                    #include <cstdio>
                    #include <cstring>
                    #include <vector>
                    using namespace std;

                    const int maxn = 1000 + 5;

                    // 并查集
                    int pa[256];
                    int findset(int x) { return pa[x] != x ? pa[x] = findset(pa[x]) : x; }
                    int used[256], deg[256];                                // 是否出现过；度数

                    int main() {
                        int T;
                        scanf( "%d", &T );
                        while( T-- ) {
                            int n;
                            char word[maxn];

                            scanf("%d", &n);
                            memset(used, 0, sizeof(used));
                            memset(deg, 0, sizeof(deg));
                            for(int ch = 'a'; ch <= 'z'; ch++) pa[ch] = ch;
                            int cc = 26;                                        // 连通块个数

                            for(int i = 0; i < n; i++) {
                                scanf("%s", word);
                                char c1 = word[0], c2 = word[strlen(word)-1];
                                deg[c1]++;
                                deg[c2]--;
                                used[c1] = used[c2] = 1;
                                int s1 = findset(c1), s2 = findset(c2);
                                if(s1 != s2) { pa[s1] = s2; cc--; }
                            }

                            vector<int> d;
                            for(int ch = 'a'; ch <= 'z'; ch++) {
                                if(!used[ch]) cc--;                               // 没出现过的字母
                                else if(deg[ch] != 0) d.push_back(deg[ch]);
                            }
                            bool ok = false;
                            if(cc == 1 && (d.empty() || (d.size() == 2 && (d[0] == 1 || d[0] == -1)))) ok = true;
                            if(ok) printf("Ordering is possible.\n");
                            else printf("The door cannot be opened.\n");
                        }
                        return 0;
                    }
                    ```

                    ```bash
                    $ cat input.txt
                    2
                    3
                    acm
                    malform
                    mouse
                    3
                    ack
                    malform
                    mouse

                    $ cat input.txt | ./a.out
                    Ordering is possible.
                    The door cannot be opened.
                    ```

            -   6-17 UVa10562 Undraw the Trees                          UVa10562.cpp
            -   6-18 UVa12171 Sculpture                                 UVa12171.cpp
            -   6-19 UVa1572 Self-Assembly                              UVa1572.cpp
            -   6-20 UVa1599 Ideal Path                                 UVa1599.cpp :hearts: -<

                :   n 个点，m 条边（2<=n<=100000，1<=m<=200000）的无向图，每天
                    边上都涂有一种颜色。求从节点 1 到节点 n 的一条路径，使得经过的
                    边数尽量少，在此前提下，经过边的颜色序列的字典序最小。一对节点间可能有多条边，
                    一条边，可能连接两个相同的结点。输入保证节点 1 可以达到节点 n。颜色为 1~10^^9^^ 的整数。

                    ```cpp
                    // UVa1599 Idea Path
                    // Rujia Liu
                    #include<cstdio>
                    #include<cstring>
                    #include<vector>
                    #include<queue>
                    using namespace std;

                    const int maxn = 100000 + 5;
                    const int INF = 1000000000; // maximal color

                    struct Edge {
                        int u, v, c;
                        Edge(int u=0, int v=0, int c=0):u(u),v(v),c(c) {}
                    };

                    vector<Edge> edges;
                    vector<int> G[maxn];

                    void AddEdge(int u, int v, int c) {
                        edges.push_back(Edge(u, v, c));
                        int idx = edges.size() - 1;
                        G[u].push_back(idx);
                    }

                    int n, vis[maxn];
                    int d[maxn];
                    // reverse bfs to find out the distance from each node to n-1
                    void rev_bfs() {
                        memset(vis, 0, sizeof(vis));
                        d[n-1] = 0;
                        vis[n-1] = true;

                        queue<int> q;
                        q.push(n-1);
                        while(!q.empty()) {
                            int v = q.front(); q.pop();
                            for(int i = 0; i < G[v].size(); i++) {
                                int e = G[v][i];
                                int u = edges[e].v;
                                if(!vis[u]) {
                                    vis[u] = true;
                                    d[u] = d[v] + 1;
                                    q.push(u);
                                }
                            }
                        }
                    }

                    vector<int> ans;

                    // forward bfs to construct the path
                    void bfs() {
                        memset(vis, 0, sizeof(vis));
                        vis[0] = true;
                        ans.clear();

                        vector<int> next;
                        next.push_back(0);
                        for(int i = 0; i < d[0]; i++) {
                            int min_color = INF;
                            for(int j = 0; j < next.size(); j++) {
                                int u = next[j];
                                for(int k = 0; k < G[u].size(); k++) {
                                    int e = G[u][k];
                                    int v = edges[e].v;
                                    if(d[u] == d[v] + 1)
                                        min_color = min(min_color, edges[e].c);
                                }
                            }
                            ans.push_back(min_color);

                            // find out the next vertices of the next phase
                            vector<int> next2;
                            for(int j = 0; j < next.size(); j++) {
                                int u = next[j];
                                for(int k = 0; k < G[u].size(); k++) {
                                    int e = G[u][k];
                                    int v = edges[e].v;
                                    if(d[u] == d[v] + 1 && !vis[v] && edges[e].c == min_color) {
                                        vis[v] = true;
                                        next2.push_back(v);
                                    }
                                }
                            }
                            next = next2;
                        }

                        printf("%d\n", ans.size());
                        printf("%d", ans[0]);
                        for(int i = 1; i < ans.size(); i++) printf(" %d", ans[i]);
                        printf("\n");
                    }

                    int main() {
                        int u, v, c, m;
                        while(scanf("%d%d", &n, &m) == 2) {
                            edges.size();
                            for(int i = 0; i < n; i++) G[i].clear();
                            while(m--) {
                                scanf("%d%d%d", &u, &v, &c);
                                AddEdge(u-1, v-1, c);
                                AddEdge(v-1, u-1, c);
                            }
                            rev_bfs();
                            bfs();
                        }
                        return 0;
                    }
                    ```

            -   6-21 UVa506 System Dependencies                         uva506.cpp
            -   6-22 UVa11853 Paintball                                 UVa11853.cpp

    refs and see also

    -   [九章算法班 - 硅谷顶尖 IT 企业一线工程师直播教学](http://www.jiuzhang.com/course/1/)
    -   [九章算法强化班 - 硅谷顶尖 IT 企业一线工程师直播教学](http://www.jiuzhang.com/course/5/)
    -   [GitHub - soulmachine/acm-cheat-sheet: Acm Cheat Sheet](https://github.com/soulmachine/acm-cheat-sheet)
    -   [《算法竞赛入门经典》中的例题对应的 OJ 题号 · soulmachine/acm-cheat-sheet Wiki · GitHub](https://github.com/soulmachine/acm-cheat-sheet/wiki/%E3%80%8A%E7%AE%97%E6%B3%95%E7%AB%9E%E8%B5%9B%E5%85%A5%E9%97%A8%E7%BB%8F%E5%85%B8%E3%80%8B%E4%B8%AD%E7%9A%84%E4%BE%8B%E9%A2%98%E5%AF%B9%E5%BA%94%E7%9A%84OJ%E9%A2%98%E5%8F%B7)

系统设计班 -<

:   >   怎样设计 Facebook？理解 Google 的三驾马车！

    -   无系统设计经验，或系统设计基础薄弱
    -   现在实习生（Intern）都在面系统设计了你知道么？
    -   希望知道怎样设计 Facebook Messenger? News Feed
    -   希望知道怎样做一个爬虫系统
    -   希望理解 Google 三驾马车
    -   希望了解 NoSQL Database

    :scissors: 8/15/2016, 1:00:00 AM 走进系统设计 & 设计推特 【免费试听】 -<

    :   -   什么是系统设计 What is System Design
        -   系统设计中常见的问题是什么 How we ask System Design in Interview
        -   怎样回答系统设计问题 How to answer System Design Question
        -   系统设计的 4S 分析法 4S in System Design
        -   系统设计的知识点构成 Basic Knowledge of System Design
        -   设计推特 Design a Twitter

    :scissors: 8/21/2016, 1:00:00 AM 数据库系统 Database System -<

    :   通过设计聊天系统 Whatsapp 了解：

        -   用户系统设计
        -   聊天系统的核心设计点
        -   数据库系统的相关知识
        -   NoSQL 与 SQL 数据库的优劣比较与选取标准
        -   一致性哈希算法 Consistent Hashing
        -   分片算法 Sharding

    :scissors: 8/22/2016, 1:00:00 AM 爬虫系统与搜索建议系统 Web Crawler & Google Suggestion -<

    :   通过对爬虫系统设计 (Web Crawler) 与 搜索建议系统设计 (Google Suggestion) 了解如下内容：

        -   多线程
        -   生产者消费者模型
        -   爬虫系统的演化：单线程，多线程，分布式
        -   Trie 结构的原理及应用
        -   如何在系统设计中使用 Trie

    :scissors: 8/28/2016, 1:00:00 AM 分布式文件系统 & 设计查询系统 Google File System & Design Lookup Service -<

    :   以 GFS 为例系统学习 Google File System，并通过一道实战真题 Lookup Service 巩固要点，了解如下内容：

        -   Master  Slave 的设计模式
        -   怎么处理分布式系统中的 failure 和 recovery 的问题.
        -   如何做 replica, check sum 检查
        -   了解 consistent hash 和 sharding 的实际应用

    :scissors: 8/29/2016, 1:00:00 AM, Web System & Design Tiny Url 网站系统设计 & 设计短网址系统 -<

    :   实战真题

        -   What happend if you visit www.google.com?
        -   How to design tiny url?
        -   How to design rate limiter?
        -   How to design data dog?

        关键词：Web, Consistent Hashing, Memcached, Tiny url.

    :scissors: 9/04/2016, 1:00:00 AM, Big Table 原理透析 -<

    :   通过设计分布式数据库系统 Bigtable 了解如下内容：

        -   Big Table 的原理与实现
        -   了解 NoSQL Database 如何进行读写操作的, 以及相应的优化
        -   了解如何建立 index
        -   学习 Bloom Filter 的实现原理

    :scissors: 9/05/2016, 1:00:00 AM, Map Reduce & Design WhatsApp -<

    :   学习 Map Reduce 的应用与原理

        -   了解如何多台机器并行解决算法问题
        -   掌握 Map 和 Reduce 的原理
        -   通过三个题目掌握 MapReduce 算法实现：
            -   WordCount
            -   InvertedIndex
            -   Anagram

        设计聊天系统 Whatsapp

        -   聊天系统中的 Pull vs Push
        -   讲解一种特殊的 Service - Realtime Service

    :scissors: 9/11/2016, 1:00:00 AM, 基于地理位置信息的系统设计 Location Based Service -<

    :   系统学习 LBS 相关系统设计的核心要点：

        -   地理位置信息存储与查询常用算法之 Geohash
        -   如何设计 Yelp
        -   如何设计 Uber
        -   如何设计 Facebook Nearby

    refs and see also

    -   [系统设计班 - 硅谷顶尖 IT 企业一线工程师直播教学](http://www.jiuzhang.com/course/2/)

Programming Pearls -<

:   -   part-1: preliminaries -<

        :   Basics of programming.

            -   column-1: cracking the oyster -<

                :   磁盘排序：对于一个提出的问题，不要未经思考就直接给出答案。
                    要先深入研究问题，搞清楚这个问题的特点，根据这个特点，可能
                    有更好的解决方案。然后用了 bitmap。

                    ```
                    // init
                    for i = [0, n)
                        bit[i] = 0
                    // assign
                    for each i in the input file
                        bit[i] = 1
                    for i = [0, n)
                        if bit[i] == 1
                            write i on the output file
                    ```

                    首先你要找到 the right problem。

                    -   the bitmap data structure：a dense set over a finite domain
                    -   multiple-pass algorithms: 多次读入输入，每次离目标近一点
                    -   a time-space tradeoff and one that isn't
                    -   a simple design：不多不少刚刚好，简单的设计 bug 少
                    -   stages of program design

            -   column-2: aha! alogrithms -<

                :   经典问题：找数字 -<

                    :   给定一个包含 32 位整数的顺序文件 (sequential file)，它至多只能包含 40 亿 (4 billion) 个这样的
                        整数，并且整数的次序是随机的 (in a random order)。请查找一个此文件中不存在的 32
                        位整数。在有足够内存的情况下 (with ample quantities of main memory)，你会如何解决这个问题？如果你
                        可以使用若干外部临时文件但可用主存却只有上百字节，你会如何解决这个问题？

                        -   Given a sequential file that contain at most 4x109
                            integers(32-bit) in random order, find a 32-bit
                            integer that is not in the file.
                        -   How would you solve it with ample main memory?  --
                            bitmap (232 bits)
                        -   or using several external "scratch" files but only
                            a few hundred bytes of main memory? -- binary
                            search 二分查找

                        首先，只是说找一个。其实 missing 的有很多==（因为 32 bit 的整数有 2^32 (4,294,967,296)个，这里只有 4 billion 个数字，肯定有一些数没有。）

                        4 billion 内的数字都可以用 int 来表示，所以用 bitmap 的话，有 2^32 个 bit 就够了，
                        也就是 2^{32}/8 bytes = 2^{32-3=29=9+10+10} bytes = 2^9 MBytes = 512 MBytes.

                        类似二分查找。可以根据某一位（操作时，可以从最高位 到
                        最低位依次处理），把待处理的数据分成两部分。在一部分中，
                        此位为 0，另一部分此位为 1。

                        之后，分别统计落在两个部分的数的个数。（此时我们不考虑数据是否重复）

                        -   如果，没有缺失，那么这两部分数的个数应该是相等的。
                        -   如果，数据有缺失，那么两部分数可能相等，也可能不等
                            -   两部分相等的情况：两段都缺失，但缺失的个数相等
                            -   两部分不等的情况：一个缺一个不缺  或  都缺但缺的个数不同

                    Reverse, n=8, i=3, abcdefgh -> defghabc -<

                    :   ```
                        reverse( 0, i-1 );          // cbadefgh
                        reverse( i, n-1 );          // cbahgfed
                        reverse( 0, n-1 );          // defghabc
                        ```

                        作者还很巧妙的用翻手来解释这个方案。

                        这个 reverse 可以这个写：（两边都是闭区间，`[left, right]`）

                        ```cpp
                        // method 1
                        void reverse( char *str, int start, int end ) {
                            char tmp;
                            int mid = (start + end)/2;
                            for ( int i = start, j = end; i <= mid; ++i, --j ) {
                                tmp = str[i];
                                str[i] = str[j];
                                str[j] = tmp;
                            }
                        }

                        // method 2, I prefer this one
                        void reverse( char *str, int start, int end ) {
                            char tmp;
                            while( start < end ) {
                                tmp         =   str[start];
                                str[start]  =   str[end];
                                str[end]    =   tmp;
                                ++start;
                                --end;
                            }
                        }

                        // 但不管怎样，调用的时候不要把
                        reverse( str, 0, strlen(str)-1 );
                        // 写成
                        reverse( str, 0, strlen(str) );         // 闭区间啊，同学！
                        ```

                    signature 的重要性，pots, stop, tops -<

                    :   找 signature 是最重要的。

                    原则：

                    -   sorting
                    -   binary search
                    -   signatures

                    Problems

                    :   -   翻转句子中单词的顺序，但单词内字符的顺序不变 -<

                            :   句子中单词以空格符隔开。为简单起见，标点符号和普通字母一样处理。

                                方法：先分别对各个单词进行逆转，然后对整个句子进行逆转。

                                I love you. -> I evol .uoy -> you. love I

                                ```cpp
                                #include <stdio.h>
                                #include <string.h>

                                void reverse( char *s, int left, int right ) {
                                    char tmp;
                                    while( left < right ) {
                                        tmp       =  s[left];
                                        s[left]   =  s[right];
                                        s[right]  =  tmp;
                                        ++left;
                                        --right;
                                    }
                                }

                                void solve( char *s ) {
                                    int left = 0, right = 0, len = strlen(s);
                                    while( left < len && right < len ) {
                                        while( s[right] && s[right] != ' ' ) {
                                            ++right;
                                        }
                                        if( !s[right] && left < right-1 ) {
                                            reverse( s, left, right-1 );    // 最后一段
                                            break;
                                        }
                                        reverse( s, left, right-1 );
                                        left = right + 1;                   // 跳过连续空格
                                        while( s[left] == ' ' ) {
                                            ++left;
                                        }
                                        right = left + 1;
                                    }
                                    reverse( s, 0, len-1 );                 // 这个 len-1 千万不能是 len
                                }

                                int main() {
                                    char buf[100];
                                    sprintf( buf, "%s", "I love Sia Furler." );
                                    printf( "before: %s\n", buf );
                                    solve( buf );
                                    printf( "%s\n", buf );
                                }
                                ```

                                `Furler. Sia love I`

                        -   类似手机键盘

                            :   每个数字对应几个字母。按下数字键，就意味着多个
                                字符组合，有关这些字符组合的姓名和手机号就找到。
                                问题，如何实现一个以名字的按键编码为参数，并
                                返回所有可能的匹配名字的函数

                                方法：把名字对应的数字按键形成一个唯一的标识符，
                                值存入数字键对应的名字 `map<int,map<string> > rec;`

                        -   sequential file 里的 4,300,000,000 个 32-bit integers 中找 one that appears at least twice？

            -   column-3: data structures programs -<

                :   `if( k == 500 ) c500++; `……如此蛋疼的代码。

                    信件模板。

                    Principles

                    -   **Don't write a big program when a little one will do.**
                    -   使用数组重新编写重复代码。
                    -   封装复杂结构。
                    -   尽可能使用高级工具。名字-值对，电子表格（二维数组），数
                        据库，特定编程语言的强大的工具。
                    -   从数据得出程序的结构。(**let data structure the program.**)

            -   column-4: writing correct programs -<

                :   Knuth 说，46 年 binary search 的论文出来了，62 年，终于有一个 bug free 的实现==。

                    本章作者主要证明了二分搜索程序的正确性。

                    构造程序的正确性上来先要找到**断言**(assertions)，也
                    就是所谓的【循环不变式】，当然这个在实际程序中，只有靠经验了。找到断言，即可以勾勒
                    出，输入、程序变量和输出之间的关系，使得程序员可以准确阐述这些关系。拿二分来说，
                    就是如果元素 t 在数组中，那么它一定在 range 中。在之后所有的操作都要遵循该不变式。

                    接下来看程序的结构。

                    -   如果是顺序控制结构 (sequential control structures)。则
                        可以通过在语句之间添加断言并分别分析程序执行的每一步。
                    -   如果是选择控制结构 (selection control structures)，则要
                        对每一个分支进行结构的正确性证明。选择每一个分支，使用
                        断言来证明。例如，如果进入了 `if i > j` 的分支，那么我
                        们就可以断言 `i > j` 并且使用这个事实来推倒出下一个断言。
                    -   最麻烦就是迭代控制结构 (iteration control structures)。
                        要证明循环的正确性，就必须为其确立 3 个性质。
                        -   初始化 (initialization)：循环初次执行的时候不变式为真。
                        -   保持 (preservation)：如果在某次迭代开始的时候以及循
                            环体执行的时候，不变式为真，那么循环执行完毕的时候
                            不变式仍然为真。每次迭代都保持该不变式为真。
                        -   终止 (termination)：循环能够终止，并且可以得到预期
                            的结果，而且我们必须用其他方法证明循环一定能终止。
                            就像二分每次范围都在减少，课后习题，豆子每次都在减
                            少一个。

                        对于函数的正确性证明，首先要使用两个断言来陈述目的。

                        -   前置条件：调用该函数之前成立的状态。
                        -   后置条件的正确性由函数在终止时保证。

                        拿二分来说，前置条件是序列有序（二分），后置条件是找没
                        有找到元素，返回位置。

                        如果在前置条件满足情况下调用函数，那么函数的执行将确立
                        后置条件，这就是契约编程。

                        **证明程序的正确性是一门学问，如果违反断言就指明了程序的
                        错误所在。程序状态的断言对理解程序很有帮助。**

                    ```cpp
                    int binary_search( int A[], int n, int target ) {
                        int low = 0, high = n-1;        // 注意不是 n，因为 low 和 high 都是闭区间的端点。
                        int mid;
                        while( low <= high ) {
                            mid = (low+high)/2;
                            if( A[mid] < target ) {
                                low = mid+1;
                            } else if( A[mid] > target ) {
                                high = mid-1;
                            } else {
                                return mid;
                            }
                        }
                        return -1;
                    }
                    ```

            -   column-5: a small matter of programming -<

                :   主要讲解如何保证编程的正确性。在程序中加入断言
                （`assert(断言内容) //如果错误，则终止程序。否则正常执行）`）。

                    一些 debug 技巧？assert 什么的使用，自动化测试。

    -   part-2: performance -<

        :   向性能前进！

            -   column-6: perspective on performance -<

                :   如果要提高软件的性能，需要从下面几个方面入手：

                    -   算法与数据结构
                    -   算法调优
                    -   数据结构重组
                    -   与系统无关的代码的调优（float 取代 double）。
                    -   与系统相关的调优，把经常使用的函数进行加速，比如关键代码使用汇编代替高级语言
                    -   硬件上使用浮点加速器。

            -   column-7: the back of the envelope -<

                :   密西西比河一天流出多少水？

                    **量纲检验**：即在检验几何或物理等式时，我们可以先看看其中的单
                    位在乘除过后是否与原式能保持一致。

                    模 9 法（舍 9 法）：在加法计算当中，加数的数字总和与和数的数字
                    总和模 9 相等。举个例子：3142+2718+1123=6973.
                    （3+1+4+2+2+7+1+8+1+1+2+3）%9=7=（6+9+7+3）%9.

                    72 法则

                    :   “假设以年利率 r% 投资一笔钱 y 年，如果 r×y=72，那么你的投资
                        差不多会翻倍。”比如年利率 6% 投资 1000 美元 12 年，可以得到
                        2012 美元。很有意思～

                        假设一个程序 n=40 时需要 10 秒，并且 n 增加 1，时间就增
                        加 12%，根据 72 法则，每当 n 增加 6，运行时间就加倍，n
                        每增加 60，运行时间就是原来的 1000 倍（n 增加 60，也就
                        是说翻 10 倍，2 的 10 次方是 1024）

                        tip：π秒 = 1 纳世纪秒 = 10^-9 * 100 s = 10^-7 s

                        **一年有 pi * 10^7 秒。**

                        pi×10^^7^^ = 2^^1.65^^×10×10^^6^^ = 2^^1.65+3.3+20^^ = 2^^24.95^^

                        一分钟 等于 60s（2^^5.9^^s），一小时 60^^2^^s（2^11.8^^^s），
                        一天有 60^^2^^×24s（2^^11.8^^2^^4.6^^ = 2^^16.4^^）s。
                        一年就有 2^^16.4×2^^8.5^^ = 2^^24.9^^。

                    安全系数

                    :   作者强调安全性，并且举了一个例子。一个建筑工程师对于桥
                        建筑的破环函数的数学公式不懂（对于桥来说，风力、震动等
                        破环因子都可以通过复杂的数学公式推导出来），于是他设想
                        他的桥会遭受到正常破环的 6 倍。结果是与他同时期建造的桥全
                        部倒塌，只有他的桥屹立不倒。

                        “我们是和 john Roebling(文中的建筑工程师) 一样的工程师么？我很怀疑”

                    Little定律

                    :   Denning 和 Buzen 介绍的 Little 定律“系统中物体的平均数
                        量等于物体离开系统的平均速率和每个物体在系统中停留的平
                        均时间的乘积（并且如果物体离开和进入系统的通体出入流是
                        平衡的，那么离开速率也就是进入速率。）”书中举了个例子，
                        假如你要进入一个火爆的夜总会（美国电影中经常见到），“**这
                        个地方可以容纳约 60 人，每个人在里面逗留的时间大约是 3
                        小时，因此我们进入夜总会的速率大概是每小时 20 人**，现在
                        在队伍中我们前面还有 20 人，也就是说我们要等大约 1 个小
                        时，不如我们回家去读《编程珠玑》吧。”哈哈

                    在进行粗略估算的时候，要切记爱因斯坦的名言：

                    >   任何事都应尽量简单，但不宜过于简单。

            -   column-8: algorithms design techniques -<

                :   [【编程珠玑】第八章 算法设计技术 - 小田的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/tianshuai1111/article/details/7566244)

            -   column-9: code tuning -<

                :   最后，作者讲到，对于代码调优最重要的原则就是尽量少用它。作
                    者从效率的角色、度量工具、设计层面、双刃剑几个方面分析了代
                    码调优的优劣两面性。回归到一点，就是对于一个优秀的程序员，
                    不论是在程序维护，程序可靠性，还是程序的效率方面，都不能只
                    顾一头，而是要尽量做一个综合的评估再根据实际需求进行取舍。

                    [【编程珠玑】第九章 代码调优 - 小田的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/tianshuai1111/article/details/7569326)

            -   column-10: squeezing space -<

                :   [【编程珠玑】第十章 节省空间 - 小田的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/tianshuai1111/article/details/7575563)

                    principles

                    -   the cost of space
                    -   the "hot spot" of space (哪里是耗时最长的？)
                    -   measuring space
                    -   tradeoffs
                    -   work with the environment
                    -   use the right tool fo the job.

    -   part-3 -<

        :   -   column-11: sorting -<

                :   [编程珠玑第十一章----排序 - dazhong159的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/dazhong159/article/details/7793132)

            -   column-12: a sample problem

            -   column-13: searching

            -   column-14: heaps

            -   column-15: strings of pearls

    refs and see also -<

    -   [《编程珠玑》--- 笔记。浏览此文，一窥此书。 - 菜鸟的自留地 - 博客频道 - CSDN.NET](http://blog.csdn.net/yang_yulei/article/details/36068789)
    -   [编程珠玑_第二章_啊哈 算法 - 思考，思考，再思考~ - 博客频道 - CSDN.NET](http://blog.csdn.net/insistgogo/article/details/7749328)
    -   [编程珠玑第四章 - chloe - 博客频道 - CSDN.NET](http://blog.csdn.net/omashion/article/details/11694141){.heart}
    -   [[编程珠玑] 第七章粗略估计](http://www.jimye.com/bian-cheng-zhu-ji-di-qi-zhang-cu-lue-gu-ji/)

VisuAlgo - visualising data structures and algorithms through animation -<

:   -   冒泡排序 -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-17-58-bubble.gif)

            大泡泡飘上去。

    -   选择排序 -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-19-47-select.gif)

            选择一个 pivot 来比。然后更新。

    -   插入排序 -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-22-49-insert.gif)

            左边是排好的，不断把右边没有排好的插入进去。注意移位的时候 i 和 j。

    -   归并排序 -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-24-32-merge.gif)

    -   快排 -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-25-47-quick.gif)

    -   随机快排 -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-26-57-rquick.gif)

    -   计数排序 -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-28-54-count.gif)

    -   基数排序 -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-34-41-radix.gif)

    -   create binary heap -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-45-26-create-binary-heap-Onlgn.gif)

            ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-46-26-create-binary-heap-On.gif)

    -   heap sort -<

        :   ![](http://whudoc.qiniudn.com/2016/2016-08-06_10-52-11-heap-sort.gif)

    -   MISC -<

        :   ![a](http://whudoc.qiniudn.com/2016/2016-08-06_10-58-31-pred.gif)
            ![b](http://whudoc.qiniudn.com/2016/2016-08-06_10-59-12-next.gif)
            ![c](http://whudoc.qiniudn.com/2016/2016-08-06_11-04-07.gif)
            ![d](http://whudoc.qiniudn.com/2016/2016-08-06_11-05-11-avl-balanced.gif)
            ![e](http://whudoc.qiniudn.com/2016/firefox_2016-08-06_11-07-06.png)
            ![f](http://whudoc.qiniudn.com/2016/firefox_2016-08-06_11-07-22.png)
            ![g](http://whudoc.qiniudn.com/2016/firefox_2016-08-06_11-08-17.png)
            ![h](http://whudoc.qiniudn.com/2016/firefox_2016-08-06_11-08-42.png)

    refs and see also

    -   [VisuAlgo - visualising data structures and algorithms through animation](http://visualgo.net/)

Beauty of Programming -<

:   -   ```cpp
        #include <stdio.h>

        int main() {
            int i = 81;
            while( i-- ) {
                if( i/9%3 == i%9%3 ) { continue; }
                printf( "A = %d, B = %d\n", i/9+1, i%9+1 );
            }
        }
        ```

        ```cpp
        #include <stdio.h>

        struct {
            unsigned char a:4;
            unsigned char b:4;
        } i;

        for( i.a = 1; i.a <= 9; ++i.a ) {
            for( i.b = 1; i.b <= 9; ++i.b ) {
                if( i.a%3 != i.b%3 ) {
                    printf( "A = %d, B = %d\n", i.a, i.b );
                }
            }
        }
        ```

    -   XOR

        ```cpp
        #include <stdio.h>

        int main() {
            int A[] = { 1, 2, 1, 3, 8, 8, 3, 9, 0, 9 }; // 0!
            int x = 0;
            for( int i =0; i < sizeof(A)/sizeof(A[0]); ++i ) {
                x ^= A[i]; // communitive rule, xor
            }
            printf( "the missing one is: %d\n", x );
        }
        ```

## 2.

常见 C/C++ 函数 -<

:   -   `size_t strlen( const char *str )`{.cpp} -<

        :   ```cpp
            size_t strlen( const char *str )
            {
                const char *s = str;
                while( *s ) { ++s; }
                return s-str;
            }
            ```

            不要把 `while( *s ) { ++s; }` 写成 `while( *s++ ) { }`

            然而这里却可以把 `++` 写在 while 的判断里面：

            ```cpp
            size_t strlen( const char *str )
            {
                size_t i = 0;
                while( *str++ ) { ++i; }
                return i;
            }
            ```

            函数签名可以在 `man strlen` 或者 `man 3 strlen` 看到。

            或者用 for 循环：

            ```cpp
            size_t strlen( const char *str ) {
                const char *s;
                for ( s = str; *s; ++s ) {}
                return (s - str);
            }
            ```

    -   `char * strcpy( char *to, const char *from )`{.cpp} -<

        :   ```cpp
            char * strcpy( char *to, const char *from  )
            {
                if ( !from && !to ) { return NULL; }
                char *p = to;
                while( (*p++=*from++) != 0 ) { }
                return to;
            }
            ```

            前面的判断似乎多余，因为我们不关心 to 是否有空间以及它原来的内容，
            我们也不需要知道 from 是否为 NULL（如果 NULL，那在 while 里面复制一
            个 NULL 就结束，也是符合预期的。）

    -   `int atoi( const char *str)`{.cpp} -<

        :   ```cpp
            int atoi( const char *str )
            {
                // TODO: handle overflow
                if ( !str ) { return 0; }

                int len = strlen( str );
                int sign = 1;

                const char *p = str;
                while ( *p == ' ' ) {
                    ++p;
                }

                if ( *p == '+' ) { sign = +1; ++p; }
                if ( *p == '-' ) { sign = -1; ++p; }

                int i = 0;
                while( p && '0' <= *p && *p <= '9' ) {
                    i = i * 10 + (*p - '0');
                    ++p;
                }

                return i*sign;
            }
            ```

            ```cpp
            int atoi( const char *str )
            {
                const char *p = str;
                while ( *p == ' ' ) { ++p; }

                int sign = 1;
                if ( *p == '+' ) { sign = +1; ++p; }
                if ( *p == '-' ) { sign = -1; ++p; }

                int num = 0;
                while( '0' <= *p && *p <= '9' ) {
                    // buggy here: -2^31 ~ 2^31-1, it's not symmetric
                    if( num > INT_MAX / 10 || (num == INT_MAX/10 && (*p-'0')>INTMAX%10 ) {
                        return sign == -1 ? INT_MIN : INT_MAX;
                    }
                    num = num * 10 + (*p - '0');
                    ++p;
                }

                return sign*num;
            }
            ```

            see LeetCode String to Integer (atoi), <http://leetcode.com/oldoj#question_8>.

    -   `const char * convert( char buf[], int value )`{.cpp} -<

        :   ```cpp
            #include <iostream>
            #include <algorithm>
            #include <stdio.h>

            const char* convert( char buf[], int value )
            {
                static char digits[19] =
                { '9', '8', '7', '6', '5', '4', '3', '2', '1', '0',
                    '1', '2', '3', '4', '5', '6', '7', '8', '9' };
                static const char *const zero = digits + 9; // zero 指向 '0'
                // works for -2147483648 .. 2147483647
                int i = value;
                char* p = buf;
                do {
                    // lsd - least significant digit
                    int lsd = i % 10; // lsd 可能小于 0
                    // 是向下取整还是向零取整?
                    *p++ = zero[lsd]; // 下标可能为负
                    i /= 10;
                } while (i != 0);
                if (value < 0) {
                    *p++ = '-';
                }
                *p = '\0';
                std::reverse(buf, p);
                return p; // p - buf 即为整数长度
            }

            int main() {
                char buf[50];
                int num;
                while( 1 == scanf( "%d", &num ) ) {
                    convert( buf, num );
                    printf( "%d -> \"%s\"\n", num, buf );
                }
            }
            ```

            上面的代码来自 chenshuo，但我总觉得这 19 个 digits 把事情弄复杂了。
            我的策略是，负数我就把它先转成正数：

            ```cpp
            const char* convert( char buf[], int value )
            {
                if( value < 0 ) {
                    buf[0] = '-';
                    return convert( buf+1, -value );
                }

                static char zero[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

                char* p = buf;
                do {
                    *p++ = zero[value%10];
                    value /= 10;
                } while (value != 0);
                *p = '\0';
                std::reverse(buf, p);
                return p;
            }
            ```

    -   `char * strchr( const char *s, int c )`{.cpp} -<

        :   ```cpp
            char * strchr( const char *s, int c )
            {
                while( *s ) {
                    if( *s == c ) {
                        return s;
                    } else {
                        ++s;
                    }
                }
                return s;
            }
            ```

            目测没有 bug。懒得测了。

    -   `char * strstr( const char *haystack, const char *needle)` -<

        :   ```cpp
            char *strstr(const char *haystack, const char *needle) {
                // if needle is empty return the full string
                if (!*needle) return (char*) haystack;

                const char *p1;
                const char *p2;
                const char *p1_advance = haystack;
                for (p2 = &needle[1]; *p2; ++p2) {
                    p1_advance++;   // advance p1_advance M-1 times
                }

                for (p1 = haystack; *p1_advance; p1_advance++) {
                    char *p1_old = (char*) p1;
                    p2 = needle;
                    while (*p1 && *p2 && *p1 == *p2) {
                        p1++;
                        p2++;
                    }
                    if (!*p2) return p1_old;

                    p1 = p1_old + 1;
                }
                return NULL;
            }
            ```

            see also KMP.

    -   TODO: strncpy, strcmp, strcat -<

        :   ```cpp
            char * __cdecl strcat (char * dst,const char * src)
            {
                char * cp = dst;

                while( *cp )
                    cp++;                   /* find end of dst */

                while( *cp++ = *src++ ) ;       /* Copy src to end of dst */

                return( dst );                  /* return dst */

            }

            int __cdecl strcmp (const char * src,const char * dst)
            {
                int ret = 0 ;

                while( ! (ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst)
                    ++src, ++dst;

                if ( ret < 0 )
                    ret = -1 ;
                else if ( ret > 0 )
                    ret = 1 ;

                return( ret );
            }

            size_t __cdecl strlen (const char * str)
            {
                const char *eos = str;

                while( *eos++ ) ;

                return( (int)(eos - str - 1) );
            }

            char * __cdecl strncat (char * front,const char * back,size_t count)
            {
                char *start = front;

                while (*front++)
                    ;
                front--;

                while (count--)
                    if (!(*front++ = *back++))
                        return(start);

                    *front = '\0';
                    return(start);
            }

            int __cdecl strncmp (const char * first,const char * last,size_t count)
            {
                if (!count)
                    return(0);

                while (--count && *first && *first == *last)
                {
                    first++;
                    last++;
                }

                return( *(unsigned char *)first - *(unsigned char *)last );
            }

            /* Copy SRC to DEST.  */
            char *
            strcpy (dest, src)
            char *dest;
            const char *src;
            {
                reg_char c;
                char *__unbounded s = (char *__unbounded) CHECK_BOUNDS_LOW (src);
                const ptrdiff_t off = CHECK_BOUNDS_LOW (dest) - s - 1;
                size_t n;

                do
                {
                    c = *s++;
                    s[off] = c;
                }
                while (c != '\0');

                n = s - src;
                (void) CHECK_BOUNDS_HIGH (src + n);
                (void) CHECK_BOUNDS_HIGH (dest + n);

                return dest;
            }

            char * __cdecl strncpy (char * dest,const char * source,size_t count)
            {
                char *start = dest;

                while (count && (*dest++ = *source++))    /* copy string */
                    count--;

                if (count)                              /* pad out with zeroes */
                    while (--count)
                        *dest++ = '\0';

                    return(start);
            }
            ```

        refs and see also

        -   [程序员编程艺术：第四章、现场编写类似 strstr/strcpy/strpbrk 的函数 - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_JULY_v/article/details/6417600)

Milo Yip 的博客 :hearts: -<

:   -   [《编程之美: 求二叉树中节点的最大距离》的另一个解法 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/archive/2010/02/25/binary_tree_distance.html) -<

        :   ![](http://pic002.cnblogs.com/img/miloyip/201002/2010022503291293.png)

            书中对这个问题的分析是很清楚的，我尝试用自己的方式简短覆述。

            计算一个二叉树的最大距离有两个情况:

            -   情况 A: 路径经过左子树的最深节点，通过根节点，再到右子树的最深节点。
            -   情况 B: 路径不穿过根节点，而是左子树或右子树的最大距离路径，取其大者。

            只需要计算这两个情况的路径距离，并取其大者，就是该二叉树的最大距离。

            这段代码有几个缺点:

            -   算法加入了侵入式 (intrusive) 的资料 nMaxLeft, nMaxRight
            -   使用了全局变量 nMaxLen。每次使用要额外初始化。而且就算是不同的独立资料，也不能在多个线程使用这个函数
            -   逻辑比较复杂，也有许多 NULL 相关的条件测试。

            我方知道這個「距離」應該是叫「直徑」(**Tree Diameter**)。
            的确是“直径”——在数学中直径的定义是：一个距离空间中任意两点间距离的上确界 (supremum)。

            ```cpp
            #include <iostream>
            using namespace std;

            struct NODE {
                NODE *pLeft;
                NODE *pRight;
            };

            struct RESULT {
                int nMaxDistance;
                int nMaxDepth;
            };

            RESULT GetMaximumDistance(NODE* root) {
                if (!root) {
                    RESULT empty = { 0, -1 };   // trick: nMaxDepth is -1 and then caller will plus 1 to balance it as zero.
                    return empty;
                }

                RESULT lhs = GetMaximumDistance(root->pLeft);
                RESULT rhs = GetMaximumDistance(root->pRight);

                RESULT result = {
                    max(max(lhs.nMaxDistance, rhs.nMaxDistance), lhs.nMaxDepth + rhs.nMaxDepth + 2),
                    max(lhs.nMaxDepth + 1, rhs.nMaxDepth + 1)
                };
                return result;
            }

            void Link(NODE* nodes, int parent, int left, int right) {
                if( left  != -1 ) { nodes[parent].pLeft = &nodes[left]; }
                if( right != -1 ) { nodes[parent].pRight = &nodes[right]; }
            }

            void main() {
                // P. 241 Graph 3-12
                NODE test1[9] = { 0 };
                Link(test1, 0, 1, 2);
                Link(test1, 1, 3, 4);
                Link(test1, 2, 5, 6);
                Link(test1, 3, 7, -1);
                Link(test1, 5, -1, 8);
                cout << "test1: " << GetMaximumDistance(&test1[0]).nMaxDistance << endl;

                // P. 242 Graph 3-13 left
                NODE test2[4] = { 0 };
                Link(test2, 0, 1, 2);
                Link(test2, 1, 3, -1);
                cout << "test2: " << GetMaximumDistance(&test2[0]).nMaxDistance << endl;

                // P. 242 Graph 3-13 right
                NODE test3[9] = { 0 };
                Link(test3, 0, -1, 1);
                Link(test3, 1, 2, 3);
                Link(test3, 2, 4, -1);
                Link(test3, 3, 5, 6);
                Link(test3, 4, 7, -1);
                Link(test3, 5, -1, 8);
                cout << "test3: " << GetMaximumDistance(&test3[0]).nMaxDistance << endl;

                // P. 242 Graph 3-14
                // Same as Graph 3-2, not test

                // P. 243 Graph 3-15
                NODE test4[9] = { 0 };
                Link(test4, 0, 1, 2);
                Link(test4, 1, 3, 4);
                Link(test4, 3, 5, 6);
                Link(test4, 5, 7, -1);
                Link(test4, 6, -1, 8);
                cout << "test4: " << GetMaximumDistance(&test4[0]).nMaxDistance << endl;
            }
            ```

            ```
            test1: 6
            test2: 3
            test3: 6
            test4: 5
            ```

            refs and see also

            -   [Tree Diameter](http://www.cs.duke.edu/courses/spring00/cps100/assign/trees/diameter.html)

    -   [《编程之美：分层遍历二叉树》的另外两个实现 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/archive/2010/05/12/binary_tree_traversal.html) -<

        :   （这篇 post 的内容已经被转入 jiuzhang。）

            ```cpp
            void PrintNodeByLevel(Node* root) {
                 vector<Node *> vec;                                // 这里我们使用 STL 中的 vector 来代替数组，可利用到其动态扩展的属性
                 vec.push_back(root);
                 int cur = 0, last = 1;                             // vec.size(); 就像 iterator，指向 end
                 while( cur < vec.size() ) {
                      last = vec.size();                            // 新的一行访问开始，重新定位 last 于当前行最后一个节点的下一个位置
                      while( cur < last ) {
                           cout << vec[cur] -> data << " ";         // 访问节点
                           if(vec[cur] -> lChild) { vec.push_back(vec[cur] -> lChild); }
                           if(vec[cur] -> rChild) { vec.push_back(vec[cur] -> rChild); }
                           ++cur;
                      }
                      cout << endl;                                 // 当 cur == last 时, 说明该层访问结束，输出换行符
                 }
            }
            ```

            书中没有提及，本问题其实是以广度优先搜索 (breath-first search, BFS)
            去遍历一个树结构。广度优先搜索的典型实现是使用队列 (queue)。其伪代码
            如下:

            ```cpp
            enqueue(Q, root)
            do
                node = dequeue(Q)
                process(node)               // 如把内容列印
                for each child of node
                    enqueue(Q, child)
            while Q is not empty
            ```

            书上的解法，事实上也使用了一个队列。但本人认为，使用 vector 容器，较不直觉，而且其空间复杂度是 O(n)。

            如果用队列去实现 BFS，不处理换行，能简单翻译伪代码为 C++ 代码:

            ```cpp
            void PrintBFS(Node* root) {
                queue<Node*> Q;
                Q.push(root);
                do {
                    Node *node = Q.front(); Q.pop();
                    cout << node->data << " ";
                    if (node->pLeft)  { Q.push(node->pLeft); }
                    if (node->pRight) { Q.push(node->pRight); }
                }
                while (!Q.empty());
            }
            ```

            本人觉得这样的算法实现可能比较清楚，而且空间复杂度只需 O(m)，m 为树中
            最多节点的层的节点数量。最坏的情况是当二叉树为完整，m = n/2。
            之后的难点在于**如何换行**。

            本人的尝试之一 -<

            :   第一个尝试，利用了两个队列，一个储存本层的节点，另一个储存下层
                的节点。遍历本层的节点，把其子代节点排入下层队列。本层遍历完毕后，
                就可换行，并交换两个队列。

                ```cpp
                void PrintNodeByLevel(Node* root) {
                    deque<Node*> Q1, Q2;
                    Q1.push_back(root);
                    do {
                        do {
                            Node* node = Q1.front();
                            Q1.pop_front();
                            cout << node->data << " ";
                            if (node->pLeft)
                                Q2.push_back(node->pLeft);
                            if (node->pRight)
                                Q2.push_back(node->pRight);
                        } while (!Q1.empty());
                        cout << endl;
                        Q1.swap(Q2);
                    } while(!Q1.empty());
                }
                ```

                本实现使用 deque 而不是 queue，因为 deque 才支持 swap() 操作 ( `swap(q1, q2)` )。注意，
                `swap()` 是 `O(1)` 的操作，实际上只是交换指针。

                这实现要用两个循环(书上的实现也是)，并且用了两个队列。能够只用
                一个循环、一个队列么?

            本人的尝试之二

            :   换行问题其实在于如何表达一层的结束。书上采用了游标，而第一个尝试则
                用了两个队列。本人想到第三个可行方案，是把一个结束信号放进队列里。
                由于使用 `queue<Node*>`，可以插入一个空指针去表示一层的遍历结束。

                ```cpp
                void PrintNodeByLevel(Node* root) {
                    queue<Node*> Q;
                    Q.push(root);
                    Q.push(0);      // indicate end of level
                    do {
                        Node* node = Q.front(); Q.pop();
                        if (node) {
                            cout << node->data << " ";
                            if ( node->pLeft  ) { Q.push(node->pLeft); }
                            if ( node->pRight ) { Q.push(node->pRight); }
                        } else if (!Q.empty()) {
                            cout << endl;
                            Q.push(0);
                        }
                    } while (!Q.empty());
                }
                ```

                这个实现的代码很贴近之前的 PrintBFS()，也只有一个循环。注意一点，当
                发现空指针 (结束信号) 时，要检查队列内是否还有节点，如果没有的话还插
                入新的结束信号，则会做成死循环。

            测试代码 -<

            :   ```cpp
                void Link(Node* nodes, int parent, int left, int right) {
                    if (left != -1)
                        nodes[parent].pLeft = &nodes[left];

                    if (right != -1)
                        nodes[parent].pRight = &nodes[right];
                }

                void main()
                {
                    Node test1[9] = { 0 };

                    for (int i = 1; i < 9; i++)
                        test1[i].data = i;

                    Link(test1, 1, 2, 3);
                    Link(test1, 2, 4, 5);
                    Link(test1, 3, 6, -1);
                    Link(test1, 5, 7, 8);

                    PrintBFS(&test1[1]);
                    cout << endl << endl;

                    PrintNodeByLevel(&test1[1]);
                    cout << endl;
                ```

    -   [面试题：检测点是否在扇形之内 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/archive/2013/04/19/3029852.html){.heart}

    -   [怎样判断平面上一个矩形和一个圆形是否有重叠？ - Milo Yip 的回答 - 知乎](https://www.zhihu.com/question/24251545/answer/27184960) -<

        :   ![](https://pic1.zhimg.com/31fcf0a6ba5b5b925d7d82dc5bc8a684_r.jpg)

            ![](https://pic2.zhimg.com/60b09b89d9b4eda3fe9bdb849ec5d5d1_r.jpg)

            最后要比较 u 和 r 的长度，若距离少于 r，则两者相交。可以只求 u 的长度平方是
            否小于 r 的平方。

    -   [两条像面试用的编程问题，和我的囧事 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/archive/2010/03/04/1677902.html) -<

        :   -   设计一个函数 f，使得它满足：f(f(x))=-x，这里输入参数为 32 位整型
            -   设计一个函数 g，满足：g(g(x))=1/x，x 是浮点数

            今天午饭时间就发了以下的错误证明：

            -   假设一个函数 f 存在，x 为 32-bit 整数，f(x)) = -x
            -   设 y = f(x)
            -   f(f(x)) = -x -> f(y) = –x
            -   变换变量, f(y) = -x -> f(x) = -y -> y = -f(x)
            -   y = f(x) = -f(x)

            第 5 步只是当 y=0 才成立，和 f 的值域矛盾，按反证法，函数 f 不存在。

            郑老师指出，只有自由变量 (Free Variable) 才可以置换 (Subsititue)。

            这两问题的难点在于，函数不能储存额外状态。

            我们首先分析问题 (1)，设 y=f(x)，则

            -   f(x) = y
            -   f(y) = -x

            如果再把结果 -x 再应用一次 f 函数，f(-x) = ?

            因为之前 f(y)=-x，而按题目定义，f(f(y))=-y ，所以 f(-x) = -y。我们可以列出:

            -   f(-x) = -y
            -   f(-y) = x

            我们可以发现，4 次函数映射之后，会变成一个循环。也就是说，

            ```
            x → y → –x → –y → x→ ...
            ```

            我们只要把数字分为四类，就可以实现这个循环。x 和 -x 的分别是正负号，我们可以再利用数字的奇偶性，这两个正交属性可以产生 4 个组合。这个循环就可变成

            ```
            正奇→ 正偶→ 负奇→ 负偶→ 正奇→ ...
            ```

            郑老师说他经过几次推敲，得到:

            f(x) = (-1)^^x^^x + sign(x)

            ```cpp
            template<typename t>
            inline T even(T x) {
                return x % 2 == 0 ? -1 : 1;
            }

            template<typename t>
            inline T sgn(T x) {
                if (x > 0)
                    return 1;
                else if (x < 0)
                    return -1;
                else
                    return 0;
            }

            template<typename t>
            struct f1 {
                T operator()(T x) {
                    return even(x) * x + sgn(x);
                }
            };
            ```

            ```cpp
            #include <limits>
            #include <iostream>

            using namespace std;

            template<typename T, typename F>
            void test(F f) {
                cout << "[" << (int)numeric_limits<T>::min() << "," << (int)numeric_limits<T>::max() << "]" << endl;
                T x = numeric_limits<T>::min();
                do {
                    T y = f(f(x));
                    if (y != (T)-x)
                        cout << (int)x << " " << (int)y << endl;
                    x++;
                } while (x != numeric_limits<T>::min());

                cout << endl;
            }

            void main() {
                test<signed char>(f1<signed char>());
                test<signed short>(f1<signed short>());
                test<int>(f1<int>());

                test<signed char>(f2<signed char>());
                test<signed short>(f2<signed short>());
                test<int>(f2<int>());
            }
            ```

            ```
            [-128,127]
            127 127

            [-32768,32767]
            32767 32767

            [-2147483648,2147483647]
            2147483647 2147483647
            ```

            这结果说明，除了 x 为整数的上限时，结果正确。但因为没有额外的状态，相信这个边界问题应该不能解决。

            第二题比较简单，只需要利用 -(-x) = x 的特点，无论 x 为正或负，经过这两次映射，总会有一次为正数，一次为负数。所以可以写一个函数，在 x 为正数时 (或负数时) 计算其倒数:

            ```cpp
            float g(float x) {
                return x > 0 ? -1.0f / x : -x;
            }
            ```

StackOverflow -<

:   -   [logic - What is the optimal algorithm for the game 2048? - Stack Overflow](http://stackoverflow.com/questions/22342854/what-is-the-optimal-algorithm-for-the-game-2048)

    -   [algorithm - What is a plain English explanation of "Big O" notation? - Stack Overflow](http://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)

    -   [c++ - Image Processing: Algorithm Improvement for 'Coca-Cola Can' Recognition - Stack Overflow](http://stackoverflow.com/questions/10168686/image-processing-algorithm-improvement-for-coca-cola-can-recognition) -<

        :   signature scan lines.

    -   [algorithm - What is tail recursion? - Stack Overflow](http://stackoverflow.com/questions/33923/what-is-tail-recursion) -<

        :   ```python
            def recsum(x):
                if x == 1:
                    return x
                else:
                    return x + recsum(x - 1)
            ```

            In traditional recursion, the typical model is that you
            perform your recursive calls first, and then you take the
            return value of the recursive call and calculate the
            result. In this manner, you don't get the result of your
            calculation until you have returned from every recursive
            call.

            In tail recursion, you perform your calculations first, and
            then you execute the recursive call, passing the results of
            your current step to the next recursive step. This results
            in the last statement being in the form of "(return
            (recursive-function params))" (I think that's the syntax
            for Lisp). Basically, the return value of any given
            recursive step is the same as the return value of the next
            recursive call.

            The consequence of this is that once you are ready to
            perform your next recursive step, you don't need the
            current stack frame any more. This allows for some
            optimization. In fact, with an appropriately written
            compiler, you should never have a stack overflow snicker
            with a tail recursive call. Simply reuse the current stack
            frame for the next recursive step. I'm pretty sure Lisp
            does this.

            >   An important point is that tail recursion is essentially equivalent to looping.

    -   [algorithm - Easy interview question got harder: given numbers 1..100, find the missing number(s) - Stack Overflow](http://stackoverflow.com/questions/3492302/easy-interview-question-got-harder-given-numbers-1-100-find-the-missing-numbe){.hearts} -<

        :   [Newton's identities - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Newton%27s_identities#Formulation_in_terms_of_symmetric_polynomials)

    -   [search - Ukkonen's suffix tree algorithm in plain English? - Stack Overflow](http://stackoverflow.com/questions/9452701/ukkonens-suffix-tree-algorithm-in-plain-english)

    -   [algorithm - Find an integer not among four billion given ones - Stack Overflow](http://stackoverflow.com/questions/7153659/find-an-integer-not-among-four-billion-given-ones) -<

        :   >   Given an input file with four billion integers, provide
            >   an algorithm to generate an integer which is not
            >   contained in the file. Assume you have 1 GB memory.
            >   Follow up with what you would do if you have only 10 MB of memory.

            Assuming that "integer" means 32 bits

            :   Having 10 MB of space is more than enough for you to count how many numbers
                there are in the input file with any given 16-bit prefix, for all possible
                16-bit prefixes in one pass through the input file. At least one of the
                buckets will have be hit less than 2^16 times. Do a second pass to find of
                which of the possible numbers in that bucket are used already.

            If it means more than 32 bits, but still of bounded size

            :   Do as above, ignoring all input numbers that happen to fall outside the
                (signed or unsigned; your choice) 32-bit range.

            If "integer" means mathematical integer

            :   Read through the input once and keep track of the largest number length of
                the longest number you've ever seen. When you're done, output the maximum
                plus one a random number that has one more digit. (One of the numbers in
                the file may be a bignum that takes more than 10 MB to represent exactly,
                but if the input is a file, then you can at least represent the length of
                anything that fits in it).

            ```cpp
            #define BITSPERWORD 32
            #define SHIFT 5
            #define MASK 0x1F
            #define N 10000000
            int a[1 + N/BITSPERWORD];

            void set(int i) {        a[i>>SHIFT] |=  (1<<(i & MASK)); }
            void clr(int i) {        a[i>>SHIFT] &= ~(1<<(i & MASK)); }
            int  test(int i){ return a[i>>SHIFT] &   (1<<(i & MASK)); }
            ```

    -   [algorithm - What are the differences between NP, NP-Complete and NP-Hard? - Stack Overflow](http://stackoverflow.com/questions/1857244/what-are-the-differences-between-np-np-complete-and-np-hard) -<

        :   Decision problem
              ~ A problem with a yes or no answer.

            Now, let us define those complexity classes.

            P

            :   P is a complexity class that represents the set of all decision problems
                that can be solved in **polynomial time**. That is, given an instance of the
                problem, the answer yes or no can be decided in polynomial time.

                Example

                Given a graph connected G, can its vertices be coloured using two colours so that no edge is monochromatic?

                Algorithm: start with an arbitrary vertex, color it red and all of its
                neighbours blue and continue. Stop when you run out of vertices or you are
                forced to make an edge have both of its endpoints be the same color.

            NP

            :   NP is a complexity class that represents the set of all decision problems
                for which the instances where the answer is "yes" have proofs that can be
                verified in polynomial time.

                This means that if someone gives us an instance of the problem and a
                certificate (sometimes called a witness) to the answer being yes, we can
                check that it is correct in polynomial time.

                Example

                Integer factorisation is in NP. This is the problem that given integers n
                and m, is there an integer f with 1 < f < m, such that f divides n (f is a
                small factor of n)?

                This is a decision problem because the answers are yes or no. If someone
                hands us an instance of the problem (so they hand us integers n and m) and
                an integer f with 1 < f < m, and claim that f is a factor of n (the
                certificate), we can check the answer in polynomial time by performing the
                division n / f.

            NP-Complete

            :   NP-Complete is a complexity class which represents the set of all problems
                X in NP for which it is possible to reduce any other NP problem Y to X in
                polynomial time.

                Intuitively this means that we can solve Y quickly if we know how to solve
                X quickly. Precisely, Y is reducible to X, if there is a polynomial time
                algorithm f to transform instances y of Y to instances x = f(y) of X in
                polynomial time, with the property that the answer to y is yes, if and only
                if the answer to f(y) is yes.

                Example

                3-SAT. This is the problem wherein we are given a conjunction (ANDs) of
                3-clause disjunctions (ORs), statements of the form

                ```
                (x_v11 OR x_v21 OR x_v31) AND
                (x_v12 OR x_v22 OR x_v32) AND
                ...                       AND
                (x_v1n OR x_v2n OR x_v3n)
                ```

                where each x_vij is a boolean variable or the negation of a variable from a
                finite predefined list (x_1, x_2, ... x_n).

                It can be shown that every NP problem can be reduced to 3-SAT. The proof of
                this is technical and requires use of the technical definition of NP (based
                on non-deterministic Turing machines). This is known as Cook's theorem.

                What makes NP-complete problems important is that if a deterministic
                polynomial time algorithm can be found to solve one of them,
                **every NP problem is solvable in polynomial time** (one problem to rule them all).

            NP-hard

            P = NP

            ```
            ____________________________________________________________
            | Problem Type | Verifiable in P time | Solvable in P time | Increasing Difficulty
            |______________|______________________|____________________|           |
            | P            |        Yes           |        Yes         |           |
            | NP           |        Yes           |     Yes or No *    |           |
            | NP-Complete  |        Yes           |      Unknown       |           |
            | NP-Hard      |     Yes or No **     |      Unknown ***   |           |
            |______________|______________________|____________________|           V
            ```

    -   [algorithm - Big O, how do you calculate/approximate it? - Stack Overflow](http://stackoverflow.com/questions/3255/big-o-how-do-you-calculate-approximate-it)

    -   [algorithm - Calculate distance between two latitude-longitude points? (Haversine formula) - Stack Overflow](http://stackoverflow.com/questions/27928/calculate-distance-between-two-latitude-longitude-points-haversine-formula) -<

        :   ```javascript
            // This script [in Javascript] calculates great-circle distances between the
            // two points – that is, the shortest distance over the earth’s surface – using
            // the ‘Haversine’ formula.
            function getDistanceFromLatLonInKm(lat1,lon1,lat2,lon2) {
                var R = 6371; // Radius of the earth in km
                var dLat = deg2rad(lat2-lat1);  // deg2rad below
                var dLon = deg2rad(lon2-lon1);
                var a =
                    Math.sin(dLat/2) * Math.sin(dLat/2) +
                    Math.cos(deg2rad(lat1)) * Math.cos(deg2rad(lat2)) *
                    Math.sin(dLon/2) * Math.sin(dLon/2)
                    ;
                var c = 2 * Math.atan2(Math.sqrt(a), Math.sqrt(1-a));
                var d = R * c; // Distance in km
                return d;
            }

            function deg2rad(deg) {
                return deg * (Math.PI/180)
            }
            ```

            refs and see also

            -   [Haversine formula - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Haversine_formula)+
            -   [Calculate distance and bearing between two Latitude/Longitude points using haversine formula in JavaScript](http://www.movable-type.co.uk/scripts/latlong.html)

    -   [routing - What algorithms compute directions from point A to point B on a map? - Stack Overflow](http://stackoverflow.com/questions/430142/what-algorithms-compute-directions-from-point-a-to-point-b-on-a-map)

    -   [c# - How to check if a number is a power of 2 - Stack Overflow](http://stackoverflow.com/questions/600293/how-to-check-if-a-number-is-a-power-of-2) -<

        :   `x & (x-1) == 0 ?`, as I expected.

    -   [algorithm - How to code a URL shortener? - Stack Overflow](http://stackoverflow.com/questions/742013/how-to-code-a-url-shortener) -<

        :   -   encode, bijective.
            -   checksum

    -   [Algorithm to return all combinations of k elements from n - Stack Overflow](http://stackoverflow.com/questions/127704/algorithm-to-return-all-combinations-of-k-elements-from-n) -<

        :   chenshuo has a better solution.

    -   [sql - What is the most efficient/elegant way to parse a flat table into a tree? - Stack Overflow](http://stackoverflow.com/questions/192220/what-is-the-most-efficient-elegant-way-to-parse-a-flat-table-into-a-tree)

    -   [algorithm - How to find list of possible words from a letter matrix [Boggle Solver] - Stack Overflow](http://stackoverflow.com/questions/746082/how-to-find-list-of-possible-words-from-a-letter-matrix-boggle-solver)

    -   [c++ - Most effective way for float and double comparison - Stack Overflow](http://stackoverflow.com/questions/17333/most-effective-way-for-float-and-double-comparison)

    -   [algorithm - Getting the closest string match - Stack Overflow](http://stackoverflow.com/questions/5859561/getting-the-closest-string-match) -<

        :   -   [Levenshtein distance - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Levenshtein_distance)


    -   [c - Why doesn't GCC optimize a*a*a*a*a*a to (a*a*a)*(a*a*a)? - Stack Overflow](http://stackoverflow.com/questions/6430448/why-doesnt-gcc-optimize-aaaaaa-to-aaaaaa) -<

        :   Because Floating Point Math is not Associative. The way
            you group the operands in floating point multiplication
            has an effect on the numerical accuracy of the answer.

            As a result, most compilers are very conservative about
            reordering floating point calculations unless they can
            be sure that the answer will stay the same, or unless
            you tell them you don't care about numerical accuracy.
            For example: the `-fassociative-math` option of gcc which
            allows gcc to reassociate floating point operations, or
            even the `-ffast-math` option which allows even more
            aggressive tradeoffs of accuracy against speed.

            Another similar case: most compilers won't optimize a +
            b + c + d to (a + b) + (c + d) (this is an optimization
            since the second expression can be pipelined better)
            and evaluate it as given (i.e. as (((a + b) + c) + d)).
            This too is because of corner cases:

            ```cpp
            #include <stdio.h>

            int main() {
                float a = 1e35, b = 1e-5, c = -1e35, d = 1e-5;
                printf("%e %e\n", a + b + c + d, (a + b) + (c + d)); // 1.000000e-05 0.000000e+00
            }
            ```

            [What Every Computer Scientist Should Know About Floating-Point Arithmetic](http://docs.oracle.com/cd/E19957-01/806-3568/ncg_goldberg.html)

    -   [c - Divide a number by 3 without using `*`, `/`, `+`, `-,` `%` operators - Stack Overflow](http://stackoverflow.com/questions/11694546/divide-a-number-by-3-without-using-operators) -<

        :   ```cpp
            // replaces the + operator
            int add(int x, int y) {
                while(x) {
                    int t = (x & y) <<1;
                    y ^= x;
                    x = t;
                }
                return y;
            }

            int divideby3 (int num) {
                int sum = 0;
                while (num > 3) {
                    sum = add(num >> 2, sum);
                    num = add(num >> 2, num & 3);
                }
                if (num == 3)
                    sum = add(sum, 1);
                return sum;
            }
            ```

            As Jim commented this works because:

            -   n = 4 * a + b
            -   n / 3 = a + (a + b) / 3
            -   So sum += a, n = a + b, and iterate
            -   When a == 0 (n < 4), sum += floor(n / 3); i.e. 1, if n == 3, else 0

    -   [How do you set, clear and toggle a single bit in C/C++? - Stack Overflow](http://stackoverflow.com/questions/47981/how-do-you-set-clear-and-toggle-a-single-bit-in-c-c) -<

        :   -   set a bit: `number |= 1 << x;`
            -   clear a bit: `number &= ~(1 << x);`
            -   toggle a bit: `number ^= 1 << x;`
            -   checking a bit: `bit = (number >> x) & 1;`
            -   changing the nth bit to x: `number ^= (-x ^ number) & (1 << n);`

    -   [In C++ source, what is the effect of extern "C"? - Stack Overflow](http://stackoverflow.com/questions/1041866/in-c-source-what-is-the-effect-of-extern-c)

    -   [c - How to initialize all members of an array to the same value - Stack Overflow](http://stackoverflow.com/questions/201101/how-to-initialize-all-members-of-an-array-to-the-same-value) -<

        :   refs and see also

            -   [不要被别人的 memset(buf, -1, sizeof(buf)) 迷惑了 · Issue #2 · district10/notes · GitHub](https://github.com/district10/notes/issues/2)

    -   [Why use apparently meaningless do-while and if-else statements in C/C++ macros? - Stack Overflow](http://stackoverflow.com/questions/154136/why-use-apparently-meaningless-do-while-and-if-else-statements-in-c-c-macros)

    -   [c++ - std::next_permutation Implementation Explanation - Stack Overflow](http://stackoverflow.com/questions/11483060/stdnext-permutation-implementation-explanation)

    -   [how to find the intersection of two std:set in C++? - Stack Overflow](http://stackoverflow.com/questions/13448064/how-to-find-the-intersection-of-two-stdset-in-c)

    -   [c++ - Why are std::shuffle methods being deprecated in C++14? - Stack Overflow](http://stackoverflow.com/questions/22600100/why-are-stdshuffle-methods-being-deprecated-in-c14)

    -   [c++ - Composability of STL algorithms - Stack Overflow](http://stackoverflow.com/questions/6743093/composability-of-stl-algorithms)

    -   [C++ <algorithm> implementation explained - Stack Overflow](http://stackoverflow.com/questions/17663449/c-algorithm-implementation-explained)

    -   [c++ - std::copy n elements or to the end - Stack Overflow](http://stackoverflow.com/questions/26119212/stdcopy-n-elements-or-to-the-end)

[Adoo's blog - Introduction to Algorithm -third edition](http://www.roading.org/category/introduction-to-algorithm-third-edition.html) -<

:   [算法导论——平摊分析](http://www.roading.org//algorithm/introductiontoalgorithm/%e7%ae%97%e6%b3%95%e5%af%bc%e8%ae%ba%e5%b9%b3%e6%91%8a%e5%88%86%e6%9e%90.html)

    [赫夫曼编码](http://www.roading.org//algorithm/introductiontoalgorithm/%e7%ae%97%e6%b3%95%e5%af%bc%e8%ae%ba%e8%b5%ab%e5%a4%ab%e6%9b%bc%e7%bc%96%e7%a0%81.html) -<

    :   ![](http://www.roading.org/images/2012-03/image_thumb22.png)

        赫夫曼编码的正确性

        证明赫夫曼编码的正确性需证明贪心算法的两要素：

        -   具有最优子结构
        -   贪心选择性质

    [《算法导论》笔记汇总](http://www.roading.org//algorithm/introductiontoalgorithm/%e7%ae%97%e6%b3%95%e5%af%bc%e8%ae%ba%e7%b4%a2%e5%bc%95%e8%a1%a8.html) -<

    :   [仿STL 的二叉搜索树的C++实现](http://www.roading.org//algorithm/introductiontoalgorithm/%e4%bb%bfstl-%e7%9a%84%e4%ba%8c%e5%8f%89%e6%90%9c%e7%b4%a2%e6%a0%91%e7%9a%84c%e5%ae%9e%e7%8e%b0.html)

        [扩展数据结构](http://www.roading.org//algorithm/introductiontoalgorithm/%e6%89%a9%e5%b1%95%e6%95%b0%e6%8d%ae%e7%bb%93%e6%9e%84.html)

        [C++实现红黑树，仿STL封装](http://www.roading.org//algorithm/introductiontoalgorithm/c%e5%ae%9e%e7%8e%b0%e7%ba%a2%e9%bb%91%e6%a0%91%ef%bc%8c%e4%bb%bfstl%e5%b0%81%e8%a3%85.html)

        [Chapter 13 Red-Black trees (红黑树)](http://www.roading.org//algorithm/introductiontoalgorithm/chapter-13-red-black-trees-%e7%ba%a2%e9%bb%91%e6%a0%91.html)

        [Radix Tree 基数树](http://www.roading.org//algorithm/introductiontoalgorithm/radix-tree-%e5%9f%ba%e6%95%b0%e6%a0%91.html)

        [算法导论6-3 young tableaus](http://www.roading.org//algorithm/introductiontoalgorithm/%e7%ae%97%e6%b3%95%e5%af%bc%e8%ae%ba6-3-young-tableaus.html)

        [哈希表（1）](http://www.roading.org//algorithm/introductiontoalgorithm/%e5%93%88%e5%b8%8c%e8%a1%a8%ef%bc%881%ef%bc%89.html)


        [快速排序及C++实现](http://www.roading.org//algorithm/introductiontoalgorithm/%e7%ac%ac%e4%b8%83%e7%ab%a0%ef%bc%881%ef%bc%89-%e5%bf%ab%e9%80%9f%e6%8e%92%e5%ba%8f.html)

        [利用堆来建立优先级队列](http://www.roading.org//algorithm/introductiontoalgorithm/%e5%88%a9%e7%94%a8%e5%a0%86%e6%9d%a5%e5%bb%ba%e7%ab%8b%e4%bc%98%e5%85%88%e7%ba%a7%e9%98%9f%e5%88%97.html)

        [排序之插入排序与合并排序-C++实现](http://www.roading.org//algorithm/introductiontoalgorithm/%e6%8f%92%e5%85%a5%e6%8e%92%e5%ba%8f-insertionsort-c%e5%ae%9e%e7%8e%b0.html)

    -   《DPV -- Algorithm》 -<

        :   [算法之美（Algorithms）书评](https://book.douban.com/review/1325850/)

            :   算法作为一门学问，有两条正交的线索。一个是算法处理的对象：数、矩阵、
                集合、串 (strings)、排列 (permutations)、图 (graphs)、表达式
                (formula)、分布(distributions)，等等。另一个是算法的设计思想：贪婪、
                分治、动态规划、线性规划、局部搜索 (local search)，等等。这两条线索
                几乎是相互独立的：同一个离散对象，例如图，稍有不同的问题，例如
                single-source shortest path和all-pair shortest path，就可以用到不同
                的设计思想，如贪婪和动态规划；而完全不同的离散对象上的问题，例如排
                序和整数乘法，也许就会用到相同的思想，例如分治。

    -   《The Algorithm Design Manual》 -<

        :   [Skiena's Audio Lectures](http://www3.cs.stonybrook.edu/~algorith/video-lectures/)

            [不愧对“手册”之名，即使通读过CLRS再读也有所收获（算法设计手册）书评](https://book.douban.com/review/6250350/)

[Dijkstra's algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)

-   [Sorting algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Sorting_algorithm)
-   [Heap · Data Structure and Algorithm notes](http://algorithm.yuanbin.me/zh-hans/basics_data_structure/heap.html)

[程序员面试、算法研究、编程艺术、红黑树、数据挖掘5大系列集锦 - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_july_v/article/details/6543438) -<

:   [横空出世，席卷互联网--评微软等公司数据结构+算法面试100题 - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_JULY_v/article/details/6015165)

    [九月十月百度，迅雷，华为，阿里巴巴笔试面试六十题(第411~470题) - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_july_v/article/details/11921021)

    [五大常用算法：分治、动态规划、贪心、回溯和分支界定 - yapian8的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/yapian8/article/details/28240973)

    授人以鱼，不如授之以渔，何况自己都忘了，建议去看 sedgewick 的《算法》第四版平衡搜索树和红黑树部分，讲得非常清晰。

    -   [Zenefits电面真题 & 解析 - 九章算法 - 知乎专栏](https://zhuanlan.zhihu.com/p/20348386?refer=jiuzhang)
    -   [Red–black tree - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
    -   [Sorting algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Sorting_algorithm)
    -   [cirosantilli/algorithm-cheat: Algorithm tutorials and simple implementations with unit tests.](https://github.com/cirosantilli/algorithm-cheat)
    -   [4ker/aoapc-book: Automatically exported from code.google.com/p/aoapc-book](https://github.com/4ker/aoapc-book)
    -   [4ker/ppearls: Programming Pearls Prep work](https://github.com/4ker/ppearls)
    -   [4ker/programming_pearls: the codes of "programming pearls(2nd edition)"](https://github.com/4ker/programming_pearls)

    [红黑树并没有我们想象的那么难(上) - 捣乱小子](http://daoluan.net/%E6%95%B0%E6%8D%AE%E7%BB%93%E6%9E%84/%E7%AE%97%E6%B3%95/2013/09/25/rbtree-is-not-difficult.html)

    [红黑树并没有我们想象的那么难(下) - 捣乱小子](http://daoluan.net/%E5%AD%A6%E4%B9%A0%E6%80%BB%E7%BB%93/%E6%95%B0%E6%8D%AE%E7%BB%93%E6%9E%84/%E7%AE%97%E6%B3%95/2013/09/28/rbtree-is-not-difficult-2.html)

    [Red–black tree - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)

    [排序（一）归并、快排、优先队列等（图文详解） - 菜鸟的自留地 - 博客频道 - CSDN.NET](http://blog.csdn.net/yang_yulei/article/details/27237641)

    [排序（二）键索引、桶排序、位示图、败者树等（图文详解--败者树） - 菜鸟的自留地 - 博客频道 - CSDN.NET](http://blog.csdn.net/yang_yulei/article/details/27237809)

Code Reading -<

:   [4ker/Lua-Source-Internal: Lua source internal](https://github.com/4ker/Lua-Source-Internal)

    [libevent 源码深度剖析一 - sparkliang 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/sparkliang/article/details/4957667)

    [libevent 源码深度剖析二 - sparkliang 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/sparkliang/article/details/4957744)

    [daoluan/decode-memcached: memcached 源码剖析注释](https://github.com/daoluan/decode-memcached)

[ACM 题集以及各种总结大全！ - 枯槐树下乘凉 - 博客频道 - CSDN.NET](http://blog.csdn.net/kuhuaishuxia/article/details/52254209)

[LeetCode solutions | MaskRay](http://maskray.me/blog/2014-06-29-leetcode-solutions)

 [《挑战程序设计竞赛(第2版)》-码农场](http://www.hankcs.com/tag/%e3%80%8a%e6%8c%91%e6%88%98%e7%a8%8b%e5%ba%8f%e8%ae%be%e8%ae%a1%e7%ab%9e%e8%b5%9b%e7%ac%ac2%e7%89%88%e3%80%8b/)
