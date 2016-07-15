---
title: Working Notes
...

# 笔记

[Git - Submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules) -<

:   1.  add submodule (won't pull the source)

        ```bash
        git submodule add git@github.com:district10/caffe-notes.git caffe-notes
        ```

    2.  pull the source

        ```bash
        # method 1
        git submodule init
        git submodule update --recursive

        # method 2
        git submodule update --init --recursive
        ```

    3.  clone a repo with submodule(s)

        ```bash
        # method 1
        git clone git@github.com:district10/notes.git
        git submodule update --init --recursive

        # method 2
        git clone git@github.com:district10/notes.git
        git submodule init
        git submodule update

        # method 3
        git clone --recursive git@github.com:district10/notes.git
        ```

    4.  pull submodules

        ```bash
        # method 1
        git pull --recurse-submodules

        # method 2
        git submodule foreach --recursive git pull origin master

        # method 3
        git submodule update --remote caffe-notes
        ```

    5.  diff submodules

        ```bash
        # method 1
        git diff --cached DbConnector

        # method 2
        git diff --cached --submodule
        ```

    6.  checkout non-master branch

        ```bash
        # checkout `stable' branch instead of `master' branch
        git config -f .gitmodules submodule.caffe-notes.branch stable
        ```

    diff submodules +<

    :   ```bash
        # method 1
        git diff --cached DbConnector

        # method 2
        git diff --cached --submodule
        ```

    checkout non-master branch

    :   ```bash
        # checkout `stable' branch instead of `master' branch
        git config -f .gitmodules submodule.caffe-notes.branch stable
        ```

[javascript - jQuery .click() is triggering when selecting/highlighting text - Stack Overflow](http://stackoverflow.com/questions/10390010/jquery-click-is-triggering-when-selecting-highlighting-text) -<

:   ```javascript
    $('dt.drawer').on('click', function(event){
        if(getSelection().toString()){ return; } // !!! NICE !!!
        $('dt.focus,dd.focus').removeClass('focus');
        $(this).addClass('focus').next('dd').addClass('focus');
        $(this)
            .toggleClass('drawerOpen')
            .toggleClass('drawerClose');
        $(this).next('dd').toggleClass('drawerHide');
        event.stopPropagation();
    });
    ```

    有人回复：

    >   To not break the whole app when a user has text selected somewhere else it
    >   might be good to check that the selected text is in the relevant element:
    >   `if(!e.target.contains(getSelection().anchorNode))`{.javascript}.

    然而其实不必要，因为当你点击的时候，你的 selection 就被清空了。如果 selection 还在，
    一定选中的是当前 node 的文字。（我是实测发现并没有 bug 才注意到这句话，才多想了一下。）

[4ker/jquery-popup-overlay: jQuery plugin for responsive and accessible modal windows and tooltips.](https://github.com/4ker/jquery-popup-overlay) -<

:   我想把 overlay 功能加到笔记里。

[jQuery - keydown / keypress /keyup ENTERKEY detection? - Stack Overflow](http://stackoverflow.com/questions/3462995/jquery-keydown-keypress-keyup-enterkey-detection) -<

:   nice

以上是对英文没问题的同学，如果英文有问题怎么办呢？请先转化到没问题的状态。:smile: -<

:   ```perl
    if(/^(\s*)(-> )(.*)$/) {
        my $line = $1 . $3;
        $line =~ s/\r?\n?$//;
        print $line . " `@`{.fold}\n";
        next;
    }
    if(/^(\s*)(=> )(.*)$/) {
        my $line = $1 . $3;
        $line =~ s/\r?\n?$//;
        print $line . " `@`{.foldable}\n";
        next;
    }
    ```

    Caffeinated Companies，语言用得好妙！caffein-ated companies……

    在北京一家 startup 工作一年混国外社区混 github 一年后直接 remote 给多家国外公司
    工作收入直接 x4-6 倍

    总之 我觉得自从 freelancing 之后，我可以尝试更多之前没时间 或者没有去尝试的东西，
    我觉得生活不再只是程序代码，而其实你 coding 也不是只是和计算机去交流，因为你的代
    码是给人看的，所以作为程序员，就别拿这个职业作为自己有交流障碍来做借口吧，多半
    是社会舆论把你给定型了，其实你应该可以做得更好的，扯远了，最后再扯一下靠不靠谱
    的问题：

`"★★★★★☆☆☆☆☆".substring(5 - rating, 10 - rating )`{.javascript} -<

:   I saw this code being written byAddison Phillips (Page on linkedin.com)
    when I was at Amazon. I'm not sure if he is the original author, but I
    loved it for its elegance.

[What No One Told You About Z-Index — Philip Walton](https://philipwalton.com/articles/what-no-one-told-you-about-z-index/)

[The Definitive Guide to Using Negative Margins – Smashing Magazine](https://www.smashingmagazine.com/2009/07/the-definitive-guide-to-using-negative-margins/) -<

:   ![](https://media-mediatemple.netdna-ssl.com/wp-content/uploads/images/css-negative-margins/margin-motion.gif)

    现在看也挺正常的。不就该这样么？

[wufeifei/dict: linux 命令行下翻译工具](https://github.com/wufeifei/dict) -<

:   ```bash
    wget https://raw.githubusercontent.com/wufeifei/dict/master/dict.py
    python2 dict.py test
    python2 dict.py 测试
    ```

    ```python
    @include <-=include/dict.py=
    ```

[Shields.io: Quality metadata badges for open source projects](http://shields.io/) -<

:   弹出来的窗口倒是很赞。我的 notes 里也想有这个 feature。

[ImageMagick(CVE-2016-3714) 影响 / 利用 / 修复 / 检测](http://wufeifei.com/imagemagick/) -<

:   此次漏洞导致的直接危害为远程代码执行（RCE）

    也就是说，如果你的业务中有用到 ImageMagick 处理图片，则攻击者只需要上传一个
    特殊构造的图片即可拿到你服务器的权限。

本笔记系统的 tab 标签功能 -<

:   <div class="tabNav" target="tab1">
    -   [tab1](#tab1)
    -   [tab2](#tab2)
    </div>

    <div style="clear:both;"></div>

    <div id="tabs">
    <div id="tab1"> tab1 content.  </div>
    <div id="tab2"> tab2 content.  </div>
    </div>

    <div class="tabNav" target="tab3">
    -   [tab3](#tab3)
    -   [tab4](#tab4)
    </div>
    <div class="tabs">
    <div id="tab3"> tab3 content.  </div>
    <div id="tab4"> tab4 content.  </div>
    </div>

    <div class="tabNav" target="tab5">
    -   [tab5](#tab5)
    -   [tab6](#tab6)
    -   [tab7](#tab7)
    </div>

    <div class="tabs">
    <div id="tab5">

    @include <-|   =include/diff_a.txt=

    </div>
    <div id="tab6">

    @include <-|   =include/diff_b.txt=

    </div>
    <div id="tab7">

    @include <-=include/diff_c.diff=

    </div>
    </div>

[Win10 怎么查看无线网络密码_百度经验](http://jingyan.baidu.com/article/90808022dd61a0fd90c80f61.html) -<

:   1.  图标右键；
    2.  打开网络和共享中心；
    3.  更改适配器设置；
    4.  双击相应 BSSID；
    5.  无线属性 -- 安全 -- 显示密码。

本笔记系统 diff 的效果 -<

:   @include <-=include/diff_bvlc_flickr.diff=

关于 caffe 的网络层 -<

:   ```python
    im_input = im[np.newaxis, np.newaxis, :, :]
    net.blobs['data'].reshape(*im_input.shape)
    net.blobs['data'].data[...] = im_input

    params = ['fc6', 'fc7', 'fc8']
    # fc_params = {name: (weights, biases)}
    fc_params = {pr: (net.params[pr][0].data, net.params[pr][1].data) for pr in params}
    ```

    conv

    -   fc6 weights are (4096, 9216) dimensional and biases are (4096,) dimensional
    -   Consider the shapes of the inner product parameters. The weight dimensions
        are the output and input sizes while the bias dimension is the output size.

    fc-conv

    -   fc6-conv weights are (4096, 256, 6, 6) dimensional and biases are (4096,)
        dimensional
    -   The convolution weights are arranged in output x input x height x width
        dimensions.

    The classifications include various cats -- 282 = tiger cat, 281 = tabby, 283 =
    persian -- and foxes and other mammals.

    ```python
    # Make sure that caffe is on the python path:
    caffe_root = '../../'  # this file is expected to be in {caffe_root}/examples/hed/
    import sys
    sys.path.insert(0, caffe_root + 'python')
    ```

[Holistically-Nested Edge Detection](http://arxiv.org/abs/1504.06375) -<

:   holistic    `[hoʊ'lɪstɪk]` adj. 整体的；全面的；功能整体性的

    We develop a new edge detection algorithm that tackles two important issues
    in this long-standing vision problem: (1) holistic image training and
    prediction; and (2) multi-scale and multi-level feature learning. Our
    proposed method, holistically-nested edge detection (HED), performs
    image-to-image prediction by means of a deep learning model that leverages
    fully convolutional neural networks and deeply-supervised nets. HED
    automatically learns rich hierarchical representations (guided by deep
    supervision on side responses) that are important in order to approach the
    human ability resolve the challenging ambiguity in edge and object boundary
    detection. We significantly advance the state-of-the-art on the BSD500
    dataset (ODS F-score of .782) and the NYU Depth dataset (ODS F-score of .746),
    and do so with an improved speed (0.4 second per image) that is
    orders of magnitude faster than some recent CNN-based edge detection
    algorithms.

    Our method shows promising results in performing image-to-image learning by
    combining multi-scale and multi-level visual responses, even though
    explicit contextual and high-level information has not been enforced.

N.B. 是啥意思？ -<

:   set parameters s.t. deconvolutional layers compute bilinear interpolation
    N.B. this is for deconvolution without groups
    N.B. 啥意思？：

    -   Derived from the Latin (and italian) nota bene, meaning note well (take notice).：
    -   It is used to draw the attention to a certain aspect.

如何用 `<script>`{.html} 标签往 html 里写字符？ -<

:   `<script>document.write("hello")</script>`{.javascript}

[version control - Ignore files that have already been committed to a Git repository - Stack Overflow](http://stackoverflow.com/questions/1139762/ignore-files-that-have-already-been-committed-to-a-git-repository)

异性在场与秀肌肉的冲动 -<

:   再举个例子，我一个平时巨怂的朋友，打球都是有气无力的，但是有一次他喜欢的妹
    子在旁边出现的时候，他（打球）突然变得像驴一样凶残（比喻可能不恰当），知道
    这个事情的时候，我也很想笑（原谅我笑点低），虽然回头想想，这种事情也是极为
    合理的。

    她并不是讨厌自己发表的那些内容，也不是厌恶那时候的自己，实际上我们都是非常
    好的朋友，她只是不想让那些长篇大论被人看到而已，那其中感情表露的太多了，或
    许被不相干的人看到并不是一件合适的事。

一张图告诉你 CDN 是啥意思 -<

:   ![CDN gif](https://uploads.intercomcdn.com/i/o/4605475/2bef99bad4fbcb44d6f90df2/load-time-animation.gif)

一个聪明的加载 MathJax 的策略 -<

:   [Use the full MathJax configuration to maximize loading speed by ickc · Pull Request #2908 · jgm/pandoc](https://github.com/jgm/pandoc/pull/2908)

    :   ```html
        $if(math)$
            <script src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS_CHTML-full" type="text/javascript"></script>
        $endif$
        <!--
            <script src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML" type="text/javascript"></script>
        -->
        ```

        -   Sounds like a good idea.

            PS. In the future, please rebase the PRs so that they don't have
            merge commits. It makes it easier to see what's going on later.

        -   Thanks for letting me know. Sorry for the ignorance.

        -   No, problem, thanks for the contribution!

        话说 jgm 真是好友善。还会让你学到新东西。

我们刚刚做出了一个艰难的决定 -<

:   此梗来自 360 和 QQ 的大战。

    [虎落平阳被犬欺_百度百科](http://baike.baidu.com/link?url=lOXv_2p1NBl2yYFXSwd7myiKBQdjCHe6gB7QUTIeL26gjYPuEWAdnGUQtIFwXCHEJLPufFjzhVqvi-jBy1b90K)

乌鲁木齐与伊犁 -<

:   [乌鲁木齐（新疆维吾尔自治区首府）_百度百科](http://baike.baidu.com/link?url=UD_ZutmIjayEONudv80glBuccQUz639tU_sJ4VUCMb8BWv9B-h2hhmaYiTDo4l2mNsGjBkKwWtHdIfpHqjCltzvn_bgEeJ9JKeP_fiIzYya)

    [伊犁哈萨克自治州_百度百科](http://baike.baidu.com/link?url=HBrLnLFgoneKSIY4J2ptgH1cavn-DjZYcfWeWVJndwMboj1x0cqFHKOGBukfJLUqs19PR5fyvfZGlzY1GSr2Af4qK56h5nDn3CHSTHcsvcl29tCiNaBGiHQdGtaIU0Z-) -<

    :   伊犁州极端最高气温 42.8℃，极端最低气温 - 51.0℃，其中伊犁河谷年平均气温 10.4℃，
        塔城地区年平均气温 8.7℃，阿勒泰地区年平均气温 5.8℃。年平均降水量：伊犁河谷
        417.6 毫米，山区 600 毫米左右；塔城盆地 342.7 毫米，山区 400 毫米左右；阿勒泰山
        区 202.6 毫米；其余地区 100-200 毫米。年平均日照时数：伊犁河谷 2898.4 小时；塔
        城地区 2714.7 小时；阿勒泰地区 2976.8 小时。

一个很好看的姑娘 -<

:   还是个学霸呢~

    [理科 557 分！文科 547 分！他们是怎么考出来的啊？！](http://mp.weixin.qq.com/s?__biz=MzA5NTIyODgzOQ==&mid=2650182788&idx=1&sn=753ed9dad821699e1ace978de1f4fe87&scene=23&srcid=0623ZbnnnkDNhH7ADA1syfok#rd)

杂七杂八 caffe, ml, etc -<

:   [deep learning - Building custom Caffe layer in python - Stack Overflow](http://stackoverflow.com/questions/33778225/building-custom-caffe-layer-in-python)

    [ipython notebook - Cheat sheet for caffe / pycaffe? - Stack Overflow](http://stackoverflow.com/questions/32379878/cheat-sheet-for-caffe-pycaffe)

    ```bash
    caffe train \
        -solver models/finetune_flickr_style/solver.prototxt \
        -weights bvlc_reference_caffenet.caffemodel
    ```

    ```python
    pretrained_net = caffe.Net( "net.prototxt", "net.caffemodel" )
    solver = caffe.SGDSolver("solver.prototxt")
    solver.net.copy_from(pretrained_net)
    solver.solve()
    ```

    transferability, n.〔物〕可转换性；可转移性, of features.

作死的优酷 -<

:   >   **提示：因优酷官方禁止下载，目前已停止了优酷视频解析支持，请理解，您可以优
    >   先从其他视频网站找资源下载。**

    话说我已经觉得优酷被 bilibili 完虐了。优酷给人一种要过气的感觉。

[torrvision/crfasrnn: This repository contains the source code for the semantic image segmentation method described in the ICCV 2015 paper: Conditional Random Fields as Recurrent Neural Networks. http://crfasrnn.torr.vision/](https://github.com/torrvision/crfasrnn)

ANKI 和 AnkiApp 是啥关系？ -<

:   <http://web.ankiapp.com>

    王说后者是盗版（idea？）。

[保护自己的耳朵，警惕听力下降，从现在做起！ - 音乐中的科学 - 知乎专栏](https://zhuanlan.zhihu.com/p/20083476) -<

:   听力下降相对于视力下降，更容易被大家所忽视。一个人近视看不清了，很快就会发
    现并及时佩戴眼镜矫正；但是等到发现自己听不清的时候，已经到了很严重的程度了。

    看来听歌时音量还是要调低点。不过，我还是觉得以后的医学可以很好的解决这个问
    题，不应该为此而杞人忧天……我这是在找借口吗？

[如何看待美国 2016 年 6 月 12 日发生的奥兰多酒吧恐怖袭击事件？ - 知乎](https://www.zhihu.com/question/47373984) -<

:   不愿意透露姓名的 Mohammed Alfareed 再次重申，他们沙特人和那些人（指西亚各个
    斯坦和阿富汗之类的国家）不一样，他们更虔诚更理智，他们喜欢美国。我觉得他说
    的是真心话，因为沙特政府包了学费，他们在学校能混多久是多久，绝不毕业，日子
    不要太爽，才舍不得搞这种活动。

    就我个人而言，这次事件体现了一个之前不太被关注的事情，极端主义会让有自杀倾
    向的人把自杀行为神圣化和扩大化。比如这次的袭击者，如果真的像媒体报道的存在
    认知冲突（信仰和潜在 gay 向），那在极端主义泛滥前也许同样会自杀，但是并不会
    作出这种举动。宗教极端主义是会夸大人内心的献身和牺牲情节的，更容易让人用极
    端方式解决认知问题。

    之前的加州枪击，也是因为袭击者的同事批评了他的信仰并不和平，而他的行为也证
    明了他的行为和观点存在认知冲突（认为该教和平 / 去杀人）。

    我们都知道，认知冲突导致抑郁和自杀倾向是一种并不罕见的情况，而这种情况就被
    极端主义从可能自杀事件变成袭击事件，既解决了宗教不允许自杀的问题，还有一份
    上天堂的希望。

    随着大家对 msl 的反感，很可能会有更多信徒以孤狼式袭击结束自己生命，以解决自
    己的内心冲突。我想这也是恐怖主义者的目的之一。

    ---

    普京并不邪恶，他完全是随性而为。 （ Putin is not evil, he is just Completely Winging It）

    [川普（Donald Trump）在知乎用户中的支持率有多少？你支持或反对他的原因是什么？ - 知乎](https://www.zhihu.com/question/41401558) -<

    :   这也是为什么我对瑞典的未来不乐观： 人民热衷于散播圣母心， 对眼前的问题视之不见，
        自己感动了自己， 就满足于此，不会深入思考。 法国人尚有觉醒的苗头，可是绝大多数
        瑞典人完全沉浸于自己救世主的快感，不愿睁开眼睛看看周围的变化。很多Facebook公众
        号， 充斥着人性，同情，帮助， 人权， 这样的字眼， 像是一场眼泪与感动的狂欢。

        瑞典政府支持难民的高层人士， 家都没有安在邻近难民区的地方，可见高层不傻。认识好
        些个瑞典人已经跑路了或者打算跑路的， 跑挪威芬兰的都有，也听见一些家长说不希望后
        代生活在不安全的环境， 希望移民美利坚。 还有一位大哥住在马尔默感觉深受其害，正
        好交了中国女友，准备跑到天朝。

    [如何看待 2015 年 11 月 13 日在法国巴黎发生的恐怖袭击事件？ - 知乎](https://www.zhihu.com/question/37472988)

    [受过良好教育的穆斯林女性对伊斯兰教是什么态度？ - 知乎](https://www.zhihu.com/question/28368217) -<

    :   我大学专业是历史学，而且修过两学期宗教学。然后尴尬的局面就来了：比起我
        家里那些这规矩那规矩，却从来没有研究过自己宗教的穆斯林亲戚来说，我这个
        咖啡乐反而认真看过的古兰经，了解过这个宗教的起源发展和变迁。

        在这种知识结构不对等的情况下，经常会面临家里的争吵，而且这种争吵通常是
        我引经据典，对方一脸懵逼，并以我根本不守规矩来全盘否认我的任何观点。简
        言之就是这样：

        -   “古兰经某某部分有极端迫害女性的描述”
        -   “还有脸看古兰经，你封斋过吗？”
        -   “……”
        -   “古兰经某某部分逻辑根本不通”
        -   “头巾不带，也不忌口，古兰经你根本看不懂！”
        -   “……”

        最可怕的是，我家里几个弟弟（表弟），还是小学生，QQ 空间里转发的图片经常
        是古尔邦节快乐、封斋时间表这种东西，我甚至还被比我小 10 岁的弟弟鄙视过：
        “你居然还去不清真的地方吃饭，你好意思吗！” 听到他说这种话，我唯一的感觉
        就是没救了。

        所以啊，我的经验就是，不要试图改变这些人的思维方式，你再懂再有理，最终
        可能连人家的常识都没有动摇，因为他们非黑即白的逻辑一直都是蛮荒的。尤其
        是女孩子，明明思维跳脱出来了，也极有可能被婚姻这件事拉回原点。（不过说
        实在的，大部分我认识的穆斯林姑娘虽说生活上已经很世俗化了，但是同族结婚
        这事比老爹老妈拥护的还要厉害。）

        唯一的出路，只有尽可能的逃离你的家庭圈甚至家族圈。

        在这个答案下面有很多人都是在匿名回答，就因为社会阻力实在太大了。

        那个学期之后我家里强行把我转回汉校，我对民汉合校的体验就只有这些了。

        回汉校之后，班上也有少民学生，他们有一个共同点，就是家里非富即贵，基本
        都在新疆少数民族经济政治地位的高层。考虑到我的高中是全市乃至南疆顶尖的
        学校，这种情况也很好理解，优质教学资源嘛。

        跟这些同学在思想观念层面的交流几乎没有任何障碍，相处很愉快。

        因为一个人家里既有一定经济基础，又有把孩子尤其是女儿送到最好的学校读书
        的理念，还有少数民族待人坦诚热情的优点，作为同学和朋友来说，完美得无可
        挑剔。除了内高班的学生之外，这些少民学生也都会选择民考汉，很多还填了省
        外的大学，挑两个我比较熟悉的讲讲，一男一女。

        ---

        阿訇见了她之后，先是以孝道教育她，说她这样会让父母很没有面子，在当地抬
        不起头来，因为当地宗教气氛很重，如果她嫁给汉族，会让当地人戳父母的脊梁
        骨，接着又说全世界有十六亿穆斯林，伊斯兰教有一千多年的历史，安拉是最爱
        人类的神，怎么能不信仰安拉。

        小姑娘说和男朋友恋爱很多年了，肯定不能随便分手。阿訇就说那个小伙子是没
        有信仰的，没信仰的人靠不住，有信仰的人才最可靠，你以后嫁过去，是他能把
        你汉化了，还是你能把他回族化了？你以后嫁给他，要嫁到河南去，河南那个地
        方，完全没有回族人。他不信仰伊斯兰教，你俩在一起，就永远是通奸。你这样
        欺骗父母，你他妈的还大学生呢，你畜生都不如，你这样连畜生都不如。

        ---

        看到这个问题就觉得难过。我不敢自称虔诚的穆斯林，因为我没有做过礼拜，也
        没有去朝克尔白这样远大的目标，我也不能自称受过良好教育，只是普通 211 本
        科在读。我对伊斯兰教的看法大多数受我父母影响。我爸爸是穆，妈妈是非穆，
        我爸从事核物理研究，很少回家，但是我家里的餐具都是两份，一份我和我妈平
        时用，另一份我爸回来用，换不了的锅什么的就用碱水煮，吃的都在专门的市场
        买，或者是去清真寺请师傅宰杀。平时我爸不在家的话我们也不会吃大肉螃蟹鸡
        杂什么的，也就这么习惯了。我爸在我妈和我面前也不会谈论宗教，我和我妈也
        不问，虽然有一点点小心和尴尬，但是也还好，我读古兰经时如果有问题问他他
        明显很高兴，我感觉他还是希望我信仰真主的，但是他克制住了不强求我，我真
        的很感谢他。所以在我心里一直对穆和非穆的区别很模糊，最多就像有人喜欢吃
        辣但有人不能吃一样，协调一下就可以了。我快二十岁了却只去过我爸工作的地
        方一次，在戈壁上很艰苦，他的房间里有做礼拜的垫子，桌子上也有古兰经，我
        觉得他是很虔诚的。在我很小还不懂事的时候我曾经问过我爸他是不是真的相信
        真主存在。我爸爸的回答是，我相信科学。可能是因为他的工作是物理研究，是
        纯粹唯物的内容，而他生来就是穆斯林，这样的回答或许只是无奈的折中，但是
        对我触动很大。我一直很想就这方面的问题和我爸好好聊一次，我想知道他在宗
        教与科学社会之间的看法，但是我不太敢。我目前和我爸爸保持一致观点，说得
        难听一些，我不是不相信真主，但是我更相信科学。

        ---

        谨希望在不远的将来，回答这个问题的所有妹子都再不需要匿名 ···

        虔诚的偷邻居电动车的穆斯林，虔诚的欠债不还的穆斯林，虔诚的骗婚的穆斯林，
        虔诚的不赡养老人的穆斯林，虔诚的花假币的穆斯林，我都见过。这些人在你背
        不出古兰经的时候，高举穆斯林教义的大旗简直威风极了!

        所以穆斯林并不低级，**低级的是那些说一套做一套的人**。

    在以前的公司也接触过不少犹太人，出差也去过以色列，感觉完全不同这里就不
    赘述了，最不同的一点是你跟犹太人谈谈穆斯林无论你见解如何大家都是可以谈
    下去的，在现在公司要在穆斯林面前谈及犹太人还有优点马上大家翻脸，然后对
    你一脸鄙夷，有人还会说这么一个只会杀戮的国家。 我是很不明白， 欧洲天天
    喊人权平等， 哪个穆斯林犯事了谁要胆敢提一句那是个穆斯林干的立马被贴标签
    成“肮脏的种族主义者”， 然我遇到的穆斯林无不提及犹太人以色列立马咬牙切齿
    表示老子恨死这些人， 这时就不喊平等了吗。

    日常相处中我觉得这群阿拉伯穆斯林真完胜法国人，本来数量上他们就占优势，
    这些人又很会抱团，脸不红心不跳地搞双重标准，推卸责任骂人没底线，人要讲
    礼貌不小人是怎么能跟他们斗啊。最近发生的一些事让我觉得公司里的法国人才
    是弱势群体啊。 有的阿人背后使坏以后当面还要来用各种生殖器词骂人， 见过
    几个法国人的反应要么置之不理， 要么气得满脸通红说“你不要这么跟我讲话！
    这样太不尊重人了！”就愤愤离开， 下次阿人该干嘛还是接着干。 换成两个阿拉
    伯人对战大家上场就势均力敌对骂， 一会就上升到拍桌子干嘛了。

    另外我觉得其实生活中很多法国人也并没有那么左， 只是从小受自由平等这样的
    教育长大， 一旦提及平等和人权立马脑海中会有各种标准答案， 反之根本没脸
    说出来。 于是对难民或者伊斯兰问题， 绝大部分人的反应都是应该平等人权什
    么的， 说要接纳难民呀， 平等对待穆斯林呀如何。 可是你要问说那难民来了住
    你家隔壁行吗， 你搬去穆斯林社区住， 你家孩子以后都和穆斯林孩子一起上学
    行吗， 这些人中一大半马上沉默。 都是刀还没架到自己脖子上， 想法个顶个的
    伟光正。 看看巴黎周边房地产， 不是实在穷得没办法， 大部分法国人都不住穆
    斯林多的社区， 这些地区的房价对比周边也便宜得厉害。

    好几个朋友也是坚决支持左派， 觉得我们不能留给子孙后代一个闭塞的法国啊，
    要接纳难民啊， 要让孩子们从小就有平等的的意识啊云云。 后来这些人有的回
    南部了， 说巴黎还是环境太恶劣了， 闲杂人等太多； 有的开公司， 有人跟他
    推荐个办公室在巴黎北边阿人多点的区域， 丫的立马拒绝说那不行啊环境不好。

    不仅仅是 U.S must be vigilant and smart，全世界都需要 be vigilant and
    smart.

    2006 年非常老的数据显示，巴黎 20% 的人口是移民，更恐怖的是，20 岁以下年
    轻人中，41.3% 的父母至少有一名是移民，当然，绝大部分的移民你也知道是什
    么种族（不要忘了大把的黑叔叔）。作为北非首都，巴黎如今，真的是活在照片
    和 PS 中。

    -   警察调查发现是穆斯林
    -   穆斯林上脸书和推特表示 “我非常震惊和伤心，那些都是一小撮极端的人，
        大部分穆斯林都是温和的”
    -   欧洲民众在网上转发力挺，表示身边的穆斯林都很害怕伤心，纷纷贴出安慰
        身边的穆斯林的温馨故事
    -   欧洲名流明星们转发表示支持 “温和” 穆斯林，表示和恐怖主义势不两立，
        表示应该加大对难民的支持
    -   穆斯林上街行为艺术，竖个 “我不是恐怖分子” 的牌子求抱抱
    -   路人纷纷合影发上脸书和推特赞扬正能量
    -   穆斯林上街大游行，反对歧视，反对关闭边境，欧洲民众纷纷加入游行的队
        伍，痛斥政府自私
    -   事件一个月后，欧洲再次获得社会的大和谐

    比利时其实还算小问题，法国才是大问题。过 40 年的时间（对他们来说足够两
    代人了），他们就可能在法国超过人口的半数，一举把法国变成宗教国家。想想
    看，这可是一个有核武器的联合国安理会常任理事国！这样一个大国兵不血刃地
    落入他们手中，然后他们再用核武器威胁别的国家，世界会变成什么样子？到时
    法国或者陷入内战，或者出现原生法国人大量出逃，都是几百年来前所未见的壮
    观景象。

    [【读书笔记】America Alone：欧洲穆斯林化与西方的衰落 - 文章](http://weibo.com/p/1001603796644201140832) -<

    :   伊斯兰恐怖分子跟历史上的 "印第安恐怖分子" 截然不同，他们直接进入你
        文明城市的腹地，他们有现代化技术，甚至核武器。基地组织是跨国的，全
        球化的，连锁的，甚至外包的。面对这样的敌人，欧洲人有军事上的优势，
        但是没有这个意志去与之作战。

        作为一个强权，美国的真正问题在于自己的意志不够。美国一个常见体恤衫
        上写着 "These Colors Don't Run"，然而美国从战场逃跑已经不是一次两次
        了。从越南，从伊朗，从索马里。世界其它国家已经开始怀疑美国的力量。
        在越南，美军死了 5 万人才撤退，现在在中东可能只需要 5 千，也许下一
        次战争 50？或者根本不考虑？

        西方世界把制造业外包，等于把自己的孩子也外包，等于把未来外包了。即
        使是这样也维持不了多久，世界总人口也在减缓增涨，2050 年到顶。你想吸
        引高素质外来移民，但可能不久以后高素质人才会非常难找，因为中国人和
        印度人可能觉得何必非得去加拿大呢。

        多元化的目的是让不同文化的人，在同一套社会标准下过日子，而不是高级
        文明迁就低级文明行历史倒车。如果你允许食人族到欧洲生活，难道还会允
        许他们吃人吗？你们不允许中国人吃狗肉，却允许穆斯林逼迫饭店不出售猪
        肉，逼迫人们不批评穆斯林。

        欧洲人，你们在践踏你们自己引以为豪的自由民主精神，以后别说中国不自
        由，你们他妈也是不民主自由的！

    [微博视频](http://weibo.com/p/230444d2d0b9139da238ff0a1403afa5bc5a3d)

    “文明”与 “野蛮” 相遇，“文明”会选择用文明的方式对待 “野蛮”，“野蛮” 则会用野
    蛮的方式对待 “文明”，由于文明了太久，“文明” 已经渐渐失去了区分野蛮与文明的
    能力，会下意识地把 “野蛮” 看作是一种不同于自己的 “文明”，或想与之共处，谓之
    “多元文明”或想对其加以归化，将其融入文明，这无疑是文明的、人道的、和平的手
    段，并不应该指责。

    但遗憾的是，“野蛮”根本就不愿与 “文明” 共处，真正的 “野蛮” 也决不愿融入 “文
    明”，“野蛮” 只给 “文明” 两个选择——被消灭，或者退化为“野蛮”。最终的结果——只
    剩下一片荒芜的“野蛮”。

    “文明” 的悲剧在于，它不知道，“野蛮” 终究难脱其野蛮之本性，决不能用文明的方
    式去对待，对待 “野蛮”，只能用野蛮的方式予以消灭。事实上，我们所说的 “文明”，
    就是在不断消灭野蛮的过程中成长起来的。

    ---

    话说，我觉得有些东西是侵略性的，比如“吵闹”相对于“安静”，“黑”相对于“白”，他们可不是
    二进制里的“0”和“1”。

    ---

    现在的西方诸 “文明” 好像并不懂这个道理，亦或是懂装不懂。

    如此下去，曾经傲慢的基督子民们，终将会被野蛮撕碎，教堂的十字架，列王的冠冕，
    先贤的骨骸，都将丧于烈火。看看伦敦、巴黎、柏林…… 欧罗巴的心脏们，将会一个接
    一个地衰竭，不是亡于外部的猛击，而是亡于内部的毒血。

    欧罗巴的丧钟已经敲响。

    |   “穆斯林们希望为伊斯兰开脱，其实伊斯兰就是穆斯林的所作所为，以及他们对经文的
    |   演绎。多数穆斯林采取一种相对安全 的立场，即古兰经的某些内容已经失效，但对真
    |   正的穆斯林来说，这就已经是一种叛教的举动。”
    |
    |                                               ——海克尔

    莫名其妙，打击个恐怖分子，干了件好事，回头就被嘲讽个专制国家。照你这个说法，
    民主国家就必须显示出打击恐怖分子不力？

    执法者要执法，领导要维稳。

    错了，当地政府和警察知道了很长一段时间了，但是不想被 labelled as so called
    "Racist"。因此没有发言，从某总意义上来说，英国人民失去了 Freedom of Speech。

    我个人感觉吧，其实各国搞绥靖的领导都不傻，之所以公开场合都要宠着穆斯林，是
    因为现在穆斯林实际上是个挑战全球的状态，暂时还没有一个明确的指向攻击目标，
    所以美国惹一惹，欧洲惹一惹，中国也惹一惹，王八拳罢了，疼但是不伤。如果谁先
    跳出来，摆出一副和穆斯林势不两立的右翼范儿拉仇恨，反而容易立刻成为穆斯林的
    集火对象，此时，其他国家并不会和你同仇敌忾，反而会想尽一切办法祸水东引，好
    让自己隔岸观火。

    相对来说，穆斯林是抱团的，而穆斯林之外的世界却无比的分裂。传统上可以搞圣战
    来团结，可问题是十字军都会去屠了君士坦丁堡啊，难道你指望欧洲俄国美国中国这
    些明面上和气生财暗地里水火不相容的团结起来。。。"

[Course on CUDA Programming](http://people.maths.ox.ac.uk/gilesm/cuda/)

[【David Silver 强化学习公开课之一】强化学习入门 - 陈汝丹](http://chenrudan.github.io/blog/2016/06/06/reinforcementlearninglesssion1.html)

[【深度神经网络压缩】Deep Compression （ICLR2016 Best Paper） - 仙道菜 - blog - 博客频道 - CSDN.NET](http://blog.csdn.net/cyh_24/article/details/51708469)

[【干货】基于 Tensorflow 实现的论文列表](http://mp.weixin.qq.com/s?__biz=MzA4NDEyMzc2Mw==&mid=2649675797&idx=2&sn=379763bb8b1278449ad1714a7e299992&scene=0#wechat_redirect)

[技术文章索引 | 小土刀](http://wdxtub.com/about/)

[jtoy/awesome-tensorflow: TensorFlow - A curated list of dedicated resources http://tensorflow.org](https://github.com/jtoy/awesome-tensorflow/)

[卜居 - 博客频道 - CSDN.NET](http://blog.csdn.net/kkk584520)

[解构 TensorFlow, 学习 MXNet -- 新一代深度学习系统的核心思想 - 文章](http://weibo.com/p/1001603973036171750028)

[Sketch Simplification: Fully Convolutional Networks for Rough Sketch Cleanup](http://www.creativeai.net/posts/mTSh873ex4Gag5BEw/sketch-simplification-fully-convolutional-networks-for-rough)

:   [Edgar Simo-Serra - Sketch Simplification](http://hi.cs.waseda.ac.jp/~esimo/en/research/sketch/)

[圣母玛利亚（耶稣的生母）_百度百科](http://baike.baidu.com/link?url=dpTF8U87xUtKqiO2QNSLyWnES7XoCbG0NSEu6CZ5_tfHnLItY27TaABiARzcz0BhPJGigTDCarDnyvktrybvCq-9CeteYOhZWKWlxQvZgKq) -<

:   圣母玛利亚, Blessed Virgin Mary

    以前的圣母，把自己的粮食分给穷人。

    现在的圣母婊，指挥别人把自己碗里的饭分给穷人。
    你要不分。 她就骂你 “你这个人怎么这么自私，真是世风日下，人心不古！”

    **不读书却又爱思考，智商低却又富有同情心，这两种人都是灾难。**

这特么翻译错了！（好像是……机器翻译） -<

:   -   “It is not as wrong raping a Swedish girl as raping an Arab girl,” says Hamid.
    -   “强奸一个瑞典女孩就跟强奸一个阿人女孩一样，这没有错误,”Hamid 说。

    真是恶心人。不过符合人性，一个人从一开始不把别人放在同等的地位，就不会愿意
    用与人交往的原则和他人接触。以前的西方决斗双方可都得是贵族呢，一个贵族是不会
    和一个流浪汉公平决斗的。

老子：民不畏死，奈何以死惧之。

[看加菲猫学英语汇总目录](http://mp.weixin.qq.com/s?__biz=MzI4MzExMDU1Nw==&mid=502373927&idx=1&sn=0132758c1f37c6f357b7d019e6fc8198&scene=18#wechat_redirect)

[Long Island - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Long_Island)

一些词汇 -<

:   -   israel
    -   get crowefunding help
    -   belgium launches appel to find 'man in hat' bombing suspect
    -   kidnapped by Islamic State truce voilations
    -   Israeli minister romania
    -   the silicon valley of transylvania
    -   Conspiracy
    -   MathML is a failed web standard.
    -   more than 40% of student borrowers aren't making payments
    -   criminal prosecutions opyright infrigement
    -   clinton and sandrers tensions escalate
    -   mafia
    -   lesbian
    -   icelandicchef snake charmer
    -   tackle pests
    -   Nigerin militants offered olive branch
    -   Syria millitans abduct factor workers
    -   Mandela
    -   Seaw wars Rogue one
    -   lucky escape after lorry crash
    -   skidded out of control
    -   parliament bans payment for sex
    -   Brussels airport attack
    -   panama papers
    -   ukranine
    -   afghan asylum
    -   Iraq introverted
    -   blackout
    -   thwart
    -   hoverboard
    -   affidavit
    -   bribery
    -   bug bounty programme
    -   optimize industrial structure
    -   overcapacity
    -   portfolio
    -   migrant workers
    -   urban/pensions
    -   interstellar
    -   per capita
    -   harassings calls
    -   per puple expenditure
    -   diesel

一些 Linux 命令行 -<

:   ```bash
    man ascii
    man unicode
    man latin1

    $ echo -ne "nice好" | wc -c
    7
    $ echo -ne "nice好" | wc -m
    5
    ```

    uniq, cut, join, sort

    :   ```bash
        ➜  notes git:(master) ✗ cut -b1,3 <(echo -en "one\ntwo\nthree")
        oe
        to
        tr

        ➜  notes git:(master) ✗ cut -d, -f3,1 <(echo -en "1, mon, good\n2, tue, bad")
        1, good
        2, bad


        ➜  notes git:(master) ✗ join -j1 <(echo -en "1, mon, good\n2, tue, bad") <(echo -en "1, 周一, good\n2, 周二, bad")
        1, mon, good 周一, good
        2, tue, bad 周二, bad

        ➜  notes git:(master) ✗ join -j3 <(echo -en "1, mon, good\n2, tue, bad") <(echo -en "1, 周一, good\n2, 周二, bad")
        good 1, mon, 1, 周一,
        bad 2, tue, 2, 周二,

        ➜  notes git:(master) ✗ join -11 -21 <(echo -en "1, mon, good\n2, tue, bad") <(echo -en "1, 周一, good\n2, 周二, bad")
        1, mon, good 周一, good
        2, tue, bad 周二, bad
        ```

    ```bash
    perl -pi.back -e 's/old/new/g' file

    chattr +i file # not deletable
    ```

C++ 的 include 为什么不直接就把 include path 和 link 的东西全弄齐全？一个“历史地”回答 -<

:   [QT5 中的 .pro 文件中为何要加入 QT += widgets，而不能在包头文件的时候就包一个 widgets/QApplication呢？ - Linux - 知乎](http://www.zhihu.com/question/27253528)

    :   在 pro 里 写 qt+=widgets 表示引入 QtWidget 这个 module，qmake 会在帮你生成
        makefile 的时候，设置好 include path 和 lib path，在 link 时候设置好 libs。
        而仅在源代码里 `include <QApplication>`{.cpp} 仅是引入声明，但是没有 lib，
        所以链接时会出错。

        当然，我们可以批评 C++ 这种源自上世纪 70 年代的头文件和 lib 分离的设计是过时的不
        合理的，现代语言基本都采用 package 管理，用 import 解决了。但是我们既然还在用
        C++，就要接受这种设计，把它搞明白。另外你说在网上找不到资料，我大胆猜测你是
        用 baidu 搜索的，因为用 google 搜索，这类资料是很多的，比如 [The compiler,
        assembler, linker, loader and process address space tutorial - hacking the
        process of building programs using C language: notes and
        illustrations](http://www.tenouk.com/ModuleW.html) 图文并茂地讲述了编译
        器链接器和加载器的工作原理。

        作者：姚冬

萨拉丁 -<

:   是一个穆斯林骑士。挺牛逼的。

    -   [如何评价萨拉丁？ - 历史 - 知乎](http://www.zhihu.com/question/24670166)
    -   [萨拉丁（埃及阿尤布王朝开国君主）_百度百科](http://baike.baidu.com/link?url=yaY1E6YOtdQyCdyfHR7mPkSgkoxl68v7zFTjGBdPb4raVcsr57C-5mIM4UklzG9HGHbk-PJ7kmEFdrceYoxJAbZj1fMBDVQMJ94RYyPMUgK)
    -   [baike.baidu.com/view/122444.htm](http://baike.baidu.com/view/122444.htm)
    -   [宗教疯狂年代的理想主义―――评《天国王朝》 (天国王朝 影评)](https://movie.douban.com/review/1039586/)
    -   [谁谋杀了《天国王朝》？ (天国王朝 影评)](https://movie.douban.com/review/1148037/)

vcvars32 是在干嘛？ -<

:   `vcvars32` calls `C:\Program Files\Microsoft Visual Studio 8\Common7\Tools\vsvars32.bat`
    which **sets up the required environment** for compiling and linking.  The
    environment variables are:

    -   `INCLUDE`
    -   `LIB`
    -   `PATH`

    The compiler looks for header files in the `INCLUDE` path during compile, and
    libraries are fetched from the `LIB` path during link.

    refs and see also

    -   [c++ - Command line compile using cl.exe? - Stack Overflow](http://stackoverflow.com/questions/7865432/command-line-compile-using-cl-exe)
    -   [c++ - fatal error C1034: windows.h: no include path set - Stack Overflow](http://stackoverflow.com/questions/931652/fatal-error-c1034-windows-h-no-include-path-set)
    -   [Walkthrough: Compiling a C Program on the Command Line](https://msdn.microsoft.com/en-us/library/bb384838.aspx)
    -   [Setting the Path and Environment Variables for Command-Line Builds](https://msdn.microsoft.com/en-us/library/f2ccy3wt.aspx)

pandoc 下载链接 -<

:   [http://doi-2014.qiniudn.com/](http://doi-2014.qiniudn.com/)

ARC 是什么？封包？反射？ -<

:   ARC 是 automatic reference counting（自动引用计数），
    由此可见，ARC 会让开发者减少了手动内存操作的逻辑，而其因为是在编译期的处理，
    并不会影响运行时的性能。

    -   在对象被创建时 retain count +1，在对象被 release 时 retain count -1. 当 retain count 为 0 时，销毁对象。
    -   程序中加入 autoreleasepool 的对象会由系统自动加上 autorelease 方法，如果该对象引用计数为 0，则销毁。

    那么 ARC 是为了解决什么问题诞生的呢？这个得追溯到 MRC 手动内存管理时代说起。

    MRC 下内存管理的缺点：

    1.  当我们要释放一个堆内存时，首先要确定指向这个堆空间的指针都被 release 了。
        （避免提前释放）
    2.  释放指针指向的堆空间，首先要确定哪些指针指向同一个堆，这些指针只能释放
        一次。（MRC 下即谁创建，谁释放，避免重复释放）
    3.  模块化操作时，对象可能被多个模块创建和使用，不能确定最后由谁去释放。
    4.  多线程操作时，不确定哪个线程最后使用完毕

    refs and see also

    -   [Automatic Reference Counting - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Automatic_Reference_Counting)
    -   [知乎上的一个怎么面试iOS工程师的问题 - 寒流的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/hanangellove/article/details/45033453)
    -   [如何面试 iOS 工程师？ - 知乎](https://www.zhihu.com/question/19604641)

    ---

    autoboxing（封包）是面向对象里一个重要概念？……

    Java 5 开始引入了 autoboxing 和 auto-unboxing 机制，方便了基本类型和其对应
    的 wrapper 类型的转换。比如我们可以直接把一个基本类型的值赋给其 wrapper 类
    型，反之亦然；可以把一个基本类型直接放入容器里，封装的过程由编译器来完成；
    调用方法的时候可以直接匹配参数 autoboxing 和 auto-unboxing 之后的版本。

    In computer science, an object type (a.k.a. wrapping object) is a datatype
    which is used in object-oriented programming to wrap a non-object type to
    make it look like a dynamic object.

    Some object-oriented programming languages make a distinction between
    reference and value types, often referred to as objects and non-objects on
    platforms where complex value types don't exist, for reasons such as
    runtime efficiency and syntax or semantic issues. For example, Java has
    primitive wrapper classes corresponding to each primitive type: Integer and
    int, Character and char, Float and float, etc. Languages like C++ have
    little or no notion of reference type; thus, the use of object type is of
    little interest.

    ```java
    // auto boxing
    Integer i = new Integer(9);
    Integer i = 9; // error in versions prior to 5.0!

    // unboxing
    Integer k = new Integer(4);
    int l = k.intValue(); // always OK
    int m = k;            // would have been an error, but okay now - equivalent to previous line
    ```

    refs and see also

    -   [Object type (object-oriented programming) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Object_type_(object-oriented_programming))

    ---

    In computer science, reflection is the ability of a computer program to
    examine, introspect, and modify its own structure and behavior at
    runtime.

    -   javascript -<

        :   ```javascript
            // Without reflection
            new Foo().hello()

            // With reflection

            // assuming that Foo resides in this
            new this['Foo']()['hello']()

            // or without assumption
            new (eval('Foo'))()['hello']()

            // or simply
            eval('new Foo().hello()')

            // Using ECMAScript 2015's new Reflect class:
            Reflect.construct(Foo, [])['hello']()
            ```

    -   java -<

        :   ```java
            // without reflection
            Foo foo = new Foo();
            foo.hello();

            // with reflection
            Object foo = Class.forName("complete.classpath.and.Foo").newInstance();
            // Alternatively: Object foo = Foo.class.newInstance();
            Method m = foo.getClass().getDeclaredMethod("hello", new Class<?>[0]);
            m.invoke(foo);
            ```

    -   perl -<

        :   ```perl
            # without reflection
            my $foo = Foo->new;
            $foo->hello;

            # or
            Foo->new->hello;

            # with reflection
            my $class = "Foo"
            my $constructor = "new";
            my $method = "hello";

            my $f = $class->$constructor;
            $f->$method;

            # or
            $class->$constructor->$method;

            # with eval
            eval "new Foo->hello;";
            ```

    -   python -<

        :   ```python
            # without reflection
            obj = Foo()
            obj.hello()

            # with reflection
            class_name = "Foo"
            method = "hello"
            obj = globals()[class_name]()
            getattr(obj, method)()

            # with eval
            eval("Foo().hello()")
            ```

    反射机制: 所谓的反射机制就是 java 语言在运行时拥有一项自观的能力。通过这种能力可以彻底的了解自身的情况为下一步的动作做准备。

    Java 的反射机制的实现要借助于 4 个类：class，Constructor，Field，Method;其
    中 class 代表的时类对象，Constructor－类的构造器对象，Field－类的属性对象，
    Method－类的方法对象。通过这四个对象我们可以粗略的看到一个类的各个组成部分。

    Java 反射的作用：

    -   在 Java 运行时环境中，对于任意一个类，可以知道这个类有哪些属性和方法。
    -   对于任意一个对象，可以调用它的任意一个方法。
    -   这种动态获取类的信息以及动态调用对象的方法的功能来自于 Java 语言的反射（Reflection）机制。

    Java 反射机制主要提供了以下功能

    -   在运行时判断任意一个对象所属的类。
    -   在运行时构造任意一个类的对象。
    -   在运行时判断任意一个类所具有的成员变量和方法。
    -   在运行时调用任意一个对象的方法

    至于 C++？

    :   这个问题是，C++ 为什么不支持更多的 RTTI（Run-Time Type Information，或
        Run-time type identification）特性？C++98 对 RTTI 的支持是相当有限的，基本
        上只有 typeid 和 dynamic_cast 这两个 operator。为什么不象 Java/C# 那样，增加对
        reflection 和其它特性支持？

        回答是（不是 Bjarne 的原文，是我的理解），C++ 是一门面向系统编程的语言，也
        许这样说不合适，那么，它是一门支持系统编程，实际上也被广泛地应用于系统
        编程的语言。C++ 程序员往往要尽可能地直接和操作系统甚至硬件打交道。这个定
        位决定了 C++ 只需要最小限度的 runtime，同样地，只需要最小限度的 RTTI 支持。
        一个庞大的 runtime 会在性能和可移植性方面付出很大的成本，这是和 C++ 的宗旨
        相违背的。另一方面，C++ 的风格是尽可能通过库来实现功能，而在语法和编译器
        标准上非常谨慎。C++ 不喜欢编译器魔法。

        当然，RTTI 的一些特性是很难仅仅通过库来实现的。Bjarne 并不反对 C++ 的具体实
        现扩充 RTTI 特性。例如，Borland C++ Builder 和 C++/CLI 都大幅度地增强了 RTTI
        支持，以支持 VCL/.NET framework。代价是移植性的丧失。

        ---

        编译期的 static reflection 目前已有提案，C++17 当然是没戏了，不过 20 也
        许有希望。运行期的 reflection 可能不太合 C++ 的口味。

        Qt 确实有相关的内容，我以前也看过：[QGenericArgument Class | Qt Core 5.7](http://doc.qt.io/qt-5/qgenericargument.html)：

        ```cpp
        bool QMetaObject::invokeMethod( QObject *obj
                                      , const char *member
                                      , Qt::ConnectionType type
                                      , QGenericReturnArgument ret
                                      , QGenericArgument val0 = QGenericArgument( Q_NULLPTR )
                                      , QGenericArgument val1 = QGenericArgument()
                                      , QGenericArgument val2 = QGenericArgument()
                                      , QGenericArgument val3 = QGenericArgument()
                                      , QGenericArgument val4 = QGenericArgument()
                                      , QGenericArgument val5 = QGenericArgument()
                                      , QGenericArgument val6 = QGenericArgument()
                                      , QGenericArgument val7 = QGenericArgument()
                                      , QGenericArgument val8 = QGenericArgument()
                                      , QGenericArgument val9 = QGenericArgument() )
        ```

    refs and see also

    -   [Reflection (computer programming) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Reflection_(computer_programming))
    -   [学习 java 应该如何理解反射？ - 知乎](https://www.zhihu.com/question/24304289)
    -   [C/C++有没有类似能实现反射、内省和代理之类的技术？ - 知乎](https://www.zhihu.com/question/30608733)

一些 Linux 命令行 -<

:   ```bash
    $ type ls
    ls is an alias for ls --color=tty
    $ type type
    type is a shell builtin
    $ type cp
    cp is /bin/cp

    $ which cd
    cd: shell built-in command
    $ which ls
    ls: aliased to ls --color=tty
    $ which bcp
    /usr/bin/bcp

    $ whatis
    whatis what?
    $ whatis apropos
    apropos (1)          - search the manual page names and descriptions
    $ apropos whatis
    whatis (1)           - display one-line manual page descriptions

    $ echo *
    pandoc-1.17.0.2-1-amd64.deb Scikit-learn-docs scikit-learn-doc.tar.xz
    $ echo .*
    .Rhistory
    $ echo [[:upper:]]*
    Scikit-learn-docs
    ```

    ```
    man readline
    echo A{B{1,2},C{,3,4}}
    printenv

    $ ls -lh $(which cp)
    -rwxr-xr-x 1 root root 148K 11月  3  2014 /bin/cp

    clear

    history
    ```

    -   C-x C-e -> editor
    -   C-y -> paste
    -   M-? -> possible completions
    -   `!!`, repeat last command
    -   `!string`, expand match begin
    -   `!?string`, expand match string
    -   `!2`, second in history
    -   `!-2`, second in history reverse
    -   `> foo.txt`, 在命令行键入一写内容，可以不能随时用 C-x, C-e 打开 $EDITOR 编辑
    -   `mask: 0002`，是 mask 掉 write 权限，read 4，write 2，exe 1
    -   `locate`, `updatedb`
    -   find
    -   xargs
    -   useradd, userdel, adduser
    -   jobs
    -   fg %1
    -   set shell options
    -   export
    -   ssh
    -   sftp
    -   find
        +   `-and`
        +   `-or`
        +   `-not`
        +   `-type f`, `-type d`
        +   `-size +1M`
        +   `-perms 0700`

        ```bash
        find ~ \( -type f -not -perms 0600 \) -or \( -type d -not -perms 0700 \)

        find ~ -type f -name 'foo*' -exec ls -l '{}' +      # + 批处理，换成 ; 则为一个个处理

        find ... -print  | xargs ls -l                      # 换行分隔
        find ... -print0 | xargs -null ls -l                # null 分隔
        ```

        预定义行为，`-print`（如果没有定义 actions 的话）；`-ls`，`-delete`，`-quit`。

        `-exe cmd {}`，`-ok cmd {}`

    gzip

    -   gzip file -> file.gz
    -   gunzip file.gz -> file，或者用 gzip -d file.gz
    -   gzip -tv file.gz，测试有文件有没有错误，t for test
    -   ls files | gzip > foo.gz
    -   zcat, zless
    -   bzip2
    -   `tar     cf      out.tar     indir`{.bash}
    -   `tar     cjf     out.tar.gz  indir`{.bash}
    -   `fold -w 80 -s ...`
    -   `fmt -w 80`
    -   named pipe: `mkfifo pipe1; ls > pipe1; cat < pipe1`

[在知乎上，为什么 INTP 型的人特别喜欢在自己的签名里加 INTP 这一标签？ - 徐湘楠的回答 - 知乎](https://www.zhihu.com/question/21304858/answer/80155966) -<

:   因为真正的 INTP 不找女朋友。

    注意百度百科的这段话解释得十分委婉：

    >   请注意：作为一个男性学者型，也许在评估一段感情，并且做出情感的决定时会有困难。
    >
    >   结果是你也许会被外表夺目、看似感性的女人所着迷，比如说表演者型 (ESFP) 或是
    >   记者型 (ENFP）。
    >
    >   虽然这些具有吸引力的女人在一开始时看起来，似乎令人觉得无法抗拒，但在长久
    >   的关系中，你会觉得她们独特的行为、不负责任的个性会使你发疯。

    我来解释一下这段话的逻辑：

    INTP 的男性只会对 ESFP 和 ENFP 的女性感兴趣（然而很快就没兴趣了）——看到没有，这
    段话的实际意思就是……男性 INTP 不喜欢女人……

    所以如果一个男性在签名里写自己是 INTP，他有可能是在表达……你们懂的吧……

    注意了，如果有一些自称 INTP 看到上面那句，惊道“天哪，原来写上 INTP 自己就找
    不到女朋友了”，然后急急地把 INTP 擦掉……那他有可能不是 INTP……如我上文所说，
    哪个 INTP 男会因为找不到妹子就否认自己 INTP 的身份啊……

    别的就没什么好说了，反正我也考不上 THU、PKU、MIT……

    （虽然分析得不很合理……但好像一语道出天机……）

    其他的一些观点

    :   的确很多人一边如厕一边刷知乎。

        INTP：

        I Need Toilet Paper.

        INTP 生存指南：

        1. 不要寻找同类 2. 伪装成正常人 3.不要伤害正常人

        这不是我们的时代。

        认真活一下，然后死掉。

        就这样吧。

        早期关注我的人应该知道，过去在我的签名档上是有 INTJ 的字样的，后来之所
        以把它去掉了，是因为 I 和 J 不太稳定，但是 NT 还是牢牢封死的。

        私以为，喜欢把 MBTI 挂在签名档并不是 INTP 所特有的，事实上，只要是 NT
        型性格的人，就会有很高的可能乐于展现自己的测试结果，这是因为:

        第一，在四大类性格（NT 型概念主义者、SP 型经验主义者、NF 型理想主义者、SJ
        型传统主义者）中，NT 型性格的人更相信这样的测试，因为喜欢将事物分类正是
        他们的性格特点之一，虽然 MBTI 的稳定性不如大五，但比大五更容易辨识，所以
        深受概念主义者喜爱;

        第二，四大类性格中，NT 型的“舒适社交圈”相对来说是最小的：他们通常和同为
        NT 的人社交时才会感到最为舒适，而这类人又是很少的。挂出自己的结果便于快
        速寻找同类，那自然是极好的。( S 型的人对他们来说简直在另一个次元，而 NF 型
        理想主义者虽然可能会对他们有很高的吸引力，但深入接触后，往往会发现两者
        之间有不可调和的矛盾。)

        P.S. 对于我这样的 INTJ 来说，和 ENT 型人格容易交往但行事风格差异较大，
        和INTJ 惺惺相惜却也容易针锋相对，所以最佳的伴侣也正是 INTP 了 ^_^

        性格测试和智商量表顶多就是个相关吧。。

        虽然有越内向的人智商越高的说法，还有智商的各种相关因素的最近研究结果。

        但是 INTP 的人都很孤独又自恋有木有。。

        INTP 的人想要的最高赞同就是你和别人不同你是精英有木有。。

        但是 INTP 相看不顺眼啊。。看到别人说自己是 INTP 立马就有种“你也能是 INTP?”的
        受侮辱感有木有。。

        但是 INTP 的自恋程度往往会掩盖掉换位思考带来的情绪的影响。。

        所以虽然我是 INTP 但绝对不会到处宣扬了。。

        因为宣扬自己是 INTP 的内心活动就是找到同类啊。。

        可是这样反而会被同类仇视啊。。

        至于其他类型的人，INTP 的优越感你们不懂。。。。

        refs and see also

          - [如何搞定一个性格类型是 INTP 的男生？ - 知乎](https://www.zhihu.com/question/21006234)

原来自己 about 页面的一些说明，我觉得没必要在哪里多费口舌 -<

:   注

      - 很多摘抄并没有用引用符，计划 tag 功能弄好了再把文章标记一下作为申明。
      - Anyway，CSS 和功能还要慢慢打磨，我自己先用着吧～
      - 网站托管在「七牛云存储」，但在 coding.net 上也有备份。前者可能访问更快，
        后者更新比较及时。具体见：<https://github.com/district10/blog#intro>。
      - 如果你觉得离线看起来更方便，可以到
        <https://coding.net/u/dvorak4tzx/p/dvorak4tzx/git/archive/coding-pages> 下
        载一个打包。但不包括图片，以后可能会写一个脚本打包一个含图片的。
      - 所有浏览器都有一个 bug，即点击 `#this-page-ref-link` 链接的时候，如果跳转到
        了页尾，可能链接不能置顶。处女座不能容忍其中的愚蠢。所以每个页面最后加了一张大图片。
      - 关于目录结构的扁平化。一个文件夹下文件太多当然不适合查看，但是，如果都是从 index.html 进入，你会发现，
        每个文件都很有条理。
      - 为什么字体这么大？因为在显示器分辨率彪悍的今天，用小字体是愚蠢的。见 [/koans.html#字好看却难认](koans.html#字好看却难认)。

    ![Mathematics is the only truly universal language.](http://gnat.qiniudn.com/jodie-foster-math.png)
    ![Octocat: Adventure Cat](http://gnat-tang-shared-image.qiniudn.com/octocat/adventure-cat.png)
    ![Kimonotocat](http://gnat-tang-shared-image.qiniudn.com/octocat/kimonotocat.png)

Donald J Trump 大白话 -<

:   Before the dreams lift you into the clouds, make sure you've looked hard at
    the fact on the ground.

[GitHub - fujohnwang/wonderful-slides: My collection of wonderful slides/materials](https://github.com/fujohnwang/wonderful-slides)

[利器访谈 - 利器](http://liqi.io/creators/) -<

:   推荐一件生活利器给大家。

    -   钱。
    -   Surface Book！
    -   1T SSD！

    喜欢夜深人静时靠着床头工作。电脑放在小桌上，小桌架在膝盖上，旁边准备好水果。
    一般的高效率工作时间是半夜到凌晨 5 点，之后睡到 9 点左右起床。下午可能会补
    上 1 到 2 小时的睡眠。

场景、数字、逻辑 -<

:   场景就是因为我太胖我男朋友跟人走了，这就是场景，为什么用场景来宣传，因为场
    景是用户最感同身受的，数字都没有那么感同身受。数字是一个次感同身受的东西，
    逻辑是最不感同身受的东西。

    两匹马驼同样的东西，一匹马很健壮，驼起来很轻松，另一匹很瘦弱，驼起来很费力。
    瘦马希望壮马帮忙驼一些，被拒绝，后来累死了。然后主人把瘦马的东西也让壮马来
    驼，最后，壮马也累死了！所谓团队精神，就是不要只顾自己前行，必要时也要拉同
    事一把！

[pandoc 中文 pdf 转换攻略 - 一个架构士的思考与沉淀](http://afoo.me/posts/2013-07-10-how-to-transform-chinese-pdf-with-pandoc.html)

[芒格主义【转】 - 一个架构士的思考与沉淀](http://afoo.me/posts/2013-02-16-mungerism.html)

知乎用户的答案 -<

:   最简单的答案：什么时候人们预期到中国未来的经济将会停止增长，甚至开始下滑，房价就崩溃了。

    学历越高的人，越愿意为国而战（为了图表美观，上图的坐标轴最低值为 50），这个趋势
    十分稳定。本科生和研究生中愿意为国而战的比例甚至接近 85%。

    所以，一个国家的人们为国而战的比例，其实并没有那么多含义。一个国家的政府如果成
    天抗议和谴责，他的人民自然也会摩拳擦掌愿意为国而战。

    更关键的是，前面说的还是可以量化的东西，努力程度？性格特征？甚至，智商？这些不
    可观测的变量可能影响更大。举一个例子，科学家想知道上了“一本”大学对学生未来的工
    资有什么影响。上了一本和没上一本的大学生，显然不是随机分开的两个群体。当然也没
    法用控制变量的方法来消除“一本”之外的影响，因为肯定有一些不可观测的变量是你控制
    不了的。控制变量法至此完败。

    但科学家并没有束手无策，他们找到了 RD 方法。所谓 RD 方法，就是观察那些在一本线上下 2
    分的学生，看“上一本”和“没上一本”的学生的未来工资差异。这个想法的天才之处在于，
    高考的上下 5 分，实在是一件随机性非常大的事情。让这批学生重新考一次，不少学生的情
    况可能就要逆转。对于这 5 分区间内的学生来说，一条一本线，就像一个天然的分割线，将
    两组人随机分开了。

    第二个问题：无法消除的自选择性

    还是从“一本和工资”的故事开始讲。科学家们虽然能研究一本线上的学生和线下1分学生的
    工资差异，可却忘记了一个问题：可能有好些刚好越过一本线的学生，并不是因为他考上
    了一本，而是他老爹有一些手腕，买通了官员，将他儿子的分数改了。而且，又不好太张
    扬，于是，就改一个躺在一本线上的分数。所以，他们的工资差异，还有一部分来自那些
    躺在一本线上学生的“有手腕的老爹”。

    对于这一项研究来说，所谓的自选择，就是迁移。一些在淮河以北的居民可能发现，淮河
    以北空气太差，他还是搬到淮河以南吧。而另一些淮河以南的居民感到没有暖气太冷，于
    是他选择搬到淮河以北。于是，搬到淮河以南的人，更注重自身健康；搬到淮河以北的人，
    由于体弱而怕冷。如此，两岸居民的分布就出现了差异，其寿命差异，有一部分就来自这
    些不可观测的自选择效应。

[Annotable | Ultimate Annotation Tool](http://moke.com/annotable/)

[快速掌握一个语言最常用的50% - 孟岩 - 博客频道 - CSDN.NET](http://blog.csdn.net/myan/article/details/3144661){.featured .heart}

Qt 静态编译 -<

:   -   [QT 4.8 静态库编译方法 - 风行雪舞 - 博客园](http://www.cnblogs.com/elect-fans/archive/2012/03/24/2415737.html)
    -   [（原创）亲测VS2010纯静态编译QT4.8.0，实现VS2010编译调试Qt程序，QtCreator静态发布程序 - 风行雪舞 - 博客园](http://www.cnblogs.com/elect-fans/archive/2012/03/29/2422816.html)

    首先，去中科大镜像站下载 Qt4.8.6：[Index of /qtproject/archive/qt/4.8/4.8.6/](http://mirrors.ustc.edu.cn/qtproject/archive/qt/4.8/4.8.6/)，
    放到 C 盘根目录下的 Qt 文件夹下。

    <!--
    +   qt-creator-opensource-linux-x86_64-3.3.2.run
    +   qt-everywhere-opensource-src-4.8.6.zip
    +   qt-opensource-linux-x64-5.4.1.run
    +   qt-opensource-linux-x86-5.4.1.run
    +   qt-vs-addin-1.2.4-opensource.exe*
    -->

    首先 <kbd>Win</kbd>，输入“prompt x64”，打开【VS2015 x64 Native Tools Command Prompt】，切换到 C 盘 Qt 文件下（`c:`，`cd /Qt`），

    -   OpenSSL

        首先下载 nasm，[Index of
        /pub/nasm/releasebuilds/2.12.02/win64](http://www.nasm.us/pub/nasm/releasebuilds/2.12.02/win64/)，
        安装后把路径加到 %PATH%，保证 CMD 中能使用 `nasm`。

        然后下载 openssh 源码：[Releases · openssl/openssl ·
        GitHub](https://github.com/openssl/openssl/releases)。

        ```bash
        # cd openssh-src-dir, 确保 nasm 能使用
        perl Configure VC-WIN64A no-asm --prefix=C:\Qt\VS2015x64\openssl
        ms\do_win64a
        nmake -f ms\ntdll.mak
        nmake -f ms\ntdll.mak install
        ```

        see more at [district10/qt4-vs2015x64: Qt4 & Visual Studio 2015 (vc14).](https://github.com/district10/qt4-vs2015x64).
        vs2015 qt4 完整的 build，有 debug 和 release，108 MB，解压后 951 MB。把 <build-dir>\bin 添加到 %PATH% 前面（不是后面）就可以用了。

CMakeLists 里下载和解压 -<

:   [A CMakeLists that'll download and extract some dependencies](https://gist.github.com/g-pechorin/8245646)
    A CMakeLists that'll download and extract some dependencies

    ```cmake
    if( NOT EXISTS ${CMAKE_CURRENT_BINARY_DIR}/libpng-1.6.8 )
        if( NOT EXISTS ${CMAKE_CURRENT_BINARY_DIR}/libpng-1.6.8.tar.gz )
            file( DOWNLOAD http://url/libpng-1.6.8.tar.gz ${CMAKE_CURRENT_BINARY_DIR}/libpng-1.6.8.tar.gz
                  SHOW_PROGRESS EXPECTED_MD5 29b7065906e2551508a0d7eacd19174e )
        endif()
        execute_process( COMMAND ${CMAKE_COMMAND} -E tar xzf libpng-1.6.8.tar.gz )
    endif()
    ```

    CMakeLists 里的解压在 Windows 上有 bug，至少我没有成功过。命令行的可以：

    ```bash
    # include/* -> include.zip
    cmake -E tar cJ include.zip -- include

    # include.zip -> include/*
    cmake -E tar xJ include.zip
    ```

[SpaceSniffer download](http://www.uderzo.it/main_products/space_sniffer/download.html)

[你不一定知道但一定用得到的Windows使用技巧 - 简书](http://www.jianshu.com/p/1658c399d122){.heart} -<

:   -   【 Ctrl + Win + D 】：新建一个虚拟桌面
    -   【 Ctrl + Win + 左/右方向键】：切换虚拟桌面
    -   【 Ctrl + Win + F4 】：关闭当前虚拟桌面
    -   【 Ctrl + Shift + Enter 】：在搜索框输入软件名称，按下此快捷键可以以管理员身份运行程序
    -   【 Ctrl + Shift + T 】：在浏览器中快速恢复刚刚关闭的一个网页
    -   【 Shift + 右键 】：可快速选择复制文件路径，试了一下可以："C:\dev\GoogleChromePortable\GoogleChromePortable.exe"。

[2015 优秀文章 - C/C++ - SegmentFault](https://segmentfault.com/bookmark/1230000004250442){.featured .heart}

你猜这是啥？ -<

:   KJSJZNJS_WHU15S, CHOOLOTS

[owt5008137/client-debuger: 客户端集成开发工具](https://github.com/owt5008137/client-debuger)

[Linux 和 Windows PowerShell 常用工具/命令 记录 | I'm OWenT](https://www.owent.net/2011/08/linux-%e5%92%8c-windows-powershell-%e5%b8%b8%e7%94%a8%e5%b7%a5%e5%85%b7%e5%91%bd%e4%bb%a4-%e8%ae%b0%e5%bd%95.html) -<

:   关于程序运行

    -   PATH (可执行文件目录)
    -   LD_LIBRARY_PATH (C/C++库文件目录)
    -   /etc/ld.so.conf (C/C++ 库文件目录表)

    关于系统状况

    -   uptime: 系统 1 分钟、5 分钟和 15 分钟的系统平均负载
    -   free: 内存使用情况
    -   iostat: 磁盘 IO 使用情况
    -   pidstat: 查看进程状态
    -   ipcs: 查看共享内存、消息、信号量信息，如：ipcs -m 共享内存
    -   lsof: 查看被打开的文件（该指令可用于查找标记删除但未被真正删除的文件（会
        被标记为 deleted）, 详见 <http://www.ibm.com/developerworks/cn/aix/library/au-lsof.html>）

    一个例子了解蛋疼的字符串

    ```bash
    var="http://www.owent.net"
    echo ${var#*/}          # 删除var左边第一个*/后的内容       (/www.owent/net)
    echo ${var##*/}         # 删除var左边最后一个*/后的内容     (www.woent.net)
    echo ${var%/*}          # 删除var右边第一个/*后的内容       (http:/)
    echo ${var%%/*}         # 删除var右边最后一个/*后的内容     (http:)
    echo ${var:0:5}         # 保留var左边第一个字符起的5个字符  (http:)
    echo ${var:7}           # 截取var第7到结尾的字符串          (www.owent.net)
    echo ${var:0-5:3}       # 保留var右边第5个字符起的3个字符   (t.n)
    echo ${var:0-5}         # 截取var最后5个字符                (t.net)
    echo ${var/www/api}     # 把第一个www替换为api              (http://api.owent.net)
    echo ${var//e/f}        # 把所有www替换为api                (http://www.owfnt.nft)
    echo ${var/#http/https} # 把http前缀替换为https             (https://www.owent.net)
    echo ${var/%net/com}    # 把net后缀替换为com                (http://www.owent.com)
    ```

    关于网络

    -   MAC地址： `/sbin/ifconfig eth1 2> /dev/null | grep 'HWaddr' | awk '{print $5}'`{.bash}
    -   IP地址：`/sbin/ifconfig eth1 2> /dev/null | grep 'inet addr' | awk '{print $2}' | cut -d: -f2`{.bash}
    -   子网掩码：`/sbin/ifconfig eth1 2> /dev/null | grep 'Mask' | cut -d: -f4`{.bash}
    -   `/tmp/resolv.conf.auto 2> /dev/null | grep 'nameserver' | awk '{print $2}'`{.bash}
    -   系统运行时间：

        ```
        /bin/cat /proc/uptime 2> /dev/null |\
        awk -F. \
            '{run_days=$1 / 86400;'
                'run_hour=($1 % 86400)/3600;'
                'run_minute=($1 % 3600)/60;'
                'run_second=$1 % 60;'
                'printf("%d天%d时%d分%d秒",run_days,run_hour,run_minute,run_second)'
            '}'
        ```
    -   共发出数据包：`/sbin/ifconfig eth0 2> /dev/null | grep 'TX packets' | awk '{print $2}'|cut -d: -f2`{.bash}
    -   共接受数据包：`/sbin/ifconfig eth0 2> /dev/null | grep 'RX packets' | awk '{print $2}'|cut -d: -f2`{.bash}
    -   网络名称： `/etc/sysconfig/network`
    -   网卡： `/etc/sysconfig/network-scripts/*`
    -   网卡信息缓存: `/etc/udev/rules.d/70-persistent-net.rules`
    -   `/etc/hosts`: hosts文件
    -   `/etc/profile` : 登入后执行脚本

    使 Linux 脚本或者命令输出的结果不换行（在网页中应用较多）

    ```
    echo -e "`ifconfig eth0 2> /dev/null | grep 'inet addr' | awk '{print $2}' | cut -d: -f2`\c"
    ```

    ```bash
    dmesg (查看所有启动时检测到的硬件信息)
    cat /etc/sysconfig/hwconf
    mpstat
    lspci (显示外设信息, 如usb，网卡等信息)
    lsusb -v
    lscpu # cat /proc/cpuinfo
    sudo ethtool eth0
    lshw # hardware
    dmidecode # 全面的显示bios、cpu、内存等硬件信息：
    ```

[Dream big, Drive hard (评论: Hard Drive)](https://book.douban.com/review/2316115/) -<

:   在没读过这本书之前，我也从没有考虑过这些问题，和很多年轻人一样，我不屑于微软的
    一些行为，这种“成见”自然而然地最终转嫁到盖子叔叔身上，毫无疑问，他就是“万恶之
    源”?。但是在读《Hard Drive》的过程中，我就被他们的创业经历深深吸引住了，因为从
    他们身上，我看到了曾经在脑海中向往过的那种充满激情和梦想的生活，所不同的是，我
    们的理想在不停地抱怨现实不如人意、社会不公平、环境不够好、教育制度扼杀了我们的
    天才和创造力中渐渐被遗忘；而他们，没有任何怨言和借口地将理想一步一步变成了现实！

    其实最初我们都是一样的，年轻、精力充沛、喜欢幻想、毫无根据的自信、野心勃勃，但
    多年以后，我们在不断的抱怨中变得“很现实”，转而去追求各种各样眼前的利益，找一份
    工作、买车、买房，为年薪比别人高了两三万而沾沾自喜；而那些家伙，他们则把自己变
    成了这个星球上最富有的一群人。

    “**We always had big dreams.**” – Paul Allen P51

    每个人都有很多梦想，但是我们的梦想往往因为缺乏执行，大多成为了闲聊时的谈资
    或者自欺欺人的夸夸其谈而已。Bill 却不一样，他不光是要执行自己的想法，而且还
    要设法将执行的效率推到极致。他保持着从微软公司到机场花费时间最短的记录（也
    许是全西雅图的…），他总是驾驶着绿色的保时捷从一个地方飞驶到另一个地方（超速
    太多差点被吊销执照）。同样，对于他的下属，替他打工的经理和程序员们，他也通
    过持续不断的 push 把开发效率推到极致。正是这种持续不断的推动，让 Bill 或英
    明（比如采用鼠标和 GUI 界面）或愚蠢的想法（比如 Microsoft BoB）一个个地得以
    成为现实，同时也为他挣得了巨额的财富。如果理想和现实之间存在着难以逾越的鸿
    沟的话，那么“执行力”就是跨越这条鸿沟的桥梁。

    More than one unlucky programmer at Microsoft has received e-mail (from Gates)
    at 2:00 am. That began, “This is the stupidest piece of code ever written” P50

    努力做一个有坚定信念和伟大梦想，懂得选择，充满激情地执行自己的想法，不惧挑战、
    不找任何借口，永不满足的人，我相信，这些观点和《Hard Drive》这本书，将会影响我
    很多！

owent 的几篇博客 -<

:   [std和boost的function与bind实现剖析 | I'm OWenT](https://www.owent.net/2013/11/std%e5%92%8cboost%e7%9a%84function%e4%b8%8ebind%e5%ae%9e%e7%8e%b0%e5%89%96%e6%9e%90.html)

    [网络编程小结 | I'm OWenT](https://www.owent.net/2013/05/%e7%bd%91%e7%bb%9c%e7%bc%96%e7%a8%8b%e5%b0%8f%e7%bb%93.html)

    [试试Boost.Asio | I'm OWenT](https://www.owent.net/2013/05/%e8%af%95%e8%af%95boost-asio.html)

    [“C++的90个坑”-阅读笔记 | I'm OWenT](https://www.owent.net/2012/10/c%e7%9a%8490%e4%b8%aa%e5%9d%91-%e9%98%85%e8%af%bb%e7%ac%94%e8%ae%b0.html)

vczh 带师弟 -<

:   值得一提的是，我从大三开始指导一名基础几乎是零的、比我低两个年级的软件学院
    的一位学生学习编程。为了让对方在接受我为期 3 年的训练之后有扎实的 C++ 基础、
    熟练的单元测试编写水平以及能够靠直觉给出一些不算太差的设计，我回顾了许多关
    于 C++的内容，特别是给指针的几节课备课了好几天，并且每一天都要出一个作业。
    在这个过程中我深刻的感觉到，**如果要快速提高自己的编程水平的话，你必须总是去
    做一些你做得出来，但是难度大到只要再难一点点你就做不出来的事情**。再这么坚持
    好些年之后，肯定会进入高手的行列。因此我在安排作业的过程中，有意推迟了关于
    指针的内容。首先让对方接受变量和分支循环，然后要养成一个好的风格（譬如说不
    能老是用一个字母给变量命名之类），然后学会操作数组，接下来才是关于没有强制
    类型转换的指针的一些操作，并且在一个月之内做出一个带单元测试的字符串类。指
    针的重点是要对方深刻的理解，“指针本身就是一个指向位置的数字”这么一个概念。
    为此我特别设计（但没有实现）了一门只带有一个全局无限长数组的汇编语言来讲述
    指针背后一些复杂的概念。之后就是一些关于面向对象的知识、设计模式的知识、还
    有跟脚本引擎有关的一些东西。该学生的毕业设计是一个简单的动态语言的脚本引擎，
    并且该脚本引擎的实现正确地运行了我在上面模仿 Linq的一个列表处理函数库。这个
    实现闭包一层套一层，到处都在给一个物体添加删除函数，创建各种延迟执行的迭代
    器，很是能够考验一个脚本引擎的实现。对方毕业后被网易招去了，并且在待遇上给
    予了一些人文关怀。

    自己的编程历程不仅包括自己在业余时间内做的这些程序，而且也包括在微软实习和
    工作的过程。高中的时候就听说了华南理工大学有微软俱乐部的事情，再加上自己对
    微软也持有一定的向往，因此在入学之后，除了学院的学生会以外，我就一直在密切
    关注着微软俱乐部的招新，并且忽略其它所有社团。不过说实话在学生会和微软俱乐
    部的工作也纯属打酱油，没干过什么正事儿。大二的时候微软搜索技术中心（STC）来
    微软俱乐部收简历的时候，我在路上碰到了陈健老师，也就是之前提到的班主任，就
    跟她说了这个事情。后来由于对方说我年龄太小而作罢，因为其它人全部都是研究生。
    到了大三的时候，陈健老师就跟我提到她可以找老同学帮我投微软的实习简历，因此
    我于 2008 年 3 月份接到了微软上海的电话面试。电话面试有两次，第一次对方是一
    位 HR，第二次则是一位软件工程师。在第二次电话面试的过程中，我们聊了上面提到
    的 FreeScript，还针对一些数据结构和框架设计的问题进行了热情洋溢的讨论。没过
    几天，我就收到了面试通知，前往上海闵行区的紫竹数码信息港面试。那是我人生中
    的第一次面试。

[关于离开美国的决定 - 简书](http://www.jianshu.com/p/fc961b4ccf80) -<

:   美国人深深地为自己的文化感到自卑，所以一有机会就附庸风雅，显示自己跟欧洲的渊源
    关系。星巴克的咖啡中杯不叫“medium”，非要用个意大利词叫“grande”。从法语引进的词，
    非得要古板的按法语发音，漱喉咙一样，你按英语发音他们还指证你说这是法语~ 美国人
    互相之间的关怀，比起世界上很多其他国家都要差很多，特别是比欧洲国家要差非常多，
    甚至比日渐势利的中国都要差一些。中国社会的一些倒退作法，包括利益熏心，学术腐败，
    都是被美国传染而来的。

[出国留学，生活工作过的人回国的理由有哪些？ - 卫雪妖的回答 - 知乎](https://www.zhihu.com/question/21390105/answer/94755769) -<

:   我不是愤青，但是小学班主任的一句话让我久久不能忘怀“其实老师不能怪你们在大街
    上疯玩，人家城市里的孩子可以去博物馆、图书馆、少年宫，你们除了去大街上玩儿
    还能去哪呢？” 县城里的孩子是没有享受过这些设施的，所以我们很少有书本以外的
    知识，也大多没有高雅的爱好。临近高考的时候我才听说了高考移民这回事，才发现
    原来清华北大在北京的录取率比我们省高了三十倍左右，美其名曰北京的考生素质高。
    相较于得到全国最好的教育资源的北京学生，我们这些没去过博物馆图书馆还有少年
    宫的学生素质当然低了，说的好有道理，我竟然无言以对。（预见到此处可能有人会
    说我的素质就是低，所以补充一点，不是我骄傲炫耀。）我想，当以蹩脚的英语水平
    入学的我在一个世界 QS 排名前三十的大学和排名前十的专业以第一名的成绩毕业并
    且因为品学兼优被选做毕业生代表在毕业典礼演讲时，我证明了不是我们素质低，只
    不过是某些政策的制定者在为自己的后代铺路顺便堵住了其他人的路而已。（注：学
    校和专业排名以我毕业那年为准）。

    但是我当时觉得在美国呆了这么长时间，最能发挥我作用的是必须做一些跟中国有点
    关系的事情，不然我跟美国人比起来几乎可以说没有什么特长。

    refs and see also

    -   [我为什么回国 ---- 张朝阳 - 开心网转帖 - 开心网](http://www.kaixin001.com/repaste/1181031_1754318490.html)

[OpenPano: How to write a Panorama Stitcher | Yuxin's Blog](http://ppwwyyxx.com/2016/How-to-Write-a-Panorama-Stitcher/){.heart}

[Difference Between JIT and Interpreter | Difference Between | JIT vs Interpreter](http://www.differencebetween.net/technology/difference-between-jit-and-interpreter/)

[Vagrant 快速入门 - Jill Liang的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/jillliang/article/details/8251242)

[Nodesoft Folder Monitor](https://www.nodesoft.com/foldermonitor)

![](https://img3.doubanio.com/view/photo/photo/public/p626210155.jpg){align=right .w12}

[神即是爱 (大河恋 影评)](https://movie.douban.com/review/4968584/)

:   作为回忆者的诺曼亲眼见证了弟弟保罗的高超飞钓技术，见证了他的成长与叛逆，也
    见证了他的沉沦与沉迷。是的，俊美的保罗就是人间的金色艺术品，而作为他手足血
    脉的诺曼，却从未能真正理解那艺术背后的幽然暗影。

    然而我想，所有的观众都明白，他们都是好孩子。这个评价并不仅仅是由观众作出，
    也是影片中父亲的判断。他虽然如此教两个孩子钓鱼，但当两个孩子用不同的节奏钓
    来的鱼放在一起时，父亲笑着评价道：“都很好。”然后，他再从篓子里拿出自己钓上
    来的一条鳟鱼，缓缓地说：但是今天上帝还是比较偏爱我一点。两个孩子于是一脸的
    崇敬。

---

