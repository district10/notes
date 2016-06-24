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

总之 我觉得自从freelancing之后，我可以尝试更多之前没时间 或者没有去尝试的东西，
我觉得生活不再只是程序代码，而其实你coding也不是只是和计算机去交流，因为你的代
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
-   Consider the shapes of the inner product parameters. The weight dimensions are the output and input sizes while the bias dimension is the output size.

fc-conv

-   fc6-conv weights are (4096, 256, 6, 6) dimensional and biases are (4096,) dimensional
-   The convolution weights are arranged in output x input x height x width dimensions.

The classifications include various cats -- 282 = tiger cat, 281 = tabby, 283 = persian -- and foxes and other mammals.

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

[Use the full MathJax configuration to maximize loading speed by ickc · Pull Request #2908 · jgm/pandoc](https://github.com/jgm/pandoc/pull/2908)

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

[伊犁哈萨克自治州_百度百科](http://baike.baidu.com/link?url=HBrLnLFgoneKSIY4J2ptgH1cavn-DjZYcfWeWVJndwMboj1x0cqFHKOGBukfJLUqs19PR5fyvfZGlzY1GSr2Af4qK56h5nDn3CHSTHcsvcl29tCiNaBGiHQdGtaIU0Z-)

伊犁州极端最高气温 42.8℃，极端最低气温 - 51.0℃，其中伊犁河谷年平均气温 10.4℃，
塔城地区年平均气温 8.7℃，阿勒泰地区年平均气温 5.8℃。年平均降水量：伊犁河谷
417.6 毫米，山区 600 毫米左右；塔城盆地 342.7 毫米，山区 400 毫米左右；阿勒泰山
区 202.6 毫米；其余地区 100-200 毫米。年平均日照时数：伊犁河谷 2898.4 小时；塔
城地区 2714.7 小时；阿勒泰地区 2976.8 小时。

[理科 557 分！文科 547 分！他们是怎么考出来的啊？！](http://mp.weixin.qq.com/s?__biz=MzA5NTIyODgzOQ==&mid=2650182788&idx=1&sn=753ed9dad821699e1ace978de1f4fe87&scene=23&srcid=0623ZbnnnkDNhH7ADA1syfok#rd)

[deep learning - Building custom Caffe layer in python - Stack Overflow](http://stackoverflow.com/questions/33778225/building-custom-caffe-layer-in-python)

[ipython notebook - Cheat sheet for caffe / pycaffe? - Stack Overflow](http://stackoverflow.com/questions/32379878/cheat-sheet-for-caffe-pycaffe)

 caffe train -solver models/finetune_flickr_style/solver.prototxt
-weights bvlc_reference_caffenet.caffemodel

pretrained_net = caffe.Net(
"net.prototxt", "net.caffemodel")
solver = caffe.SGDSolver("solver.prototxt")
solver.net.copy_from(pretrained_net)
solver.solve()

transferability
n.〔物〕可转换性；可转移性
of features.

提示：因优酷官方禁止下载，目前已停止了优酷视频解析支持，请理解，您可以优先从其
他视频网站找资源下载。

[torrvision/crfasrnn: This repository contains the source code for the semantic image segmentation method described in the ICCV 2015 paper: Conditional Random Fields as Recurrent Neural Networks. http://crfasrnn.torr.vision/](https://github.com/torrvision/crfasrnn)
