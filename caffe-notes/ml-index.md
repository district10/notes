---
title: Machine Learning
date: 2016-04-25
keywords:
tags:
    - machine learning
    - deep learning
...

Machine Learning
================

Featured links

-   [Principles of training multi-layer neural network using backpropagation](backpropagation.html){.heart .featured title=backpropagation.md}

网上看到一句很蛋疼的话：

>   已经很久没看 lstm 了, 很多这方面的工作已经不了解了诶。

MISC Notes -<

:   - **contrived** example, 造的例子
    - logistic, `[lo'dʒɪstɪk]`, adj. 后勤学的；符号逻辑的
    - hessian, `['hɛʃən]`
    - theano, thy yah noo

python notes -<

:   -   cp src dst, mv src dst^[[10.10. shutil — High-level file operations —
        Python 2.7.11 documentation](https://docs.python.org/2/library/shutil.html)]

        ```python
        # shutil: shell util
        import shutil               # from shutil import copyfile copy, copyfile

        shutil.move(src, dst)       # recursive
        shutil.copy(src, dst)       # dst can be a dir
        shutil.copyfile(src, dst)   # dst can only be a file
        ```

yhlleo 推荐的论文 -<

:   ```
    ml
    ├── DeepLearning
    │   ├── Bag-of-Words models.pdf
    │   ├── Beyond Bags of Features Spatial Pyramid Matching-CVPR2006.pdf
    │   ├── Deep Learning - Methods and Applications.pdf
    │   ├── Fast accurate detection of 100000 object classes on a single machine-CVPR2013.pdf
    │   ├── faster r-cnn towards real-time object detection with region proposal networks-NIPS2015.pdf
    │   ├── Fast R-CNN-ICCV2015.pdf
    │   ├── ImageNet Classification with Deep Convolutional Neural Networks-NIPS2012.pdf
    │   ├── LabelMe a database and web-based tool for image.pdf
    │   ├── Microsoft COCO Common Objects in Context-ECCV2014.pdf
    │   ├── Object Detection with Discriminatively Trained Part Based Model-ppt.pdf
    │   ├── Object Detection with Discriminatively Trained Part-Based Models-PAMI2014.pdf
    │   ├── R-CNN for object detection-ppt.pdf
    │   ├── Recognition using Regions-CVPR2009.pdf
    │   ├── Regionlets for Generic Object Detection-ICCV2013.pdf
    │   ├── Rich feature hierarchies for accurate object detection and semantic segmentation-CVPR2013.pdf
    │   ├── Selective Search for Object Recognition-IJCV2013.pdf
    │   ├── Semantic Segmentation with Second-Order Pooling.pdf
    │   ├── Spatial Pyramid Pooling in Deep Convolutional Networks for Visual Recognition-PAMI2015.pdf
    │   ├── What is an object-CVPR2010.pdf
    │   ├── 博客Bag-of-words.pdf
    │   ├── 博客SPM.pdf
    │   ├── 如何评价rcnn、fast-rcnn和faster-rcnn这一系列方法？ - 机器学习 - 知乎.pdf
    │   ├── 深度学习研究理解：SSP.pdf
    │   ├── 论文笔记Fast R-CNN.pdf
    │   ├── 论文笔记SPP-net.pdf
    │   └── 论文笔记SPP.pdf
    ├── EdgeContour
    │   ├── CVPR2015-DeepContour-A-Deep-Convolutional-Feature-Learned-by-Positive-sharing-Loss-for-Contour-Detection-draft-version.pdf
    │   ├── CVPR2015-DeepEdge-A-Multi-Scale-Bifurcated-Deep-Network-for-Top-Down-Contour-Detection.pdf
    │   ├── DeepContour - A Deep Convolutional Feature Learned by Positive-sharing Lossfor Contour Detection.pdf
    │   ├── DeepEdge - A Multi-Scale Bifurcated Deep Networkfor Top-Down Contour Detection.pdf
    │   └── EdgeLineDetection.pdf
    └── TextDetection
        ├── 1510.03283v1.pdf
        ├── 5638-faster-r-cnn-towards-real-time-object-detection-with-region-proposal-networks.pdf
        ├── Automatic Script Identification in the Wild.pdf
        ├── Detecting Texts of Arbitrary Orientations in Natural Images.pdf
        ├── FCS_TextSurvey_2015.pdf
        ├── Gordo_Supervised_Mid-Level_Features_2015_CVPR_paper.pdf
        ├── Text Flow - A Unified Text Detection System in Natural Scene Images.pdf
        ├── wangwucoatesng_icpr2012.pdf
        └── Yao_Strokelets_2014_CVPR_paper.pdf

    3 directories, 40 files

    - 1510.03283v1.pdf
    - 5638-faster-r-cnn-towards-real-time-object-detection-with-region-proposal-networks.pdf
    - Automatic Script Identification in the Wild.pdf
    - Bag-of-Words models.pdf
    - Beyond Bags of Features Spatial Pyramid Matching-CVPR2006.pdf
    - CVPR2015-DeepContour-A-Deep-Convolutional-Feature-Learned-by-Positive-sharing-Loss-for-Contour-Detection-draft-version.pdf
    - CVPR2015-DeepEdge-A-Multi-Scale-Bifurcated-Deep-Network-for-Top-Down-Contour-Detection.pdf
    - Deep Learning - Methods and Applications.pdf
    - DeepContour - A Deep Convolutional Feature Learned by Positive-sharing Lossfor Contour Detection.pdf
    - DeepEdge - A Multi-Scale Bifurcated Deep Networkfor Top-Down Contour Detection.pdf
    - Detecting Texts of Arbitrary Orientations in Natural Images.pdf
    - EdgeLineDetection.pdf
    - FCS_TextSurvey_2015.pdf
    - Fast R-CNN-ICCV2015.pdf
    - Fast accurate detection of 100000 object classes on a single machine-CVPR2013.pdf
    - Gordo_Supervised_Mid-Level_Features_2015_CVPR_paper.pdf
    - ImageNet Classification with Deep Convolutional Neural Networks-NIPS2012.pdf
    - LabelMe a database and web-based tool for image.pdf
    - Microsoft COCO Common Objects in Context-ECCV2014.pdf
    - Object Detection with Discriminatively Trained Part Based Model-ppt.pdf
    - Object Detection with Discriminatively Trained Part-Based Models-PAMI2014.pdf
    - R-CNN for object detection-ppt.pdf
    - Recognition using Regions-CVPR2009.pdf
    - Regionlets for Generic Object Detection-ICCV2013.pdf
    - Rich feature hierarchies for accurate object detection and semantic segmentation-CVPR2013.pdf
    - Selective Search for Object Recognition-IJCV2013.pdf
    - Semantic Segmentation with Second-Order Pooling.pdf
    - Spatial Pyramid Pooling in Deep Convolutional Networks for Visual Recognition-PAMI2015.pdf
    - Text Flow - A Unified Text Detection System in Natural Scene Images.pdf
    - What is an object-CVPR2010.pdf
    - Yao_Strokelets_2014_CVPR_paper.pdf
    - faster r-cnn towards real-time object detection with region proposal networks-NIPS2015.pdf
    - wangwucoatesng_icpr2012.pdf
    - 博客Bag-of-words.pdf
    - 博客SPM.pdf
    - 如何评价rcnn、fast-rcnn和faster-rcnn这一系列方法？ - 机器学习 - 知乎.pdf
    - 深度学习研究理解：SSP.pdf
    - 论文笔记Fast R-CNN.pdf
    - 论文笔记SPP-net.pdf
    - 论文笔记SPP.pdf
    ```

二：课程资源 -<

:   1.  Tom Mitchell：http://work.caltech.edu/library/181.html http://www.cs.cmu.edu/~tom/10701_sp11/lectures.shtml
    2.  Andrew Ng：https://www.coursera.org/learn/machine-learning/home/welcome
    3.  NewYork University：http://cs.nyu.edu/~dsontag/courses/ml14/
    4.  Stanford CS231:http://vision.stanford.edu/teaching/cs231n/index.html
    5.  Youshua Bengio：http://deeplearning.net/tutorial/他编写的书《Deep Learning》：http://deeplearning.net/tutorial/contents.html
    6.  Andrew Stanford课程：UFLDL：http://ufldl.stanford.edu/tutorial/

三、代码资源： -<

:   1.  Keras：https://github.com/fchollet/keras Keras Documentation：http://keras.io/
    2.  Scikit-Learn: Machine Learning in Python: http://scikit-learn.org/stable/
    3.  PredictionIO: Open Source Machine Learning Server: https://prediction.io/
    4.  Visual Recognition and Search(计算机视觉资源汇总网站): http://rogerioferis.com/VisualRecognitionAndSearch2014/Resources.html
    5.  JMLR Machine Learning Open Source Software: http://jmlr.org/mloss/

[如何评价 rcnn、fast-rcnn 和 faster-rcnn 这一系列方法？ - 知乎](https://www.zhihu.com/question/35887527) -<

:   (res) 如何评价 rcnn、fast-rcnn 和 faster-rcnn 这一系列方法？ - 机器学习 - 知乎.pdf

    提到这两个工作，不得不提到 RBG 大神 rbg's home page，该大神在读博士的时候就因
    为 dpm 获得过 pascal voc 的终身成就奖。博士后期间更是不断发力，RCNN 和 Fast- RCNN
    就是他的典型作品。

    RCNN：RCNN 可以看作是 RegionProposal+CNN 这一框架的开山之作，在
    imgenet/voc/mscoco 上基本上所有 top 的方法都是这个框架，可见其影响之大。RCNN 的
    主要缺点是重复计算，后来 MSRA 的 kaiming 组的 SPPNET 做了相应的加速。

    Fast-RCNN：RCNN 的加速版本，在我看来，这不仅仅是一个加速版本，其优点还包括：

      - 首先，它提供了在 caffe 的框架下，如何定义自己的层 / 参数 / 结构的范例，这个范
        例的一个重要的应用是 python layer 的应用，我在这里支持多 label 的 caffe，有
        比较好的实现吗？ - 孔涛的回答也提到了。
      - training and testing end-to-end 这一点很重要，为了达到这一点其定义了
        ROIPooling 层，因为有了这个，使得训练效果提升不少。
      - 速度上的提升，因为有了 Fast-RCNN，这种基于 CNN

    的 real-time 的目标检测方法看到了希望，在工程上的实践也有了可能，后续也出现
    了诸如 Faster-RCNN/YOLO 等相关工作。

    这个领域的脉络是：RCNN -> SPPNET -> Fast-RCNN -> Faster-RCNN。关于具体的细
    节，建议题主还是阅读相关文献吧。

    这使我看到了目标检测领域的希望。起码有这么一部分人，他们不仅仅是为了几个百
    分点的提升，而是切实踏实在做贡献，相信不久这个领域会有新的工作出来。以上纯
    属个人观点，欢迎批评指正。

    是这样的，如果都用一句话来描述

    RCNN 解决的是，“为什么不用 CNN 做 classification 呢？”
    （但是这个方法相当于过一遍 network 出 bounding box，再过另一个出 label，原文写的很不“elegant”

    Fast-RCNN 解决的是，“为什么不一起输出 bounding box 和 label 呢？”
    （但是这个时候用 selective search generate regional proposal 的时间实在太长了

    Faster-RCNN 解决的是，“为什么还要用 selective search 呢？”

    于是就达到了 real-time。开山之作确实是开山之作，但是也是顺应了
    “Deep learning 搞一切 vision”这一潮流吧。

    refs and see also

      - [rbg's home page](http://www.cs.berkeley.edu/~rbg/index.html)
      - [rbgirshick (Ross Girshick)](https://github.com/rbgirshick)

[如何简单形象又有趣地讲解神经网络是什么？ - 知乎](https://www.zhihu.com/question/22553761) -<

:   2012 年多伦多大学的 Krizhevsky 等人构造了一个超大型卷积神经网络 ，有 9 层，共
    65 万个神经元，6 千万个参数。网络的输入是图片，输出是 1000 个类，比如小虫、美洲
    豹、救生船等等。这个模型的训练需要海量图片，它的分类准确率也完爆先前所有分
    类器。纽约大学的 Zeiler 和 Fergusi 把这个网络中某些神经元挑出来，把在其上响
    应特别大的那些输入图像放在一起，看它们有什么共同点。他们发现中间层的神经元
    响应了某些十分抽象的特征。

      - 第一层神经元主要负责识别颜色和简单纹理
      - 第二层的一些神经元可以识别更加细化的纹理，比如布纹、刻度、叶纹。
      - 第三层的一些神经元负责感受黑夜里的黄色烛光、鸡蛋黄、高光。
      - 第四层的一些神经元负责识别萌狗的脸、七星瓢虫和一堆圆形物体的存在。
      - 第五层的一些神经元可以识别出花、圆形屋顶、键盘、鸟、黑眼圈动物。

[如何向非物理专业的同学解释重整化群？ - 知乎](https://www.zhihu.com/question/30174067) -<

:   怎么办呢？你想了想，觉得铁球这么大，你不用把模拟搞得这么精细也能得到正确答
    案。所以你决定把模拟用的水分子体积加 10 倍，这样就只要模拟 10^25 个分子了。
    但是光这样搞不行，得出的结果肯定不对，因为有些纳米级的小运动造成的宏观效果
    没了。这时你有一个学生说，老板，其实咱可以试着改改另外那 4000 个参数，说不
    定能把失去的东西给补偿回来。你觉得靠谱，开动聪明的大脑想了想，心算出了每个
    参数需要的改变。于是你用更大的分子和新的参数重新计算，精确的再现了之前得到
    的数据。（注意，这时你已经对你的系统进行了一次 renormalization）

    在你的 nature 文章里，把为了简化计算发明的这个方法叫 Renormalization group
    (RG)。把每次模拟时水分子的大小叫做 RG scale, 然后你把每次用的参数按照水分子
    的大小列了个表，把它们在尺寸增加时的变化，叫做参数的 RG running。你预见到场
    论里的应用，把用这种方法得到的这个新模型，叫做 low energy effective field
    theory （EFT）.

    最后，你有点惊讶的发现，当你一步步增大水分子尺寸时，本来都很关键的 4000 个
    参数，有些干脆变成 0 了，有些参数和其它的参数成正比了。总之到最后，你只用了
    大概10 个自由参数就完美的描述了这一杯水。你把那些最后没用的参数叫
    irrelevant parameters，把它们描述的形状 / 作用力叫 irrelevant operator. 你
    把这些irrelevant parameter/operator 都去掉，得到的那个精简的理论模型就叫做
    renormalizable theory。它和你之前得到的 EFT 几乎是一样的。

    吐个槽，“重整化群”真是物理名词界的一朵奇葩，把一个本来平易近人的词翻译的不
    明觉厉。这个词英文是 renormalization group（RG）. Normalize 大家都认得，基
    本意思是给一个变量乘个常数，让它更符合一些简单要求。比如几何里说 normalized
    vector, 就是说改变了一个矢量的定义，让它的长度等于一. re-normalize 就是不断
    的 normalize. group 这里是泛指变换，不指数学上严格的群。renormalization
    group 的字面意思就是“不断重新定义参数的一组变换”。

    **重整化群有效本质原因是不同尺度的过程之间往往有一种相对的独立性。**（应该
    说这种问题源自不同尺度之间的独立性，重整化群来自它们之间的共通性）
    如果你的系统是这样的，那重整化群的方法会给你有用的结果。

    refs and see also

      - [如何理解「深度学习和重整化群可以建立严格映射」？这一结论对领域有何影响？ - 知乎](https://www.zhihu.com/question/29854624)

[如何看待 2014 年以来计算机视觉（Computer Vision）界创业潮？ - 知乎](https://www.zhihu.com/question/31430100) -<

:   首先，毋庸置疑，computer vision 作为一个研究领域，正处在整个人工智能史上发
    展速度最惊人的阶段. 从 research 的角度来看，这是 vision 最好的一个时代，也
    是最坏的一个时代。

    利益相关：我在 Cogtu，女朋友在 Linkface

[CNN(卷积神经网络)、RNN(循环神经网络)、DNN(深度神经网络) 的内部网络结构有什么区别？ - 知乎](https://www.zhihu.com/question/34681168) -<

:   神经网络技术起源于上世纪五、六十年代，当时叫感知机（perceptron），拥有输入
    层、输出层和一个隐含层。输入的特征向量通过隐含层变换达到输出层，在输出层得
    到分类结果。早期感知机的推动者是 Rosenblatt。

    随着数学的发展，这个缺点直到上世纪八十年代才被 Rumelhart、Williams、Hinton、
    LeCun 等人（反正就是一票大牛）发明的多层感知机（multilayer perceptron）克服。

    多层感知机可以摆脱早期离散传输函数的束缚，使用 sigmoid 或 tanh 等连续函数模
    拟神经元对激励的响应，在训练算法上则使用 Werbos 发明的反向传播 BP 算法。对
    ，这货就是我们现在所说的神经网络 NN——神经网络听起来不知道比感知机高端到哪里
    去了！这再次告诉我们起一个好听的名字对于研（zhuang）究（bi）很重要！

    多层感知机给我们带来的启示是，神经网络的层数直接决定了它对现实的刻画能力——
    利用每层更少的神经元拟合更加复杂的函数。（Bengio 如是说：functions that
    can be compactly represented by a depth k architecture might require an
    exponential number of computational elements to be represented by a depth k
    − 1 architecture.）

    随着神经网络层数的加深，优化函数越来越容易陷入局部最优解

    “梯度消失”现象更加严重。

    具体来说，我们常常使用sigmoid作为神经元的输入输出函数。对于幅度为1的信号，
    在BP反向传播梯度时，每传递一层，梯度衰减为原来的0.25。层数一多，梯度指数衰
    减后低层基本上接受不到有效的训练信号。

    2006 年，Hinton 利用预训练方法缓解了局部最优解问题，将隐含层推动到了 7 层，
    神经网络真正意义上有了“深度”，由此揭开了深度学习的热潮。这里的“深度”并没有
    固定的定义——在语音识别中 4 层网络就能够被认为是“较深的”，而在图像识别中 20
    层以上的网络屡见不鲜。为了克服梯度消失，ReLU、maxout 等传输函数代替了
    sigmoid，形成了如今 DNN 的基本形式。单从结构上来说，全连接的 DNN 和图 1 的
    多层感知机是没有任何区别的.

    - 高速公路网络（highway network）和
    - 深度残差学习（deep residual learning）

    全连接 DNN 的结构里下层神经元和所有上层神经元都能够形成连接，带来的潜在问题是
    参数数量的膨胀。

    事实上，不论是那种网络，他们在实际应用中常常都混合着使用，比如 CNN 和 RNN
    在上层输出之前往往会接上全连接层，很难说某个网络到底属于哪个类别。不难想象
    随着深度学习热度的延续，更灵活的组合方式、更多的网络结构将被发展出来。尽管
    看起来千变万化，但研究者们的出发点肯定都是为了解决特定的问题。题主如果想进
    行这方面的研究，不妨仔细分析一下这些结构各自的特点以及它们达成目标的手段。

    入门的话可以参考：

      - Ng 写的 Ufldl：UFLDL 教程 - Ufldl, 也可以看
      - Theano 内自带的教程，例子非常具体：Deep Learning Tutorials

    1、[Unsupervised Feature Learning and Deep Learning Tutorial](http://deeplearning.stanford.edu/tutorial/)

    :   主页：[Deep Learning](http://ufldl.stanford.edu/)

          - [UFLDL教程 - Ufldl](http://deeplearning.stanford.edu/wiki/index.php/UFLDL%E6%95%99%E7%A8%8B)
          - [UFLDL Tutorial - Ufldl](http://deeplearning.stanford.edu/wiki/index.php/UFLDL_Tutorial)

        这是我最开始接触神经网络时看的资料，把这个仔细研究完会对神经网络的模型
        以及如何训练（反向传播算法）有一个基本的认识，算是一个基本功。

        <p><i class="icon-camera-retro icon-large"></i> icon-camera-retro</p>

    2、[Deep Learning Tutorials — DeepLearning 0.1 documentation](http://deeplearning.net/tutorial/)

    :   这是一个开源的深度学习工具包，里面有很多深度学习模型的 python 代码还有一
        些对模型以及代码细节的解释。我觉得学习深度学习光了解模型是不难的，难点
        在于把模型落地写成代码，因为里面会有很多细节只有动手写了代码才会了解。
        但 Theano 也有缺点，就是极其难以调试，以至于我后来就算自己动手写几百行的
        代码也不愿意再用它的工具包。所以我觉得 Theano 的正确用法还是在于看里面解
        释的文字，不要害怕英文，这是必经之路。PS：推荐使用 python 语言，目前来看
        比较主流。（更新：自己写坑实在太多了，CUDA 也不知道怎么用，还是乖乖用
        theano 吧...）

    3、[Stanford University CS231n: Convolutional Neural Networks for Visual Recognition](http://vision.stanford.edu/teaching/cs231n/)

    :   斯坦福的一门课：卷积神经网络，李飞飞教授主讲。这门课会系统的讲一下卷积
        神经网络的模型，然后还有一些课后习题，题目很有代表性，也是用python写的
        ，是在一份代码中填写一部分缺失的代码。如果把这个完整学完，相信使用卷积
        神经网络就不是一个大问题了。

    4、[斯坦福大学公开课 ：机器学习课程_全20集_网易公开课](http://open.163.com/special/opencourse/machinelearning.html)

    :   这可能是机器学习领域最经典最知名的公开课了，由大牛Andrew Ng主讲，这个就
        不仅仅是深度学习了，它是带你领略机器学习领域中最重要的概念，然后建立起
        一个框架，使你对机器学习这个学科有一个较为完整的认识。这个我觉得所有学
        习机器学习的人都应该看一下，我甚至在某公司的招聘要求上看到过：认真看过
        并深入研究过Andrew Ng的机器学习课程，由此可见其重要性。

[有哪些 LSTM(Long Short Term Memory) 和 RNN(Recurrent) 网络的教程？ - 知乎](https://www.zhihu.com/question/29411132) -<

:   先给出一个最快的了解+上手的教程：

    直接看 theano 官网的 LSTM 教程 + 代码：[LSTM Networks for Sentiment
    Analysis — DeepLearning 0.1 documentation](http://deeplearning.net/tutorial/lstm.html)
    但是，前提是你有 RNN 的基础，因为 LSTM 本身不是一个完整的模型，LSTM 是对 RNN 隐含
    层的改进。一般所称的 LSTM 网络全叫全了应该是使用 LSTM 单元的 RNN 网络。教程就给了
    个 LSTM 的图，它只是 RNN 框架中的一部分，如果你不知道 RNN 估计看不懂。比较好的是
    ，你只需要了解前馈过程，你都不需要自己求导就能写代码使用了。补充，今天刚发
    现一个中文的博客：[LSTM 简介以及数学推导 (FULL BPTT) - 天道酬勤，做一个务实
    的理想主义者 - 博客频道 - CSDN.NET](http://blog.csdn.net/a635661820/article/details/45390671)
    不过，稍微深入下去还是得老老实实的好好学，下面是我认为比较好的

    完整LSTM学习流程： -<

    :   我一直都觉得了解一个模型的前世今生对模型理解有巨大的帮助。到LSTM这里（
        假设题主零基础）那比较好的路线是MLP->RNN->LSTM。还有LSTM本身的发展路线
        （97年最原始的LSTM到forget gate到peephole再到CTC）按照这个路线学起来会
        比较顺，所以我优先推荐的两个教程都是按照这个路线来的：

        1. 多伦多大学的 Alex Graves 的RNN专著 《 Supervised Sequence Labelling with Recurrent Neural Networks 》

        2. Felix Gers的博士论文 《 Long short-term memory in recurrent neural networks 》

        这两个内容都挺多的，不过可以跳着看，反正我是没看完┑(￣Д ￣)┍

        还有一个最新的（今年2015）的综述， 《 A Critical Review of Recurrent Neural Networks for Sequence Learning 》 不过很多内容都来自以上两个材料。

        其他可以当做教程的材料还有：

        - 《 From Recurrent Neural Network to Long Short Term Memory Architecture
          Application to Handwriting Recognition Author 》
        - 《 Generating Sequences With Recurrent Neural Networks 》 （这个有对应源
          码，虽然实例用法是错的，自己用的时候还得改代码，主要是摘出一些来用，供参
          考）然后呢，可以开始编码了。除了前面提到的theano教程还有一些论文的开源代
          码，到github上搜就好了。

        顺便安利一下theano，theano的自动求导和GPU透明对新手以及学术界研究者来说非常
        方便，LSTM拓扑结构对于求导来说很复杂，上来就写LSTM反向求导还要GPU编程代码非
        常费时间的，而且搞学术不是实现一个现有模型完了，得尝试创新，改模型，每改一
        次对应求导代码的修改都挺麻烦的。

        其实到这应该算是一个阶段了，如果你想继续深入可以具体看看几篇经典论文，比如
        LSTM以及各个改进对应的经典论文。

        还有楼上提到的 《 LSTM: A Search Space Odyssey 》 通过从新进行各种实验来对
        比考查LSTM的各种改进（组件）的效果。挺有意义的，尤其是在指导如何使用LSTM方
        面。

        LSTM网络本质还是RNN网络，基于LSTM的RNN架构上的变化有最先的BRNN（双向），还
        有今年Socher他们提出的树状LSTM用于情感分析和句子相关度计算 《 Improved
        Semantic Representations From Tree-Structured Long Short-Term Memory
        Networks 》

        今年ACL（2015）上有一篇层次的LSTM 《 A Hierarchical Neural Autoencoder for
        Paragraphs and Documents 》 。使用不同的LSTM分别处理词、句子和段落级别输入
        ，并使用自动编码器（autoencoder）来检测LSTM的文档特征抽取和重建能力。

        还有一篇文章 《 Chung J, Gulcehre C, Cho K, et al.  Gated feedback
        recurrent neural networks[J]. arXiv preprint arXiv:1502.02367, 2015. 》，
        把gated的思想从记忆单元扩展到了网络架构上，提出多层RNN各个层的隐含层数据可以相互利用（之前的
        多层RNN多隐含层只是单向自底向上连接），不过需要设置门（gated）来调节。

        记忆单元方面，Bahdanau Dzmitry他们在构建RNN框架的机器翻译模型的时候使用了
        GRU单元（gated recurrent unit）替代LSTM，其实LSTM和GRU都可以说是gated
        hidden unit。两者效果相近，但是GRU相对LSTM来说参数更少，所以更加不容易过拟
        合。（大家堆模型堆到dropout也不管用的时候可以试试换上GRU这种参数少的

        图像处理（对，不用CNN用RNN）： -<

        :   《 Visin F, Kastner K, Cho K, et al. ReNet: A Recurrent Neural Network Based Alternative to Convolutional Networks[J]. arXiv preprint arXiv:1505.00393, 2015 》

            4向RNN（使用LSTM单元）替代CNN。

            使用LSTM读懂python程序：

            《 Zaremba W, Sutskever I. Learning to execute[J]. arXiv preprint arXiv:1410.4615, 2014. 》

            使用基于LSTM的深度模型用于读懂python程序并且给出
            正确的程序输出。文章的输入是短小简单python程序，这
            些程序的输出大都是简单的数字，例如0-9之内加减法程
            序。模型一个字符一个字符的输入python程序，经过多层
            LSTM后输出数字结果，准确率达到99%

        手写识别：

        :   《 Liwicki M, Graves A, Bunke H, et al. A novel approach
            to on-line handwriting recognition based on bidirectional long short-term memory 》

        机器翻译

        对话生成

        句法分析

        信息检索

        图文转换

    <hr>

    首先，对于没有RNN基础的同学，强烈建议先看一下下面这篇论文:

    A Critical Review of Recurrent Neural Networks for Sequence Learning

    里面的数学符号定义清楚，非常适合没有任何基础的童鞋对RNN和LSTM建立一个基本的
    认识。然后，看完这篇论文以后，可以接着看下面这篇博客:

    [Understanding LSTM Networks -- colah's blog](http://colah.github.io/posts/2015-08-Understanding-LSTMs/)

    里面对LSTM结构为什么这样设计，做了一步步的推理解释，非常的详细。看完上面两
    个tutorial, 你对LSTM的结构已经基本了解了。如果希望对于如何训练LSTM, 了解
    BPTT算法的工作细节，可以看Alex Graves的论文:

    Supervised Sequence Labelling with Recurrent Neural Networks

    这篇论文里有比较详细的公式推导，但是对于LSTM的结构却讲的比较混乱，所以不建
    议入门就看这篇论文。看完了上面篇论文／教程以后，对于LSTM的理论知识就基本掌
    握了，下面就需要在实践中进一步加深理解，我还没有去实践，后面的答案等实践完
    以后回来再补上。不过根据有经验的学长介绍，使用Theano自己实现一遍LSTM是一个
    不错的选择

    [The Unreasonable Effectiveness of Recurrent Neural Networks](http://karpathy.github.io/2015/05/21/rnn-effectiveness/)

[Facebook 的人工智能实验室 (FAIR) 有哪些厉害的大牛和技术积累？ - 田渊栋的回答 - 知乎](https://www.zhihu.com/question/30924352/answer/50176654) -<

:   人员方面，Yann LeCun毫无疑问是整个组的Director，其它大牛有VC维和SVM的缔造者
    Vladimir Vapnik，提出随机梯度下降法的Léon Bottou，做出高性能PHP虚拟机HHVM的
    Keith Adams, Rob Fergus, Jason Weston, Marc'Aurelio Ranzato, Tomas Mikolov,
    Florent Perronnin, Piotr Dollar, Hervé Jégou, Ronan Collobert, Yaniv
    Taigman等。在深度学习的时代，研究和工程已经有融合的趋势，因此FAIR这两方面的
    大牛都有。工作气氛上来说，组内较平等，讨论自由，基本没有传统的上下级观念。
    若是任何人有有趣的想法，大家都会倾听并且作出评论。要是想法正确，Yann也会
    like。

    没有人逼着干活，但大家都在努力干活。

    要是人类能掌握自组织纳米机械的设计工具和生产流水线，那再会有一次质的飞跃。
    而自然界刚开始就朝着自组织的路子走，用的是天顶星人的科技，三羧酸循环，光合
    作用，离子泵，都在微观体系下完成，没有摩擦力没有能量耗散，效率都接近百分之
    百，这这就是为啥大脑能耗低的原因。人类的科技相比之下笨重低效，差得远。

    基本上现在深度学习这一块都没有在模拟人脑，而是自己定义最简单的（甚至在生物
    学上是错误的）目标函数和网络链接结构，给定了数据集，照着数学准则用梯度下降
    求解最优参数。不同的原则会得到不同的学习算法。为什么不用和生物学一样的模型
    ？因为生物学模型太复杂了，不如做个简单数学抽象，效果好就说明在某种程度上抓
    到了本质。不然真心是一步也动不了。

    其实几条简单原理便可以创造及其宏大的空间，比如说19路围棋规则简单，但其中变
    化无穷无尽，比宇宙的基本粒子总和还多得多，在这样的空间里畅游，绝不会有重复
    之感。人工设计的规则如此，自然界更是如此，碳氢氧氮四个元素，几乎组成了全部
    有机界。

    像混沌系统如天气，微小的初值变化会对未来产生巨大影响，事实上确实是不可预测
    的。但是人脑是混沌的么？说不准。并不一定变量多的系统就混沌。洛伦兹奇怪吸引
    子只有三个变量哦，但是照样混沌；计算钢梁弯曲有无穷多个变量，照样用有限元解
    得妥妥的，为啥呀？每个系统有不同的内在结构，不可以一概而论的。

    我半年前从谷歌X的无人车组跳到Facebook的人工智能实验室（FAIR），感触良多，这
    里写一些分享给大家。

    虽然F和G并称一流的IT公司，但是其实内部是很不一样的，甚至可以说完全相反。加
    入FB之前，问过很多朋友，大家的意见综合起来是FB有点“乱”，没有统一的平台，各
    组管各组忙，代码质量比G差很多，文档也少。这听起来挺吓人的，但认真想想，反过
    来说乱才有机会。G最大的问题恰恰是一切都井然有序，能出大成果的地方都出完了，
    员工就像螺丝钉，只要在自己的岗位上做好修补就行了。

    这两天绩效考核，我老婆评论说我这半年干的事情比在G家一年还多，有产品发布也有
    研究，我想这就是真正把兴趣用在工作上的结果。我还记得自己最后一天在G的日子，
    HR小姑娘最后问我为啥离开，是不是因为X的工作太辛苦，需要一些工作和生活的平衡
    ？我笑了笑，敷衍了几句，心里想起了《冰与火之歌》里的那一句台词——

    > 雪诺，你什么也不懂。

    refs and see also

      - [关于”做人工智能是否一定要学点生物“ - 远东轶事 - 知乎专栏](http://zhuanlan.zhihu.com/p/19953128)
      - [转职半年总结 - 远东轶事 - 知乎专栏](http://zhuanlan.zhihu.com/p/20111731)

[GitHub 上有哪些有趣的关于 NLP 或者 DL 的项目？ - 知乎](https://www.zhihu.com/question/36853910)

[机器学习该怎么入门？ - 知乎](https://www.zhihu.com/question/20691338)

[机器学习经典论文/survey合集 - 机器学习 - 算法组](http://suanfazu.com/t/ji-qi-xue-xi-jing-dian-lun-wen-slash-surveyhe-ji/14)

[机器学习经典书籍 - 机器学习 - 算法组](http://suanfazu.com/t/topic/15)

[机器学习入门资源不完全汇总 | 好东西传送门出品](http://ml.memect.com/article/machine-learning-guide.html)

[机器学习 - 标签 - tornadomeet - 博客园](http://www.cnblogs.com/tornadomeet/tag/%E6%9C%BA%E5%99%A8%E5%AD%A6%E4%B9%A0/)

[Best | GitXiv](http://gitxiv.com/best)

[机器学习 - 话题精华 - 知乎](https://www.zhihu.com/topic/19559450/top-answers)

[深度学习（Deep Learning） - 话题精华 - 知乎](https://www.zhihu.com/topic/19813032/top-answers?page=1)

[神经网络 - 话题精华 - 知乎](https://www.zhihu.com/topic/19607065/top-answers)

```
// euclidean distance
distance d -> [0, inf], 1/(d+1) -> [0, 1]

// pearson correlation score
best-fit line
similarity metric: sim_pearson, sim_distance
```

[Metric (mathematics) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Metric_(mathematics)#Examples)

[Pearson product-moment correlation coefficient - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Pearson_product-moment_correlation_coefficient)

<http://whudoc.qiniudn.com/2016/notepad++.7z>

[cataska/programming-collective-intelligence-code: Examples from Programming Collective Intelligence](https://github.com/cataska/programming-collective-intelligence-code)

[集体智慧编程 (豆瓣)](https://book.douban.com/subject/3288908/)

[Programming Collective Intelligence - O'Reilly Media](http://shop.oreilly.com/product/9780596529321.do)

[Programming Collective Intelligence (豆瓣)](https://book.douban.com/subject/2209702/) -<

:   -   simulated annealing（模拟退火）
    -   genetic algorithms（遗传算法） +<
        +   population（种群），hand-designed or 随机的；user-defined task
        +   elitism（精英选拔）
        +   mutation（变异）
        +   crossover/breeding
        +   优胜劣汰的 evolutionary pressure：survival of the fittest
        +   a round-robin tournament
        +   evaluating trees
    -   massand-spring algorithms（质点弹簧算法）
    -   flipping around（调换求解）
    -   decision trees +<
        +   CART（classification and regression trees）
        +   pruning the tree（剪枝）
    -   kNN: k-Nearest Neighbors +<
        +   weighted kNN
        +   cross validation（交叉验证）
    -   kernel methods
        +   kernel trick: radial-basis function （径向基函数）
    -   SVM +<
        +   mamimum-margin hyperplane
        +   位于分割线：支持向量
        +   找到支持向量的算法：支持向量机
    -   data intensive（数据量大）
    -   libsvm
    -   bayesian classification
    -   trading volume（成交量）
    -   Non-negative Matrix Factorization (NFM)
    -   tanimoto coefficient
    -   gini impurity
    -   entropy

    Other Books -<

    :   -   [Data Mining (豆瓣)](https://book.douban.com/subject/4888560/)
        -   [Data Mining (豆瓣)](https://book.douban.com/subject/6533777/)
        -   [Pattern Recognition And Machine Learning (豆瓣)](https://book.douban.com/subject/2061116/)
        -   [Christopher M. Bishop | PRML](http://research.microsoft.com/en-us/um/people/cmbishop/PRML/)

        ![](http://whudoc.qiniudn.com/2016/prmlfigs-png/Figure1.1.png)

[Backgammon - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Backgammon)

CS229, Machine Learning, Andrew Ng, Sanford University -<

:   Advice for applying Machine Learning -<

    :   Key ideas -<

        :   1.  Diagnostics for debugging learning algorithms.
        :   2.  Error analyses and ablative analysis.
        :   3.  How to get started on a machine learning problem.
                Premature (statistical) optimization.

        Diagnostic for bias vs. variance -<

        :   Suppose you suspect the problem is either:

              - Overfitting (high variance).
              - Too few features to classify spam (high bias).

            Diagnostic:

              - Variance: Training error will be much lower than test error.
              - Bias: Training error will also be high.

            ![Typical learning curve for high variance](http://whudoc.qiniudn.com/2016/20160505134652.png)

              - Test error still decreasing as m increases. Suggests larger training set
                will help.
              - Large gap between training and test error.

            ![Typical learning curve for high bias](http://whudoc.qiniudn.com/2016/20160505135614.png)

              - Even training error is unacceptably high.
              - Small gap between training and test error.

        Is the algorithm (gradient descent for logistic regression) converging?

        Error analysis & Ablative (`['æblətɪv]`, 离格) analysis -<

        :   ![](http://whudoc.qiniudn.com/2016/20160505142736.png)

            Error analysis tries to explain the difference between current performance and perfect performance.
            Ablative analysis tries to explain the difference between some baseline (much poorer) performance and current performance.

            Just what accounts for your improvement from 94 to 99.9%?

        Getting started on a learning problem +<

        :   -   Approach #1: **Careful design**

            -   Approach #2: **Build-and-fix**

                Implement something quick-and-dirty

        Premature statistical optimization

        :   is bad.

            The only way to find out what needs work is to implement something quickly,
            and find out what parts break.

        Sammary +<

        -   Time spent coming up with diagnostics for learning algorithms is time
            well-spent.
        -   It's often up to your own ingenuity (`[,ɪndʒə'nuəti]`, n. 独创性；精巧) to
            come up with right diagnostics.
        -   Error analyses and ablative analyses also give insight into the problem.
        -   Two approaches to applying learning algorithms:
            +   Design very carefully, then implement.
                *   Risk of premature (statistical) optimization.
            +   Build a quick-and-dirty prototype, diagnose, and fix.

Wikipedia -<

:   [Machine learning - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Machine_learning)

[Tensor - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Tensor) -<

:   Tensors are geometric objects that describe linear relations between
    geometric vectors, scalars, and other tensors. Elementary examples of such
    relations include the dot product, the cross product, and linear maps.
    Euclidean vectors, often used in physics and engineering applications, and
    scalars themselves are also tensors. A more sophisticated example is the
    Cauchy stress tensor T, which takes a direction v as input and produces the
    stress T(v) on the surface normal to this vector for output, thus
    expressing a relationship between these two vectors, shown in the figure
    (right).

    ![Cauchy stress tensor, a second-order tensor. The tensor's components, in
    a three-dimensional Cartesian coordinate system, form the matrix
    $$\begin{align} \sigma & = \begin{bmatrix}\mathbf{T}^{(\mathbf{e}_1)}
    \mathbf{T}^{(\mathbf{e}_2)} \mathbf{T}^{(\mathbf{e}_3)} \\ \end{bmatrix} \\
    & = \begin{bmatrix} \sigma_{11} & \sigma_{12} & \sigma_{13} \\ \sigma_{21}
    & \sigma_{22} & \sigma_{23} \\ \sigma_{31} & \sigma_{32} & \sigma_{33}
    \end{bmatrix}\\ \end{align}$$ whose columns are the stresses (forces per unit
    area) acting on the e1, e2, and e3 faces of the cube.](https://upload.wikimedia.org/wikipedia/commons/thumb/4/45/Components_stress_tensor.svg/450px-Components_stress_tensor.svg.png)

    In terms of a coordinate basis or fixed frame of reference, a tensor can be
    represented as an organized multidimensional array of numerical values. The
    order (also degree or rank) of a tensor is the dimensionality of the array
    needed to represent it, or equivalently, the number of indices needed to
    label a component of that array. For example, a linear map is represented
    by a matrix (a 2-dimensional array) in a basis, and therefore is a
    2nd-order tensor. A vector is represented as a 1-dimensional array in a
    basis, and is a 1st-order tensor. Scalars are single numbers and are thus
    0th-order tensors. Because they express a relationship between vectors,
    tensors themselves must be independent of a particular choice of coordinate
    system. The coordinate independence of a tensor then takes the form of a
    "covariant" transformation law that relates the array computed in one
    coordinate system to that computed in another one. The precise form of the
    transformation law determines the type (or valence) of the tensor. The
    tensor type is a pair of natural numbers (n, m), where n is the number of
    contravariant indices and m is the number of covariant indices. The total
    order of a tensor is the sum of these two numbers.

    Tensors are important in physics because they provide a concise
    mathematical framework for formulating and solving physics problems in
    areas such as elasticity, fluid mechanics, and general relativity. Tensors
    were first conceived by Tullio Levi-Civita and Gregorio Ricci-Curbastro,
    who continued the earlier work of Bernhard Riemann and Elwin Bruno
    Christoffel and others, as part of the absolute differential calculus. The
    concept enabled an alternative formulation of the intrinsic differential
    geometry of a manifold in the form of the Riemann curvature tensor.

[Tutorial — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/tutorial/) -<

:   Theano is a Python library that allows you to define, optimize, and
    evaluate mathematical expressions involving multi-dimensional arrays
    efficiently.

    @include <-=include/theano.md=

---

[TensorFlow中文社区-首页](http://tensorfly.cn/) -<

:   TensorFlow™ 是一个采用数据流图（data flow graphs），用于数值计算的开源软件
    库。节点（Nodes）在图中表示数学操作，图中的线（edges）则表示在节点间相互联
    系的多维数据数组，即张量（tensor）。它灵活的架构让你可以在多种平台上展开计
    算，例如台式计算机中的一个或多个CPU（或GPU），服务器，移动设备等等。
    TensorFlow 最初由Google大脑小组（隶属于Google机器智能研究机构）的研究员和工
    程师们开发出来，用于机器学习和深度神经网络方面的研究，但这个系统的通用性使
    其也可广泛用于其他计算领域。


    什么是数据流图（Data Flow Graph）? -<

    :   数据流图用“结点”（nodes）和“线”(edges)的有向图来描述数学计算。“节点” 一
        般用来表示施加的数学操作，但也可以表示数据输入（feed in）的起点/输出（
        push out）的终点，或者是读取/写入持久变量（persistent variable）的终点
        。“线”表示“节点”之间的输入/输出关系。这些数据“线”可以输运“size可动态调
        整”的多维数据数组，即“张量”（tensor）。张量从图中流过的直观图像是这个工
        具取名为“Tensorflow”的原因。一旦输入端的所有张量准备好，节点将被分配到
        各种计算设备完成异步并行地执行运算。

        ![](http://tensorfly.cn/images/tensors_flowing.gif)

    [介绍 | TensorFlow 官方文档中文版](http://tensorfly.cn/tfdoc/get_started/introduction.html)

    refs and see also

      - [介绍 | TensorFlow 官方文档中文版](http://tensorfly.cn/tfdoc/get_started/introduction.html)
      - [MNIST 入门 | TensorFlow 官方文档中文版](http://tensorfly.cn/tfdoc/tutorials/mnist_beginners.html)
      - [下载及安装 | TensorFlow 官方文档中文版](http://tensorfly.cn/tfdoc/get_started/os_setup.html)

[A Neural Network Playground](http://playground.tensorflow.org/#activation=sigmoid&batchSize=14&dataset=xor&regDataset=reg-plane&learningRate=0.3&regularizationRate=0&noise=5&networkShape=3,8,8,8,4,2&seed=0.40288&showTestData=true&discretize=false&percTrainData=70&x=true&y=true&xTimesY=false&xSquared=false&ySquared=false&cosX=false&sinX=false&cosY=false&sinY=false&collectStats=false&problem=classification&discretize_hide=false) -<

:   torch -> tensorflow

[Neural networks and deep learning](http://neuralnetworksanddeeplearning.com/index.html)

AND, OR, and NAND.^[[NAND gate - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/NAND_gate).] -<

:   NAND gate (negative-AND). The function NAND(a1, a2, ..., an) is logically equivalent to NOT(a1 AND a2 AND ... AND an).

    -- ---  --------
    A   B   A NAND B
    -- ---  --------
    0   0       1
    0   1       1
    1   0       1
    1   1       0
    -- ---  --------

    a NAND example

    ![](http://neuralnetworksanddeeplearning.com/images/tikz2.png)

    -   input `00` -> `(−2)∗0+(−2)∗0+3= 3` -> output: 3
    -   input `11` -> `(−2)∗1+(−2)∗1+3=-1` ->  output: -1

    sigmoid: This shape is a smoothed out version of a step function.

    output would be 1 or 0 depending on whether w⋅x+b was positive or negative

    28 by 28 pixel images of scanned handwritten digits, and so the input layer contains 784=28×28

    ![](http://neuralnetworksanddeeplearning.com/images/tikz12.png)

    Supposing the neural network functions in this way, we can give a plausible
    explanation for why it's better to have 10 outputs from the network, rather
    than 4. If we had 4 outputs, then the first output neuron would be trying
    to decide what the most significant bit of the digit was. And there's no
    easy way to relate that most significant bit to simple shapes like those
    shown above. It's hard to imagine that there's any good historical reason
    the component shapes of the digit will be closely related to (say) the most
    significant bit in the output.

[Download and Setup](https://www.tensorflow.org/versions/r0.8/get_started/os_setup.html#pip-installation) -<

:   ```bash
    sudo pip install --upgrade https://storage.googleapis.com/tensorflow/linux/cpu/tensorflow-0.8.0-cp27-none-linux_x86_64.whl
    python -c 'import os; import inspect; import tensorflow; print(os.path.dirname(inspect.getfile(tensorflow)))'
    /usr/local/lib/python2.7/dist-packages/tensorflow
    ```

    ```bash
    # Using 'python -m' to find the program in the python search path:
    $ python -m tensorflow.models.image.mnist.convolutional
    Extracting data/train-images-idx3-ubyte.gz
    Extracting data/train-labels-idx1-ubyte.gz
    Extracting data/t10k-images-idx3-ubyte.gz
    Extracting data/t10k-labels-idx1-ubyte.gz
    ...etc...

    # You can alternatively pass the path to the model program file to the python
    # interpreter (make sure to use the python distribution you installed
    # TensorFlow to, for example, .../python3.X/... for Python 3).
    $ python /usr/local/lib/python2.7/dist-packages/tensorflow/models/image/mnist/convolutional.py
    ...
    ```

[机器学习（一）：生成学习算法Generative Learning algorithms - zjgtan - 博客园](http://www.cnblogs.com/zjgtan/archive/2013/06/08/3127490.html)

Rectifier (neural networks) -<

:   In the context of artificial neural networks, the rectifier is an
    activation function defined as

    $$f(x) = \max(0, x)$$

    where x is the input to a neuron. This is also known as a ramp function,
    and it is analogous to half-wave rectification in electrical engineering.
    This activation function has been argued to be more biologically plausible
    than the widely used logistic sigmoid (which is inspired by probability
    theory; see logistic regression) and its more practical counterpart, the
    hyperbolic tangent. The rectifier is, as of 2015, the most popular
    activation function for deep neural networks.

    ![Plot of the rectifier (blue) and softplus (green) functions near
        x = 0.](https://upload.wikimedia.org/wikipedia/en/thumb/6/6c/Rectifier_and_softplus_functions.svg/330px-Rectifier_and_softplus_functions.svg.png)

    A unit employing the rectifier is also called a rectified linear unit (ReLU).

    A smooth approximation to the rectifier is the analytic function

    $$f(x) = \ln(1 + e^x)$$

    which is called the softplus function. The derivative of softplus is
    $f'(x) = e^x / (e^x+1) = 1 / (1 + e^{-x})$, i.e. the logistic function.

    Rectified linear units find applications in computer vision, and speech
    recognition using deep neural nets.

[UFLDL 教程 - Ufldl](http://deeplearning.stanford.edu/wiki/index.php/UFLDL%E6%95%99%E7%A8%8B) -<

:   如果选择 \textstyle f(z) = 1/(1+\exp(-z)) ，也就是 sigmoid 函数，那么它的导
    数就是 \textstyle f'(z) = f(z) (1-f(z)) （如果选择 tanh 函数，那它的导数就
    是 \textstyle f'(z) = 1- (f(z))^2 ，你可以根据 sigmoid（或 tanh）函数的定义
    自行推导这个等式。

[Qix/dl.md at master · ty4z2008/Qix](https://github.com/ty4z2008/Qix/blob/master/dl.md)

[CSC2515F : lectures](http://www.cs.nyu.edu/~roweis/csc2515-2006/lectures.html)

[CIE 1931 color space - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/CIE_1931_color_space) -<

:   [Lab color space - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Lab_color_space) +<

    :   A Lab color space is a color-opponent space with dimension L for
        lightness and a and b for the color-opponent dimensions, based on
        nonlinearly compressed (e.g. CIE XYZ color space) coordinates.

[Minimum distance estimation - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Minimum_distance_estimation)

[余凯在清华的讲座笔记 - huangbo10 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/huangbo10/article/details/22944007)

[Learning and neural networks - Wikiversity](https://en.wikiversity.org/wiki/Learning_and_neural_networks)

[Hacker's guide to Neural Networks](http://karpathy.github.io/neuralnets/) -<

:   [Andrej Karpathy Academic Website](http://cs.stanford.edu/people/karpathy/)

    这里有更完整的代码和 materials。

    -   [CS231n Convolutional Neural Networks for Visual Recognition](http://cs231n.github.io/)
    -   [Stanford University CS231n: Convolutional Neural Networks for Visual Recognition](http://cs231n.stanford.edu/syllabus.html)

    More materials

    -   [Artificial neural network - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Artificial_neural_network)
    -   [Artificial neural network - Wikipedia, the free encyclopedia](https://en.m.wikipedia.org/wiki/Artificial_neural_network)

    @include <-=include/nn-hackers-guide.md=

---

附录
----

这是我当时查看了的一些资料，留作笔记。

Multilayer perceptron

:   A multilayer perceptron (MLP) is a feedforward artificial neural network
    model that maps sets of input data onto a set of appropriate outputs. An MLP
    consists of multiple layers of nodes in a directed graph, with each layer fully
    connected to the next one. Except for the input nodes, each node is a neuron
    (or processing element) with a nonlinear activation function. MLP utilizes a
    supervised learning technique called backpropagation for training the network.
    MLP is a modification of the standard linear perceptron and can distinguish
    data that are not linearly separable.

    The term "multilayer perceptron" often causes confusion. It is argued the
    model is not a single perceptron that has multiple layers. Rather, it
    contains many perceptrons that are organised into layers, leading some to
    believe that a more fitting term might therefore be "multilayer perceptron
    network". Moreover, these "perceptrons" are not really perceptrons in the
    strictest possible sense, as true perceptrons are a special case of
    artificial neurons that use a threshold activation function such as the
    Heaviside step function, whereas the artificial neurons in a multilayer
    perceptron are free to take on any arbitrary activation function.
    Consequently, whereas a true perceptron performs binary classification, a
    neuron in a multilayer perceptron is free to either perform classification
    or regression, depending upon its activation function.

Artificial neural network

:   In machine learning and cognitive science, artificial neural networks
    (ANNs) are a family of models inspired by biological neural networks (the
    central nervous systems of animals, in particular the brain) and are used to
    estimate or approximate functions that can depend on a large number of inputs
    and are generally unknown. Artificial neural networks are generally presented
    as **systems of interconnected "neurons" which exchange messages between each
    other**. The connections have numeric weights that can be tuned based on
    experience, making neural nets **adaptive to inputs** and **capable of learning**.

    Like other machine learning methods - systems that learn from data - neural
    networks have been used to solve a wide variety of tasks that are hard to
    solve using ordinary rule-based programming, including computer vision and
    speech recognition.


![Multi-Layer Perceptrons (MLP)](http://docs.opencv.org/2.4/_images/mlp.png)

![We can classify people in this problem using a single layer perceptron](https://upload.wikimedia.org/wikiversity/en/thumb/2/29/Neural-Network-Example-2.jpg/500px-Neural-Network-Example-2.jpg)

![A perceptron learns by a trial and error like method. It takes the input such
    as our math and Star Trek scores and outputs what it thinks the persons job is.
    Based on how far off its guess is, we will adjust each weight slowly to
    compensate. This will move its answers over time to be more accurate](https://upload.wikimedia.org/wikiversity/en/c/cd/Neural-Network-Example-3.png)

![](https://upload.wikimedia.org/wikiversity/en/thumb/4/4a/Neural-Network-Example-4.jpg/500px-Neural-Network-Example-4.jpg)
![](https://upload.wikimedia.org/wikiversity/en/3/36/Neural-Network-Example-5.jpg)

![A Multilayer perceptron is two single layer perceptrons stacked on top of
    each other with typically a sigmoidal activation function between the two
    layers to make the numbers more crisp.](https://upload.wikimedia.org/wikiversity/en/thumb/b/b3/Neural-Network-Example-6.jpg/600px-Neural-Network-Example-6.jpg)

All the neurons in MLP are similar. Each of them has **several input links**
(it takes the output values from several neurons in the **previous layer** as
input) and **several output links** (it passes the response to several neurons
in the **next layer**). The values retrieved from the previous layer are summed
up with certain weights, individual for each neuron, plus the bias term. The
sum is transformed using the activation function $f$ that may be also different
for different neurons.


![](http://docs.opencv.org/2.4/_images/neuron_model.png)

In other words, given the outputs $x_j$ of the layer $n$ , the outputs $y_i$ of the layer $n+1$ are computed as:

$$
u_i =  \sum _j (w^{n+1}_{i,j}*x_j) + w^{n+1}_{i,bias}
$$

$$
y_i = f(u_i)
$$

Different activation functions may be used. ML implements three standard functions:


#. **Identity function** ( `CvANN_MLP::IDENTITY`{.cpp} ): $f(x)=x$

#. **Symmetrical sigmoid**[^sigmoid] ( `CvANN_MLP::SIGMOID_SYM`{.cpp} ): $f(x)=\beta*(1-e^{-\alpha x})/(1+e^{-\alpha x} )$, which is the default choice for MLP. The standard sigmoid with $\beta =1$, $\alpha =1$ is shown below:

    ![](http://docs.opencv.org/2.4/_images/sigmoid_bipolar.png)

#. **Gaussian function** ( `CvANN_MLP::GAUSSIAN`{.cpp} ): $f(x)=\beta e^{-\alpha x^2}$, which is not completely supported at the moment.

[^sigmoid]: A sigmoid function is a mathematical function having an "S" shape (sigmoid curve).

    单调递增的非线性函数，无限次可微。当且仅当权值较大时可以逼近阈值函数，当权值较小时逼线性函数。

    Besides the logistic function ($f(x) = \frac{L}{1 + \mathrm e^{-k(x-x_0)}}$),
    sigmoid functions include the ordinary arctangent, the
    hyperbolic tangent, the Gudermannian function, and the error function
    ($\operatorname{erf}(x) = \frac{2}{\sqrt\pi}\int_0^x e^{-t^2}\,\mathrm dt$),
    but also the generalised logistic function and algebraic functions
    like $f(x)=\tfrac{x}{\sqrt{1+x^2}}$.

    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6f/Gjl-t%28x%29.svg/700px-Gjl-t%28x%29.svg.png)

    &nbsp;

In ML, all the neurons have the same activation functions, with the same free
parameters ($\alpha$, $\beta$) that are specified by user and are not altered
by the training algorithms.

So, the whole trained network works as follows:

#. Take the **feature vector as input**. The vector size is equal to the size of the input layer.
#. Pass values as input to **the first hidden layer** .
#. **Compute outputs** of the hidden layer using the weights and the activation functions.
#. Pass outputs further **downstream until you compute the output layer**.

So, to compute the network, you need to know all the weights $w^{n+1}_{i,j}$.
The weights are computed by the training algorithm. The algorithm takes a
training set, multiple input vectors with the corresponding output vectors, and
iteratively adjusts the weights to enable the network to give the desired
response to the provided input vectors.

The larger the network size (the number of hidden layers and their sizes) is,
the more the **potential network flexibility** is. The error on the training set
could be made arbitrarily small. But at the same time the learned network also
“learns” the noise present in the training set, so the error on the test set
usually starts increasing after the network size reaches a limit. Besides, the
larger networks are trained much longer than the smaller ones, so it is
reasonable to pre-process the data, using `PCA::operator()`{.cpp} or similar technique,
and train a smaller network on only essential features.

Another MLP feature is an inability to handle categorical data as is. However,
there is a workaround. If a certain feature in the input or output (in case of
$n$-class classifier for $n>2$) layer is categorical and can take $M>2$
different values, it makes sense to represent it as a binary tuple of $M$
elements, where the $i$-th element is 1 if and only if the feature is equal to
the $i$-th value out of $M$ possible. It increases the size of the input/output
layer but speeds up the training algorithm convergence and at the same time
enables “fuzzy” values of such variables, that is, a tuple of probabilities
instead of a fixed value.

ML implements two algorithms for training MLP’s. The first algorithm is a
classical random sequential **back-propagation**[^back-propagation] algorithm. The second (default)
one is a **batch RPROP algorithm**.

[^back-propagation]: Backpropagation, an abbreviation for "backward propagation
    of errors", is a common method of training artificial neural networks used in
    conjunction with an optimization method such as gradient descent. The method
    calculates the gradient of a loss function with respect to all the weights in
    the network. The gradient is fed to the optimization method which in turn uses
    it to update the weights, in an attempt to minimize the loss function.

    BP 算法就是通过迭代优化网络的权值使得输出与输入之间的实际映射关系与所期望的映射关系一致，
    采用梯度下降算法通过调整各层权值求目标函数最小化。

    Backpropagation requires a known, desired output for each input value in
    order to calculate the loss function gradient. It is therefore usually
    considered to be a supervised learning method, although it is also used in
    some unsupervised networks such as autoencoders. It is a generalization of
    the delta rule to multi-layered feedforward networks, made possible by
    using the chain rule to iteratively compute gradients for each layer.
    Backpropagation requires that the activation function used by the
    artificial neurons (or "nodes") be differentiable.

    Since backpropagation uses the gradient descent method, one needs to
    calculate the derivative of the squared error function with respect to the
    weights of the network. Assuming one output neuron,[note 2] the squared
    error function is:

    $$E = \tfrac{1}{2}(t - y)^2,$$

    where
      ~ $E$ is the squared error,
      ~ $t$ is the target output for a training sample, and
      ~ $y$ is the actual output of the output neuron.

    The factor of $\textstyle\frac{1}{2}$ is included to cancel the exponent
    when differentiating. Later, the expression will be multiplied with an
    arbitrary learning rate, so that it doesn't matter if a constant
    coefficient is introduced now.

    For each neuron $j$, its output $o_{j}$ is defined as

    $$o_{j} = \varphi(\mbox{net}_{j}) = \varphi\left(\sum_{k=1}^{n}w_{kj}o_k\right).$$

    The input $\mbox{net}_{j}$ to a neuron is the weighted sum of outputs o_k
    of previous neurons. If the neuron is in the first layer after the input
    layer, the $o_k$ of the input layer are simply the inputs $x_k$ to the
    network. The number of input units to the neuron is $n$. The variable
    $w_{ij}$ denotes the weight between neurons $i$ and $j$.

    The activation function $\varphi$ is in general non-linear and
    differentiable. A commonly used activation function is the logistic
    function:

    $$\varphi(z) = \frac{1}{1+e^{-z}}$$

    which has a nice derivative of:

    $$\frac {\partial\varphi}{\partial z} = \varphi(1-\varphi)$$

    Calculating the partial derivative of the error with respect to a weight
    $w_{ij}$ is done using the chain rule twice:

    $$\frac{\partial E}{\partial w_{ij}} = \frac{\partial E}{\partial o_j} \frac{\partial o_j}{\partial\mathrm{net_j}} \frac{\partial \mathrm{net_j}}{\partial w_{ij}}$$

    In the last term of the right-hand side of the following, only one term in
    the sum $\mathrm{net_j}$ depends on $w_{ij}$, so that

    $$\frac{\partial \mathrm{net_j}}{\partial w_{ij}} = \frac{\partial}{\partial w_{ij}}\left(\sum_{k=1}^{n}w_{kj}o_k\right) = o_i.$$

    If the neuron is in the first layer after the input layer, $o_i$ is just
    $x_i$. The derivative of the output of neuron $j$ with respect to its input
    is simply the partial derivative of the activation function (assuming here
    that the logistic function is used):

    $$\frac{\partial o_j}{\partial\mathrm{net_j}} = \frac {\partial}{\partial \mathrm{net_j}}\varphi(\mathrm{net_j}) = \varphi(\mathrm{net_j})(1-\varphi(\mathrm{net_j}))$$

    This is the reason why backpropagation requires the activation function to
    be differentiable.

    The first term is straightforward to evaluate if the neuron is in the
    output layer, because then $o_j = y$ and

    $$\frac{\partial E}{\partial o_j} = \frac{\partial E}{\partial y} = \frac{\partial}{\partial y} \frac{1}{2}(t - y)^2 = y - t$$

    However, if $j$ is in an arbitrary inner layer of the network, finding the derivative E with respect to $o_j$ is less obvious.

    Considering $E$ as a function of the inputs of all neurons $L = {u, v, \dots, w}$ receiving input from neuron $j$,

    $$\frac{\partial E(o_j)}{\partial o_j} = \frac{\partial E(\mathrm{net}_u, \mathrm{net}_v, \dots, \mathrm{net}_w)}{\partial o_j}$$

    and taking the total derivative with respect to $o_j$, a recursive expression for the derivative is obtained:

    $$\frac{\partial E}{\partial o_j} = \sum_{l \in L} \left(\frac{\partial E}{\partial \mathrm{net}_l}\frac{\partial \mathrm{net}_l}{\partial o_j}\right) = \sum_{l \in L} \left(\frac{\partial E}{\partial o_{l}}\frac{\partial o_{l}}{\partial \mathrm{net}_l}w_{jl}\right)$$

    Therefore, the derivative with respect to $o_j$ can be calculated if all
    the derivatives with respect to the outputs $o_l$ of the next layer - the
    one closer to the output neuron – are known.

    Putting it all together:

    $$\dfrac{\partial E}{\partial w_{ij}} = \delta_{j} o_{i}$$

    with

    $$\delta_{j} = \frac{\partial E}{\partial o_j} \frac{\partial o_j}{\partial\mathrm{net_j}} = \begin{cases}
    (o_{j}-t_{j})\varphi(\mbox{net}_{j})(1-\varphi(\mbox{net}_{j})) & \mbox{if } j \mbox{ is an output neuron,}\\
    (\sum_{l\in L} \delta_{l} w_{jl})\varphi(\mbox{net}_{j})(1-\varphi(\mbox{net}_{j}))  & \mbox{if } j \mbox{ is an inner neuron.}
    \end{cases}$$

    To update the weight $w_{ij}$ using gradient descent, one must choose a
    learning rate, $\alpha$. The change in weight, which is added to the old
    weight, is equal to the product of the learning rate and the gradient,
    multiplied by -1:

    $$\Delta w_{ij} = - \alpha \frac{\partial E}{\partial w_{ij}}$$

    The $\textstyle -1$ is required in order to update in the direction of a minimum, not a maximum, of the error function.

    For a single-layer network, this expression becomes the Delta Rule. To better understand how backpropagation works, here is an example to illustrate it: The Back Propagation Algorithm, page 20.

    Limitations

    #. Gradient descent can find the local minimum instead of the global
       minimum Gradient descent with backpropagation is not guaranteed to global
       minimum of the error function, but only a local minimum; also, it has
       trouble crossing plateaus in the error function landscape. This issue,
       caused by the non-convexity of error functions in neural networks, was long
       thought to be a major drawback, but in a 2015 review article, Yann LeCun et
       al. argue that in many practical problems, it isn't.
    #. Backpropagation learning does not require normalization of input
       vectors; however, normalization could improve performance

    A simple neural network with two input units and one output unit:

    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/4/42/A_simple_neural_network_with_two_input_units_and_one_output_unit.png/250px-A_simple_neural_network_with_two_input_units_and_one_output_unit.png)

    gradient descent:

    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1e/Extrema_example.svg/250px-Extrema_example.svg.png)

    &nbsp;

CvANN_MLP
---------

`CvANN_MLP::create`{.cpp}

:   Constructs MLP with the specified topology.

    Unlike many other models in ML that are constructed and trained at once, in the
    MLP model these steps are separated. First, a network with the specified
    topology is created using the non-default constructor or the method
    `CvANN_MLP::create()`{.cpp}. All the weights are set to zeros. Then, the network is
    **trained using a set of input and output vectors**. The training procedure can be
    repeated more than once, that is, the weights can be adjusted based on the new
    training data.

    ```cpp
    void CvANN_MLP::create( const Mat& layerSizes,
                            int activateFunc=CvANN_MLP::SIGMOID_SYM,
                            double fparam1=0,
                            double fparam2=0 );

    void CvANN_MLP::create( const CvMat* layerSizes,
                            int activateFunc=CvANN_MLP::SIGMOID_SYM,
                            double fparam1=0,
                            double fparam2=0 );
    ```

    Parameters

    i. `layerSizes` – Integer vector specifying the number of neurons in each
       layer including the input and output layers.
    #. `activateFunc` – Parameter specifying the activation function for each
       neuron: one of `CvANN_MLP::IDENTITY`{.cpp}, `CvANN_MLP::SIGMOID_SYM`{.cpp},
       and `CvANN_MLP::GAUSSIAN`{.cpp}.
    #. `fparam1` – Free parameter of the activation function, $\alpha$. See the
       formulas in the introduction section.
    #. `fparam2` – Free parameter of the activation function, $\beta$. See the
       formulas in the introduction section.

`CvANN_MLP::train`{.cpp}

:   Trains/updates MLP.

    ```cpp
    int CvANN_MLP::train( const Mat& inputs,
                          const Mat& outputs,
                          const Mat& sampleWeights,
                          const Mat& sampleIdx=Mat(),
                          CvANN_MLP_TrainParams params=CvANN_MLP_TrainParams(),
                          int flags=0 );

    int CvANN_MLP::train( const CvMat* inputs,
                          const CvMat* outputs,
                          const CvMat* sampleWeights,
                          const CvMat* sampleIdx=0,
                          CvANN_MLP_TrainParams params=CvANN_MLP_TrainParams(),
                          int flags=0 );
    ```

    i. `inputs` – Floating-point matrix of input vectors, one vector per row.
    #. `outputs` – Floating-point matrix of the corresponding output vectors, one vector per row.
    #. `sampleWeights` – (`RPROP` only) Optional floating-point vector of weights for each sample. Some samples may be more important than others for training. You may want to raise the weight of certain classes to find the right balance between hit-rate and false-alarm rate, and so on.
    #. `sampleIdx` – Optional integer vector indicating the samples (rows of inputs and outputs) that are taken into account.
    params – Training parameters. See the `CvANN_MLP_TrainParams`{.cpp} description.
    #. `flags`
        * Various parameters to control the training algorithm. A combination of the following parameters is possible:

            + `UPDATE_WEIGHTS` Algorithm updates the network weights, rather than
              computes them from scratch. In the latter case the weights are
              initialized using the Nguyen-Widrow algorithm.
            + `NO_INPUT_SCALE` Algorithm does not normalize the input vectors. If
              this flag is not set, the training algorithm normalizes each input
              feature independently, shifting its mean value to 0 and making the
              standard deviation equal to 1. If the network is assumed to be updated
              frequently, the new training data could be much different from original
              one. In this case, you should take care of proper normalization.
            + `NO_OUTPUT_SCALE` Algorithm does not normalize the output vectors. If
              the flag is not set, the training algorithm normalizes each output
              feature independently, by transforming it to the certain range
              depending on the used activation function.

`CvANN_MLP::predict`{.cpp}

:   Predicts responses for input samples.

    ```cpp
    float CvANN_MLP::predict( const Mat& inputs,
                              Mat& outputs) const;

    float CvANN_MLP::predict( const CvMat* inputs,
                              CvMat* outputs) const;
    ```

    If you are using the default `cvANN_MLP::SIGMOID_SYM` activation function
    with the default parameter values fparam1=0 and fparam2=0 then the function
    used is y = 1.7159*tanh(2/3 * x), so the output will range from [-1.7159,
    1.7159], instead of [0,1].

`int CvANN_MLP::get_layer_count()`

`const CvMat* CvANN_MLP::get_layer_sizes();`{.cpp}

`double *CvANN_MLP::get_weights( int layer );`{.cpp}

An example
----------

```cpp
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/ml/ml.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

int main()
{
    CvANN_MLP bp;

    //  CvANN_MLP_TrainParams::CvANN_MLP_TrainParams()
    //  {
    //      term_crit = cvTermCriteria(
    //              CV_TERMCRIT_ITER + CV_TERMCRIT_EPS, 1000, 0.01 );
    //      train_method = RPROP;
    //      bp_dw_scale = bp_moment_scale = 0.1;
    //      rp_dw0 = 0.1; rp_dw_plus = 1.2; rp_dw_minus = 0.5;
    //      rp_dw_min = FLT_EPSILON; rp_dw_max = 50.;
    //  }
    CvANN_MLP_TrainParams params;

    // CvANN_MLP_TrainParams::BACKPROP The back-propagation algorithm.
    // CvANN_MLP_TrainParams::RPROP The RPROP algorithm.
    params.train_method = CvANN_MLP_TrainParams::BACKPROP;

    // Strength of the weight gradient term. The recommended value is about 0.1
    // params.bp_dw_scale = 0.1;

    // Strength of the momentum term (the difference between weights on the 2
    // previous iterations). This parameter provides some inertia to smooth the
    // random fluctuations of the weights. It can vary from 0 (the feature is
    // disabled) to 1 and beyond. The value 0.1 or so is good enough
    // params.bp_moment_scale = 0.1;

    // Initial value \Delta_0 of update-values \Delta_{ij}.
    // params.rp_dw0 = 0.1;

    // Increase factor \eta^+. It must be >1.
    // params.rp_dw_plus = 1.2;

    // Decrease factor \eta^-. It must be <1.
    // params.rp_dw_minus = 0.5;

    // Update-values lower limit \Delta_{min}. It must be positive.
    // params.rp_dw_min = FLT_EPSILON;

    // Update-values upper limit \Delta_{max}. It must be >1.
    // params.rp_dw_max = 50.;

    // void CvANN_MLP::create(const Mat& layerSizes,
    //                        int activateFunc=CvANN_MLP::SIGMOID_SYM,
    //                        double fparam1=0,
    //                        double fparam2=0 )
    // * layerSizes – #neurons in each layer including the input/output layers
    // * activateFunc – activation function for each neuron
    //      CvANN_MLP::IDENTITY
    //      CvANN_MLP::SIGMOID_SYM
    //      CvANN_MLP::GAUSSIAN
    // * fparam1 – Free parameter of the activation function, \alpha
    // * fparam2 – Free parameter of the activation function, \beta
    Mat layerSizes=(Mat_<int>(1,5) << 5,2,2,2,5);
    bp.create( layerSizes, CvANN_MLP::SIGMOID_SYM );

    // int CvANN_MLP::train(
    //      const Mat& inputs,
    //      const Mat& outputs,
    //      const Mat& sampleWeights,
    //      const Mat& sampleIdx=Mat(),
    //      CvANN_MLP_TrainParams params=CvANN_MLP_TrainParams()
    //      int flags=0 )

    float trainingData[3][5] = {
        {   1,   2,   3,   4,  5 },
        { 111, 112, 113, 114, 115},
        {  21,  22,  23,  24,  25},
    };
    Mat trainingDataMat(3, 5, CV_32FC1, trainingData);

    float labels[3][5] = {
        { 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0 },
        { 1, 1, 1, 1, 1 },
    };
    Mat labelsMat(3, 5, CV_32FC1, labels);

    bp.train( trainingDataMat, labelsMat, Mat(), Mat(), params );

    // Data for visual representation
    int width = 512, height = 512;
    Mat image = Mat::zeros( height, width, CV_8UC3 );
    Vec3b green( 0, 255, 0 ), blue ( 255, 0, 0 );

    // Show the decision regions given by the SVM
    for ( int i = 0; i < image.rows; ++i ) {
        for ( int j = 0; j < image.cols; ++j ) {
            Mat sampleMat = (Mat_<float>(1,5) << i,j,0,0,0);
            Mat responseMat;
            bp.predict( sampleMat, responseMat );
            float *p = responseMat.ptr<float>(0);
            float response = 0.0f;
            for( int k=0; k < 5; k++ ) {
                response += p[k];
            }
            if ( response > 2 ) {
                image.at<Vec3b>(j, i)  = green;
            } else {
                image.at<Vec3b>(j, i)  = blue;
            }
        }
    }

    // Show the training data
    circle( image, Point(501,  10), 5, Scalar(  0,   0,   0), -1, 8 );
    circle( image, Point(255,  10), 5, Scalar(255, 255, 255), -1, 8 );
    circle( image, Point(501, 255), 5, Scalar(255, 255, 255), -1, 8 );
    circle( image, Point( 10, 501), 5, Scalar(255, 255, 255), -1, 8 );

    imwrite("result.png", image);       // save the image
    imshow("BP Simple Example", image); // show it to the user
    cvWaitKey(0);
}
```

---

**参考文献**

#. [Artificial neural network - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Artificial_neural_network)
#. [Backpropagation - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Backpropagation)
#. [Backpropagation](http://galaxy.agh.edu.pl/~vlsi/AI/backp_t_en/backprop.html) &hearts;
#. [Class: OpenCV::CvANNMLPTrainParams — Documentation by YARD 0.8.7.4](http://ropencv.aduda.eu/doc/OpenCV/CvANNMLPTrainParams.html)
#. [Learning and neural networks - Wikiversity](https://en.wikiversity.org/wiki/Learning_and_Neural_Networks)
#. [Multilayer perceptron - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Multilayer_perceptron)
#. [Neural Networks — OpenCV 2.4.12.0 documentation](http://docs.opencv.org/2.4/modules/ml/doc/neural_networks.html)
#. [OpenCV进阶之路：神经网络识别车牌字符 - ☆Ronny丶 - 博客园](http://www.cnblogs.com/ronny/p/opencv_road_more_01.html)
#. [Sigmoid function - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Sigmoid_function)
#. [【模式识别】OpenCV中使用神经网络 CvANN_MLP - 小魏的修行路 - 博客频道 - CSDN.NET](http://blog.csdn.net/xiaowei_cqu/article/details/9027617)
#. [【模式识别】反向传播神经网络 BPNN - 小魏的修行路 - 博客频道 - CSDN.NET](http://blog.csdn.net/xiaowei_cqu/article/details/9023247)
#. [感知器与梯度下降 - ☆Ronny丶 - 博客园](http://www.cnblogs.com/ronny/p/ann_01.html)
#. [神经网络：多层网络与C++实现 - ☆Ronny丶 - 博客园](http://www.cnblogs.com/ronny/p/ann_02.html)
#. [OpenCV: cv::ml::ANN_MLP Class Reference](http://docs.opencv.org/master/d0/dce/classcv_1_1ml_1_1ANN__MLP.html#ac24cc2e2fc5cd1dd74fd5da31886fbb7)
#. [Miscellaneous Image Transformations — OpenCV 2.3.2 documentation](http://www.opencv.org.cn/opencvdoc/2.3.2/html/modules/imgproc/doc/miscellaneous_transformations.html)
#. [OpenCV: cv::ml::StatModel Class Reference](http://docs.opencv.org/master/db/d7d/classcv_1_1ml_1_1StatModel.html#a1f3854a1d367973da4c27dc5f54d3348)
#. [OpenCV: cv::ml::ANN_MLP Class Reference](http://docs.opencv.org/master/d0/dce/classcv_1_1ml_1_1ANN__MLP.html#afb51e414f22dd69f281a569145ccfad7)
#. [OpenCV: cv::ml::TrainData Class Reference](http://docs.opencv.org/master/dc/d32/classcv_1_1ml_1_1TrainData.html)
#. [OpenCV: cv::ml::TrainData Class Reference](http://docs.opencv.org/master/dc/d32/classcv_1_1ml_1_1TrainData.html#a1f2950eb49e251cafa3a62a8afc8ed72)
#. [Back-propagation Neural Net - CodeProject](http://www.codeproject.com/Articles/13582/Back-propagation-Neural-Net)
#. [Test Run - Neural Network Back-Propagation for Programmers](https://msdn.microsoft.com/en-us/magazine/jj658979.aspx)
