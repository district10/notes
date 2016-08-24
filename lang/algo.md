---
title: Algorithms
...

Algorithms
==========

![](http://whudoc.qiniudn.com/ascii.png)

## 0.

[我的算法学习之路 - Lucida](http://lucida.me/blog/on-learning-algorithms/) -<

:   基友在人人发百度实习内推贴，当时自我感觉牛逼闪闪放光芒，于是就抱着看看国内 IT 环
    境 + 虐虐面试官的变态心理投了简历，结果在第一面就自己的师兄爆出翔：他让我写一个
    stof（字符串转浮点数），我磨磨唧唧半天也没写出完整实现，之后回到宿舍赶快写了一
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

    **编程珠玑**&更多的编程珠玑

    没听说过这两本书请自行面壁。前者偏算法理论，后者偏算法轶事，前者提升能力，
    后者增长谈资，都值得一读。

    证明简单代码段的正确性是一个很神奇的技能——因为面试时大多数公司都会要求在纸上写
    一段代码，然后面试官检查这段代码，如果你能够自己证明自己写的代码是正确的，面试
    官还能挑剔什么呢？

    之后就是各种面试，详情见之前的博客，总之就是**项目经历**、**纸上代码**加**正确
    性证明**这三板斧，摧枯拉朽。

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

    -   编码：考察面试者的编码能力，一般要求面试者在 20 ~ 30 分钟之内编写一段需
        求明确的小程序（例：编写一个函数划分一个整形数组，把负数放在左边，零放
        在中间，正数放在右边）；
    -   设计：考察面试者的设计/表达能力，一般要求面试者在 30 分钟左右内给出一个
        系统的大致设计（例：设计一个类似微博的系统）
    -   项目：考察面试者的设计/表达能力以及其简历的真实度（例：描述你做过的 xxx
        系统中的难点，以及你是如何克服这些难点）
    -   脑筋急转弯：考察面试者的『反应/智力』（例：如果你变成蚂蚁大小然后被扔进
        一个搅拌机里，你将如何脱身？）
    -   查漏：考察面试者对某种技术的熟练度（例：Java 的基本类型有几种？）

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

                以 数组最大子序列和 为例，它有一个很显然的 O(n3) 解法，将 O(n3)
                解法稍加改动可以得到 O(n2) 解法，利用分治思想，可以得到
                O(n*logn) 解法，除此之外它还有一个 o(n) 解法。（编程珠玑 和 数
                据结构与算法分析 C 语言描述 对这道题均有非常精彩的描述，有兴趣的
                朋友可以自行阅读）

        -   考察点明确

        -   延伸问题

            :   良好的编程问题应拥有延伸问题。延伸问题既可以应对面试者背题的情
                况，也可以渐进的（Incremental）考察面试者的编程能力，同时还保证
                了面试的延续性（Continuity）。

    如何进行白板编程（HOW）

    :   面试者应该做什么

        -   面试前

            -   拥有扎实的数据结构/算法基础
            -   知道如何利用 前条件/不变式/后条件 这些工具编写正确的程序
            -   能够在白板（或纸上）实现基本的数据结构和算法（如果 1 和 2 做到
                这一步是水到渠成）
            -   在 leetcode 或 careercup 上面进行过练习，了解常见的技术面试题目
                （我个人不鼓励刷题，但在面试前建立起对面试题的『感觉』非常重要）

        -   面试中

            -   理解题目，确认需求

            -   使用实例数据验证自己的程序 -<

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
    |   惊动中原第一高手（简历/面试得到赏识）；
    |   海上决战名扬天下（得到Offer搞定工作）。

## 1.

[九章算法班 - 硅谷顶尖 IT 企业一线工程师直播教学](http://www.jiuzhang.com/course/1/) -<

:   我当然没有报这个班，但从这个列表，可以制定自己的复习内容。

    -   无算法基础，或算法基础薄弱，不系统
    -   希望求职 Facebook, Google, Linkedin, Airbnb, Uber 等硅谷知名企业
    -   面试经验少或无面试经验，不知道与面试官如何正确的沟通和展现自己
    -   网上练习题目那么多，不知道该从哪些题开始准备
    -   获取最新面试动向
    -   认识一起找工作的其他小伙伴

    2016/7/31 上午9:30:00 1. Introducing Algorithm Interview && Coding Style【免费试听】 -<

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

                从面试者的角度来说，出题的目的？

                还可以用牛逼闪闪的 KMP 算法。参考 [从头到尾彻底理解KMP（2014年8
                月22日版） - 结构之法 算法之道 - 博客频道 -
                CSDN.NET](http://blog.csdn.net/v_july_v/article/details/7041827)。

                [字符串匹配的 KMP 算法 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2013/05/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm.html){.heart} -<

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

                思路：

                #.  可以用 bitmap
                #.  可以排序，然后用 i，j 来判断。

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

        -   面试常见问题答疑

        -   refs and see also -<

            :   -   [程序员编程艺术：第四章、现场编写类似 strstr/strcpy/strpbrk 的函数 - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_JULY_v/article/details/6417600)

    2016/8/6 上午9:30:00 2. 二分搜索 Binary Search -<

    :   -   学习 Binary Search 的通用模板，不再死循环 -<

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
                    ```

                    但其实……怎么 round 是无所谓的。我这里只是让自己感受一下 mid
                    的位置。面试的时候可以快速的找到中点（而不是用 index 算）。

        -   讲解 Search in Rotated Sorted Array 等 5-7 道高频二分搜索题 -<

            :   -   [33. Search in Rotated Sorted Array | LeetCode OJ](https://leetcode.com/problems/search-in-rotated-sorted-array/) -<

                    :   ![](http://whudoc.qiniudn.com/2016/20141025161730953.png)

                        图片来自：[【LeetCode】Search in Rotated Sorted Array
                        解题报告 - 跳出温水的青蛙 - 博客频道 -
                        CSDN.NET](http://blog.csdn.net/ljiabin/article/details/40453607)。
                        chenhao 的代码实在……我没看懂。我的代码如下，已经通过了：

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

                -   [81. Search in Rotated Sorted Array II | LeetCode OJ](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) -<

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

                -   [153. Find Minimum in Rotated Sorted Array | LeetCode OJ](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) -<

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

                -   [154. Find Minimum in Rotated Sorted Array II | LeetCode OJ](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/) -<

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

                -   [108. Convert Sorted Array to Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/){#lc108} -<

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

                        还有一个解答，见 [leetcode #108 answer 2](#lc108a2)

                        [109. Convert Sorted List to Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)

                        和这个类似，我加了一层转换就 pass 了：

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

        -   refs and see also -<

            :   -   [Binary search algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Binary_search_algorithm)

    2016/8/7 上午9:30:00 3. 二叉树问题与分治算法 Binary Tree & Divide Conquer -<

    :   -   二叉树的深度优先遍历 Binary Tree DFS Traversal -<

            :   -   先序 / 中序 / 后序 Preorder / inorder / postorder -<

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

                                ```cpp
                                void traversal( TreeNode *root, vector<int> &result ) {
                                    if( !root ) { return; }

                                    // 如果先序
                                    result.push_back( root->val );
                                    traversal( root->left,  result );
                                    traversal( root->right, result );

                                    // 中序和后序只是调整一下位置
                                }
                                ```

                        -   先序遍历 -<

                            :   -   用栈 -<

                                    :   ```
                                        ==while( !empty ) { visit(pop), push(right), push(left); }==

                                        1.  push root
                                        2.  while   !empty

                                                    i.      pop one
                                                    ii.     visit it
                                                    iii.    push right if has right
                                                    iv.     push left  if has left
                                        ```

                                        ```cpp
                                        // Time: O(n), Space: O(n)
                                        vector<int> preorderTravesal( TreeNode *root ) {
                                            vector<int> result;
                                            stack<const TreeNode *> s;
                                            // 以后 if( root != nullptr ) 一律写成 if( root )。更简洁清晰
                                            if( root ) { s.push(root); }
                                            while( !s.empty() ) {
                                                const TreeNode *p = s.top();
                                                s.pop();
                                                result.push_back( p->val );

                                                if( p->right ) { s.push( p->right); }   // 这里不要疏忽了
                                                if( p->left  ) { s.push( p->left ); }
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
                                            stack<const TreeNode *> s;
                                            const TreeNode *p = root;
                                            while( !s.empty() || p ) {
                                                if( p ) {
                                                    s.push( p );                    // 计划处理 p（当前）
                                                    p = p->left;                    // 但先处理左节点
                                                } else {
                                                    p = s.top();                    // 处理 p（当前），它的左子树已经处理完了~
                                                    s.pop();
                                                    result.push_back( p->val );
                                                    p = p->right;                   // 然后移到右边
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

                                    :   ```
                                        =do { while {}  } while;=

                                        【思路】

                                                  Root    第一件事，从 root 到 leaf (left leaf) 一路 push 入栈，
                                                   /      结果是从 root 移到了虚无之中。
                                                  /
                                                 /
                                               leaf       额，那就 pop 咯。

                                               popped     对于这个 popped 出来的节点，它的 right 存在且没有处理过？
                                                  \       1.  那再把它 push！然后把 right 当成 root 继续处理。
                                                   \      2.  没有右边，那就是左右都处理完了，于是处理 popped。
                                                    ?

                                        ```

                                        tested, orig by chenhao:

                                        ```cpp
                                        vector<int> postorderTraversal( TreeNode *root ) {
                                            vector<int> ret;
                                            stack<TreeNode *> s;
                                            if( root ) { s.push( root ); }
                                            while( !s.empty() ) {
                                                TreeNode *n = s.top(); s.pop();
                                                ret.push_back( n->val );
                                                if( n->left ){ s.push( n->left ); }
                                                if( n->right ){ s.push( n->right ); }
                                            }
                                            std::reverse( ret.begin(), ret.end() );  // the trick
                                            return ret;
                                        }
                                        ```

                                        ```cpp
                                        vector<int> postorderTraversal( TreeNode *root ) {
                                            vector<int> ret;
                                            stack<const TreeNode *> s;
                                            const TreeNode *cur = root, *pre = nullptr;
                                            while( !s.empty() || cur ) {
                                                if( cur ) {              // keep going the left
                                                    s.push( cur );
                                                    cur = cur->left;
                                                } else {
                                                    const TreeNode *n = s.top();
                                                    // left way is finsised, keep going to the right way
                                                    if( n->right && n->right != pre ) {
                                                        cur = n->right;
                                                    } else {
                                                        // both left and right has been accessed.
                                                        ret.push_back( n->val );
                                                        pre = n; s.pop();
                                                    }
                                                }
                                            }
                                            return ret;
                                        }
                                        ```

                                        refs and see also

                                        -   [Tree traversal - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Tree_traversal)

                                -   Moris -<

                                    :   ```cpp
                                        null
                                        ```

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
                                    if( n < 0 ) { return 1.0 / pow( x, -n); }
                                    if( n == 0 ) { return 1; }
                                    double v = pow( x, n/2 );
                                    if( n%2 == 0 ) {
                                        return v * v;
                                    } else {
                                        return v * v * x;
                                    }
                                    // 写成 return n%2 ? v*v*x : v*v; 似乎没必要
                                    // （毕竟这个算法本来不长）
                                }
                                ```

                        -   sqrt(x) -<

                            :   ```cpp
                                int sqrt( int x ) {
                                    int left = 1, right = x / 2 + 1;
                                    int mid;
                                    if( x < 2 ) { return x; } // ?<0->..., 0->0, 1->1
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

                        -   refs and see also -<

                            :   -   [Divide and conquer algorithms - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Divide_and_conquer_algorithms)

                -   DFS 模板 Introduce DFS Template -<

                    :   DFS (depth-first search) 是深搜。

                        ```cpp
                        void dfs( type &input, type &path, type &result, int cur or gap ) {
                            if( 数据非法 ) { return 0; }            // 终止条件
                            if( cur == input.size() ) {
                                将 path 放入 result
                            }
                            if( 可以剪纸 ) { return; }
                            for( ... ) {    // 执行所有可能的扩展动作
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

            :   -   BFS 模板 Introduce BFS template -<

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
                                        result.push_back( vector<int>() );
                                        // 似乎也可以用 resize( level );
                                    }
                                    result[level-1].push_back( root->val );
                                    traverse( root->left,   level+1, result );
                                    traverse( root->right,  level+1, result );
                                }
                                ```

                        -   迭代版本 -<

                            :   ```cpp
                                // Time: O(n), Space: O(1)
                                vector<vector<int> > levelOrder( TreeNode *root ) {
                                    vector<vector<int> > result;
                                    queue<const TreeNode *> current, next;
                                    if( !root ) {
                                        return result;
                                    } else {
                                        current.push( root );
                                    }

                                    while( !current.empty() ) {
                                        vector<int> level;
                                        while( !current.empty() ) {
                                            TreeNode *node = current.front();
                                            current.pop();
                                            level.push_back( node->val );
                                            if( node->left  ) { next.push( node->left  ); }
                                            if( node->right ) { next.push( node->right ); }
                                        }
                                        result.push_back( level );
                                        swap( next, current );
                                    }
                                    return result;
                                }
                                ```

                -   refs and see also -<

                    :   -   [Breadth-First Traversal of a Tree](https://www.cs.bu.edu/teaching/c/tree/breadth-first/)
                        -   [Stack-based breadth-first search tree traversal](http://www.ibm.com/developerworks/aix/library/au-aix-stack-tree-traversal/index.html)

        -   二叉搜索树 Binary Search Tree -<

            :   -   What is BST -<

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

                -   [Unique Binary Search Trees | LeetCode OJ](https://leetcode.com/problems/unique-binary-search-trees/) -<

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

                        数组为 1, 2, ... 以 i 为根节点的树，左子树由 `[i, i-1]` 构成，右子树为 `[i+1, n]` 构成。

                        ```
                        f(2) =  f(0) * f(1),    1 为根的情况
                             +  f(1) * f(0),    2 为根

                        f(3) =  f(0) * f(2),    1 为根
                             +  f(1) * f(1),    2 为根
                             +  f(2) * f(0),    3 为根
                        ```

                        递推公式为 `f(i) = sum{ f(k-1)*f(i-k) } for k = 0..i`，这是一个一维动态规划。

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

                -   [Validate Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/validate-binary-search-tree/) -<

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

                -   [Convert Sorted Array to Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/){#lc108a2} -<

                    :   Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

                        这道题在本笔记 [leetcode #108](#lc108) 也有。思路是一样的，不过那边更直白。

                        ```cpp
                        TreeNode * sortedArrayToBST( vector<int> &nums ) {
                            return sortedArrayToBST( nums.begin(), nums.end() );
                        }
                        template<typename RandomAccessIterator>
                        TreeNode * sortedArrayToBST(
                            RandomAccessIterator first,
                            RandomAccessIterator last
                        ) {
                            const auto length = distance( first, last );
                            if( length <= 0 ) { return nullptr; }
                            auto mid = first + length/2;
                            TreeNode *root = new TreeNode( *mid );
                            root->left = sortedArrayToBST( first, mid );
                            root->right = sortedArrayToBST( mid+1, last );
                            return root;
                        }
                        ```

                        refs and see also

                        -   [Convert Sorted Array to Balanced Binary Search Tree (BST) – LeetCode](http://articles.leetcode.com/convert-sorted-array-into-balanced)

                -   [Convert Sorted List to Binary Search Tree | LeetCode OJ](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/) -<

                    :   这里和上面不同的是，list 不能随机存取。最省力的方法是，先把 list 转成 array……

                        不用这种化归的偷懒策略，有两种思路：

                        -   分治法，自顶向下 O(n^2)，O(logn)
                        -   自底向上 O(n)，O(logn)

                        refs and see also

                        -   [Convert Sorted List to Balanced Binary Search Tree (BST) – LeetCode](http://articles.leetcode.com/convert-sorted-list-to-balanced-binary/)

                -   refs and see also -<

                    :   -   [Binary Trees](http://cslibrary.stanford.edu/110/BinaryTrees.html)
                        -   [Binary search tree - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Binary_search_tree)

    2016/8/13 上午9:30:00 4. 动态规划 Dynamic Programming I -<

    :   -   [什么是动态规划？动态规划的意义是什么？ - 知乎](https://www.zhihu.com/question/23995189) -<

            :   动态规划中递推式的求解方法不是动态规划的本质。

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

                :   -   “缓存”，“重叠子问题”，“记忆化”： -<

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

                这个性质叫做**最优子结构**；

                >   而不管之前这个状态是如何得到的

                这个性质叫做**无后效性**。

        -   [Dynamic programming - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Dynamic_programming)

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

                refs and see also

                -   [动态规划算法 - 游戏人生 - C++博客](http://www.cppblog.com/Fox/archive/2008/05/07/Dynamic_programming.html)

        -   动态规划算法的适用条件 -<

            :   必须满足如下三点：

                -   最优化原理：如果问题的最优解所包含的子问题的解也是最优的，
                    就称该问题具有最优子结构，即满足最优化原理。
                -   无后效性：即某阶段状态一旦确定，就不受这个状态以后决策的影
                    响。也就是说，某状态以后的过程不会影响以前的状态，只与当前
                    状态有关。
                -   有重叠子问题：即子问题之间是不独立的，一个子问题在下一阶段
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

                满足下面三个条件之一：

                -   求出所有**具体**的方案而非方案**个数**<http://www.lintcode.com/problem/palindrome-partitioning/>
                -   输入数据是一个**集合**而不**序列**<http://www.lintcode.com/problem/longest-consecutive-sequence/>
                -   暴力的算法已经是多项式级别，2^n → n^2 是 DP 擅长的事

                则极不可能使用动态规划求解

        -   leetcode 中几道动态规划题 -<

            :   -   [Triangle | LeetCode OJ](https://leetcode.com/problems/triangle/) -<

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
                                    vector<vector<int>> &t = triangle;
                                    t[i][j] += min(t[i+1][j], t[i+1][j+1]);
                                }
                            }
                            return triangle[0][0];
                        }
                        ```

                -   [Maximum Subarray | LeetCode OJ](https://leetcode.com/problems/maximum-subarray/) -<

                    :    Find the contiguous subarray within an array
                        (containing at least one number) which has the largest sum.

                        For example, given the array `[−2,1,−3,4,−1,2,1,−5,4]`,
                        the contiguous subarray `[4,−1,2,1]` has the largest sum = 6.

                        贯序地看，对于新加入数组的一个元素，我们有两种选择：

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

                -   [Minimum Path Sum | LeetCode OJ](https://leetcode.com/problems/minimum-path-sum/) -<

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

    2016/8/14 上午9:30:00 5. 动态规划 Dynamic Programming II -<

    :   -   面试中常见的动态规划类型 -<

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

        [Word Break 参考程序 Java/C++/Python](http://www.jiuzhang.com/solutions/word-break/) -<

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

            :   求Max, [Longest Common Subsequence 参考程序 Java/C++/Python](http://www.jiuzhang.com/solutions/longest-common-subsequence/) -<

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

    2016/8/20 上午9:30:00 6. 链表 Linked List -<

    :   -   介绍 Dummy Node 在链表问题中的运用 Introduce Dummy Node in Linked List
        -   你必须知道的几点 Linked List 的常用技巧 Basic skills in Linked List you
            should know
        -   两根指针算法 Two pointers
        -   常见问题讲解 Frequent Questions

    2016/8/21 上午9:30:00 7. 数组与数 Array & Numbers -<

    :   -   旋转排序数组相关问题与三步翻转法的运用 Rotated Sorted Array & 3-step Reversion
        -   两个排序数组的中位数 Median of Two Sorted Array
        -   子数组相关问题 SubArray
        -   两根指针与 x-sum 问题 Two Pointers & x-sum
        -   分割数组相关问题 Partition Array

    2016/8/27 上午9:30:00 8. 数据结构 Data Structure -<

    :   -   线性数据结构
            -   队列的原理、实现和运用 Queue
            -   栈的原理、实现和运用 Heap
            -   哈希表的原理、实现和运用 HashMap
        -   树形数据结构
            -   堆的原理、实现和运用 Heap

    2016/8/28 上午9:30:00 9. 图与搜索 Graph & Search -<

    :   -   图上的宽度优先搜索 Graph BFS
        -   拓扑排序 Topological Sorting
        -   组合类深度优先搜索 Combination Related DFS
        -   排列类深度优先搜索 Permutation Related DFS

[九章算法强化班 - 硅谷顶尖IT企业一线工程师直播教学](http://www.jiuzhang.com/course/5/) -<

:   2016/8/21 上午7:00:00 FLAG算法面试难度提高？如何准备？【免费试听】 -<

    :   -   各类 IT 企业的面试算法难度及风格
        -   如何解决中等难度以上的算法题
        -   如何解决 follow  up 问题
        -   Two sum
            -   1. Two sum follow up I
            -   2. Two sum follow up II - Triangle count
        -   Kth largest element
            -   1. 第 k 大元素的三层递进面试考察.
            -   2. 如何通过一道题区分 3 类面试者
            -   3. 剖析面试官面试的思路

    2016/8/28 上午7:00:00 数据结构 Data Structure (上) -<

    :   -   并查集
            -   1. 并查集的基本原理
            -   2.并查集的相关运用
        -   并查集的拓展（带路径压缩）
        -   并查集的运用
        -   Trie 树
            -   1. Trie 树的相关运用
        -   扫描线算法
            -   1. 扫描线的常规题目
            -   2. 扫描线和其他数据结构结合的拓展

    2016/8/29 上午7:00:00 数据结构 Data Structure (下) -<

    :   -   Heap的深入理解和运用
        -   Heap重要拓展：
            -   1. 带删除的堆hash-heap
            -   2. Trapping rain water
            -   3. Building Outline
        -   Median 问题拓展
        -   Sliding Windows问题总结
        -   双端队列Deque

    2016/9/4 上午7:00:00 两个指针 Two Pointers -<

    :   -   对撞型指针
            -   1. Two sum 类
            -   2. Partition 类
        -   前向型指针
            -   1. 窗口类
            -   2. 快慢类
        -   两个数组上的指针

    2016/9/5 上午7:00:00 动态规划 Dynamic Programming (上) -<

    :   -   记忆化搜索（区间动态规划、博弈类动态规划）
        -   背包类动态规划
        -   区间类动态规划

    2016/9/11 上午7:00:00 动态规划 Dynamic Programming (下) -<

    :   -   记忆化搜索拓展
            -   1. 区间动态规划
            -   2. 博弈类动态规划
        -   背包类动态规划
            -   1. BackPack I/II
            -   2. K sum
            -   3. Minimum Adjustment Cost

    2016/9/12 上午7:00:00 如何解决 follow up 问题 -<

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

aoapc-book -<

:   **第一部分：语言篇**

    -   第 1 章，程序设计入门 -<

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

    -   第 2 章，循环结构程序设计 -<

        :   -   重定向

                ```cpp
                freopen( "data.in",  "r", stdin  );
                freopen( "data.out", "w", stdout );
                ```

            -   编程不是看书看会的，也不是听课听会的，而是**练**会的。

    -   第 3 章，数组和字符串 -<

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

    -   第 4 章，函数和递归 -<

        :   -   `typedef struct { ... } type;`

            -   骰子涂色

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

    -   第 5 章，C++ 与 STL 入门 -<

        :   -   5.1 From C to C++ -<

                :   template, reference, containers, iostream, operators, etc

                    ```cpp
                    template<typename T>
                    T sum( T *begin, T *end ) {
                        T *p = begin;
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
                                        int p = lower_bound( a, a+n, x ) - a;   // offset
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
                                        dict.insert( buf );
                                    }
                                    for( set<string>::iterator it = dict.begin(); it != dict.end(); ++it ) {
                                        cout << *it << "\n";    // already sorted
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

                    -   Queue, Priority Queue -<

                        :   **queue**

                            instruction sets.

                            **priority_queue**

                            -   ugly number -<

                                :   ```cpp
                                    #include <iostream>
                                    #include <vector>
                                    #include <queue>
                                    #include <set>

                                    using namespace std;
                                    typedef long long LL;

                                    int main() {
                                        priority_queue<LL, vector<LL>, greater<LL> > pq;
                                        set<LL> s;
                                        pq.push( 1LL );
                                        s.insert( 1LL );

                                        for( int i = 1; ; ++i ) {
                                            LL x = pq.top(); pq.pop();  // the smallest ugly number
                                            if( i == 1500 ) {
                                                cout << "The 1500'th ugly number is " << x << ".\n";
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
                                    ```

                                    output:

                                    ```
                                    The 1500'th ugly number is 859963392.
                                    ```

                                    but, why???

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

                        :   ```cpp
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

                        :   TODO

                    -   PGA Tour Price Money -<

                        :   TODO

                    -   The Letter Crarrier's Rounds, ACM/ICPC World Finals -<

                        :   TODO

                    -   Urban Elevations, 1992 World Finals -<

                        :   TODO

            -   5.5 Homework Problems -<

    **第二部分：基础篇**

    -   第 6 章，数据结构基础 -<

        :   -   6.1 Revisit Stacks & Queues

                :   -   Concurrency Simulator
                    -   Rails
                    -   Matrix Chain Multiplication
                    -   Matrix Chain Multiplication

            -   6.2 Linked List

            -   6.3 Trees and Binary Trees -<

                :   -   in_order + post_order -> rebuild tree -<

                        :   输入的是中序和后序遍历

                            ```cpp
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
                                return b1 && b2 && (W1*D1==W2*D2);
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

            -   6.4 Graph -<

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
                                                                        //          v

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

            -   6.5 Selected Problems -<

                :   TODO

    -   第 7 章，暴力求解法 -<

        :   -   7.1 Simple Enumeration -<

                :   -   abcde/fghij = n, a~j -> 0~9, n = 2..79 -<

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

                    -   max sum

                    -   fractions again?!

                        :   TODO

                    TODO

            -   7.2 Enumeration Arrangements

                :   TODO

            -   7.3 zijishengcheng, subset building

            -   7.4 huishufa, backtrace -<

                :   -   eight queen -<

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
                                        printf( "shit\n" );
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

            -   7.5 lujinxunzhao, path finding -<

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

                    input.txt

                    ```
                    2   6   4   1   3   7   0   5   8
                    8   1   5   7   3   6   4   0   2
                    ```

                    run it:

                    ```bash
                    g++ source.cpp -o source
                    cat input.txt | ./source
                    ```

                    Fill Problem.

                    TODO

    **第三部分：竞赛篇**

    -   第 8 章，高级算法设计
    -   第 9 章，动态规划初步
    -   第 10 章，数学概念与方法
    -   第 11 章，图论模型与算法
    -   第 12 章，高级专题

ACM-Cheatsheet -<

:   -   [GitHub - soulmachine/acm-cheat-sheet: Acm Cheat Sheet](https://github.com/soulmachine/acm-cheat-sheet) -<

        :   [HR 面试这一环可能会问到的问题 · soulmachine/acm-cheat-sheet Wiki · GitHub](https://github.com/soulmachine/acm-cheat-sheet/wiki/HR%E9%9D%A2%E8%AF%95%E8%BF%99%E4%B8%80%E7%8E%AF%E5%8F%AF%E8%83%BD%E4%BC%9A%E9%97%AE%E5%88%B0%E7%9A%84%E9%97%AE%E9%A2%98) -<

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

            refs and see also

            -   [《算法竞赛入门经典》中的例题对应的OJ题号 · soulmachine/acm-cheat-sheet Wiki · GitHub](https://github.com/soulmachine/acm-cheat-sheet/wiki/%E3%80%8A%E7%AE%97%E6%B3%95%E7%AB%9E%E8%B5%9B%E5%85%A5%E9%97%A8%E7%BB%8F%E5%85%B8%E3%80%8B%E4%B8%AD%E7%9A%84%E4%BE%8B%E9%A2%98%E5%AF%B9%E5%BA%94%E7%9A%84OJ%E9%A2%98%E5%8F%B7)

    -   chap1. Programming Techniques -<

        :   -   `unsigned char` as index
            -   odd: `%2 != 0`
            -   use global var, to prevent stack overflow.
            -   if you know #items, use big array instead of a container like vector.
            -   double, float -> fabs

    -   chap2. Linear List -<

        :   -   sequential -> array
            -   linked -> single linked, double linked, xunhuan  danlianbao, xuanhuan double linked list
            -   sequential+linked -> static list

    -   chap3. String -<

        :   /home/tzx/Downloads/acm-cheat-sheet-master/C++/chapString.tex

            -   String API -<

                :   -   strlen -<

                        :   ```cpp
                            size_t strlen( const char *str ) {
                                const char *s;
                                for ( s = str; *s; ++s ) {}
                                return (s - str);
                            }
                            ```

                    -   strcpy -<

                        :   ```cpp
                            char * strcpy( char *to, const char *from ) {
                                assert( to && from );                   // I don't think it necessary
                                char *rev = to;
                                while( (*to++ = *from++) != '\0' ) { }
                                return rev;
                            }
                            ```

                    -   strstr -<

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

                    -   atoi -<

                        :   ```cpp
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

                            LeetCode String to Integer (atoi),
                            <http://leetcode.com/oldoj\#question_8>

            -   String Sorting (null)

            -   danci chazhao shu (null)

            -   Substring Searching -<

                :   -   KMP -<

                        :   KMP 算法是 Knuth、Morris 和 Pratt 在 1976 年发表的。它的基本思
                            想是，当出现不匹配时，就能知晓一部分文本的内容（因为在
                            匹配失败之前它们已经和模式相匹配）。我们可以利用这些信
                            息避免将指针回退到所有这些已知的字符之前。这样，当出现
                            不匹配时，可以提前判断如何重新开始查找，**而这种判断只取决于模式本身**。

                            推荐网上的几篇比较好的博客，讲的是部分匹配表 (partial match table) 的方法（即 next 数组），
                            [“字符串匹配的 KMP 算法”](http://t.cn/zTOPfdh)，图文并茂，非常通俗易懂，作
                            者是阮一峰；[“KMP 算法详解”](http://www.matrix67.com/blog/archives/115)，作者
                            是顾森 Matrix67；
                            ["Knuth-Morris-Pratt string matching"](http://www.ics.uci.edu/~eppstein/161/960227.html)。

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

                            ```cpp
                            #include <stdio.h>
                            #include <stdlib.h>
                            #include <string.h>

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

                            ```
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

                            预处理不需要按照 P 的定义写成 O(m^2) 甚至 O(m^3) 的。我们
                            可以通过 P[1],P[2],…,P[j-1] 的值来获得 P[j] 的值。对于
                            刚才的 B="ababacb"，假如我们已经求出了 P[1],P[2],P[3]
                            和 P[4]，看看我们应该怎么求出 P[5] 和 P[6]。P[4]=2，那
                            么 P [5] 显然等于 P[4]+1，因为由 P[4] 可以知道，B[1,2] 已
                            经和 B[3,4] 相等了，现在又有 B[3]=B[5]，所以 P[5] 可以由
                            P[4] 后面加一个字符得到。P[6] 也等于 P[5]+1 吗？显然不
                            是，因为 B[ P[5]+1 ]<>B[6]。那么，我们要考虑“退一步”
                            了。我们考虑 P[6] 是否有可能由 P[5] 的情况所包含的子串
                            得到，即是否 P[6]=P[ P[5] ]+1。这里想不通的话可以仔
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
                            得到，因为 `B[2]<>B[6]`。事实上，这样一直推到 `P[1]` 也不
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

                    -   Rabin-Karp
                    -   Conclusion

            -   RegExp

    -   chap4. Stack and Queue -<

        :   -   stack, queue

            -   yanghui triangle -<

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
                    push 0                                  |
                                                            |   1   0
                    withdraw t=1                            |
                    push( t=1 + s=0 )                       |
                                                            |   0   1
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

    -   chap5. Tree -<

        :   -   binary tree traversal (see jiuzhang.)

            -   threaded tree -<

                :   ```cpp
                    #include <stddef.h>                 // for NULL
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

            -   morris traversal

            -   rebuild tree -<

                :   ```cpp
                    #include <stdio.h>
                    #include <string.h>

                    //      {pre}    =   [    pre,       {leftpre},      {rightpre}  ];
                    //      {in}     =   [ {leftin},         in,         {rightin}   ];
                    //      {post}   =   [ {leftpost},   {rightpost},    post        ];
                    //
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
                        char post[10] = { 0 };
                        build_post( pre, in, strlen(pre), post );
                        printf( "pre:  %s\n", pre );
                        printf( "in:   %s\n", in );
                        printf( "post: %s\n", post );
                    }
                    ```

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

                    ```cpp
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

            -   Heap -<

                :   -   [Heap (data structure) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Heap_(data_structure)) -<

                        :   In computer science, a heap is a **specialized tree-based data structure**
                            that satisfies the heap property: If A is a parent node of B
                            then the key (the value) of node A is ordered with respect to
                            the key of node B with the same ordering applying
                            across the heap. A heap can be classified further
                            as either a "**max heap**" or a "**min heap**". In
                            a max heap, the keys of parent nodes are always
                            greater than or equal to those of the children and
                            the highest key is in the root node. In a min heap,
                            the keys of parent nodes are less than or equal to
                            those of the children and the lowest key is in the
                            root node. Heaps are crucial in several efficient
                            graph algorithms such as Dijkstra's algorithm, and
                            in the sorting algorithm heapsort.
                            **A common implementation of a heap is the binary
                            heap, in which the tree is a complete binary tree.**

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

            -   Union-Find Sets -<

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
                    -   [并查集 (Union-Find) 算法介绍 - dm_vincent 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/dm_vincent/article/details/7655764)

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

    -   chap6. Searching -<

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

            -   hash table -<

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

    -   chap7. Sorting -<

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


    -   chap8. Brute Force -<

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

            -   subset generation -<

                :   -   gain -<

                        :   ```cpp
                            #include <stdio.h>
                            #include <stdlib.h>

                            void print_subset1(int *S, int n, int *P, int cur, int ed) {
                                int i, j;
                                for (i = ed; i < n; i++) {
                                    // 选择 S[i]
                                    P[cur] = S[i];
                                    for (j = 0; j <= cur; j++) printf("%d ", P[j]);
                                    printf("\n");
                                    // 不选择 S[i]
                                    print_subset1(S, n, P, cur + 1, i + 1);
                                }
                            }
                            ```

                    -   bit vector -<

                        :   开一个位向量 B，B[i]=1 表示选择 S[i], B[i]=0 表示不选择。

                            ```cpp
                            void print_subset2(int *S, int n, char *B, int cur) {
                                int i;
                                if (cur == n) {
                                    for (i = 0; i < n; i++) if (B[i]) printf("%d ", S[i]);
                                    printf("\n");
                                    return;
                                }
                                B[cur] = 1;
                                print_subset2(S, n, B, cur + 1);
                                B[cur] = 0;
                                print_subset2(S, n, B, cur + 1);
                            }
                            ```

                    -   binary -<

                        :   前提：集合的元素不超过 int 位数。用一个 int 整数表示位
                            向量，第 i 位为 1，则表示选择 S[i]，为 0 则不选择。例如
                            S=\{A,B,C,D\}，则 0110=6 表示子集 \{B,C\}。

                            这种方法最巧妙。因为它不仅能生成子集，还能方便的表
                            示集合的并、交、差等集合运算。设两个集合的位向量分
                            别为 B1 和 B2，则 B1|B2, B1&B2, B1^B2 分别对应集合的
                            并、交、对称差。

                            ```cpp
                            void print_subset3(int *S, int n) {
                                int i, j;
                                for (i = 1; i < (1 << n); i++) {
                                    for (j = 0; j < n; j++)
                                        if (i & (1 << j)) printf("%d ", S[j]);
                                    printf("\n");
                                }
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

    -   chap9. BFS -<

        :   -   maze -<

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

    -   chap11. Divide & Conquer -<

        :   -   chess covering
            -   schedule

    -   chap12. Greedy -<

        :   -   best loading
            -   huffmann encoding
            -   partial backpack

    -   chap13. DP -<

        :   -   dp and memoization
            -   longest common subseq
            -   longest consequtive common subseq
            -   long M subseq
            -   backpack
            -   TODO

    -   chap14. Graph -<

        :   -   DFS of graph
            -   BFS of graph
            -   minal spanning tree
            -   shortest path
            -   key path

    -   chap15. Math Methods and Models -<

        :   -   number theory
            -   combination

    -   chap16. Big Integer -<

        :   -   addition
            -   subtraction
            -   multiplication
            -   division
            -   power

    -   chap17. Functionalities -<

        :   -   next permutation
            -   shift right

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

                :   #1 找数字 -<

                    :   给定一个包含 32 位整数的顺序文件 (sequential file)，它至多只能包含 40 亿 (4 billion) 个这样的
                        整数，并且整数的次序是随机的 (in a random order)。请查找一个此文件中不存在的 32
                        位整数。在有足够内存的情况下 (with ample quantities of main memory)，你会如何解决这个问题？如果你
                        可以使用若干外部临时文件但可用主存却只有上百字节，你会如何解决这个问题？

                        -   Given a sequential file that contain at most 4x109
                            integers(32-bit) in random order, find a 32-bit
                            integer that is not in the file.
                        -   How would you solve it with ample main memory?  --
                            bitmap (232bits)
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

                    #2 n=8, i=3, abcdefgh -> defghabc -<

                    :   ```
                        reverse( 0, i-1 );          // cbadefgh
                        reverse( i, n-1 );          // cbahgfed
                        reverse( 0, n-1 );          // defghabc
                        ```

                        作者还很巧妙的用翻手来解释这个方案。

                        这个 reverse 可以这个写：

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
                        reverse( str, 0, strlen(str) );
                        ```

                    #3 pots, stop, tops -<

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

                    -   Don't write a big program when a little one will do.
                    -   使用数组重新编写重复代码。
                    -   封装复杂结构。
                    -   尽可能使用高级工具。名字-值对，电子表格（二维数组），数据库，特定编程语言的强大的工具。
                    -   从数据得出程序的结构。(let data structure the program.)

            -   column-4: writing correct programs -<

                :   Knuth 说，46 年 binary search 的论文出来了，62 年，终于有一个 bug free 的实现==。

                    本章作者主要证明了二分搜索程序的正确性。

                    构造程序的正确性上来先要找到**断言**(assertions)，也
                    就是所谓的【循环不变式】，当然这个在实际程序中，只有靠经验了。找到断言，即可以勾勒
                    出，输入、程序变量和输出之间的关系，使得程序员可以准确阐述这些关系。拿二分来说，
                    就是如果元素 t 在数组中，那么它一定在 range 中。在之后所有的操作都要遵循该不变式。

                    接下来看程序的结构。

                    -   如果是顺序控制结构 (sequential control structures)。则可以通过在语句之间添加断言并分别分析程序执行的每一步。
                    -   如果是选择控制结构 (selection control structures)，则要对每一个分支进行结构的正确性证明。
                        选择每一个分支，使用断言来证明。例如，如果进入了 `if i > j` 的分支，
                        那么我们就可以断言 `i > j` 并且使用
                        这个事实来推倒出下一个断言。
                    -   最麻烦就是迭代控制结构 (iteration control structures)。要证明循环的正确性，就必须为其确立 3 个性质。
                        -   初始化 (initialization)：循环初次执行的时候不变式为真。
                        -   保持 (preservation)：如果在某次迭代开始的时候以及循
                            环体执行的时候，不变式为真，那么循环执行完毕的时候
                            不变式仍然为真。每次迭代都保持该不变式为真。
                        -   终止 (termination)：循环能够终止，并且可以得到预期的结果，而且我
                            们必须用其他方法证明循环一定能终止。就像二分每次范
                            围都在减少，课后习题，豆子每次都在减少一个。

                        对于函数的正确性证明，首先要使用两个断言来陈述目的。

                        -   前置条件：调用该函数之前成立的状态。
                        -   后置条件的正确性有函数在终止时保证。

                        拿二分来说，前置条件是序列有序（二分），后置条件是找没有找到元素，返回位置。

                        如果在前置条件满足情况下调用函数，那么函数的执行将确立后置条件，这就是契约编程。

                        证明程序的正确性是一门学问，如果违反断言就指明了程序的错误所在。程序状态的断言对理解程序很有帮助。

                    ```cpp
                    int binary_search( int A[], int n, int target ) {
                        int low = 0, high = n;
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

                :   主要讲解如何保证编程的正确性。在程序中加入断言（assert(断言内容) //如果错误，则终止程序。否则正常执行）。

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

                    量纲检验：即在检验几何或物理等式时，我们可以先看看其中的单位在乘除过后是否与原式能保持一致。

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

                        一年有 pi * 10^7 秒。

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
                        假如你要进入一个火爆的夜总会（美国电影中经常见到），“这
                        个地方可以容纳约 60 人，每个人在里面逗留的时间大约是 3
                        小时，因此我们进入夜总会的速率大概是每小时 20 人，现在
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

    -   refs and see also -<

        :   -   [《编程珠玑》---笔记。浏览此文，一窥此书。 - 菜鸟的自留地 - 博客频道 - CSDN.NET](http://blog.csdn.net/yang_yulei/article/details/36068789)
            -   [编程珠玑_第二章_啊哈 算法 - 思考，思考，再思考~ - 博客频道 - CSDN.NET](http://blog.csdn.net/insistgogo/article/details/7749328)
            -   [编程珠玑第四章 - chloe - 博客频道 - CSDN.NET](http://blog.csdn.net/omashion/article/details/11694141){.heart}
            -   [[编程珠玑]第七章粗略估计](http://www.jimye.com/bian-cheng-zhu-ji-di-qi-zhang-cu-lue-gu-ji/)

[VisuAlgo - visualising data structures and algorithms through animation](http://visualgo.net/) -<

:   nice site.

    -   冒泡排序 -<

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

    ![a](http://whudoc.qiniudn.com/2016/2016-08-06_10-58-31-pred.gif)
    ![b](http://whudoc.qiniudn.com/2016/2016-08-06_10-59-12-next.gif)
    ![c](http://whudoc.qiniudn.com/2016/2016-08-06_11-04-07.gif)
    ![d](http://whudoc.qiniudn.com/2016/2016-08-06_11-05-11-avl-balanced.gif)
    ![e](http://whudoc.qiniudn.com/2016/firefox_2016-08-06_11-07-06.png)
    ![f](http://whudoc.qiniudn.com/2016/firefox_2016-08-06_11-07-22.png)
    ![g](http://whudoc.qiniudn.com/2016/firefox_2016-08-06_11-08-17.png)
    ![h](http://whudoc.qiniudn.com/2016/firefox_2016-08-06_11-08-42.png)

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

            -   [程序员编程艺术：第四章、现场编写类似strstr/strcpy/strpbrk的函数 - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_JULY_v/article/details/6417600)

[程序员面试、算法研究、编程艺术、红黑树、数据挖掘5大系列集锦 - 结构之法 算法之道 - 博客频道 - CSDN.NET](http://blog.csdn.net/v_july_v/article/details/6543438)

[Bresenham's line algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm)

Milo Yip 的博客 -<

:   -   [《编程之美: 求二叉树中节点的最大距离》的另一个解法 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/archive/2010/02/25/binary_tree_distance.html)

    -   [《编程之美：分层遍历二叉树》的另外两个实现 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/archive/2010/05/12/binary_tree_traversal.html)

    -   [面试题：检测点是否在扇形之内 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/archive/2013/04/19/3029852.html)

    -   [怎样判断平面上一个矩形和一个圆形是否有重叠？ - Milo Yip 的回答 - 知乎](https://www.zhihu.com/question/24251545/answer/27184960) -< -<

        :   ![](https://pic1.zhimg.com/31fcf0a6ba5b5b925d7d82dc5bc8a684_r.jpg)

            ![](https://pic2.zhimg.com/60b09b89d9b4eda3fe9bdb849ec5d5d1_r.jpg)

            最后要比较 u 和 r 的长度，若距离少于 r，则两者相交。可以只求 u 的长度平方是
            否小于 r 的平方。

[Dijkstra's algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)

-   [Sorting algorithm - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Sorting_algorithm)
-   [Red–black tree - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
-   [Heap · Data Structure and Algorithm notes](http://algorithm.yuanbin.me/zh-hans/basics_data_structure/heap.html)

[五大常用算法：分治、动态规划、贪心、回溯和分支界定 - yapian8的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/yapian8/article/details/28240973)

[soulmachine (Frank Dai)](https://github.com/soulmachine)

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

[排序（一）归并、快排、优先队列等（图文详解） - 菜鸟的自留地 - 博客频道 - CSDN.NET](http://blog.csdn.net/yang_yulei/article/details/27237641)

[排序（二）键索引、桶排序、位示图、败者树等（图文详解--败者树） - 菜鸟的自留地 - 博客频道 - CSDN.NET](http://blog.csdn.net/yang_yulei/article/details/27237809)

Code Reading -<

:   [4ker/Lua-Source-Internal: Lua source internal](https://github.com/4ker/Lua-Source-Internal)

    [libevent 源码深度剖析一 - sparkliang 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/sparkliang/article/details/4957667)

    [libevent 源码深度剖析二 - sparkliang 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/sparkliang/article/details/4957744)

    [daoluan/decode-memcached: memcached 源码剖析注释](https://github.com/daoluan/decode-memcached)
