---
title: Notes 1
---

-   [Momenta 完成 4600 万美元融资 CEO 曹旭东给未来员工的一封信](http://mp.weixin.qq.com/s/bz6nICOdnzaDWRFvO6kb7Q) -<

    :   每一次新的浪潮，都伴随着颠覆性的技术革命，以及行业格局、商业模式的巨变。
        面对变化，年轻人身上的特质使得他们可以抓住新浪潮的机会，成就一家伟大的公司。

        1.  快速学习创新
        2.  敢于拥抱变化。创业过程中，时机很重要。
        3.  第一原理思考。

-   [曹旭东：关于如何妥善解决自动驾驶的安全问题的一些思考](http://mp.weixin.qq.com/s/L8Zd_sOzV6KRud1_RURAYg){.heart .featured} -<

    :   >   才发现面试我的时候问的就是这些！然而我没注意看。。。答成一坨狗屎。。。

        但目前，这些在技术上仍有诸多挑战：无论是路面情况的识别、高精度地图还是自动驾驶决策，业界都还没有成熟的方法。

        无人驾驶，最重要的是安全。高安全性意味着低事故率。

        统计上，要达到足够置信度，需要多次重复实验，最好一百次以上。这意味着一
        套比人更加安全的无人驾驶的系统需要测试的总里程达到 1000 亿公里。按照一
        辆车一年 10 万公里总里程计算。我们需要 100 万辆车，一整年的时间，收集无
        人驾驶数据和测试，才能够保证无人驾驶所需要的安全性。现在 Google 和百度
        的无人车成本都在百万人民币量级，乘以 100 万辆车这个巨大的基数，对于任何
        一家公司而言，都是一个天文数字。

        单车成本主要由三部分构成：设备成本、造车成本、运营成本。

        造车成本和运营成本已经优化了上百年，很难降低。一个聪明的想法是让其他人
        承担这部分成本——这个想法叫做众包，代表性的公司有特斯拉和 Mobileye。

        高精地图是一个宽泛的概念，需要达到两方面的高精度：

        -   高精度一方面体现在地标位置的高精度。
        -   高精度另一方面体现在本车定位的高精度。

            高精定位有三种方式：

            -   第一种是卫星定位，多基站 + 差分 GPS 在开阔区域可以做到厘米级精度，但是城市
                中因为多路径效应，精度只有米；
            -   第二种是匹配定位，这种方式和人很像，
                观察周围环境或者地标，在记忆地图中搜索，匹配定位。结合 GPS 限定搜索
                范围，可以做到快速准确匹配。
            -   第三种是积分定位，IMU 或者视觉里程计。
                短时间内精确，长时间有累积误差。这三种方式各有优缺点，结合起来可以
                做到低成本、高精度、高可靠性。

        总结来说，高精地图可以使无人车看得更远，看得更准。

        高精地图对于自动驾驶整体解决方案研发的价值非常高，这一点却被很多人忽视。分三个方面：决策，测试，V2E。

        **司机的驾驶行为还可以用车辆在高精地图中的轨迹表示**

        :   很像这篇文章：[AI-Powered Drone Mimics Cars and Bikes to Navigate Through City Streets - IEEE Spectrum](https://spectrum.ieee.org/automaton/robotics/drones/ai-powered-drone-mimics-cars-and-bikes-to-navigate-through-city-streets)

        答：不是 SLAM 也不是 SFM，这些方法都不适用。要建真正可用的视觉高精地图，需要从第一原理出发重新设计整个算法。

        >   构建高精地图的第一原理是：多张图像存在视差，利用点的对应关系，可以从 2D 点恢复出 3D 点。

-   [曹旭东：无人车商业化最大难点：如何高效的大规模数据收集和测试 | 蓝湖系创业](https://zhuanlan.zhihu.com/p/23675803) -<

    :   总的来说，无论是十辆车试运行还是一百辆车试运行，都是在做无人车的 demo，
        如果没有解决无人车大规模数据收集和测试的关键问题，demo 到商业化落地之间
        的巨大鸿沟就会一直存在。

-   [自动驾驶 - 知乎](https://www.zhihu.com/topic/19635352/hot)

-   [SLAM/VIO 学习总结](https://zhuanlan.zhihu.com/p/34995102) -<

    :   好吧，扯这么多其实就是想说，我们做状态估计的目的就是得出机器人三组状态
        量（位置、速度、姿态），为机器人运动控制做状态反馈。尽管不同的传感器会
        有不同的特征，进行数据处理、运动估计的方法也不尽相同，但是目的是一致的，
        都是为了得到机器人的三组状态。

        VR(Virtual Reality) 虚拟现实技术则是通过虚拟现实头盔投射虚拟信息，给人
        身临其境的感觉，将使用者在实际空间中的移动反映到虚拟空间上可以很大程度
        地提高交互体验，通过追踪使用者佩戴头盔的位置可以实现这一效果，实现头盔
        空间定位的方式可以分为 Outside-in 方案和 Inside-out 方案，前者使用过外
        部辅助设备实现定位，后者则使用头盔自身传感器实现定位，显然后者的使用场
        景不受限制是一种更好的定位方式，而 Inside-out 定位目前被广泛采用的方案
        就是视觉惯性传感器融合实现 SLAM 的 VINS 算法。

        VIO（visual-inertial odometry）即视觉惯性里程计，有时也叫视觉惯性系统（
        VINS，visual-inertial system），是融合相机和 IMU 数据实现 SLAM 的算法，
        根据融合框架的区别又分为紧耦合和松耦合，松耦合中视觉运动估计和惯导运动
        估计系统是两个独立的模块，将每个模块的输出结果进行融合，而紧耦合则是使
        用两个传感器的原始数据共同估计一组变量，传感器噪声也是相互影响的，紧耦
        合算法上比较复杂，但充分利用了传感器数据，可以实现更好的效果，是目前研
        究的重点。

        同时视觉 SLAM 一般采取第一帧作为世界坐标系，这样估计出的位姿是相对于第
        一帧图像的位姿，而不是相对于地球水平面 (世界坐标系) 的位姿，后者却是导
        航中真正需要的位姿，换言之，视觉方法估计的位姿不能和重力方向对齐。

-   [凌感马赓宇：基于视觉 + 惯性传感器的空间定位方法_搜狐科技_搜狐网](http://www.sohu.com/a/119892067_383098)

-   [知行合一 - CSDN 博客](https://blog.csdn.net/heyijia0327){.featured .heart} -<

    :   -   [【泡泡机器人原创专栏 - SLAM 求职宝典】SLAM 求职经验帖（上）](https://mp.weixin.qq.com/s?__biz=MzI5MTM1MTQwMw==&mid=2247485898&idx=1&sn=f2dfa09959184cc551c5fe16c3373c58&chksm=ec10b7cedb673ed82ebd535127e1dcb0a354278248efb75319aebe186933ee25e68f7f8fe97b&mpshare=1&scene=24&srcid=0119VcXm8hWJMnJALwWUDKQQ#rd)

-   [机器视觉 - 随笔分类 - 湘厦人 - 博客园](http://www.cnblogs.com/gemstone/category/409734.html)

-   [传感器网络的时间同步 | Paper Reading 第一季第四期](https://zhuanlan.zhihu.com/p/34982463)

-   [曹旭东：关于如何妥善解决自动驾驶的安全问题的一些思考](https://mp.weixin.qq.com/s/L8Zd_sOzV6KRud1_RURAYg)

-   [由首份 SLAM 技术问卷，看 SLAM 的现状和趋势 - 简书](https://www.jianshu.com/p/dea5be0c5c81) -<

    :   软硬结合为 SLAM 创造了无限的可能，这是一个综合性的技术，一个复杂的系统，所以才不断吸引着研究人员对其进行不停地探究及应用实践。

        不少科技型公司的 HR 表示，“公司准备研发 SLAM 相关的应用，但非常难招人，
        有项目经验的不多，而专门学 SLAM 的人又不一定能很快上手”。精通的人真的太
        少了！

-   [SLAM 刚刚开始的未来_36 氪](http://36kr.com/p/5049190.html){.heart} -<

    :   直接法的直接好处是地图相对稠密，但相对稠密是针对于基于特征点的稀疏而言，如
        果这个地图是为了做跟踪，那么基于特征点的方法已经证明可以做得很好了，如果是为了
        3D 重建，那么大可以用一个深度相机，如果是被动双目的话，被动双目还原出稠密深度本
        身也在大幅度进步。

        语义英文为 Semantics，是意义和含义的意思。语义 SLAM 顾名思义就是超出点
        线面的几何意义，而再进一步得到更深层次的环境和物体信息，比如我在一个屋
        子走一圈，SLAM 告诉你精准的轨迹位置信息和精准还原出来的一堆 3D 点，但语
        义 SLAM 还能够告诉你沿路看到了哪些物体和这些物体的精准位置，这个不但从
        商业的角度来说想象空间和商机非常大，而且对终端用户来说更实用更有意义，
        如果说稀疏 SLAM 的稀疏地图点是为了跟踪和重定位，稠密 SLAM 的稠密点云或
        者 mesh 是为了场景重建，那么语义 SLAM 才是真的全方位 “环境重建”。

-   [视觉 SLAM 漫谈 - 简书](https://www.jianshu.com/p/c1a6877e2e7e)

-   [SLAM——让机器人认路的技术。 - 简书](https://www.jianshu.com/p/9f9283abe30f)

-   [【泡泡一分钟】端到端的弱监督语义对齐](https://mp.weixin.qq.com/s/MoCeJJo5FTRmc8BpiKRLrA)

-   [如何上传 base64 编码图片到七牛云 - 七牛开发者中心](https://developer.qiniu.com/kodo/kb/1326/how-to-upload-photos-to-seven-niuyun-base64-code)

-   [生于妓院，15 岁斩获奥斯卡，最终还是沦为最大红灯区头牌？！_百科 TA 说](https://baike.baidu.com/tashuo/browse/content?id=cf48fae30567a1c0630f30e6&lemmaId=&fromLemmaModule=pcBottom)

-   [无人驾驶技术与 SLAM 的契合点在哪里，有什么理由能够让 SLAM 成为无人驾驶的关键技术？ - 知乎](https://www.zhihu.com/question/67473027) -<

    :   slam 可以有定位和建图两方面应用，目前看来在自动驾驶中主要的需求还是定位。
        相对而言定位的成本是远高于建图的，因为定位系统必须每台车都装备，而建
        图则不需要。当然为了保证地图的及时更新，建图车也是多多益善，但这个话题
        可以分开讨论。

        但是对于一个工业级产品而言，其鲁棒性仍然十分存疑，因此至今尚未能够看到相关产品面世。

        首先要明确 SLAM 的使命。最初，SLAM 的提出就是为了解决未知环境下移动机器人的定位和建图的问题。

        所以，笼统的说，SLAM 对于无人驾驶的意义就是如何帮助车辆感知周围环境，更好的完成导航、避障、路径规划等高级任务。

        链接：https://www.zhihu.com/question/24641575/answer/87751184

        :   作者：何舜成

            众所周知，凸问题的局部最优解就是全局最优解（许多答主已经提到了）。
            不过，凸优化理论中最重要的工具是 Lagrange 对偶，这个为凸优化算法的
            最优性与有效性提供了保证。近些年来关于凸问题的研究非常透彻，以至于
            只要把某一问题抽象为凸问题，就可以近似认为这个问题已经解决了。

-   [Face++ 旷视科技首席科学家孙剑首次接受专访：计算机视觉亟待解决哪些问题？](https://mp.weixin.qq.com/s/CwIropYn69W5Mq3CzM5hTQ) -<

    :   最后要说一下做出这个残差网络完全是团队（何凯明、张祥雨、任少卿和我）的
        集体智慧结晶，缺少任何一人都不敢说能走得到这一步，中间经历很多的失败和
        曲折。我深感能把我们 4 个不同技能的人凑在一起，打下一个「大怪兽」的幸运；
        和他们在一起忘我的研究过程是我研究生涯中最难忘的经历之一。


        这不是某一个时间点突然发生的，而是一段时间内慢慢发生的。这对计算机视觉改变很大，以至于今天非常大比例的计算机视觉人员都是非常懂机器学习的人。

        至于未来，我的导师沈向洋博士经常引用的一句话是：「The best way to predict the future is to create it.」

        孙剑：我觉得挺难预测的。今天大家都在研究无监督学习，因为监督学习已经比
        较成熟了，但无监督学习不够好，这是非常大的问题。我在很多年前读过《On
        Intelligence》，最近又读了一遍，再次受到很多启发。无监督学习当然很重要，
        现在有很多人研究，但还没做到马上能解决问题，从一堆无标注的数据生成另一
        堆无标注的数据，很难说立刻能带来多大的实际价值。

        我现在看好两个研究方向，一个是深度神经网络，必须能记住东西。并非长短时
        的短期记忆，而是像小孩长大一样的长时间记住，有一个大的记忆库，把事物放
        进去还可以决定要不要拿掉，或者把它们关联在一起，都需要有记忆机制。现在
        大多数有监督学习都记在网络参数里，并没有显式的记忆。虽然已经有很多不错
        的研究了，但还没到实用，我觉得这会是一个非常大的突破。

        ![](http://mmbiz.qpic.cn/mmbiz_jpg/KmXPKA19gWic2PYX6sUcXaSlTFacEaib19zBSibFWk669hSCUFoLXO20F6C21hmBu4yicRIp0zWYnrz4Ur2RK4suKw/640?wx_fmt=jpeg&tp=webp&wxfrom=5&wx_lazy=1)

        孙剑：就像之前说的，研究院的主要聚焦在 4 个核心研究课题上（图像分类、物
        体检测、语义分割、和序列学习），这和我在微软所做的完全一致，我们会继续
        推进在这些问题上的进展。新的方向我们也在探索，但还不是主线。

        机器之心：对于创业公司，更需要前沿研究的科研成果，还是工程化成果？

        孙剑：我们都要，这不是贪心，而是最好的方式。我们付出很大精力和资源来研
        究和提升本质方法，本质方法的提升会传导到产品上去，比如精度更高了、速度
        更快了。这方面不能短视，必须短期、中期、长期（目标）都有。公司刚创立的
        时候其实没产品，做的都是研究相关的东西。研究本身也分两种研究，应用性研
        究和基础研究，非常基础的研究放之四海皆准，应用性研究要解决问题。

        其实这是大家都懂的道理，但是知易行难，控制好度是关键。

        因为深度学习，特别是计算机视觉，在纯研究性的工作之外有很多工程性的事情
        要做。它是实践性非常强的一门学科，必须动手做实验，动手处理数据、理解问
        题，所以我们研发不分家。做好的研究成果会以内部的算法库、SDK，交付给产品
        部门；产品部门在 SDK 基础上，再去开发他们的产品，然后产品再到销售。

        AGV
          ~ An automated guided vehicle or automatic guided vehicle (AGV) is a
            mobile robot that follows markers or wires in the floor, or uses
            vision, magnets, or lasers for navigation.

-   [Momenta 校园宣讲会｜自动驾驶技术骨干 "火箭" 计划，让你的成长之路火力全开！](https://mp.weixin.qq.com/s/gP_QSaIodrujJF2d96U4dQ) -<

    :   和很多表面上下功夫的创业公司不同，Momenta 的确在脚踏实地做事情。大概老
        板是清华出身，骨子里是闷声做大事儿的气质，从来不进行假大空的画饼宣传，
        而把绝大多数精力都放在了研发和产品。

        曹旭东：首先要怀抱着改变世界的勇气和热情。未来是有勇气有热情的想改变的
        年轻人去创造的； 第二个就是擅长学习和分析问题。我们招聘的人不一定需要他
        有非常好的关于深度学习或者无人驾驶的知识，但是能拥有特别擅长学习和分析
        问题解决问题的能力，这样的人进入无人驾驶行业，一定会成长的非常快，时间
        会是他们的朋友。

-   [四千年来的大豆与贸易战 | 观天下讲坛](https://mp.weixin.qq.com/s/j-M1miK_tJN0v5OLBw7qUg) -<

    :   当然，豆子作为主粮也有它自己的问题。首先豆子吃起来会胀气，往往是还没吃
        饱，肚子里的气体就让你觉得吃不下了，让胃肠很不舒服。至于当众排气，这对
        于古人来说倒是小问题。其次，大豆有豆腥味，气味聚集在一起是臭味，也让人
        不想多吃。最后，生大豆是有轻微毒性的，里面的皂苷、凝血素会刺激内脏，让
        人呕吐甚至昏迷，必须完全煮熟才能吃。大家煮黄豆或者煮毛豆的时候，一定记
        住要彻底煮熟，不能有侥幸心理。古代未经选育的大豆想必毒性更大。这几个原
        因放在一起，导致大豆不能成为绝对的主粮。不用磨碎的粟（和黍），也就是小
        米，始终保持了第一主粮的位置。

        但是，作为油脂和蛋白质含量最高的粮食，大豆有很多吃法。磨成粉就很容易彻
        底炒熟或者煮熟，不会中毒。如果做成豆浆或者豆腐，就不会胀气，也没有豆腥
        味。为什么春秋战国时代的人不做豆腐或者豆浆呢？因为加工费用太贵了。

        一旦有了石磨，麦子可以变成面粉，这种口感好，吃了不胀，也不容易中毒的食
        品就立刻打败了大豆。汉朝早期，豆子还是绝对的主粮，到了唐朝，小麦已经上
        升到第二甚至第一主粮的地位。同时中原人口越来越多，也不愿再种产量较低的
        大豆，大豆就逐渐边缘化了。

        其次，大豆油不是均匀分布在大豆里的，而是分散成很多微米级的小油滴。这些
        油滴表面覆盖着一层非常坚固的卵磷脂，就算把大豆磨碎也不会破坏。所以，我
        们用石磨就能从芝麻里获取香油，磨豆浆却看不到豆浆里有油。

        豆油没有拯救大豆的地位，但由于蛋白质含量高，榨过油的大豆反而有了新用途—
        —豆饼可以当饲料和肥料。这对于人口密集的中国农业核心区来说是很大的贡献——
        核心区已经没有太多粮食用来养猪，土地的肥力也逐渐耗尽了。

        作为一个半殖民地国家，20 年代的中国国际贸易处于严重逆差状态，白银外流严
        重。北洋政府基本依靠帝国主义借款与出卖更多的权益过日子，一般地方军阀则
        拼命收地租和厘金吃饭。这期间东北因为大豆出口成为中国唯一大规模顺差的地
        区，控制东北的势力拥有中国最大的一笔机动资金。

        世界上 90% 以上的野生大豆资源分布在我国。但美国人认认真真干了几十年，现
        在美国作物基因库中保存的大豆资源已达 20000 多份，成为仅次于中国的大豆资
        源大国。


        后来李石曾当了国民党监察委员，号称国民党四大元老之一。但他更重要的成绩
        是留学勤工俭学运动吸引了一大批中下层知识分子到法国，读书的同时接受了世
        界大战后期形成的左翼革命思想。周恩来，邓小平、朱德都是他发起的勤工俭学
        运动的成果。这几个人中，朱德当过军阀，不缺钱，周恩来邓小平都是穷知识分
        子，到了 1923 年穷得吃不上饭。于是他们仿效李石曾又开了一家独立的豆腐店
        ，邓小平周恩来都推过磨盘，邓小平自己还下厨炒豆腐卖。可以说中国革命成功
        ，很大一部分资源都来自向海外推广大豆。



        1980 年代，中国人解决了十亿人口的吃饭问题，开始用工业赚外汇，从国外买油
        。从统计表看，中国并不是什么油都喜欢。全世界这么多油料作物，中国人吃豆
        油的热情是最高的。除了中国之外，这么积极吃豆油的国家只有巴西和美国——但
        它们都是大豆出口国。只有中国，明明国内大豆供应不足，明明棕榈油比豆油便
        宜，供应量还大，中国人偏偏要拼命进口大豆榨油。

        第三，基因决定了大多数中国成年人消化奶制品的能力不行。下面这张图是乳糖
        消化能力的全球地图，显然中国人是最差的。所以，印度经济水平比中国差很多
        ，人均牛奶消费却是中国的两倍。中国人吸收蛋白质要么靠大豆，要么靠吃肉。




        最后，虽然棕榈油比大豆油便宜，用来炒菜也比较健康，但棕榈油熔点比较高，
        十几度的气温下就要凝结，在中国大多数地区都会变成固体。用起来不方便，观
        感也不太好，让人想起猪油，觉得荤油不健康。所以棕榈油一般用在方便面企业
        ，不会直接进入家庭。

        一图以蔽之，土地成本高是因为我们人口密集；人工和机械成本高是因为我们搞
        小农经济，在土地上浪费了太多的工作；肥料成本高是因为我们不搞转基因——虽
        然我们天天都在吃美洲转基因大豆油。

        只要农业还依赖于土地，我们用全球 7% 的耕地满足 20% 的人口的粮食供应就可
        以了，不太可能满足 20% 的人口吃肉喝酒炒菜还要吃水果。


        上面三张图，绿色是大豆产区，红色是特朗普支持者来源。特朗普的支持者的确
        和豆农有很大的重合。打击是有效的。但是力度未必有我们想象的那么大。



        a 国产农业应该承认自己的差距，规模化，产业化才是大方向。b 海外的供应选
        择有很多，我们应该尽可能去开发，但是必须承认美国有独特优势。c 我们可以
        给美国政客施加一定的压力，但不是决定压力。但反过来说，我们可以给美国提
        供足够的诱惑，拿不到手的诱惑也是压力。

        这要从二战后的世界局势说起，和中国的历史也有关系。1945 年的美国，工业世
        界最强，农业世界最强，金融世界最强。这个世界如果搞绝对自由贸易的话，所
        有国家的所有企业都得垮掉，因为美国人什么都比你便宜，还有美元这种最可靠
        的货币提供交易工具。短期内看，貌似全世界的老百姓得了便宜，买到的工业品
        和粮食都便宜了。但从长期看，全世界任何国家都没法形成生产组织，企业直接
        破产，老百姓花光自己的积蓄之后就失业了，失业就会造反，就会革命，就会站
        到苏联阵营一边，因为这个国家没有别的选择。换句话说，在全世界人民普遍觉
        醒的情况下，美国越是利用自己的霸权，越是给苏联阵营增加力量。

        美国的另一个好处就是建立一个吸引全球人才的体系，同时利用美国市场控制世
        界标准。高科技和行业标准在美国人手里，就可以卖一些利润率很高的商品，比
        如大飞机，比如好莱坞电影，比如特效药品。

-   [Mark Zuckerberg's 2004 Interview: See How Far He And Facebook Have Come | CNBC - YouTube](https://www.youtube.com/watch?v=cUNX3azkZyk) -<

    :   Zuckerberg looks like the kid who would borrow your SNES cartridges, never return them, and blatantly deny it to others while playing the nice kid

        Mark got worse at social skills... Its almost like almost 15 years, billions of dollars and a CEO position has made him... Less sharp.

        Mark was wearing the same T-Shirt under that shirt

-   [色键 - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E8%89%B2%E9%94%AE) -<

    :   色键技术是从素材中删除背景并露出后面的另一个素材，已被很多领域大量使用，
        尤其是电影、影片、游戏行业。色度键控技术常用于影片的后期制作。这种技
        术也称为色度键控，或由于各种具体颜色变化的术语如绿幕、蓝幕。色度键控可
        以是任何有均匀的背景，但绿色和蓝色背景更常用，这是因为它们与大多数人的
        皮肤颜色存在最明显差异。在拍摄过程中，要尽量防止演员的服装或任何部分与
        背景颜色重合。

        绿色是目前比任何其他颜色用作背景最多的，因为绿色在数码摄像机的图像传感
        器中是最敏感的，由于拜耳模式更多的分配像素在绿色通道以模仿人眼对绿色光
        的敏感性。因此，绿色相机通道包含最少的 “杂色”，可以产生最干净的主题。另
        外又由于图像传感器对绿色的高敏感性，所以只需较少的光来照亮绿色。明亮的
        绿色也越来越受青睐，因为一个蓝色的背景可能会匹配演员的眼睛或衣服颜色，
        比如牛仔裤。

        [Chroma key - Wikipedia](https://en.wikipedia.org/wiki/Chroma_key) +<

        :   Chroma key compositing, or **chroma keying**, is a visual
            effects/post-production technique for compositing (layering) two images
            or video streams together based on color hues (chroma range). The
            technique has been used heavily in many fields to remove a background
            from the subject of a photo or video – particularly the newscasting,
            motion picture and videogame industries. A color range in the
            foreground footage is made transparent, allowing separately filmed
            background footage or a static image to be inserted into the scene. The
            chroma keying technique is commonly used in video production and
            post-production. This technique is also referred to as color keying,
            colour-separation overlay (CSO; primarily by the BBC[2]), or by various
            terms for specific color-related variants such as green screen, and
            blue screen – chroma keying can be done with backgrounds of any color
            that are uniform and distinct, but green and blue backgrounds are more
            commonly used because they differ most distinctly in hue from most
            human skin colors. No part of the subject being filmed or photographed
            may duplicate the color used as the backing.[3]

            高晓松先生在《晓松奇谈》

            “二战日本横扫亚洲，唯独没有踏进澳门，原因是澳门是葡萄牙殖民地，而日侨最大的海外定居地是葡萄牙语国家——巴西”

-   [为什么印尼华人会说宁做美国狗，不做中国人 | 帶頭大哥](https://sxszyhg.wordpress.com/2017/03/17/%E4%B8%BA%E4%BB%80%E4%B9%88%E5%8D%B0%E5%B0%BC%E5%8D%8E%E4%BA%BA%E4%BC%9A%E8%AF%B4%E5%AE%81%E5%81%9A%E7%BE%8E%E5%9B%BD%E7%8B%97%EF%BC%8C%E4%B8%8D%E5%81%9A%E4%B8%AD%E5%9B%BD%E4%BA%BA/)

-   [Filestorm - 知乎](https://www.zhihu.com/people/filestorm/answers/by_votes) -<

    :   我丝毫不关心某一篇 paper 的署名是 SenseTime 还是 LinkFace，两家公司的关
        系丝毫不触及我的道德神经。但是相对地，做技术的人应当具有对技术本身的洁
        癖——发表出来的工作是否真的有效。我亲手复现过商汤曹旭东和徐立的一些论文，
        确实 work，也正是因此，他们才是我尊重的研究员。我想这种尊重的感觉恰恰
        是学术圈里人与人之间关系的基础。

        首先，作为一本教材，PRML 的勘误实在太多了！！初撸公式的同学应该培养对每
        处上下标，字体，以及常用字母的感觉（比如花体表示集合，上标下标一个表示
        样本编号一个表示 feature 编号）。虽然 machine learning 不像微分几何那样
        严格按照 Einstein notation 走。而 PRML 在这块儿基本上是意识流，有不少不
        严谨之处，勘误表里都没记下来。

        作为一名 GPA 学渣，我个人完全没有出身学校或者学习成绩的 bias。但是对于
        科研这边来说，我还没有在线下接触过非 985/211 学校的同学在 top
        journal/conference 上发表过 paper。Sad but true，中国教育资源的分配离平
        均还差的很远，所以客观地说，渣硕里面有研究能力的人确实比较少见。

        至于学历，我们完全没有只招 phd 这样的规定。我本科时候发过挺多 paper，
        Naiyan 和 Naiyan 家领导在本科期间也都做过非常牛逼的研究。所以归根结底还
        是看专业素养。paper 什么的更多是一个佐证而已。

        ![](https://pic1.zhimg.com/d8d479d57d050e32c1d77bb859d61ce2_r.jpg)

        若是从想象力，建模能力，创新能力，以及对概念理解的深入程度上，以我采样
        过的美国 top 10 的几个学校的同学中看来，中国人和印度人基本是完败。

        一般说 “神经网络算法” 是指 linear sum + hinge/sigmoid loss + back
        propagation。而这个 http://digicortex.net 并非此类模型，它是个 spiking
        neuron model（抱歉英文术语太多，好多词实在找不出中文翻译）。

-   [Body proportions - Wikipedia](https://en.wikipedia.org/wiki/Body_proportions) -<

    :   While there is significant variation in anatomical proportions between
        people, there are many references to body proportions that are intended
        to be canonical, either in art, measurement, or medicine.

        Similarly, in art, body proportions are the study of relation of human
        or animal body parts to each other and to the whole. These ratios are
        used in veristic depictions of the figure, and also become part of an
        aesthetic canon within a culture.

        头身是身高与头部的比例，几头身代表身高为头高的几倍。一般真实人类的成人
        头身比例大致在六至八头身之间，侏儒症患者可能只有四至五头身，某些模特儿
        可能达到九头身。但身材好坏和头身没有太大关联，在艺术家眼中，以肚脐为分
        界，下肢与身高比要接近 1：1.618 的黄金比例[1]，才是被认为最美的，而卢浮
        宫所展出的米洛的维纳斯被誉为最美的人体雕像 [2]。以从下往上的角度或运用
        广角镜头的摄影手法，能够在视觉上让头身比例变大 [3]。

        ![](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2a/Human_development_neoteny_body_and_head_proportions_pedomorphy_maturation_aging_growth.png/440px-Human_development_neoteny_body_and_head_proportions_pedomorphy_maturation_aging_growth.png)

-   [无人驾驶车 - 知乎](https://www.zhihu.com/topic/19653871/top-answers) -<

    :
        但是激光雷达也有一些先天的缺点，导致了并不是一个做自动驾驶很合适的方案
        (如下基于 velodyne 64 线激光雷达的数据)：

        -   探测距离：当前 Velodyne 的 64 线激光雷达有效探测距离为 120 米，360
            度，在车载计算机反应速度足够快的情况下，预留的刹车反映时延也还是太
            小；相对来说，人的眼睛发现几百米远的车道上威胁是很容易的
        -   探测精度：激光雷达的工作方式也是离散的，记得在 120 米距离上垂直和水
            平分辨率已经是 0.3-0.5 米的级别，意味着在这个距离上站着的一个人是有
            可能被激光雷达忽视的，只有到了更近的距离，才能被扫描发现
        -   扫描频率：Velodyne 64 的最高扫描频率只能达到 15Hz，相当于视频帧率的
            15fps，而且因为是 360 扫描，加上数据缓存和回传的时间，这个时延是很
            恐怖的，根本无法让自动驾驶汽车提高行驶速度，在 120 公里时速下，单单
            1 帧扫描的时间就可以让车辆行驶出去 2.222 米；而同期的工业摄像头，被
            用在汽车上的通常是120Hz 起的，上 1000Hz 的摄像头也不难买到
        -   镜面黑洞：激光雷达依靠反射激光的时延来探测每个点的距离，但如果扫描
            的物体反射能力较好且不是正对激光雷达，就会导致此处探测不到反射的激
            光，对激光雷达而言，这就是个距离无限远的黑洞；同时对雪、雾天气的激
            光反射而言，返回信号就是一大堆噪点
        -   寿命：毕竟是整天露在外面不断旋转的光学设备，这寿命不难想象
        -   变态的价格：一年多前我所接触的 Velodyne 64，出厂价格 7 万美元，到中
            国是 10 万美元左右

        对于大部分人大部分情况下驾驶都是一件重复而低效的任务，将其让工具做来自
        动化显然符合技术发展的趋势。


        相比于互联网公司 “把传感器都往车上堆” 的脑回路，车企会更注重于 “当前的
        传感器配置能不能实现我最初定下的功能” 和 “保证安全和性能的前提下，是否
        有成本更低的替代方案”，即以目标为导向地配置传感器。

        他们注重的是落地。目的是挣钱，而不是炫技。

