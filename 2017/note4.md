---
title: Working Notes
---

-   https://help.ubuntu.com/community/Lubuntu/Documentation/EditingTheMenu

-   chrome with proxy

    ```
    chromium-browser --proxy-server="socks5://127.0.0.1:1080"
    ```

    /usr/share/applications

    /home/tzx/.local/share/applications


-   MISC -<

    :   Ciao

            英 [tʃaʊ] 美 [tʃaʊ]

                int. （意）你好；再见（见面问候语或告别语）
                n. (Ciao)人名；(意)恰奥

        dodger

            英 ['dɒdʒə] 美 ['dɑdʒɚ]

                n. 欺瞒者；躲避者

        sanity

            英 ['sænɪtɪ] 美 ['sænəti]

                n. 明智；头脑清楚；精神健全；通情达理

-   办理护照相关内容：

    :   -   1）本人必须亲自在户口所在地办理护照。提供户口办理护照的信息供你参考
            吧，北京的办理周期是9天（含周六日），在各个区县出入境管理处办理，可
            以跨区办理不受户口在某个区县的限制。其他省市地区得看当地的出入境管
            理处具体规定。
        -   2）办理护照所需材料：2寸浅蓝或白底照片1张（贴在申请表上使用的）、身
            份证原件复印件（正反面均复印）、户口簿原件复印件（首页、个人资料页、
            变更页均复印）、表格一份（现场填写即可）、200元。
        -   3)提示：A、必须本人亲自前往办理，因为需要现场拍照用在护照上的。B、
            建议复印好带去，现场复印比较贵。到出入境管理处，先填表，然后去拍数
            码照，拍的照是用在护照上的，不花钱，拍完表格上会被贴一张条形码，接
            着就去排队交材料交钱即可。


-   showdowsocks

    :   ```bash
        sudo apt-get install libbotan1.10-dev
        sudo apt-get install libzbar-dev libzbarqt-dev
        sudo apt-get install libappindicator-dev
        sudo apt-get install qt5-qmake qt5-default qtbase5-dev libbotan1.10-dev gcc-4.8 libqrencode-dev libzbar-dev libappindicator-dev libqtshadowsocks-dev
        sudo add-apt-repository ppa:hzwhuang/ss-qt5 -y && sudo apt-get -qq update

        sudo apt-get install texlive-full
        sudo apt-get install make gcc g++ pkg-config libx11-dev libxtst-dev
        sudo apt-get install ttf-inconsolata
        sudo apt-get update
        sudo apt-get install git zsh curl tmux xclip
        curl -L http://install.ohmyz.sh | sh
        echo 'alias clip="xclip -selection clipboard"' >> ~/.zshrc
        ```

        https://github.com/shadowsocks/shadowsocks-qt5.git

-   Ubuntu -<

    :   prerequisites

        ```bash
        sudo apt-get install --assume-yes build-essential cmake git
        sudo apt-get install --assume-yes build-essential pkg-config unzip ffmpeg qtbase5-dev python-dev python3-dev python-numpy python3-numpy
        sudo apt-get install --assume-yes libopencv-dev libgtk-3-dev libdc1394-22 libdc1394-22-dev libjpeg-dev libpng12-dev libtiff5-dev libjasper-dev
        sudo apt-get install --assume-yes libavcodec-dev libavformat-dev libswscale-dev libxine2-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev
        sudo apt-get install --assume-yes libv4l-dev libtbb-dev libfaac-dev libmp3lame-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev
        sudo apt-get install --assume-yes libvorbis-dev libxvidcore-dev v4l-utils

        sudo apt-get install -y libcurl4-openssl-dev
        sudo rosdep init
        sudo apt-get install python-rosinstall
        source /opt/ros/kinetic/setup.zsh

        source /opt/ros/kinetic/setup.bash

        sudo apt-get install sqlitebrowser
        ```

-   我想社会会发展到一天，女人只要生了孩子，国家就会提供住房补贴，基本生活费，
    婴儿食品保障，免费托儿所的。这不是出于善心，而是经济发展和人口教育成本上升
    的自然后果。婚姻制度而将因而解体。在这种社会成长起来的孩子，他忠诚的第一对
    象也将是国家而非家庭，甚至不是他的母亲。

-   ![](http://ww1.sinaimg.cn/large/67d6aa46gw1fbljm25kwxj20dw2nujz1.jpg)

    :   众所周知，通用处理器（CPU）的摩尔定律已入暮年，而机器学习和 Web 服务的
        规模却在指数级增长。人们使用定制硬件来加速常见的计算任务，然而日新月异
        的行业又要求这些定制的硬件可被重新编程来执行新类型的计算任务。FPGA
        (Field Programmable Gate Array) 正是一种硬件可重构的体系结构，常年来被
        用作专用芯片（ASIC）的小批量替代品，然而近年来在微软、百度等公司的数据
        中心大规模部署，以同时提供强大的计算能力和足够的灵活性。

-   http://m.weibo.cn/2201566133/4063053899793086

    :   “预测的准确率，我们现在已经做到北京未来 6 个小时的准确率达到了 75%，在深圳
        和广州做到了 80%。未来 48 个小时的预测准确率达到 50%。大家不要小看 50% 的准确率，
        它其实已经非常高了。相比之下，天气预报 24 小时的准确率只有 40%。”郑宇说。

        另一方面，日本企业老气横秋、死气沉沉，有活力的新企业根本没有，和中美相
        比截然不同。跨领域、改变商业模式的大创新也出不来，近年来世界上的大创新
        主要是美国在搞，中国也有一些。日本大企业有权力的决策人员基本是老头，领
        导者平均年龄高达 60 岁，而且极度保守，对于世界科技与生活剧烈的改变既想
        不到也无法接受，只会让研发人员进行一些精致的研发。有些日本高管不愿意看
        电子邮件，让手下人打印出来看。高管们不想学习新东西，旧软件一直用，新软
        件更好用但是在公司内部无法推动。日本的硬件研发传统也与此相关，高管们就
        是这么过来的，对于硬件研发能理解，对于元器件做精做深是支持的。

-   总结：想法和创意连小学生都有，改变世界的雄心和哲学体系每个大学生都有一套。这个世界稀缺的是组织和后勤。

    选择市场，选择伙伴，都不是由欲望（比如说愿景）决定的，而是由实力决定的。曾
    国藩战术战略并不出众，但他重视两件事，一是练兵，二是后勤。这就使他能不管怎
    么失败，总是能再起。内部的，后方的才是最根本的。

omnipotent

    US[ɑm'nɪpətənt]UK[ɒm'nɪpətənt]

        adj.万能的；全能的；无所不能的
        n.万能者；神
        网络有无限能力的；大哥无所不能呀

-   我一直觉得，我的性格是那种，如果在有选择自由的情况下，还愿意做自己不喜欢做的事情，那肯定是有一种我认为正确的价值观或者理想之类的东西在激励我，我相信这也是很多人的情况。
-   [站立桌电脑桌移动办公桌笔记本简易现代站式写字台懒人书桌](https://detail.tmall.com/item.htm?spm=a230r.1.14.97.ZncGnG&id=527720021021&ns=1&abbucket=10&skuId=3140256231021)

-   [kdiff3](http://kdiff3.sourceforge.net/doc/screenshots.html)

    :   sudo cp git-kdiff3 "`git --exec-path`"

        https://github.com/id-Software/Quake-2.git
        https://github.com/CloudCompare/CloudCompare.git

-   腾讯大王卡

-   stewForAni.github.io

-   [把项目里用到的一个倒计时动画单独撸出来了，有兴趣的可以看看哟，不是很精确，慎用哈！！！！哈哈哈哈 - V2EX](https://www.v2ex.com/t/293992) -<

    :   你不能拿别人的东西骗赞/骗 star 啊。

-   [《游戏引擎架构》信息总汇 - Milo Yip - 博客园](http://www.cnblogs.com/miloyip/p/GameEngineArchitecture.html#) -<

    :   https://github.com/mrdoob/three.js.git

        [toji/gl-matrix: Javascript Matrix and Vector library for High Performance WebGL apps](https://github.com/toji/gl-matrix)

        https://github.com/toji/gl-matrix
        http://code.google.com/p/glmatrix/
        https://www.youtube.com/watch?v=tgVLb6fOVVc&list=PLFdY_rJNii24jT8j5FUl4Othu7dTtzMgy
        http://graphics.ucsd.edu/courses/cse169_w05/CSE169_04.ppt

-   MVP stands for Matrix-Vector Product

-   五十坐地能吸土

-   http://stackoverflow.com/questions/40022160/why-does-intellij-show-java-lang-string-as-deprecated

-   http://www.google.com/search?hl=en&q=cortex+command&um=1&ie=UTF-8&tbo=u&tbs=vid:1&source=og&sa=N&tab=wv

-   我很是不理解为什么都 2016 年了，您还拿 90 后说事儿？90 年出生的小朋友现在都
    26 了。00 后出生的现在也 16 了。您也太天真了吧，还以为现在 80 后是中流砥柱
    嘛？您应该好好想想自己是不是装嫩装的也太浮夸了。

-   [怎样成为一个优秀的文坛装逼犯 （续完）_罗永浩_新浪博客](http://blog.sina.com.cn/s/blog_48264673010002ae.html) -<

    :   Edmund Burke 的名言“All that is needed for the triumph of misguided
        cause is that good people do nothing.”（意为“谬误想要获得胜利，只需好人
        袖手旁观，”或“误导之所以得逞，就是因为好人无所作为”）被张亚哲老师无比累
        赘并且是无中生有地翻译成了“犹存于世的妄言惑众之辞得以甚嚣尘上之势，皆因
        人类英雄义士袖手旁观麻木不仁。”这就好像是把“no pay, no gain”(指没有付出
        就没有收获，也可以意译成一分耕耘，一分收获) 这样的简洁表达翻译成“试图拒
        绝卧薪尝胆断然回避付出艰苦卓绝之努力者终将面临颗粒无收晚景凄凉之人生结
        局”一样傻逼。我想张亚哲老师这样翻译的本来目的是装逼，但显然再一次，象他
        绝大部分的时候一样，没装好。

        http://blog.csdn.net/g9yuayon/article/details/34882

-   Ken Thompson，C 语言前身 B 语言的作者，Unix 的发明人之一 (另一个是 Dennis
    M. Riche 老大，被尊为 DMR)，Belle(一个厉害的国际象棋程序) 的作者之一, 操作
    系统 Plan 9 的主要作者 (另一个是大牛人 Rob Pike, 前不久被 google 挖走了)。
    Ken 爷爷也算是计算机历史上开天辟地的人物了。1969 年还是计算机史前时代，普通
    人都认为只有大型机才能运行通用的操作系统，小型机只有高山仰止的份儿。至于用
    高级语言来写操作系统，更是笑谈。Ken 爷爷自然不是池中物，于是他和 DMR 怒了，
    在 1969 年到 1970 间用汇编在 PDP-7 上写出了 UNIX 的第一个版本。他们并不知道
    ，一场轰轰烈烈的 UNIX 传奇由此拉开了序幕。Ken 爷爷在 1971 年又把 Unix 用 C
    重写，于是 C 在随后 20 年成就了不知多少豪杰的梦想和光荣。

    Ken 爷爷还有段佳话： 装了 UNIX 的 PDP-11 最早被安装在 Bell Lab 里供大家日常
    使用。很快大家就发现 Ken 爷爷总能进入他们的帐户，获得最高权限。Bell Lab 里
    的科学家都心比天高，当然被搞得郁闷无比。于是有高手怒了，跳出来分析了 UNIX
    代码，找到后门，修改代码，然后重新编译了整个 UNIX。就在大家都以为“这个世界
    清净了”的时候，他们发现 Ken 爷爷还是轻而易举地拿到他们的帐户权限，百思不解
    后，只好继续郁闷。谁知道这一郁闷，就郁闷了 14 年，直到 Ken 爷爷道出个中缘由
    。原来，代码里的确有后门，但后门不在 Unix 代码里，而在编译 Unix 代码的 C 编
    译器里。每次 C 编译器编译 UNIX 的代码，就自动生成后门代码。而整个 Bell Lab
    的人，都是用 Ken 爷爷的 C 编译器。:D

    http://www.cs.bell-labs.com/who/rob/utah2000.pdf

    http://blog.csdn.net/g9yuayon/article/details/38393

    /g9yuayon

-   [八卦高德纳](https://book.douban.com/review/5384627/) -<

    :   lol.changwei.me
