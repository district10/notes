---
title: Caffe 笔记
...

# Caffe 笔记

## caffe basic

installation, howto?? see yhlleo's blog post: [Ubuntu14.04 安装CUDA7.5 + Caffe + cuDNN](http://blog.csdn.net/YhL_Leo/article/details/50961542).

[BVLC/caffe: Caffe: a fast open framework for deep learning.](https://github.com/BVLC/caffe)

-   [预备知识](pre.html){title=pre.md .hide}：Linux + Python

-   [官网教程导读](tutorial.html){.featured .heart title=tutorial.md}

    必读。Caffe 基础。

-   [protobuf](protobuf.html){title=protobuf.md}

-   [暂未归类笔记](misc.html){.flag title=misc.md}

    I'm working on this right now.

-   [wiki](wiki.html){title=wiki.md .hide}

## caffe 代码

My fork: [district10/caffe-rc3: Play with caffe.](https://github.com/district10/caffe-rc3)

:   我注解过的 notebook：^[虽然 GitHub 现在支持显示 `.ipynb` 文件，我还是更喜欢 jupyter 提供的 nbviewer 链接。]

    -   [00-classification.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/00-classification.ipynb){.heart}

        ```
        filters([n,k,h,w])---->transpose(0,2,3,1)---->filters([n,h,w,k])---->feed into----> vis_square
        ```

        ```python
        # the parameters are a list of [weights, biases]
        filters = net.params['conv1'][0].data
        vis_square(filters.transpose(0, 2, 3, 1))
        ```

        refer to ...

    -   [01-learning-lenet.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/01-learning-lenet.ipynb)

    -   [02-brewing-logreg.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/02-brewing-logreg.ipynb)

    -   [03-fine-tuning.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/03-fine-tuning.ipynb)

    -   [net_surgery.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/net_surgery.ipynb)

    -   [detection.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/detection.ipynb)

---

## HED 边缘检测

My fork: [district10/hed](https://github.com/district10/hed)

:   这里有两份注释过的笔记：

    -   [HED-tutorial.ipynb](http://nbviewer.jupyter.org/github/district10/hed/blob/master/examples/hed/HED-tutorial.ipynb){.heart}

        一个用 pretrained 的 model 来测试，得到边缘结果图。这个例子运行起来很快。

    -   [solve.ipynb](http://nbviewer.jupyter.org/github/district10/hed/blob/master/examples/hed/solve.ipynb)

        训练 model。当然，训练起来很慢。需要 days，不是 hours。

---

-   [python interface](python-interface.html){title=python-interface.md .hide}

    null.

-   [matlab interface](matlab-interface.html){title=matlab-interface.md .hide}

    null.

-   [ml intro](ml-index.html){title=ml-index.md .heart}
