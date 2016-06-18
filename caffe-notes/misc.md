# MISC (TMP NOTES)


[深度学习源码解读-ch0-talk is cheap - 黑客与画家 - 知乎专栏](https://zhuanlan.zhihu.com/p/20377462?refer=hacker-and-painter)

[深度学习源码解读-ch2-Caffe is coming - 黑客与画家 - 知乎专栏](https://zhuanlan.zhihu.com/p/20435591)

:   proto txt,

[深度学习源码解读-ch3-部署 Caffe 网络 - 黑客与画家 - 知乎专栏](https://zhuanlan.zhihu.com/p/20456504?refer=hacker-and-painter)

[深度学习源码解读-ch4-Caffe 中的设计模式 - 黑客与画家 - 知乎专栏](https://zhuanlan.zhihu.com/p/20456649?refer=hacker-and-painter)

[caffe开发过程中使用了哪些工具？ - 软件开发 - 知乎](https://www.zhihu.com/question/47467054)

:   **作者：贾扬清**

    还是挺标准的linux开发流程：

    编辑器：vim（因为要远程在服务器上编辑）+ Sublime Text（本地编辑）
    编译：gcc + nvcc + Makefile
    调试：gdb + cuda-gdb (cuda-gdb用得很少），valgrind
    调试cuda代码速度：nvvp
    代码管理：git + github

    补充一些不是那么相关的：
    远程ssh自动重连：mosh
    命令行下多窗口：tmux
    偶尔需要用到的vnc：TigerVNC server + Chicken (mac client)
    本地多种环境的集成测试：docker（当年没用到，后来开始用）
    服务器上的集成测试：Travis CI

    主要用到的dependency：
    glog：打印调试信息，这个对于调错很有用。
    gflags：命令行参数
    gtest：测试框架
    protobuf：数据的序列化
    boost：一些类似C++11的feature，因为早期cuda不支持c++11
    opencv：图像处理函数
    leveldb，lmdb：简单的本地数据库。
    cuda：这个就不用说了
    atlas/mkl/eigen：线性代数计算库

[CVPR 2016 有什么值得关注的亮点？ - 深度学习（Deep Learning） - 知乎](https://www.zhihu.com/question/47385572)

[对人工智能有着一定憧憬的计算机专业学生可以阅读什么材料或书籍真正开始入门人工智能的思路和研究？ - 计算机科学 - 知乎](https://www.zhihu.com/question/44864396)

[fzliu/style-transfer: An implementation of "A Neural Algorithm of Artistic Style" by L. Gatys, A. Ecker, and M. Bethge. http://arxiv.org/abs/1508.06576.](https://github.com/fzliu/style-transfer)

[Facebook 的人工智能实验室 (FAIR) 有哪些厉害的大牛和技术积累？ - 自然语言处理 - 知乎](https://www.zhihu.com/question/30924352)

:   人员方面，Yann LeCun毫无疑问是整个组的Director，其它大牛有VC维和SVM的缔造者
    Vladimir Vapnik，提出随机梯度下降法的Léon Bottou，做出高性能PHP虚拟机HHVM的
    Keith Adams, Rob Fergus, Jason Weston, Marc'Aurelio Ranzato, Tomas Mikolov,
    Florent Perronnin, Piotr Dollar, Hervé Jégou, Ronan Collobert, Yaniv
    Taigman等。在深度学习的时代，研究和工程已经有融合的趋势，因此FAIR这两方面的
    大牛都有。工作气氛上来说，组内较平等，讨论自由，基本没有传统的上下级观念。
    若是任何人有有趣的想法，大家都会倾听并且作出评论。要是想法正确，Yann也会
    like。

    没有人逼着干活，但大家都在努力干活。

简短地回答是: 这是因为微软十年如一日地烧钱养了一个叫微软研究院的机构，里面一帮
科学家不用做产品没事干天天琢磨怎么把科幻变成现实。终于碰上个能放到产品里了，产
品的硬实力立马把没有科研积累的苹果和谷歌甩了一大截（当然市场表现另论）。
