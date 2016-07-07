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

以上是对英文没问题的同学，如果英文有问题怎么办呢？请先转化到没问题的状态。:smile:

```perl
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

`"★★★★★☆☆☆☆☆".substring(5 - rating, 10 - rating )`{.javascript} -<

:   I saw this code being written byAddison Phillips (Page on linkedin.com)
    when I was at Amazon. I'm not sure if he is the original author, but I
    loved it for its elegance.

在北京一家startup工作一年 混国外社区 混github 一年后直接remote给多家国外公司工作 收入直接x4-6倍

总之 我觉得自从 freelancing 之后，我可以尝试更多之前没时间 或者没有去尝试的东西，
我觉得生活不再只是程序代码，而其实你 coding 也不是只是和计算机去交流，因为你的代
码是给人看的，所以作为程序员，就别拿这个职业作为自己有交流障碍来做借口吧，多半
是社会舆论把你给定型了，其实你应该可以做得更好的，扯远了，最后再扯一下靠不靠谱
的问题：

[What No One Told You About Z-Index — Philip Walton](https://philipwalton.com/articles/what-no-one-told-you-about-z-index/)

[The Definitive Guide to Using Negative Margins – Smashing Magazine](https://www.smashingmagazine.com/2009/07/the-definitive-guide-to-using-negative-margins/) -<

:   ![](https://media-mediatemple.netdna-ssl.com/wp-content/uploads/images/css-negative-margins/margin-motion.gif)

[wufeifei/dict: linux命令行下翻译工具](https://github.com/wufeifei/dict) -<

:   ```bash
    wget https://raw.githubusercontent.com/wufeifei/dict/master/dict.py
    python2 dict.py test
    python2 dict.py 测试
    ```

    ```python
    @include <-=include/dict.py=
    ```

-   1to3 -<<

    one

    two

    three

-   three

    four +<<

    ```python
    printf('good')
    ```

    four

-   nice -<
    +   1
    +   2

[Shields.io: Quality metadata badges for open source projects](http://shields.io/) -<

:   弹出来的窗口倒是很赞。我的 notes 里也想有这个 feature。

[ImageMagick(CVE-2016-3714) 影响 / 利用 / 修复 / 检测](http://wufeifei.com/imagemagick/) -<

:   此次漏洞导致的直接危害为远程代码执行（RCE）

    也就是说，如果你的业务中有用到 ImageMagick 处理图片，则攻击者只需要上传一个
    特殊构造的图片即可拿到你服务器的权限。

<div class="tabNav" target="tab1">
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

[Win10 怎么查看无线网络密码_百度经验](http://jingyan.baidu.com/article/90808022dd61a0fd90c80f61.html)

:   1.  图标右键；
    2.  打开网络和共享中心；
    3.  更改适配器设置；
    4.  双击相应 BSSID；
    5.  无线属性 -- 安全 -- 显示密码。

---

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

@include <-=include/diff_bvlc_flickr.diff=

```python
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

set parameters s.t. deconvolutional layers compute bilinear interpolation
N.B. this is for deconvolution without groups
N.B. 啥意思？：

-   Derived from the Latin (and italian) nota bene, meaning note well (take notice).：
-   It is used to draw the attention to a certain aspect.

`<script>document.write("hello")</script>`{.javascript}

[version control - Ignore files that have already been committed to a Git repository - Stack Overflow](http://stackoverflow.com/questions/1139762/ignore-files-that-have-already-been-committed-to-a-git-repository)

再举个例子，我一个平时巨怂的朋友，打球都是有气无力的，但是有一次他喜欢的妹子在
旁边出现的时候，他（打球）突然变得像驴一样凶残（比喻可能不恰当），知道这个事情
的时候，我也很想笑（原谅我笑点低），虽然回头想想，这种事情也是极为合理的。

她并不是讨厌自己发表的那些内容，也不是厌恶那时候的自己，实际上我们都是非常好的
朋友，她只是不想让那些长篇大论被人看到而已，那其中感情表露的太多了，或许被不相
干的人看到并不是一件合适的事。

![CDN gif](https://uploads.intercomcdn.com/i/o/4605475/2bef99bad4fbcb44d6f90df2/load-time-animation.gif)

[Use the full MathJax configuration to maximize loading speed by ickc · Pull Request #2908 · jgm/pandoc](https://github.com/jgm/pandoc/pull/2908) -<

:   ```html
    $if(math)$
        <script src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS_CHTML-full" type="text/javascript"></script>
    $endif$
    <!--
        <script src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML" type="text/javascript"></script>
    -->
    ```

    -   Sounds like a good idea.

        PS. In the future, please rebase the PRs so that they don't have merge commits. It makes it easier to see what's going on later.

    -   Thanks for letting me know. Sorry for the ignorance.

    -   No, problem, thanks for the contribution!

我们刚刚做出了一个艰难的决定

[虎落平阳被犬欺_百度百科](http://baike.baidu.com/link?url=lOXv_2p1NBl2yYFXSwd7myiKBQdjCHe6gB7QUTIeL26gjYPuEWAdnGUQtIFwXCHEJLPufFjzhVqvi-jBy1b90K)

[乌鲁木齐（新疆维吾尔自治区首府）_百度百科](http://baike.baidu.com/link?url=UD_ZutmIjayEONudv80glBuccQUz639tU_sJ4VUCMb8BWv9B-h2hhmaYiTDo4l2mNsGjBkKwWtHdIfpHqjCltzvn_bgEeJ9JKeP_fiIzYya)

[伊犁哈萨克自治州_百度百科](http://baike.baidu.com/link?url=HBrLnLFgoneKSIY4J2ptgH1cavn-DjZYcfWeWVJndwMboj1x0cqFHKOGBukfJLUqs19PR5fyvfZGlzY1GSr2Af4qK56h5nDn3CHSTHcsvcl29tCiNaBGiHQdGtaIU0Z-) -<

:   伊犁州极端最高气温 42.8℃，极端最低气温 - 51.0℃，其中伊犁河谷年平均气温 10.4℃，
    塔城地区年平均气温 8.7℃，阿勒泰地区年平均气温 5.8℃。年平均降水量：伊犁河谷
    417.6 毫米，山区 600 毫米左右；塔城盆地 342.7 毫米，山区 400 毫米左右；阿勒泰山
    区 202.6 毫米；其余地区 100-200 毫米。年平均日照时数：伊犁河谷 2898.4 小时；塔
    城地区 2714.7 小时；阿勒泰地区 2976.8 小时。

[理科 557 分！文科 547 分！他们是怎么考出来的啊？！](http://mp.weixin.qq.com/s?__biz=MzA5NTIyODgzOQ==&mid=2650182788&idx=1&sn=753ed9dad821699e1ace978de1f4fe87&scene=23&srcid=0623ZbnnnkDNhH7ADA1syfok#rd)

[deep learning - Building custom Caffe layer in python - Stack Overflow](http://stackoverflow.com/questions/33778225/building-custom-caffe-layer-in-python)

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

**提示：因优酷官方禁止下载，目前已停止了优酷视频解析支持，请理解，您可以优先从其
他视频网站找资源下载。**

[torrvision/crfasrnn: This repository contains the source code for the semantic image segmentation method described in the ICCV 2015 paper: Conditional Random Fields as Recurrent Neural Networks. http://crfasrnn.torr.vision/](https://github.com/torrvision/crfasrnn)

http://web.ankiapp.com

[保护自己的耳朵，警惕听力下降，从现在做起！ - 音乐中的科学 - 知乎专栏](https://zhuanlan.zhihu.com/p/20083476)

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

[圣母玛利亚（耶稣的生母）_百度百科](http://baike.baidu.com/link?url=dpTF8U87xUtKqiO2QNSLyWnES7XoCbG0NSEu6CZ5_tfHnLItY27TaABiARzcz0BhPJGigTDCarDnyvktrybvCq-9CeteYOhZWKWlxQvZgKq)

:   圣母玛利亚, Blessed Virgin Mary

    以前的圣母，把自己的粮食分给穷人。

    现在的圣母婊，指挥别人把自己碗里的饭分给穷人。
    你要不分。 她就骂你 “你这个人怎么这么自私，真是世风日下，人心不古！”

不读书却又爱思考，智商低却又富有同情心，这两种人都是灾难。

这特么翻译错了！（好像是……机器翻译）：

-   “It is not as wrong raping a Swedish girl as raping an Arab girl,” says Hamid.
-   “强奸一个瑞典女孩就跟强奸一个阿人女孩一样，这没有错误,”Hamid 说。

https://www.zhihu.com/question/24099873/answer/26711652

老子：民不畏死，奈何以死惧之。

[看加菲猫学英语汇总目录](http://mp.weixin.qq.com/s?__biz=MzI4MzExMDU1Nw==&mid=502373927&idx=1&sn=0132758c1f37c6f357b7d019e6fc8198&scene=18#wechat_redirect)

[Long Island - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Long_Island)

-   israel
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

```bash
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

[QT5 中的.pro 文件中为何要加入QT += widgets，而不能在包头文件的时候就包一个widgets/QApplication呢？ - Linux - 知乎](http://www.zhihu.com/question/27253528)

:   在pro里 写 qt+=widgets 表示引入 QtWidget这个module，qmake会在帮你生成makefile的时候，设置好include path 和 lib path，在link时候设置好libs。
    而仅在源代码里 include <QApplication>仅是引入声明，但是没有lib，所以链接时
    会出错。

    当然，我们可以批评C++这种源自上世纪70年代的头文件和lib分离的设计是过时的不
    合理的，现代语言基本都采用package管理，用import解决了。但是我们既然还在用
    C++，就要接受这种设计，把它搞明白。另外你说在网上找不到资料，我大胆猜测你是
    用baidu搜索的，因为用google搜索，这类资料是很多的，比如[The compiler,
    assembler, linker, loader and process address space tutorial - hacking the
    process of building programs using C language: notes and
    illustrations](http://www.tenouk.com/ModuleW.html)图文并茂地讲述了编译器 链
    接器和加载器的工作原理。

    作者：姚冬链接：http://www.zhihu.com/question/27253528/answer/35857943来源
    ：知乎著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

-   [如何评价萨拉丁？ - 历史 - 知乎](http://www.zhihu.com/question/24670166)
-   [萨拉丁（埃及阿尤布王朝开国君主）_百度百科](http://baike.baidu.com/link?url=yaY1E6YOtdQyCdyfHR7mPkSgkoxl68v7zFTjGBdPb4raVcsr57C-5mIM4UklzG9HGHbk-PJ7kmEFdrceYoxJAbZj1fMBDVQMJ94RYyPMUgK)
-   [baike.baidu.com/view/122444.htm](http://baike.baidu.com/view/122444.htm)
-   [宗教疯狂年代的理想主义―――评《天国王朝》 (天国王朝 影评)](https://movie.douban.com/review/1039586/)
-   [谁谋杀了《天国王朝》？ (天国王朝 影评)](https://movie.douban.com/review/1148037/)

`vcvars32` calls `C:\Program Files\Microsoft Visual Studio 8\Common7\Tools\vsvars32.bat`
which **sets up the required environment** for compiling and linking.  The
environment variables are:

#. `INCLUDE`
#. `LIB`
#. `PATH`

The compiler looks for header files in the `INCLUDE` path during compile, and
libraries are fetched from the `LIB` path during link.

---

Refs

#. [c++ - Command line compile using cl.exe? - Stack Overflow](http://stackoverflow.com/questions/7865432/command-line-compile-using-cl-exe)
#. [c++ - fatal error C1034: windows.h: no include path set - Stack Overflow](http://stackoverflow.com/questions/931652/fatal-error-c1034-windows-h-no-include-path-set)
#. [Walkthrough: Compiling a C Program on the Command Line](https://msdn.microsoft.com/en-us/library/bb384838.aspx)
#. [Setting the Path and Environment Variables for Command-Line Builds](https://msdn.microsoft.com/en-us/library/f2ccy3wt.aspx)

[http://doi-2014.qiniudn.com/](http://doi-2014.qiniudn.com/)

-   ARC
-   GUI 设计的封包、反射
-   ```bash
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
        +   -and
        +   -or
        +   -not
        +   -type
