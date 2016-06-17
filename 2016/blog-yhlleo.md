# 博客摘记之 yhlleo

博客地址

-   [文章列表 - yhl_leo - 博客频道 - CSDN.NET](http://blog.csdn.net/yhl_leo)
-   [yhl's blog – Better and better.](http://115.159.156.28/)

## pdftex, etc

Package pdftex.def Error: PDF mode expected, but DVI mode detected!

:   -   latex -> `*.eps`, etc
    -   pdftex -> `*.pdf`, `*.jpg`, etc

关于OpenCV图像操作的默认参数问题

:   wrapAffine

    ```cpp
    // C++
    void warpAffine(
        InputArray src,
        OutputArray dst,
        InputArray M,
        Size dsize,
        int flags=INTER_LINEAR,
        int borderMode=BORDER_CONSTANT,
        const Scalar& borderValue=Scalar())
    ```

    其中，`M` 是一个 2x3的转换矩阵，关于获取方法，可使用getRotationMatrix2D()函数

    $$
        dst(x,y) = src(
            M_{11}x+M_{12}y+M_{13},
            M_{21}x+M_{22}y+M_{23})
    $$

    几种内插方法各有优劣，双线性插值可以视为一个折中选择，即计算量不算很大（比
    基于区域和邻域块的方法小很多），效果也过得去（一般比最邻近插值更好），源码
    编写者大概是基于此考虑，将其设置为默认参数，但是针对某些具体的应用，绝不是
    最佳选择，例如对二值图像进行旋转，我们希望旋转后的图像仍然是二值的，那选择
    最临近插值可能就更合适。关于边界外推模式，这里贴上OpenCV官方文档：Adding
    borders to your images。

    例如存储JPEG图像，图像压缩质量默认设置为95（范围为0~100，数值越大质量越好）
    ，存储为PNG时，压缩级别默认为3（0~9 越大压缩越厉害）。

求解旋转图像的最大内接矩形

:   small fix

bash: `./*.py` Permission denied

:   -   `chmod +x demo.py`{.bash}
    -   `python demo.py`{.bash}

ubuntu 14.04 gcc/g++版本降低

:   1.  install

        ```bash
        sudo apt-get install -y gcc-4.7
        sudo apt-get install -y g++-4.7
        ```

    2.  symlink

        ```bash
        cd /usr/bin
        sudo rm -r gcc
        sudo ln -sf gcc-4.7 gcc
        sudo rm -r g++
        sudo ln -sf g++-4.7 g++
        ```

uchar

:   ```cpp
    typedef unsigned char uchar;

    #define CHAR_BIT      8         /* number of bits in a char */
    #define SCHAR_MIN   (-128)      /* minimum signed char value */
    #define SCHAR_MAX     127       /* maximum signed char value */
    #define UCHAR_MAX     0xff      /* maximum unsigned char value */
    ```

caffe

:   1.  cuDNN downgrade to v3!

        ```bash
        cd lib64/
        sudo cp lib* /usr/local/cuda/lib64/
        cd ../include/
        sudo cp cudnn.h /usr/local/cuda/include/
        cd /usr/local/cuda/lib64/
        sudo rm -r libcudnn.so libcudnn.so.7.0
        sudo ln -sf libcudnn.so.7.0.64 libcudnn.so.7.0
        sudo ln -sf libcudnn.so.7.0 libcudnn.so
        sudo ldconfig
        ```

    2.  OpenCV 3

        ```bash
        pkg-config --modversion opencv
        ```

        ```makefile
        LIBRARIES += glog gflags protobuf leveldb snappy \
                lmdb boost_system hdf5_hl hdf5 m \
                opencv_core opencv_highgui opencv_imgproc opencv_imgcodecs
        ```

    3.  build caffe via make

        ```bash
        make clean

        make all -j12
        make distribute
        make pycaffe
        make matcaffe
        ```

refs and see also

  - [Package pdftex.def Error: PDF mode expected, but DVI mode detected! - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51646781)
  - [关于OpenCV图像操作的默认参数问题 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51559490){.featured}
  - [求解旋转图像的最大内接矩形 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51510432)
  - [ubuntu 14.04 gcc/g++版本降低 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51427242)
  - [Tensorflow MNIST浅层神经网络的解释和答复 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51416540)
  - [C/C++ uchar的一个有趣用法 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51377490)
  - [Caffe 工程的一些编译错误以及解决方案 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51371936)

## Object Detection

我讲解的内容主要分为三部分概括为 BBS，基于深度学习目标检测的背景，几个近几年的比
较经典的卷积神经网络，以及最后的总结。

TODO

refs and see also

  - [Object Detection: To Be Higher Accuracy and Faster - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51597496){.featured}

## Super Pixel

refs and see also

  - [OpenCV 基于超像素分割的图像区域选取方法及源码 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51386993)

## QImage <--> cv::Mat

cv::Mat2QImage

:   ```cpp
    QImage cvMat2QImage(const cv::Mat& mat)
    {
        // 8-bits unsigned, NO. OF CHANNELS = 1
        if(mat.type() == CV_8UC1)
        {
            QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
            // Set the color table (used to translate colour indexes to qRgb values)
            image.setColorCount(256);
            for(int i = 0; i < 256; i++)
            {
                image.setColor(i, qRgb(i, i, i));
            }
            // Copy input Mat
            uchar *pSrc = mat.data;
            for(int row = 0; row < mat.rows; row ++)
            {
                uchar *pDest = image.scanLine(row);
                memcpy(pDest, pSrc, mat.cols);
                pSrc += mat.step;
            }
            return image;
        }
        // 8-bits unsigned, NO. OF CHANNELS = 3
        else if(mat.type() == CV_8UC3)
        {
            // Copy input Mat
            const uchar *pSrc = (const uchar*)mat.data;
            // Create QImage with same dimensions as input Mat
            QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
            return image.rgbSwapped();
        }
        else if(mat.type() == CV_8UC4)
        {
            qDebug() << "CV_8UC4";
            // Copy input Mat
            const uchar *pSrc = (const uchar*)mat.data;
            // Create QImage with same dimensions as input Mat
            QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
            return image.copy();
        }
        else
        {
            qDebug() << "ERROR: Mat could not be converted to QImage.";
            return QImage();
        }
    }
    ```

QImage2cv::Mat

:   ```cpp
    cv::Mat QImage2cvMat(QImage image)
    {
        cv::Mat mat;
        qDebug() << image.format();
        switch(image.format())
        {
        case QImage::Format_ARGB32:
        case QImage::Format_RGB32:
        case QImage::Format_ARGB32_Premultiplied:
            mat = cv::Mat(image.height(), image.width(), CV_8UC4, (void*)image.constBits(), image.bytesPerLine());
            break;
        case QImage::Format_RGB888:
            mat = cv::Mat(image.height(), image.width(), CV_8UC3, (void*)image.constBits(), image.bytesPerLine());
            cv::cvtColor(mat, mat, CV_BGR2RGB);
            break;
        case QImage::Format_Indexed8:
            mat = cv::Mat(image.height(), image.width(), CV_8UC1, (void*)image.constBits(), image.bytesPerLine());
            break;
        }
        return mat;
    }
    ```

Youdao dict

:   1.  download [youdao ubuntu amd64 deb file](http://codown.youdao.com/cidian/linux/youdao-dict_1.1.0-0-ubuntu_amd64.deb)

    2.  install it (dpkg -> debian packge)

        ```bash
        sudo dpkg -i *.deb
        ```

LMDB

:   Official site: <http://lmdb.readthedocs.io/en/release/>

    1.  install

        ```bash
        sudo apt-get install libffi-dev python-dev build-essential
        sudo pip install lmdb
        ```

    2.  check

        ```bash
        pip show lmdb
        ```

LaTeX bold

:   ```latex
    \textbf{yhlleo}
    \mathbf{yhlleo}
    \textbf{\theta}_i
    \mathbf{\theta}_i
    \pmb{\theta}_i
    ```

    对于类似希腊字符的特殊字符是不允许使用 `\textbf{}` 的方式加粗的，编译会报错。
    对于特殊字符的加粗要使用 `\pmb{}` 的方法，`\mathbf{}` 没有作用。

dir listing via c/c++

:   source code: [FindFilesWithinFolder/FindFiles.cpp at master · yhlleo/FindFilesWithinFolder](https://github.com/yhlleo/FindFilesWithinFolder/blob/master/FindFiles.cpp).

refs and see also

  - [Qt QImage与OpenCV Mat转换 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51029382){.featured}
  - [QImage 与 cv::Mat 之间的相互转换 - Ivan 的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/liyuanbhu/article/details/46662115)
  - [Tensorflow 0.8.0 安装配置方法 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51280087)
  - [Ubuntu 安装有道词典 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51302546)
  - [LMDB installation - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51305403)
  - [LaTeX 加粗 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50997822)
  - [C/C++ 获取文件夹下的所有文件列表 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51009608){.featured}

## 配置服务器 SSH 登陆

用户的添加和权限的配置

:   ```bash
    sudo useradd -r -m -s /bin/bash yhlleo
    sudo vi /etc/sudoers
    # add this line: `yhlleo ALL=(ALL:ALL) ALL'
    ```

ssh 服务器的安装、配置和使用

:   ```bash
    sudo apt-get install openssh-server
    sudo service ssh start
    sudo service ssh restart
    ```

    `sudo vi /etc/ssh/sshd_config`{.bash}

    ```
    #ListenAddress :: # 不要取消注释, 因为这样的话，ip 改了后 ssh 就登陆不进去了。
    AllowUsers yhlleo
    PermitRootLogin yes
    ```

使用 ssh 连接到服务器

:   ```bash
    ssh yhlleo@192.168.1.108
    ```

其他笔记

:   用 scp 传递（拷贝）文件

    :   ```bash
        scp /path/to/local/file tzx@192.168.1.108:~/Downloads/
        scp tzx@192.168.1.108:~/Downloads/file ./
        ```

    端口重映射

    :   把远程服务器上只能本地打开的端口 8889 映射到本机端口 8888，
        这样就能通过 `localhost:8888` 访问服务器上的 8889 端口了。

        ```bash
        ssh -N -f -L localhost:8888:localhost:8889 tzx@192.168.1.108
        ```

refs and see also

  - [Ubuntu 14.04 远程登录服务器 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51285545)
  - [Remote Jupyter](http://tangzx.qiniudn.com/post-0109-remote-jupyter.html)

## Caffe, Cuda, cuDNN, etc

install cuda caffe cuDNN

:   1.  pre

        -   ubuntu 14.04
        -   ```bash
            sudo apt-get install libprotobuf-dev libleveldb-dev libsnappy-dev libopencv-dev libhdf5-serial-dev protobuf-compiler
            sudo apt-get install --no-install-recommends libboost-all-dev
            sudo apt-get install libopenblas-dev liblapack-dev libatlas-base-dev
            sudo apt-get install libgflags-dev libgoogle-glog-dev liblmdb-dev
            ```

    2.  nvidia driver

    3.  cuda lib

        via deb package

        ```bash
        sudo dpkg -i *cuda*.deb
        sudo apt-get update
        sudo apt-get install cuda
        ```

        set env var

        ```bash
        export PATH=/usr/local/cuda-7.5/bin:$PATH
        export LD_LIBRARY_PATH=/usr/local/cuda-7.5/lib64:$LD_LIBRARY_PATH
        ```

    4.  caffe

        git clone, make

    5.  cuDNN

        ```bash
        sudo tar xvf cudnn-7.0-linux-x64-v3.0-prod.tgz

        cd cuda/include
        sudo cp *.h /usr/local/include/
        cd ../lib64
        sudo cp lib* /usr/local/lib/
        cd /usr/local/lib
        sudo chmod +r libcudnn.so.4.0.4
        sudo ln -sf libcudnn.so.4.0.4 libcudnn.so.4
        sudo ln -sf libcudnn.so.4 libcudnn.so
        sudo ldconfig
        ```

    6.  done

pycaffe & fast-rcnn

:   1.  install deps

        ```bash
        sudo apt-get install python-skimage python-protobuf python-yaml
        sudo pip install easydict
        ```

    2.  install opencv3

        ```bash
        mkdir build
        cd build/
        cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D WITH_TBB=ON -D WITH_V4L=ON -D WITH_QT=ON -D WITH_OPENGL=ON ..
        make

        sudo make install
        sudo /bin/bash -c 'echo "/usr/local/lib" > /etc/ld.so.conf.d/opencv.conf'
        sudo ldconfig
        sudo apt-get update
        ```

    3.  set env var

        add these links to `~/.bashrc` or `~/.zshrc` or `/etc/profile`:

        ```bash
        export PYTHONPATH=${HOME}/caffe/python:$PYTHONPATH
        export MATLABPATH=${HOME}/caffe/matlab:$MATLABPATH
        export LD_LIBRARY_PATH=${HOME}/caffe/build/lib:$LD_LIBRARY_PATH
        export PATH=/usr/local/cuda-7.5/bin:$PATH
        export LD_LIBRARY_PATH=/usr/local/lib/:$LD_LIBRARY_PATH
        ```

    4.  modify Makefile.config

        use yhlleo's config: [yhlleo/caffe.Makefile.config: My Makefile.config of caffe.](https://github.com/yhlleo/caffe.Makefile.config),
        or rbg's: <http://people.eecs.berkeley.edu/~rbg/fast-rcnn-data/Makefile.config>.

    5.  `make pycaffe`{.makefile}

    6.  test with rbg's code

        repo: [rbgirshick/py-faster-rcnn: Faster R-CNN (Python implementation) -- see https://github.com/ShaoqingRen/faster_rcnn for the official MATLAB version](https://github.com/rbgirshick/py-faster-rcnn){.featured}.

refs and see also

  - [Ubuntu14.04 安装CUDA7.5 + Caffe + cuDNN - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50961542){.featured}
  - [pycaffe 配置 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50967820){.featured}

## black image, etc

refs and see also

  - [全黑图像去除 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50904358)
  - [谁去开会？ - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50912208)

## auto, etc

refs and see also

  - [C++ decltype类型说明符 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50865552)
  - [C++ auto类型说明符 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50864612)
  - [C和C++ const的声明差异 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50864565)
  - [C++ constexpr类型说明符 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50864210)
  - [计算机视觉工具、代码合集 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50848051){.featured}
  - [C/C++ 在处理文件所在路径下创建子目录 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50789265)
  - [C/C++ 图像二进制存储与读取 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50782792)

## CIFAR-10 datasets

- [仿照CIFAR-10数据集格式，制作自己的数据集 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/50801226)

## C++

缓冲区

:   `std::endl`{.cpp} 可以刷新，对比 `\n`，`std::flush` 和 `std::ends` 类似但不同

    :   ```cpp
        std::cout << "Hello world!" << std::flush; // flushes the buffer; adds no data
        std::cout << "Hello world!" << std::ends;  // inserts a null, then flushes the buffer
        std::cout << "Hello world!" << std::endl;  // inserts a newline, then flushes the buffer
        ```

    刷新所有输出

    :   ```cpp
        std::cout << std::unitbuf << "first" << "second" << std::nounitbuf;
        // equal to the follow:
        std::cout << "first" << std::flush << "second" << std::flush;
        ```

    `tie`{.cpp}

    :   ```cpp
        /* the library ties std::cin and std::cout */
        std::cin.tie( &std::cout );
        ostream *old_tie = std::cin.tie();

        /*
            break tie to std::cout, std::cout no longer flushed
            when std::cin is read
        */
        std::cin.tie( 0 );

        /* restablish normal tie between std::cin and std::cout */
        std::cin.tie( old_tie );
        ```

容器

:   `vector`, `list`, `deque`

    ```cpp
    list<string> sList(sVec.begin(), sVec.end());

    // calculate the midpoint in the vector
    vector<string>::iterator mid = sVec.begin() + sVec.size() / 2;

    // also can initialize with a pointer
    char *words[] = {"first", "second", "third", "forth"};
    int sizeOfWords = sizeof(words) / (sizeof(words[0]));
    vector<string> word2(words, words + sizeOfWords);
    ```

    ```cpp
    const list<int>::size_type listSize = 64; // also can be: int listSize = 64
    list<std::string> lstr(listSize, "str");  // 64 strings, each is str

    vector<int> iVec(listSize); // 64 ints, each initialized to 0
    ```

    -   `c.begin()`{.cpp}
    -   `c.end()`{.cpp}
    -   `c.rbegin()`{.cpp}
    -   `c.rend()`{.cpp}
    -   `c.cbegin()`{.cpp}
    -   `c.cend()`{.cpp}

    ```cpp
    // insert an element
    vector<string> sVec;
    string str("Insert");
    // warning: inserting anywhere but at the end of a vector is an expensive operation
    sVec.insert(sVec.begin(), str);
    ```

    TODO

refs and see also

  - [C++ 输出缓冲区的管理 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/47734479)
  - [C++ 容器（一）：顺序容器简介 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/47759729)

[Opencv 三次样条曲线 (Cubic Spline) 插值 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/47707679)

[Opencv Mat 的三种常用类型简介 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/47683127)

## Opencv YAML 和 XML 格式文件操作详解

refs and see also

  - [Opencv YAML 和 XML 格式文件操作详解 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/47660943)

[Android 编译环境配置 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/47617553)
