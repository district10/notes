---
title: Working Notes
---

[【Prev Note】](2016/note7.html){title="../2016/note7.md"}

-   [Vi(m) tip #2: Entering greek/math symbols using vim digraphs « Alec's Web Log](http://www.alecjacobson.com/weblog/?p=443)

    :   丫的发现原来 vim 里面 C-c 可以当成 Esc 用，我以为只有 c-[ 呢。

        `,.;:<>!@#$%^&*()_+`

        -   `,\@![[:punct:]]`
        -   `[^,]\&[:punct:]`

-   [如何匹配所有标点但排除某一个 - Google Groups](https://groups.google.com/forum/#!topic/vim-cn/O-9jJdtrMCg)

    :   参见

        :h \&
        :help \@!

        > 匹配所有英文标点，除了 "," 之外

        => 匹配任意英文标点，并且它不是逗号

        当然你用断言的版本也很好。事实上那是我做排除时经常用手段。

        ```
        /^[A-J]\+/                  : search for lines beginning with one or more A-J
        /begin\_.*end               : search over possible multiple lines
                                      查找在 begin 和 end 两个单词之间尽可能多的行
        /fred\_s*joe/i              : any whitespace including newline
                                      查找在 fred 和 joe 两个单词之间任意多的空格，包括新行
        /fred\|joe                  : Search for FRED OR JOE
                                      查找 fred 或 joe
        ```

        -   zc, close fold,
        -   zo, open fold,
        -   zC, close all folds
        -   z0, open all folds

        这是用来制作 fold 标记的，参见 :h fold-marker 以及 :h 'foldmethod'
        等等相关条目。这是用来制作 fold 标记的，参见 :h fold-marker 以及 :h
        'foldmethod' 等等相关条目。这是用来制作 fold 标记的，参见 :h
        fold-marker 以及 :h 'foldmethod' 等等相关条目。这是用来制作 fold
        标记的，参见 :h fold-marker 以及 :h 'foldmethod'
        等等相关条目。这是用来制作 fold 标记的，参见 :h fold-marker 以及 :h
        'foldmethod' 等等相关条目。

        refs and see also

        -   [Best of Vim Tips 中文版 - Google Groups](https://groups.google.com/forum/#!topic/vim-cn/XCVyjj7svs4)

-   [Markdown Here](http://markdown-here.com/get.html)

-   [html - Styling text input caret - Stack Overflow](http://stackoverflow.com/questions/7339333/styling-text-input-caret)

-   http://whudoc.qiniudn.com/2017/s-s-h--protected.7z

    :   p-ass: tzx's id.

            [DIR] Parent Directory                                               -
            [TXT] md5sums.txt                               14-Oct-2015 11:32  297
            [   ] qt-everywhere-opensource-src-5.5.1.7z     14-Oct-2015 08:38  298M
            [   ] qt-everywhere-opensource-src-5.5.1.tar.gz 14-Oct-2015 08:38  437M
            [   ] qt-everywhere-opensource-src-5.5.1.tar.xz 14-Oct-2015 08:38  306M
            [   ] qt-everywhere-opensource-src-5.5.1.zip    14-Oct-2015 08:39  542M

        简直是一个优良的广告。

        很多人看不懂这个世界格局：大清朝空气最好，那个时候欧美日空气都很差，
        钱钟书因为肺不好从伦敦回的北平，有卵用吗？没几年被打的四处跑。
        这个世界是弱肉强食，雾霾不被人揍必须的历史阶段，治理需要三十年。多看看上甘岭。

-   articulation，`[ɑr,tɪkju'leʃən]`，n. 关节；接合；清晰发音

    :   ```matlab
        % ==============================
        % Exercise 3.2.a: (compare Lecture-Slides 2, Slide 15)
        function R = getRotationMatrixFromVector(w)
          length_w = norm(w);
          w_hat = [0 -w(3) w(2); w(3) 0 -w(1); -w(2) w(1) 0];
          R = eye(3,3) + w_hat/length_w * sin(length_w) ...
                       +(w_hat^2)/(length_w^2) * (1 - cos(length_w));
        end

        % Exercise 3.2.b:  (compare Lecture-Slides 2, Slide 13)
        function w = getVectorFromRotationMatrix(R)
          length_w = acos((trace(R)-1)/2);
          if (length_w == 0)
              w = [0 0 0]';
          else
              w = 1/(2*sin(length_w))*[R(3,2)-R(2,3) R(1,3)-R(3,1) R(2,1)-R(1,2)]'*length_w;
          end
        end


        % Exercise 3.2.c: (Chapter 2, Slide 19)
        %               [ exp[w_hat]   (I - exp[w_hat]) * w_hat + w*w^T)/|w|)*v ]
        % exp[xi_hat] = [                                                       ]
        %               [    0^T                         1                      ]

        function V = getTransformMatrixFromTwistCoord(twCoord)
          v = twCoord(1:3);
          w = twCoord(4:6);
          length_w = norm(w);
          w_hat = [0 -w(3) w(2); w(3) 0 -w(1); -w(2) w(1) 0];
          R = getRotationMatrixFromVector(w);
          T = ((eye(3,3) - R) * w_hat + w * w') * v / length_w;
          V = [R, T; zeros(1,3), 1];
        end


        % Exercise 3.2.d:
        %      [ v = (I-exp[w_hat])*w_hat+w*w')^(-1)*|w|*T ]
        % xi = [                                            ]
        %      [           w = hat^{-1}(log(R))             ]
        % Note: "^{-1}" is the inverse transformation
        function xi = getTwistCoordFromTransformMatrix(g)
          R = g(1:3,1:3);                                           % extract rotation matrix
          T = g(1:3,4);                                             % extract translation part
          w = getVectorFromRotationMatrix(R);                       % calc corresponding w
          %testR = getRotationMatrixFromVector(w);
          w_hat = [0 -w(3) w(2); w(3) 0 -w(1); -w(2) w(1) 0];       % we need w_hat as well
          v = inv((eye(3,3) - R) * w_hat + w * w') * norm(w) * T;   % calc the translation
          xi = [v; w];                                              % concatenate into one vector
        end
        ```

        ```
        function [ T ] = se3Exp( twist )
        M = [0 -twist(6) twist(5) twist(1);
             twist(6) 0 -twist(4) twist(2);
             -twist(5) twist(4) 0 twist(3);
             0 0 0 0];
        T = expm(M);
        end
        ```

        ```
        function [ twist ] = se3Log( T )
            lg = logm(T);
            twist = [lg(1,4) lg(2,4) lg(3,4) lg(3,2) lg(1,3) lg(2,1)]';
        end
        ```

-   [眼睛干涩，该怎么选择眼药水？ - 生活 - 知乎](https://www.zhihu.com/question/20559317) -<

    :   Optrex Eye Lotion

        这是一款英国产的不能叫滴眼液了，应该叫洗眼液，因为每次用都是在给眼睛洗个澡（Eye Bath）

        我目前就职于迪拜某五星级酒店，一天闲来无事的时候把First Aid Box
        打开，在里面发现了这货，因为之前没见过，上面只写了Eye Lotion
        就觉得比较稀奇。因为已经拆开了包装，也没找到说明书，就问了酒店护士这个干吗用，
        她说这个在急救箱里，主要是为了一旦有异物或者化学制品溅到眼睛里，能够及时的稀释，
        但是这个也可以在家自己买来用，能洗掉眼睛里的灰尘，用了很舒服。

        当时眼睛感觉比较酸，我就直接拧开洗了一次，感觉就像沙漠里的一杯冰水，爽到心里。
        当天下班我就去买了一瓶，到现在我每天晚上睡觉前都会用一次。
        这个图是网上下的，你们先凑合着看，改天闲了我拍一下我的那瓶（这个上面写的是Eye wash,我的写的是Eye Lotion，其实里面是一样）

-   [Manifold - Wikipedia](https://en.wikipedia.org/wiki/Manifold)

https://help.ubuntu.com/community/Lubuntu/Documentation/EditingTheMenu

```
chromium-browser --proxy-server="socks5://127.0.0.1:1080"
```


/usr/share/applications

/home/tzx/.local/share/applications


CMAKE_CXX_COMPILER:STRING=%{Compiler:Executable:Cxx}
CMAKE_C_COMPILER:STRING=%{Compiler:Executable:C}
CMAKE_PREFIX_PATH:STRING=%{Qt:QT_INSTALL_PREFIX}
QT_QMAKE_EXECUTABLE:STRING=%{Qt:qmakeExecutable}
/usr/share/applications


ciao 纠错
英 [tʃaʊ] 美 [tʃaʊ]

    int. （意）你好；再见（见面问候语或告别语）
    n. (Ciao)人名；(意)恰奥


Ciao
jupyter notebook
/home/tzx/.local/share/applications

pip3 install --upgrade pip
pip3 install jupyter
fc-list : file
林志勇：论文里的架构图不对，这个是处理流程图。而且作为处理流程图你的输入、输出，以及数据库这些框没有选对。外，你的流程处理里的英文单词应当去掉，尽量改成中文术语。
赖旭东：你的系统主要有两个内容：一个是数据的组织，一个是平滑渲染场景过渡，但你的具体应用场景是怎样的？这并没有在最开始说明清楚。另外，数据组织和平滑过渡两者难点在哪，你的主要工作是什么？答：考虑到三维模型的数据获取，本系统主要用于室内场景漫游，而不适用于街景漫游等情况。数据组织上最大的难点是如何建立三维模型数据和全景图的高效索引；平滑过渡上的最大难点是在数据获取上如何调度，使得视觉效果更自然。
付建红：论文选题目的和意义写得太细，应当精简掉不需要和不相关的内容。行文排版不太对，行间距是不是有点不对？答：论文选题和意义这部分查阅了很多资料就多写了一些，后面会根据自己的研究实际，去掉不相关的内容，让行文更紧凑，更专注于主题。行间距是有点问题，在电脑查看的时候疏忽了。
胡庆武：你的处理流程具体是怎样的？比如说，你的三维模型和全景图是怎么融合的？从一个场景到另一个场景的时候，模型如何呈现出来以提高过渡的自然感？答：具体的处理流程还需要仔细的实验再做选择，大致的方向是1）在相邻全景图之间进行特征匹配，提取出背景并三角化，对三角格网进行精细的匹配和色彩混合；2）对全景图前景和三维模型进行匹配，使得三维模型的位置正确设定，在场景切换时调出三维模型来模拟三维效果。
--proxy-server="socks5://foobar:66"
man chromium-browser
/tmp/qtc-cmake-t2nWxj


2017年 01月 13日 星期五 01:26:22 CST

https://help.ubuntu.com/community/Lubuntu/Documentation/EditingTheMenu
~/.local/share/applications

/usr/share/applications

 No CMAKE_CXX_COMPILER could be found.
REPD
https://github.com/ppwwyyxx/panorama/releases/download/0.1/example-data.tgz
./src/image-stitching \
    /home/tzx/Pictures/scene2/IMG_20170113_002601.jpg \
    /home/tzx/Pictures/scene2/IMG_20170113_002605.jpg \
    /home/tzx/Pictures/scene2/IMG_20170113_002611.jpg \
    /home/tzx/Pictures/scene2/IMG_20170113_002614.jpg \
    /home/tzx/Pictures/scene2/IMG_20170113_002624.jpg \
    /home/tzx/Pictures/scene2/IMG_20170113_002627.jpg \
    /home/tzx/Pictures/scene2/IMG_20170113_002630.jpg

https://github-cloud.s3.amazonaws.com/releases/9639042/a48669ea-42dd-11e6-848c-1eb6a25364e8.tgz?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAISTNZFOVBIJMK3TQ%2F20170112%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20170112T161723Z&X-Amz-Expires=300&X-Amz-Signature=b4cb5ae7d51abb311ee039ea8d07dd0d0a1180bcc1814afa2cc6c965f46f852f&X-Amz-SignedHeaders=host&actor_id=0&response-content-disposition=attachment%3B%20filename%3Dexample-data.tgz&response-content-type=application%2Foctet-stream
https://github.com/ppwwyyxx/panorama/releases/tag/0.1
https://github.com/4ker/panorama.git
腾讯和阿里的低俗年会
 办理护照相关内容：1）本人必须亲自在户口所在地办理护照。提供户口办理护照的信息供你参考吧，北京的办理周期是9天（含周六日），在各个区县出入境管理处办理，可以跨区办理不受户口在某个区县的限制。其他省市地区得看当地的出入境管理处具体规定。2）办理护照所需材料：2寸浅蓝或白底照片1张（贴在申请表上使用的）、身份证原件复印件（正反面均复印）、户口簿原件复印件（首页、个人资料页、变更页均复印）、表格一份（现场填写即可）、200元。3)提示：A、必须本人亲自前往办理，因为需要现场拍照用在护照上的。B、建议复印好带去，现场复印比较贵。到出入境管理处，先填表，然后去拍数码照，拍的照是用在护照上的，不花钱，拍完表格上会被贴一张条形码，接着就去排队交材料交钱即可。
https://www.douban.com/note/600502007/
foreach( TARGET_NAME ${PROGRAM_TARGETS} )
    add_executable( ${TARGET_NAME} ${TARGET_NAME}.cpp )
    # add_dependencies( ${TARGET_NAME} Blahblah )
    target_link_libraries( ${TARGET_NAME} ${OpenCV_LIBS} ${QT_LIBRARIES} Blahblah )
    set_target_properties( ${TARGET_NAME} PROPERTIES FOLDER MiscExamples )
endforeach( TARGET_NAME )
file( GLOB SRCS *.c *.cpp *.cc *.h *.hpp )  # a varible called SRCS with all files whose path match "*.c *.cpp..."
set( PROGRAM_TARGETS
    SeedFillTest
    SuperSeedsTest
    BoundaryFillTest
    contours
)
───────────────────
 CMakeLists.txt  ~/g/o/s/o/CMakeLists.txt                         X
  1 add_subdirectory(cameras_undisto_Brown)
  2
  3 add_subdirectory(multiview_robust_estimation_tutorial)
  4 add_subdirectory(multiview_robust_homography)
  5 add_subdirectory(multiview_robust_homography_guided)
  6 add_subdirectory(multiview_robust_fundamental)
  7 add_subdirectory(multiview_robust_fundamental_guided)
  8 add_subdirectory(multiview_robust_
mytests

dodger 纠错
英 ['dɒdʒə] 美 ['dɑdʒɚ]

    n. 欺瞒者；躲避者


cnn.it/2fLjAhm
127.0.0.1
find /DIR/EC/TORY -type f -executable
/
THIS_SOURCE_DIR
color = true
context = 3
ignore = ["dir1", "dir2"]
color-path = "1;34"
/usr/lib/jvm/java-8-openjdk-amd64

sudo apt-get install libbotan1.10-dev
sudo apt-get install libzbar-dev libzbarqt-dev
sudo apt-get install libappindicator-dev
sudo apt-get install qt5-qmake qt5-default qtbase5-dev libbotan1.10-dev gcc-4.8 libqrencode-dev libzbar-dev libappindicator-dev libqtshadowsocks-dev
sudo add-apt-repository ppa:hzwhuang/ss-qt5 -y && sudo apt-get -qq update
https://github.com/shadowsocks/shadowsocks-qt5.git
145753721
If a plugin is not well-written, it could cause Code::Blocks to crash when
sudo apt-get install ttf-inconsolata
sudo apt-get update
sudo apt-get install git zsh curl tmux xclip
curl -L http://install.ohmyz.sh | sh
echo 'alias clip="xclip -selection clipboard"' >> ~/.zshrc

sudo apt-get install make gcc g++ pkg-config libx11-dev libxtst-dev

chrome:

-   copy as markdown
-   vimfx
-   tree style tab

git clone --depth 1 https://github.com/junegunn/fzf.git ~/.fzf
~/.fzf/install


git clone ...
echo 'source ~/git/vimrc/vimrc.vim' >> ~/.vimrc

sudo apt-get install texlive-full

## Ubuntu

prerequisites:

```bash
sudo apt-get install --assume-yes build-essential cmake git
sudo apt-get install --assume-yes build-essential pkg-config unzip ffmpeg qtbase5-dev python-dev python3-dev python-numpy python3-numpy
sudo apt-get install --assume-yes libopencv-dev libgtk-3-dev libdc1394-22 libdc1394-22-dev libjpeg-dev libpng12-dev libtiff5-dev libjasper-dev
sudo apt-get install --assume-yes libavcodec-dev libavformat-dev libswscale-dev libxine2-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev
sudo apt-get install --assume-yes libv4l-dev libtbb-dev libfaac-dev libmp3lame-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev
sudo apt-get install --assume-yes libvorbis-dev libxvidcore-dev v4l-utils
```

### CV3

cmake, make.

### CV2

cmake, make.

### Usage

When you want opencv 2,:

```bash
export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build
cd ~/git/cmake-templates/opencv
mkdir build && cd build
cmake ..
make
```

When you want opencv 3:

```bash
export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-3.1/build
cd ~/git/cmake-templates/opencv3
mkdir build && cd build
cmake ..
make
```

I installed OpenCV 3 and add these lines to my `.zshrc`:

```
export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build2
export OpenCV3_DIR=/usr/local/share/OpenCV
```

---

Refs

-  [OpenCV 3.1 Installation Guide on Ubuntu 16.04 · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki/OpenCV-3.1-Installation-Guide-on-Ubuntu-16.04)
cd ~/git/cmake-templates/opencv3
mkdir build && cd build

/home/tzx/git/cmake-templates/opencv

## Ubuntu

prerequisites:

```bash
sudo apt-get install --assume-yes build-essential cmake git
sudo apt-get install --assume-yes build-essential pkg-config unzip ffmpeg qtbase5-dev python-dev python3-dev python-numpy python3-numpy
sudo apt-get install --assume-yes libopencv-dev libgtk-3-dev libdc1394-22 libdc1394-22-dev libjpeg-dev libpng12-dev libtiff5-dev libjasper-dev
sudo apt-get install --assume-yes libavcodec-dev libavformat-dev libswscale-dev libxine2-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev
sudo apt-get install --assume-yes libv4l-dev libtbb-dev libfaac-dev libmp3lame-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev
sudo apt-get install --assume-yes libvorbis-dev libxvidcore-dev v4l-utils
```

### CV3

cmake, make.

### CV2

cmake, make.

### Usage

When you want opencv 2,:

```bash
export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build
cmake ..
make
```

When you want opencv 3:

```bash
export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-3.1/build
cmake ..
make
```

I installed OpenCV 3 and add these lines to my `.zshrc`:

```
export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build2
export OpenCV3_DIR=/usr/local/share/OpenCV
```

---

Refs

-  [OpenCV 3.1 Installation Guide on Ubuntu 16.04 · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki/OpenCV-3.1-Installation-Guide-on-Ubuntu-16.04)
message( STATUS "OpenCV library status:" )
message( STATUS "    version: ${OpenCV_VERSION}" )
message( STATUS "    libraries: ${OpenCV_LIBS}" )
message( STATUS "    include path: ${OpenCV_INCLUDE_DIRS}" )

Build & Run:

    mkdir build && cd build
    export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build
    cmake ..
    make
    ./OPENCV

alias npm=cnpm

[ -f ~/.fzf.zsh ] && source ~/.fzf.zsh
export JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64


source /opt/ros/kinetic/setup.zsh

export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build2
export OpenCV3_DIR=/usr/local/share/OpenCV

export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build2
export OpenCV3_DIR=/usr/local/share/OpenCV

export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build2

When you want opencv 2,:

```bash
export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build
cmake ..
make
```

export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build
cmake, make. I configured CUDA on OpenCV 3.

prerequisites
prerequsites
## Ubuntu

```bash
sudo apt-get install --assume-yes build-essential cmake git
sudo apt-get install --assume-yes build-essential pkg-config unzip ffmpeg qtbase5-dev python-dev python3-dev python-numpy python3-numpy
sudo apt-get install --assume-yes libopencv-dev libgtk-3-dev libdc1394-22 libdc1394-22-dev libjpeg-dev libpng12-dev libtiff5-dev libjasper-dev
sudo apt-get install --assume-yes libavcodec-dev libavformat-dev libswscale-dev libxine2-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev
sudo apt-get install --assume-yes libv4l-dev libtbb-dev libfaac-dev libmp3lame-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev
sudo apt-get install --assume-yes libvorbis-dev libxvidcore-dev v4l-utils
```

### CV2



### CV3

---

Refs

-  [OpenCV 3.1 Installation Guide on Ubuntu 16.04 · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki/OpenCV-3.1-Installation-Guide-on-Ubuntu-16.04)
 2016年你学会了什么新技能？（我的是：熟练掌握数十首中英文儿歌而且经常无意识哼唱）
Operating system: Windows 10

## Envs

Env | Env Value
--- | ---
OpenCV | `C:\dev\OpenCV\build`
OpenCV_Dir | `%OpenCV%`
QTDIR | `C:\Qt\qt-4.8.6-x64-msvc2010\qt-4.8.6-x64-msvc2010`
PATH | `%PATH%;%QTDIR%\bin;%OpenCV%\x64\vc10\bin;`

## 成员

* 组长：ZHAO PengCheng
* 成员：（拼音排序）
    + GUO Chen
    + LIAO YanYan
    + LIU Xuan
    + **TANG ZhiXiong**
    + WANG JinYi
    + ZHANG Yuan
    + ZHAO PengCheng

## Acknowledgements

感谢 LI YinXuan 师姐的参考程序。
感谢 Zhao PengCheng 的 feature 的设计方案。

-## 成员
-
-* 组长：ZHAO PengCheng
-* 成员：（拼音排序）
-    + GUO Chen
-    + LIAO YanYan
-    + LIU Xuan
-    + **TANG ZhiXiong**
-    + WANG JinYi
-    + ZHANG Yuan
-    + ZHAO PengCheng
-
-## Acknowledgements
-
-感谢 LI YinXuan 师姐的参考程序。
-感谢 Zhao PengCheng 的 feature 的设计方案。
[OpenCV 3.1 Installation Guide on Ubuntu 16.04 · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki/OpenCV-3.1-Installation-Guide-on-Ubuntu-16.04)
sudo apt-get install --assume-yes build-essential cmake git
sudo apt-get install --assume-yes build-essential pkg-config unzip ffmpeg qtbase5-dev python-dev python3-dev python-numpy python3-numpy
sudo apt-get install --assume-yes libopencv-dev libgtk-3-dev libdc1394-22 libdc1394-22-dev libjpeg-dev libpng12-dev libtiff5-dev libjasper-dev
sudo apt-get install --assume-yes libavcodec-dev libavformat-dev libswscale-dev libxine2-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev
sudo apt-get install --assume-yes libv4l-dev libtbb-dev libfaac-dev libmp3lame-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev
sudo apt-get install --assume-yes libvorbis-dev libxvidcore-dev v4l-utils
file:///home/tzx/Downloads/opencv-2.4.13.zip
/usr/share/OpenCV/
/usr/local/share/OpenCV/OpenCVConfig.cmake
/usr/share/OpenCV/OpenCVConfig.cmake
https://codeload.github.com/opencv/opencv/zip/2.4.13
```
mkdir build && cd build
cmake ..
make
```


2. build opencv 3 from source

notice the generated directory `opencv2`, `lib` and file `OpenCVConfig.cmake`.

notice the generated directory `opencv2`, `lib` and file `OpenCVConfig.cmake`.

OpenCVConfig.cmake
/home/tzx/Downloads/archive/opencv-3.2.0/build/OpenCVConfig.cmake
sudo apt-get install libboost-all-dev

CMakeFiles
sudo apt-get install -y libopencv-dev
include( CheckCXXCompilerFlag )
check_cxx_compiler_flag( "-std=c++11"   COMPILER_SUPPORTS_CXX11 )
check_cxx_compiler_flag( "-std=c++0x"   COMPILER_SUPPORTS_CXX0X )
if( COMPILER_SUPPORTS_CXX11 )
    if( CMAKE_COMPILER_IS_GNUCXX )
        set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11" )
    else()
        set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11" )
    endif()
elseif( COMPILER_SUPPORTS_CXX0X)
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x" )
else()
    # MSVC, On by default (if available)
endif()

cmake ..
# git checkout qt4cv3vs2015

git checkout qt4cv3vs2015

export OpenCV3_DIR=/usr/local/share/OpenCV
git@github.com:district10/SignProcessing.git

sanity 纠错
英 ['sænɪtɪ] 美 ['sænəti]

    n. 明智；头脑清楚；精神健全；通情达理


 我想社会会发展到一天，女人只要生了孩子，国家就会提供住房补贴，基本生活费，婴儿食品保障，免费托儿所的。这不是出于善心，而是经济发展和人口教育成本上升的自然后果。婚姻制度而将因而解体。在这种社会成长起来的孩子，他忠诚的第一对象也将是国家而非家庭，甚至不是他的母亲。 ​
 Parrot lays off 290 drone division employees
2d

http://ww1.sinaimg.cn/large/67d6aa46gw1fbljm25kwxj20dw2nujz1.jpg
众所周知，通用处理器（CPU）的摩尔定律已入暮年，而机器学习和 Web 服务的规模却在指数级增长。人们使用定制硬件来加速常见的计算任务，然而日新月异的行业又要求这些定制的硬件可被重新编程来执行新类型的计算任务。FPGA (Field Programmable Gate Array) 正是一种硬件可重构的体系结构，常年来被用作专用芯片（ASIC）的小批量替代品，然而近年来在微软、百度等公司的数据中心大规模部署，以同时提供强大的计算能力和足够的灵活性。
http://t.cn/RMiPSzx
http://t.cn/RMibz3l
 China won't allow 'Pokémon Go' unless it's deemed safe
1d

http://m.weibo.cn/2201566133/4063053899793086 ​
 “预测的准确率，我们现在已经做到北京未来6个小时的准确率达到了75%，在深圳和广州做到了80%。未来48个小时的预测准确率达到50%。大家不要小看50%的准确率，它其实已经非常高了。相比之下，天气预报24小时的准确率只有40%。”郑宇说。
另一方面，日本企业老气横秋、死气沉沉，有活力的新企业根本没有，和中美相比截然不同。跨领域、改变商业模式的大创新也出不来，近年来世界上的大创新主要是美国在搞，中国也有一些。日本大企业有权力的决策人员基本是老头，领导者平均年龄高达60岁，而且极度保守，对于世界科技与生活剧烈的改变既想不到也无法接受，只会让研发人员进行一些精致的研发。有些日本高管不愿意看电子邮件，让手下人打印出来看。高管们不想学习新东西，旧软件一直用，新软件更好用但是在公司内部无法推动。日本的硬件研发传统也与此相关，高管们就是这么过来的，对于硬件研发能理解，对于元器件做精做深是支持的。
t.cn/RVXMjoZ

# sudo apt-get install -y libcurl4-openssl-dev

sudo rosdep init
sudo apt-get install python-rosinstall
source /opt/ros/kinetic/setup.zsh

source /opt/ros/kinetic/setup.bash
t.cn/RMSqhvB

总结：想法和创意连小学生都有，改变世界的雄心和哲学体系每个大学生都有一套。这个世界稀缺的是组织和后勤。
选择市场，选择伙伴，都不是由欲望（比如说愿景）决定的，而是由实力决定的。曾国藩战术战略并不出众，但他重视两件事，一是练兵，二是后勤。这就使他能不管怎么失败，总是能再起。内部的，后方的才是最根本的。
t.cn/RMSxngy

sudo apt-get install ros-kinetic-desktop-full
sudo apt-get update
sudo apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net:80 --recv-key 421C365BD9FF1F717815A3895523BAEEB01FA116
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt-get install gcc -4.9 gcc-5 g++-4.9 g++-5
33RM-WDLDX4PR
export JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64

    cp make/config.mk .
boost::filesystem::path_traits::dispatch
https://github.com/dmlc/mxnet.git
git@github.com:district10/blog.git
make install
关注 Computer Vision，Machine Learning & SLAM。写点分享。
武汉大学遥感信息工程学院
cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" /home/tzx/git/openMVG/src
/usr/local/cuda-8.0/targets/x86_64-linux/include/host_config.h
NVCCFLAGS += -D_FORCE_INLINES -ccbin=$(CXX) -Xcompiler -fPIC $(COMMON_FLAGS)
NVCCFLAGS +=-ccbin=$(CXX) -Xcompiler-fPIC $(C
/usr/lib/x86_64-linux-gnu/hdf5

LIBRARY_DIRS := $(PYTHON_LIB) /usr/local/lib /usr/lib /usr/lib/aarch64-linux-gnu/hdf5/serial/
INCLUDE_DIRS := $(PYTHON_INCLUDE) /usr/local/include /usr/include/hdf5/serial/
sudo add-apt-repository universe
sudo update-alternatives --config g++
https://github.com/openMVG/openMVG.git
https://sh-btfs-v2-yun-ftn.weiyun.com/ftn_handler/9af0a588abbe2c579525b118ca92dc7e57d3c88f3b3a64359026c1fc88389e836368ef9d78fe76634bccceed06e46b908840e29b628f900f1e5fda95342705a9/ssh.7z?fname=ssh.7z&from=30013&version=2.0.0.2&uin=513880641
sudo /bin/bash -c 'echo "/usr/local/lib" > /etc/ld.so.conf.d/opencv.conf'
for req in $(cat requirements.txt); do pip install $req; done
sudo apt-get install python-dev python-numpy –y
sudo apt-get install libprotobuf-dev libleveldb-dev libsnappy-dev \

libhdf5-serial-dev protobuf-compiler -y

sudo apt-get install --no-install-recommends libboost-all-dev -y
sudo apt-get install libgflags-dev libgoogle-glog-dev liblmdb-dev -y
sudo apt-get install libatlas-base-dev -y
metslib
能总结一下，你是怎么形成这种性格的吗？我正缺这个。
wget https://google-glog.googlecode.com/files/glog-0.3.3.tar.gz
sudo apt-get install libgflags-dev libgoogle-glog-dev liblmdb-dev
sudo apt-get install libprotobuf-dev libleveldb-dev libsnappy-dev libopencv-dev libhdf5-serial-dev protobuf-compiler
~/.fzf/install
sudo apt-get install toilet figlet
http://192.168.1.101:8080/ippicv_linux_20151201.tgz
https://raw.githubusercontent.com/opencv/opencv_3rdparty/81a676001ca8075ada498583e4166079e5744668/ippicv/ippicv_linux_20151201.tgz
cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D WITH_TBB=ON -D WITH_V4L=ON -D WITH_QT=ON -D WITH_OPENGL=ON -DCUDA_NVCC_FLAGS="-D_FORCE_INLINES" ..
sudo apt-get install build-essential cmake git

sudo apt-get install ffmpeg libopencv-dev libgtk-3-dev python-numpy python3-numpy libdc1394-22 libdc1394-22-dev libjpeg-dev libpng12-dev libtiff5-dev libjasper-dev libavcodec-dev libavformat-dev libswscale-dev libxine2-dev libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev libv4l-dev libtbb-dev qtbase5-dev libfaac-dev libmp3lame-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev libvorbis-dev libxvidcore-dev x264 v4l-utils unzip
sudo apt-get install --assume-yes libopencv-dev build-essential cmake git libgtk2.0-dev pkg-config python-dev python-numpy libdc1394-22 libdc1394-22-dev libjpeg-dev libpng12-dev libtiff5-dev libjasper-dev libavcodec-dev libavformat-dev libswscale-dev libxine2-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev libv4l-dev libtbb-dev libqt4-dev libfaac-dev libmp3lame-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev libvorbis-dev libxvidcore-dev x264 v4l-utils unzip
./deviceQuery Starting...

 CUDA Device Query (Runtime API) version (CUDART static linking)

Detected 1 CUDA Capable device(s)

Device 0: "GeForce 940MX"
  CUDA Driver Version / Runtime Version          8.0 / 8.0
  CUDA Capability Major/Minor version number:    5.0
  Total amount of global memory:                 2002 MBytes (2099642368 bytes)
  ( 3) Multiprocessors, (128) CUDA Cores/MP:     384 CUDA Cores
  GPU Max Clock rate:                            1189 MHz (1.19 GHz)
  Memory Clock rate:                             2000 Mhz
  Memory Bus Width:                              64-bit
  L2 Cache Size:                                 1048576 bytes
  Maximum Texture Dimension Size (x,y,z)         1D=(65536), 2D=(65536, 65536), 3D=(4096, 4096, 4096)
  Maximum Layered 1D Texture Size, (num) layers  1D=(16384), 2048 layers
  Maximum Layered 2D Texture Size, (num) layers  2D=(16384, 16384), 2048 layers
  Total amount of constant memory:               65536 bytes
  Total amount of shared memory per block:       49152 bytes
  Total number of registers available per block: 65536
  Warp size:                                     32
  Maximum number of threads per multiprocessor:  2048
  Maximum number of threads per block:           1024
  Max dimension size of a thread block (x,y,z): (1024, 1024, 64)
  Max dimension size of a grid size    (x,y,z): (2147483647, 65535, 65535)
  Maximum memory pitch:                          2147483647 bytes
  Texture alignment:                             512 bytes
  Concurrent copy and kernel execution:          Yes with 1 copy engine(s)
  Run time limit on kernels:                     Yes
  Integrated GPU sharing Host Memory:            No
  Support host page-locked memory mapping:       Yes
  Alignment requirement for Surfaces:            Yes
  Device has ECC support:                        Disabled
  Device supports Unified Addressing (UVA):      Yes
  Device PCI Domain ID / Bus ID / location ID:   0 / 1 / 0
  Compute Mode:
     < Default (multiple host threads can use ::cudaSetDevice() with device simultaneously) >

deviceQuery, CUDA Driver = CUDART, CUDA Driver Version = 8.0, CUDA Runtime Version = 8.0, NumDevs = 1, Device0 = GeForce 940MX
Result = PASS

cd /usr/local/cuda-8.0/samples/1_Utilities/deviceQuery
sudo ldconfig
/usr/local/cuda/lib64
sudo gedit /etc/ld.so.conf.d/cuda.conf
PATH="/usr/local/cuda-8.0/bin:$HOME/bin:$HOME/.local/bin:$PATH"

export PATH=/usr/local/cuda-8.0/bin:$HOME/bin:/usr/local/bin:$PATH:$MYPATH
export LD_LIBRARY_PATH=/usr/local/cuda-8.0/lib64:$LD_LIBRARY_PATH

export PATH=/usr/local/cuda-8.0/bin${PATH:+:${PATH}}

export LD_LIBRARY_PATH=/usr/local/cuda-8.0/lib64${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
export PATH=/usr/local/cuda-8.0/bin${PATH:+:${PATH}}
sudo update-alternatives --set c++ /usr/bin/g++
sudo update-alternatives --install /usr/bin/c++ c++ /usr/bin/g++ 30
sudo update-alternatives --set cc /usr/bin/gcc
sudo update-alternatives --install /usr/bin/cc cc /usr/bin/gcc 30
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-5 10
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-4.9 20
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-5 10
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-4.9 20
nvidia-settings
