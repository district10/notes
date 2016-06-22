# BLVC/caffe

>   [Home · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki)

[Model Zoo · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki/Model-Zoo)

:   这里介绍了 model zoo，以及各种算法训练出来的结果。

    see also [Caffe | Model Zoo](http://caffe.berkeleyvision.org/model_zoo.html).

    A caffe model is distributed as a directory containing:

    -   Solver/model prototxt(s)
    -   `readme.md` containing
        +   YAML frontmatter
            *   Caffe version used to train this model (tagged release or commit hash).
            *   `[optional]` file URL and SHA1 of the trained `.caffemodel`.
            *   `[optional]` github gist id.
        +   Information about what data the model was trained on, modeling choices, etc.
        +   License information.
    -   `[optional]` Other helpful scripts.

[Borrowing Weights from a Pretrained Network · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki/Borrowing-Weights-from-a-Pretrained-Network) -<

:   -   Weights are learnable parameters in the network, which are tuned by the back propagation phase.
    -   weights 是 caffe 生成了，并被 solver 不断修改优化，还会被时不时保存到 model 里。
    -   `caffe train —solver ourSolver.prototxt —weights theirModel.caffemodel`{.bash}
    -   上面可以载入 model 里的权重，只要我们自己定义的 prototxt 文件有同样的 layer 名，
        权重就会被导入，其他的 layer 则会被初始化。
    -   所以啊，只有把别人的 prototxt 修改一下就可以了。
    -   其实这个意思很简单。但是 wiki 里把它说得复杂了……:cry:

[Caffe | Developing and Contributing](http://caffe.berkeleyvision.org/development.html) -<

:   最让我欣赏的是关于 copyright 的那一段。说是 caffe 的 copyright 是每个 contributor 自定义的，纪录在 version control system 里。
    你应该在自己的 commit message 里写 copyright 的声明或者变更，而不是在文件里。我一直特别讨厌在源文件里加上一个巨大的、丑陋的
    copyright 声明了！:angry:

[Fine Tuning or Training Certain Layers Exclusively · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki/Fine-Tuning-or-Training-Certain-Layers-Exclusively)
