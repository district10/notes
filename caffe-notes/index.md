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

        :   null.

            关于维度的操作。（详见 notebook。） -<

            :   显示所有的 filters。4 行 5 列：

                ```python
                imshow(solver.net.params['conv1'][0].diff[:, 0].reshape(4, 5, 5, 5)
                       .transpose(0, 2, 1, 3).reshape(4*5, 5*5), cmap='gray')
                ```

                ![](http://whudoc.qiniudn.com/2016/4x5.png)

                只显示第 1 行：

                ```python
                imshow(solver.net.params['conv1'][0].diff[:5, 0].reshape(1, 5, 5, 5)
                    .transpose(0, 2, 1, 3).reshape(1*5, 5*5), cmap='gray')
                ```

                ![](http://whudoc.qiniudn.com/2016/4x1.png)

                右下角的 2x3 个 filters：

                ```python
                imshow(solver.net.params['conv1'][0].diff[[12,13,14,17,18,19], 0].reshape(2, 3, 5, 5)
                    .transpose(0, 2, 1, 3).reshape(2*5, 3*5), cmap='gray')
                ```

                ![](http://whudoc.qiniudn.com/2016/2x3.png)

    -   [02-brewing-logreg.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/02-brewing-logreg.ipynb)

    -   [03-fine-tuning.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/03-fine-tuning.ipynb)

    -   [net_surgery.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/net_surgery.ipynb)

    -   [detection.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/detection.ipynb)

        Let's run detection on an image of a bicyclist riding a fish bike in the desert (from the ImageNet challenge—no joke).

---

## HED 边缘检测

My fork: [district10/hed](https://github.com/district10/hed)

:   这里有两份注释过的笔记：

    -   [HED-tutorial.ipynb](http://nbviewer.jupyter.org/github/district10/hed/blob/master/examples/hed/HED-tutorial.ipynb){.heart}

        一个用 pretrained 的 model 来测试，得到边缘结果图。这个例子运行起来很快。

    -   [solve.ipynb](http://nbviewer.jupyter.org/github/district10/hed/blob/master/examples/hed/solve.ipynb)

        训练 model。当然，训练起来很慢。需要 days，不是 hours。

        ```python
        # make a bilinear interpolation kernel
        # credit @longjon
        def upsample_filt(size):
            factor = (size + 1) // 2 # ‘//’ 确保了结果是整数，和‘/’不一样
            if size % 2 == 1:
                center = factor - 1
            else:
                center = factor - 0.5
            og = np.ogrid[:size, :size]
            return (1 - abs(og[0] - center) / factor) * \
                   (1 - abs(og[1] - center) / factor)

        # set parameters s.t. deconvolutional layers compute bilinear interpolation
        # N.B. this is for deconvolution without groups
        # N.B. 啥意思？：
        #       Derived from the Latin (and italian) nota bene, meaning note well (take notice).：
        #       It is used to draw the attention to a certain aspect.
        def interp_surgery(net, layers):
            for l in layers:
                m, k, h, w = net.params[l][0].data.shape
                if m != k:
                    print 'input + output channels need to be the same'
                    raise
                if h != w:
                    print 'filters need to be square'
                    raise
                filt = upsample_filt(h)
                # 对 layer l 的 weights 进行设置（设置一个 filter）
                net.params[l][0].data[range(m), range(k), :, :] = filt
        ```

        ```
        image_data_param {
            root_folder: "../../data/HED-BSDS/"
            source: "../../data/HED-BSDS/train_pair.lst"
            batch_size: 1
            shuffle: true
            new_height: 192
            new_width: 193
        }
        ```

---

-   [python interface](python-interface.html){title=python-interface.md .hide}

    null.

-   [matlab interface](matlab-interface.html){title=matlab-interface.md .hide}

    null.

-   [ml intro](ml-index.html){.heart title=ml-index.md}

-   [backpropagation](backpropagation.html){.heart .featured title=backpropagation.md}
