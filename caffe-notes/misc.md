# MISC (TMP NOTES)

sucks -<

:   -   [深度学习源码解读-ch0-talk is cheap - 黑客与画家 - 知乎专栏](https://zhuanlan.zhihu.com/p/20377462?refer=hacker-and-painter)

    -   [深度学习源码解读-ch2-Caffe is coming - 黑客与画家 - 知乎专栏](https://zhuanlan.zhihu.com/p/20435591)

        proto txt,

    -   [深度学习源码解读-ch3-部署 Caffe 网络 - 黑客与画家 - 知乎专栏](https://zhuanlan.zhihu.com/p/20456504?refer=hacker-and-painter)

        通过这个实际的例子，我们再去看proto.txt就容易多了，知道根节点是Net，我们就可以从源码中看到调用关系,以netparam为例：

        ReadNetParamsFromTextFileOrDie -> ReadProtoFromTextFile -> 5行反序列化代码。

        Solveparam有类似的层次结构，grep一下代码不难理清调用关系。

    -   [深度学习源码解读-ch4-Caffe 中的设计模式 - 黑客与画家 - 知乎专栏](https://zhuanlan.zhihu.com/p/20456649?refer=hacker-and-painter)

        我们可以挑EUCLIDEAN LOSS Layer为例，看看caffe中加入一个自定义层，需要多少的工作量。

        caffe使用了工厂模式，代码在 layer_factory.hpp 中，宏
        REGISTER_LAYER_CLASS 为每个type生成了create方法，并和type一起注册到了
        LayerRegistry中，保存在一个map里面。这样以后就可以通过Type，我们就能够
        创建带forward/backward实现的节点了。

        对于forward，就是在计算欧式距离，假设网络输出向量为 [x1, x2, … xn], label为 [l1, l2, … ln]， 则loss function 为

        ½ *[ (x1 – l1)*(x1-l1) + … (xn -ln)*(xn -ln)] / n

        所以代码实现是一个向量的减法，紧跟着一个点乘，以CPU为例是：

        ```cpp
        caffe_sub(count, bottom[0]->cpu_data(), bottom[1]->cpu_data(), diff_.mutable_cpu_data());
        Dtype dot = caffe_cpu_dot(count, diff_.cpu_data(), diff_.cpu_data());
        Dtype loss = dot / bottom[0]->num() / Dtype(2);
        ```

[caffe开发过程中使用了哪些工具？ - 软件开发 - 知乎](https://www.zhihu.com/question/47467054) -<

:   **作者：贾扬清**

    还是挺标准的 linux 开发流程：

    -   编辑器：vim（因为要远程在服务器上编辑）+ Sublime Text（本地编辑）
    -   编译：gcc + nvcc + Makefile
    -   调试：gdb + cuda-gdb (cuda-gdb 用得很少），valgrind
    -   调试 cuda 代码速度：nvvp
    -   代码管理：git + github

    补充一些不是那么相关的：

    -   远程 ssh 自动重连：mosh
    -   命令行下多窗口：tmux
    -   偶尔需要用到的 vnc：TigerVNC server + Chicken (mac client)
    -   本地多种环境的集成测试：docker（当年没用到，后来开始用）
    -   服务器上的集成测试：Travis CI

    主要用到的 dependency：

    -   glog：打印调试信息，这个对于调错很有用。
    -   gflags：命令行参数
    -   gtest：测试框架
    -   protobuf：数据的序列化
    -   boost：一些类似 C++11 的 feature，因为早期 cuda 不支持 c++11
    -   opencv：图像处理函数
    -   leveldb，lmdb：简单的本地数据库。
    -   cuda：这个就不用说了
    -   atlas/mkl/eigen：线性代数计算库

    downloads

    -   [Issues · mobile-shell/mosh](https://github.com/mobile-shell/mosh/issues)
    -   [MobaXterm Xserver with SSH, telnet, RDP, VNC and X11 - Home Edition](http://mobaxterm.mobatek.net/download-home-edition.html){.heart .featured}

[CVPR 2016 有什么值得关注的亮点？ - 深度学习（Deep Learning） - 知乎](https://www.zhihu.com/question/47385572)

:   nothing special.

[对人工智能有着一定憧憬的计算机专业学生可以阅读什么材料或书籍真正开始入门人工智能的思路和研究？ - 计算机科学 - 知乎](https://www.zhihu.com/question/44864396)

:   too good! too much!

[fzliu/style-transfer: An implementation of "A Neural Algorithm of Artistic Style" by L. Gatys, A. Ecker, and M. Bethge. http://arxiv.org/abs/1508.06576.](https://github.com/fzliu/style-transfer)

[李飞飞：如何教计算机理解图片_李飞飞：如何教计算机理解图片_网易公开课](http://open.163.com/movie/2015/3/Q/R/MAKN9A24M_MAKN9QAQR.html)

简短地回答是: 这是因为微软十年如一日地烧钱养了一个叫微软研究院的机构，里面一帮
科学家不用做产品没事干天天琢磨怎么把科幻变成现实。终于碰上个能放到产品里了，产
品的硬实力立马把没有科研积累的苹果和谷歌甩了一大截（当然市场表现另论）。

除了我说的两种很厉害的学者之外，还有两种 vision 的研究者。第一种是“性能挂帅”：今
天整个 HOG+SIFT，明天换个 boosting 的目标函数，后天再来个局部特征 + 整体特征；别人发
现了 deep learning 管用了自己马上也摇身变成了 deep learning 的砖家，跟在别人后面用
现有的技术把性能从 81% 做到 82% 就开始在社交网络上吹嘘自己实现了里程碑，超越了谷歌
MIT。这不是做研究，这是山寨。第二种是“数学挂帅”。遇到这种老板更要趁早退学或者转
行，否则学术界工业界的工作都不好找。大家对号入座，看看自己和自己的导师是哪一种 :)

`getSelection().toString()`, or `"*p`

此外有人提到了 Feifei 对学生的态度。有个故事，到 Feifei 的主页上查学生去向，在
一群硅谷 scientist，professor 中间有一个空白的，这个人去了街上，收入是其他人的
和。

使用同样模式运营的 lab（青睐国内优秀本科毕业生，要求动手能力强，做大量实验）的
华人 CV 大牛还有 UCLA 的朱松纯、NUS 的颜水城等。

-   [What does "xavier" mean? · Issue #1537 · BVLC/caffe](https://github.com/BVLC/caffe/issues/1537)
-   [andy's blog — An Explanation of Xavier Initialization](http://andyljones.tumblr.com/post/110998971763/an-explanation-of-xavier-initialization)

```python
print("Accuracy: {:.3f}".format(accuracy));
```

---

include/solver.prototxt -<

:   ```
    @include <-=include/solver.prototxt=
    ```

models/finetune_flickr_style/train_val.prototxt -<

:   ```
    @include <-=include/train_val.prototxt=
    ```

[rbgirshick (Ross Girshick)](https://github.com/rbgirshick) -<

:   rbg

    -   [rbgirshick/fast-rcnn: Fast R-CNN](https://github.com/rbgirshick/fast-rcnn) -<

        :   790 stars.

    -   [rbgirshick/DeepPyramid: Deep feature pyramids for various computer vision algorithms (DPMs, pyramid R-CNN, etc.)](https://github.com/rbgirshick/DeepPyramid) -<

        :   79 stars.

    -   [rbgirshick/voc-dpm: Object detection system using deformable part models (DPMs) and latent SVM (voc-release5). You may want to use the latest tarball on my website. The github code may include code changes that have not been tested as thoroughly and will not necessarily reproduce the results on the website.](https://github.com/rbgirshick/voc-dpm) -<

        :   282 stars.

---

[Song-Chun Zhu's homepage](http://www.stat.ucla.edu/%7Esczhu/)

 结束语： 选择专业方向和博士导师是改变你人生轨迹的抉择， 绝非游戏，望你慎重考虑， 谋定而动， 锲而不舍。 你最好认真浏览本实验室的活动、demo、科研项目，多读几篇论文， 问你自己是否愿意长期投身这个方向。“道不同，不相为谋”，如果你不确定、还没想好， 最好不要报， 更不要谎报。
