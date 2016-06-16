## 历史笔记 1

原载于 <https://github.com/district10/blog/blob/master/_pages/notes.md>。

---

[横山宏---科幻军事之父](http://site.douban.com/106758/widget/notes/174077/note/148694802/)

:   这姑娘逗……

    - 谁说只有男生才会喜欢机械人。
    - 我从小就很喜欢破铜烂铁的小玩意。机械人更是无比中意。
    - 当然,那时候我只有一些塑胶的模型。基本是经常跩在手心里把玩的。
    - 尤其是打针要打屁股的时候。我妈就会说机器人打针是不会哭的。
    - OK。我也可以。。

[CCMakefile4iOS/Makefile at master · webfrogs/CCMakefile4iOS](https://github.com/webfrogs/CCMakefile4iOS/blob/master/Makefile)

[windows - How to pass command line parameters to a batch file? - Stack Overflow](http://stackoverflow.com/questions/26551/how-to-pass-command-line-parameters-to-a-batch-file)

:   ```bash
    echo off
    fake-command /u %1 /p %2 %*
    ```

    When you run:

    ```shell
    test-command admin password foo bar
    ```

    the above batch file will run:
    ```shell
    fake-command /u admin /p password foo bar
    ```

    Edit: Actually, `%*` means "all", so one would actually need to use shift to do the above:

    ```shell
    echo off
    set arg1=%1
    set arg2=%2
    shift
    shift
    fake-command /u %arg1% /p %arg2% %*
    ```

[启动或停止 Web 服务器 (IIS 8)](https://technet.microsoft.com/zh-cn/library/jj635851.aspx)

:   用 nodejs 开 80 端口的 http 服务器，需要先关闭 IIS：`net stop WAS`（实际上用 `net pause WAS` 更好）

    add `blog.sh` to *C:\Users\Administrator\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup*:

    ```shell
    #!/bin/bash

    net pause WAS
    (cd D:/tzx/git/blog/publish && http-server -p 80)
    ```

    blog.cmd

    ```cmd
    START /B CMD /C CALL "blog.sh"
    ```

[Batch Indentation with Emacs](http://www.cslab.pepperdine.edu/warford/BatchIndentationEmacs.html)

[Keybr.com 小工具](http://whudoc.qiniudn.com/keybr.html)

[氛围音乐推荐（看书，写论文，调整心情必备良药） - 简书](http://www.jianshu.com/p/8b086b1c09df)

[优秀且免费的照片库 - 简书](http://www.jianshu.com/p/5b7b09b93875#)

[CTest:Using CTEST and CDASH without CMAKE - KitwarePublic](http://www.vtk.org/Wiki/CTest%3aUsing_CTEST_and_CDASH_without_CMAKE#Examples_2)

[Qt Plotting Widget QCustomPlot - Introduction](http://www.qcustomplot.com/)

[qwt-plot3d download | SourceForge.net](http://sourceforge.net/projects/qwtplot3d/)

[c++ - Why is "using namespace std;" considered bad practice? - Stack Overflow](http://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice#comment1299902_1452738)

[productivity - What is your most productive shortcut with Vim? - Stack Overflow](http://stackoverflow.com/questions/1218390/what-is-your-most-productive-shortcut-with-vim?rq=1)

[字符编码笔记：ASCII，Unicode和UTF-8 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2007/10/ascii_unicode_and_utf-8.html)

[怎样区别公司名称后缀 - 简书](http://www.jianshu.com/p/830036e46179)

[shell - How can I concatenate string variables in Bash? - Stack Overflow](http://stackoverflow.com/questions/4181703/how-can-i-concatenate-string-variables-in-bash/18041780#18041780)

[crop - Cropping a PDF using Ghostscript 9.01 - Stack Overflow](http://stackoverflow.com/questions/6183479/cropping-a-pdf-using-ghostscript-9-01)

:   ```bash
    gswin64c.exe \
    -o cropped.pdf \
    -sDEVICE=pdfwrite \
    -c "[/CropBox [24 158.4 465.4 791.6]" \
    -c " /PAGES pdfmark" \
    -f test.pdf
    ```
[SVG Pocket Guide](http://svgpocketguide.com/book/)

[在 org-mode 中使用 Graphviz 畫關係圖 | coldnew's blog](http://coldnew.github.io/blog/2013/07-13_07e15/)

[org-mode, “文学编程” , 自动化报告](http://dayigu.github.io/OrgModeAndLiterateProgramming.html)

[GitHub does dotfiles - dotfiles.github.io](https://dotfiles.github.io/)

[Read Lisp, Tweak Emacs: How to read Emacs Lisp so that you can customize Emacs](http://emacslife.com/how-to-read-emacs-lisp.html#orgheadline1)

[The Linux desktop experience is killing Linux on the desktop - (think)](http://batsov.com/articles/2011/06/11/linux-desktop-experience-killing-linux-on-the-desktop/)

[42+ Text-Editing Keyboard Shortcuts That Work Almost Everywhere](http://www.howtogeek.com/115664/42-text-editing-keyboard-shortcuts-that-work-almost-everywhere/)

[ssh - Multiple public keys for one user - Server Fault](http://serverfault.com/questions/221760/multiple-public-keys-for-one-user)

[Code Charts](http://www.unicode.org/charts/)

[Perl Regular Expression Syntax - 1.49.0](http://www.boost.org/doc/libs/1_49_0/libs/regex/doc/html/boost_regex/syntax/perl_syntax.html#boost_regex.syntax.perl_syntax.perl_regular_expression_syntax)

[网络科学导论](http://zhiyuan.sjtu.edu.cn/Course/netsci.htm)

:   Network Science: An Introduction

    作者:

      - 汪小帆 (Wang Xiaofan, 上海交通大学)
      - 李  翔 (Li Xiang, 复旦大学)
      - 陈关荣 (Chen Guanrong, 香港城市大学)

    出版社:

      - 高等教育出版社 (Higher Education Press)

    简介:

    对各种复杂网络的定量与定性特征的科学理解已成为网络时代科学研究中一个极其重
    要的挑战性课题，网络科学就是一门正在兴起的面对这一挑战的交叉性学科。本书致
    力于系统地介绍网络科学的基本概念、思想和方法，使得具有高等数学基础的读者都
    能够看懂，并具备把网络科学方法用于实际网络分析的能力。为此，本书没有过多地
    陷入数学和物理推导，而是更为关注网络科学的思维习惯和研究方式。本书在概要介
    绍了网络科学的背景和研究意义之后，分为四个部分详细介绍了网络基本概念、网络
    拓扑性质、网络拓扑模型和网络动力学。
    本书适合作为研究生和高年级本科生的网络科学教材，也可供自然科学、工程技术科学和社会科学领域的研究人员与学生参考。

[王友来：《我在美国坐牢——美国联邦监狱揭密》 | 海外文摘 - Bay Area Chinese--灣區華人 - Powered by PHPWind](http://www.bachinese.com/forum/simple/?t20389.html)

:   晚饭在图书馆借书，发现了令我奇怪的事情。金三角坤沙贩毒集团的贩毒分子赵福生
    （他是坤沙的侄子）也在图书馆借了《毛泽东著作选读》甲种本上、下集两本。我惊
    诧不已，我讲，毛泽东的著作在中国现在很少人读它了，你们怎么还在读这个东西？
    赵回答说，他们的组织（他们不说贩毒集团，而称“我们的组织”，金三角的毒贩都这
    么称呼）当年都是按毛泽东的思想和理论组织起来的，屡试不爽，很管用的。当年他
    们在金三角，一般人很难看到毛的著作，只是在高层才有那么一两本，供高层领导阅
    读，他当时是没有资格读的。现在到美国以后，才可能有机会很好地读一下。他说，
    根据当时高层领导讲，毛的著作很好，很有用，在如果成立、壮大组织，如何打仗是
    很管用的。他的话立即得到了香港黑社会大圈帮老大甘某的赞同。他说，是的，他以
    前的一个手下告诉他，毛的理论很有用，他们借鉴了一条 “枪杆子里面出政权”，很好，
    必须要有自己的武装，于是他们组织就出资购买了很多枝枪，还有香港黑社会的许多
    组织，都是按毛的理论搞起来的，毛泽东是他们的祖宗。我笑他们，我讲，毛泽东是
    革命领袖，才成就了大业，你们虽然也用毛的理论武装，但你们这帮人如果敢在毛的
    地盘上闹事，毛一定会把你们全部收拾掉的。他们说，是的，毛的革命是有政治纲领，
    所以，毛成功了，就是领袖，我们的纲领就是钱，一切为了钱，所以他们失败了，被
    抓坐牢，成了囚犯。

    两个小时讲完，师姐提议，大家唱一首歌，台下一福州人提议说，大家唱《东方红》
    好不好？大家齐声响应，“好”。长老和师姐面露难色，但也不好说什么。我知道，师
    姐她的本意是想让大家唱上一次教的佛学的歌。于是在一人叫起下，三十多人齐声唱
    起了“东方红，太阳升，中国出了个毛泽东______”。老实说，这首歌现在在中国已很
    少有人、甚至没有人唱了。没想到，在美帝国主义的联邦监狱，被一伙囚犯唱起，也
    可以说，是一个很大的讽刺。

    带着这样的疑问，我专门问了几个屡次入室抢劫的人，综合数个人的意见，他们是这
    样的观点：

    -   语言问题。你要抢别人，总要让被抢着明白你要干什么，那些抢劫者绝大多数文
        化程度很低，连 26 个英文字母都讲不全，让他们用英语去抢劫，真太难为他们了，
        老外根本听不懂，而自己的同胞则不存在语言障碍；
    -   老外平时几乎不带现金，消费时总是用各种卡，你抢来什么用也没有，而且老外
        喜欢超前消费，下个月的钱还没到帐，这个月先用，把它预先消费了，谈不上有
        余钱在身边，而华人，多数不用卡消费，喜欢现金交易，平时身上总带有现金，
        喜欢存钱，有多少钱办多少事，超前消费的很少，所以，总有钱带在身边或存放
        于家中；
    -   观点不一样。老外一遇抢劫，不管有无损失多少钱财，总是去报案，犯罪分子被
        抓住审判时，老外经常去当证人作证。而华人，一般自己被抢不多或没有物质损
        失时，一般不会去报案，即使报案，当抢劫者被审时，也不愿出庭当证人，一是
        怕浪费时间，影响打工收入，二是怕当证人被报复。由于上述因素的存在就形成
        了老乡抢老乡、华人抢华人。还有几个事例可以说明：曾有 2 名福州人，抢了一
        名意大利黑手党人的钱，后被黑手党抓去 2 名福州人，一个被推进巨大的绞肉机，
        另一个人当场目睹后方了回去，让他报个信，以后谁敢对意大利人行抢，这就是
        下场。此例在福州人中流传和影响甚广，故华人无人去抢意大利人。韩国人、印
        度人这些少数族裔人一般群聚而居，很团结，一人有难八家援助，华人也不敢动
        他们。还有那些黑人，就更差劲儿，经常上顿吃完，下顿饭还不知何处去找的主
        儿，你抢他？他还想去抢你呢。

    正文 第二十六节 串谋的株连

    :   美国有个“串谋”犯罪的法律规定，它不是一个特定的罪名，串谋的内容指向什么，
        就是串谋犯某罪。这个“串谋”的法律规定，是从六十年代初肯尼迪总统被刺杀后
        才新立的法。当时立法本意是，比如刺杀总统，并不要等到把总统杀了才能给你
        定罪，而是在你想杀总统的时候，就可以定你的罪，即它不是说你做了什么，而
        是说，你想做什么。因为使用“串谋”基本上不要什么证据，只要他认为你“想”，
        就可定罪，故此限制极严，只是限制在几种重罪情况下才可以使用。但后来，在
        司法操作中，发现这个武器很好使用，大家知道，美国是个判例法国家，只要有
        一个法官用这个串谋定了某个罪，其他法官也可以使用，甲法官用一个，乙法官
        用一个，这样，串谋使用的罪名就被无限扩大解释了，现在几乎所有的罪都可以
        用“串谋”了。在“串谋”这把刀子下，绝大部分被告束手就擒、认罪服法。现在几
        乎变成不要任何证据都可以指你串谋了，无限扩大株连众多无辜者，甚至没有案
        件，也可以制造案件出来。

        一个警官可以去制造犯罪，或者在 FBI 处领钱的线人或是某个急于与合作的证人。
        上述这样的人，他可以打电话给他的朋友或认识的人，喂，我这里有白粉，你要
        不要，每斤只售 2 万元（市场行情为 2-4 万元），你没钱也可以，先把东西领去，
        买了以后再给我钱。只要你没有表示反对，也没有去报警，好，你就是串谋贩卖
        毒品，抓你入狱；还有的装出一付可怜相，如家中有急事，有点儿白粉，请千万
        帮助卖一点儿出去救急，这个接电话的人推托不过，答应问问看，这也构成串谋
        犯罪，你连毒品的面都没见过，就可定罪了。对方是有心害你的，已经在电话录
        音，他又是证人，好，你串谋的证据就确凿了。

        以上讲的是你的朋友或熟人陷害你，还有你压根不认识的人也可以这样害你。你
        接到一个电话，你还没来得及说什么，对方先说，啊哈，好久没有联系了，近来
        情况好吧，家里都还好吧，非常想念你，有时间的话当面聊聊，好像是很熟的朋
        友一样。当你听了半天，还不知道对方是谁，你会说对不起，你找谁？对方好像
        才大梦初醒，啊哈，对不起，你贵姓？你说你姓李，对方马上说，太对不起了，
        我电话打错了，耽误了您的时间，实在是不好意思。当你准备挂断电话时，对方
        会说，不过，我打错电话打到你，也是咱们有缘分，要不然怎么能就把电话打给
        你，而没有打到别人家里？你是在做什么，看我们有无合作干事情的可能？闲聊
        几句，挂断电话，这下就是认识了，第二次，第三次就好像真和老朋友一样聊了
        起来，再就是引你上钩，陷害你，接上面的伎俩来录音等。

    正文 第二十七节 多事的美国医生

    :   OTV 学校的杨小姐请了北京来的刘先生（已为美国公民）在教堂专给华人讲他在
        美国的体会和教训。他用他的切身的体会讲了一件事。一天晚上，他和妻子给仅
        两岁的小孩洗澡，小孩摔了，他夫妇两人就带小孩去医院，经检查是某处骨折，
        医生问明当时的情况后，操起电话就报警，警官很快来了，说他夫妇虐待儿童，
        要把他二人全抓走，小孩交给其他家庭代管。幸亏他英语不错，当即向警官求情
        （在此时讲道理是没用的）可否只抓他一人，让他妻子带孩子，让别人带他不放
        心。警官开始不同意，说他们虐待儿童，已没有资格在监护孩子了，最后他反复
        讲，责任全在他，与妻子没关系，警官才同意之抓走他一人，把他送进了牢房。
        当然时隔不久，他就获保出狱，但为此他吃了两年多的官司，花了好几万美元。
        刘先生说，在美国是很容易吃官司的，如他那件事，在中国就根本不是问题，亲
        生父母根本不可能虐待自己的孩子，但在美国一口咬定你是犯法，华人英语不通、
        法律不懂，难以解释和沟通，很容易吃亏，受到不公正的对待。美国人也真是爱
        管闲事，医生的职责，是救死扶伤，至于是如何伤的，应负什么责任，这与医生
        的职责毫不相干，但似乎老美不这么看问题。也许，美国的串谋法吧，此时只要
        你知道，如不报案，就构成了串谋虐待儿童吧。刘先生也讲，美国很霸道的，在
        墨西哥有一个全国有名的医生，他会配置药，也会配置毒品，就有一部分他配置
        的毒品流入了美国，美国 FBI 就派人潜入墨国，将他绑架到了美国，并给判了刑。
        这种事情在中国是不可思议的，别人再坏，毕竟不是在你的国土上，你怎么能去
        别国绑架人呢？昆沙集团的那是几个人都很有意见，他们全都从未到过美国，却
        被美国人抓到美国，说犯了美国法，要判刑。他们说，做毒品有行规，从不问客
        人将货拿到哪里去，一手交钱，一手交货，两不多问。美国人的逻辑，你卖的毒
        品你应当知道有可能卖去美国，你还在做，就犯了美国法，就抓你来美国受审。

        马来西亚的陈炜宗讲，他在佛基尼亚的监狱里呆过一段时间，他的英文很不错，认识
        了很多的黑人囚犯，他讲，在监狱，男囚犯可以很轻易地与女 CO 性交易。当然女 CO
        也是黑人，只需 50 美元的代价，那些有钱的男囚如果还想找外面漂亮的女人，或自
        己的妻子、女友，做法是这样的，这个犯人假装已经皈依了基督教或其他什么教，头
        上戴块布，这样就权利要求监狱方请外面的传教士、修女或神父来监狱为他作祷告，
        洗刷他的灵魂。那么，外面的性交对象也穿上神职人员的服装来到监狱的教堂里，这
        时 CO 就带着囚犯也去教堂，按规定，CO 应当进去教堂现场监督祷告，但只要你付
        50 元给这个 CO，他就绝不进教堂，致使站在教堂外面等候，里面男犯便对假扮神职
        人员的女性开始“活动”，就可以在庄严肃穆的教堂里，在圣母或耶稣神圣的慈祥的目
        光注视下，在现代化设备武装起来的戒备森严的美国联邦监狱里，进行性交易。事毕，
        男女二人可以整理好衣服，从容地从教堂里出来，CO 又将他们送回该去的地方，他刚
        才罪恶的灵魂已经得到了洗礼，升华，主已宽恕了他的罪孽。

        CO 自然另眼相看、相待，对于那些黑人、西班牙人，一般没钱，那你只能严格按监规
        办事了。在这里，只要有钱，仍然能过上很不错的生活，享有很多的自由和特权。钱
        能通神，这是全世界通行的真理。

    正文 第四十三节 政府律师的虚伪性

    :   对于没有钱或者其他原因而不请律师（如认罪的人，请律师是没有必要的），美
        国司法貌似公正，给你指定律师，特别是那些少数族裔的人，不但给律师，连翻
        译都给你，不用花钱的，表面上很能迷惑一些人的。但实际上，你的诉讼权利和
        实体权利能得到维护吗？依我的律师和翻译的情况来判断，根本不能。首先，所
        有的文件都是英文的，这也可以理解，因为这是在美国。问题是律师带着翻译来，
        只是很随便地、简单地给你讲一下概要内容，究竟怎么样、具体怎么样，你无从
        得知。你问多几句，律师会讲，今天我只有半小时或一小时时间，还有别的事儿，
        不能回答你其他问题，然后就扬长而去了。我英文不过关，有那么多的法律术语
        的文件，在再三要求下，只翻译了那两页纸的起诉书，而且翻译的水平很差，中
        文语句都不通，其他几万页资料，根本不管你怎样去对待。至于那些自己花钱请
        的律师，马来陈说他请的律师，做任何一丁点儿的事都要付钱的。如一张文字，
        先不管内容，仅复印一张都要你付 15 美分，一盒磁带（从检方那里转录来的）
        都要收你 6 美元。还有什么电话单、费、停车费、每次和你会见的时间，都要你
        付费的，鬼知道，这些钱是否为你花的。你在监狱，根本没办法弄清这些事，只
        有让家里人付钱就是了，特别对于外籍人，无家人在美国，简直就是赤裸裸的敲
        诈。很多人说，美国的律师是不拿刀的强盗。让指定律师不花钱，特别是这种与
        打官司的人，是很吃亏的。没办法，他不挣我的钱，要尽量使他少花钱。现在不
        是他为我请翻译，而是我将大量的汉文译成英文给他。所以，在法律规定上的公
        正和实际行使这些权利的公正完全是两码事。

    正文 第五十一节 CIA特工的厉害之处

    :   CIA，即美国中央情报局，以前早闻其大名，印象中是专指情报和暗杀的。没想到
        我撞上了它（不，应当是它找上了我）。那个以开律师所为掩护的保罗，是典型
        的美国白人，蓝眼睛、黄头发，但他说起中文来，你想象不到是那么地流利，中
        国知识渊博。比如，我告诉他，我要回国了，以后我们电话联系，我说，我的家
        在中国西安，区号是 0910。他马上在电话上说，不对，你骗我，0910 是咸阳的
        区号，西安区号时029。我说是的，你没说错，当时我为什么将 029 说成 0910，
        是因为我想，我说咸阳，外面很少人知道，西安知名度高一些，可能会有人知道，
        且西安距咸阳仅 30 华里。但我根本没想，一个典型的美国白人竟连相邻两个城
        市的区号也能极快反应出来，几乎是不加思索，很多中国人也做不到这一点。当
        时我只认为他很博学，当我现在知道他是 CIA 工作人员后，也就可以理解了。他
        还知道西安的羊肉泡馍、葫芦头，知道西安医科大学、第四军医大学，还要给我
        家人介绍西安医科大学的名医生。说起南昌市，他和老付像在南昌生活很长时间
        的朋友一样，大谈南昌的有名建筑、大型企业，对这些情况，我都不知道。他还
        说中国的历史，大谈乾隆皇帝下江南、中国的成语。老实说，作为一个白种西方
        人，能讲流利的中文已很不错了，何况他更像个中国通。他娶的妻子是中国北京
        人，我见过（对中国的官场、社会、风土人情都非常了解，比一般中国人还了解
        得多）。作为一名 CIA 特工，他真是具备了这个才能，由此可知，CIA决不小视，
        非等闲之辈。

    正文 第六十四节 种族歧视的另一种形式

    :   在美国，种族歧视表现多个方面。有一对白人年轻大学生，在校恋爱，女的怀孕
        后生下一小孩，便和男的一起在卫生间将小孩溺死，结果法院判女的坐牢 2 年半，
        男的坐牢 2 年。而在同一法院，一个黑人青年则因杀死了六只猫，就被判刑 12
        年，平均杀死一只猫的刑期与杀死一个人的刑期相同。当然，最实质的问题是因
        为犯案者的肤色不同罢了。美国南部（在美国南部是仇视黑人最重的地方，南北
        战争就是解放南部黑奴的战争）某州的一所大学历史学教授，居然在电台上发表
        讲话讲，那些黑人到我们美国来，我们给他们提供了这样好的生活条件，还有我
        们的民主政治、信仰______如果当初我们不把他们（指黑人）买到美国来，他们
        现在仍在非洲国家挨饿______。真是一幅典型的强盗嘴脸。如果不是当初美国人
        将非洲的优等劳动力掠夺走，非洲的生产力就不会遭到破坏，这些劳动力没到美
        国来，美国也没有今天的繁荣。

    正文 第七十节 马太郎其人

    :   不知为什么，从洛杉矶那边转过来一人叫马伯潜，报纸上将他叫“作弊大王”，
        （其作案经过待以后详叙）。他特别崇拜日本，当然日语也讲得不错，他说他常
        去日本，连日本人都说他是日本大阪口音、大阪人，他对老外说他是日本人，对
        老外常以日本人自居，故我给他起个名字叫“马太郎”，这个名字很快在华人当中
        流传了开来，另外，他还是个台独分子，自称他是台湾大学经济管理系毕业的，
        和台北市长陈水扁是同学，他说大陆想统一台湾，也不是那么容易的事儿。有天
        早上，他在学校一进教室，一本正经地对大家说，中国大陆想统一台湾不可能了，
        我们问为什么，他说，美国、日本已经把台湾纳入了什么太平洋导弹防御体系，
        美国、日本不是那么好惹的，很多人立即反击他，大家纷纷说，美国、日本是什
        么玩意儿，在朝战、越战美国照样被打得落花流水，日本鬼子更是王八旦，早晚
        有一天，中国会收拾小日本的，美、日搞个导弹防御体系就把中国人吓住了，你
        该不是大脑进了水吧，马无言以对。其实，马太郎告诉我，他的父亲是山东青岛
        人，母亲是台湾人，有天早上，他对英文女老师讲，他是日本人，我当然听懂了，
        我就马上走过去对女老师说，马先生的父亲是中国青岛人，母亲是台湾人，台湾
        是中国的一个省。女老师意味深长地点头表示听懂了，马面色通红。马太郎虽然
        崇拜日本，鼓吹台独，但其受教育程度高，知识渊博，作为谈天说地的一个伙伴
        还可以，马也自视清高，从不和那些福州人往来。他大概认为我和他档次差不多，
        每次吃饭、操场散步、阅览室聊天，他都愿凑过来和我在一起。他对那些福州人
        不屑一顾，说他们严格意义上讲，不是人，那些福州人表达感情比较直观，因为
        马常鼓吹态度，所以经常扬言要修理他，在吃饭、散步时故意冲撞他。他如稍有
        不满定会遭到殴打，马又惧怕那些福州人的暴力，心中虽然十二万份瞧不起福州
        人，但在挑衅面前不敢怒也不敢言，平时只愿和我、马来陈、李参谋在一起。有
        一段时间，为了表示彻底洋化，几乎每天和白人老外打棒球和网球，他英文不错，
        就常在老外和警官面前卖弄和表现，结果聪明反被聪明误，监狱方看他英语不错，
        认为让他学英文没有必要了，而直接让他去捡垃圾。他觉得让他这个大学的高材
        生捡垃圾实在是有辱斯文，太降低了他的身份，想去学校当助教，请马来陈帮他
        给校长说，最后也没成功。

    正文 第七十四节 监狱里的性问题

    :   在监狱里流行着大量的黄色杂志、画刊，允许犯人订阅这些。据说监狱里曾经禁
        止犯人订阅和邮寄这些性刊物等，但被以《花花公子》为首的几家黄乐刊物告上
        了法庭，并且胜诉，于是这些东西在监狱的存在便合法化了。那些老外，见了东
        方人的黄色特写画面，一个个发出一声怪叫，甚至坐着下流的动作，毫不掩饰他
        的兴趣和思想。这也可能是长期性压抑所致，也反映出东西方人在文化观念上的
        不同。在房间内，床头、桌边、椅子上、甚至睡下铺的人在上铺的床底下面贴上
        和真人一样大小的裸女画。在浴室，经常看到扔在地上，或者水淋淋贴在墙上的
        这类图片。

    正文 第八十一节 美国监狱对重刑者的下马威

    :   美国对那些几十年几百年或者终身监禁的囚犯怎么对待呢？判决生效后（而且特
        别注明不得保释者），首先将你一人关在一个单独的房间，连门都用电焊焊死，
        连警官自己都开不了，一切吃、喝、拉、撒、睡全在这一个房间解决（当然，吃、
        喝自有人送的）。室内的床、椅等全是电焊焊死，四周和上下全为铁板焊成，摄
        像机从不同的角度 24 小时监控，没有任何绳索之类的东西供你上吊；四周墙壁
        使用厚的、硬的皮革制品包裹，没有可能让你去撞死；看病有医生在窗口给你治
        疗，在里面没有任何自杀的可能。最少先把你关上一年时间，再把被焊死的门等
        撬开，放你出来，实际上在里面的一年时间已把你的个性、棱角、野性、反抗、
        自杀精神全都磨光了，在精神上战胜了你、打垮了你，你只有活着、活下去的欲
        望，而且也是适应了这种独居一室的生活，再放你出来，与那些同样是终身监禁
        的囚犯放在一起，给你一个反差，条件比以前改善多了，起码是在一个群体中生
        活。大家都有相同的经历和感受，也互相鼓励和安慰，由不好到好，也使你在一
        定程度上满足处境，安于现状，安于牢狱生活，不会闹事，直到老死狱中。据说
        这种方法是很多心理学家等共同研制出来的。

    正文 第八十八节 黑社会人说黑社会

    :   和韩得平聊天，他倒坦率，承认他就是“飞龙帮”成员。他说，联邦以黑社会为名
        抓了不少人，其实很多不是帮会的。那些从大陆偷渡来的福建人，有一小部分，
        好吃懒做，去打工，受不了那个苦，但又要生存，于是就加入了帮会，可以不工
        作，在“老大”的领导下，收一些店家、小商店的保护费，但也很有限。加入帮会，
        对那些小喽啰，并没有多大的实际意义，其好处就是，你的偷渡费可以以帮会为
        靠山不交或少交，还有，在外面打着帮会的牌子，没有人敢欺负你，而你还可以
        欺负别人，白吃几顿饭等。他说，年轻人气盛，喜欢打打杀杀，自以为英雄，其
        实帮会并不养这些人，你出去可以打着帮会的牌子去闯，吓唬别人。他说，打劫
        （即抢劫）是帮会分子最基本的 ABC课程，主要是事先踩好点，入室抢劫，主要
        抢的对象是他们的福建同乡，他说，美国有几十万福建人，你每天抢一家也抢不
        完的。他说，包括他自己在内，这些人全是社会的垃圾，好逸恶劳，既不想干活，
        又想过舒服的日子，只好去抢了，抢劫对他们来说，是很小的事情。他说，像他
        们这些人，在大陆早已被枪毙过好几次了，所以，在某种意义上讲，让美国人抓
        来判几年刑，他们也觉得可以接受。

    正文 第一百零四节 可恶的台湾籍警察

    :   华人如果当起洋买卖来，比真正的洋人坏得多。MCC 有一个台湾籍的警察，坏透
        了。整起自己的同胞来，比洋人警察坏多了。有次同房的福州人陈明等和我一道
        从MCC 去 OTV，是那个台湾警察在门口清点人数，陈明在拿自己的东西，晚来了
        有十几秒钟。台湾警察生气了，就坚决不让陈明今天去 OTV（OTV 的条件比 MCC
        好多了，大家均愿意去 OTV）。其实这种事实是很多的，老外警察从来不以这些
        小事来卡人的，很有耐心，有宽厚的，从不无事生非刁难人的。这个台湾警察，
        也不知他吃了几天美国饭，他明明会讲国语，但见了华人，他只讲英语，华人对
        他讲国语，他装作听不懂的样子，想把自己装成一个完全洋化了的美国人。他很
        瞧不起中国人、瞧不起自己的祖宗，一些华人开始真以为他不懂国语，便用国语
        骂他，他马上听懂了，要抓人去坐单独禁闭室。此后，大家才知他是装的。尽管
        大家对他很气愤，但也不敢用国语骂他，如果是老外，早就当着面骂他祖宗三代
        了，只要你骂时，面带笑容，不要带怒气即可，老外看着你嘴动，他眼睛一翻一
        翻的，他会问其他人，他讲什么，其他华人会告诉他，他讲你很好，老外还会憨
        厚地笑了说，谢谢，谢谢，更招来一阵大笑。大家觉得，这些老外挺通情达理，
        而是那些汉奸，真是忘了本，不是个东西，特别是那些台湾的华人。其实，香港
        人、台湾人，看不起大陆人，而大陆的广东人又看不起广东以外的人，尤其是福
        州人。在美国监狱的华人中，福州人占绝大多数，且绝大部分为黑社会人士，对
        那些胆敢流露出轻蔑自己的台湾人、香港人，经常会给以颜色，台、港人不敢在
        福州人面前造次的。

        阿唐说，在香港、美国的这些华人毒贩中，有条不成文的规矩，就是决不把毒品
        卖给华人，不管你华人出多么高的价钱都不卖，不但如此，而且对于华人中的吸
        毒者都瞧不起，甚至在朋友圈子中知道谁吸毒了，都不屑与其为友。因为他们清
        楚，谁吸毒，谁就完了。他们只把毒品卖给外国人，特别是白人。他说，当初我
        们亚洲是没有毒品的，是你们英国人非要把毒品强行卖到我们中国，现在我们做
        的，只不过是把你们老祖宗的东西还给你们罢了，算是一报还一报吧。美国人、
        主要是英国人的后代，我们不过是效仿你们老祖宗的做法，你们美国人抓我们没
        有道理的（大笑，大概自认为是强词夺理吧）。

[Machiavellianism - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Machiavellianism)

:   Machiavellianism is "**the employment of cunning and duplicity (两面派) in
    statecraft or in general conduct**". The word comes from the Italian
    Renaissance diplomat and writer Niccolò Machiavelli, who wrote Il Principe (The
    Prince), among other works.

    ![Niccolò Machiavelli](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e2/Portrait_of_Niccol%C3%B2_Machiavelli_by_Santi_di_Tito.jpg/330px-Portrait_of_Niccol%C3%B2_Machiavelli_by_Santi_di_Tito.jpg)

    -   Machiavelli, `[ˌmækiəˈveli]`
    -   Machiavellian, `[.mækiə'veliən]`
    -   machiavellism, n.马基雅维里主义

    In modern psychology, Machiavellianism is one of the
    **dark triad `['traɪ.æd]` personalities**, characterized by a duplicitous
    interpersonal style, a cynical disregard for morality and a focus on
    self-interest and personal gain.

    马基雅维利 (Machiavelli，1469—1527) 是意大利政治家和历史学家，以主张为达目
    的可以不择手段而著称于世，马基雅维利主义 (machiavellianism) 也因之成为权术
    和谋略的代名词。它通常分为高马基雅维利主义和低马基雅维利主义。高马基雅维利
    主义的个体重视实效，保持着情感的距离，相信结果能替手段辩护。低马基雅维利主
    义易受他人意见影响，阐述事实时缺乏说服力。高马基雅维利主义者比低马基雅维利
    主义者更愿意操纵别人，赢得利益更多，更难被别人说服，他们更多地是说服别人。
    但这些结果也受到情境因素的调节。

    马基雅维利为达目的不择手段的政治权术理论，后来被资产阶级学者称为“马基雅维利
    主义”，甚至被法西斯分子用作实行独裁统治的理论依据，所以“马基雅维利主义”逐渐
    变成政治上尔虞我诈、背信弃义和不择手段的同义语。

    refs and see also

      - [马基雅维利主义-百度百科](http://baike.baidu.com/view/1201238.htm)

[日本有哪些好的歌手？ - 知乎](https://www.zhihu.com/question/22782650)

:   ZARD 听到就让人泪目的摇滚乐团无需多言。这首《君に逢いたくなったら》是
    1997 年的单曲，每次听到都会十分感动。ZARD 的曲子里充满着从骨子里发出的不
    羁和向上，就是那种流着眼泪微笑的感觉。其他脍炙人口的曲子包括 《揺れる想
    い》 和《负けないで》。作为 tie 柯南的乐团之一，当然还有大热的 《运命のル
    ーレット廻して》。

[科学网—我是河南人 - 施一公的博文](http://blog.sciencenet.cn/home.php?mod=space&uid=46212&do=blog&id=284162)

[埃瓦里斯特·伽罗瓦\_百度百科](http://baike.baidu.com/link?url=RYtI1uUwSNSdH-8aadFGVjY6TEivoTIcIhGXY-rHHMQLkt02C23vKXJE5xYgRxwOIC3CKyby0hjSkL_WmNQy45roMynw1pOXa7k7kbl5Rlr2wyGb4l42qV74hnvKY80he7MvG-So-Aq3p-eH9H1MIa)

:   埃瓦里斯特·伽罗瓦，1811 年 10 月 25 日生，法国数学家。现代数学中的分支学科
    群论的创立者。用群论彻底解决了根式求解代数方程的问题，而且由此发展了一整套
    关于群和域的理论，人们称之为伽罗瓦群和伽罗瓦理论。在世时在数学上研究成果的
    重要意义没被人们所认识，曾呈送科学院 3 篇学术论文，均被退回或遗失。后转向政
    治，支持共和党，曾两次被捕。21 岁时死于一次决斗。

    ![A portrait of Évariste Galois at the age of about
        15](https://upload.wikimedia.org/wikipedia/commons/thumb/5/53/Evariste_galois.jpg/330px-Evariste_galois.jpg)

    **Évariste Galois** (French: `[evaʁist ɡaˈlwa]`; 25 October 1811 – 31 May 1832)
    was a French mathematician born in Bourg-la-Reine. While still in his
    teens, he was able to determine a necessary and sufficient condition for a
    polynomial to be solvable by radicals, thereby solving a problem standing
    for 350 years. His work laid the foundations for Galois theory and group
    theory, two major branches of abstract algebra, and the subfield of Galois
    connections. He died at age 20 from wounds suffered in a duel.

    据说 1832 年 3 月他在狱中结识一个医生的女儿并陷入狂恋，因为这段感情，他陷入
    一场决斗，自知必死的伽罗瓦在决斗前夜将他的所有数学成果狂笔疾书纪录下来，并
    时不时在一旁写下“我没有时间”，第二天他果然在决斗中身亡，时间是 1832 年 5月
    31 日。这个传说富浪漫主义色彩，为后世史家所质疑。

    refs and see also

      - [Évariste Galois - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/%C3%89variste_Galois)

[虽然去不了 Google，走到这步大概也不错了 - laike9m's blog](https://laike9m.com/blog/sui-ran-qu-bu-liao-googlezou-dao-zhe-bu-da-gai-ye-bu-cuo-liao,72/)

:   所以说，Google 并不在乎你的表现如何，在乎的是你的表现必须超出别的应聘者
    一大截。对我来讲，这是不可能做到的事，至少我没法在中国做到。

    去年实验室有四个人拿到 Google 的 Offer，我觉得他们都是神。

[`all_in_utf8/convert_to_utf8.py` at master · laike9m/`all_in_utf8`](https://github.com/laike9m/all_in_utf8/blob/master/convert_to_utf8.py)

[The Lucifer Effect by Philip Zimbardo](http://www.lucifereffect.com/)

:   Welcome to LuciferEffect.org, official web site of The Lucifer Effect:
    Understanding How Good People Turn Evil (Random House, 2007). In this
    book, I summarize more than 30 years of research on factors that can
    create a "perfect storm" which leads good people to engage in evil
    actions. This transformation of human character is what I call the
    "Lucifer Effect," named after God's favorite angel, Lucifer, who fell
    from grace and ultimately became Satan.

    refs and see also

      - [一个普通人离杀人有多远——梁文道讲《路西法效应》](http://www.douban.com/group/topic/21241596/)

[如何才能去做喜欢的事情](http://www.wanglianghome.org/zh_CN/translation/HowToDoWhatYouLove.html)

:   How To Do What You Love

    by Paul Graham

    有一种说法，中高层人士都喜欢自己的工作。于是，人们都装模作样喜欢自己的工作
    ，仿佛自己是中高层人士中的一员，否则不仅会影响其职业生涯，而且显得没有教养。

    读大学时，我才明白养家糊口不是工作的唯一目的。选择什么工作要比赚多少钱重要
    。虽然人们一般认为工作就是为了生存，但也有特别值得一提的故事（比如说爱因斯
    坦在专利局上班）说明，事实并非总是如此。

    我认为，一个人不应该在乎别人的看法，除非是他的朋友。不要想着出名，不必太在
    意众人的意见。能够得到尊敬的人的意见就够了，何必在乎那些根本就不认识的人呢？

[书是好书，但记忆法…… (评论: Moonwalking With Einstein)](http://book.douban.com/review/5312595/)

:   在一次采访中，记忆学引起了福尔浓厚的兴趣。在结识了诸多记忆界大师级人物后，
    福尔决定亲身体验记忆学的真谛，并拜英国记忆大师艾德·库克为师。在经过一年的勤
    学苦练后，年近24岁的福尔成为了美国记忆大赛的冠军。

    科学研究还显示，**如果我们不去刻意的锻炼一种能力的话，那么该项能力无论如
    何也不会进步**，这也是为什么那些告诉我们夜里听录音就能学外语、或者可以调
    动潜意识学习一类的商品也都是骗人的。即使我们主动去锻炼一种能力，该项能
    力也未必能够得到提升。

    如果福尔希望更快的找到钥匙的话，唯一的方法就是不断训练自己找钥匙的能力，而
    不是去学习一个只有略微关联性的能力，然后期待这一能力可以被用在他生活的方方
    面面。

[Choosing an HTTP Status Code — Stop Making It Hard | Racksburg](http://racksburg.com/choosing-an-http-status-code/)

[聪明书签](http://fatduck.org/smartbookmark.html)

:   ![](http://fatduck.org/images/smartbookmark2.jpg)

[Casio F-91W: The strangely ubiquitous watch - BBC News](http://www.bbc.com/news/magazine-13194733)

:   ubiquitous, `[ju'bɪkwɪtəs]`, 无所不在的

    Leaked files reportedly reveal a certain Casio watch was viewed with
    suspicion by US officials as a possible sign of terrorist links. So how did
    the humble F-91W find itself in such a position?

    ![话说我现在就用的 F-84W](http://ichef-1.bbci.co.uk/news/624/media/images/52352000/gif/_52352433_watch.gif)

    "It sells globally, from Russia to Asia," says Tim Gould, head of marketing
    at Casio UK. "It has consistently remained popular because it is
    functional, affordable and accurate. It's as simple as that."

    "We purposely don't market it as anything cool or trendy," says Mr Gould.
    "It's not pretentious and doesn't pretend to be anything it's not. It just
    a basic watch that is reliable and good value."

    Its this refusal to be cool that has made it cool, says Bayley.

    ![](http://ichef-1.bbci.co.uk/news/304/media/images/52352000/jpg/_52352437_watch_getty.jpg)

    "It's cheap enough to be disposable but, unless you hit it with a hammer,
    it will never stop."

[如果他玩微博，秒杀一切段子手 - 简书](http://www.jianshu.com/p/12abee0e372e#)

:   伍迪·艾伦

    美国编剧家协会（WGA）今年投票选出的“影史最有趣”101部电影剧本中，他自编自导
    自演的《安妮·霍尔》，当选第一。

    如果他们说你配得到这个奖你就接受了，那么下次他们说你不配的时候，你也得接受。

    “每当我跟他呆在一起，我就忘了我是谁，我在哪儿。”

    虽然据说在现实中，伍迪·艾伦出名的害羞，跟女演员讲话都会紧张。

    伍迪·艾伦的电影大多跟性、爱、生、死相关。

    “一段关系就像是一条鲨鱼。它必须不断往前，不然就会死掉。”

    “在一段恋爱中，做离开的那个人，好过做被离开的那个人。”

[RFC 1345 - Character Mnemonics and Character Sets](https://tools.ietf.org/html/rfc1345)

[降级论 | Meditic](http://meditic.com/degrading-for-success)

:   后来我开始反思最初的目标，为什么要在自己身上挂一个“拳击高手”的招牌，被那么
    多泰森追着打？ 我把这块招牌卸了，找个完全没练武的人去比拼，不是更容易赢么？
    于是果断照做，去找了一个没人懂拳击的小乡村，做了纯英文的 Tucia.com(需翻墙)，
    只做国外的业务。在那个地方，作为一个知名武馆的拳击小陪练，我成了村子里拳击
    技术最高超的人，受人仰慕，还开武馆教人拳击，活的非常滋润，而且在教人拳击的
    过程中，自己的拳术也比以前提高了很多，发展出一套属于自己的拳法，我虽然进不
    了泰森们的大圈子，但他们也进不了我的小圈子。

    除此以外，我还发现一个现象，中国消费者在与奸商们的长期斗争中，已经培养出了
    一种非常苦 B 的品质：只要不被坑，他就谢天谢地。如果商家严格做到了承诺的每一
    件事情，客户就会感动的泪如泉涌。如果商家不仅做到了所有承诺的事情，还很贴心
    的提供了一些额外的服务（比如我们给每位客户赠送非常好吃的樱桃和昂贵的进口巧
    克力作为点心），那么客户就会激动的哭天喊地、奔走相告，推荐给他认识的每一个
    人。

    其实这片肮脏的国土，就是上天赐予 IT 青年们的最好机会。

    这些原始而纯粹的行业，正在等待 IT 精英们的降级，如同蒲公英一般的伞兵，在黑
    夜里从天而降，长驱直入，用最智慧的产品、最优质的服务拯救这些早就该死的行业，
    屌丝的生命将会绽放出银色的羽翼，无比丰满，无比性感。

[图灵奖得主：思考比编码重要 - 微软亚洲研究院](http://www.msra.cn/zh-cn/connections/stories/leslie-visit-pku-20151203.aspx)

[rswier/c4](https://github.com/rswier/c4)

[sigslot - C++ Signal/Slot Library](http://sigslot.sourceforge.net/)

[一个Sqrt函数引发的血案 | 帝都码农](http://diducoder.com/sotry-about-sqrt.html)

:   <http://www.math.purdue.edu/~clomont/Math/Papers/2003/InvSqrt.pdf>

    ```cpp
    float InvSqrt (float x)
    {
        float xhalf = 0.5f*x;
        int i = *(int*)&amp;x;
        i = 0x5f3759df - (i&gt;&gt;1);
        x = *(float*)&amp;i;
        x = x*(1.5f - xhalf*x*x);
        return x;
    }
    ```

[《了不起的盖茨比》：绿光 - 读立写生](http://cnfeat.com/blog/2014/03/05/green-light/)

:   有记者采访莱昂纳多，询问他是否会因为从未得到过学院青睐而感到不服。他笑
    了笑，回答道：「很有意思的是，大家似乎都觉得学院欠我什么。」他随后一直
    看着地板，似乎在整理思绪。随后表示，「我想每一个有抱负的演员都会希望得
    到业内同行的肯定和赞许，但事实就是每一年只有一个人能够得到这个特殊的荣
    誉。」

    ![](http://ww3.sinaimg.cn/large/617ccc0ctw1ee4ymi0dd6j20zk0k00vd.jpg)

[The Intentionality of Evil (Aaron Swartz's Raw Thought)](file:///E:/blogs/Aarow-Swartz/www.aaronsw.com/weblog/intentionalevil-4.html)

:   The problem is that the villains know they’re evil.

    我们在孩子很小的时候就开始给他们看大量的漫画（现在是从漫画改编的电影），在
    漫画和电影中，勇敢的英雄从恶魔的手中一次又一次的拯救我们的星球。现在几乎公
    认的看法是，这些故事将善与恶之间的界限划得过于清晰，真实的世界比这些故事中
    描写得那个世界更加微妙，人们都这么说。但是这并不是这些故事的真正问题，真正
    的问题在于恶棍都知道他们是邪恶的。

    如果下次别人说起“是的，但是我们是好心的”这句话，告诉他这毫无意义；只有漫画书中的家伙才不这么干。

    So the next time you mention one to someone and they reply “yes, but we did
    with a good intent” explain to them that’s no defense; the only people who
    don’t are characters in comic books.

[I Hate the News (Aaron Swartz's Raw Thought)](file:///E:/blogs/Aarow-Swartz/www.aaronsw.com/weblog/hatethenews.html)

:   None of these stories have relevance to my life. Reading them may be
    enjoyable, but **it’s an enjoyable waste of time**. They will have no
    impact on my actions one way or another.

    哈哈，乐于看新闻都是逗。我高中的时候还看文汇报（因为班级订了报纸），后来从
    来不看新闻也不看报。除了 QQ 偶尔弹出来的那些无聊的破推送。什么快递员被跳楼
    的砸死了，车祸几死几伤，等等。都是一些无聊的破事。（如果你看到这句话，觉得
    我没有人性。呵呵。）

[Wi-Fi 是什么的缩写 - 第九阅览室 - 提供科学养分](http://9yls.net/19760.html)

:   从 Wi-Fi 扩展成 wireless fidelity，也就是把一个词当作缩写逆向扩展出某种
    含义的过程，是一种文字游戏，叫 **backronym** `['bækrənɪm]`，意思和 acronym 相对。
    Backronym 很容易被传着传着就当真。常见的比如 SOS，很多人认为是
    save our souls 的缩写，但实际上是先有的易识别易操作的摩尔斯电码 `···–––···`，
    后选用相对应的字母组合 SOS 来表示罢了。因此 SOS 和 Wi-Fi 一样，没有任何含义，
    也不是什么的缩写，还真是同病相怜呐。

    Phil Belanger, a founding member of the Wi-Fi Alliance who
    **presided (`[prɪ'zaɪd]`, 指定, 主持) over** the selection of the name
    "Wi-Fi", also stated that Interbrand invented Wi-Fi as a play on words with
    Hi-Fi (high fidelity), and also created the Wi-Fi logo. The term 'fidelity'
    refers to the faithfulness/accuracy of reproduction or transmission of the
    signal, and 'wireless' is a distinguishing feature that contrasted with
    earlier internet connection technologies such as wired Ethernet.

    The Extended Service Set Identification (ESSID) is one of two types of
    Service Set Identification (SSID). In an ad hoc wireless network with no
    access points, the Basic Service Set Identification (BSSID) is used. In an
    infrastructure wireless network that includes an access point, the ESSID is
    used, but may still be referred to as SSID.  An SSID is a 32-character
    (maximum) alphanumeric key identifying the name of the wireless local area
    network. Some vendors refer to the SSID as the network name. For the
    wireless devices in a network to communicate with each other, all devices
    must be configured with the same SSID.

[有哪些让你笑了半辈子，每次给别人讲自己都会爆笑的笑话？ - 知乎](https://www.zhihu.com/question/23547779)

[日常生活中有哪些十分钟就能学会并可以终生受用的技能？ - 知乎](https://www.zhihu.com/question/20894671)

:   #. **office 里双击格式刷可以多次使用**
    #. Ctrl+BackSpace是以单词为单位删除文本
    #. control+click, shift+click
    #. `C:\Docume~1\Admini~1`
    #. 空格键长度最短的键盘是日语键盘
    #. `data:text/html,<html contenteditable>`
    #. 当你保存你的ppt时，用后缀.pps或.ppsx，那样的话，打开时会直接进入幻灯片播放模式。
    #. 人们最终记住的不是你说过的话，而是你让他们产生的感觉。几乎所有的人都喜欢谈论自己的事情，所以，多问问题。
    #. 在外住旅社时，在门后放一个玻璃水杯，提防陌生人入门。
    #. 打错电话时，除了说不好意思打扰了，还可以再多说一句祝您生活愉快，真的让人更容易接受你的歉意。
    #. 出门的时候检查必备物品就是四个：“伸手要钱”。（身份证、手机、钥匙、钱包）
    #. 拍证件照时用舌头顶住上颚，笑的会很自然。
    #. 在外旅游，被劝玩各种项目时，只要说“跟团”俩字，别人一般不会再纠缠，在多个城市亲自测试，有效！
    #. 当人恐惧时，血液从手臂流向腿部，这样为逃跑做好准备，手会先冷下来
    #. 如何在10分钟内记住某一年的日历。只要记忆12个数字就可以了。让我们试着记住
       2014年的日历吧。255 136 140 250（在你的脑海里试着用小图像的方法记住
       它）含义是明显的，每一个数字代表一个月，比如 2代表1月，5代表2月，5代
       表3月……为了得到具体某一天是周几其实很简单。以2014年8月15日为例：回忆
       你记住的当月的数字。嗯，8月是4。将日期加上你记住的数字。嗯，15+4=19.
       将结果除以7，取余数。嗯，19/7=2……5完成！2014年8月15日是星期五。

[单词拼写，怎么记又快又好？](http://www.baicizhan.com/article/4)

:   Read more

    -   [坏习惯一大堆？别怕，还有救](http://www.baicizhan.com/article/6)
    -   [我们为什么必须背单词？](http://www.baicizhan.com/article/2)
    -   [如何在一天内记200个单词？](http://www.baicizhan.com/article/3)
    -   [百词斩TV 黑暗料理单词视频](http://tv.baicizhan.com/playlist/1000322)
    -   [百词斩TV 成为学霸的10个秘诀单词视频](http://tv.baicizhan.com/playlist/1000323)
    -   [百词斩TV 羞羞的知识单词视频](http://tv.baicizhan.com/playlist/1000513)
        +   carnal desire 肉欲
        +   ba-ccha-na-lian (`[.bækə'neɪliən]`，把酒狂欢) antics (滑稽搞笑的动作)
        +   contra-sepive
        +   sa-cri-legious（遭天谴的）
        +   homo-sexual
        +   full of allure
        +   add a bit of artificial lighting
        +   it's a bit of brash
        +   you randy old man
    -   [百词斩TV 人体姿势12问单词视频](http://tv.baicizhan.com/playlist/1000514)
        +   re-cum-bent bike, lie on a recumbent position
        +   lying pro-strate in peace
        +   a se-den-tary lifestyle
        +   stand steady or i'll beat you with this stick
        +   sit in an upright position
        +   rigid `[ˈrɪdʒɪd]`, improve my posture, not becoming a slotch like you.
        +   pre-carious, likely to collapse. I was gymnast for 10 years. Not precarous at all.
        +   si-mul-ta-neous, simultaneous actions and movements
        +   bend. I kneel before you. I said kneel.
    -   [百词斩TV 绅士的品格单词视频](http://tv.baicizhan.com/playlist/1000515)
        +   strapped for cash. A generous man did the same thing for me.
        +   considerate
        +   an educated man, resulting from or having good education. opposite to you
        +   charming. come for a ride in my convertable
        +   humourous
        +   handsome, stop looking at him
        +   reliable
        +   leave your genteel manners at home when you come to my house
        +   in gentle voice, give you a gentle pat on the back before I yell at you again
    -   [百词斩TV 霸道总裁爱上我单词视频](http://tv.baicizhan.com/playlist/1000516)

[dae/anki](https://github.com/dae/anki)

:   python 2, pyqt. no need to install.

[【弄"潮"儿】英文中的20种orgasm](http://mp.weixin.qq.com/s?__biz=MjM5NTExMTk5MA==&mid=404899112&idx=1&sn=11953362f9dbfb81c1c595a8091a6829&scene=0#wechat_redirect)

[Bachelor tax - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Bachelor_tax)

[舌尖上的忘词&背单词的秘诀](http://mp.weixin.qq.com/s?__biz=MjM5NTExMTk5MA==&mid=409398412&idx=1&sn=a592c82fd0a57b15559832c983033ca8&scene=0#wechat_redirect)

:   四熟是指眼熟，耳熟，意熟，用熟。

    "**In the buff**" is a slang term for nude

    【smh】**shake my head/ shaking my head** 的缩写。表示觉得某事太弱智，或者对
    某事失望、无语。

    dafuq (the f*ck)

    总而言之，如果一个词你不会用，那这词就不是你的。可能是老师的，可能是老
    美的，可能是老英的，也可能是隔壁老王的，反正它不是你的。

    refs and see also

      - [你是如何将词汇量提升到 2 万，甚至 3 万的？ - 尼克六六的回答 - 知乎](https://www.zhihu.com/question/26814125/answer/47842171)
      - [Corpus of Contemporary American English (COCA)](http://corpus.byu.edu/coca/)
      - [[bnc] British National Corpus](http://www.natcorp.ox.ac.uk/)

[Highest Voted 'qt' Questions - Stack Overflow](http://stackoverflow.com/questions/tagged/qt?sort=votes)

[Inno Setup](http://www.jrsoftware.org/isinfo.php)

:   一个打包工具。

    Inno Setup is a free installer for Windows programs. First introduced in
    1997, Inno Setup today rivals and even surpasses many commercial installers
    in feature set and stability.

[Recommended Reading for Developers](http://blog.codinghorror.com/recommended-reading-for-developers/)

:   **Programming Pearls** is the next best thing to working side by side with
    a master programmer for a year or so. It is the collective wisdom of
    many journeyman coders **distilled into succinct, digestible columns**.

    **succinct**, `[səkˈsɪŋkt]`, 简明的；言简意赅的

    books

      - Code Complete 2
      - The Mythical Man-Month
      - Don't Make Me Think
      - Rapid Developement
      - Peopleware
      - The Design of Everyday Things (DONE)
      - About Face: The Essentials of Interaction Design
      - The Inmates Are Running the Asylum
      - Programming Pearls (ING)
      - The Pragmatic Programmer: From Journeyman to Master
      - Designing Web Usability
      - and more...

[What is Trolling?](http://blog.codinghorror.com/what-is-trolling)

:   I almost feel sorry for **Quentin Tarantino** (昆汀·塔伦蒂诺), who is so
    obviously passionate about what he does, because this guy is a **classic troll**.

    01. He came to generate argument.
    02. He **doesn't truly care about the topic**.

    So the next time you encounter someone who can't stop arguing, who
    seems **unable to generate anything other than heat and friction**, whose
    actions amply demonstrate that they are no longer **participating in the
    conversation in good faith**… just walk away. **Don't take the bait.**

[这一年来 - BYVoid](https://www.byvoid.com/zhs/blog/recent-one-year)

:   之前在微软做的是「研究」，听起来好像是很厉害的样子，其实有时候做的东西简直
    是浪费时间。因为我从一开始就清楚，在研究院做的东西只是为了在特定领域有一个
    突破，至于这个成果会不会造福人类，那可不好说。运气好的话会被微软产品组看中，
    做成产品，算是为人类做贡献了。大多数时候你的成果还是被打入冷宫，永远无人问
    津。更普遍的情况是进入了微软的专利库，别人想做成产品都不行，这简直是阻碍人
    类社会进步了。我在微软亚洲研究院长达十个月的实习给我最大的收获就是让我决定
    了将来一定不会去读博士。

    其实我还是挺喜欢比较小的公司的，虽然不是很「正规」，但却有让你在大公司感觉
    不到的真诚的人情味。

    后来我向 Google 和 Facebook 投的简历都石沉大海，Twitter 回应了，但最终没有通过。
    我发现我的英语其实是个很大的问题，给外国人说话都颤抖，怎么可能表达清楚自己
    的意思？于是我当即开始学英语，一边背托福，一边找外国人练口语。我了解到许多
    公司的实习生早就申请满了以后，意识到自己开始地太晚了，想想美国大学五月就放
    暑假了，我三月才开始准备，岂能来得及？再申请只能考虑明年暑假的了。可是明年
    暑假又有另一个问题，我拿 J1 签证去过美国以后，规定要「回国服务两年」，这令我
    十分犹豫，并不是因为我决心不想回国，而是因为这样会给自己套一个枷锁，以后恐
    怕多有不便。无论如何，我总得面试通过，于是便有了我后来尝试去面试 Hulu 的经历。

    想想看一切都是蝴蝶效应，佛家叫「因缘际会」。如果我没有认识徐可可，我很难保
    持助写书的冲动，也不可能认识图灵总编。如果我没有参加去年 1 月赵丽明教授的川
    滇语言调查，我没有机会认识徐可可。如果我没有选大一上的语音学课，我根本没有
    能力去语言调查。如果我大一没有在军训时统一选课后又翻一次选课指导书，我连清
    华破天荒开了语音学这门课都不知道。如果我 2009 年没有在成都书店的一个角落里
    面碰到《汉语史稿》，我怎么可能会对语音学产生兴趣？又假如郭华阳当时不认识我、
    了解我，怎么会愿意把我推荐给 MSRA？如果我大一离散数学课上没有做大作业「基于
    统计语言模型的拼音输入法」，郭华阳怎么了解我？如果我没有参与 ibus-pinyin 的
    开发，又哪里知道「统计语言模型」？一切皆是缘起啊，我之所以是现在的我，取决
    于我做出的一个个选择，哪怕它在当时是及其不起眼的决定，恐怕在将来哪一天会对
    我产生重大影响。

    有一次和一个已经工作了的朋友吃饭，他问过我一个这样问题：「解决一个难题和做
    出一件东西，哪个给你的成就感更大？」具体来说，解决一个难题指的是在学术研究
    领域或者工程中解决了一个难题，小到一篇 paper，大到图灵奖、诺贝尔奖；做出一件
    东西指的是做成了一个可以使用的产品，有许多人使用，产生了价值，小到一个开源
    工具，大到 Google 搜索这样的产品。我毫不犹豫地选择了后者，当然是做出产品更有
    价值。他告诉我这个问题反映了不同人不同的价值观和兴趣所在，简单讲就是前者适
    合搞学术，去科研，当一名科学家或者专家，后者应该是搞开发，做产品，做一名工
    程师或者企业家。

    其实我们大多数人并不缺乏能力，而是**囿于见识，只敢走前人铺好的道路**。一方
    面这是承担风险与规避风险的问题，另一方面这是多数人缺乏广阔的视野。许多人并
    非不是雄心勃勃，我相信愿意背井离乡去美国留学、工作、移民的人肯定不是胆小如
    鼠，只求稳妥的人，而是许多人只看到了自己前辈走过的道路，没有另辟蹊径的意识。

    我想告诉看到这篇文章的我的同辈朋友，以及学弟学妹们，世界竟然如此宽广，你需
    要有一颗宽广的心去容纳。人在年轻的时候机会成本是最低的，所有你因为顾虑不敢
    做的事，将来只会顾虑更多。

[Notes on Programming in C](http://kamalatta.ddnss.de/otherdocs/pikestyle.html)

:   Finally, I prefer minimum-length but maximum-information names, and
    then let the context ﬁll in the rest. Globals, for instance, typically
    have little context when they are used, so their names need to be
    relatively evocative. Thus I say maxphysaddr (not MaximumPhysicalAddress)
    for a global variable, but np not NodePointer for a pointer locally deﬁned
    and used.  This is largely a matter of taste, but taste is relevant to
    clarity.

    evocative, `[ɪ'vɑkətɪv]`, adj.引起记忆的；唤起感情的

    `if(checksize(x))`{.cpp} is unhelpful because we can’t deduce whether checksize returns true on error or non-error; instead
    `if(validsize(x))`{.cpp} makes the point clear and makes a future mistake in using the routine less likely.

    -   Rule 1.  You can’t tell where a program is going to spend its time.

        Bottlenecks occur in surprising places, so don’t try to second guess
        and put in a speed hack until you’ve proven **that’s where the
        bottleneck is** .

    -   Rule 2. Measure.

        Don’t tune for speed until you’ve measured, and even
        then don’t unless one part of the code overwhelms the rest.

    -   Rule 3. Fancy algorithms are slow when n is small, and n is usually small.

        Fancy algorithms have big constants. Until you know that n is
        frequently going to be big, don’t get fancy. (Even if n does get big,
        use Rule 2 ﬁrst.) For example, binary trees are always faster than
        splay trees for workaday problems.

    -   Rule 4. Fancy algorithms are buggier than simple ones, and they’re much harder to implement.

        Use simple algorithms as well as simple data structures.

        +   The following data structures are a complete list for almost all practical programs:
        +   array linked list hash table binary tree
        +   Of course, you must also be prepared to collect these into compound
            data structures. For instance, a sym- bol table might be implemented
            as a hash table containing linked lists of arrays of characters.

    -   Rule 5. Data dominates.

        If you’ve chosen the right data structures and organized things well,
        the algorithms will almost always be self-evident. Data structures, not
        algorithms, are central to programming. (See Brooks p. 102.)

    -   Rule 6. There is no Rule 6.

[有什么好的锻炼自己 LaTeX 能力的方法？ - 学习 - 知乎](http://www.zhihu.com/question/26941928)

:   其次，学 LaTeX 之后掌握的不仅仅是 LaTeX 本身。能获得的知识有什么呢？比如说
    字体的知识，图像处理的知识，甚至还能掌握到一定的编程技能。当然，如果说是我
    的话，我算是走上邪路了，还开发了一个 C 实现的 TeX，这个一般人没那么多的时间
    做的。本身我走的是弯路，别人就别再走了，比如想用 Mathematica 实现一个 TeX
    什么的。不过最重点的东西是：**控制欲**。系统地学好了 LaTeX 之后就会有一种非常强
    烈的控制欲。这种控制欲是非常难得的东西。为什么呢？因为铅字印刷这种事物推出
    历史舞台之后，排版的工作似乎变得非常轻松。小姑娘小伙子高中毕业了就可以来做
    做了。我这里并不是什么歧视，靠手艺吃饭的永远都是值得尊敬的。但是实际上，做
    排版的人里面有不少没有什么系统性的排印知识。这就造成一系列的问题，错字漏字
    什么的的都算小的。最大的问题是很多书版面同质化严重，排版的不知道改，编辑也
    不会改，这就导致国内有挺多书拿到手就垫了桌脚了。学 LaTeX 能把很多错误的观念
    掰对过来，也会了解更深层次的东西。

    -   Hyphon
        +   upper-case letter
        +   1-800-621-2376
        +   My name is Phyllis; that's p-h-y-l-l-i-s.
    -   EN Dash
        +   In Genesis 6:13--22 we find God's instructions to Noah.
        +   Green Bay beat Denver 31--24
        +   Jane Doe (1950–); or Jane Doe (b. 1950)（不加空格）
        +   the University of Wisconsin--Madisonthe
        +   University of Wisconsin--Milwaukee
    -   EM Dash
        +   She outlined the strategy---a strategy that would, she hoped, secure the peace.
        +   Consensus---that was the will-o'-the wisp he doggedly pursued.

    refs and see also

      - [自学 LaTeX 可以读什么书入门？ - 知乎用户的回答 - 知乎](http://www.zhihu.com/question/26645810/answer/33515971)
      - [LaTeX 如何将数学公式写得漂亮？ - 写作技巧 - 知乎](http://www.zhihu.com/question/29816700)
      - [英文破折号（em dash）、连接号（en dash）与连字符（hyphen）的区别及各自用法是什么？在科技写作中有何特点？ - 英语 - 知乎](http://www.zhihu.com/question/20332423)
      - [如何做到像使用 LaTeX 那样优雅地使用 Word？ - 如何优雅地 X - 知乎](http://www.zhihu.com/question/20541531)
      - [大学里有才华的男生](http://www.douban.com/note/529741314/)
      - [伟大企业诞生扼灭记_豆总Jessica_新浪博客](http://blog.sina.com.cn/s/blog_700a620c0101cd8i.html)
      - [已成蒙学幼读科普贴，看看我大汉语如何美炸你们！](http://www.douban.com/group/topic/77626904/)
      - [虚拟机是怎么实现的？ | 马牛不是人](http://www.manio.org/cn/virtual-machine-implementation/)
      - [如何使用 ggplot2？ - R（编程语言） - 知乎](http://www.zhihu.com/question/24779017)

[阮玲玉（中国早期著名女影星）_百度百科](http://baike.baidu.com/subview/34091/6236325.htm)

:   张曼玉说：“我觉得阮玲玉的骨子里有一种讲不出来的妖媚。”

    阮玲玉她是保姆的女儿，可以说一直到阮玲玉死都没有人知道，也就是说张达民一直
    到最后出了一本书《我和阮玲玉》，并且在书面上说句句是实话的那本书里面，他都
    没有写阮玲玉是保姆的女儿，可见张达民在阮玲玉死了以后，他还是良心发现为阮玲
    玉守住这个秘密的。然后知道阮玲玉这个秘密的第二个人就是蔡楚生。当我们看到一
    本《阮玲玉》的书，在头十行里，我们可以看到，阮玲玉是佣人的女儿。这个信息最
    后是1957年的时候蔡楚生在悼念阮玲玉逝世二十二周年的时候披露的。因为阮玲玉觉
    得，蔡楚生和自己一样，出身很卑微，就和他很亲近，所以就把自己是一个保姆的女
    儿，怎么样和张达民同居，又怎么样认识唐季珊，又怎么和唐季珊同居，然后唐季珊
    又爱上了别的舞女，她内心是怎么样痛苦，全部和蔡楚生说了。

    但对于一个智识者，尤其是对于一个出到社会上了的女性，却足够使她受伤，更不必
    说故意张扬，特别渲染的文字了。

    refs and see also

      - [论人言可畏_百度百科](http://baike.baidu.com/view/14786977.htm)

[陌生拜访之如何搞定门卫 | 老K博客](http://www.laokboke.com/2015/02/12/mb/)

:   基本上所有的政府单位都有门卫，他们往往就是陌生拜访要过的第一道关卡，如果连
    他们都搞不定，那陌生拜访肯定是不成功的，因为你连客户的面都没见着。

      - 陌生拜访之前一定要对拜访对象、其所在单位等资料有**比较全面的了解**
      - **外在形象**一定要职业化。穿着最好是衬衫西裤、西装革履，手里拿着公文包之类
        的，能让门卫看起来你就像一个领导就最好了，至少穿着正式的话，门卫很少会
        盘问你。然后你走进去的时候，不要东张西望，更不用看门卫，只管装着很熟悉
        的样子慢悠悠地往里面走就是了。
      - 要做好被盘问的准备。去某个单位之前，最好**叫其他人发一条短信到你的手机**，
        大概内容就是“请于 2015 年 2 月 12 日上午 9 点到市发改委 2 号会议室参加某某主题
        的会议。”
      - **准备烟和火机**。虽然我不抽烟，但我出去陌拜的时候，一定要带上烟和火机，以
        备不时之需。

[为什么 XML 这么笨重的数据结构仍在广泛应用？ - XML - 知乎](http://www.zhihu.com/question/20738607)

:   refs and see also

      - [JSON: The Fat-Free Alternative to XML](http://www.json.org/xml)

[QString 乱谈(1) - 1+1=10 - 博客频道 - CSDN.NET](http://blog.csdn.net/dbzhang800/article/details/7517422)

:   （这个系列写得十分凌乱。）

    如果翻看 Qt 的源码，或者 Qt 的 (正规一点) 第三方库，我们很少看到这种代码：

    ```cpp
    // QString myString
    if (myString == "dbzhang800") {
    }
    ```

    取而代之的是

    ```cpp
    if (myString == QLatin1String("dbzhang800")) {
    }
    ```

    `QT_NO_CAST_FROM_ASCII`

    `QTextCodec::setCodecForCStrings()`{.bash}, 该语句会直接影响到字符串比较操作的性能

    因为 Qt5 中引入了全新的 QStringLiteral，而且估计大家会比较喜欢这个东西。毕竟可以用于中文嘛。

    一个问题是，在 Qt5 自身的源码中，何时使用 QStringLiteral，何时使用 QLatin1String，有时特别让人纠结。因为

    ```cpp
    QStringLiteral("dbzhang800");
    QLatin1String("dbzhang800");
    ```

    前者占用的常量区比较多，程序体积会稍微大一点。(但对于中文来说，完全没有这个问题)

    QString 内部不是存储的 utf16 字符串么？而 QStringLiteral 就是编译期直接生成 utf16 字符串。(当然，需要编译器的支持)

    在 GCC 下，这两个都可以使用你自己喜好的编码 (如果不指定，默认都是 UTF8)

    -   `-finput-charset=charset`
    -   `-fexec-charset=charset`

    `-fwide-exec-charset=charset`

    源码保存成 UTF-8 没有什么困难，但是，执行字符集需要是 UTF-8。没那么简单

    -   对 GCC 来说，这个问题很简单 (默认的编码选项足够了)
    -   对 MSVC 来说，这个问题异常复杂：
        +   对 MSVC2003 来说，只要源码保存成不带 BOM 的 utf8 即可
        +   对 MSVC2005、(没在 SP1 基础上装热补丁的)MSVC2008 来说。完全没办法
        +   直到 MSVC2010sp1，才算提供了一个解决方案。源码保存成带 BOM 的 utf8，utf16，...，然后添加

    要想跨 GCC4.6+ 和 MSVC2010sp1+，我们需要取它们的交集：也就是 (不过我觉得这个 BOM 不可接受)
    -   源码保存成带 BOM 的 utf8
    -   为 MSVC 添加 #pragma

    `#pragma execution_character_set("utf-8")`

    等到 MSVC 支持 C++11 的 String Literals 之时，我们就没必要用那个蹩脚的 pragma 了，直接

    ```cpp
    char mystr[] = u8"老老实实的学问，来不得半点马虎";
    ```

    ```cpp
    char*           u8"中文"
    char16_t*       u"中文"
    char32_t*       U"中文"
    ```

    refs and  see also

      - [QString 乱谈 (2) - 1+1=10 - 博客频道 - CSDN.NET](http://blog.csdn.net/dbzhang800/article/details/7540905)
      - [QString 乱谈 (3)-Qt5 与中文 - 1+1=10 - 博客频道 - CSDN.NET](http://blog.csdn.net/dbzhang800/article/details/7542672)
      - [Qt stylesheet 源码学习 - 1+1=10 - 博客频道 - CSDN.NET](http://blog.csdn.net/dbzhang800/article/details/6875352)
      - [学习与记忆](http://mindhacks.cn/2008/06/05/how-memory-works/)

[BBC ON THIS DAY | 18 | 1978: Mass suicide leaves 900 dead](http://news.bbc.co.uk/onthisday/hi/dates/stories/november/18/newsid_2540000/2540209.stm)

:   The bodies of 914 people, including 276 children, have been found in Guyana
    in South America.

    南美洲圭亚那琼斯镇

    Most of the dead - members of **the People's Temple Christian Church** - had
    consumed a soft drink **laced with**

    -   cyanide (`['saɪə.naɪd]`, n.氰化物) and
    -   sedatives (`[ˈsedətɪv]`, adj.镇静的；镇定的；止痛的).

    However, the body of the People's Temple
    **charismatic (`[ˌkerɪzˈmætɪk]`, adj.魅力非凡的) leader**, Jim Jones, was
    said to have a bullet wound in the right temple, believed to be self-inflicted.

    人民圣殿教（The People's Temple）

    吉姆·琼斯（Jim Jones）

    refs and see also

      - [人民圣殿教_百度百科](http://baike.baidu.com/link?url=jiQo3xkLIyCuG6ECsC6FRI3U0m1xotpkP3og6EOpfRt88_J4JlAfkepFU23qWmqzEsKfK5W7WzCFfAj8T1mbia)

[c++ - RapidJSON library getting a value inside an array by its index - Stack Overflow](http://stackoverflow.com/questions/10037778/rapidjson-library-getting-a-value-inside-an-array-by-its-index)

:   exactly what I want.

    [RapidJSON: 常见问题](http://rapidjson.org/zh-cn/md_doc_faq_8zh-cn.html)

    :   RapidJSON 包含一组单元测试去执行自动测试。Travis（供 Linux 平台）及
        AppVeyor（供 Windows 平台）会对所有修改进行编译及执行单元测试。在 Linux 下
        还会使用 Valgrind 去检测内存泄漏。

[Jank Free: Let's Make the Web Silky Smooth!](http://jankfree.org/)

:   What is Jank?

    Modern browsers try to refresh the content on screen in sync with a
    device's refresh rate. For most devices today, the screen will refresh
    60 times a second, or 60Hz. If there is some motion on screen (such as
    scrolling, transitions, or animations) a browser should create 60
    frames per second to match the refresh rate.

    **Jank** is any stuttering, juddering or just plain halting that users see
    when a site or app isn't keeping up with the refresh rate. Jank is the
    result of frames taking too long for a browser to make, and it
    negatively impacts your users and how they experience your site or app.

[lazysizes - the ultimate lazyloader for responsive images, iframes and widget](http://afarkas.github.io/lazysizes/)

[微软实现深层神经网络重大技术突破 - 微软亚洲研究院](http://www.msra.cn/zh-cn/news/headlines/imagenet-20151211.aspx)

:   2015 年 12 月 10 日——美国东部时间，微软亚洲研究院视觉计算组在 2015 ImageNet
    计算机识别挑战赛中凭借深层神经网络技术的最新突破，以绝对优势获得图像分类、
    图像定位以及图像检测全部三个主要项目的冠军。

    ImageNet 是一个计算机视觉系统识别项目，也是目前世界上图像识别最大的数据
    库。ImageNet 挑战赛每年举办一次，由来自全球顶尖高校、企业及研究机构的研
    究员组织举办，近年来已经成为计算机视觉领域的标杆。

    在做这个“去雾”课题之前的一年多里，他做过很多课题，都没有取得发表论文意
    义上的收获。但是，这些课题让他有机会尝试了很多不同的方向，也了解了更多
    背景和方法，继而成为了他后来论文的铺垫。

    多读论文。研究初期，需要海量阅读论文，并且不需要太专注于别人的具体算法
    和如何实现等细节，更多地去关注论文简介及作者所做的与研究相关的工作，他
    人的研究思路，然后在前人的基础上去思考，寻找对自己工作有帮助的要点；

    提高英语能力。虽然 GRE、IELTS 等考试并不是必须要参加的，但是这类考试确实
    能够极大地锻炼英语读写能力。如果不具备优秀的英语能力，在日后的研究中会
    比较吃亏；

    关注细节。无论是撰写论文还是编写代码，很多时候，粗略看上去会感觉还可以，但
    是仔细推敲后就会发现各种问题。所以在进行研究的过程中，首先要对自己所做的内
    容有个基础性的判断，再从读者的角度出发，自己反问自己问题。只有在苛刻的要求
    下，才会有高质量的文章。

     refs and see also

      - [潜心科研，砥砺前行，让梦想照进现实——记西安交通大学校友孙剑博士专访 - 微软亚洲研究院](http://www.msra.cn/zh-cn/connections/stories/jian-sun-20150616.aspx)
      - [厚积薄发的研究之路 - 微软亚洲研究院](http://msra.cn/zh-cn/connections/talents/tomorrowstars/stories/kaiminghe.aspx)

[google/googletest](https://github.com/google/googletest)

:   Welcome to Google Test, Google's C++ test framework!

    This repository is a merger of the formerly separate GoogleTest and
    GoogleMock projects. These were so closely related that **it makes sense**
    to maintain and release them together.

    后来我在自己的小项目中也用到了 GoogleTest，见 [district10/algo](https://github.com/district10/algo), 还有
    GoogleTest 的笔记：[doc-google-test](doc-google-test.html)

[google/WebFundamentals](https://github.com/google/WebFundamentals)

:   Best practices for modern web development
    <https://developers.google.com/web/fundamentals>

    Web Fundamentals is a technical documentation center for multi-device
    web development. Our goal is to build a resource for modern web
    developers that’s as curated and thorough as developer.android.com or
    iOS Dev Center.

[Public domain - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Public_domain)

:   Works in the public domain are those whose **intellectual property rights
    have expired**, have been ** forfeited**, or are **inapplicable**. For example,
    the works of Shakespeare and Beethoven, most of the early silent films,
    the formulae of Newtonian physics, the Serpent encryption algorithm and
    powered flight are all now in the public domain. The term is not
    normally applied to situations where the creator of a work retains
    residual rights, in which case use of the work is referred to as "under
    license" or "with permission".

[Clang 比 GCC 好在哪里？ - 编译器 - 知乎](http://www.zhihu.com/question/20235742)

:   编译速度更快、编译产出更小、出错提示更友好。尤其是在比较极端的情况下。

    最后一点，其他同学也有讲到，就是 Clang 采用的是 BSD 协议。这是苹果资助 LLVM、
    FreeBSD 淘汰 GCC 换用 Clang 的一个重要原因。

      - 编译速度有显著提升，记得大约是 g++ 的 1/3 或 1/4
      - 编译过程中的内存消耗差别好像不大
      - 中间产出物及最终链接产物，记得也是 g++ 的 1/3 或 1/4
      - 相较于 g++，编译错误可读性有所飞跃，至少不会出现编译错误过长被截断的问题了

    从代码上说，clang 结构更简单。因为 clang 只需要完成词法和语法分析，代码优化和
    机器代码的生成工作由 llvm 完成。所以和全部由自己包下的 gcc 比起来，clang 可以更
    专注地做好一件事。

    这种结构也使 clang 可以被单独拿出来用在其他的程序里。比如 vim 的 clang_complete
    插件就是利用 clang 进行语法分析后给出精确的自动补全和语法错误提示的。而 gcc 就
    没法很方便地做到这一点。

    在实用性方面，除了有更快的编译速度更快和更友好的出错提示外，clang 还内置有静
    态分析工具，可以对代码进行静态分析（`clang --analyze`{.bash}）。这也是 gcc 做不到的。

    除了其它答案介绍的速度和出错信息可读性的优势之外，Clang 的另一个优势是代码
    结构清晰，可以作为库使用，成为其它 app（主要是 IDE）的内嵌 C/C++ parser。这
    样，editor 工具可以使用和 compiler 一样的 parser 来完成 edit-time 的语法检
    查。

    Clang 则是以 LLVM 为后端的一款高效易用，并且与 IDE 结合很好的编译前端。

    refs and see also

      - [ClangDiagnosticsComparison - GCC Wiki](http://gcc.gnu.org/wiki/ClangDiagnosticsComparison)
      - [Comparing clang to other open source compilers](http://clang.llvm.org/comparison.html)

[Mac OS X 背后的故事_知识库_博客园](http://kb.cnblogs.com/page/114879/)

:   <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（一）力挽狂澜的Ellen Hancock

    :   1991 年 5 月 13 日，蓝组顺利按时完成开发任务，发布了 Mac OS 7（一般被称
        为 System 7），而粉组却没做出什么有实际用途的东西来，因此接连跳票。而且
        ，由于 Mac OS 7 的发布缺乏人手，为了保持正常发布，常常需要从粉组抽调人
        员参加蓝组的开发，再加上 Apple 当时把重心放在了和 IBM 等公司的合作上（
        Taligent 项目）而不是在粉组上，最终导致了粉组项目夭折。

        Taligent 项目挂掉后，Apple 自己尝试过十多个不同的内部项目，但大多没做多
        久就夭折了。而这时正是 Windows NT 走向成熟的关键时期。

        1996-1998 年是 Apple 最混乱的几年。在商业上，有一阵曾传出 Apple 要被
        Sun 收购的消息。

        因此，Gil Amelio 开始和当时看好的 Be 谈，却因价格问题没有成功，最终转而
        收购了 NeXT。而 Apple 合并 NeXT 后，NeXTSTEP 就演化为 Rhapsody，并最终
        成为 Mac OS X。这些事情我们今后会详细再谈。

        买完 NeXT 后，Steve Jobs 执政，Gil Amelio 因任 CEO 期间 Apple 亏损严重
        而被炒。Steve Jobs 把信得过的人（很多是前 NeXT 员工）拉拢到周围，开始新
        政，而同 Gil Amelio 有关的 Ellen Hancock 则在人事变动中被疏远。

        Gil Amelio 总结他在 Apple 时期的工作时说：“Apple 是一艘底部有洞漏水的船
        ，而我的工作是把这船引向正道。”（Apple is like a ship with a hole in a
        bottom, leaking water, and my job is to get this ship pointed in the
        right direction. ）Ellen Hancock 虽然同 Gil Amelio 一样，不知如何去堵这
        个漏水的洞，但正是由于她在 Apple 的出色表现，不但把船引到了正道上，还找
        来了有能力堵这个洞的人。
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（二）Linus Torvalds的短视

    :   一方面，设计一个微内核和相关的服务，可能造成各种设计上的灾难。GNU/Hurd
        早在八十年代末就考虑尝试在 Mach 上写一系列 Unix 的服务层，结果他们始终
        无法搞明白到底是让这些服务先发消息到另几个服务呢，还是考虑其他方案。所
        以直到 2011 年我写这篇文章时，Hurd 项目依然处于半死不活的状态。而另一方
        面，微内核的效率无法和传统内核相比，最简单的系统调用会涉及一系列底层服
        务的互相通信。

        Steve Jobs 考虑到 Linus Torvalds 是开源软件的领军人物，便继续以开源为话
        题，动之以情，晓之以理。他告诉 Linus Torvalds，我们这个系统做出来后呢，
        所有的 Unix 层（非图形界面层），都会开源，所以事实上你加入我们，也是在
        给开源做贡献啊！而由于在开源圈子混久了，Linus Torvalds 对此丝亳不领情，
        他认为，有谁会想用一个底层是开源而图形界面是不开源的系统呢？所以，像笔
        者这样的用户被“代表”了。

        这次讨论也使得 Apple 放弃 Linux，转而采用 FreeBSD 技术，并在 2001 年任
        命 FreeBSD 的发起者、领军人物 Jordan Hubbard 为 BSD 技术小组的经理，并
        在后来升为 Unix 技术总监。

        而事实上这对 Apple 也是件好事。Apple 重要的是利益而不是折腾，即使是开源
        也是利益驱动。像类似 Linux 开发组那样自以为是但代码又写得差的开源项目，
        Apple 事后也遇到不少，比如 GCC 编译器项目组。虽然大把钞票扔进去，在先期
        能够解决一些问题，但时间长了这群人总和 Apple 过不去，并以自己在开源世界
        的地位恫吓之，最终 Apple 由于受不了这些项目组人员的态度、协议、代码质量
        ，觉得还不如自己造轮子来得方便，因此 Apple 推动了类似 LLVM 这样宏伟的项
        目，并且在短短几年内，使其成为最领先的开源软件技术。这无异于扇了 Linux
        小组、GCC 小组一记响亮的耳光。
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（三）Mach之父Avie Tevanian

    :   所以 Mach 3 出来后，虽有少数微内核信徒继续执著地改进 Mach，或者开始其他
        微内核比如 L4 的研究。但学术界对 Mach 的兴趣大减，因而 Mach 3 也成为最
        后一版。项目解散后，Richard Rashid 去了微软研究院。

        但由于 C++ 是门很恐怖的语言，所以 Apple 又把 C++ 给阉割了，去掉了多重继
        承、模板、运行时动态以及异常，让开发者使用这种对于 Objective-C 来说换汤
        不换药的 Clean C++ 来做驱动。

        Mac OS X 早期版本不太稳定，所以会内核崩溃。10.0 版本会直接像 Linux 或者
        BSD 那样打出回溯信息，很不美观，所以 Apple 在 10.2 版本开始设计了一个多
        国语言的图片告诉用户你的内核崩溃了，以让内核崩得看起来更优雅一点。

        ![](http://images.cnitblog.com/kb/1/201301/21213305-bf0bdab7c3024291bea697c65e51b93c.jpg)
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（四）政客的跨界

    :   这之后，Al Gore 在 Apple 内部的决策究竟起了什么作用，和 Mac OS X 的开发
        有何关联，在正式的渠道很少有史料，但是他后来的各种公开活动，却给 Mac OS
        X 的技术做足了广告，而且很多证据表明，他正是使 Apple 从被绿色人士攻击的
        众矢之的的状态，成为业界注重电子产品环保领头羊的主要推手。

        因此作为苹果展现公司软实力的重要机会，苹果非常重视这场讲话，请公司的图
        形设计小组带领完成各种所需设计，苹果甚至特地请来了专业的设计公司 Duarte
        来进行讲稿和讲话内容的安排。因此，不管是内容安排、图形设计还是技术支持
        ，Al Gore 都有强有力的后盾，他们能够帮助Al Gore 完成任何想达到的目标。
        不论是 FinalCut 还是 Keynote，一旦缺少任何 Al Gore 想要的功能，Apple 都
        可以给他开小灶实现。在片末的走马灯字幕中，有大量 Apple 的 Keynote 组、
        Final Cut 组和图形设计组的员工名字，以示鸣谢。

        Al Gore 重新进入普通人的视野是在 2006 年，他推出了自己参与制作和演出的
        纪录片《An Inconvenient Truth》（《难以忽视的真相》）和同名书籍。

        可以说，没有 Mac OS X，就没有这部电影。而实际上这部电影的作用远胜过任何
        一部 Apple 公司的广告。
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（五）Jean-Marie Hullot的Interface Builder神话

    :   聪明的 Hullot 开始动脑筋改进 Mac 编写用户程序难的现状。他开发了一个程序
        ，有点像现在 Windows 系统中的“画板”。一侧的工具条，是类似菜单这样的大量
        可重用的对象；而另一侧，则是程序员想构建的用户程序界面。只要把工具条上
        的工具拖放到程序界面中，那么类似“打开”、“打印”等相关的功能，就可以被添
        加到用户界面中。事实上，这个程序，是最早的一批能通过鼠标把控件拖入界面
        设计窗口实现相应功能的商业程序，是用户界面设计软件的先驱。

        这个跨时代的发明被称作 SOS，用 Lisp 语言编写【注：What are we going to
        called this thing 中认为此时就是 Interface Builder，但据 The NeXTonian
        等多处资料表明，在 Steve Jobs 见到以前，该程序名为 SOS】。当时，
        ExperTelligence 开发了一种叫做 ExperLisp 的方言，SOS 即用此语言写成【注
        ：http://en.wikipedia.org/wiki/Interface_Builder】。

        经过不断努力，Hullot 找到了一个值得推销自己发明的好地方——剑桥的苹果大学
        联盟（Apple University Consortium）。

        但当他们一行人走到停车场时，Steve Jobs 让他手下把 Hullot 追了回来，当他
        只身回到 NeXT 总部时，发现 Steve Jobs 正恭敬地等着他。

        “我想要你计算机上那个程序”【注：http://rixstep.com/2/0/people/】，Steve
        Jobs 说道：“你大概什么时候能开始给我们工作？”

        Hullot 回答说自己翌日就要离开去度假。

        “好吧，我两周后给你打电话，”Steve Jobs 说。

        “不行，老乔”，Hullot 表示：“我不游美国，我可要环游欧洲，你七个礼拜后再
        打给我吧。”

        Steve Jobs 虽然一骨子傲气，但他明白一个简单的道理：21世纪最缺的是什么——
        是人才！即使 Jean-Marie Hullot 玩起了大牌，这电话自然还是要打的。Hullot
        刚一度完假回来，Steve Jobs 的电话就如期而至。

        如此三顾茅庐般的热情，把 Jean-Marie Hullot 感动得第二天就登上了去美国的
        飞机。合约签了半年，但实际上他最终在 NeXT 整整待了十年。在 NeXT 工作期
        间，他使用 Objective-C 和 NeXTSTEP 框架重写了 SOS，命名为 Interface
        Builder。由此，Interface Builder 成为 NeXT 集成开发环境 Project Builder
        标准套件之一。

        当然，一个负面的影响是，这样用一体化集成开发环境写程序，往往会发现屏幕
        空间是不够的，所以像我这样用 11 寸 Air 或者 13 寸 Macbook Pro 的人，出
        去打招呼都不好意思说自己是做 Mac 开发的。

        但 Tim Berners-Lee 和别人不一样，他不仅围观了那台计算机，还看到了
        Jean-Marie Hullot 设计的 Interface Builder，研究了 Objective-C，发现了
        面向对象编程范式开发环境的最高成就。这情景让他心中漾起了巨大的波澜，最
        终化为激情澎湃的投入，汇成了一行行面向对象的代码，一泻千里，奔向未来。

        一年后，世界首个 HTTP 服务在 CERN 的 NeXT 计算机运行起来，而使用
        Objective-C 和 Interface Builder 所编写的超文本语言编辑器兼浏览器同步发
        行。他给这个主从式架构起了个好听的名字——World Wide Web（万维网）。
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（六）上善若水

    :   Apple 将“What's not a computer!”（看起来不是电脑的电脑）的概念应用在硬
        件外观上，设计出具有浪漫主义气质，半透明“果冻” 式且具有艺术美感的 iMac
        ，这成了 Aqua 设计灵感的来源。

        Cocoa 之父 Bertrand Serlet，作为 Cordell Ratzlaff 的上司，对新界面很满
        意。但当时，他们认为这个新界面实现起来难度很大，既没有时间也没有资源把
        这个想法在 Mac OS X 中付诸实现。于是先前那位孤独的照葫芦画瓢的设计者只
        好继续工作。
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（七）上善若水下——Cordell Ratzlaff 引发的 Aqua 革命

    :   在加班奋战的三周后，设计组用 Macromedia Director 完成了一个试验品。
        Steve Jobs 亲自来 Cordell Ratzlaff 办公室视察了一下午。结果是他激动地握
        着 Cordell Ratzlaff 的手，吐露心声：“你是苹果里我见到的第一个智商是三位
        数字的人。”

        设计是个有趣的领域。有些人认为，设计就是产品的外观看上去什么样。但其实
        ，如果细想一下，你会发现设计其实是有关产品如何工作的学问。

        18个月转瞬即逝，“你们就是一群白痴”的骂声依旧清晰，而此时的 Mac OS X 的
        图形界面，已今非昔彼。

        -- Steve Jobs

        18 个月后的 2000 年 1 月，新世纪的钟声刚刚敲响，Steve Jobs 镇定地走上
        MacWorld 大会的舞台，独领风骚的新世纪的经典大作 Aqua，此时，就要被他揭
        开帷幕。
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（八）三好学生Chris Lattner的LLVM编译工具链

    :   在 Objective-C 中，设计了一个叫做 NSAutoReleasePool 的池，当开发者需要
        完成一个任务时（比如每开启一个线程，或者开始一个函数），可以手动创立一
        个这样的池子， 然后通过显式声明把物件扔进自动回收池中。
        NSAutoReleasePool 内有一个数组来保存声明为 autorelease 的所有对象。如果
        一个对象声明为 autorelease，则会自动加到池子里。如果完成了一个任务（结
        束线程了，或者退出那个函数），则开发者需对这个池子发送一个 drain 消息。
        这时，NSAutoReleasePool 会对池子中所有的物件发送 release 消息，把它们的
        引用计数都减一 ——这就好比游泳池关门时通知所有客人都“滚蛋”一样。所以开发
        者无需显式声明 release，所有的物件也会在池子清空时自动呼叫 release 函数
        ，如果引用计数变成零了，系统才回收那块内存。所以这是个半自动、半手动的
        方式。

        2000年，本科毕业的 Chris Lattner 像中国多数大学生一样，按部就班地考了
        GRE，最终前往 UIUC（伊利诺伊大学厄巴纳香槟分校），开始了艰苦读计算机硕
        士和博士的生涯。在这阶段，他不仅周游美国各大景点，更是努力学习科学文化
        知识，翻烂了“龙书”（《Compilers: Principles, Techniques, and Tools》）
        ，成了 GPA 牛人【注：最终学分积 4.0 满分】，以及不断地研究探索关于编译
        器的未知领域，发表了一篇又一篇的论文，是中国传统观念里的“三好学生”。他
        的硕士毕业论文提出了一套完整的在编译时、链接时、运行时甚至是在闲置时优
        化程序的编译思想，直接奠定了 LLVM 的基础。

        刚进入 Apple，Chris Lattner 就大展身手：首先在 OpenGL 小组做代码优化，
        把 LLVM 运行时的编译架在 OpenGL 栈上，这样 OpenGL 栈能够产出更高效率的
        图形代码。如果显卡足够高级，这些代码会直接扔入 GPU 执行。但对于一些不支
        持全部 OpenGL 特性的显卡（比如当时的 Intel GMA 卡），LLVM 则能够把这些
        指令优化成高效的 CPU 指令，使程序依然能够正常运行。这个强大的 OpenGL 实
        现被用在了后来发布的 Mac OS X 10.5 上。

        此外 GCC 作为一个纯粹的编译系统，与 IDE 配合得很差。加之许可证方面的要
        求，Apple 无法使用 LLVM 继续改进 GCC 的代码质量。于是，Apple 决定从零开
        始写 C、C++、Objective-C 语言的前端 Clang，完全替代掉 GCC。

        ![](http://pic004.cnblogs.com/news/201201/20120101_101100_1.jpg)

        支持 C++ 也是 Clang 的一项重要使命。C++ 是一门非常复杂的语言，大多编译
        器（如 GCC、MSVC）用了十多年甚至二十多年来完善对 C++ 的支持，但效果依然
        不很理想。Clang 的 C++ 支持却一直如火如荼地展开着。2010 年 2 月 4 日，
        Clang 已经成熟到能自举（即使用 Clang 编译 Clang，到我发稿时，LLVM 3.0
        发布已完整支持所有 ISO C++ 标准，以及大部分C++ 0x 的新特性。

        不单单是 Apple，诸多的项目和编程语言都从 LLVM 里取得了关键性的技术。
        Haskell 语言编译器 GHC 使用 LLVM 作为后端，实现了高质量的代码编译。

        LLVM 的成熟也给其他痛恨 GCC 的开发项目出了一口恶气。其中最重要的，恐怕
        是以 FreeBSD 为代表的 BSD 社区。BSD 社区和 Apple 的联系一向很紧密，而且
        由于代码相似，很多 Apple 的技术如 Grand Central Dispatch 也是最早移植到
        FreeBSD 上。BSD 社区很早就在找 GCC 的替代品，无奈大多都很差（如
        Portable C Compiler 产生的代码质量和 GCC 不能同日而语）。

        LLVM 在短短五年内取得的快速发展充分反映了 Apple 对于产品技术的远见和处
        理争端的决心和手腕，并一跃成为最领先的开源软件技术。而 Chris Lattner 在
        2010 年也赢得了他应有的荣誉——Programming Languages Software Award（程序
        设计语言软件奖）。
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（九）半导体的丰收

    :   苹果向 64 位处理器的迁移花了整整 6 年时间，远长于该公司其他技术的迁移——
        向 Intel 的迁移仅用了一年时间，从经典 Mac OS 到 Mac OS X 也仅用了三年时
        间。总而言之，这场迁移是非常成功的：一方面，用户基本无痛苦，老的 32 位
        程序在目前最新版的 Mac OS X Lion 中依然可以完全兼容地执行；另一方面，对
        开发者而言，基本只需做微小的调整，重新编译程序，而且若干技术如
        Universal Binary，使他们发布程序非常方便。当然，对于某些大量使用过时技
        术的公司，如 Adobe 和 Microsoft，这场迁移则要折腾得多。

        所以程序写着写着，就忘了一个变量到底是给 CPU 用的还是给 GPU 用的，这无
        疑增加了学习难度。

        OpenCL 则是苹果为这个新局面画下的蓝图。这项技术初期全称为 Open
        Computing Library（如果留意苹果早期宣传广告的话），后改名为 Open
        Computing Language。这项技术从本质上来说，和 CUDA 并没有太多的两样，但
        由于苹果在借鉴他人技术并把他人技术改得更棒这一点上是出了名的，所以
        OpenCL 很好地解决了以上所有问题。
    </div>

    <div class="tzx-drawer" shy>
    Mac OS X 背后的故事（十）Mac OS X文件系统的来龙去脉

    :   ZFS 的一个重大特点就是拥有大容量。ZFS 是一个 128 位的文件系统，这意味着
        它能存储 1800 亿亿（18.4×1018）倍于当前 64 位文件系统的数据。ZFS 的设计
        如此超前以至于这个极限就当前现实而言可能永远无法遇到。项目领导 Bonwick
        曾说：“要填满一个 128 位的文件系统，将耗尽地球上所有存储设备，除非你拥
        有煮沸整个海洋的能量。”假设每秒钟创建 1000 个新文件，达到 ZFS 文件数的
        极限需要约 9000 年。

        此外，ZFS 的一个重要指导思想是不单单去做一个文件系统，而是实现一套完整的卷管理方案。

        无论如何，Mac OS X的 ZFS 支持，如昙花一现般消失了。
    </div>

[开源云计算技术初探 | YY42](http://www.yy42.net/blog/?p=381)

:   Ruby 和 JavaScript 是云时代的主流编程语言，Python 紧追，PHP 应了那句话了
    “**not even close**”。heroku 将 matz 叔挖过去的时候，明确放话 Ruby 是云时代
    的语言，heroku 的整个工程实践也是按照 Ruby 的最佳工程实践来做的。另外一块那
    肯定是JVM 平台了，云计算肯定会带来 JVM 平台的另一轮繁荣。至于.NET，本人毫无
    研究，就不妄加评论了。

    网络虚拟化技术下一步会得到很大的发展。原有在多种操作系统下的独有技术将
    快速融合，比如 DTrace，ZFS 移植到 Linux，KVM 移植到 Solaris。以 DTrace 为首的
    强大工具将会得到非常大发展，成为各种开源产品的标配，以增强在发杂环境下
    的调试能力。个人认为未来有经验的 DTrace 工程师会活得非常滋润，有点供不应
    求，请联想那么多云，尤其是国内的烂云，少不了要调试的人吧。

    云计算红红火火，但繁荣的市场上也到处是骗子无赖，踏踏实实做点事情不容易。个
    人认为踏踏实实学好云计算的相关技术，比肤浅地开发几个手机应用有意思。国外很
    多大学也开设了相关的课程，大家可以多多关注。

    还有些没有说完的话题今后会在补遗中写写。

[Hamming weight - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Hamming_weight)

:   说一个故事，四五年前我为面试出了一条笔试题目，恰巧和本书的题目 2.1 很相似，
    计算一个无号整数 (我要求 32-bit，书中的是 8-bit) 在二进制中 1 的个数。当时
    心想这个题目很简单吧，谁知有些应征者在这题上交白卷，更难找到一些能写到更优
    化答案的人了，并以为自己做出的解法已经是最优。不过，几年后，我才知道原来这
    个问题是有正式的学名，叫 Hamming Weight，除了有更快的算法外，在 SIMD 4.2 也
    有指令去计算。当时就为自己的无知感到惭愧。

    The Hamming weight of a string is **the number of symbols** that are different
    from the zero-symbol of the alphabet used. It is thus equivalent to the
    **Hamming distance** from the all-zero string of the same length. For the most
    typical case, a string of bits, this is the number of 1's in the string. In
    this binary case, it is also called the population count, popcount, or
    sideways sum. It is the digit sum of the binary representation of a
    given number and the ℓ₁ norm of a bit vector.

    |   string     | Hamming weight |
    | :------:     | :------------: |
    | 11101        |    4           |
    | 11101000     |    4           |
    | 00000000     |    0           |
    | 789012340567 |   10           |

    The **population count of a bitstring** is often needed in cryptography and
    other applications. The Hamming distance of two words A and B can be
    calculated as the Hamming weight of **A xor B**.

    The problem of how to implement it efficiently has been widely studied.
    Some processors have a single command to calculate it (see below), and some
    have parallel operations on bit vectors. For processors lacking those
    features, the best solutions known are based on adding counts in a tree
    pattern. For example, to count the number of 1 bits in the 16-bit binary
    number a = `0110 1100 1011 1010`, these operations can be done:

    ![](http://whudoc.qiniudn.com/2016/hamming-code.png)

    Here, the operations are as in C, so `X >> Y` means to shift X right by Y
    bits, `X & Y` means the bitwise AND of X and Y, and `+` is ordinary addition.
    The best algorithms known for this problem are based on the concept
    illustrated above and are given here:

    ```cpp
    //types and constants used in the functions below

    const uint64_t m1  = 0x5555555555555555; //binary: 0101...
    const uint64_t m2  = 0x3333333333333333; //binary: 00110011..
    const uint64_t m4  = 0x0f0f0f0f0f0f0f0f; //binary:  4 zeros,  4 ones ...
    const uint64_t m8  = 0x00ff00ff00ff00ff; //binary:  8 zeros,  8 ones ...
    const uint64_t m16 = 0x0000ffff0000ffff; //binary: 16 zeros, 16 ones ...
    const uint64_t m32 = 0x00000000ffffffff; //binary: 32 zeros, 32 ones
    const uint64_t hff = 0xffffffffffffffff; //binary: all ones
    const uint64_t h01 = 0x0101010101010101; //the sum of 256 to the power of 0,1,2,3...

    //This is a naive implementation, shown for comparison,
    //and to help in understanding the better functions.
    //It uses 24 arithmetic operations (shift, add, and).
    int popcount_1(uint64_t x) {
        x = (x & m1 ) + ((x >>  1) & m1 ); //put count of each  2 bits into those  2 bits
        x = (x & m2 ) + ((x >>  2) & m2 ); //put count of each  4 bits into those  4 bits
        x = (x & m4 ) + ((x >>  4) & m4 ); //put count of each  8 bits into those  8 bits
        x = (x & m8 ) + ((x >>  8) & m8 ); //put count of each 16 bits into those 16 bits
        x = (x & m16) + ((x >> 16) & m16); //put count of each 32 bits into those 32 bits
        x = (x & m32) + ((x >> 32) & m32); //put count of each 64 bits into those 64 bits
        return x;
    }

    //This uses fewer arithmetic operations than any other known
    //implementation on machines with slow multiplication.
    //It uses 17 arithmetic operations.
    int popcount_2(uint64_t x) {
        x -= (x >> 1) & m1;             //put count of each 2 bits into those 2 bits
        x = (x & m2) + ((x >> 2) & m2); //put count of each 4 bits into those 4 bits
        x = (x + (x >> 4)) & m4;        //put count of each 8 bits into those 8 bits
        x += x >>  8;  //put count of each 16 bits into their lowest 8 bits
        x += x >> 16;  //put count of each 32 bits into their lowest 8 bits
        x += x >> 32;  //put count of each 64 bits into their lowest 8 bits
        return x & 0x7f;
    }

    //This uses fewer arithmetic operations than any other known
    //implementation on machines with fast multiplication.
    //It uses 12 arithmetic operations, one of which is a multiply.
    int popcount_3(uint64_t x) {
        x -= (x >> 1) & m1;             //put count of each 2 bits into those 2 bits
        x = (x & m2) + ((x >> 2) & m2); //put count of each 4 bits into those 4 bits
        x = (x + (x >> 4)) & m4;        //put count of each 8 bits into those 8 bits
        return (x * h01)>>56;  //returns left 8 bits of x + (x<<8) + (x<<16) + (x<<24) + ...
    }
    ```

    As Wegner (1960) described, the bitwise and of x with x − 1 differs from
    x only in zeroing out the least significant nonzero bit: subtracting 1
    changes the rightmost string of 0s to 1s, and changes the rightmost 1 to a
    0. If x originally had n bits that were 1, then after only n iterations of
    this operation, x will be reduced to zero. The following implementation is
    based on this principle.

    ```cpp
    //This is better when most bits in x are 0
    //It uses 3 arithmetic operations and one comparison/branch per "1" bit in x.
    int popcount_4(uint64_t x) {
        int count;
        for (count=0; x; count++)
            x &= x-1;
        return count;
    }
    ```

    <div class="tzx-drawer" shy>
    我的测试

    :   代码

        :   ```cpp
            #include <stdio.h>

            int popcount_4(int x) {
                int count;
                for (count=0; x; count++)
                    x &= x-1;
                return count;
            }

            int main(int argc, char **argv)
            {
                int i = 0;

                scanf("%d", &i);
                do {
                    printf("%d has %d '1's.\n", i, popcount_4(i));
                } while( 1 == scanf("%d", &i) );

                return 0;
            }
            ```

        编译运行

        :   ```bash
            $ gcc main.c -o main.exe
            $ echo 1 2 3 4 5 8 24 235265 | ./main.exe
            1 has 1 '1's.
            2 has 1 '1's.
            3 has 2 '1's.
            4 has 1 '1's.
            5 has 2 '1's.
            8 has 1 '1's.
            24 has 2 '1's.
            235265 has 8 '1's.
            ```
    </div>

    If we are allowed greater memory usage, we can calculate the Hamming weight
    faster than the above methods. With unlimited memory, we could simply
    create a large **lookup table** of the Hamming weight of every 64 bit integer.
    If we can store a lookup table of the hamming function of every 16 bit
    integer, we can do the following to compute the Hamming weight of every 32
    bit integer.

    ```cpp
    static uint8_t wordbits = {
        /* bitcounts of integers 0 through 65535, inclusive */
    };
    static int popcount(uint32_t i)
    {
        return (wordbits[i&0xFFFF] + wordbits[i>>16]);
    }
    ```

    refs and see also

      - [迟来的书评和感想──给喜爱编程的朋友 (评论: 编程之美)](https://book.douban.com/review/3010762/)

[trigonometry - How to use the PI constant in C++ - Stack Overflow](http://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c)

:   use math defines, math.h

    ```cpp
    #define _USE_MATH_DEFINES
    #include <math.h>
    ```

    <div class="tzx-drawer" shy>
    `math.h`:

    :   ```cpp
        #if defined(_USE_MATH_DEFINES) && !defined(_MATH_DEFINES_DEFINED)
        #define _MATH_DEFINES_DEFINED

        /* Define _USE_MATH_DEFINES before including math.h to expose these macro
         * definitions for common math constants.  These are placed under an #ifdef
         * since these commonly-defined names are not part of the C/C++ standards.
         */

        /* Definitions of useful mathematical constants
         * M_E        - e
         * M_LOG2E    - log2(e)
         * M_LOG10E   - log10(e)
         * M_LN2      - ln(2)
         * M_LN10     - ln(10)
         * M_PI       - pi
         * M_PI_2     - pi/2
         * M_PI_4     - pi/4
         * M_1_PI     - 1/pi
         * M_2_PI     - 2/pi
         * M_2_SQRTPI - 2/sqrt(pi)
         * M_SQRT2    - sqrt(2)
         * M_SQRT1_2  - 1/sqrt(2)
         */

        #define M_E        2.71828182845904523536
        #define M_LOG2E    1.44269504088896340736
        #define M_LOG10E   0.434294481903251827651
        #define M_LN2      0.693147180559945309417
        #define M_LN10     2.30258509299404568402
        #define M_PI       3.14159265358979323846
        #define M_PI_2     1.57079632679489661923
        #define M_PI_4     0.785398163397448309616
        #define M_1_PI     0.318309886183790671538
        #define M_2_PI     0.636619772367581343076
        #define M_2_SQRTPI 1.12837916709551257390
        #define M_SQRT2    1.41421356237309504880
        #define M_SQRT1_2  0.707106781186547524401

        #endif  /* _USE_MATH_DEFINES */
        ```
    </div>

    refs and see also

      - [How does `#define _USE_MATH_DEFINES` work? - C++ Forum](http://www.cplusplus.com/forum/general/102410/)

[HTML5街头霸王游戏(开放源码) | Web前端 腾讯AlloyTeam Blog | 愿景: 成为地球卓越的Web团队！](http://www.alloyteam.com/2012/05/html5-streetfighter-demo/)

[CodeTank 代码坦克 - 互联网智能代码坦克机器人编程游戏](http://codetank.alloyteam.com/)

[Web 查询引擎 -- Lingoes Translator 灵格斯词霸](http://www.lingoes.cn/zh/translator/webengine.htm)

:   这个 grease monkey 插件可以看看：[search engine jump for academic](https://greasyfork.org/en/scripts/2765-search-engine-jump-for-academic)。

    ```tzx-plain
    搜索引擎类

    |   Google           |   `<engine id="google.com" name="Google" url="http://www.google.com/search?q=[$key]&amp;hl=[$langcode]" />` |
    | :---: | :--- |
    |   Yahoo            |   `<engine id="yahoo.com" name="Yahoo" url="http://search.yahoo.com/search?p=[$key]&amp;ei=UTF-8" />` |
    |   Bing             |   `<engine id="bing.com" name="Bing" url="http://www.bing.com/search?q=[$key]" />` |
    |   百度             |   `<engine id="baidu.com" name="百度" url="http://www.baidu.com/s?wd=[$key]" />` |
    |   搜狗             |   `<engine id="sogou.com" name="搜狗" url="http://www.sogou.com/web?query=[$key]" />` |
    |   Yahoo! 奇摩      |   `<engine id="tw.search.yahoo.com" name="Yahoo! 奇摩" url="http://tw.search.yahoo.com/search?p=[$key]&ei=UTF-8" />` |

    在线词典英汉简体类

    |   海词在线 Dict.cn |  `<engine id="dict.cn" name="海词在线" url="http://dict.cn/search.php?q=[$key]&amp;placeholder=Lingoes" />`  |
    | :---: | :--- |
    |   百度词典         |  `"百度词典", "http://www.baidu.com/baidu?ie=utf-8&ct=1048576&word=[$key]"`  |
    |   爱词霸           |  `<engine id="iciba.com" name="爱词霸" url="http://www.iciba.com/search?s=[$key]" codepage="" />`  |
    |   Babylon          |  `<engine id="babylon.com" name="Babylon" url="http://dictionary.babylon.com/[$key]/" />`  |
    |   汉典             |  `<engine id="zdic.net" name="汉典" url="http://www.zdic.net/sousuo/?q=[$key]" codepage="" />`  |
    |   CNKI 科技词典    |  `<engine id="cnki.net" name="CNKI 科技词典" url="http://dict.cnki.net/dict_result.aspx?tjType=all&amp;searchword=[$key]" />`  |
    |   有道词典         |  `<engine id="yodao.com" name="有道" url="http://dict.yodao.com/search?q=[$key]&ue=utf8&keyfrom=dict.index" />`  |
    ```

[Ubuntu 14.04 重启网卡 — » Kumu's Blog](http://blog.opskumu.com/ubuntu-network-br0.html)

:   >   Stopping or restarting the networking job is not supported. Use
    >   `ifdown`{.bash} & `ifup`{.bash} to reconfigure desired interface.

    ```bash
    $ cat /etc/issue
    $ service  networking restart
    $ tail -f /var/log/upstart/networking.log
    ```

    ```bash
    # restart: down, then up
    ifdown eth0
    ifup eth0

    # restart all, except lo
    ifdown --exclude=lo -a && sudo ifup --exclude=lo -a
    ```

    bridging

    ```bash
    $ apt-get install bridge-utils
    $ cat /etc/network/interfaces
    auto lo
    iface lo inet loopback

    auto eth0
    iface eth0 inet manual

    auto br0
    iface br0 inet static
    address 192.168.0.10
    netmask 255.255.255.0
    gateway 192.168.0.1
    bridge_ports eth0
    bridge_stp off
    bridge_fd 0
    bridge_maxwait 0
    dns-nameservers 192.168.0.1

    $ ifup br0
    $ brctl  show
    bridge name bridge id       STP enabled interfaces
    br0     8000.02000a0080e1   no      eth0
    ```

[Google Pro Tip: Use Back-of-the-envelope-calculations to Choose the Best Design - High Scalability -](http://highscalability.com/blog/2011/1/26/google-pro-tip-use-back-of-the-envelope-calculations-to-choo.html)

:   back-of-the-envelop (无需精心(或不必复杂)计算的)

[Jeff Dean facts: How a Google programmer became the Chuck Norris of the Internet.](http://www.slate.com/articles/technology/doers/2013/01/jeff_dean_facts_how_a_google_programmer_became_the_chuck_norris_of_the_internet.single.html)

:   -   If you could harness the power of the multiverse you could try every
        possible option in the design space and see which worked best. But
        that's crazy impractical, isn't it?
    -   Dr. Dean thinks an important skill for every software engineer is
        the ability to **estimate the performance** of alternative systems, using
        back of the envelope calculations, without having to build them.

    Numbers Everyone Should Know

    To evaluate design alternatives you first need a good sense of how long typical operations will take. Dr. Dean gives this list:

    -   L1 cache reference 0.5 ns
    -   Branch mispredict 5 ns
    -   L2 cache reference 7 ns
    -   Mutex lock/unlock 100 ns
    -   Main memory reference 100 ns
    -   Compress 1K bytes with Zippy 10,000 ns
    -   Send 2K bytes over 1 Gbps network 20,000 ns
    -   Read 1 MB sequentially from memory 250,000 ns
    -   Round trip within same datacenter 500,000 ns
    -   Disk seek 10,000,000 ns
    -   Read 1 MB sequentially from network 10,000,000 ns
    -   Read 1 MB sequentially from disk 30,000,000 ns
    -   Send packet CA->Netherlands->CA 150,000,000 ns

    Some things to notice:

    -   Notice the magnitude differences in the performance of different options.
    -   Datacenters are far away so it takes a long time to send anything between them.
    -   Memory is fast and disks are slow.
    -   By using a cheap compression algorithm a lot (by a factor of 2) of network bandwidth can be saved.
    -   Writes are 40 times more expensive than reads.
    -   Global shared data is expensive. This is a fundamental limitation of
        distributed systems. The lock contention in shared heavily written
        objects kills performance as transactions become serialized and slow.
    -   Architect for scaling writes.
    -   Optimize for low write contention.
    -   Optimize wide. Make writes as parallel as you can.

    Lessons Learned

    -   Back-of-the-envelope calculations allow you to take a look at different
        variations.
    -   When designing your system, these are the kind of calculations you
        should be doing over and over in your head.
    -   Know the back of the envelope numbers for the building blocks of your
        system. It's not good enough to just know the generic performance
        numbers, you have to know how your subsystems perform.  You can't make
        decent back-of-the-envelope calculations if you don't know what's going
        on.
    -   Monitor and measure every part of your system so you can make these
        sorts of projections from real data.

    refs and see also

      - [Numbers Everyone Should Know - High Scalability -](http://highscalability.com/numbers-everyone-should-know)

[JeffreyZhao/calibre-recipes](https://github.com/JeffreyZhao/calibre-recipes)

[Emacs 简易教程](http://www.perfect-is-shit.com/emacs-simple-tutorial.html)

[dirtysalt's homepage](http://dirlt.com/)

:   TL;DR

      - 期待你的加入 We're Hiring!
      - APUE Unix 环境高级编程 (Advanced Programming Unix Environment)
      - UNP Unix 网络编程 (Unix Network Programming)
      - linux 将原来 APUE 和 UNP 中的一部分内容放在这里面来了，这样可以保持这两篇内容比较稳定。
      - tcmalloc Google 的开源线程缓存内存分配器，解决多线程下面内存分配效率问题。
      - gperftools Google 的应用级别性能分析工具，包含 tcmalloc.
      - ubuntu 如何更好地使用 Ubuntu. 之前有过痛苦的经历 . 主要记录自己使用出现的问题.
      - macosx 如何更好地使用 Mac. 以前使用 Windows，后来转向 Ubuntu，再后来买了个 MBA.
      - docker 基于 lxc(linux container) 的分发应用工具和平台.
      - libev 开源的事件触发器。被认为是更高效的 libevent.
      - muduo 开源的网络编程框架。作者理想中的网络编程框架实现，里面有很多 mina/netty 的影子。
      - kylin Baidu in-house 的异步编程框架，是 linsd(百度首席架构师林仕鼎) 的神作.
      - zeromq 开源的消息传输系统。颠覆我们思考和编写网络通信程序的方式。
      - netty an asynchronous event-driven network application framework in Java based on Java NIO.
      - finagle an extensible RPC system for the JVM, used to construct high-concurrency servers.
      - gunicorn Python WSGI HTTP Server. green unicorn(Ruby 实现)
      - leveldb Google 的开源 kv 存储系统。支持 billion 级别的数据量，适合于 写少读多 写多读少的情况。
      - mongodb 面向文档的分布式存储系统，但是却可以针对文档字段索引来加快查询。功能上比通常我们认为的 NoSQL 强但是弱于 RDBMS.
      - redis 内存存储系统，支持丰富的数据类型以及相应的计
      - mysql 开源关系型数据库。The world's most popular open source database.
      - rcfile / orcfile / parquet 几种列式存储 (columnar storage) 实现
      - Cracking The Coding Interview 据说算法分为三种：面试算法，ACM 算法，算法 =D
      - Bitcoin: A Peer-to-Peer Electronic Cash System 比特币论文
      - snappy Google 的开源压缩解压库。在满足一定压缩比率的条件下着重提升压缩和解压速度。
      - lzf redis 使用的开源压缩解压库。轻量 (两个文件) 可以很容易地独立纳入项目。
      - sklearn python scikit learn. 机器学习包.
      - caffe C++ 实现的深度学习框架，有 python 和 matlab 的扩展接口
      - 机器学习基石 on Coursera
      - 机器学习技法 on Coursera
      - The Django Book 不错的 Django 入门材料

[为什么会出现LNK2005"符号已定义"的链接错误? - 歌谣在风中飘舞 - 博客频道 - CSDN.NET](http://blog.csdn.net/soloist/article/details/493238)

:   Read CSAPP! More!

    不然你连 CSDN 上的文章都看不懂。

[云风的 BLOG: 学习从历史开始](file:///E:/blogs/YunFeng/blog.codingnow.com/2007/12/history.html)

:   和上次一样，陈榕调侃了许多大公司，尤其是微软。但他更语重心长的讲了一个
    浅显的道理：微软的人并不比大家苯，当然也不比大家聪明。我们都能看到的问
    题，比如系统臃肿，软件结构不合理，等等，不可能微软自己人就意识不到。种
    种问题，绝对不能只用当局者迷，旁观者清来解释。

    **我们只有从历史看过来，方能理解历史的局限性。**做出那些错误决定的无奈放在
    大背景上大多会得到一个合理的解释。也只有这样，我们才可以领悟到未来正确的路。

    我有一个忘记从哪继承来的观点：无论我们想学什么，都应该从学习他的历史开
    始。极端点说，无论学什么，都是在学他的历史。

    长期以来，自己总结我在编程方面取得的成绩的缘因，最重要的一条就是**无功利心**的学习。

    并不是因为我需要用到什么领域的知识而去学习，而只是单纯的我想知道，我想
    弄明白。搞明白之后，到底有什么价值，可以创造多少财富，这是我从来不关心
    的。反而这样，知识给予的回馈是最大的。

[id-Software/DOOM-3-BFG](https://github.com/id-Software/DOOM-3-BFG)

:   BFG, for "Big F***ing Gun"

[C Programming - A Modern Approach, 2nd Edition (豆瓣)](https://book.douban.com/subject/2585403/)

[mc-gulu/mooc_chinese_culture](https://github.com/mc-gulu/mooc_chinese_culture)

:   中国文化概论

[The Chicken and the Pig - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/The_Chicken_and_the_Pig)

:   The business fable of The Chicken and the Pig is about commitment to a
    project or cause. When producing a dish made of ham and eggs, the pig
    provides the ham which requires his **sacrifice** and the chicken provides
    the eggs which are not difficult to produce. Thus the pig is really
    committed in that dish while the chicken is **only involved**, yet both are
    needed to produce the dish.

[技术管理猪鸡-1 开篇 « 4G spaces](http://blog.youxu.info/2015/05/17/tech-lead-1/)

:   而刚入行的工程师，只能报告一些比较琐碎的成就。

    做出 MapReduce 框架的和写琐碎 MapReduce 程序的工程师之间的差距并不是他们的
    工具和编程效率，也往往不是教育背景或者经验，而是他们**各自的杠杆：所带领的团队**。

    运用常识

    逐渐习得的管理技能

    这不是入学考试，慢慢积累最省时省事。就像练习武术一样，最强的斗士绝不是看书
    最多或者理论最强的，而是**训练时间最长的**。

    问题变了，不管以前多么神奇的管理方法都会变得一地鸡毛，因为管理方法不能脱离
    要解决的问题。

    尽管写日记并不能直接解决技术管理上的难题，却**打开了反思之门，也把许多事情前
    因后果连接起来**。

[Alexander Pope - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Alexander_Pope)

:   爱伦坡

    ![Alexander Pope (c. 1727), an English poet best known for his Essay on
        Criticism, The Rape of the Lock and The Dunciad](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5d/Alexander_Pope_by_Michael_Dahl.jpg/330px-Alexander_Pope_by_Michael_Dahl.jpgs)

    Alexander Pope (21 May 1688 – 30 May 1744) was an 18th-century English
    poet. He is best known for his satirical verse, as well as for his
    translation of Homer. Famous for his use of the heroic couplet, he is the
    second-most frequently quoted writer in The Oxford Dictionary of
    Quotations, after Shakespeare.

[cloudwu/bpa](https://github.com/cloudwu/bpa)

:   A bump pointer allocator.

    by 云风

[Wikipedia:Too long; didn't read - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Wikipedia:Too_long;_didn%27t_read)

:   **Too long; didn't read** (abbreviated **tl;dr** (注意分号后没有空格) and
    **tldr**) is a shorthand notation added by an editor indicating a passage
    appeared to be too long to invest the time to digest. Long used on the
    Internet, it has birthed the wikilink **TL;DR** to indicate a cited passage
    is being protested. Wall of text is kindred. (就跟 wall of text 差不多意思。)

    kindred，`['kɪndrəd]`, n.亲属；亲

    The tl;dr label is sometimes used constructively by an author to introduce
    **a short summation of a longer piece**. However, it is all too often invoked
    as a tactic to **thwart collaborative editing**, or, worse, a **stoop to ridicule**.

    This essay examines tl;dr as used in Wikipedia discussions, offering
    insight into the cause of excessive length, suggestions on how to reduce
    it, and a reminder to always exercise civility with other editors when
    paring.

    这段英文有点难……

[有什么道理是开始注重外表几年后才能悟出来的？ - Sophia 的回答 - 知乎](http://www.zhihu.com/question/31637529/answer/54173168)

:   你以为人与人之间颜值的区别就真的只是颜值的区别？你错了，只不过是自控力
    和执行力的差别，反映到了颜值上。

[理解，真是世界上最奢侈的事](http://www.douban.com/note/279511136/)

:   曾经我非常介意别人对我的误解。听到好友的一些话表面上“呵呵”过去，但其实心里
    很受伤，“你怎么会觉得我是那样的人？”“你怎么这么不了解我？”

    但后来，我也明白了，理解真是世界上最奢侈的事。尤其是越长大、越独立，又有谁
    会目睹你的成长，知道你经历过什么，知道你喜欢什么不喜欢什么。大家都想着自己
    吧，哪里会费心去了解另一个人？

    连自己最亲近的父母，都不完全了解自己了。

    我所能做的，不过是与在乎的人多沟通自己的想法。但比如我妈，我多次向她解释过
    我的专业是什么，她依旧脱口而出“广告设计”，我也只能很无奈的随她去了。

    在乎的太多就活的太累啦。

[科学网—导师为何不能帮助学生找工作呢？ - 鲍海飞的博文](http://blog.sciencenet.cn/blog-278905-944000.html)

:   导师是否要为学生找工作，这是个仁者见仁，智者见智的问题。

    当时正值美国大萧条时期（Great Depression,1929-1933 年）。特尔曼教授一直为该
    系的学生能否找到好的就业而担忧（此处看，他是一个负责任、深谋远虑、敢于担当
    的人！）。他感觉非常困扰的是，他最好的学生不得不到东海岸 --- 在无线电领域去
    谋个职位，他心中的一个念头就是要在斯坦福大学就地建立当时的新兴的无线电技术
    ‘中心’‘以此解决就业、留住人才’。(…was concerned by the lack of good
    employment opportunities in the area for Stanford engineering graduates. It
    troubled him that his best graduates had to go to the East coast to find
    employment….. His solution was to establish the then-new radio technology
    locally.)

    纵观历史，清晰可见，硅谷的成立，很大程度上是依赖于斯坦福大学电子科学系的教
    授特尔曼。他一开始的出发点就是为了让那些好的学生留下来找到工作为宗旨，而不
    必到繁华的东部去发展，而是就地发展。在此过程中，他十分成功地连接了大学和企
    业之间的关系。在斯坦福大学周围建立工业园区 (大约 1951 年)，并使得而且只能是
    从事科技的公司进入工业园区。由此，诞生出了世界上最有创新力的地方，成为世界
    其他各国竞相效仿的对象，积极地复制硅谷，造就自己国家的科技创新基地！

    导师推荐，体现了导师的一份爱心和雄心，这里面包含着导师的一份自信：相信我的
    学生是好样的。而作为学生，在新的境地环境，也不要辜负导师的一片苦心。导师不
    推荐学生，也是由于某种原因，作为学生也不能强人所难，因为时代境况都不同了。

[`brian d foy` style guide](http://www252.pair.com/comdog/style.html)

:   Any capitalization is incorrect unless each letter is capitalized.
    **Title case** is incorrect.

    **Recasting the sentence** avoids the problem. (写论文的时候经常这么干哈哈。)

    >   "But I tell you, a cat needs a name that's particular,
    >
    >   A name that's peculiar (`[pɪ'kjulɪɚ]`, 独特的), and more dignified (有尊严的)."
    >
    >   -- Old Possum

    refs and see also

      - [The Perl Review interviews brian d foy](http://www.theperlreview.com/Interviews/brian-d-foy-20050932.html)
      - [On the difficult matter of names - A Roguish Chrestomathy](http://q-pheevr.livejournal.com/22047.html)
      - [How I learned Perl](http://www.perlmonks.org/index.pl?node_id=385334)
      - [brian d foy](http://www252.pair.com/comdog/)

[How to get the query string by javascript? - Stack Overflow](http://stackoverflow.com/questions/2907482/how-to-get-the-query-string-by-javascript)

:   ```javascript
    function getQueryStrings() {
        var assoc  = {};
        var decode = function (s) { return decodeURIComponent(s.replace(/\+/g, " ")); };
        var queryString = location.search.substring(1); // url?k1=v1&k2=v2
        var keyValues = queryString.split('&'); // [ "k1=v1", "k2=v2" ]

        // decodeURIComponent('%E5%BE%B7%E6%B2%83%E5%A4%8F%E5%85%8B') -> "德沃夏克"

        for(var i in keyValues) {
            var key = keyValues[i].split('=');
            if (key.length > 1) {
                assoc[decode(key)] = decode(key);
            }
        }

        return assoc;
    }

    // And use it like this...
    var qs = getQueryStrings();
    var myParam = qs["myParam"];
    ```

    then, go to browser, `http://tangzx.qiniudn.com?show=true`.

[常用 Git 命令清单 - Web Rube - 噜吧](http://www.webrube.com/git-web_rube/6962)

:   ![](http://www.webrube.com/pics/62/6962_1.png)

["I Draw Pictures All Day" – Smashing Magazine](http://www.smashingmagazine.com/2012/08/i-draw-pictures-all-day/?goback=.gde_5057526_member_249720659)

:   > "So, you do nothing all day."

    > But for us designers and artists, drawing pictures all day is integral to our
    > process and to who we are as creative people, and despite the idea that those
    > who doodle waste time, we still get our work done. So, then, why are those of
    > us who draw pictures all day even tempted to think that someone who is
    > doodling or drawing pictures in a meeting or lecture is not paying attention?

    It turns out that the **simple act of scribbling on a page** helps us think, remember and learn.

    But the author Sunni Brown offers my favorite definition of "doodle" in her TED talk, "Doodlers, unite!":

    >   “In the 17th century, a doodle was a **simpleton** or a fool, as in “**Yankee Doodle**.”
    >   In the 18th century, it became a verb, and it meant to swindle or
    >   ridicule or to make fun of someone. In the 19th century, it was a corrupt
    >   politician. And today, we have what is perhaps our most offensive definition,
    >   at least to me, which is the following: “To doodle officially means to
    >   dawdle, to dilly dally, to monkey around, to make meaningless marks, to do
    >   something of little value, substance or import and,” my personal favorite, “
    >   to do nothing.” No wonder people are averse to doodling at work. Doing
    >   nothing at work is akin to masturbating at work. It’s totally inappropriate.”

    37% of the population are visual learners.

    The doodlers recalled 29% more information.

    >   “Doodling is really to make spontaneous marks to help yourself think. That is
    >   why millions of people doodle. Here’s another interesting truth about the
    >   doodle: People who doodle when they’re exposed to verbal information retain
    >   more of that information than their non-doodling counterparts. We think
    >   doodling is something you do when you lose focus, but in reality, it is a
    >   preemptive measure to stop you from losing focus. Additionally, it has a
    >   profound effect on creative problem-solving and deep information processing.”

[cmd - Windows equivalent to UNIX pwd - Stack Overflow](http://stackoverflow.com/questions/921741/windows-equivalent-to-unix-pwd)

:   this prints it in the console: `echo %cd%`{.bash}

    or paste this command in CMD, then you'll have pwd:

    ```bash
    (echo @echo off
    echo echo ^%cd^%) > C:\WINDOWS\pwd.bat
    ```

    可以看到 `cd` 其实是一个环境变量，跟 `PATH` 一样。（不区分大小写）

[Posts ‐ apple4us](http://apple4us.com/post/)

[如何保证网页的字体在各平台都尽量显示为最高质量的黑体？ - 平面设计 - 知乎](http://www.zhihu.com/question/19911793)

:   Linux 社区常用的简体中文介面字体似乎主要有文泉驿点阵宋体、文泉驿正黑和文泉
    驿微米黑，另有一些人会把 Windows 或 OS X 的字体拿去用。文泉驿点阵宋体类似
    Windows 的中易宋体，而文泉驿正黑是在无自由黑体可用的情况下被迫制作的质量不
    太高的黑体。文泉驿微米黑是 Linux 社区现有的最佳简体中文介面字体，但它没有粗
    体。

    为网页设定字体时有以下目的须达成：

      - 对于 Windows：在中易宋体和微软雅黑之间二选一。粗体和较大字号的文本用微
        软雅黑。没有微软雅黑的系统会回退到中易宋体。
      - 对于 OS X：尽量使用冬青黑体简体中文。没有冬青黑体简体中文的系统会回退到
        华文黑体。
      - 对于 iOS：系统会自动使用华文黑体。
      - 对于 Linux：尽量使用文泉驿微米黑。没有文泉驿微米黑的系统会回退到别的字
        体。
      - 对于 Android：系统会自动使用 Droid Sans。

    two choices

    - 控制（为 Windows 选择微软雅黑，为 Linux 选择文泉驿微米黑）
    - 自由（仅在 OS X 上尽量使用冬青黑体简体中文，放任其他平台使用默认字体）

    不要轻易把中文网页的 font-family 写成以「serif」结尾，因为如果列出的字体都
    没有，系统会按照「serif」的指示去用归于 serif 的中文字体，这样不符合我们尽
    量使用黑体的原则。

    如果你将西文字体设置为 Georgia 之类的 serif 字体（即，与列表后面的
    sans-serif 中文字体不属一类），且 WebKit 内核的 UA（OS X 的 Safari 是个典型
    ）找不到你指定的任何中文字体，可能会导致 UA 用系统默认的 serif 中文字体。

    refs and see also

      - [在网页中嵌入任意字体的解决方案 - 网页制作 - 蓝色理想](http://www.blueidea.com/tech/web/2009/7263.asp)

[Web 中文字体应用指南 » Topics » Ruby China](https://ruby-china.org/topics/14005)

:   **中文字体也有英文名称**

    同时声明中文字体的字体名称（英文）和显示名称（中文），就像这样：
    `font-family: SimSun, "宋体";`{.css}

    **别忘了照顾不同的操作系统**

    ```css
    font-family: Helvetica (Mac), Tahoma (Win), Arial (Mac&Win),
                 STXihei, "华文细黑", (Mac) "Microsoft YaHei", "微软雅黑", (Win)
                 sans-serif;
    ```

    **不加双引号可以吗？**

    英文多个单词肯定加，中文，最好也加了。

    最后，我不想再和任何人争论字体的优劣，本文的目的是介绍使用方法而不是字体选
    择。“美”或“丑”向来都是很主观的事情，只因为我是作者，所以我免不了会有倾向性，
    然而我也相信你自己会有正确的判断，和我较真没有任何实际意义。

    （哈哈，作者被评论区打败。）

    fonts

      - 冬青黑体简体中文, Hiragino Sans GB
      - WenQuanYi Micro Hei
      - Microsoft YaHei
      - 中易宋体, SimSun
      - 华文细黑, STXihei


    ```tzx-bigquote
    Windows     OS X
    黑体：SimHei    冬青黑体: Hiragino Sans GB [NEW FOR SNOW LEOPARD]
    宋体：SimSun    华文细黑：STHeiti Light [STXihei]
    新宋体：NSimSun     华文黑体：STHeiti
    仿宋：FangSong  华文楷体：STKaiti
    楷体：KaiTi     华文宋体：STSong
    仿宋_GB2312：FangSong_GB2312    华文仿宋：STFangsong
    楷体_GB2312：KaiTi_GB2312
    微软雅黑体：Microsoft YaHei [as of Win7]
    ```

    refs and see also

      - [中文字体网页开发指南 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2014/07/chinese_fonts.html)
      - [Chinese Standard Web Fonts: A Guide to CSS Font Family Declarations for Web Design in Simplified Chinese | Kendra Schaefer](http://www.kendraschaefer.com/2012/06/chinese-standard-web-fonts-the-ultimate-guide-to-css-font-family-declarations-for-web-design-in-simplified-chinese/)

[Larry Wall 专访——语言学、Perl 6 的设计和发布 - 简书](http://www.jianshu.com/p/b920a1a469b2)

:   LW：到现在为止，Python 社区在低阶方面的教学工作做得比我们要好。我们也很想在
    这一方面做点什么，这也是我们有蝴蝶 logo 的部分原因，以此来吸引七岁大小的女孩子！

    ![Perl 6 : Camelia](https://upload.wikimedia.org/wikipedia/commons/thumb/8/85/Camelia.svg/640px-Camelia.svg.png)

[Vim - 知乎专栏](http://zhuanlan.zhihu.com/hack-vim)

:   为什么说 Vim 写代码快？ 前提你累死过3次，成功配置了Vim。那么开始神奇的Vim之旅。你就发现。

    -   你删代码比队友快 “first blood”
    -   自动补全比队友快
    -   在20个G的文件堆里定位代码各种秒杀你队友
    -   在vim中完成各种shell ， 秒杀你队友 “Killing spree (无节制的狂热行为)”!
    -   优雅的更新升级， 删除 Vim插件（前提 Vundle） “Dominating”!
    -   随性的自定义快捷键，完全属于你自己的风格， 一个配置文件随身带着走。或者压缩Vim文件包带着走， 想去哪就去哪，不用等你队友带节奏。 Unstoppable！
    -   你队友还在用鼠标？那你已经进化了 。 Wicked Sick！！
    -   什么？ 开始用 Vim Markdown 来写文档了？ 我草，你已经超神了！！ God Like！！！
    -   你已经离不开Vim了。 从最开始被各种折腾到想要砸键盘的你， 如今你已经爱上他了。 aM-m-m-m....（重复8次）Monster Kill
    -   你注定和 Vim 过完这一生！......Holy Shit

[如何评价坂井泉水？ - 你如何评价 X - 知乎](http://www.zhihu.com/question/22177383)

:   后来，我当然知道了它们原来是如此的巧合，以至于我对于这两首歌都有着特殊
    的喜爱。它们有着同样的作曲者织田哲郎，同样的作词者坂井泉水，同样的演唱
    者FIELD OF VIEW。

    直到现在，听回那些经典动画的主题曲或者片尾曲，还能深深感受到那股浓浓的
    Being系摇滚味道，那是一种令人精神振奋、又流畅悦耳的熟悉旋律，那是一种已
    经融入血液的童年的记忆。

    词曲兼修，才华横溢，歌声清新，外形亲切，是我对坂井泉水的评价。但最令我
    喜爱的，是她催人向上的风格和低调做事的态度，她拥有令人艳羡的外貌，却不
    以此为噱头，她拥有令人难忘的声线，却精于歌词的创作。遍观日本乃至中国乐
    坛，都很难找到一位如此完美的歌手。

    『What a beautiful moment』，ZARD第一次也是最后一次演唱会，2004年将近40
    岁的坂井泉水依然温婉动人，如今看来，令人感叹生命无常

    ZARD-（ZA-DO） 坂井泉水（Lzumi Sakai）ZARD的歌，声线独特，歌词优美，总
    是给人向上的力量，她总是微笑的，很有阳光气的一个女孩，很少化妆，她的音
    乐成就除了连续九张百万级专辑轰动日本乃至世界歌坛外，更多的应该以音乐的
    形式告诉人们要勇敢面对生活的坎坷，永不认输的真理，她是影响日本一个时代
    的歌手。

    她最红的时段是上世纪九十年代，那个时代也是日式摇滚的崛起与顶峰，而在这
    巅峰的时代里，zard作为日本第一个女子摇滚乐队出道，并在唱片销量史上创下
    惊人的记录，就其影响来说，可谓是巨大而不可磨灭的。那个时代的摇滚歌手，
    B'z也好Zard也好，都有一种奠基人的感觉，甚至到了现在可以说是一种代表，象
    征。曾经有个日本妹子（初中生）问我最喜欢的歌手，我说是Zard。她忽然很长
    地“哦～”了一声。对她来说，Zard已经是旧事物了，尽管不了解，但她也有所耳
    闻，并且报以极大的尊敬。这也能显示Zard在日本的地位和影响吧。就像至今都
    有各处会播放邓丽君的歌，问起美国人卡朋特是谁，也没有不认识的。Zard的負
    けないで还被编入了日本学校的音乐教材里，311日本大地震时，电台里点播量第
    一名的依旧是zard的負けないで，而那时候距Zard去世已有4年之久。要说日本女
    子摇滚的代表是谁？那一定会有Zard坂井泉水的名字。

    refs and see also

      - [如何从专业角度评价一下zard（坂井泉水）的音乐？ - 动漫 - 知乎](http://www.zhihu.com/question/26574738)
      - [ZARD!!](http://www.douban.com/doulist/537743/?start=25&sort=time&sub_type=)

[2B Lab欢乐多-死线年年有年年都很多 - 与食巨近贱多食广地蹦跶在不列颠 - 知乎专栏](http://zhuanlan.zhihu.com/ciciatc/19589985)

:   学姐和我给屋里每个人起了一个昵称，比如乔治欧是三舅舅等等，以保证无论中文英
    文八卦他们都听不懂。

    三年来屋里人来人往，一直没有中国人。今年老板忽然招了一个中国学生。这下我俩
    真的很发愁啊ToT... 如何起一个昵称让他即使用中文听到也不知道是他呢？最后我决
    定管这位新生叫：那个外国人。

    某一天舅舅忍不住了从冰箱里拿了一个提拉米苏。舅舅一边吃一边跟学姐感慨：「我
    得跟Cheng谈谈，以后不能再买那么多甜点了。我管不住自个儿。」他话音刚落我就拎
    着新一袋子的甜点晃悠进来了。于是我很疑惑地看着斯巴达的舅舅不知道发生了什么
    。

    最后，虽然早餐吃一大盘水果非常开心，可我真的真的真的很想吃油条, 小笼包，鸡
    蛋灌饼，煎饼果子...

    Two Dots。 一个一两分钟可以打完一局的小游戏， iOS only,  英国区美国区免费，
    中区原版未上架，只有一个山寨。原版免费，中国区的山寨收费。这件事现在把我恶
    心到了。

    反正每次一般就只补一个洞就是了。一般预约到三天后就可以烧高香庆祝人品好。做3
    颗牙的重新补+洗牙做了一个多月。每次打完麻药后，脸都要麻一个下午。回到lab之
    后，意大利熊伙伴乔万尼总是摩拳擦掌地问：我现在是不是扇你一个耳光你都不会痛
    ！s

    通过小伙伴们的指点，我终于领会了在英国看医生和牙医的奥义：一定不能精准地描
    述自己的病情，请务必把自己往死里说。

    我：……甲硝唑，剂量是xxx。阿姨：噢，那是我给你开的剂量不够啊，那我再给你开点
    。……阿姨，我是中国人，我们从小拿抗生素当糖吃的，这在世界上都有reputation的
    吧……现在你来跟我说上次的剂量不够要加大？？？？

    经验教训：有牙该拔直接拔，莫待牙疼狂挠墙。去英国前最好在国内看好牙医。英国
    牙医适合做洗牙。补牙勉强也算可以，尽量不要在英国等着公立医院排队拔牙。另，
    有在美国加州的朋友说：他拔了2颗阻生智齿+做了根管治疗和牙冠，在保险公司付了
    一部分费用之后，他自己还需要为每颗牙付1000美金。英国免费医疗，所以医生倾向
    于不作为，尽量叫你弃疗自愈。比如不舒服了想约全科医生十有八九都约到10天以后
    。根本无法约专科医生，都是全科医生GP。 GP觉得你哪里不对了，才会推荐你去专科
    医生。美国医生倾向于过度治疗。反正自己付钱，收费单经常吓死人。

    refs and see also

      - [美国公司英国分部的食堂，只有早餐可以调众口了 - 与食巨近贱多食广地蹦跶在不列颠 - 知乎专栏](http://zhuanlan.zhihu.com/p/20057948)
      - [英国牙医历险记（血泪史） - 与食巨近贱多食广地蹦跶在不列颠 - 知乎专栏](http://zhuanlan.zhihu.com/p/19715685)

[Matrix67 水平怎么样？ - 吴告于的回答 - 知乎](http://www.zhihu.com/question/20823906/answer/16329313)

:   如果一个人踢球，看起来还不错，有旁边的人就很好奇，问：他踢球的水平怎么
    样，能踢世界杯吗？另一个看客鄙夷地说，他根本和马拉多纳不在一个档次，连
    贝克汉姆都说他比不过马拉多纳，这小子就更不用说了。然后看客们就很看不起
    踢球的那位，认为他踢的不是真正的球。。。

    **为毛 我们发展出这种恶心的逻辑趣味？**

[Web设计开发资源分享 | Meditic](http://meditic.com/web-design-development-resources)

:   从08年开始创业以来，世界变了很多，但是有一个观点我一直坚信不疑：软件吞噬一
    切，而Web吞噬软件。

    作为一个非科班出身的Web开发者和伪设计师，我最擅长的事情之一，就是找到这个行
    业最实用的开发和设计工具，用简单、高效的工作环境为自己的项目提供服务。

    （好多工具……）

[苹果电脑/Mac OS及其它 | Meditic](http://meditic.com/explore-your-mac-os)

:   看看 QQ 的苹果版的设计，就能理解两个系统的天差地别。再流氓的软件，到了苹
    果下都得重新设计过，而且绝对不敢做弹窗广告，这不是偶然的。

[碰巧而已 | Meditic](http://meditic.com/you-just-dont-belong-to-anyone)

:   人们喜欢把自己套在一个群体里，以获取安全感。如果自己比不过别人，就可以
    去拿这个群体和别人比。比如北大的很多学生，聚会的时候，跳舞远不如海淀走
    读学院的学生，北大那帮人必定会安慰自己：“我可是北大的学生啊”。是啊，他
    的确来自一个破校，可是，这无法改变你跳舞不如他的事实。在跳舞界，你就是
    个 loser。在现实生活中，我发现越是喜欢给自己带帽子的人，越是无能。真正牛
    比的人，绝不需要靠“我来自国际知名的 xx 公司”这种低劣的包装来显示自己的牛
    比。

[如何降低用户的价格敏感度 | Meditic](http://meditic.com/how-to-cut-down-price-sensitivity-for-users)

[关于/meditic是谁 | Meditic](http://meditic.com/about)

:   “非常无聊”，深得我心。

    不生病、不休息、也不娱乐，除了吃喝拉撒，几乎都在工作，看起来好像是工作狂，
    其实我是生活狂。对我来说，吃喝拉撒不是生活，那只是维持肉体存活的手段，
    **非常无聊**；从不断的工作和作品中获得乐趣，才是我的生活。

[我有个朋友，做图源的，最近被捕了 - 文章](http://weibo.com/p/1001603915337371370351)

:   所以当我知道原来他是图源帝的时候，我非常平静，只表示了一个“噢~”。**这就像
    你知道一个人的工作是死刑执行人的时候，你不会对这份工作表现出想要参与其
    中的兴奋，也不会否认这份工作的必要性表现出不齿于疏远一样。**

    我们一起去 Comic market，他能把企业区各个展区的出展商，从创设经历到员工
    八卦到巅峰作品到黑历史从头到尾吐个遍。我们一起去卡拉 OK，我一首炉心溶解
    ，他回敬我一首 Melt。我唱一首 1 期 OP，他回敬我一首 2 期 ED。我说我是御
    姐控，他说太俗了，老子是伪娘控。

    有一次，我看到图源帝在贴吧回应那些歇斯底里的催更党，他说，你要知道，中
    国汉化组给的那点破钱，加个 0 都算不上我现在挣的钱的零头。国外的论坛啥的我
    也看，就 TM 中国的这儿一天到晚有人催更，**还一个个都跟自己是大爷似的**
    。我说，你其实已经完全不需要给中国提供图源了阿，甭搭理他们呗。图源帝语
    重心长地跟我说：“唉，毕竟咱中国人这么着也不能汉奸成那样阿。”

    总之，这就是我认识的图源帝。一个死宅，伪娘控，ACG 通吃，但仅限 2 次元，
    AKB48 什么的反而非常生疏。一个技术宅，对设备，质量，精益求精，程序，音
    乐，图像加工，都是精通领域。一个里世界的国际大咖，引领图源“事业”的先锋
    ，言语畅通，八面玲珑，在图源这个稳赔不赚的事业上做到发家致富。一个中国
    人，会在贴吧吐槽，在 B 站传视频。冒着风险，顶着伸手党的炮火，也不忘在自己
    最困难的时候赞助过自己的同胞。

[【社长presents】电子书-LOVE-ZARD字幕社](http://lovezardfansub.lofter.com/post/25be0f_7feda66)

:   ```tzx-bigquote
    ZARD 是？
    ZARD，是一个传奇。
    ZARD = 坂井泉水？
    其实可以这么说。
    ZARD不是最红的，
    但是，日本大街小巷的人们，
    几乎都知道 ZARD。
    就算不知道 ZARD，
    也知道那首鼓励了无数人的《負けないで》。
    ZARD 一直低调的发片，几乎零宣传。
    却在泉水小姐逝世之后，仍然保持着日本 CD 总销量第八的记录。
    泉水小姐不在了，但是，她付出自己的一生打造的 ZARD，
    永远是个传奇。
    ```

[程序人生-代码疯子的技术博客-Www.ProgramLife.Net](http://www.programlife.net/)

[如何在windows下编译Chrome源代码 - namelcx的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/namelcx/article/details/5971159)

:   当时是为了找到一个插件能让浏览器的 tab 放在左边。后来发现 chrome 不行（chromium 可以，但要自己编译）。
    再后来，发现 Firefox 上有这么一个插件，叫“Tab Kit”。大赞！

    refs and see also

      - [Developer Toolbar - Firefox Developer Tools | MDN](https://developer.mozilla.org/en-US/docs/Tools/GCLI)

[为什么特别成功的人喜欢每天都穿一样的衣服？ - 简书](http://www.jianshu.com/p/7730696482f9)

:   <!-- 我就不专门点出“成功”这两个字并不让我喜欢了。除了这一点本文很“深得我心”！ -->

    Ego-Depletion

    #. 我真的很幸运，每天醒来都能为全球逾 10 亿用户服务。如果我把精力花在一
        些愚蠢、轻率的事情上，我会觉得我没有做好我的工作。
    #. 主要是因为这样**很方便**，而且还能表达一种个人风格。
    #. 每天吃这些食物可能会让别人觉得有点单调，但对我来说并不在意这样。
    #. 常常看着手机纠结几分钟甚至十几分钟，直到大脑疲惫混乱，精疲力尽的时候，
        匆匆选一样，物质的丰富和选项的繁多常常让我们无所适从。
    #. 这些日常生活中的琐碎，无关痛痒，却消磨了我们的资源。但其实如果午餐就
        点小组饭，反正菜品数量有限每天又不重样，随便点哪个菜，都是自己喜欢
        或者可以接受的，真的可以节约好多时间和精力。
    #. 虽然每天吃同一家店的东西看似有些枯燥也缺乏美感，但人生已经足够复杂，
        不要再让日常的琐碎来消磨我们的幸福啦。简化无关紧要的选择，把这些时
        间花在重要的决策上，把精力集中在我们真正喜欢的人和事上，我们的生活
        将会不一样。
    #. 让我们简单点，再简单点。
    #. Simplicity is the ultimate sophistication - Da Vinci
    #. Less is more.

    **Ego depletion** refers to the idea that self-control or willpower
    draw upon **a limited pool of mental resources that can be used up.
    When the energy for mental activity is low, **self-control is typically
    impaired**(受损的), which would be considered **a state of ego
    depletion**. In particular, experiencing a state of ego depletion
    impairs the ability to control oneself later on. A depleting task
    requiring self-control can have a hindering effect on a subsequent
    self-control task, even if the tasks are seemingly unrelated.
    Self-control plays a valuable role in the functioning of the self on
    both individualistic and interpersonal levels. Ego depletion is
    therefore a critical topic in experimental psychology, specifically
    social psychology, because it is a mechanism that contributes to the
    understanding of the processes of human self-control.

    refs and see also

      - [Ego depletion - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Ego_depletion)

[JavaScript: How to Change CSS](http://xahlee.info/js/css_change.html)

:   <div style="font-size:80%">

    | CSS Syntax | JavaScript DOM Syntax |
    | ---------- | --------------------- |
    | `padding:1em`{.css} | `ele.style.padding="1em"`{.javascript} |
    | `border:solid thin red`{.css} | `ele.style.border="solid thin red"`{.javascript} |
    | `font-family:"DejaVu Sans",sans-serif`{.css} | `ele.style.fontFamily='"DejaVu Sans",sans-serif'`{.javascript} |

    </div>

    CSS's pseudo selectors (`a:visited`{.css}, `a:link`{.css}, `div.nav:before`{.css}, `div.nav:first-child`{.css}) cannot be scripted.

[计算的威力，智慧的传奇](http://history.programmer.com.cn/1903/)

:   ![](http://ww2.sinaimg.cn/large/7cc829d3gw1ezqqxvrhcuj20an085myk.jpg)

    Fabrice Bellard 走的是完全不同的路，Bellard的绝大多数贡献都集中在自由软件与
    开源领域，除了QEMU之外，最为人熟知的就是FFMPEG，他被誉为过去20年中最闪亮和
    最有影响力的程序员之一，但他的名声远远却低于他的贡献。

    如果说FFMPEG体现了Bellard深厚的数学和信号学天分，那么QEMU 的实现就体现了
    Bellard对于计算机体系架构的深刻理解和程序设计的深厚功底。

    2011年，他用JavaScript写了一个PC虚拟机Jslinux。这个虚拟机仿真了一个32位的
    x86兼容处理器，一个8259可编程中断控制器，一个8254可编程中断计时器，和一个
    16450 UART。 http://bellard.org/jslinux/，在笔者的普通桌面电脑的Chrome浏览
    器中，Jslinux只用了仅仅5.075秒就启动了Linux。

    最后，让我们不妨八卦一下，在Google中输入Fabrice Bellard vs Linus Torvalds会
    出现什么呢？毕竟，在笔者心目中，他们就像罗伯特德尼罗PK阿尔帕西诺。

    映入眼帘的第一个结果，是财富杂志科技栏目专访全球在线支付巨头Stripe的创始人
    的一篇文章，其中提到。There are also a few individual people, like Fabrice
    Bellard, Jeff Dean, and Dan Bernstein, who are just generally fabulously
    productive and make me feel guilty about how little I get done. 好吧，Jeff
    Dean…，与Jeff Dean并列，足以说明Fabrice Bellard的超强实力与卓越成就。

    refs and see also

      - [Fabrice Bellard's Home Page](http://bellard.org/)
      - [云计算技术背后的那些天才程序员：FFmpeg的作者法布里斯·贝拉 - 博客 - 伯乐在线](http://blog.jobbole.com/69582/)


[图灵社区 : 阅读 : 连城：大数据场景下的“搔到痒处”和“戳到痛处”（图灵访谈）](http://www.ituring.com.cn/article/179495)

:   初二时班级重组，恰好发现坐我前面的男生下课时间在草稿纸上涂写BASIC程序，一问
    才知道他从小学就开始写程序，于是拜师学艺。后来成了莫逆之交。现在他也在湾区
    工作。那时候其实也写不出什么有技术含量的东西。但是无知无畏啊，觉得写程序的
    时候有造物主的感觉，于是就下定决心走这条路了。

    玩Erlang的时候，我开始对Erlang的很多特性感到好奇，包括匿名函数、GC、尾递归
    调用等等，这些特性在Python、Ruby等一些动态语言中也同样存在，但是我只知其然
    ，而不知其所以然。我觉得好奇的是，第一、函数式语言跟普通的命令式语言的本质
    相比有什么优势；第二、这些特性背后的运行时机制到底是什么。那个时候我在百度
    已经开始做管理，基本脱离了一线开发，说实话少了挺多乐趣。我就决定用业余时间
    把函数式编程搞清楚。

    我自己的习惯是每年都会做一个side project，我觉得要把函数式搞明白，最简单的
    办法就是自己做一个实验性的函数式语言实现，比如一个最简单的解释器什么的，也
    不求它能够多么高效、实用，只求把个中原理搞明白。既然是实验，目标语言当然越
    简单越好，于是选中了Scheme。Scheme的整个R5RS标准连目录带附录总共才50页，特
    别精简。

    因为都是业余时间做，这个小项目断断续续地做了两年，期间用不同方法重写了若干
    遍。项目整个做完了之后，确实把动态类型函数式语言最基本的东西，从运行时模型
    到理论上的一些概念和原理都弄明白了。实际上就跟我之前研究的分布式系统一样，
    也是把主要文献都粗略扫了一遍。

    巧的是，13年六月份意外得知Intel中国研究院在招会Scala的实习生做Spark。那时候
    Scala还在国内还没有多少动静，不要说会，听说过Scala的学生都不多。当时我对
    Spark还一无所知，简单看了一下，发现这个项目很好地结合了分布式系统和函数式语
    言这两个我最为感兴趣的技术方向。耐不住在家赋闲刷题的无聊，我最终以
    contractor身份加入了Intel，并和Intel中国研究院吴甘沙和杨栋带领的团队一起做
    了大半年Hadoop和Spark相关的研究。

    JVM在大数据领域的流行，与Hadoop脱不开干系。Hadoop本身的成功，与Java的低入门
    门槛、高开发效率（相对于C++而已）应该有相当大的关系。在HDFS、Hadoop
    MapReduce流行之后，为了能与Hadoop无缝互操作，后续的一些大数据系统自然而然地
    也选择了Java。近年来，虽然Java在语言层面发展缓慢，越来越被诟病，但Clojure、
    Scala等JVM上的新语言却层出不穷，这又进一步激发了人们继续以JVM为平台搭建新兴
    大数据系统的热情。Hadoop生态圈越做越大，而试图加入这个生态圈的新系统若想无
    缝利用现有的遗产，就只能选择JVM。于是雪球越滚越大，进而令JVM几乎垄断了整个
    大数据行业。

    据我了解到的情况，国内的很多企业，尤其是电信行业的企业，过往大量依赖Oracle
    和DB2，业务紧密依赖SQL。而在近几年的去IOE潮流中，又偏偏缺乏高效的能够处理大
    数据的SQL执行引擎。这个时候，Shark和Spark SQL的出现给大家带来了较好的选择。
    以此为契机，大量的开发者被吸引到了Spark SQL社区。此外，Shark的作者辛湜博士
    本人就是中国人，这点不知道是不是也有关系 :-)

[色情片看得越多的人越自恋？ - Article - JIJITANG](http://www.jijitang.com/article/540faac920296a4535b9370c)

:   一份最新研究显示，有自恋倾向的人看片数量比其它人更多，并且一个人在网上看色
    情作品数量越多，越容易产生自恋感。

    研究人员发现，测试者在自恋数值上的得分越高，越可能看过在线Porn。

    在该研究中，所有看过porn的人，花在看porn上的时间越多，自恋程度就越高，两者
    成正相关。

[你写论文时发现了哪些神网站？ - 曲晓峰的回答 - 知乎](http://www.zhihu.com/question/35931336/answer/68972601)

:   <http://Overleaf.com> (<http://ShareLaTeX.com>) + <http://Lucidchart.com>
    (<http://Gliffy.com>) + <http://Mendeley.com>

[Real World Haskell](http://book.realworldhaskell.org/read/index.html)

[Download · coolwanglu/pdf2htmlEX Wiki](https://github.com/coolwanglu/pdf2htmlEX/wiki/Download)

:   Run from Docker container is the easiest way to convert pdf file to html, which

    you don't need knowledge on how to compile and install `pdf2htmlEX`{.bash}.

    ```bash
    docker run -ti --rm \
        -v ~/pdf:/pdf bwits/pdf2htmlex pdf2htmlEX \
        --zoom 1.3 test.pdf
    ```

[NW.js & Electron Compared - TangibleJS](http://tangiblejs.com/posts/nw-js-electron-compared)

[What are all the Jeff Dean facts? - Quora](https://www.quora.com/What-are-all-the-Jeff-Dean-facts)

:   段子：

    #. 当 Richard Stallman 听说 Jeff Dean 的自传专属 Kindle 平台，他就去买
        了 Kindle。
    #. Jeff 来面试谷歌时，被问到等式 P=NP 成立的条件，他回答，P=0 或者 N=1
        时成立。然后在面试官哈哈大笑的时候，他看了一眼谷歌公有证书，就直接
        在白板上写出了相应的私钥。
    #. 在 2000 年末的时候，Jeff Dean 写代码的速度突然增长了 40 倍，原因是他
        把自己的键盘升级到了 USB 2.0。
    #. When Jeff gives a seminar at Stanford, it's so crowded Don Knuth has
        to sit on the floor. (TRUE)

    refs and see also

      - [趣文：谷歌大牛 Jeff Dean 的那些“惊人真相” - 博客 - 伯乐在线](http://blog.jobbole.com/51607/)
      - [Jeff Dean_百度百科](http://baike.baidu.com/link?url=ZWotR3Ro10Wai8ASDOL0aSITl9dnaI4bFNeLo_aXFUaqVdqgztiRb5mnuIDaYj9E0eCuJ5fVIrGxNhQkH35IoK)

[高级语言写代码时就能够想到对应的汇编代码是怎样一种体验？ - Milo Yip 的回答 - 知乎](http://www.zhihu.com/question/38330356/answer/75939138)

:   最不能忍的是，编译器（主要是较老的版本）不能生成我想要的指令，多了一些
    无意义的垃圾。之前做 SIMD 库的时候用 intrinsics（固有的；本质的）常会出
    现，要用各种 hacks 去调教编译器。我曾说过，脚本语言如 JavaScript 并不适
    合学习计算机科学，因为中间有太多黑盒，不能直觉地知道代码到底会怎样执行。

    > 啥叫差距。。。有人拿着编译器实现不了需求，有人却担心编译器干不好活

[Regular expression - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Regular_expression)

[MFC、WTL、WPF、wxWidgets、Qt、GTK 各有什么特点？ - 姚冬的回答 - 知乎](http://www.zhihu.com/question/23480014/answer/24809080)

:   Qt，虽然它也是上世纪 90 年代出现的，但是它在 21 世纪有了长足的进步。应
    该说它的起点就比较高，一开始就定位跨平台，而且不满足于简单封装系统 API，
    而是要自己创造出一套完整的 API 和框架，**甚至要代替系统 API**，所以不仅
    仅是做 UI，而是涉及到了 APP 开发所用到的所有东西，包括网络，数据库，多媒
    体，脚本引擎等。`signal/slot` 是 Qt 发明的，这是事件通知模型里 C++ 语言
    的最佳实现了，甚至我都觉得这该写进 C++ 标准，估计 C++ 委员会的老顽固们
    是从不写 GUI 的。早期的 QT 也是没有DirectUI 的概念的，每一个 QWidget 都
    对应一个原生窗口，从 Qt4.4 开始，只有顶层 QWidget 才是原生窗口，而 Child
    Widget 是 Alien Widget，只是个抽象的图层不对应原生窗口，这就实现了
    DirectUI 的概念，很多图形效果也就变得可能了，比如窗口层叠透明效果。在
    4.8 后实现了 QPA(Qt Platform Abstraction)，这就使移植 Qt 变得很容易，目
    前 **Qt 是支持平台最多的框架没有之一**。由于早期授权的问题，Qt 对于开源
    社区不是很友好，导致推广不太顺利，直到它改成了 LGPL 方式，如果 Qt 能早点
    想开了，恐怕就没有 wxWidgets 的生存空间了。Qt 的缺点也是有的，就是太大，
    不过可以自己剪裁，我可以把 QT 库剪裁到发行包压缩后 2.5 MB。

    最后我想补充下真正的UI库之王，cocoa。Apple的成功有很多原因，其中之一就是
    cocoa，cocoa理念十分先进，而且出来得早，我都怀疑Qt和WPF有不少思想都是借鉴
    cocoa的。定义式的UI，用xib就可以定义UI的绝大部分细节，而且提供所见即所得的
    可视化设计工具。严格的MVC，而且定义非常清晰，分工明确。signal/slot，虽然不
    叫这个名字，但思想就是，而且真的是拖动鼠标就能connect。提供了ARC，闭包和反
    射，给UI开发带来巨大的便利性，当然这得益于Objective-C这个语言。

[怀旧梦想家的程序世界 - Living Computer Museum](http://www.douban.com/note/429783660/)

:   这些书对我“影响最大”，但未必因为它本身有多好，更多的是一种机缘巧合：
    它碰巧出现在那个时候，带我走进一个**全新的世界**。

    我是后悔，但不是因为没去毕业礼，而是因为那个时候确实没能给自己一个交代：
    四年的学习到最后竟没有那种一直期待的 - 沿着曲线一直攀越山顶的感觉。
    **什么嘛，就这么毕业了。**

    恐怕是人类的天性吧，因手里的工具而进化，也被手里的工具所限制。我相信这
    就是美国人热衷团队合作，也热衷跨学科团队的原因。立场的不同可能导致分歧
    吵架，也可能导致下一个 big bang。以前我总幻想做一个独立的 freelancer，
    但现在不这么想了。经历了和不同背景的人合作去完成一些完全超越自身能力和
    眼界的事情以后，我想这几万刀也算没白花。

    > "Oh god, it's starting to rain."
    >
    > "That's okay. I don't mind getting wet. Paris is the most beautiful in the rain."
    >
    > "Oh what a thing to say. I couldn't agree more."

    旧的问题还会有新的角度，**旧的知识还会有更深层的理解**，不能被自己的自大冲昏了脑袋。

    refs and see also

      - [十本书](http://www.douban.com/note/417394409/)
      - [写在毕业 —— At a loose end](http://www.douban.com/note/410336666/)
      - [. (午夜巴黎 影评)](http://movie.douban.com/review/5744055/)
      - [dive into something](http://www.douban.com/note/307265481/)

[LaTeX/Macros - Wikibooks, open books for an open world](https://en.wikibooks.org/wiki/LaTeX/Macros)

[Code Simplicity » The Singular Secret of the Rockstar Programmer](http://www.codesimplicity.com/post/the-singular-secret-of-the-rockstar-programmer/)

:   There is only one, singular fact:

    > **The better you understand what you are doing, the better you will do it.**

    **Rockstar programmers** understand what they are doing far, far better
    than average or mediocre programmers.

    I won’t lie to you–it sometimes is a long path. But it is worthwhile.
    And at the end of it, you may find yourself suddenly the amazing senior
    engineer who everyone comes to for advice.

[Wikipedia:Stub - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Wikipedia:Stub)

:   A stub is an article deemed too short to provide encyclopedic coverage of a
    subject. The objective of this page is to provide a general guide for
    dealing with stubs.

    A stub is an article that, although providing some useful information, is
    too short to provide encyclopedic coverage of a subject, and that is
    capable of expansion. Non-article pages, such as disambiguation pages,
    lists, categories, templates, talk pages, and redirects, are not regarded
    as stubs.

[pandoc中文pdf转换攻略 - 一个架构士的思考与沉淀之地](http://afoo.me/posts/2013-07-10-how-to-transform-chinese-pdf-with-pandoc.html)

:   ```makefile
    SOURCES := $(wildcard *.md)
    # path substitute
    OBJECTS := $(patsubst %.md, %.html, $(wildcard *.md))
    OBJECTS_PDF := $(patsubst %.md, %.pdf, $(wildcard *.md))
    ```

    `find ./posts -name '*.md' -exec pandoc {} -s -S --toc -o {}.html \;`{.bash}

    In Vim: `let $EDITOR="notepad++"`, `:make m`.

    ```bash
    pandoc pandoc.markdown -t html5 -o index.html \
            --toc --smart --template=pm-template
    pandoc pandoc.markdown -o pandoc-zhtw.pdf \
            --toc --smart --template=pm-template \
            --latex-engine=xelatex -V mainfont='LiHei Pro'

    # add style to table
    sed -i '' \
        's/<table>/<table class="table table-bordered table-condensed">/' \
        index.html
    ```

    CMD: `date /t`{.bash}

    `fc-list`{.bash}

    ```bash
    pandoc dist/trpl-2015-05-15.md \
        --smart --normalize --standalone --self-contained \
        --highlight-style=tango --chapters --table-of-contents \
        --variable papersize='a4paper' --variable monofont='Source Sans Pro' \
        --template=lib/template.tex --latex-engine=latex \
        --from=${MARKDOWNFORMAT} \
        --to=latex --output=dist/trpl-2015-05-15-a4.pdf
    ```

    `${MARKDOWNFORMAT}`{.bash}

    :   ```plain
        markdown
        grid_tables
        pipe_tables
        raw_html
        implicit_figures
        footnotes
        intraword_underscores
        auto_identifiers-inline_code_attributes
        ```

    ```bash
    #!/bin/bash

    SYEAR=2005
    EYEAR=`date "+%Y"`

    POSTPATH=~/Projects/octopress/source/_posts/

    echo
    echo "YEAR      File #    Word Count"
    echo "=============================="
    for (( i=$SYEAR; i<=$EYEAR; i=i+1 ))
    do
        NUMFILES=`ls -l $POSTPATH$i* 2> /dev/null | wc -l`
        NUMWORDS="       0"
        test $NUMFILES != "0" && NUMWORDS=`wc -m $POSTPATH$i-* | tail -n 1 | sed 's/ total//'`
        echo "$i    $NUMFILES      $NUMWORDS"
    done
    echo "=============================="
    NUMFILES=`ls -1 $POSTPATH* | wc -l`
    NUMWORDS=`wc -m $POSTPATH* | tail -n 1 | sed 's/ total//'`
    echo "Total   $NUMFILES      $NUMWORDS"
    echo
    ```

    ```bash
    #!/bin/bash

    for var in "$@"
    do
        perl -pi -e 's/\r\n/\n/g' $var
    done
    ```

    refs and see also

      - [博客生成脚本](http://www.synbe.com/index/posts/html/help-code/sh.md.html)
      - [pages/convert.sh at gh-pages · tzengyuxio/pages](https://github.com/tzengyuxio/pages/blob/gh-pages/pandoc/convert.sh)

[一个架构士的思考与沉淀之地](http://afoo.me/favorite.html)

:   个人感觉，真正的黑客可能用 Mac，但一定不会用 Mac Pro。通常都是 11' 的 Macbook Air。

    #. 对于我现在的工作来说，11 寸的 air 可以很好的满足需求， 轻便性是我现在
        追求的主要特性， 尤其是现在很多是文案性的工作。
    #. Windows 下有 visio，Mac 下其实有 OmniGraffle, 不过， 后者实在 tnd
        太贵了，某一段时间又特别装逼要用正版，就只好找其它的 alternatives， 辗
        转反侧良久， 最终定下来使用这款 yEd。
    #. plantuml, 其它图都使用 yed 搞定了， 只有 sequence 图有点儿不太好画， 所
        以， 选来选去找到这个小东东，bravo~

[CodeMirror](http://codemirror.net/)

[CSS3动画详解 | BeiYuu.com](http://beiyuu.com/css3-animation/)

[又见C++诡异问题 | Vimer的程序世界](http://www.vimer.cn/2011/09/%e5%8f%88%e8%a7%81c%e8%af%a1%e5%bc%82%e9%97%ae%e9%a2%98.html)

:   `Class a()`{.cpp} &ne; `Class a`{.cpp}

[[译] Vim 的蔓延 - 依云's Blog](http://lilydjwg.is-programmer.com/2015/11/16/vim-creep.188665.html)

:   你微笑了一下，准备说出那个改变了你的一生的词。那个词，如果你的同事也选
    择追随的话，**他会掉进同样的兔子洞**，进入一个充满无限可能的无限组合的
    世界，那些组合产生出他之前只能在最疯狂的梦中见到的极致高效。他让你记起
    多年以前那个昏暗的计算机实验室里的自己。带着些许兴奋，你轻轻地说出那个
    词。

    <div class="tzx-drawer" shy>
    良心编辑器，编辑器之神。

    :   ```vimrc
        " auto reload
        set autoread

        " ?
        set so=7

        " turn on auto complete list
        set wildmenu

        " Ignore compiled files
        set wildignore=*.o,*~,*.pyc

        "Always show current position
        set ruler

        set cmdheight=2                " Height of the command bar

        set hid                        " A buffer becomes hidden when it is abandoned

        set backspace=eol,start,indent " 自动 backspace 到上一行
        set whichwrap+=<,>,h,l

        set ignorecase                 " Ignore case when searching
        set smartcase                  " When searching try to be smart about cases

        set hlsearch                   " Highlight search results

        set incsearch                  " Makes search act like search in modern browsers
        set lazyredraw                 " Don't redraw while executing macros (good performance config)
        set magic                      " For regular expressions turn magic on
        set showmatch                  " Show matching brackets when text indicator is over them
        set mat=2                      " How many tenths of a second to blink when matching brackets
        set noerrorbells               " No annoying sound on errors
        set novisualbell
        set t_vb=
        set tm=500

        syntax enable                  " Enable syntax highlighting
        set guioptions=""
        set encoding=utf8
        set ffs=unix,dos,mac           " Use Unix as the standard file type
        set nobackup                   " Turn backup off, since most stuff is in SVN, git et.c anyway...
        set nowb
        set noswapfile
        set expandtab                  " Use spaces instead of tabs

        set smarttab                   " Makefile 里插入真 tab
        set shiftwidth=4
        set tabstop=4
        set lbr                        " Linebreak on 500 characters
        set tw=80
        set ai                         " Auto indent
        set si                         " Smart indent
        set wrap                       " Wrap lines
        " Visual mode pressing * or # searches for the current selection
        " map j gj
        " map k gk
        " map <space> /
        " map <c-space> ?              " Map <Space> to / (search) and Ctrl-<Space> to ? (backwards search)
        map <C-j> <C-W>j               " Smart way to move between windows
        map <C-k> <C-W>k
        map <C-h> <C-W>h
        map <C-l> <C-W>l
        map <leader>ba :1,1000 bd!<cr> " Close all the buffers
        map <leader>tn :tabnew<cr>     " Useful mappings for managing tabs
        map <leader>to :tabonly<cr>
        map <leader>tc :tabclose<cr>
        map <leader>tm :tabmove
        " tabedit <file>
        map <leader>te :tabedit <c-r>=expand("%:p:h")<cr>/
        map <leader>cd :cd %:p:h<cr>:pwd<cr>
        "g`"                           " Return to last edit position when opening files
        set viminfo^=%
        set laststatus=2               " Always show the status line

        func! DeleteTrailingWS()
          exe "normal mz"
          %s/\s\+$//ge
          exe "normal `z"
        endfunc
        autocmd BufWrite *.py :call DeleteTrailingWS()
        autocmd BufWrite *.coffee :call DeleteTrailingWS()

        " vimgrep???
        map <leader>q :e ~/buffer<cr>

        " ?
        function! CmdLine(str)
            exe "menu Foo.Bar :" . a:str
            emenu Foo.Bar
            unmenu Foo
        endfunction

        function! VisualSelection(direction) range
            let l:saved_reg = @"
            execute "normal! vgvy"

            let l:pattern = escape(@", '\\/.*$^~[]')
            let l:pattern = substitute(l:pattern, "\n$", "", "")

            if a:direction == 'b'
                execute "normal ?" . l:pattern . "^M"
            elseif a:direction == 'gv'
                call CmdLine("vimgrep " . '/'. l:pattern . '/' . ' **/*.')
            elseif a:direction == 'replace'
                call CmdLine("%s" . '/'. l:pattern . '/')
            elseif a:direction == 'f'
                execute "normal /" . l:pattern . "^M"
            endif

            let @/ = l:pattern
            let @" = l:saved_reg
        endfunction

        " Super useful! From an idea by Michael Naumann
        vnoremap <silent> * :call VisualSelection('f')<CR>
        vnoremap <silent> # :call VisualSelection('b')<CR>
        vnoremap <silent> gv :call VisualSelection('gv')<CR>
        vnoremap <silent> <leader>r :call VisualSelection('replace')<CR>
        ```

        ```
            %           current file name
            #           alternate file name
            #n          alternate file name n
            <cfile>     file name under the cursor
            <afile>     autocmd file name
            <abuf>      autocmd buffer number (as a String!)
            <amatch>    autocmd matched name
            <sfile>     sourced script file name
            <slnum>     sourced script file line number
            <cword>     word under the cursor
            <cWORD>     WORD under the cursor
            <client>    the {clientid} of the last received

        Modifiers:
            :p          expand to full path
            :h          head (last path component removed)
            :t          tail (last path component only)
            :r          root (one extension removed)
            :e          extension only
        ```
    </div>

    Vim more

      - [The ultimate Vim configuration - vimrc](http://amix.dk/vim/vimrc.html)
      - [dotvim/vimrc at master · lilydjwg/dotvim](https://github.com/lilydjwg/dotvim/blob/master/vimrc)
      - [Vim(gVim)对排序的妙用 | Vimer的程序世界](http://www.vimer.cn/2012/03/vimgvim%e5%af%b9%e6%8e%92%e5%ba%8f%e7%9a%84%e5%a6%99%e7%94%a8.html)
      - [让Vim(gvim)支持C++STL库的自动补全 | Vimer的程序世界](http://www.vimer.cn/2010/01/%e8%ae%a9vimgvim%e6%94%af%e6%8c%81%e8%a1%a5%e5%85%a8cstl%e5%ba%93.html)
      - [陈列室 - 依云's Blog](http://lilydjwg.is-programmer.com/pages/19540.html)
      - [Vim Commands Cheat Sheet](http://bullium.com/support/vim.html)

[Differential (mechanical device) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Differential_(mechanical_device))

:   A differential is a particular type of simple planetary gear train that
    has the property that the angular velocity of its carrier is the
    average of the angular velocities of its sun and annular gears.

    ![Hypoid gear pair that connects an automotive drive shaft to a differential.](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Sprocket35b.jpg/170px-Sprocket35b.jpg)

    ![Input torque is applied to the ring gear (blue), which turns the
      entire carrier (blue). The carrier is connected to both sun gears
      (red and yellow) only through the planet gear (green). Torque is
      transmitted to the sun gears through the planet gear. The planet
      gear revolves around the axis of the carrier, driving the sun
      gears. If the resistance at both wheels is equal, the planet gear
      revolves without spinning about its own axis, and both wheels
      turn at the same rate.](https://upload.wikimedia.org/wikipedia/commons/6/61/Differential_free.png)

    refs and see also

      - [差速器是怎样工作的(Around the Corner (1937))](http://v.youku.com/v_show/id_XNDkwMTg0MDI0.html)

[Learn Vimscript the Hard Way](http://learnvimscriptthehardway.stevelosh.com/)

[Best of VIM Tips, gVIM's Key Features zzapper](http://www.rayninfo.co.uk/vimtips.html)

[visual studio 2010 - CMake configuring fails. "cl.exe is not able to compile a simple test program" - Stack Overflow](http://stackoverflow.com/questions/14590947/cmake-configuring-fails-cl-exe-is-not-able-to-compile-a-simple-test-program)

:   装了 Atom 编辑器，VS 就挂了，然后解决方案是：**Downgrade .NET to 4.0**……

    refs and see also

      - [cmake错误：C编译器不能简单的编译一个测试程序 - 开源中国社区](http://www.oschina.net/question/1378817_128323)
      - [dcmtk - CMake: "cl.exe not able to compile a simple test program" - Stack Overflow](http://stackoverflow.com/questions/22392976/cmake-cl-exe-not-able-to-compile-a-simple-test-program)

[turing_machine/buildall.sh at master · gigix/turing_machine](https://github.com/gigix/turing_machine/blob/master/clojure/buildall.sh)

:   `pushd`{.bash} & `popd`{.bash}

    ```bash
    ROOT_DIR=$(dirname $0)

    pushd $ROOT_DIR/domain && \
    ./build.sh &&
    popd && \
    \
    pushd $ROOT_DIR/web && \
    ./build.sh
    ```

<div class="tzx-drawer">
[Content Folding | CSS-Tricks](https://css-tricks.com/content-folding/)

:   我现在用的是 `tzx-drawer` 来 fold 掉 `<dd>`{.html} 元素，点击可以切换
    fold 的状态。

    单击这里，就可以隐藏内容。
</div>

[Styling `<hr>`{.html} with CSS](http://www.sovavsiti.cz/css/hr.html)

:   有点赖皮。

    ```html
    <div class="hr"><hr /></div>
    ```

    ```css
    div.hr {
        height: 15px;
        background: #fff url(hr1.gif) no-repeat scroll center;
    }

    div.hr hr {
        display: none;
    }
    ```

[刘未鹏 | MIND HACKS | 所有文章](file:///E:/blogs/MindHacks/mindhacks.cn/archives/index.html)

[Frequently Used Commands of git - 羡辙杂俎](http://zhangwenli.com/blog/notes/note/2014/10/09/git/)

:   ```bash
    # add tracked files only
    $ git add -u

    # git checkout
    $ git fetch
    $ get checkout <branch_name>

    # discard unstaged changes
    $ git clean -df
    $ git checkout -- .

    # change author after commit
    $ git commit --amend --author="TANG ZhiXiong <dvorak4tzx@qq.com>"

    # https -> ssh
    $ git config --remote.origin.url git@github.com:<user>/proj.git

    # colorful ui
    $ git config --global color.ui auto

    # alias
    $ git config --global alias.ck checkout

    # view changes after commit
    $ git log # to get the last two commit hases
    $ git diff <old-commit-hash> <new-commit-hash>

    # view remote commit log
    $ git log origin/master

    # delete a remote branch
    $ git push origin --delete <branch_name>

    # push to a new remote branch
    $ git push origin <local_branch_name>:<remote_branch_name>

    # view files of last commit
    $ git show REVISION:<path/to/file>
    $ git show REVISION:<path/to/file> <file_name> # redirect it to a file

    # git update, ignore tracked local file
    $ git update-index --assume-unchanged <file>
    # undo it
    $ git update-index --no-assume-unchanged <file>
    ```

    You can use git show:

    ```bash
    $ git show REVISION:path/to/file
    ```

    For example, to show the 4th last commit of the file `src/main.c`, use:

    ```bash
    git show HEAD~4:src/main.c
    ```

    Note that the path is from the root of the repository unless it starts
    with `./` or `../` to indicate a relative path. For more information, check
    out the man page for [`git-show`{.bash}](http://schacon.github.com/git/git-show.html).

    Doing this by date looks like this:

    ```bash
    $ git show HEAD@{2013-02-25}:./fileInCurrentDirectory.txt
    ```

    Note that `HEAD@{2013-02-25}` means "where HEAD was on 2013-02-25" in
    this repository (using the
    [`reflog`{.bash}](http://git-scm.com/docs/git-reflog)), not "the last
    commit before 2013-02-25 in this branch in history".

    refs and see also

      - [Is there a quick git command to see an old version of a file? - Stack Overflow](http://stackoverflow.com/questions/338436/is-there-a-quick-git-command-to-see-an-old-version-of-a-file)

[为什么你应该（从现在开始就）写博客](http://mindhacks.cn/2009/02/15/why-you-should-start-blogging-now/)

:   如果你选择经常总结自己的知识体系，并说出来给你的读者听，你就会发现你自
    己创造了这样的机会。如果我们平时不反思，**我们觉得很多事情都是当然的**，
    但结果如果要你一开口说给别人听，常常会发现事情就开始变得不那么明显了，
    你说着说着，就开始莫名其妙地发现自己需要用到“反正”这个词了。

    一些平时难以注意到的深层面的差异性就会逐渐浮现出来，你也就多了一次难得
    的机会去**审视自己的思维中到底存放了哪些错误的信息**。

    学会持之以恒地做一件事情。很多人在生活中容易觉得迷失，不知道想要做什么，
    是因为没有一件能够持续地做的事情，用俗话来说就是没有主心骨。用积极心理
    学的话来说就是没有一件能够创造**流体验**的事情，而书写自己的思想则是一
    件容易产生流体验的事情，在书写的时候，特别是理性地书写的时候，大脑逐渐
    进入推理分析模块，一切不愉快的情绪，烦躁感都会逐渐消隐下去。不过前提是
    你得开始，并且**坚持过一开始的困难期，以后的一切便成了习惯成自然**。

    我想再重复一下的是，千万不要碎碎念，我能理解每个人都想偶尔发发牢骚的冲
    动，但是现在已经有了一个很好的窗口：twitter，所以立即停止在你的博客上碎
    碎念，**阅读博客的人希望得到信息而非噪音**。如果实在忍不住想碎碎念的话
    不妨换一下位置，这么来告诉自己：如果你看到别人博客来上这么一段，你会有
    兴趣看吗？

[mastering-emacs-in-one-year-guide/guide-zh.org at master · redguardtoo/mastering-emacs-in-one-year-guide](https://github.com/redguardtoo/mastering-emacs-in-one-year-guide/blob/master/guide-zh.org)

[钗黛双收：若你也同Vim难割舍，却又看Emacs情切切 | Emacs中文网](http://emacser.com/vimvsemacs.htm)

:   由于两位佳人的理念差别之大，加上各自阵营之间的鸿沟之深，使得先贤先哲基本上
    都会在这两个阵营里面挑一个来站队。

    选择 Vim 或 Emacs 已经不仅取决于我们在编辑文本时的好恶，而已经上升到干活的
    人怎么挑工具，过日子的人怎么选老婆这种哲学高度的问题。

    当装机圣手们的情商智商普遍被挑战了以后，大致是迅速分化为两派——啃骨头派和换
    骨头派。啃派如我，继续捏着脚适应 Vim 的小鞋；换派不用说也能猜到，自然是鞋也
    不要就转身踏入了 Emacs 阵营——在那边起码知道怎么打字。

    玩电脑的都是懒人，懒人有个癖好叫“Don’t repeat yourself”，如果谁弄出一套比较
    高效的键盘操作方式，能让我学一次以后就不用再学了，那就暂时去tnnd 的门派。

    电影《社交网络 The Social Network》里面有这样一个镜头，在扎克伯格同学悲愤不
    已，要把女生头像和畜生猪狗一起打分时，他来了句“有必要重启Emacs，修改代码”。
    这个杜撰的场景告诉我们，IT 巨星再怎么胸怀壮志，始于足下的不过是手指另一端连
    着的编辑器。当 geek 们叫嚣要在世界上留下一个痕迹（make a dent in the
    universe）的时候，手里常常拎着一把折凳，折凳背面写着——Emacs。

    博士期间，我主要用的工具是 Matlab 和 Visual Studio，这两个工具自带的编辑器
    **与 Vim 相比都是小白，属于要严重影响心情和智商的那一种**。

    可是作为 Vim 的死忠，对于手掌几乎不挪窝的向往，那是消失不掉的。

[早上好，我的公主！](http://www.douban.com/note/527349294/)

:   这大概是生活态度和情趣把。

    > 所以，早上好，我的公主！
    >
    > 新的一天又要开始啦！

[Github is Your New Resume – code.dblock.org | tech blog](http://code.dblock.org/2011/07/14/github-is-your-new-resume.html)

:   Github is your new resume. Here’s how to make the best of it.

      - College and Personal Projects
      - Make Github Your Biggest Asset

[给我看你的博客 | 透明思考](http://gigix.thoughtworkers.org/2011/6/8/show-me-your-blog/)

:   所以涅，应聘的童鞋们，最好把你的博客一起告诉我们。看到一个精彩的博客，
    简历神马的都是浮云～

[怎样花两年时间去面试一个人](http://mindhacks.cn/2011/11/04/how-to-interview-a-person-for-two-years/)

:   正是这样的不容易，才有不少公司走内部培养的办法，这里的逻辑是：一上来就
    招到靠谱的人太难了，但找一块靠谱的璞玉然后雕琢雕琢相对就简单很多。这倒
    是个办法，但这样做的人难免就陷入了纠结：培养好了，人跑了怎么办。这也不
    能怪招聘的公司，的确是人之常情。其实解决的办法也很简单，培养的时候进行
    适当引导，让员工发挥自己的主动学习能力，这样不但人得到更多成长，公司也
    不会觉得投入太多患得患失。所谓师傅领进门修行在个人。

    而学习能力简直算是这个行业最重要的能力没有之一了。

    所以，简而言之，如果把人才培养/招聘这件事情本身类比做一个项目，那么这整
    个项目迄今为止就是一个巨大的失败。

    越来越多的 IT 公司在招聘的时候要求应聘者给出 GitHub 账号。甚至已经有人
    为 GitHub 写了根据 GitHub 上的历史自动生成简历的工具。

    正如邹欣老师所说，你的工作就是最好的面试。

    **书单 + GitHub，就相当于一个两年左右的面试。**

    《编程之美》为什么常居畅销榜？因为它透露了雇主眼中的需求，明确、清晰的
    需求，可以实现，并且知道怎么去实现的需求。

    那么，学校/老师在这个事情当中的位置呢？说实话我不知道。没有哪个行业像
    IT 行业这样特殊：没有什么东西不能够（应该）在互联网上学到的。自组织的力
    量完全大过传统的教育方式。

    刚才我就收到一位同学邀请我上知乎回答一个问题“找工作的首要原则是什么？”，
    当然，这个问题的答案是：“弄清雇主的需求到底是什么”。

    列一下我所认为的，你面试微软前必须要读的十本书：

    #. Code: The Hidden Language of Computer Hardware and Software （《编码的奥秘》）
    #. &hearts; Computer System: A Programmer’s Perspective （《深入理解计算机系统》） / Windows via C/C++ （《Windows核心编程》 / 《程序员的自我修养》
    #. Code Complete 2（《代码大全》）/ The Pragmatic Programmer （《程序员修炼之道》，我也把这本书称为《代码小全》）
    #. &hearts; Programming Pearls （《编程珠玑》） / Algorithms / Algorithm Design / 《编程之美》
    #. &hearts; The C Programming Language
    #. The C++ Programming Language / Programming: Principles and Practice Using C++ / Accelerated C++
    #. &hearts; The Structure and Interpretation of Computer Programs （《计算机程序的构造和解释》）
    #. Clean Code / Implementation Patterns
    #. &hearts; Design Patterns （《设计模式》） / Agile Software Development, Principles, Patterns, and Practices
    #. Refactoring （《重构》）

    云风：

    #. C++ 编程思想
    #. Effective C++
    #. 深度探索 C++ 对象模型
    #. C++ 语言的设计和演化
    #. C 专家编程
    #. C 陷阱与缺陷
    #. C 语言接口与实现
    #. Lua 程序设计
    #. Linkers and Loaders
    #. COM 本质论
    #. Windows 核心编程
    #. 深入解析 Windows 操作系统
    #. 程序员修炼之道
    #. 代码大全
    #. UNIX 编程艺术
    #. 设计模式
    #. 代码优化：有效使用内存
    #. 深入理解计算机系统
    #. 深入理解 LINUX 内核
    #. TCP/IP 详解

    张峥（微软亚洲研究院副院长）：

    #. Algorithms (by Sanjoy Dasgupta, Christos Papadimitriou and Umesh Vazirani)
    #. Data Structure and Algorithms
    #. The C Programming Language
    #. The Design of the UNIX Operating System
    #. Compilers （龙书）
    #. Computer Architecture: A Quantitative Approach
    #. Flow
    #. Outliers (why hard work and luck are both important)

    邹欣（MSRA 创新工程中心首席研发经理）：

    #. The Myths of Innovation
    #. The Innovator’s Dilemma
    #. The Innovator’s Solution
    #. Crossing the Chasm
    #. Inside Intuit
    #. 盛田昭夫
    #. 杰克·韦尔奇自传
    #. 梦断代码
    #. Innovation
    #. 浪潮之巅

[创业公司应该如何招人？ - 创业公司 - 知乎](http://www.zhihu.com/question/19551593)

:   知乎创始人：

      - 上 twitter，看 XXX 的 follower，一个一个看，看他们的 twitter，博客，
        Google Reader 分享，想办法搞到邮件，联系，半夜电话骚扰。
      - **上豆瓣，前端后端挑几本重量级的书，去找想看，看过，正在看这本书的人，
        一个一个看，看他们的活动，博客，Google Reader 分享，想办法搞到邮件，联
        系，半夜电话骚扰。**
      - 找同事，问他们都看什么技术博客，想办法搞到邮件，联系，半夜电话骚扰。

    作为一个小公司，加入我们是有风险的，小公司倒闭的几率比大公司大多了，只
    不过大多不上报纸而已。

[6.1. GitHub:Gist — GotGitHub](http://www.worldhello.net/gotgithub/06-side-projects/gist.html)

[解决VS2010自带的C/C++编译器CL找不到mspdb100.dll的问题 - dudu - 博客园](http://www.cnblogs.com/dudu/archive/2011/05/21/2053104.html)

:   `C:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\IDE` &rarr; `%PATH%`

    <div class="tzx-drawer" shy>
    `Common7\Tools\vsvars32.bat`:

    :   ```plain
        @echo Setting environment for using Microsoft Visual Studio 2010 x86 tools.

        @call :GetVSCommonToolsDir
        @if "%VS100COMNTOOLS%"=="" goto error_no_VS100COMNTOOLSDIR

        @call "%VS100COMNTOOLS%VCVarsQueryRegistry.bat" 32bit No64bit

        @if "%VSINSTALLDIR%"=="" goto error_no_VSINSTALLDIR
        @if "%FrameworkDir32%"=="" goto error_no_FrameworkDIR32
        @if "%FrameworkVersion32%"=="" goto error_no_FrameworkVer32
        @if "%Framework35Version%"=="" goto error_no_Framework35Version

        @set FrameworkDir=%FrameworkDir32%
        @set FrameworkVersion=%FrameworkVersion32%

        @if not "%WindowsSdkDir%" == "" (
            @set "PATH=%WindowsSdkDir%bin\NETFX 4.0 Tools;%WindowsSdkDir%bin;%PATH%"
            @set "INCLUDE=%WindowsSdkDir%include;%INCLUDE%"
            @set "LIB=%WindowsSdkDir%lib;%LIB%"
        )

        @rem
        @rem Root of Visual Studio IDE installed files.
        @rem
        @set DevEnvDir=%VSINSTALLDIR%Common7\IDE\

        @rem PATH
        @rem ----
        @if exist "%VSINSTALLDIR%Team Tools\Performance Tools" (
            @set "PATH=%VSINSTALLDIR%Team Tools\Performance Tools;%PATH%"
        )
        @if exist "%ProgramFiles%\HTML Help Workshop" set PATH=%ProgramFiles%\HTML Help Workshop;%PATH%
        @if exist "%ProgramFiles(x86)%\HTML Help Workshop" set PATH=%ProgramFiles(x86)%\HTML Help Workshop;%PATH%
        @if exist "%VCINSTALLDIR%VCPackages" set PATH=%VCINSTALLDIR%VCPackages;%PATH%
        @set PATH=%FrameworkDir%%Framework35Version%;%PATH%
        @set PATH=%FrameworkDir%%FrameworkVersion%;%PATH%
        @set PATH=%VSINSTALLDIR%Common7\Tools;%PATH%
        @if exist "%VCINSTALLDIR%BIN" set PATH=%VCINSTALLDIR%BIN;%PATH%
        @set PATH=%DevEnvDir%;%PATH%

        @if exist "%VSINSTALLDIR%VSTSDB\Deploy" (
            @set "PATH=%VSINSTALLDIR%VSTSDB\Deploy;%PATH%"
        )

        @if not "%FSHARPINSTALLDIR%" == "" (
            @set "PATH=%FSHARPINSTALLDIR%;%PATH%"
        )

        @rem INCLUDE
        @rem -------
        @if exist "%VCINSTALLDIR%ATLMFC\INCLUDE" set INCLUDE=%VCINSTALLDIR%ATLMFC\INCLUDE;%INCLUDE%
        @if exist "%VCINSTALLDIR%INCLUDE" set INCLUDE=%VCINSTALLDIR%INCLUDE;%INCLUDE%

        @rem LIB
        @rem ---
        @if exist "%VCINSTALLDIR%ATLMFC\LIB" set LIB=%VCINSTALLDIR%ATLMFC\LIB;%LIB%
        @if exist "%VCINSTALLDIR%LIB" set LIB=%VCINSTALLDIR%LIB;%LIB%

        @rem LIBPATH
        @rem -------
        @if exist "%VCINSTALLDIR%ATLMFC\LIB" set LIBPATH=%VCINSTALLDIR%ATLMFC\LIB;%LIBPATH%
        @if exist "%VCINSTALLDIR%LIB" set LIBPATH=%VCINSTALLDIR%LIB;%LIBPATH%
        @set LIBPATH=%FrameworkDir%%Framework35Version%;%LIBPATH%
        @set LIBPATH=%FrameworkDir%%FrameworkVersion%;%LIBPATH%

        @goto end

        @REM -----------------------------------------------------------------------
        :GetVSCommonToolsDir
        @set VS100COMNTOOLS=
        @call :GetVSCommonToolsDirHelper32 HKLM > nul 2>&1
        @if errorlevel 1 call :GetVSCommonToolsDirHelper32 HKCU > nul 2>&1
        @if errorlevel 1 call :GetVSCommonToolsDirHelper64  HKLM > nul 2>&1
        @if errorlevel 1 call :GetVSCommonToolsDirHelper64  HKCU > nul 2>&1
        @exit /B 0

        :GetVSCommonToolsDirHelper32
        @for /F "tokens=1,2*" %%i in ('reg query "%1\SOFTWARE\Microsoft\VisualStudio\SxS\VS7" /v "10.0"') DO (
            @if "%%i"=="10.0" (
                @SET "VS100COMNTOOLS=%%k"
            )
        )
        @if "%VS100COMNTOOLS%"=="" exit /B 1
        @SET "VS100COMNTOOLS=%VS100COMNTOOLS%Common7\Tools\"
        @exit /B 0

        :GetVSCommonToolsDirHelper64
        @for /F "tokens=1,2*" %%i in ('reg query "%1\SOFTWARE\Wow6432Node\Microsoft\VisualStudio\SxS\VS7" /v "10.0"') DO (
            @if "%%i"=="10.0" (
                @SET "VS100COMNTOOLS=%%k"
            )
        )
        @if "%VS100COMNTOOLS%"=="" exit /B 1
        @SET "VS100COMNTOOLS=%VS100COMNTOOLS%Common7\Tools\"
        @exit /B 0

        @REM -----------------------------------------------------------------------
        :error_no_VS100COMNTOOLSDIR
        @echo ERROR: Cannot determine the location of the VS Common Tools folder.
        @goto end

        :error_no_VSINSTALLDIR
        @echo ERROR: Cannot determine the location of the VS installation.
        @goto end

        :error_no_FrameworkDIR32
        @echo ERROR: Cannot determine the location of the .NET Framework 32bit installation.
        @goto end

        :error_no_FrameworkVer32
        @echo ERROR: Cannot determine the version of the .NET Framework 32bit installation.
        @goto end

        :error_no_Framework35Version
        @echo ERROR: Cannot determine the .NET Framework 3.5 version.
        @goto end

        :end
        ```
    </div>

[热爱正当年，青葱已做汤。](http://www.douban.com/note/518991649/)

:   那个妞是隔壁班的，短发很俏皮，笑容很俏皮，打扮也很俏皮。

    那年的夏天我坐在靠走廊的位置，每次趴在桌子上发呆的时候，都能看见她从走廊经
    过。

    她从没看过我一眼，但我总感觉她走路带着一阵风，有香气的、活泼的、俏皮的风。

    我把这个唯一的秘密告诉了阿洲，阿洲说胸好小，皮肤又黑，你喜欢她什么？

    那时我还是个孩子，**我说你不懂，这是爱情**。

    很奇怪，我一个那么自卑的人，居然会写情书。在这封人生中唯一的一封情书的结尾
    ，我写到：被人喜欢总算是一件好事情，请你不要害怕。奇怪，为什么那个时候我就
    知道被陌生人喜欢是一件值得害怕的事？

    那个妞叫什么名字我也不知道，因为性格内向，因为表白被拒，我也不敢去打听任何
    与她有关的信息。我也没有和她说过任何话，她可能都不知道我是哪个。可是因为她
    ，**那时的我看起来像是一个诗人**。

    初恋是什么？是初次对人动心，还是初次和人恋爱呢？我不知道，我只能自我安慰说
    ：这可能就是最完美的暗恋吧。

[cmderdev/cmder](https://github.com/cmderdev/cmder)

:   The main advantage of Cmder is portability. It is designed to be
    **totally self-contained with no external dependencies**, which makes
    it great for USB Sticks or Dropbox - **you can carry your console,
    aliases and binaries (like wget, curl and git) with you anywhere!**

    windows

[就喜欢这种嘿嘿嘿的短片 - 简书](http://www.jianshu.com/p/15052aaaeaab)

:   ![](http://gnat.qiniudn.com/pics/tesla.gif)

    美国成人动画《瑞克和莫蒂》（Rick and Morty）？

    日本的《搞笑漫画日和》？

    一部叽里呱啦吐槽个不停的暗黑动画。

    最近又有一部动画，对Sir大脑发起冲击。

    《超级科学家》

    Super Science Friends

[SkyPixel](https://www.skypixel.com/videos/2015-m4v)

:   美国果然牛逼！

    航拍，美国很美。

[真实世界的我](http://www.aiexp.info/%E7%9C%9F%E5%AE%9E%E4%B8%96%E7%95%8C%E7%9A%84%E6%88%91.html)

:   如果问我为什么要做研究工作，我会回答**因为它有趣**，然而如果你追问为什
    么它有趣，这问题就不是那么容易回答了。我觉得我把前面几段文字拍出来，或
    许可以作为一个答案，因为我觉得那些有类似经历的人或许会产生共鸣。这种研
    究工作的有趣之处，就同牛顿说的那样：“像是一个在海边玩耍的小孩，不时发现
    比寻常更为光滑的一块卵石或比寻常更为美丽的一片贝壳”，当你发现了你过去没
    有发现的东西、前人未发现的东西，当你成为世界上第一个做成某个未知事物的
    人的时候，这真的是一件很有意思的事情，不是吗？研究工作是**真实世界里的
    游戏**。研究工作，多数时候，过程中会遇到各种波折，游戏的世界里，同样会
    遇到各种困难，但让你觉得玩游戏“爽”的原因，是你可以通过努力，战胜这些困
    难，获得一些成就，从而获得一些成就感，研究工作是一样的道理。

    “**良师益友**”四个字用于评价俞凯老师是十分贴切的，他是一位可以和学生并
    肩奋战到凌晨的老师，他是一位可以真诚且无私地为你付出的时间和心血的朋友。
    俞凯老师不仅在学术上给予贴心的指导，更在无时无刻地在生活中的一言一行
    里潜移默化地指导着学生做人与做事。每学期的 Kick Off Meeting，俞凯老师都
    会用王蒙的《青春万岁》序诗来勉励我们：

    ```tzx-bigquote
    所有的日子，所有的日子都来吧，
    让我编织你们，用青春的金线，
    和幸福的璎珞，编织你们。

    有那小船上的歌笑，月下校园的欢舞，
    细雨蒙蒙里踏青，初雪的早晨行军，
    还有热烈的争论，跃动的、温暖的心……

    是转眼过去了的日子，也是充满遐想的日子，
    纷纷的心愿迷离，像春天的雨，
    我们有时间，有力量，有燃烧的信念，
    我们渴望生活，渴望在天上飞。

    是单纯的日子，也是多变的日子，
    浩大的世界，样样叫我们好奇，
    从来都兴高采烈，从来不淡漠，
    眼泪，欢笑，深思，全是第一次。

    所有的日子都去吧，都去吧，
    在生活中我快乐地向前，
    多沉重的担子，我不会发软，
    多严峻的战斗，我不会丢脸；
    有一天，擦完了枪，擦完了机器，擦完了汗，
    我想念你们，招呼你们，
    并且怀着骄傲，注视你们！
    ```

    每次他朗读这首诗，他都会动情。他常常向学生分享他的故事，他的激情，他的
    态度，他的勤奋，感染着我，给予我源源不断的正能量。

[e，一个常数的传奇 | 科学人 | 果壳网 科技有意思](http://www.guokr.com/article/55381/)

:   数学史上曾经有一个著名问题，称之为悬链线问题：一根柔软不可伸长的链子，
    两头固定在空间中的两个定点上（这两个点不一定要等高），链子形成的曲线是
    怎样一条曲线呢？这个问题和最速降线问题提出的时间很接近，而且参与者也大
    多相同。早在文艺复兴时代它就已经被达芬奇研究过，可惜并没有得到答案。伽
    利略猜想答案是抛物线，这也和很多人最初的感觉是一致的，**可惜后来被惠更斯
    在 17 岁的时候证明是错的**。

[Conway's Game of Life - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life)

[Light Table](http://lighttable.com/)

:   Clojure 社区的编辑器，大概是除了 Emacs 你想玩 Clojure 的唯一选择吧。

    Every bit of Light Table's code is available to the community because
    **none of us are as smart as all of us**.

[Cramer悖论：线性代数的萌芽 | Matrix67: The Aha Moments](http://www.matrix67.com/blog/archives/3803)

:   发现从信息的角度理解线性代数更给我更多 intuition。

    9 个点不见得能唯一地确定出三次曲线的方程，因为不是每个点的位置都能给我们带
    来足够的信息。

    此时大家或许能体会到， Euler 提出的这些遗留问题太具启发性了，当时的数学
    研究者们看到之后必然是浑身血液沸腾。包括 Cramer 在内的数学家们沿着
    Euler 的思路继续想下去，一个强大的数学新工具——线性代数——逐渐开始成型。
    没错，这个 Cramer 正是后来提出线性代数一大基本定理——Cramer 法则——的那
    个人。

[随记：我们需要怎样的数学教育？ | Matrix67: The Aha Moments](http://www.matrix67.com/blog/archives/4294)

:   总有一天，数学教育会拔高到第三层：返朴归真，数学真正牛 B 的还是它本身。你会
    发现，那些伟大的数学思想，那些全新的数学理论，最初研究的动机并不是要急于解
    释我们身边的某某诡异现象，而是它**本身的美妙**。

    其实，如果把“少 2 个”理解成“多 -2 个”，问题是一模一样的，之前的公式同样适用
    。负数这一新思想立即把三种情况统一在了一起，它们的本质变得一模一样了。（话
    说三角函数更是把以前需要讨论象限的问题给统一了，你只要在第一象限考虑就行，
    反正其他象限直接适用于这样得出的结论。）

    对于我来说，最能吸引我学习一个数学课题的，莫过于**一系列非平凡的结论以及它
    的精彩证明了**。

[10大英语套话 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2008/12/top_10_irritating_english_phrases.html)

:   Sure we missed our best player but at the end of the day, John, we just
    didn't play well enough to win the game.（我们最好的选手不能上场，但是最终
    来说，还是因为我们发挥得不好，所以无法赢得比赛。）

    I am looking for a **fairly unique piece of technology**.（我在寻找一种独特的技
    术。）

    I **personally** don't like her.（我不喜欢她。）

    What's your favorite song **right at this moment in time**?（此刻你最喜欢的歌是
    什么？）

    **With all due respect, I think there are some facts you have not considered.**
    （恕我直言，我想你忽略了一些事实。）

    It is absolutely impossible.（绝对不可能。）

    For Publishing, **It's a Nightmare** Before Christmas.（对于出版业来说，圣诞节
    前发生的事情就像一场噩梦。）

    **This game shouldn't of got cancelled!**（这场比赛本来不应该取消的。）

    (上面那句话很不逻辑。)

    **24/7 support is a critical part of our offer.**（一周7天，每天24小时的售后服
    务，是我们承诺的关键部分。）

    We're talking basic common sense here - it isn't **rocket science**.（我们在这
    里说的是常识，又不是高深莫测的东西。）

[公共场所英文译写规范 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2011/01/guidelines_for_english_translations_in_public_places.html)

:   <http://whudoc.qiniudn.com/2016/公共场所英文译写规范(公示稿).pdf>

    公共场所英文译写规范, 2009-10-01 实施

    <div class="tzx-drawer" shy>
    第 1 部分：通则；

    :   译写原则:

          - 合法性原则
          - 规范性原则
          - 准确性原则
          - 通俗性原则
          - 文明性原则

        规范性原则: 公共场所的英文译写应当符合英语规范和使用习惯以及国际惯例。

        道观: Daoist Temple。

        英语中有多个对应词语的中文，应对所指事物或概念进行分析，结合具体的语言环境
        和文化背景，根据英语的使用习惯选择最能贴切表达该事物或概念的词语。如：“通道”在
        表达“地面通道”时，译作 Passage，表达“地下通道”时，译作 Underpass。

        行李安检通道 Luggage Check，“行李安检”的功
        能必须译出，“通道”作为设施名称可不必译出。

        医药箱 First Aid Kit。

        求助按钮 Press for Help。

        12 号门 Gate No. 12。

        旅客通道，请勿滞留 Keep Walking 或 No
        Stopping，“请勿滞留”必须译出，“旅客通道”可不必译出。

        应明确信息所警示、提示的对象主体，如：旅游车辆禁止入内 **No Admittance for Tourist
        Vehicles**，不宜简单译作 No Admittance。

        请在安全线外等候 Please Wait Behind **the Yellow Line**

        勿触摸 Thank You for Not Touching；“请勿吸烟”在非明确严禁吸烟的场
        所可译为 Thank You for Not Smoking。

        如果译文所指对象不明确，宜使用复数形式。如：
        监督投诉 Complaints。

        英语单词使用括号时括号外前后需空一格，但括号内不空格，如：
        中医科 **Traditional Chinese Medicine (TCM) Department**。

        制作标志时应使用没有衬线的英文黑体字。

        ```tzx-bigquote
        办公区域  Administrative Area
        报告厅  Conference Hall
        闭馆整修  Closed for Renovation

        本柜暂停服务，请至其他台席办理
        Temporarily Out of Service. Please Go to Another Counter.

        本柜（台）只接受现金缴费 Cash Only at This Counter
        别让您的烟头留下火患  Dispose of Cigarette Butts Properly
        For Disabled (Only)
        Toilet 或 Washroom 或 Restroom（之前不得加 Public）
        ——Men 或 Gents' 或 Gentlemen
        ——Women 或 Ladies' 或 Ladies
        ——Pay Toilet
        ——Vacant
        ——Occupied
        ——Flush After Use
        ——Pedal Operated Tap (踏板放水)
        ——No-Flush Toilet (非水冲座便器，无需冲水)
        ——Auto Flush
        ——Accessible Toilet（或 Washroom 或 Restroom）
        撤离路线、疏散通道  Escape Route 或 Evacuation Route
        宠犬便后请打扫干净  Please Clean Up After Your Dog
        出租车计价器  Taxi Meter
        出租车扬招点  Taxi Stand
        出租汽车专用发票  Taxi Receipt
        此路不通  Dead End 或 No Through Road
        此路封闭  Road Closed
        当日有效  Valid Only on Day of Issue
        地面湿滑，小心滑倒  Caution: Wet Floor
        地下室  Basement
        地下停车场  Underground Parking
        地下通道  Underpass
        地下一层/二层/三层  B1/B2/B3
        ```

        page 8
    </div>

    <div class="tzx-drawer" shy>
    第 2 部分：实体名称译法；

    :   用汉语拼音拼写。如：长风（长风公园）Changfeng。有习惯译法的除外，
        如：**美琪（大戏院）Majestic**。

        上海市第一人民医院 Shanghai First People’s Hospital，
        上海市第一中级人民法院 Shanghai No. 1 Intermediate People’s Court。

        海事（上海市海事法院）Maritime。但实体已失去属性名所
        指称的性质的，属性名视作专名，用汉语拼音拼写。如：远洋（上海远洋医院）Yuanyang。

        上海市工人文化宫 **Shanghai Workers Cultural Palace**；也可将属性名置于
        通名之后，用介词连接，如：上海市临床检验中心 **Shanghai Center for Clinical Laboratory**。

        管理局 Administration，高等专科学校 College。

        外滩 The Bund，国际饭店 Park Hotel。

        汉语拼音中以 a, o, e 开头的音节连接在其他音节后面的时候，如果音节的界限
        发生混淆，用隔音符号（’）隔开，该符号前后不空格，如：静安 Jing’an。

        ```tzx-bigquote
        上海博物馆  Shanghai Museum
        中国银行  Bank of China
        上海音乐厅  Shanghai Concert Hall
        上海大剧院  Shanghai Grand Theatre
        上海大学  Shanghai University

        上海多伦美术馆  Shanghai Duolun Art Gallery

        上海兰心大剧院  Shanghai Lyceum Theatre
        （Lyceum 为习惯译法）

        上海江湾体育场  Shanghai Jiangwan Stadium

        华东师范大学  East China Normal University
        上海科技馆  Shanghai Science & Technology museum

        上海中医药大学
        Shanghai University of Traditional Chinese Medicine

        上海期货交易所  Shanghai Futures Exchange

        上海市第六人民医院  Shanghai Sixth People’s Hospital
        上海市第一中级人民法院  Shanghai No.1 Intermediate People’s Court
        上海市第三女子中学  Shanghai No. 3 Girls High School
        上海第二工业大学  Shanghai Second Polytechnic University

        上海市第一妇婴保健院
        Shanghai First Hospital for Maternity and Infant Health

        上海虹桥国际机场  Shanghai Hongqiao International Airport
        上海张江高科技园区  Shanghai Zhangjiang High-Tech Park

        上海虹桥迎宾馆  Shanghai Hongqiao State Guest Hotel
        东平国家森林公园  Dongping National Forest Park

        上海城市规划展示馆  Shanghai Urban Planning Exhibition Center

        上海工商外国语学院
        Shanghai Industry and commerce Foreign Language College

        上海工艺美术职业学院  Shanghai Vocational College of Arts and Crafts
        上海市文史研究馆  Shanghai Research Institute of Culture and History
        上海工艺品进出口公司  Shanghai Arts & Crafts Import & Export Corp.

        共青森林公园  Gongqing Forest Park
        外滩观光隧道  The Bund Sightseeing Tunnel（The Bund 为习惯译法）
        兰溪青年公园  Lanxi Youth Park
        四海壶具博物馆  Sihai Teapots Museum
        龙华烈士陵园  Longhua Revolutionary Martyrs’ Cemetery
        ```
    </div>

    <div class="tzx-drawer" shy>
    第 3 部分：交通；

    :   飞机译作 Airplane；航空、航线译作 Airline。

        火车译作 Train；铁路译作 Railway。轮船译作 Ship。公共汽车译作 Bus，长途
        汽车译作 Long-Distance Bus。轨道交通（包括地铁和轻轨）译作 Metro；磁浮
        列车译作 Maglev 或 Maglev Train。出租车译作 Taxi。

        公共汽车站译作 Stop，如：前方有公共汽车站 Bus Stop Ahead。轨道交通车站
        译作 Station，如：列车前方到站 The Next Station。实指某一具体站点时，“
        站”一般不需译出，如：徐家汇站（轨交 1 号线站名）到了 We are arriving at
        Xujiahui。

        出租车扬招点译作 Taxi Stand。

        国内出发（区）Domestic Departures。

        危险品检查仪 Security Check

        请勿将身体伸出扶梯外 **Keep Body in Escalator**。

        小心列车与站台间隙 Mind the Gap，在特定使用场合（如轨道交通站点中）可简
        译。

        ```tzx-bigquote
        上海虹桥国际机场  Shanghai Hongqiao International Airport
        上海浦东国际机场  Shanghai Pudong International Airport
        上海火车站；铁路上海站  Shanghai Railway Station
        上海南站；铁路上海南站  Shanghai South Railway Station
        上海火车站（公交）枢纽  Shanghai Railway Station Bus Terminal
        上海南站（公交）枢纽  Shanghai South Railway Station Bus Terminal
        莘庄地铁北广场（公交）枢纽  Xinzhuang Metro Station North Square Bus Terminal
        莘庄地铁南广场（公交）枢纽  Xinzhuang Metro Station South Square Bus Terminal
        上海旅游集散中心  Shanghai Tourist Bus Center
        上海长途汽车客运总站  Shanghai Long-Distance Bus Terminal
        上海长途客运南站  Shanghai South Long-Distance Bus Station
        上海港国际客运中心国际客运码头  Shanghai Port International Cruise Terminal
        上海港吴淞客运中心  Shanghai Port Wusong Passenger Center
        宝钢内河装卸站  Baosteel Loading Wharf
        宝钢原料码头  Baosteel Raw Material Wharf
        宝山集装箱码头  Baoshan Container Terminal

        1.2m Height Limit

        安全岛  Traffic Island
        安全检查（安检）  Security Inspection
        安全检查（通道）  Security Check
        安全设备请勿擅动  Safety Equipment. Authorized Use Only.

        班车乘车地点  Shuttle Bus Pick-Up Point 或 Commuter Bus Pick-Up Point

        本机不设找零  No Change Provided at this Machine

        餐饮  Food and Beverage 或 Restaurant
        残疾车借用  Wheelchair Service

        操作步骤  Instructions for Operation
        插入公共交通卡  Insert Your Public Transportation Card
        长途汽车站  Long-Distance Bus Station
        长下坡慢行  Long Slope. Slow Down
        ```

        page 29
    </div>

    <div class="tzx-drawer" shy>
    第 4 部分：旅游；

    :   会址译作 Site；故居译作 Former Residence 或 Memorial Residence。公园译
        作 Park；园、圃、苑译作 Garden。动物园译作 Zoo；植物园译作 Botanical Garden。

        陵园译作 Cemetery；烈士陵园译作 Revolutionary Martyrs’ Cemetery。乐园、
        游乐园译作 Amusement Park。儿童乐园（设在旅游景区内）译作 Children 's Playground；
        主题公园译作 Theme Park。

        水族馆译作 Aquarium，海洋馆、海洋公园等均译作 Ocean Park。与宗教有关、
        每层顶部都有装饰的塔译作 Pagoda，如：松江方塔 Songjiang Square Pagoda。
        其他的塔译作 Tower，如：东方明珠广播电视塔 Oriental Pearl Radio and TV
        Tower。佛教的寺译作 Temple，如：静安寺 Jing’an Temple。道观译作 Daoist
        Temple，如：白云观 Baiyun Daoist Temple。清真寺译作 Mosque。教堂译作
        Church 或 Cathedral，如：上海国际礼拜堂 Shanghai Community Church；董家
        渡天主堂 Dongjiadu Cathedral。绿地译作 Green Land。

        度假村（区）译作 Resort；旅游城译作 Tourist Town。

        语音讲解 Audio Tour。

        儿童须由成人陪同 Children Must Be Accompanied by Adult。

        ```tzx-bigquote
        中山故居  Dr. Sun Yat-sen Memorial Residence
        庆龄故居  Mme. Soong Ching-ling Memorial Residence
        泽东故居  Former Residence of Mao Zedong
        恩来故居  Former Residence of Zhou Enlai

        云故居暨青浦革命历史纪念馆
        Former Residence of Chen Yun and Qingpu Museum of Revolutionary History

        纪公园  Century Park
        青森林公园  Gongqing Forest Park
        中山公园  Zhongshan Park
        鲁迅公园  Luxun Park
        复兴公园  Fuxing Park
        淮海公园  Huaihai Park
        长风公园  Changfeng Park
        衡山公园  Hengshan Park
        襄阳公园  Xiangyang Park
        康健园  Kangjian Park
        桂林公园  Guilin Park
        工农公园  Gongnong Park
        交通公园  Jiaotong Park
        大宁灵石公园  Daning Lingshi Park
        大华行知公园  Dahua Xingzhi Park
        人民公园  People’s Park
        广场公园  Square Park
        友谊公园  Friendship Park
        滨海公园  Seaside Park
        滨江公园  Riverside Park
        未来岛公园  Future Island Park
        滨江森林公园  Riverside Woods Park
        上海佘山国家森林公园  Shanghai Sheshan National Forest Park
        东平国家森林公园  Dongping National Forest Park
        华山儿童公园  Huashan Children’s Park
        爱思儿童公园  Aisi Children’s Park

        锦江乐园  Jinjiang Amusement Park
        大世界游乐中心  Great World Amusement Center
        上海影视乐园  Shanghai Film and Television Theme Park

        朱家角古镇  Zhujiajiao Town
        枫泾古镇  Fengjing Town
        玉佛寺  Jade Buddha Temple
        静安寺  Jing’an Temple
        龙华寺  Longhua Temple

        陆家嘴中心绿地  Lujiazui Central Green Land
        不夜城绿地  Everbright City Green Land
        购票后，恕不退票。  Tickets Not Refundable
        古桥  Ancient Bridge
        古塔  Ancient Pagoda
        关上安全杠  Close Safety Bar
        广播服务  Broadcasting Service
        贵重物品请您自己妥善保管  Please Take Care of Your Valuables
        过山车  Roller Coaster
        ```
    </div>

    <div class="tzx-drawer" shy>
    第 5 部分：文化体育；

    :   文史馆译作 Research Institute of Culture and History。

        展览馆、陈列馆、展览中心等具有展示、陈列功能的场馆可译作 Exhibition
        Center 或 Exhibition Hall。博览（会）译作 Exposition 或 Expo，如：世界
        博览会 World Exposition 或World Expo，中国 2010 年上海世博会 Expo 2010
        Shanghai China。美术馆译作 Art Gallery 或 Art Museum。图书馆译作
        Library。

        竞技体操 Artistic Gymnastics，艺术体操 Rhythmic Gymnastics。

        ```tzx-bigquote
        东方网点连锁管理有限公司  Shanghai Eastday Bar Chain Administration Co. Ltd.
        上海东方网点  Eastday Bar
        才智公众电脑屋  Caizhi Internet Café
        福五公众电脑屋  Fuwu Internet Café
        史地网吧  Shidi Internet Café
        同福网吧  Tongfu Internet Café
        网人网吧  Wangren Internet Café
        威泰网吧  Weitai Internet Café

        松江体育中心  Songjiang Sports Center
        奉贤体育中心  Fengxian Sports Center
        上海市东方绿舟体育训练基地  Shanghai Oriental Land Sports Training Center
        上海游泳馆  Shanghai Swimming Center

        办证处（借书证）  Reader Registration
        保安室  Security Office
        步行导览  Walking Tour Guide
        ```
    </div>

    <div class="tzx-drawer" shy>
    第 6 部分：教育；

    :   本、专科学院一般译作 College。职业学院可译作 Vocational College。职
        业技术学院可译作 Polytechnic College（理工科性质较强）或 Vocational & Technical
        College（职业教育性质较强）。

        大学译作 University。大学的二级学院一般译作 College。研究生院译作
        Graduate School。

        专科性较强的学院可译作 Institute。艺术类学院及研究性教育机构可译作
        Academy，如：上海戏剧学院 Shanghai Theatre Academy

        幼儿园译作 Kindergarten。

        业余大学译作 Part-time University 或者 Part-time College。电视大学译作
        Television University。职工大学译作 Workers College。继续教育学院译作
        College for Continuing Education。网络教育学院译作 Online Education
        College。

        青少年活动中心、基地等均译作 Youth Center。

        党校译作 Party School 或 Party Institute。社会主义学院译作 Institute of
        Socialism。行政学院一般译作 Administration Institute。干部学院一般译作
        Cadre Institute。

        终身教育进修学院译作 Lifelong Education Institute。培训中心译作
        Training Center。社区学院译作 Community College。

        神学院译作 Seminary。佛学院译作 Buddhist Academy。

        属性名需译成两个及以上英文单词时，一般置于通名之后，用介词 of 或 for
        连接，如：华东政法大学 East China University of Political Science and Law。属性
        名只有一个英文单词时，一般置于通名之前，如：上海海洋大学 Shanghai Ocean University。

        附属译作 Affiliated to，如：华东师范大学附属幼儿园 The Kindergarten
        Affiliated to East China Normal University。

        南阳实验幼儿园 Nanyang Experimental Kindergarten。模范译作 Model，如：
        上海市南洋模范中学（高中）**Shanghai Nanyang Model High School**。

        ```tzx-bigquote
        本校教职员工（停车处）  Reserved (Parking) for Faculty
        不准携带食物到图书馆内  No Food Allowed in the Library
        打印室、复印室、文印间  Printing and Copying Services
        电工室  Electrician Room
        电气室  Electrical Room
        电子阅览室  Digital Reading Room
        读者服务处  Reader Services
        多媒体教室  Multimedia Classroom
        多媒体视听室  Multimedia Room
        饭票  Meal Voucher
        继续教育学院  Continuing Education College
        健身中心  Fitness Center
        教工窗口  Faculty
        教务处  Teaching Affairs Office
        教学楼  Teaching Building
        教职工宿舍（楼）  Teachers’ Dormitory
        禁坐栏杆  No Sitting on Handrail.
        请勿拍照  No Photography
        体育馆  Gymnasium
        田径场  Athletic Field
        文科大楼  Liberal Arts Building
        ```
    </div>

    <div class="tzx-drawer" shy>
    第 7 部分：金融；

    :   交易所译作 Exchange。证券交易所译作 Stock Exchange，如：上海证券交易所
        Shanghai Stock Exchange。期货交易所译作 Futures Exchange，如：上海期货
        交易所 Shanghai Futures Exchange。

        证券公司（股份有限公司、有限责任公司）译作 Securities Limited Company（
        Limited Company 可缩写为 Co., Ltd.，下同），如：华泰证券有限责任公司
        Huatai Securities Co., Ltd.。

        Sub-Branch，一般置于上位译名（所属总行、分行译名）之后，如：中国银行上
        海市分行普陀支行 Bank of China, Shanghai Branch, Putuo Sub-Branch。也可
        省去分行译名，简作：中国银行普陀支行 Bank of China, Putuo Sub-Branch。

        保险公司（股份有限公司、有限责任公司）译作 Insurance Limited Company，
        如：民生人寿保险股份有限公司 Minsheng Life Insurance Co., Ltd.。人寿保
        险译作 Life Insurance。财产保险译作 Property Insurance。再保险译作
        Reinsurance。

        保险公司（股份有限公司、有限责任公司）译作 Insurance Limited Company，
        如：民生人寿保险股份有限公司 Minsheng Life Insurance Co., Ltd.。人寿保
        险译作 Life Insurance。财产保险译作 Property Insurance。再保险译作
        Reinsurance。

        存取款：存款 Deposit；取款 Withdrawal。贷款 Loan。外汇 Foreign Currency
        。货币兑换 Currency Exchange。理财 Financing (Management)。基金 Fund。

        个人质押贷款 Personal Pledge Loan。应使功能指示明确，保持译文简洁，如：
        存折插入口 Please Insert Your Passbook。

        取款机 ATM，存款机 CRS。

        钱款请当面点清 Please Count Your Cash Before Leaving。s

        出门请按纽  Press to Exit
        出纳  Teller
        磁卡入口  Card Slot
        存款机（存取款一体机）  CRS (Cash Recycling System)s

        page 75
    </div>

    第 8 部分：医疗卫生；

    第 9 部分：邮政电信；

    第 10 部分：商业服务业。

[Behavioral Profiling: The password you can't change.](https://paul.reviews/behavioral-profiling-the-password-you-cant-change/)

:   用来解决密码疲劳的一个密码方案。感觉上……不靠谱。因为人类不够 consistent（个
    人看法）。

    应该和设备、人的心情有关（换了键盘可能这个人的一些反应力就会变）。

[密码疲劳 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2015/08/password-fatigue.html)

:   心理学有一个名词，叫做"密码疲劳"（**password fatigue**），指某些用户一遇到输入
    密码的场合，就感到厌倦和疲劳。

    下面是"密码疲劳"的一些典型发作场合：

      - 要求创建一个新的密码；
      - 创建的密码太简单，不符合网站要求，要求重新创建；
      - 创建密码的时候，要求输入两次；
      - 明明已经登陆，但是进入重要功能时，要求再输一遍密码；
      - 创建密码的时候，不显示或者显示占位符，根本看不清自己输入的是什么。

[Git 使用规范流程 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2015/08/git-use-process.html)

:   ![](http://www.ruanyifeng.com/blogimg/asset/2015/bg2015080501.png)

    ```bash
    # update
    $ git checkout master
    $ git pull

    # create dev branch
    $ git checkout -b myfeature

    # after edition
    $ git add --all
    $ git status
    $ git commit --verbose
    $ :'
        Present-tense summary under 50 characters

        * More information about commit (under 72 characters).
        * More information about commit (under 72 characters).

        http://project.management-system.com/ticket/123

        （第一行是不超过50个字的提要，然后空一行，罗列出改动原因、主要变动、
        以及需要注意的问题。最后，提供对应的网址（比如 Bug ticket）。）
    '

    # update
    $ git fetch origin
    $ git rebase origin/master

    # 合并 commit
    $ git rebase -i origin/master

    # Pony Foo 提出另外一种合并 commit 的简便方法，就是先撤销过去 5 个
    # commit，然后再建一个新的。
    $ git reset HEAD~5
    $ git add .
    $ git commit -am "Here's the bug fix that closes #28"
    $ git push --force

    # 因为 rebase 以后，分支历史改变了，跟远程分支不一定兼容，有可能要强行推送
    $ git push --force origin myfeature
    ```

[经验:我是怎么找电子书的 - 简书](http://www.jianshu.com/p/fe97eb12f12f)

:   自己弄一个？把广告去掉。广告真是太影像心情。

[说说“融入美国社会”这件事 - 简书](http://www.jianshu.com/p/927c06c04dcc)

:   美国同学都很友善，而且都挺话痨的，可是，我**真的有必要为了找到共同话题而硬
    着头皮去看那些根本不感兴趣的超级碗比赛么?**

    后来我才意识到，我根本没有什么“融入美国社会”的问题，因为按很多人的标准来看
    ，**我连中国人的社会都没融入过**。（其实我觉得很多圈子没必要去融入……）

    而与此同时，我越来越觉得，身边**很多人的闲聊都相当无聊无趣**，哪怕有些人已
    经够得上“高级知识分子”的资格了。

    高中时读到王小波说的一句话：无趣的人生不值得过。我大概就是那会儿中了毒，开
    始觉得无趣的“天”不值得聊。

    还有一次，一位中国同学问起“纯正的美国口音”，老师有点哭笑不得地说：**“你觉得
    波士顿口音和纽约口音哪一个更 American?”**

    说白了，对美国人说，尤其是大城市的居民，再古怪的名字他们都见过，说话的口音
    再独特他们也见怪不怪。没人指望一个外国人会有一个英文名、会说“美国口音”的英
    语。

    “Diversity”是一个在美国经常听到的词，这里面不光有反对种族歧视的意思，还有另
    一层意思，那就是：文化多样性就是这个社会的常态，而不是新来的文化在“融入主流
    文化”之前的过渡状态。无论是出于意识形态或是别的什么原因，你大可以吐槽美国宣
    扬的价值观是虚伪的，但美国社会多元文化并存的事实却是客观存在、毋庸置疑的。

    但如果你总觉得除了经济因素，在文化层面上还有那么一个抽象的、“高大上”的“美国
    社会”存在，并且需要刻意改变自己而去“融入”它，那其实反映的还是内心深处一种毫
    无必要的自卑心态。

[获取学术论文的方法 - 简书](http://www.jianshu.com/p/7e507d7be11d)

:   [Directory of Open Access Journals](https://doaj.org/)

    大学里的图书馆，一般都会雇佣有**图书情报学**专业的毕业生管理资源，并向学生
    和教职员工开课传授获取科学文献的方法。目前仍在大学的各位学生朋友，请一定好
    好利用这个资源，毕竟你是交了学费的。

    在学术界，或者学术出版界，经过了同行评审的文章草稿的电子版文档被称为后印本
    （**postprint**）。因为后印本同最终发表的版本的差异非常小，通常只是一些小的
    修改和排版上的变化，出版社一开始是很反对后印本的流通的。然而，随着越来越对
    的作者开始这样做，众多的学术期刊们也已经开始默认将后印本放到网上去的行为。
    [PubMed Central](http://www.ncbi.nlm.nih.gov/pmc/)是目前最为知名的后印本寄
    存服务。很多期刊的协议中指明，后印本必须在文章正式发表后半年甚至一年以后才
    能放到网上。因此，后印本服务在时间上有其滞后的缺点。如果你想找不是太近期的
    文章，去 PubMed Central 上去试试运气是个好办法。

    直接联系论文作者

    作为在传统的学术期刊发表文章的代价，文章作者们通常会签一份版权转移协议，将
    文章的版权授予学术期刊。在法律上来讲，在版权转移协议签署生效之后，文章的获
    取与使用必须通过期刊的允许与授权，否则就是侵权行为。

[这样的季节呀，你失落不 - 简书](http://www.jianshu.com/p/00cda101ce25)

:   我的裤脚线缝开裂。问老头补一下要多少钱，说要 3 块。我希望他要价高一点，3 块
    钱让我觉得自己是个周扒皮在剥削劳动人民。可是又不好意思主动多给他钱，毕竟人
    家不是要饭的。

    电动车是劳动人民的谋生工具，上海深圳都一样。

[该死 - 简书](http://www.jianshu.com/p/8cc3ad287cb7)

:   楼这样的事儿，更适合那些觉得自己有冤屈，以至于要在热闹地带当着很多人的面毅
    然跳下，以自己的死表明自己的清白，或者控诉这社会的黑暗。然而你们炒股破产的
    赌徒，你们有什么冤屈呢，你们不就是赌输了钱么，怎么如此滥用跳楼这样的事儿。

    但是你抢了人家的眼球啊，这世界上最珍贵的资源就是眼球资源。**人的注意力是有限
    的，你跳楼抢夺了眼球资源，世界上就有冤屈不被人重视。**

[为什么你们不可以叫彭阿姨国母（好文求打赏） - 简书](http://www.jianshu.com/p/a7d54716e002)

[为什么要唱反调：饱醉豚TEDxMoonLake—我的点播单—在线播放—优酷网，视频高清在线观看](http://v.youku.com/v_show/id_XNzEyNTMyOTMy_type_99.html?f=420001719)

:   个人很喜欢饱醉豚，不是说他多么“对”。而是他能带来不一样的思考。话说我和他价
    值观还是比较类似，像那篇《生活方式》。

[怎么评价饱醉豚？ - Twitter - 知乎](http://www.zhihu.com/question/22640256)

:   饱醉豚《民主杀害韩寒，民主强奸徐静蕾》（全文附后）获得不少叫好声，并不
    令人奇怪。该文体现的是2千多年前的“民主观”，即“多数人的暴政”。苏格拉底即
    死于这样的“民主暴政”。对民主如此浅薄的认识，至今仍有市场，可见大陆愚昧
    到了何等地步，自由民主的教育有多么匮乏！

    附：

    ```tzx-bigquote
    民主杀害韩寒，民主强奸徐静蕾

    作者：饱醉豚

    一个小国家，叫赵庄民主共和国，总共有 6 个人。一个是偶像明星大帅哥韩寒，
    有财产 1000 万，另一个是大美人大富婆徐静蕾，有财产 9000 万。其余 4 个人
    是阿 Q，王胡，小 D、孔乙己，都是穷鬼。

    这个国家实行民主竞选制。竞选人韩寒说：如果我当总统，给你们言论自由，出
    版自由，杜绝暴力拆迁，取缔任何不人道不公正的行为。

    竞选人徐静蕾说：如果我当总统，把我的财产拿出十分之一，也就是 900 万，当社
    会福利。

    竞选人阿 Q 的竞选纲领是：我要当了总统，会允许大家把韩寒杀掉，再瓜分韩寒
    和徐静蕾的财产，但是总统只拿其中的 1000 万，剩下 9000 万你们平分，每人
    3000 万。另外允许大家随时强奸徐静蕾。

    选民们经过计算，开始投票。韩寒 1 票，徐静蕾 1 票，都是自己投自己。阿 Q
    得了 4票，当选为赵庄民主共和国总统。

    于是，大家合力杀了韩寒，瓜分了徐静蕾的财产，有性欲的时候就强奸徐静蕾。
    ```

[微博用户『饱醉豚在简书』是谁？ - X 是谁 - 知乎](http://www.zhihu.com/question/27293582)

:   饱醉豚是推特反民斗的一面旗帜，他从年轻时的 89 一代，走向今天被众民斗“五毛”
    的转变，恰是对民斗圈日益堕落的讽刺。如今的民 yun 圈正如饱醉豚所言：「你们
    似乎对策略博弈一点兴趣都没有。不知道在一个不惩罚欺诈和背叛的圈子里会得
    到什么样的流行策略。然后导致另一些非欺诈的正常人根本不愿意跟你们一起混。
    而你们自己也完全没有彼此的信赖。囚徒困境中的一群欺诈者，最后剩下一群
    有病的，有仇的，有目地的。恭喜」。飽醉豚不是五毛，饱醉豚是曾经的 89 一
    代，他是为捍卫自己的道德，而走向与那些占据了道德优势，却将优势玩残的民
    斗骗子截然不同的两条路。这条路不好走，但走过来的都是枭雄。

[饱醉豚是干什么的？为什么懂得那么多？ - 网络红人 - 知乎](http://www.zhihu.com/question/27517209)

:   贴上一段他曾经在 Twitter 里的 Bio：

    > 中文网上第一健笔，中文网上第一贱逼，推特
    > 疯狗，推特中文圈最牛逼的狗屎，高级职业五毛，五毛教父，豚儒教教主，民主祛魅
    > 师，摸摸党精神领袖，中华人渣共和国总统，撑哥，饱醉待屠的装逼犯，流氓无敌，
    > 极品傻逼，吸毒名士，名士面具下的邪教魔头，中国的齐泽克、霍梅尼，淫贱粪豚，
    > 阉人，杂种，民族云鬼，正邪委员、五毛战神专治各种民主。

[饱醉豚语录2015年7月4日 - 简书](http://www.jianshu.com/p/6dd6206a71e2)

:   那些自称找虐的驴友，大多到四姑娘山要找马夫挑夫的，去雅鲁藏布江大峡谷要找藏
    人给他们当挑夫的，到更高的山就要找夏尔巴人给他们当挑夫。然后他们拍一些美奂
    绝伦的照片，自称去了某某地方。

    你不能因为黄炎培、丁玲、郭沫若之类的知识分子没能在毛泽东面前保持气节而认为
    这是毛的罪恶。恰恰相反，毛泽东让装逼知识分子脱光裤子献媚，正是给知识分子袪
    魅。这是毛为人性研究的贡献。

    建议爱狗爱猫的都亲自阉割以表示这确实是对动物的爱。

    这中国大地上到处是一些觉得这也不能吃那也不能吃的恐慌者。他们觉得中国的食物
    满含毒素，他们觉得中国的水、空气都充满恐怖。他们觉得中国到处是拐卖的孩子。
    他们觉得这社会对不起他，所以他们自己作恶的时候就可以毫无愧疚。

[生活方式 - 简书](http://www.jianshu.com/p/9ab34dd5a1ed) &hearts;

:   一旦你进入上海这样的城市，你就觉得当代的都市基本上都是为高度商品化的时髦女
    人而设置的。男人的风味一点都感受不到。或者男人的生活方式已经比女人还精致了。

    或许有一些文艺人，他们去咖啡厅，去酒吧，去田子坊，去看话剧。而这些在我看来
    已经不是文艺，而是难以容忍的恶俗。

    我没有股票户头，觉得一个人打理自己的股票、时刻盯着股市，那是把自己的闲暇给
    糟蹋了。我永远不会有热情去看股市的。（深得我心！）

[git——How to create an empty stand alone branch in GIT](http://maijunjin.github.io/git/2014/02/18/git%E2%80%94%E2%80%94how-to-create-an-empty-stand-alone-branch-in-git.html)

:   useful, checkout an orphan branch

    ```bash
    $ git checkout --orphan gh-pages
    $ git rm -rf . # remove these not staged files
    $ echo "orphan branch" > index.html
    $ git add index.html
    $ git commit -m "all we have is the newly added index.html"
    $ git log
    $ git checkout master
    $ git push origin gh-pages
    ```

    需要 `git rm -rf .` 是因为 index 虽然全新，但是本地文件还在。

[www.moolenaar.net/habits_paper.txt](http://www.moolenaar.net/habits_paper.txt)

:   救救乌干达的可怜孩子，额……

    还有说为什么要用 neovim（而不是 gvim），因为万一 Bram 挂了……真的没人能把他这工作接下来……

    Bram Moolenaar is the **main author of Vim**.  He writes the core Vim
    functionality and selects what code submitted by many others is included. He
    graduated at the technical university of Delft as a computer technician. **Now
    he mainly works on software, but still knows how to handle a soldering iron.**
    He is founder and treasurer of ICCF Holland, which helps orphans in Uganda.  He
    does free-lance work as a systems architect, but actually spends most time
    working on Vim.

[抱歉，我沒有英文名字 - Tzeng Yuxio](http://tzengyuxio.me/blog/2012/06/04/why-have-the-english-name/)

:   深得我心。

    記得有次報名一個國外活動時，我把我的姓名英譯寫給朋友，請他幫我填在網路
    表單上。由於姓名的欄位只有一個格子，於是朋友按照英文前名後姓的習慣，幫我填
    入「Yuxio Tzeng」，我當時大叫不行，堅持一定要「Tzeng Yuxio」，不過也可能是
    急了，沒有好好對朋友解釋。後來想想，其實要解釋的話很簡單：

    **Michael Jackson 的中文譯名是「麥可·傑克森」還是「傑克森·麥可」？**

    答案很明顯。我們並沒有因為把人名翻成中文，而順便也改變姓與名的順序，變
    成「 傑克森·麥可 」。注意到其中的盲點了嗎？

    想想看，早期的翻譯小說中，英美人名都是翻成郝思嘉（Scarlett O’Hara）、白
    瑞德（Rhett Butler），看著多少也覺得彆扭。然而現在的小說已經不這麼翻了，
    都按原名順序的方式音譯。既然如此，那麼為什麼你的中文名字翻成英文還要
    名姓顛倒呢？

    請多珍惜自己的名字。

[BOM (Byte Order Mark) 與 UTF-8 - Tzeng Yuxio](http://tzengyuxio.me/blog/2012/03/09/bom-byte-order-mark-and-utf-8/)

:   (BOM 的解释终于看懂了。)

    Byte Order Mark 在 UTF-16 Big Endian 是 “FE FF”，Little Endian 是 “FF FE”。
    其中Mac 系統主要是 Big Endian, PC 系統則是使用 Little Endian。

    UTF-8 由於本身特性，不管 Big Endian 或 Little Endian，其 BOM 一律為 “EF BB
    BF”。

    不過個人建議，文字文件要儲存的話，盡量以 UTF-8 格式存。而以 UTF-8 儲存的文
    件，盡量不要放 BOM 進去。為什麼呢？因為 UTF-8 的一個特色就是能與 ASCII 系統
    相容，如果文件中沒有包含非拉丁字元的話；要是放了 BOM 進去，就**破壞了這相容性**。

    ```plain
    :set bomb?
    :set bomb
    :set nobomb
    ```

[Lip dub - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Lip_dub)

:   有点双簧。实际上很多电影都是事后录音吧。

    A lip dub is a type of video that combines **lip synching**（对口型，
    synchronization，`['siŋkiŋ]`） and **audio dubbing**
    to make a music video. It is made by filming individuals or a group
    of people lip synching while listening to a song or any recorded audio then
    dubbing over it in post editing with the original audio of the song. There
    is often some form of mobile audio device used such as an MP3 player. Often
    they look like simple music videos, although many involve a lot of
    preparation and production. Lip dubs are done in a single unedited shot
    that often travel through different rooms and situations within a building.
    **They have become popular with the advent of mass participatory video
    content sites like YouTube.**

[豆瓣blog » Blog Archive » 豆瓣见鬼了!](http://blog.douban.com/douban/2005/10/26/42/)

:   阿北。

    还有整体的功能、UI 设计和几十处细节。熟悉豆瓣的人可以自己去对比，评判。
    我们自己看得最清楚，因为豆瓣每一个像素的摆放，每一个“的”字放还是不放，
    都是许多根熬白的头发换来的。

    英语有句话，“模仿是最真诚的赞赏”。说的是模仿，不是抄袭。所以，不受此礼。

    从法律角度来说，书的介绍（来自扉页等）、属性资料和封面图像的版权属于出
    版商或者作者。在流通的领域内，普遍是默许使用，因为对版权所有者有利。所
    以默认(de facto)的版权形式是在“公共范围” (public domain)。豆瓣到今天为
    止没有和任何出版商在这方面有过任何争议。

    我对大众点评网已经没有怨言，也祝他们能把中文 webUI发展的更好。但是我一定
    要问别人一个问题：**这年头抄别人的可以沉默，被抄的倒需要出来为自己辩护，
    这到底是他妈的怎么回事?!**

[我的貼標籤規範 - Tzeng Yuxio](http://tzengyuxio.me/blog/2012/04/21/my-tagging-guideline/)

:   為了避免上述問題，雖然目前每個網站的標籤機制如同多頭馬車各行其道，制定一個
    自己個人使用的標籤習慣（或規範）倒是可行的一個作法。這個問題相信困擾的不只是我，
    上網找了一下，有兩篇值得參考的文章，第一個是 Calvin C. Yu 所寫的 Taggin
    Guidelines （在投影片中的第 13 頁），主要原則如下：

    #. 簡練
    #. 小寫
    #. 單數

    另一個參考是由 Hutch Carpenter 所提出的，他認為標籤機制應該有個標準，而這個
    標準就是複數詞組，逗號分隔 (**Multi Word, Comma Seperated**)。

    #. 簡便性
        i. 盡量簡單。
        #. 方便輸入。所以標籤時會以英文為主，例如用 browser 而不用 瀏覽器。自己容易想起。通常第一個想到的字詞就是了。
        #. 使用容易理解的詞。
    #. 一致性
        i. 一個概念一個詞。所以 動畫, アニメ, Anime, 動画 就只剩下用一個 anime。
        #. 小寫。同樣是為了方便輸入。
        #. 用單數，用名詞。當然，這免不了會遇到例外情況，主要還是要依照使用情境判斷。
        #. 人名的標記盡可能從主人。例如使用 菅野よう子 而非 菅野洋子, 韩寒 而非
           韓寒。除非該人名的原始拼寫方式我不熟悉，例如我總是想不起來戈巴契夫怎麼
           拼，那就直接用戈巴契夫吧。同樣是以自己方便為最高原則。
        #. 除非是自己口語常用的縮寫，不然不使用縮寫作標記。nds win7 xbox360
           都很好理解，可是用 resp req 來做為 response request 標籤的替代，
           就太過頭了。現在連寫程式都不鼓勵這種縮寫了。
    #. 格式
        i. 省略單字間空白。也就是說用 macosx 而非 mac os x。不過英文人名是
           例外；日常用字如 smartphone 我們容易斷字，相對的人名如果省略空白
           有時候就不容易逆推。其他如果空白省略會造成歧異的話，也應該保留空
           白於關鍵字中。
        #. 以逗號區隔關鍵字。正確來說應該是以「逗號加空白」區隔關鍵字。

    以連接號 ("-") 或底線 ("_") 作連接，通常是以連接號，因為不用按 shift, 比較
    好輸入。例如 "github-pages" 或 "octopress-plugins"

    不過從另一個角度講，我會**避免使用太過 detail 的標籤**，例如上面的
    "octopress-plugins", 我可能就只放 "octopress" 跟 "plugin" 兩個標籤就好了。
    太多的標籤也不好維護或回想。

[為什麼台北有中國路名？兼談「馬路」一詞由來 - Tzeng Yuxio](http://tzengyuxio.me/blog/2012/09/02/roads-named-after-other-place/)

:   说穿了，不只南京路，其实上海许多以中国地名命名的道路，几乎都是「洋人的玩意」。
    怎麼说？在十九世纪清末时期，上海的英国租界与美国租界合併為「上海公共租界」，租
    界合併，街道名称得统一一下，可是英美两边的人马都坚持自己原有的名字，最后英国领
    事乾脆订了个**「上海马路命名备忘录」**，全部规定以中国地名命名，省得吵架。「备忘录」
    中明订，**南北道路以省份命名，东西道路以城市命名**，因而成了今日上海市道路的模样。

    而我们今天所讲的「马路」，并不是因為古代的道路是马在上面跑而称作「马路」。「马路」
    一词是近代才出现，有一说就是源自於前面所提到的上海南京路的原始称呼。因為上
    海南京路原本是作為**跑马场**用，因此被俗称為「**大马路**」，后来「马路」一词逐渐被沿用
    為泛指一般道路。

    还有另外一说，则是指近代的筑路方法是由十八世纪的苏格兰工程师**约翰 &middot; 马卡丹 (John McAdam)**
    所设计，马卡丹以碎石铺路，路中為高、两侧略低，以便於排水，也方便车辆马
    匹通行。这种新设计的道路传入中国后被称為「**马卡丹路**」，俗称「马路」。

[HTML XHTML Entities](http://elizabethcastro.com/html/extras/entities.html)

[Everything FAQ](http://www.voidtools.com/faq/)

:   Win 上最牛逼的软件（之一），还不收钱！

    Does "Everything" **hog my system resources**?

    :   No, "Everything" uses very little system resources.
        A fresh install of Windows 8 (about 70,000 files) will use about 6 MB of
        ram and less than 3 MB of disk space.  1,000,000 files will use about 50 MB
        of ram and 15 MB of disk space.

    Does Everything search file contents?

    :   No, "Everything" does **not search file contents, only file and folder names**.

    Everything is like `tree | ag`{.bash}

    Read more

    #. [Searching](http://www.voidtools.com/support/everything/searching/)

[universal-ctags/ctags](https://github.com/universal-ctags/ctags)

[pages.tzengyuxio.me/articles/how-to-be-more-productive.html](http://pages.tzengyuxio.me/articles/how-to-be-more-productive.html)

:   首先，你必须让不同品质下的时间都能得到充分运用。其次，你必须尽可能地让你的
    时间处于高品质状态。

    一旦你有了这份清单，剩下的难题就是要记得去检视它。

    针对那些需要全神贯注的任务，你应该**避免被中断**。最简单的方法是躲到没有人
    能找得到你的地方。

    然而有时候光是这么简单的事我还是会搞砸。我懒得出去觅食，所以我经常会工作到
    飢肠辘辘，然后又饿又累反倒更加没有力气能去找吃的。

    **拥有愉快的朋友们则有莫大的帮助**。例如，我发现我在和 Paul Graham 或 Dan
    Connolly 聊完天后总是觉得干劲十足－－他们活力四射。

    **何谓拖延？从旁观者的角度来看，你只是在做著「有趣」（像是玩游戏或看新闻）
    的事情，而不是你真正该作的事情（这也通常导致旁人把你贴上懒惰的标签）。但真
    正的问题是：你的脑袋裡到底是怎么回事？**

    如果你对自己说，「我真的该去做Ｘ了，这是现在最重要的事情。」突然间，与Ｘ相
    关的所有工作便会成为你最不想去做的事。**但只要最重要的事情变成了Ｙ，明明是
    同一件事的Ｘ就会变得简单许多。**

    常言道：困难的工作并不令人愉快。但事实上，困难的工作或许是我做过的事裡最能
    让人乐在其中的。当你尝试著解决一个棘手的问题时，你不仅不会感到精疲力尽，甚
    至会在完成之后让你觉得全力以赴真是一件美妙的事。

[Deleting a buffer without closing the window - Vim Tips Wiki - Wikia](http://vim.wikia.com/wiki/Deleting_a_buffer_without_closing_the_window)

:   `:bd`

    `:E`, go back to explorer

[文章分类 - 陈汝丹](http://chenrudan.github.io/page/category.html)

[Caffe、TensorFlow、MXnet三个开源库对比 - 陈汝丹](http://chenrudan.github.io/blog/2015/11/18/comparethreeopenlib.html#0-tsina-1-2654-397232819ff9a47a7b7e80a40613cfe1)

[How do you create a remote Git branch? - Stack Overflow](http://stackoverflow.com/questions/1519006/how-do-you-create-a-remote-git-branch)

:   ```bash
    $ git checkout -b gh-pages
    $ echo hello > index.html
    $ git commit -am "added index page"
    $ git push origin gh-pages
    $ git checkout master
    ```

[Vim 实用技术，第 1 部分: 实用技巧](http://www.ibm.com/developerworks/cn/linux/l-tip-vim1/index.html)

:   ```plain
    ;;;;encoding=utf-8
    termencoding
    fileencoding
    fileencodings=ucs-bom,utf-8,chinese; unicode bom?, utf-8 without bom,
    chinese( win:gb2312 -> linux:euc-cn ) ambiwidth=double; double char width
    ```

    ```plain
    set encoding=utf-8
    set fileencoding=chinese
    set fileencodings=ucs-bom,utf-8,chinese
    set ambiwidth=double
    ```

    vim to edit non utf-8 file when settings are configured to utf-8:
    `:e ++enc=ucs-bom`, see `:help ++enc` for more.

    <kbd>Control+R</kbd><kbd>=</kbd>23*234, see `help i_ctrl-r`

    - `i ctrl-r *`, x11 clipboard
    - `i ctrl-r /`, 插入上次的 query 字符串：
    - `i ctrl-r :`, last cmd
    - `i ctrl-r .`, last insertion
    - `i ctrl-r -`, last small deletion
    - `i ctrl-r %`, filename

    `i_ctrl-{d,t}` -> `<<, >>`

    #. `uxterm -cjk`{.bash}
    #. `set mouse=a`, turn on mouse clicking
    #. tabstop (ts), shiftwidth (sw), expandtab, noexpandtab
    #. autoindent
    #. cindent
    #. cinoptions, `:help cinoptions-values`

    `cinoptions=>4,n-2,{2,^-2,:2,=2,g0,h2,p5,t0,+2,(0,u0,w1,m1 shiftwidth=2 tabstop=8`：
    标准的 GNU 编码风格的设置，对 Vim 缺省的 C 缩进风格作了很多
    微调，比如，if 语句下的“{”、“}”要在“if”后缩进两格，但函数定义部分“{”、“
    }”仍和函数名一行对齐。开源软件经常使用该种缩进风格。

    **modeline**

    Vim 是我用过的第一个支持在文件中记录代码风格设定的编辑器。这个特性在
    Vim 中叫做**模式行**，实际上，它所做的是在打开文件时根据文件中的 Vim 指令设
    定相关的 Vim 选项。下面就是一个嵌在 C 源代码中的模式行：

    ```cpp
    /* vim: set tabstop=4 shiftwidth=4 expandtab: */
    ```

    `nohlsearch`: no highlight search

    去掉所有的行尾空格：`%s/\s\+$//`。`%` 表示在整个文件范围内进行替换，
    `\s` 表示空白字符（空格和制表符），`\+` 对前面的字符匹配一次或多次（越多越好
    ），`$` 匹配行尾（使用 `\$` 表示单纯的 `$` 字符）；被替换的内容为空；由于一
    行最多只需替换一次，不需要特殊标志。这个还是比较简单的。

    去掉所有的空白行：`:%s/\(\s*\n\)\+/\r/`。`*` 代表对前面的字符（此处为`\s`）
    匹配零次或多次（越多越好；使用 `\*` 表示单纯的 `*` 字符），`\(` 和 `\)` 对
    表达式进行分组，使其被视作一个不可分割的整体。因此，这个表达式的完整意义是，
    把连续的换行符（包含换行符前面可能有的连续空白字符）替换成为一个单个的换行
    符。唯一很特殊的地方是，在模式中使用的是 `\n`，而被替换的内容中却不能使用
    `\n`，而只能使用 `\r`。原因是历史造成的，详情如果有兴趣的话可以查看 `:help NL-used-for-Nul`。

    去掉所有的 `//` 注释：`:%s!\s*//.*!!`。首先可以注意到，这儿分隔符改用了
    `!`，原因是在模式或字符串部分使用了 `/` 字符，不换用其他分隔符的话就得在
    每次使用 `/` 字符本身时写成 `\/`，上面的命令得写成 `:%s/\s*\/\/.*//`，可读
    性较低。命令本身倒是相当简单，用过正则表达
    式的人估计都知道“.”匹配表示除换行符之外的任何字符吧。

    能讓去掉所有的 `/* */` 注释：`:%s!\s*/\*\_.\{-}\*/\s*!!g`。这个略有点复杂了
    ，用到了几个不太常用的 Vim 正则表达式特性。`\_.` 匹配包含换行在内的所有
    字符；`\{-}` 表示前一个字符可出现零次或多次，但在整个正则表达式可以匹配
    成功的前提下，匹配的字符数越少越好；标志 `g` 表示一行里可以匹配和替换多次
    。替换的结果是个空格的目的是保证像 `int /* space not necessary around comments */ main()`
    这样的表达式在替换之后仍然是合法的。希望上面的这些简
    单的例子能够引起你使用 Vim 的正则表达式高效完成任务的兴趣。进一步的信息
    可参考 `:help regexp`。

    #. m：在多字节字符处可以折行，对中文特别有效（否则只在空白字符处折行）；
    #. M：在拼接两行时（重新格式化，或者是手工使用“J”命令），如果前一行的结尾或
    后一行的开头是多字节字符，则不插入空格，非常适合中文上面提到的注释.
    件），然后把结果贴回到邮件编辑窗口中进行发送。`set formatoptions+=mM`.

    `gf`, `ga`, `` `. ``

    use `.` instead of macros!

[程序员的编辑器——VIM(转) - ma6174 - 博客园](http://www.cnblogs.com/ma6174/articles/2384210.html)

:   我说这个人怎么这么熟，原来之前用过他的 Vim 配置……

    这些例子也许初看起来有点吓人，可是在很多时候 VIM 这些强大的命令能省不少力，VIM
    不愧是为“编辑”这个功能费尽心思。

    VIM 的帮助是超链接形式的，它使用的就是 tags，所以可以跟 ctags 功能
    一样按 <kbd>Ctrl+]</kbd> 跳转到链接所指处，按 <kbd>Ctrl+t</kbd> 返回。

    help              | detailed
    ----------------- | --------
    `:help`           | 打开帮助首页，这个首页分类非常清楚
    `:help cmd`       | 查找normal mode命令，比如 `:help dd`
    **`:help i_cmd`** | 查找insert mode命令，比如 `:help i_Ctrl-y`
    `:help :cmd`      | 查找command-line命令，比如 `:help :s`
    `:help 'option`   | 查找选项，比如 `:help 'tabstop`

    VIM中有九类寄存器, cool!

    `:ab hw Hello world`, abbrev

    `:s//` 和 `:g//`，`:!g//`

    这两个命名加上正则表达式，常常能完成非常复杂的编辑任务，可以毫不夸张地说是 VIM
    的两柄瑞士军刀。`:s` 是替换操作，`:g` 是查找匹配模式的行，`:!g` 是查找不匹配模式的行。

    > ...Can you imagine how many keystrokes could have been saved, if I
    > only had known the `*` command in time? - Juergen Salk, 1/19/2001

    Read more

    #. [tips : vim online](http://www.vim.org/tips/index.php)
    #. [Vim Tips Wiki - Wikia](http://vim.wikia.com/wiki/Vim_Tips_Wiki)

[vi/vim tutorial for Dvorak](http://boredzo.org/vi_tutorial/)

:    [vi for dvorak users](http://boredzo.org/vi_tutorial/vi_tutorial-QWERTY-Color.pdf)

[Why, oh WHY, do those `#?@!` nutheads use vi?](http://www.viemu.com/a-why-vi-vim.html)

:   Heck, most vi users were not even born when vi was written!

    Vim is available for free for almost any platform out there, and there are
    plug-ins to get the functionality inside all major IDEs. Let's try to break
    a few misconceptions, and see some real examples of why it's the killerest.

    - modal editing
    - it's not all about regular expressions ??
    - you gotta be nuts and/or a genius to use it
    - manipulating delimited（界限）blocks: `di>`
    - hjkl to move around?
    - since you are thinking 90% of the time, and editing 10%, the productivity
      gain might be there, but it's useless anyway
    - Comfortable editing helps you stay in "the zone", the state of
    - concentration that gets you the maximum productivity. As you master a
    - powerful tool such as an editor, it just disappears from your
    - conscious, and you are free to concentrate in the problem, and your
    - editing happens unconsciously.
    - it's just sticking to a disappearing past

    Do whatever you want. Don't learn it if you feel it's too much effort just
    for nothing. Learn emacs instead. Or stay in your IDE using a lousy editor.
    Whatever. But in any case, don't ever claim again that those 'vi guys are
    nutheads' - I hope that I have succeeded in showing you why they (we) stick
    to it, and you should at least be able to understand its power, even if you
    prefer to stay away from it.

    Read more

      - [ViEmu: vi-vim editor emulation for Visual Studio, Xcode, Word, Outlook and SQL Server](http://www.viemu.com/)

[CTEX: LaTeX 文档](http://www.ctex.org/OnlineDocuments)

[VICE 面会｜EAGLES OF DEATH METAL乐队讲述巴黎恐怖袭击—在线播放—优酷网，视频高清在线观看](http://v.youku.com/v_show/id_XMTQwMjEyODE4MA==.html?from=s1.8-1-1.1)

[GCC and Make - A Tutorial on how to compile, link and build C/C++ applications](http://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)

[Creating a shared and static library with the gnu compiler [gcc]](http://www.adp-gmbh.ch/cpp/gcc/create_lib.html)

:   ```bash
    # create static lib
    $ gcc -c calc_mean.c -o calc_mean.o
    $ ar rcs libmean.a calc_mean.o

    # create dynamic lib
    $ gcc -c -fPIC calc_mean.c -o calc_mean.o # position independant code, -fpic
    $ gcc -shared -Wl,-soname,libmean.so -o libmean.so calc_mean.o
    # gcc -shared -Wl,-soname,libmean.so.1 -o libmean.so.1.0.1 calc_mean.o

    # link static
    $ gcc -static main.c -L. -lmean -o statically_linked

    # link dynamic
    $ gcc main.c -o dynamically_linked -L. -lmean
    # gcc main.c -o dynamically_linked -L. -l:libmean.so.1.0.1

    # execute dynamically linked exe
    $ LD_LIBRARY_PATH=. ./dynamically_linked
    ```

    `*.o` &rarr; `.a`: `ar rcs my_library.a file1.o file2.o`{.bash}
      ~ `r` says insert the given object files in to the archive
        (**replacing** any older versions of the same thing)
      ~ `c` says create the archive if it isn't already there (normally
        this happens anyway, but this option suppresses the warning).
      ~ `s` says to write an object-file index into the archive.

    ```bash
    $ gcc -Wall -I/include-files -L/libraries prog.c -lctest -o prog
    ```

    - `gcc`{.bash} - GNU C compiler
    - `ld`{.bash} - The GNU Linker
    - `ldd`{.bash} - List dependencies
    - `ldconfig`{.bash} - configure dynamic linker run time bindings (update
      cache /etc/ld.so.cache)

    Filesystem Placement (`/etc/ld.so.conf`)

      - `/lib`
      - `/usr/lib`
      - `/usr/local/lib`

    Environment Variables

      - `LD_LIBRARY_PATH`
      - `LD_DEBUG`

    Installing and Using a Shared Library

      - simply copy the library into one of the standard directories (e.g.,
        `/usr/lib`) and run `ldconfig`{.bash}
      - `ldconfig -n directory_with_shared_libraries`{.bash}
      - `LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH my_program`{.bash}

     refs and see also

      - [linker - Linking a shared library using gcc - Stack Overflow](http://stackoverflow.com/questions/726014/linking-a-shared-library-using-gcc)
      - [c - How do I compile a static library - Stack Overflow](http://stackoverflow.com/questions/11344547/how-do-i-compile-a-static-library)
      - [Linux Tutorial - Static, Shared Dynamic and Loadable Linux Libraries](http://www.yolinux.com/TUTORIALS/LibraryArchives-StaticAndDynamic.html)
      - [Shared Libraries](http://www.tldp.org/HOWTO/Program-Library-HOWTO/shared-libraries.html)

[Duff's device - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Duff%27s_device)

[无插件 Vim 编程技巧 | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/11312.html)

:   should know

    ```plain
    :E
        -, up dir
        D, delete
        R, rename
        s, sort
        x, run

    :cd
    :pwd

    ;; buffers

    :ls                             ls buffers
    :buffer 4                       4th buffer
    :bn                             next buffer
    :bl :blast                      last buffer
    :bf :bfirst                     first buffer
    :bdelete :bd                    delete buffer

    ;; windows

    :He                             explore (down)
    :He!                            explore (up)
    :Ve                             explore (left)
    :Ve!                            explore (right)
    :Te                             explore tab
        gt                              next tab, control+PgDn
        gT                              previous tab, control+PgUp
        5gT                             5th tab, idx: 1..n
        :tabm 5, :tabmove 5             5th tab, idx: 0..n-1
        :tabs                           show tabs
        :tabclose 2
        :bufdo tab split                all bufs turn to tabs

    ;; scroll

    :set scb                        sync scroll
    :set scb!                       not sync scroll

    :qa
    :wqa
    ```

    ```bash
    # open in tabs
    $ vim -p *.cpp

    # open in splits (vertical, horiz)
    $ vim -On file1 file2 ...
    $ vim -on file1 file2 ...

    # load session, (save session: :mksession session.vim)
    $ vim -S session.vim
    ```

    flag | ?
    ---- | ----------
    `–` | （非活动的缓冲区）
    `a` | （当前被激活缓冲区） %a, current buffer
    `h` | （隐藏的缓冲区）
    `%` | （当前的缓冲区）
    `#` | （交换缓冲区）
    `=` | （只读缓冲区）
    `+` | （已经更改的缓冲区）

    Read more

      - [Vim 的分屏功能 | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/1679.html)

[橡皮鸭程序调试法 | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/1719.html)

:   小浣熊方法、Feynman 方法

      - 为什么这个方法要叫做橡皮鸭呢？因为橡皮鸭子是西方人在泡澡时最喜欢玩的一
        个小玩具
      - **Once a problem is described in sufficient detail, its solution is
        obvious.**

[c++ - Adding Q_OBJECT macro gives "unresolved external error" in QThread inherited class - Stack Overflow](http://stackoverflow.com/questions/20380017/adding-q-object-macro-gives-unresolved-external-error-in-qthread-inherited-cla)

:   第一种！半天折腾，然后自动就好了……shit……

    In this case this error may accrue only if moc tool didn't create meta data
    for this class. This can happen in two cases:

      - **file dependencies are broken** so you have to run `qmake`{.bash}
        and/or clean project (`make clean`{.bash}).
      - `moc`{.bash} tool is not instructed to generate those data, for example
        you are missing entry in pro file: `HEADERS += tcustomthread.h`

[Is there any chance that vim will be rewritten in c++ with gtk/qt like other fast modern editors? - Quora](https://www.quora.com/Is-there-any-chance-that-vim-will-be-rewritten-in-c++-with-gtk-qt-like-other-fast-modern-editors)

:   see [equalsraf/vim-qt](https://github.com/equalsraf/vim-qt)
