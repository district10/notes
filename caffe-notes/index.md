# Caffe 笔记

## caffe basic

installation, howto?? see yhlleo's blog post: [Ubuntu14.04 安装CUDA7.5 + Caffe + cuDNN](http://blog.csdn.net/YhL_Leo/article/details/50961542).

-   [预备知识](pre.html){title=pre.md}：Linux + Python

-   [官网教程导读](tutorial.html){title=tutorial.md .featured}

    必读。Caffe 基础。

-   [暂未归类笔记](misc.html){title=misc.md}

    I'm working on this right now.

## caffe 代码

My fork: [district10/caffe-rc3: Play with caffe.](https://github.com/district10/caffe-rc3)

:   我注解过的 notebook：^[虽然 GitHub 现在支持显示 `.ipynb` 文件，我还是更喜欢 jupyter 提供的 nbviewer 链接。]

    -   [00-classification.ipynb](http://nbviewer.jupyter.org/github/district10/caffe-rc3/blob/master/examples/00-classification.ipynb)

        click me to see helper function source code. `@`{.fold}

        :   ```python
            # take an array of shape (n, height, width) or (n, height, width, channels)
            # and visualize each (height, width) thing in a grid of size approx. sqrt(n) by sqrt(n)
            def vis_square(data, padsize=1, padval=0):
                data -= data.min()
                data /= data.max()

                # force the number of filters to be square
                n = int(np.ceil(np.sqrt(data.shape[0])))
                padding = ((0, n ** 2 - data.shape[0]), (0, padsize), (0, padsize)) + ((0, 0),) * (data.ndim - 3)
                data = np.pad(data, padding, mode='constant', constant_values=(padval, padval))

                # tile the filters into an image
                data = data.reshape((n, n) + data.shape[1:]).transpose((0, 2, 1, 3) + tuple(range(4, data.ndim + 1)))
                data = data.reshape((n * data.shape[1], n * data.shape[3]) + data.shape[4:])

                plt.imshow(data)
            ```

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

    -   [HED-tutorial.ipynb](http://nbviewer.jupyter.org/github/district10/hed/blob/master/examples/hed/HED-tutorial.ipynb)

        一个用 pretrained 的 model 来测试，得到边缘结果图。这个例子运行起来很快。

    -   [solve.ipynb](http://nbviewer.jupyter.org/github/district10/hed/blob/master/examples/hed/solve.ipynb)

        训练 model。当然，训练起来很慢。需要 days，不是 hours。

---

-   [python interface](python-interface.html){title=python-interface.md}

    null.

-   [matlab interface](matlab-interface.html){title=matlab-interface.md}

    null.

-   [ml intro](ml-index.html){title=ml-index.md}
