---
title: Working Notes
---

[【Prev Note】](../2016/note7.html){title="../2016/note7.md"}

-   [Vi(m) tip #2: Entering greek/math symbols using vim digraphs « Alec's Web Log](http://www.alecjacobson.com/weblog/?p=443) -<

    :   **丫的发现原来 vim 里面 C-c 可以当成 Esc 用，我以为只有 c-[ 呢。**

        `,.;:<>!@#$%^&*()_+`

        -   `,\@![[:punct:]]`
        -   `[^,]\&[:punct:]`

-   [如何匹配所有标点但排除某一个 - Google Groups](https://groups.google.com/forum/#!topic/vim-cn/O-9jJdtrMCg) -<

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

-   http://whudoc.qiniudn.com/2017/s-s-h--protected.7z -<

    :   p-ass: tzx's id.

            [DIR] Parent Directory                                               -
            [TXT] md5sums.txt                               14-Oct-2015 11:32  297
            [   ] qt-everywhere-opensource-src-5.5.1.7z     14-Oct-2015 08:38  298M
            [   ] qt-everywhere-opensource-src-5.5.1.tar.gz 14-Oct-2015 08:38  437M
            [   ] qt-everywhere-opensource-src-5.5.1.tar.xz 14-Oct-2015 08:38  306M
            [   ] qt-everywhere-opensource-src-5.5.1.zip    14-Oct-2015 08:39  542M

        简直是一个优良的广告。

        很多人看不懂这个世界格局：
        **大清朝空气最好，那个时候欧美日空气都很差，
        钱钟书因为肺不好从伦敦回的北平，有卵用吗？没几年被打的四处跑。
        这个世界是弱肉强食，雾霾不被人揍必须的历史阶段，治理需要三十年。多看看上甘岭。**

-   articulation，`[ɑr,tɪkju'leʃən]`，n. 关节；接合；清晰发音 -<

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

-   [Lubuntu 修改启动菜单](https://help.ubuntu.com/community/Lubuntu/Documentation/EditingTheMenu) -<

    :   ```
        /usr/share/applications
        /home/tzx/.local/share/applications
        ```

-   chrome 命令行打开 proxy -<

    :   ```bash
        chromium-browser --proxy-server="socks5://127.0.0.1:1080"
        ```

-   ciao -<

    :   英 `[tʃaʊ]` 美 `[tʃaʊ]`

        ```
        int. （意）你好；再见（见面问候语或告别语）
        n. (Ciao)人名；(意)恰奥
        ```

-   安装 Jupyter -<

    :   ```bash
        pip3 install --upgrade pip
        pip3 install jupyter
        ```

-   全景拼接 -<

    :   <https://github.com/ppwwyyxx/panorama/releases/download/0.1/example-data.tgz>

        ```bash
        ./src/image-stitching \
            /home/tzx/Pictures/scene2/IMG_20170113_002601.jpg \
            /home/tzx/Pictures/scene2/IMG_20170113_002605.jpg \
            /home/tzx/Pictures/scene2/IMG_20170113_002611.jpg \
            /home/tzx/Pictures/scene2/IMG_20170113_002614.jpg \
            /home/tzx/Pictures/scene2/IMG_20170113_002624.jpg \
            /home/tzx/Pictures/scene2/IMG_20170113_002627.jpg \
            /home/tzx/Pictures/scene2/IMG_20170113_002630.jpg
        ```

-   CMake 编译当前文件夹下的 cpp 文件 -<

    :   ```cmake
        file( GLOB SRCS *.c *.cpp *.cc *.h *.hpp )  # a varible called SRCS with all files whose path match "*.c *.cpp..."
        set( PROGRAM_TARGETS
            SeedFillTest
            SuperSeedsTest
            BoundaryFillTest
            contours
        )
        foreach( TARGET_NAME ${PROGRAM_TARGETS} )
            add_executable( ${TARGET_NAME} ${TARGET_NAME}.cpp )
            # add_dependencies( ${TARGET_NAME} Blahblah )
            target_link_libraries( ${TARGET_NAME} ${OpenCV_LIBS} ${QT_LIBRARIES} Blahblah )
            set_target_properties( ${TARGET_NAME} PROPERTIES FOLDER MiscExamples )
        endforeach( TARGET_NAME )
        ```

        一个更好的代码：

        ```cmake
        file( GLOB SRCS *.cpp)
        foreach( src ${SRCS} )
            string( REGEX REPLACE "(^.*/|.cpp$)" "" exe ${src} )
            add_executable( ${exe} ${src} )
            target_link_libraries( ${exe}
                openMVG_image
                openMVG_features
                openMVG_matching
                openMVG_system
                openMVG_multiview
                vlsift
                stlplus)
            set_property(TARGET ${exe} PROPERTY FOLDER OpenMVG/Samples)
        endforeach( src )
        ```

-   dodger -<

    :   ```
        英 ['dɒdʒə] 美 ['dɑdʒɚ]
        n. 欺瞒者；躲避者
        ```

-   find executables in dir -<

    :   ```bash
        find /DIR/EC/TORY -type f -executable
        ```

-   安装 shadowsocks -<

    :   ```bash
        sudo apt-get install libbotan1.10-dev
        sudo apt-get install libzbar-dev libzbarqt-dev
        sudo apt-get install libappindicator-dev
        sudo apt-get install qt5-qmake qt5-default qtbase5-dev libbotan1.10-dev gcc-4.8 libqrencode-dev libzbar-dev libappindicator-dev libqtshadowsocks-dev
        sudo add-apt-repository ppa:hzwhuang/ss-qt5 -y && sudo apt-get -qq update
        ```

        客户端：<https://github.com/shadowsocks/shadowsocks-qt5.git>

-   clip 拷贝到剪切板 -<

    :   ```bash
        sudo apt-get install make gcc g++ pkg-config libx11-dev libxtst-dev
        sudo apt-get install ttf-inconsolata
        sudo apt-get update
        sudo apt-get install git zsh curl tmux xclip
        curl -L http://install.ohmyz.sh | sh
        echo 'alias clip="xclip -selection clipboard"' >> ~/.zshrc
        ```

-  [OpenCV 3.1 Installation Guide on Ubuntu 16.04 · BVLC/caffe Wiki](https://github.com/BVLC/caffe/wiki/OpenCV-3.1-Installation-Guide-on-Ubuntu-16.04) -<

    :   ```bash
        sudo apt-get install --assume-yes build-essential cmake git
        sudo apt-get install --assume-yes build-essential pkg-config unzip ffmpeg qtbase5-dev python-dev python3-dev python-numpy python3-numpy
        sudo apt-get install --assume-yes libopencv-dev libgtk-3-dev libdc1394-22 libdc1394-22-dev libjpeg-dev libpng12-dev libtiff5-dev libjasper-dev
        sudo apt-get install --assume-yes libavcodec-dev libavformat-dev libswscale-dev libxine2-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev
        sudo apt-get install --assume-yes libv4l-dev libtbb-dev libfaac-dev libmp3lame-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev
        sudo apt-get install --assume-yes libvorbis-dev libxvidcore-dev v4l-utils
        ```

        ```bash
        export OpenCV2_DIR=/home/tzx/Downloads/archive/opencv-2.4.13/build2
        export OpenCV3_DIR=/usr/local/share/OpenCV
        ```

        环境变量的设定

        Env | Env Value
        --- | ---
        OpenCV | `C:\dev\OpenCV\build`
        OpenCV_Dir | `%OpenCV%`
        QTDIR | `C:\Qt\qt-4.8.6-x64-msvc2010\qt-4.8.6-x64-msvc2010`
        PATH | `%PATH%;%QTDIR%\bin;%OpenCV%\x64\vc10\bin;`

-   Java home -<

    :   ```bash
    export JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64
    ```

-   2016 年你学会了什么新技能？（我的是：熟练掌握数十首中英文儿歌而且经常无意识哼唱）

-   sanity -<

    :   ```
        英 ['sænɪtɪ] 美 ['sænəti]

        n. 明智；头脑清楚；精神健全；通情达理
        ```

-   女人 -<

    :   我想社会会发展到一天，女人只要生了孩子，国家就会提供住房补贴，基本生活费，婴儿食品保障，免费托儿所的。
        这不是出于善心，而是经济发展和人口教育成本上升的自然后果。婚姻制度而将因而解体。在这种社会成长起来的孩子，
        他忠诚的第一对象也将是国家而非家庭，甚至不是他的母亲。

-   FPGA -<

    :   ![鬼知道我经历了什么](http://ww1.sinaimg.cn/large/67d6aa46gw1fbljm25kwxj20dw2nujz1.jpg)

        众所周知，通用处理器（CPU）的摩尔定律已入暮年，而机器学习和 Web
        服务的规模却在指数级增长。人们使用定制硬件来加速常见的计算任务，
        然而日新月异的行业又要求这些定制的硬件可被重新编程来执行新类型的计算任务。FPGA (Field Programmable Gate Array)
        正是一种硬件可重构的体系结构，常年来被用作专用芯片（ASIC）的小批量替代品，
        然而近年来在微软、百度等公司的数据中心大规模部署，以同时提供强大的计算能力和足够的灵活性。

         “预测的准确率，我们现在已经做到北京未来 6 个小时的准确率达到了
         75%，在深圳和广州做到了 80%。未来 48 个小时的预测准确率达到
         50%。大家不要小看 50% 的准确率，它其实已经非常高了。相比之下，天气预报
         24 小时的准确率只有 40%。”郑宇说。

        另一方面，日本企业老气横秋、死气沉沉，有活力的新企业根本没有，和中美相比截然不同。
        跨领域、改变商业模式的大创新也出不来，近年来世界上的大创新主要是美国在搞，中国也有一些。
        日本大企业有权力的决策人员基本是老头，领导者平均年龄高达 60 岁，而且极度保守，
        对于世界科技与生活剧烈的改变既想不到也无法接受，只会让研发人员进行一些精致的研发。
        有些日本高管不愿意看电子邮件，让手下人打印出来看。高管们不想学习新东西，旧软件一直用，
        新软件更好用但是在公司内部无法推动。日本的硬件研发传统也与此相关，高管们就是这么过来的，
        对于硬件研发能理解，对于元器件做精做深是支持的。

-   大丸子汤 -<

    :   总结：想法和创意连小学生都有，改变世界的雄心和哲学体系每个大学生都有一套。
        这个世界稀缺的是组织和后勤。

        选择市场，选择伙伴，都不是由欲望（比如说愿景）决定的，而是由实力决定的。
        曾国藩战术战略并不出众，但他重视两件事，一是练兵，二是后勤。
        这就使他能不管怎么失败，总是能再起。内部的，后方的才是最根本的。

-   python requirements.txt -<

    :   ```bash
        for req in $(cat requirements.txt); do pip install $req; done
        sudo apt-get install python-dev python-numpy –y
        sudo apt-get install libprotobuf-dev libleveldb-dev libsnappy-dev \
                             libhdf5-serial-dev protobuf-compiler -y
        sudo apt-get install --no-install-recommends libboost-all-dev -y
        sudo apt-get install libgflags-dev libgoogle-glog-dev liblmdb-dev -y
        sudo apt-get install libatlas-base-dev -y
        ```

-   能总结一下，你是怎么形成这种性格的吗？我正缺这个。 -<

    :   吐槽：搞得你能回娘胎改造似的。

-   显卡 nvidia -<

    :   ```
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
        ```

-   update alternatives -<

    :   ```bash
        sudo update-alternatives --set cc /usr/bin/gcc
        sudo update-alternatives --install /usr/bin/cc cc /usr/bin/gcc 30
        sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-5 10
        sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-4.9 20
        sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-5 10
        sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-4.9 20
        ```

-   这个故事中，太史公着重刻画的是曹沫的勇气

    :   其实，鲁国收回土地的关键在齐桓公，如果不是因为当时的贵族阶层普遍重视信义承诺，他完全有理由会盟后毁约。
        《孔子世家》就记载，孔子途经蒲邑被人扣留，在威逼下立誓，保证不去卫都，被放走后依旧前往，
        子贡问他为什么敢于背弃盟誓，孔子回答，这是要挟下订立的盟誓，神是不会听的（“要盟也，神不听”）。

-   键盘 -<

    :   flico minila air 67

-   第四部在丧失了前两部的优点之后，缺点还相当多 -<

    :   剧情简单老套如三流丧尸电影，节奏跳脱又撕裂，人物很多就是为了领便当而存在的，
        **为了迎合 3D 非常刻意地向屏幕扔东西**，动作戏里面慢动作多得令人发指……总而言之，
        这就是一部圈钱之作，实在没什么诚意。

-   本·戈泽尔博士的事迹被拍成了电影《超验骇客》

-   [VisualSFM](http://ccwu.me/vsfm/doc.html#) -<

    :   The output format: N-View Match (NVM)

-   为什么强调最后两个字，是因为 LZ 遇到 99% 的男人再第一次或者第二次见面时就提出性要求。 -<

    :   吐槽：因为你愿意见面第二次的，水平比你高太多。
        根本不想和你发展恋爱关系……

-   阴阳配偶，天地之大义也。天下未有生而无偶者，终身不适，是乖阴阳之气，而伤天地之和也。

-   寄意寒星荃不察 我以我血荐轩辕

-   [抓水蜈蚣的渔民 - 简书](http://www.jianshu.com/p/1934f62ef57b)

-   读什么书是个人隐私，摆在书架上，等于泄露个人隐私。

-   最可靠的自杀方法是通电。记住通电时串一个灯泡，这样不会电流过大烧得伤口难看。

-   当年的格道网有很多好玩的人。在牛气冲天的牛博网之外，还有一个放荡狂欢的格道网。
    格道网的很多人都是从牛博群拉来的，来的都是有趣的人，嬉皮笑脸的人，
    装疯卖傻的人，气焰嚣张的人， 灵气十足的人，古怪刁钻的人。
    那些一本正经要做大腕的人是不受欢迎的。倘若格道网来一个韩寒、郭小四、
    蒋方舟、白岩松、高晓松之类的一本正经的人，一定会被大家活活玩死。

-   飞剪船

-   今天和一个在辉瑞（全球药企老大）工作过多年的上海女人聊了整整半天，
    被这家企业在中国的发展策略震惊了。最后她还强烈建议我做一个旨在打倒中药注射针剂的
    博士论文#中药注射剂简直人神共愤#

-   [跟别人聊天，没有话题，怎么办？ - 知乎](https://www.zhihu.com/question/20220020/answer/20707868) -<

    :   Cold reading 直译过来称为“冷读”。女孩最讨厌查户口式的问题。你多大了？你是哪里人？
        你叫什么名字？很可惜大部分人依然只会这种表面的聊天模式。如果你会冷读，就不会有这个问题。
        cold 有着没有准备的意思，reading 有着读心、占心的意思，冷读术就是指在没有防备，
        甚至第一见面时看透他人的心思，从而更好的与人交流，经常被心理医生应用于心理治疗。

        比如：“你是不是在国外留过学？”这是一句普通的问句。
        转换成冷读就是：“你一定有在国外留过学。”

        可能你已经发现了一点，那就是冷读必须用陈述句。而且，冷读是一种猜测。既然是猜测就会不确。
        但这并不意味着冷读就失败了。冷读并不是让你完全猜准对方的信息，而是通过这种方式让对方敞开心扉，主动的给你更多的信息。
        当然你不能胡乱去猜。而是通过对方的衣着，谈吐，话题内容等等一切信息去让你的猜测更加准确。

        成为读心者（cold reader）的四大要素

        -   要素一　维持解释而不是猜测的心态

            ~~读出对方的心事，並向对方炫耀：“怎么样？我很厉害吧！”~~

        -   要素二　让对方说他想说的话
        -   要素三　说对方想听的话
        -   要素四　将对方视为独一无二的人，对对方的一切都感到惊喜

        一个故事要让他听起来像是真的，必须得有细节。

        加入感情。一个好的故事没有一个好的述说方式也是行不通的。试想，如果机器人瓦力没有感情，它大概不会有那么多的粉丝。

        表层价值 Vs 核心价值

        核心价值= 核心需求

        幽默感是你的一种思维方式。我想在此说明，不是你会讲笑话就是幽默了。幽默不是因为你的话题，而是因为你这个人。

        制造深层次联系感的时机和地点非常重要。你不能在大中午的和别人聊你爱上过一个不该爱的人。你也不能在电玩城告诉她你曾经想要自杀。

-   [为什么韦小宝有那么多个老婆却比较和睦相处，而段正淳的那么多个老婆却互相残杀？ - 知乎](https://www.zhihu.com/question/24651565#answer-8399253) -<

    :   这个问题下很多人对韦小宝和段正淳的看法完全相反。哪怕他们都肯定的是同一价值（品质）。。。。。。

        我更倾向于韦小宝是空嘴皮，段正淳才是真爱（哪怕一次可能只爱一个）。

-   [重磅 | Facebook 田渊栋详解：深度学习如何进行游戏推理？](http://mp.weixin.qq.com/s/eU3sDvyc20VgUNV3JSnHnQ) -<

    :   -   游戏已经成为 AI 研究测试平台

        但是同样的办法不能用在围棋上，因为每一步的可能选择太多。所以后来采用了蒙特卡洛树搜索，
        这个方法其实在十几年前才第一次被用在围棋上，在用了这个方法之后，围棋的棋艺也提高了很多。

        我在这简单介绍下 Alpha-beta Pruning。假设玩家需要对下一步做出判断，需要搜索它的特征，
        一旦发现对方在某一分支有很好的应招，那么这条路就不用再搜索了，因为对方这个应招会让你这个分支的最优解劣于另一个分支的最差解。
        这就是它的一个简单思想概括。

-   [winsty: 我的PhD总结 – 我爱计算机](http://www.52cs.org/?p=632) -<

    :   我很推崇在 coursera 课程 Introduction to Philosophy
        的第一节课中的定义：Philosophy is the activity of working out the right
        way of thinking about things. 如果能正确理解这句话，那么 PhD
        的意义就十分明了：习得专业知识只是 PhD
        学习中的一部分，更重要的是面对一个未知的问题时，不慌不乱，梳理出问题的逻辑，并有一套科学的方法去分析。
        这也就是为什么经常会说赢家通吃的原因。这一点在下一个问题中具体展开讲。在此，我也特别推荐两门
        coursera 的课程，我觉得可以作为每个 PhD 101 课程：Introduction to
        Philosophy https://www.coursera.org/learn/philosophy 和 Philosophy and the Science https://www.coursera.org/course/philsci

        首先学术能力，人脉关系这些硬条件不必多谈。主要来说下对学生的指导和学生之间的关系。
        每个人的学习习惯不同，适合的导师风格自然也不同。
        有些人适合事无巨细的指导，有些人适合导师给予充分自由，只在关键时刻指点。
        其实这个问题的一个简单回答是：好的导师在学生毕业后，学生还愿意继续与之合作。
        有很多 PhD 毕业之后，就再完全不愿意和导师再打交道，把毕业视为一种解脱。
        这不得不说对于学生和导师两人都是一种悲哀。

        这应该是刚刚入门的同学最头疼的一个问题。首先要说的一点是，并不是每篇 paper 都需要读，也不是每篇 paper 都需要精读。
        **Not every paper is created equal.**
        我一般会看两类 paper：

        -   1) 和自己在做的 topic 很相关;
        -   2) paper 的作者很出名，有质量保障。

        首先，懂得尊重别人的 research，对自己不懂的东西不乱发表意见是一种美德。
        其次任何一个 research 可以至少从方法的创新性和性能这两方面划分，
        所以我们会有四种划分（为了方便表述，下面的好和差都是相对而言）：

        -   创新性低，性能差：这样的 research
            应该是每个人避免的，除了浪费自己和他人的宝贵时间，没有任何意义。
            可惜就算在顶级会议里这样的工作还是不少。
        -   创新性低，性能好：这也可以算作一个 solid 的
            work，尤其是可以讲清楚为什么一些小的改动会提升性能，这些不起眼的
            trick 往往包含着对问题本身的 insight。工业界尤其欢迎这样的工作。
        -   创新性高，性能差：俗称的“挖坑”的工作。这样的工作包括提出一个全新的问题或者对一个已有问题的全新解法。
            这样的工作虽然可能在文章中只提出了非常简单的
            baseline，或性能并不能比过最好的已有方法，但是可以启发大量后续的
            research。这是典型的学术界中的好工作。例如 CVPR 中的 oral paper
            大多属于这个类型。
        -   创新性高，性能好：这样的 research
            自然是最好，不过大多数时候是可遇不可求的，往往需要“时势造英雄”。

        -   参加各种比赛： 比赛是一个以性能为导向的事情，所以参加比赛的目的并不在于创新方法，而在于：

            1）通过接触更真实的数据，增强对问题的认识和理解：
            这一点在各种 data mining 比赛中感受尤其深刻。
            对数据和业务本身的认识理解远远重要于模型本身，传送一个我在知乎上的回答：http://www.zhihu.com/question/24533374/answer/34631808

            2）对已有 paper 去伪存真：这一点在我参加 imagenet LSVRC 2014 的比赛时感受尤其深刻。
            在参加这个比赛之前，我虽然读过很多 CNN 相关的 paper，但是并没有真正动手跑过大规模实验。
            在这个比赛过程中，我尝试实现了很多之前的 paper，结果正如所料，绝大多数并不 work。
            但是极少数 work 的 idea 让我对 CNN 这个结构本身得到了很多 insight，直接指导了我后续的工作。
            继续传送一下一年多以前关于这个比赛的一个知乎回答：http://www.zhihu.com/question/24904450/answer/29418425

        -   参加各种开源项目：相对而言，research code 大多是小规模 demo 性质的。参与贡献到一个真实世界中的 codebase 和
            独自写 research code 是完全不同的两种体验。十分有幸参与到了 DMLC 项目中，向各位大神学习了很多不可能在学校中习得的技术，
            这也是我 PhD 期间一段十分宝贵的经历。继续给 DMLC 和 mxnet 做个广告：https://github.com/dmlc/mxnet

-   [Imprinting | Twilight Saga Wiki | Fandom powered by Wikia](http://twilightsaga.wikia.com/wiki/Imprinting) -<

    :   >   "It's not like love at first sight, really. It's more like… gravity moves…
        >   suddenly. It's not the earth holding you here anymore, she does… You become
        >   whatever she needs you to be, whether that's a protector, or a lover, or a
        >   friend."
        >
        >   --Jacob Black explaining to Bella Swan about imprinting

        Imprinting is the involuntary mechanism by which Quileute shape-shifters find their soulmates. It is a profound, intimate phenomenon that exists among the Quileute shape-shifters.

-   [刘仲敬论文集（1-14）（目录）](https://www.douban.com/group/topic/71041022/) -<

    :   阿姨。。。。。。

-   [Prefered 3d model format of THREE.JS - Stack Overflow](http://stackoverflow.com/questions/11243689/prefered-3d-model-format-of-three-js/11245289) -<

    :   （Three.js 的作者。）

        We have our own [JSON Geometry format](https://github.com/mrdoob/three.js/wiki/JSON-Geometry-format-4).

        You can use these:

        -   [Blender exporter](https://github.com/mrdoob/three.js/tree/master/utils/exporters/blender)
        -   [Python script from OBJ to JSON](https://github.com/mrdoob/three.js/blob/master/utils/converters/obj/convert_obj_three.py)

-   [12117 – The default desktop startup screen causes damage to monitor!](https://bugzilla.xfce.org/show_bug.cgi?id=12117) -<

    :   ```
        Steps to reproduce?
        1. Start Xfce, using the default mouse wallpaper
        2. Leave the computer with the screen turned on and a cat in the same room

        Expected results:
        - The cat keeps sleeping

        Actual results:
        - The cat scratches the screen

        Here's a potential patch, but I can't test it since I don't have the required hardware (cat).
        ```

-   [思考之后觉得好累，是不是消耗了很多能量？](http://daily.zhihu.com/story/9307072) -<

    :   结论：思考时脑部耗能作为整体不会有显著增加，各脑区耗能分配会有幅度微小 (根据血氧信号判断，<5%*) 的变化。

        大脑的能量来源是血糖。补充血糖对执行任务的作用未有共识（取决于任务设计有不同效果），但吃糖并非总能增强脑力任务表现。

        重复要点：**大脑基础耗能很高，在不同任务状态下耗能变化幅度很小。**

-   [在绝对定位的情况下怎么让 div 居中呢？ - boomler 的回答 - SegmentFault](https://segmentfault.com/q/1010000006768774/a-1020000006768993){.hearts}

-   [大公司里怎样开发和部署前端代码？ - 知乎](https://www.zhihu.com/question/20790576/answer/32602154) -<

    :   这个叼了……

-   [20 Impressive Examples for Learning WebGL with Three.js | Tutorialzine](http://tutorialzine.com/2013/09/20-impressive-examples-for-learning-webgl-with-three-js/) -<

    :   -   [Google Street View Hyperlapse on Vimeo](https://vimeo.com/63653873)

            酷毙了！

        -   Cube Slam

-   [UV mapping a sphere triangle mesh - MFT Development](https://mft-dev.dk/uv-mapping-sphere/) -<

    :   一个球体的 UV mapping 要考虑清楚蛤。

-   [小事 · 没有一把枪在指着你](http://daily.zhihu.com/story/9298623) -<

    :   哈哈哈。我看到这，对作者深深地同情。本来就是啊！

        >   一个年轻人未必幼稚
        >
        >   但是一个幼稚的人心里
        >
        >   一定住着一个没有力量的小孩

        最后一天的提问环节，我鼓起勇气争取到了一个提问的机会。我的问题被一句一句完整地翻译给她听：
        我说我有一个非常困扰我的问题，就是当我和我先生发生冲突的时候，我总是用冷暴力的方式去惩罚他，
        我已经意识到这样的沟通方式对他造成了深深的伤害，而他是这个世界上我最不愿意去伤害的人......
        我又说起小时候被妈妈忽略的经历，妈妈喜欢打麻将，经常半夜才回到家，而我就一直等到她的脚步声出现在楼道里才能睡觉；
        有一年我把我的生日愿望郑重地写在家里的台历上想让妈妈看到：希望妈妈再也不要打麻将了......
        我说我觉得小时候被忽视的经历让我在自己的亲密关系中缺乏安全感所以会用这种不健康的沟通模式来应对......
        我说我特别特别不想伤害我先生，可是当情绪上来的时候真的无法控制自己，这真的很困扰我，我该怎么办？

        在整个翻译过程中，老太太一言未发，待翻译翻完最后一句话时，
        她说：“**你当然可以控制自己，只要你想，并没有一支枪在那里抵着你。Next one.**”
        然后她就不理我了！！！转头去回答下一个问题了。

        原本只想简单分享一下自己"幼稚病"的回答，不小心写了三个小时。
        交叉来看当年自己走过的心路历程以及写给老公的生日寄语，很感恩他当年没有放弃我这个幼稚病“病人”，帮助我变好，
        而在很多年后让我有能力帮助他变得更好，进而又有能力帮我变得更好去帮助他变得更好......

-   [男人应如何自拍（才能得到妹子喜欢）？](http://daily.zhihu.com/story/9305686) -<

    :   最好的照片状态是不看着照相机而且不笑。不看着照相机，但是摆出调情的神态是最差劲的

-   [graphics - Enabling WebGL support for Android WebView - Stack Overflow](http://stackoverflow.com/questions/15395245/enabling-webgl-support-for-android-webview) -<

    :   WebGL was not supported in WebViews before Android Lollipop. In KitKat,
        Android switched to Chromium as the native WebView implementation, but
        it is locked to Chromium 33, with no WebGL. In Lollipop, WebView is
        updated via the Play Store, and now supports WebGL. (source:
        https://developer.chrome.com/multidevice/webview/overview)

        Trying to extend WebView to support it is next to impossible.

        One thing you might consider, is use CSS 3D transformations instead of
        WebGL, those are supported on Android ICS and forward, see
        http://caniuse.com/#feat=transforms3d

        可以把 WebGLRenderer 换成 CanvasRenderer。

        也可以把 WebGL 打开： I have chrome version 28.0 on OS 4.2.2 WebGl is not enabled by default you need to enable it by typying chrome://flags/ in seach bar just the way shwn in pic below

        ![](https://i.stack.imgur.com/W9nho.jpg)

-   [Learning | matp.at](http://www.matp.at/learning/) -<

    :   五体投地！学了这么多课程。==

-   [英国老牌教科书 ... - - Bonnae的广播 - 豆瓣](https://m.douban.com/people/bonnae1982/status/1967539793) -<

    :   英国老牌教科书出版商哈珀·柯林斯出版集团 (HarperCollins Publishers)
        14 日与上海世纪出版集团签订协议，将于今年 9 月翻译出版上海小一至小六的数学教材。
        英国部分小学将从今秋开始陆续使用这套名为《真实上海数学》(Real Shanghai ……

        教科书项目源于 2016 年 7 月英国政府宣布投入 4100 万英镑用于提高数学教育品质， 当中包括在 8000 多间中小学推广“上海教学模式”。
        英国教育学者发现，在上海的数学堂中，教师带领学生高读朗读口诀和公式，将数学概念图像化，有明确清晰的教学目标，均能提高学生水平。
        在翻译教材之前，中英数学教师交流项目已成为中英高级别人文交流机制中的重点项目，截至 2017 年 1 月，英国和上海已互派 400 多名教师及教育管理人员交流。

-   [主持人如何练发音？](http://daily.zhihu.com/story/4714920) -<

    :   一，声音很扁

        1，是因为你口腔开度不够大

        具体办法就是做“咬苹果的练习”，专业术语就是“打开牙关”

        2，你没有气沉丹田

        很明显，你没有用气，或者是用气极少，这也是为什么你会是娃娃音。
        因为你虚，太虚了，你的气没有提上来。

        （1）怎么改善呢，首先你要找到你腹部的准确位置，你试试轻声咳嗽，你会发现你肚子哪有起伏，对了，那就是你以后用气的地方，如果用气发声，越用力，气越多，哪里的浮动就会越大。

        （2）你找到以后就可以开始做气息的练习，关于气息的练习有三个阶段。

        二，咬字不清

        咬字不清就是练绕口令了。
        [请学播音的推荐几个经典的绕口令吧？最后能系统练习各种发音?](http://www.zhihu.com/question/22931591/answer/24531747)

        有针对性的做绕口令，坚持练习。

-   [ELSD - Ellipse and Line Segment Detector](http://ubee.enseeiht.fr/vision/ELSD/) -<

    :   -   [district10/LSDs: LSD, ELSD, via cmake](https://github.com/district10/LSDs)

-   [Three.js 源码阅读笔记 -2 - 一叶斋主人 - 博客园](http://www.cnblogs.com/yiyezhai/archive/2012/12/02/2796831.html) -<

    :   属性 matrix 和 matrixWorld 就很好理解了，matrix 表示本地的模型矩阵，仅仅表示该对象的运动，
        而 matrixWorld 则需要依次向父亲节点迭代，每一次迭代都左乘父亲对象的本地模型矩阵，直到 Scene 对象——当然，
        实际上是左乘父亲对象的全局模型矩阵。

        属性 position、rotation、scale 表示模型矩阵的三种变换部分，在 Matrix4 类中有相关说明。
        rotation 和 eulerOrder 共同描述了一个旋转状态，quaternion 也可以描述一个旋转状态，
        具体使用哪种方法要看 useQuation 的布尔值。

        ```javascript
        applyMatrix: function ( matrix ) {
                this.matrix.multiply( matrix, this.matrix );
                this.scale.getScaleFromMatrix( this.matrix );
                var mat = new THREE.Matrix4().extractRotation( this.matrix );
                this.rotation.setEulerFromRotationMatrix( mat, this.eulerOrder );
                this.position.getPositionFromMatrix( this.matrix );
            },
        ```

        函数 translate(distance, axis) 令该对象向 axis 轴指定的方向前进
        distance 距离。函数
        translateX(distance)，translateY(distance)，translateZ(distance) 令其向
        X，Y，Z 轴前进 distance 距离。注意这些函数仅仅改变了 position
        对象的值，而不曾改变 matrix 的值。

        ```javascript
        translate: function ( distance, axis ) {
                this.matrix.rotateAxis( axis );
                this.position.addSelf( axis.multiplyScalar( distance ) );
            },
        translateX: function ( distance ) {
                this.translate( distance, this._vector.set( 1, 0, 0 ) );
            },
        ```

        函数 `getDescendants(array)` 将调用者的所有后代对象全部 push 到数组 array 中。

        ```javascript
        THREE.Matrix4 = function ( n11, n12, n13, n14, n21, n22, n23, n24, n31, n32, n33, n34, n41, n42, n43, n44 ) {
            this.elements = new Float32Array( 16 );
            this.set(
                ( n11 !== undefined ) ? n11 : 1, n12 || 0, n13 || 0, n14 || 0,
                n21 || 0, ( n22 !== undefined ) ? n22 : 1, n23 || 0, n24 || 0,
                n31 || 0, n32 || 0, ( n33 !== undefined ) ? n33 : 1, n34 || 0,
                n41 || 0, n42 || 0, n43 || 0, ( n44 !== undefined ) ? n44 : 1
            );
        };
        ```

        ```javascript
        THREE.CubeGeometry = function ( width, height, depth, widthSegments, heightSegments, depthSegments ) {
            THREE.Geometry.call( this );
            function buildPlane( u, v, udir, vdir, width, height, depth, materialIndex ) {
            this.computeCentroids();
            this.mergeVertices();
        ```

        refs and see also

        -   [Three.js 源码阅读笔记 -1 - 一叶斋主人 - 博客园](http://www.cnblogs.com/yiyezhai/archive/2012/11/29/2791319.html)

-   [PPM、PGM、PBM 三种都是图像文件格式 - tqsheng - C++ 博客](http://www.cppblog.com/tqsheng/archive/2013/11/28/204504.aspx) -<

    :   PPM、PGM、PBM 三种都是图像文件格式：

        -   PPM->Portable PixMap 支持真彩色图形，可以读上面所有格式，输出 PPM 图形
        -   PGM->Portable GreyMap 支持灰度图形，能够读 PBM 图形和 PGM 图形，输出 PGM 图形
        -   PBM->Portable BitMap 支持单色图（1 个像素位）

        ```
        文件描述子  类型    编码
        P1  位图    ASCII
        P2  灰度图  ASCII
        P3  像素图  ASCII
        P4  位图    二进制
        P5  灰度图  二进制
        P6  像素图  二进制
        ```

        使用 ASCII 的 0 或 1 方式来表示数据，0 表示白色，1 表示黑色。

-   [一定要看重庆这张照片！轰动了亚洲，震撼了全世界！_财经头条](http://cj.sina.com.cn/article/detail/1790671321/189482) -<

    :   重庆整个主城就是建在一座座山上的！懂了吗？

-   [李娇娥的广播](https://www.douban.com/people/yutori/status/1965430803/) -<

    :   走过小区，一个老太正在弯腰擦着一楼窗台下的空调外机，忽然窗子被打开，
        一个脑袋探出来【你是什么人！你在干什么！】【我不是坏人！我家猫喜欢蹲在这个上头晒太阳，
        这个机子太脏了，天天坐一屁股灰回家，我来擦擦，我不是坏人！我就擦一下……】【哦……】窗子关上了

-   [Linting HTML using CSS](https://bitsofco.de/linting-html-using-css/) -<

    :   Inline Styles

        ```css
        *[style] {
            border: 5px solid red; /* Style to make the elements noticeable */
        }
        ```

        Faulty or Missing Link Targets

        ```css
        a:not([href]),
        a[href="#"],
        a[href=""],
        a[href*="javascript:void(0)"] { … }
        ```

-   [If You Think You’re a Genius, You’re Crazy - Issue 46: Balance - Nautilus](http://nautil.us/issue/46/balance/if-you-think-youre-a-genius-youre-crazy-rp) -<

    :   When John Forbes Nash, the Nobel Prize-winning mathematician,
        schizophrenic, and paranoid delusional, was asked how he could believe
        that space aliens had recruited him to save the world, he gave a simple
        response. “Because the ideas I had about supernatural beings came to me
        the same way that my mathematical ideas did. So I took them seriously.”

        The most important process underlying strokes of creative genius is the
        tendency to pay attention to things that normally should be ignored or
        filtered out.

        Exceptional intelligence alone yields useful but unoriginal and
        unsurprising ideas.

-   [Employees who decline genetic testing could face penalties under proposed bill - The Washington Post](https://www.washingtonpost.com/news/to-your-health/wp/2017/03/11/employees-who-decline-genetic-testing-could-face-penalities-under-proposed-bill/?utm_term=.80062d3be09a) -<

    :   蛤，不行？

-   [Draft NIST SP 800-63-3 Digital Identity Guidelines](https://pages.nist.gov/800-63-3/)

-   [公共文件夹 - Dropbox 帮助 - Dropbox](https://www.dropbox.com/help/16) -<

    :   使用公共文件夹呈现 HTML 内容

        从 2016 年 10 月 3 日开始，Dropbox Basic（免费）用户不能再使用公共链接来在网络浏览器中呈现 HTML 内容。
        如果您是 Basic 用户，且创建的网站直接显示来自您 Dropbox 帐户的 HTML 内容，
        这些内容不会再在浏览器中呈现。HTML 内容仍会安全保存在 Dropbox 中，且您可以使用其他共享方法共享这些内容。

-   [Reverse Culture Shock - The Challenges of Returning Home: Reverse Culture Shock](https://www.state.gov/m/fsi/tc/c56075.htm)

-   [Why WebAssembly is Faster Than asm.js ★ Mozilla Hacks – the Web developer blog](https://hacks.mozilla.org/2017/03/why-webassembly-is-faster-than-asm-js/)

-   [Principles for C programming - Drew DeVault’s Blog](http://sircmpwn.github.io/2017/03/15/How-I-learned-to-stop-worrying-and-love-C.html)

-   [Webster: Roll Your Own at Home: Writing Your Own Assembler](http://plantation-productions.com/Webster/RollYourOwn/index.html)

-   [为教师喝彩演讲稿](http://m.xielw.cn/2016/yanjianggao_0825/2236.html) -<

    :   **为教师的“正能量”正名**

        尊敬的各位领导，同仁们：

        大家好！

        我叫孙杨君，来自聚奎镇中心小学，今天我演讲题目是《为教师的“正能量”正名》。
        提到“正能量”一词，我想，很多人在本次活动开展之前都和我一样，只有一个可意会而不可言传的模糊概念。
        为此，我专门去请教了一下“万能”的百度。其结果，却令我大跌眼镜。正能量一词，原本出自于英国物理学家狄拉克之手，是电动力学的一个专用名词。
        2012 年，世界级心理学家，理查德? 怀斯特的专著《rip it up》，经李磊译名为《正能量》，原本用于物理学上的这一专用名词，瞬间便爆红网络，高居 2012 年年度十大网络流行词汇之榜首。
        一时间掀起一股跟进、模仿、报道“正能量”的狂潮，一切可以贯之以积极的、健康的、催人奋进的、催人泪奔的、给予人力量的、给予人希望的各种主题的人或事，
        统统贴上“正能量”的标签，予以打包销售。“正能量”一词已然跃升为一个充满了象征意义的符号，在这个快节奏的现代社会中，
        给那些正在顶着来自生活、工作、人际关系等各方面压力的现代人们，带来幸福的憧憬和希望，激励着他们走出眼前的困境，扬帆前行。
        今天，我想谈一谈教育队伍中的正能量，为教师的“正能量”正名。

        “践行社会主义核心价值观? 传递教育系统正能量”，当看到这个命题后，着实让我有些头疼不已。
        因为，太多的关于教师的“负能量”包围着我们。打开“万能”的百度，输入“体罚”这一类的关键词，瞬间能跳出成千上万条相关的信息，令人目不睱接。
        猥亵学生、违规补课，参与赌搏?? 花样百出，层出不穷。教师头上的美丽光环已然消失殆尽，原本“光辉”的职业，已近了“十恶不赦”的边缘。
        教师们更是怨声载道，“鸭梨山大”。原来在人前可骄傲地说：“我是教师”，现在，却不敢直视自己的职业，教师，都快成了“恶魔”的代名词。
        以至于，学生给老师撑了一把伞，都会成“万众瞩目”的大事件。

        可大家忽略了一个事实，教师，首先是一个人，是人就会犯错，是人，就会有人犯错。
        为什么只有教师的“错”会被人津津乐道，而教师的善行，

        充满“正能量”的人和事，却不常被人提及。在教师的队伍中，有过多少闪着光，发着热的“正能量”，你看得见吗？

        5.12 汶川大地震中，用自己羸弱的身躯，挡住坍塌下来的水泥板的瞿万容老师、
        用血肉之躯为孩子们筑起生命之门的张米亚老师、舍身护生的谭千秋老师，不更应该值得我们去牢牢记住吗？
        “最美女老师”张丽莉，在汽车飞驰而来时，不顾自身安危，推开吓傻了的孩子，自己却被无情的车轮碾轧至高位截肢，那张美丽的脸庞，
        不更应该深深烙在我们的心上么？ 如果说，这些事迹都太过悲壮，是时事造就的英雄壮举，那且看，扎根山村，培育乡村孩子 34 载寒暑的杨金元老师，
        坚守大山 28 载的“寸腰老师”宋志芳，与病魔顽强抗争，坚守乡村教育 37 载的张殿银老师。
        他们默默地承受着怎样的孤独煎熬和心酸，坚守着这样一份执着，他们的付出，难道不值得干着“高大上”的职业，吃着美食，开着小车的你们为之动容吗？
        他们的伟大，只因为他们很平凡。放眼看看，仔细找找，在我们身边，缺少这样平凡而伟大的“正能量”吗？
        **我的一个同事，名叫唐大华，与其共事时，他已 55 岁，一直坚守在乡村小学。为人爽朗和蔼，尤其关心我们年轻一代的成长。
        30 多年的工作，为其攒下的是一身的病痛，不得已提前病退。原本可以享享清福的他，病退后不到两年的时间，一场大病，便匆匆去了天堂；**
        我的另一个同事，名叫龚海锋，教师队伍中的尖子，业务骨干。有一天，一头栽到讲台上，中风偏瘫，走路都成了问题，去年，在他还没到退休的年龄之时，
        带着遗憾，永远地离开了他钟爱的世界；我的恩师龚元甫，一直坚守乡村教育数十载，结下累累硕果，退休后不到一年，突发脑溢血，倒在了正在劳作的土地里，
        永远辞别了人间。几十年的辛勤耕耘，积劳成疾，为社会，为人类作出的贡献，远远地超出了他们所获得的。他们不是英雄，只是千万教师中的沧海一粟，
        他们不会被人们崇拜，但你说，在他们身上，没有“正能量” 在熠熠生辉吗？

        教育，这是一个关系国家未来的伟大事业，而在为这一伟大事业鞠躬尽瘁的，绝大多数是平凡得不能再平凡的老师们，除去极少数的不务正业之徒，
        老师们都坚守在自己的平凡的岗位上，兢兢业业，默默地奉献着自己的青春，放着光，发着热。为了孩子们一个错误，一个不解而大伤元气，
        视孩子们的终生幸福，为自己最大的幸福，在他们身上，散发出的，不满满的都是“正能量”吗？

        流淌在教育系统内的“正能量”是源源不断的，我不敢说都能顶得上“太阳底下最光辉的职业”的光环，
        都比得过“人类灵魂工程师”的伟大，都赛得过“春蚕到死丝方尽”的悲壮，但一定能值得充满“正能量”的你们去发现，去思索，去传递。

-   [其实对 EX 念念不忘有时候也是一个还不错的主意 | VICE中国｜全球青年文化之声：世界在下沉，我们在狂欢](http://www.vice.cn/read/not-getting-over-staying-friends-with-ex) -<

    :   “所以当你失恋的时候，你仍旧疯狂地爱着那个人，你觉得自己对他／她恋恋不舍，没有办法不想他／她。
        你会情绪波动得很厉害，变得极度悲伤，觉得浑身疼痛然后黯然神伤。”
        对于在漫漫长夜里反复重温你们最后一次亲吻，最后一次在床上亲热的情景，
        第一次证实自己爱上了对方的胃痉挛的你来说，这可不是什么理想的组合。

-   [节后离职潮要来了，公司有哪些办法留住好员工？](http://daily.zhihu.com/story/9196330) -<

    :   -   自我效能感 (self-efficacy)

            工作嵌入度 (job embeddedness)、工作卷入 (job involvement)、工作投入度 (work engagement)、组织认同 (organizational identification)、组织承诺 (organizational commitment)

        -   工作满意度 (job satisfaction)

        -   大五人格 (Big Five Personality)

        -   受教育水平 (education background)

        -   工作自主性 (work autonomy)

        -   薪酬 (compensation)

        -   晋升机会 (promotion chances)

        -   角色模糊 / 冲突 (role ambiguity/ role conflict)

        -   挑战性压力源 / 阻断性压力源 (challenge stressor- hindrance stressor)

        -   人岗匹配 (person-job fit)

        -   组织道德氛围 (organizational ethical climate)

        -   团队凝聚力 (group cohesiveness)

        -   人 - 团队匹配 (person-organization fit)

        -   领导 - 成员交换理论 (leader-member exchange theory, LMX)

-   Personal Statement

-   [大误 · 已知我交往过所有血型的女孩](http://daily.zhihu.com/story/9259888)

-   [现在的男性是否普遍不再对女性展开追求了？为什么？ - 知乎](https://www.zhihu.com/question/55744630/answer/148668373) -<

    :   >   某一段时期（维多利亚时代，也就是英国实现工业化的时代），英格兰和威尔士地区45至49岁的女子中未婚女子就占1/7，而苏格兰地区竟高达1/5。
        >   英国将此称为“过剩女子”(Surplus women problem)的现象，所以有人说：“英国是老处女的祖国”
        >   （注：Rita S. Kranidis, The Victorian Spinster and Colonial Emigration[M], St. Martins Press, 1999. ）

        >   维多利亚时代文学记录，如《傲慢与偏见》，当时大部分女性学习知识，如地理文化音乐各种方面的知识的主要目的并不在于求知和充实大脑，
        >   而是要让她们看起来十分文雅，她们在社交中不至于因脑子空空如也成为大家的笑柄，而成为丈夫在社交圈中的美丽的点缀。
        >
        >   “伦敦的社交活动就知道围着婚姻转，人们要么寻找丈夫，要么躲避丈夫。” 切弗利太太如是说
        >
        >   ——王尔德《理想丈夫》

        3，我没有认真看完，但这置美妙灵魂于何地，
        这满满的大男子主义，什么叫女生学东西是为了取悦男生，
        有人现实，但有人追求柏拉图，追求理想国。

        答复：咳咳，这里要敲下黑板，注意关键字“宏观”“婚姻”。
        请注意，第一不要混淆恋爱和婚姻，我相信有很多缘由，
        ——甚至包括在球场上一个漂亮的投篮都可以使某人爱上一个人，
        但是，请告诉我，如果你选择和一个人结婚，你选择他的原因，
        与你和他谈恋爱的原因相比，要求是更多还是更少，更高还是更低呢？
        第二，我们不应该混淆个体与普遍，我们在这里的叙事都是社会的整体宏观角度来看的，
        我说，印度是一个炎热的国家，那么如果有人说，印度的某某地方非常的凉快，
        比中国的吐鲁番凉快，以此为反驳，这……

        我首先是个人，其次才是男人。每次都感觉自己在强颜欢笑找别人聊天，我又不欠谁的何必这么作践自己？

        想找男友，麻烦诚恳点，我也 28 快 29 的人。大家都是成年人，大家时间都很宝贵。
        这样套路，我真的被弄得很心寒，所以现在基本不找了。

        根据我自己的朋友圈，拿相同薪资的姑娘和男生基本生活水准天上地下，和我同薪资的姑娘，
        300 一位的自助，日料。某些逼格高的餐厅，天天刷。
        每天在公司讨论着 YSL 各个型号的口红。电子产品每年都在更新。
        各个国家的照片，朋友圈地理定位换着来。

        **暧昧时期的男女关系就是如此，总是能猜到对面的对面的目的，却又赶紧跳入对方的网。**

        “同学请问你有会员卡吗？”

        好像轮到我付钱了。

        如果不是店员的话我可能已经脑补完我们的一生了。

        或者换一种说法说， 我还没有遇到一个足够吸引我到想让我不顾一切经得告诉她我可以跟她在一起的人。

        因为越来越多的小伙开始明白，靠「追求」得来的感情，往往并不牢固。追得越狠，越不牢固。

        真正健康的恋爱，靠的不是「追」，而是「相互吸引」；同样的，要维护健康的恋爱关系，
        关心和付出也都应该是「平等」和「相互」的。因此，如果一个姑娘若真的喜欢你，
        那么当你在表达对她的兴趣时，她一定也会用某种方式热烈地回应你啦~

        后来我们的朋友聚会就再没见过她，我们这哥们据说又苦追了两年多，但两年后二人的关系尺度仍然仅限于吃饭看电影牵手，
        连个 KISS 据说都“每次都很勉强”（哥们原话）。后来我这哥们也熬不住了，毕竟也三张出头了，摊牌了一次，要么结婚要么分，
        得到的回答是: 不想分，但是现在结婚“我还是觉得太快了”（姑娘原话）。结果当然是以哥们痛下决心分手结束，
        据说这姑娘分了后还很痛苦，跟自己的妈妈哭诉，这老太太还给我哥们打电话说要出来谈谈，我哥们果断没有去。

        本地人有优越感咯，比如家里这个哥哥是当官的，那个谁谁是大公司的什么什么，所以啊圈子算一般很正常。

        那女的圈子高端和她屁关系，别人又不一定看得上她。我以前相亲过一个外资的女的，高端得不行，
        吃饭鼎泰丰（没南京路泰康汤包好吃），去各种店都是点很多菜，然后每种吃一点点，剩下的交给我，
        特别喜欢打出租车，走去轻轨只要三分钟的路还要打出租，当然费用都是我来。
        自己没多少工资，彰显得很高端，真正谈思想谈文化么又说不出一句有水平的。
        我耐心算是很好的了，还真就处了一段时间，后来有一次手机上不去网，借她手机买个单（我付钱），
        她提醒我这个手机流量是她的，我当时眼镜都要跌下来了......后来自然是我把她甩了。
        每每想起这个事情，就觉得真是自己一生的耻辱。有些人在对自我和事物的认知上有偏差，我觉得这类人，万不可与之为伍，
        应该让生活给他们响亮的耳光，让他们清醒认识自己。说现在男生不怎么追女生了，其实就是大家洞察力都比以前好，
        合不合适在最初期基本就有数，又有多少人像我曾经傻呵呵地试错呢？
        我现在对女人耐心很差，彼此有意思的就互相给予积极热烈的反馈，生活如此不易，
        恋爱何必去制造无谓的人祸呢？** 爱理不理待价而沽骑驴找马的统统滚远点。**

        |   我举出这个例子
        |   就是想让女孩子自己看看自己有多作
        |   男生从来没有来过大姨妈
        |   你让他怎么帮助你？
        |   多喝热水这句话总被拿来消遣
        |   但是你摸着自己良心说说
        |   你多喝点热水是不是真的会好一点？

        为什么男生不爱追女生，因为不平等。在这个人人都自尊自爱的社会，为什么男生要让自己去无条件牺牲，最后换来一句你是好人。
        一些女生在自私享受男生的好的时候，没有感激，没有真情，只有一副高高在上的样子，这样的态度是很伤人的。
        对于一些家境贫困或者长相平庸的男生来说，他给你的可能不多却已经是最好的了，而你不是什么公主，为什么要去伤害他？
        女生们，善良一些，不发好人卡（贬义型词汇），不轻易暧昧，用真心去对待每一个爱你的人，这样你自己也可以心安的去找到那个对的人不是吗？

        最好还是找两情相悦的吧。

-   [对热爱技术与互联网的你，这是我的 9 条建议](http://daily.zhihu.com/story/9235162) -<

    :   -   4. 当你踩过的技术的坑多了，自然你就成为大牛了...
        -   5. 学技术要学主流框架，学 Node 要学 Express，学 Java 就不要忘了 SSH，学 Ruby 首学 Rails。
        -   6. 关注云计算、docker、微服务、Devops、Baas 技术
        -   9. 对于新技术的热爱不仅可以拿来装 13，而且可以变成创业的优势

-   [男人喜欢聪明的女人吗？ - 知乎](https://www.zhihu.com/question/19861840) -<

    :   第一，没有人会因为一个人的优点而厌恶他。

        第二，招人厌的，是伪聪明而已。

        千万不要被【男人只喜欢无脑软妹子，不喜欢聪明独立高学历高智商的女人】或者
        【女人只喜欢有钱坏男人，不喜欢温柔体贴专一痴情的好男人】这种论调洗脑。
        千万不要在【我太优秀所以没人要】的自我安慰的流沙里越陷越深。
        真正优秀的人，会获得同样真正优秀的人的青睐。绝不会有人因为你太优秀而不要你。

        人类都喜欢他人拥有对他有利的特质，不喜欢他人拥有对他有害的特质。
        喜不喜欢对象聪明，取决于对象的聪明对他有没有利呗，也就是取决于自己聪明不聪明吧。

        “笨男人喜欢笨女人，因为不用考验自己的智商。”

        所谓物以类聚，人以群分，伴侣质素表明自身素质和品味：一个男人找一个聪明而牛逼的女人，
        难道不会比找个蠢货有面子么？大家应该会觉得你才智过人，才能虏获此等质素的女人的芳心吧？
        所谓物以类聚，人以群分，伴侣质素表明自身素质和品味：一个男人找一个聪明而牛逼的女人，
        难道不会比找个蠢货有面子么？大家应该会觉得你才智过人，才能虏获此等质素的女人的芳心吧？

-   [研究 SLAM，对编程的要求有多高？ - 知乎](https://www.zhihu.com/question/51707998/answer/127192245) -<

    :   总而言之，对 C++ 的水平要求应该是在教科书之上的。而且这个水平的提高，
        多数时候建立在你不断地看别人代码、码自己代码的过程之上。它是反复练习出来的，并不是仅仅通过看书就能领会的。
        特别是对于视觉 SLAM 问题，很多时候你没法照着论文把一套方案实现出来，这很大程度上取决于你的理论和代码功底。

        所以，请尽早开始学习 C++，尽早开始使用 C++，才是研究 SLAM 的正确之道。
        不要长期彷徨在自己的舒适区里犹豫不决，这样是没有进步的。（同样的道理亦适用于想研究 SLAM 但不愿意学习 Linux 的朋友们）

        refs and see also

        -   [如何评价高博的《视觉 SLAM 十四讲》？ - 知乎](https://www.zhihu.com/question/56630075/answer/150010023)
        -   [半闲居士 - 知乎](https://www.zhihu.com/people/gao-xiang-24-90/answers)

-   [美国行记之“街头告示标语的地道说法” - 知乎专栏](https://zhuanlan.zhihu.com/p/25782931) -<

    :   1. （电影院里的告示）请保持安静，文明观影。

        Please be quiet and courteous to others.

        2. （公园告示）

        请文明参观，尊重他人。

        Please be courteous and respectful of others.

        禁止宠物入内。

        Pets prohibited.

        禁止乱丢垃圾。

        Littering prohibited.

        请勿摘花。

        Do not remove or pick flowers.

        3. 各类门票价格 Ticket Prices

        成人票：Adult (ages 18-64)

        未成年人票：Youth (ages 12-17)

        老年票：Senior (ages 65+)

        学生票：Student

        儿童票：Child (ages 4-11)

        3岁及以下儿童：Ages 3 and under

        4. 公交相关用语：

        1）照顾专座/爱心专座

        Priority Seating/ Reserved Seating

        2）请将前排座位预留给老年人和残疾人。

        Please reserve the front seats for seniors and people with disabilities.

        请为老年人、孕妇和残疾人让座。

        Please give seats to seniors, pregnant women, or people with disabilities.

        需要时请让座。

        Please vacate upon request.

        3）请从后门下车。

        Please exit to the rear doors.

        4）请抓紧扶手。

        Please hold on.

        5）车门向内开启，为了您的安全，请勿站在车梯上。

        Doors open inward. For your safety, do notstand in stepwell.

        6）（请勿吸烟）违者罚款。

        Violators subject to fine.

        5. 交通告示

        1）限速25：speed limit 25

        5. 交通告示

        1）限速25：speed limit 25

        3）请锁车门，勿将贵重物品遗留在车上。

        Remove valuables, lock your car.

        4）拖车区：tow-away zones（固定时间段禁止停车区域，否则会被拖车并遭罚款。）

-   [Transformers: Beast Wars - Wikipedia](https://en.wikipedia.org/wiki/Transformers:_Beast_Wars) -<

    :   Transformers: Beast Wars is an entertainment franchise from **Hasbro（孩之宝）**, and
        part of the larger Transformers franchise. The fiction directly follows
        the Transformers: Generation 1 continuity established by the 1984
        series and animated film, while ignoring the continuity established
        with the Japanese Transformers series, though this franchise would have
        two exclusive Japanese series of its own. Previous to Beast Wars,
        Hasbro had attempted to relaunch the original toys and animation as
        Transformers: Generation 2.  Hasbro intended another franchise titled
        Transtech to follow, combining Beast Wars and Generation 1 characters
        and aesthetics, but this was cancelled. Instead the franchise began a
        series of reboots, beginning with the Japanese-produced Transformers:
        Car Robot series.

        [Beast Wars: Transformers (cartoon) - Transformers Wiki](http://tfwiki.net/wiki/Beast_Wars:_Transformers_(cartoon))

        Beast Wars: Transformers is a Daytime Emmy award-winning
        computer-animated television series that premiered on April 22, 1996 in
        syndication in the United States.[1] Though reviled by many
        Transformers fans when it first hit the airwaves in 1996, Beast Wars is
        now considered by many to be among the finest examples of Transformers
        storytelling, striking a happy balance between character, humor, and
        story.

        The show's CGI, though somewhat primitive by today's standards, was
        revolutionary by television standards of the time (and puts some later
        shows to shame). Mainframe's animators took pains to ensure their
        characters gestured and emoted in great detail, and the "camera" work
        often took creative advantage of the format's flexibility.

        The show was immediately followed by a sequel series, Beast Machines.

        [Energon - Transformers Wiki](http://tfwiki.net/wiki/Energon)

        :   Energon (sometimes spelled with a capital letter, sometimes not)
            is the preferred fuel of the Transformer race. It takes many forms,
            including ore, crystal, gas, and raw energy, but it is most
            commonly used by Transformers in its liquid state, which is stored
            in many different mediums, most famously the energon cube. It is
            ubiquitous in Cybertronian culture; in addition to being the
            Transformers' primary "foodstuff", it also serves as the default
            power source for their machines and weapons, and is even used as a
            currency, a catch-all fuel of life, technology, war and commerce on
            Cybertron and beyond. This widespread use also comes in defiance of
            its extreme volatility: energon is prone to detonating explosively
            if mishandled, and is even used as ammunition in order to exploit
            this attribute.

            >   They're all after this stuff called Energon, which is kinda
            >   like food and gas and blood and electricity all mixed into one.
            >
            >   —Raf Esquivel, Raf's Notes


        Maximals -<

        :   [Optimus Primal](http://tfwiki.net/wiki/Optimus_Primal/Beast_Wars_cartoon_continuity) -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/5/58/BeastWarsPt1_Primal_in_CR_chamber.jpg/250px-BeastWarsPt1_Primal_in_CR_chamber.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/9/99/BetterMousetrap_Optimus_in_flight.jpg/250px-BetterMousetrap_Optimus_in_flight.jpg)

            [Rhinox](http://tfwiki.net/wiki/Rhinox_(BW)) -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/0/05/Dark_Voyage_Rhinox_listening.jpg/270px-Dark_Voyage_Rhinox_listening.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/f/fc/TheWeb_Rhinox_closeup.jpg/220px-TheWeb_Rhinox_closeup.jpg)

            [Dinobot](http://tfwiki.net/wiki/Dinobot_(BW)) -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/b/b7/Dinobotversusplant.jpg/250px-Dinobotversusplant.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/e/e7/Better_Mousetrap_Dinobot.jpg/250px-Better_Mousetrap_Dinobot.jpg)

            [Cheetor](http://tfwiki.net/wiki/Cheetor_(BW)) -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/7/76/Cheetorbeast1.jpg/250px-Cheetorbeast1.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/7/7b/EqualMeasures_Cheetor_with_gutgun.jpg/300px-EqualMeasures_Cheetor_with_gutgun.jpg)

            [Rattrap](http://tfwiki.net/wiki/Rattrap_(BW)) -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/f/f0/Victory_Megatron_crushes_Rattrap.jpg/270px-Victory_Megatron_crushes_Rattrap.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/6/6e/OtherVisits2_Rattrap_with_gun.jpg/200px-OtherVisits2_Rattrap_with_gun.jpg)

            [Tigatron](http://tfwiki.net/wiki/Tigatron) -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/0/08/TheSpark_Tigatron_beast_mode.jpg/200px-TheSpark_Tigatron_beast_mode.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/0/08/Tigatron-takaraprofile.jpg/300px-Tigatron-takaraprofile.jpg)

            [Airazor (BW) - Transformers Wiki](http://tfwiki.net/wiki/Airazor_(BW))

            [Silverbolt](http://tfwiki.net/wiki/Silverbolt_(BW))

            [Transmutate (character) - Transformers Wiki](http://tfwiki.net/wiki/Transmutate_(character))

            [Depth Charge (BW) - Transformers Wiki](http://tfwiki.net/wiki/Depth_Charge_(BW))

            [Tigerhawk - Transformers Wiki](http://tfwiki.net/wiki/Tigerhawk)

        Predacons -<

        :   Megatron -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/1/1d/Megatronbwtrex.jpg/230px-Megatronbwtrex.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/3/3c/Megatronbwspidersgame.jpg/300px-Megatronbwspidersgame.jpg)

            Scorponok -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/8/8e/BeastWars1_Scorponok_battleready.jpg/280px-BeastWars1_Scorponok_battleready.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/8/89/TheWeb_Scorponok_beastmode.jpg/220px-TheWeb_Scorponok_beastmode.jpg)

            Terrorsaur -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/d/dc/TerrorsaurcagedRT.jpg/200px-TerrorsaurcagedRT.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/5/5f/Victory_Terrorsaur_guns_out.jpg/250px-Victory_Terrorsaur_guns_out.jpg)

            Tarantulas -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/8/86/TheWeb_Tarantulas_beast_mode.jpg/250px-TheWeb_Tarantulas_beast_mode.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/4/4b/Tflocklens%26tarantulas.jpg/200px-Tflocklens%26tarantulas.jpg)

            Waspinator -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/6/69/BeastWars1_Waspinator_robotmode.jpg/250px-BeastWars1_Waspinator_robotmode.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/e/e5/ChainOfCommand_Waspinator_gets_shot_up.jpg/200px-ChainOfCommand_Waspinator_gets_shot_up.jpg)

            Blackarachnia -<

            :   ![](http://tfwiki.net/mediawiki/images2/a/ad/BAintroduction.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/9/93/TheSpark_Blackarachnia_spidermode.jpg/250px-TheSpark_Blackarachnia_spidermode.jpg)

            Inferno  -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/b/b4/OtherVoices1_Inferno_ant_mode.jpg/250px-OtherVoices1_Inferno_ant_mode.jpg)

                ![](http://tfwiki.net/mediawiki/images2/thumb/a/af/ComingoftheFuzors1_Inferno_flamethrower.jpg/280px-ComingoftheFuzors1_Inferno_flamethrower.jpg)

            [Quickstrike (BW) - Transformers Wiki](http://tfwiki.net/wiki/Quickstrike_(BW))

            [Rampage (BW) - Transformers Wiki](http://tfwiki.net/wiki/Rampage_(BW))

            [Ram Horn - Transformers Wiki](http://tfwiki.net/wiki/Ram_Horn)

            [Sea Clamp - Transformers Wiki](http://tfwiki.net/wiki/Sea_Clamp)

            [Cicadacon - Transformers Wiki](http://tfwiki.net/wiki/Cicadacon)

            [Ravage (G1) - Transformers Wiki](http://tfwiki.net/wiki/Ravage_(G1))

            [Dinobot II - Transformers Wiki](http://tfwiki.net/wiki/Dinobot_II)

        Others -<

        :   Vok -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/d/d4/Purple_vok.jpg/300px-Purple_vok.jpg)

            Starscream (G1) -<

            :   ![](http://tfwiki.net/mediawiki/images2/thumb/7/79/Starscreamg1.jpg/410px-Starscreamg1.jpg)



-   [Java Without If - Ashton Kemerling](http://ashtonkemerling.com/blog/2017/01/26/java-without-if/) -<

    :   ```java
        String x = Helper.functionOne();
        if (x != null) {
            x = Helper.functionTwo(x);
            x = Helper.functionThree(x);
            if (x != null) {
                ...
            }
        }

        Optional<String> x = Helper.functionOne()
                                   .map(Helper::functionTwo)
                                   .flatMap(Helper::functionThree);

        public HttpResponse handle(HttpRequest request) {
            return JsonParser.parse(request.getBody())
                             .flatMap(Validator::validate)
                             .map(ServiceObject::businessLogic)
                             .flatMap(JsonGenerator::generate)
                             .match(l -> HttpResponse.internalServerError(l.getMessage()),
                                    r -> HttpResponse.ok(l));
        }
        ```

        Well, first off I think it’s beautiful. I know that’s a subjective
        call, but the data flowing neatly from top to bottom without huge
        nesting if cases and early return values is very aesthetically pleasing
        to me.

        More functionally it’s easier to refactor with the help of the
        compiler. If I want to add different return status codes to match
        different scenarios, the compiler helps me out a lot more than if I’m
        adding an extra return case. If I convert the left side to a
        HttpResponse early, the compiler will helpfully remind me that the
        later flatMap calls cannot change Either<HttpResponse, JsonNode> to
        Either<Exception, BusinessObject>. Such changes are easily fixed once
        the compiler has pointed it out, but extremely hard to find on your
        own.

-   [Researchers figure out trick to a fruit fly's acrobatic flight](https://www.engadget.com/2017/01/27/researchers-figure-out-trick-to-a-fruit-flys-acrobatic-flight/) -<

    :   To understand precisely how these muscles worked together, the CalTech
        team bred a race of fly that produced a glowing protein whenever
        calcium was present. The flies use calcium to initiate muscle
        contractions so the stronger the contraction, the brighter the glow.
        Then the team hooked up these flies to a -- I kid you not -- "fruit-fly
        flight simulator" which displays different visual cues that instigate
        the fly to change course. By studying how much, and in which
        combination, the flies' muscles lit up, the team managed to suss out
        how their charges so deftly manage to avoid mid-air collisions. And now
        that they understand how simplistic flies do it, the team hopes their
        research will help explain how more complex motor functions developed
        in more evolved animals.

-   [The Craft of Text Editing](https://www.finseth.com/craft/#preface) -<

    :   -   Introduction: What Is Text Editing All About?
        -   One: Users
        -   Two: User Interface Hardware
        -   Three: Implementation Languages
        -   Four: Editing Models
        -   Five: File Formats
        -   Six: The Internal Sub-Editor
        -   Seven: Redisplay
        -   Eight: User-Oriented Commands: The Command Loop
        -   Nine: Command Set Design
        -   Ten: Emacs-Type Editors
        -   Epilogue
        -   Appendix A: A Five-Minute Introduction to C
        -   Appendix B: Emacs Implementations
        -   Appendix C: The Emacs Command Set
        -   Appendix D: The TECO Command Set
        -   Appendix E: ASCII Chart
        -   Bibliography
        -   Book Index

-   [I cannot continue working on my add-ons anymore. I'm sorry, but it's time.](http://fasezero.com/lastnotice.html) -<

    :   For over a decade I have supported and defended Mozilla and Firefox
        ([sometimes in weird
        ways](https://www.youtube.com/playlist?list=PLkWzvZH7LixZFCvGT2lt1MCzSST6Yetld)).
        I truly hope this is a move in which they succeed, as the alternative
        won't be a pleasant outcome to anyone in the online world, and I wish I
        could be a part of it and help construct and hone it to the outstanding
        platform they intend it to become. It's unfortunate that we have such
        divergent paths, I remain pessimistic about Mozilla's current strategy,
        so I must make a new one for myself. Still, I wish the best of luck to
        everyone there; I'm still afraid you'll need it.

-   [https://codecards.me/](https://codecards.me/) :hearts:

-   [Front-end Developer Handbook 2017 · GitBook](https://www.gitbook.com/book/frontendmasters/front-end-handbook-2017/details)

-   [jarrekk/imgkit: 🎆 Wkhtmltoimage python wrapper to convert html to image](https://github.com/jarrekk/imgkit) -<

    :   Python 2 and 3 wrapper for wkhtmltoimage utility to convert HTML to IMG using Webkit.

-   [Exploring what made the 'Doom' and 'Titanfall 2' campaigns tick](https://www.engadget.com/2017/01/31/exploring-what-made-the-doom-and-titanfall-2-campaigns-tick/)

-   [Latency Numbers Every Programmer Should Know](https://gist.github.com/jboner/2841832) -<

    :   Latency Numbers Every Programmer Should Know

        ```
        Latency Comparison Numbers
        --------------------------
        L1 cache reference                           0.5 ns
        Branch mispredict                            5   ns
        L2 cache reference                           7   ns                      14x L1 cache
        Mutex lock/unlock                           25   ns
        Main memory reference                      100   ns                      20x L2 cache, 200x L1 cache
        Compress 1K bytes with Zippy             3,000   ns        3 us
        Send 1K bytes over 1 Gbps network       10,000   ns       10 us
        Read 4K randomly from SSD*             150,000   ns      150 us          ~1GB/sec SSD
        Read 1 MB sequentially from memory     250,000   ns      250 us
        Round trip within same datacenter      500,000   ns      500 us
        Read 1 MB sequentially from SSD*     1,000,000   ns    1,000 us    1 ms  ~1GB/sec SSD, 4X memory
        Disk seek                           10,000,000   ns   10,000 us   10 ms  20x datacenter roundtrip
        Read 1 MB sequentially from disk    20,000,000   ns   20,000 us   20 ms  80x memory, 20X SSD
        Send packet CA->Netherlands->CA    150,000,000   ns  150,000 us  150 ms

        Notes
        -----
        1 ns = 10^-9 seconds
        1 us = 10^-6 seconds = 1,000 ns
        1 ms = 10^-3 seconds = 1,000 us = 1,000,000 ns

        Credit
        ------
        By Jeff Dean:               http://research.google.com/people/jeff/
        Originally by Peter Norvig: http://norvig.com/21-days.html#answers

        Contributions
        -------------
        Some updates from:       https://gist.github.com/2843375
        'Humanized' comparison:  https://gist.github.com/2843375
        Visual comparison chart: http://i.imgur.com/k0t1e.png
        Animated presentation: http://prezi.com/pdkvgys-r0y6/latency-numbers-for-programmers-web-development/latency.txt
        ```

-   [Piskel - Free online sprite editor](http://www.piskelapp.com/)

-   [年度热门 · 满大街都在戴手串、盘珠子，狂热背后翻滚着生意和人性](http://daily.zhihu.com/story/9167942)

-   [年度热门 · 提离职被老板加薪挽留，该怎么办？](http://daily.zhihu.com/story/9168206)

-   [年度热门 · 当年轻貌美的模特成为夜店女孩，她们甘愿「被剥削」](http://daily.zhihu.com/story/9167611)

-   [下一个是谁：历史上“被国家安全”的移民们](http://mp.weixin.qq.com/s/YbsjspE91tZocRVNfRHl2Q) -<

    :   历史上德裔移民一直是欧洲移民的主力军，早在 18 世纪的时候，富兰克林就曾警告说德国人“正在将宾夕法尼亚日耳曼化，
        而不是宾夕法尼亚将他们盎格鲁化（编者注：anglicization，英国化）。”

        (日裔儿童向美国政府表忠，随后不久便被关入西部集中营）

-   [The SpaceFN layout: trying to end keyboard inflation](https://geekhack.org/index.php?topic=51069.0)


-   [年度热门 · 哪些才艺可以在短期内学会，且易于展示？](http://daily.zhihu.com/story/9167773)

-   [古往今来世界上有哪些著名的或者常见的强盗逻辑？ - Creamy络的回答 - 知乎](https://www.zhihu.com/question/26004407/answer/138615119) -<

    :   ```
        记住这些，基本能看透七八成网络王八拳拳路。
        ---------------------------------------------------------------------------------------------------------------------------
        1：你说鸡蛋不好吃？你生一个啊？（强人所难诡辩）
        2：你说鸡蛋不好吃？呵呵你个鹅蛋脑残粉就知道嘚啵。（扣帽子诡辩）
        3：你说鸡蛋不好吃？你说了就算啊，凭什么你能规定鸡蛋不好吃？（诉诸资历诡辩）
        4：你说鸡蛋不好吃？再不好吃也是我们家的鸡蛋，吃里扒外的贱种！（诉诸人格诡辩）
        5：你说鸡蛋不好吃？农民伯伯天天汗滴禾下土养鸡给你吃的鸡蛋，你有什么资格说不好吃？（道德绑架诡辩）
        6：你说鸡蛋不好吃？得了吧，上次有鸭蛋粉往鸡蛋里注水被识破了，谁信你们说的谁傻。（强行联系诡辩）
        7：你说鸡蛋不好吃？这是你远房舅舅给你买的鸡蛋，你怎么敢这么对待老人家啊？（诉诸情感诡辩）
        8：你说鸡蛋不好吃？大青春作家XX明说鸡蛋好吃，有本事你跟他说去啊？（诉诸权威诡辩）
        9：你说鸡蛋不好吃？那为什么大家都爱吃鸡蛋啊？肯定是你有问题，回去反省去。（诉诸群体诡辩）
        10：你说鸡蛋不好吃？你家的鸭蛋更难吃。（树稻草人诡辩）
        11：你说鸡蛋不好吃？拿你的品蛋师执照秀秀你评价鸡蛋的资格。（诉诸资历诡辩MK2）
        12：你说鸡蛋不好吃？这篮子鸡蛋不好，你凭什么说所有鸡蛋都不好？（偷换范围诡辩）
        13：你说鸡蛋不好吃？鸡蛋很有营养，要不要我告诉你为什么人要每天吃鸡蛋啊？（转移话题诡辩）
        14：你说鸡蛋不好吃？等你跟你爷爷一边大的时候，你才能评价鸡蛋好吃不好吃。（诉诸资历诡辩MK3）
        15：你说鸡蛋不好吃？呵呵，我记得，你上次吃茄子都吐，你味觉一贯奇葩。（诉诸经历诡辩）
        16：你说鸡蛋不好吃？那你为什么吃木须肉？木须肉里有鸡蛋啊。（偷换概念诡辩）
        17：你说鸡蛋不好吃？那你为什么爱吃鹌鹑蛋？鸡蛋和鹌鹑蛋都是蛋，你一定是喜欢吃鸡蛋故意胡说的。（强行论证诡辩）
        18：你说鸡蛋不好吃？你吃的是哪种鸡蛋？柴鸡蛋？柴鸡不算严格意义上的鸡，高卢鸡蛋可是很好吃的。（"白马非马"诡辩）
        19：你说鸡蛋不好吃？你有什么证据证明世界上没有好吃的鸡蛋？证明不了你就没资格说鸡蛋不好吃。（“车库火龙”诡辩）
        20：你说鸡蛋不好吃？你早晚会吃到好吃的鸡蛋。（“两条河”诡辩衍生法）
        21：你说鸡蛋不好吃？你把爱吃鸡蛋的美食家都代表了？（诉诸资历诡辩+“子非鱼”诡辩）
        22：你说鸡蛋不好吃？天哪这真的是个笑话，伙计，你能让我看看你在哪儿买的鸡蛋吗？哦哦哦，是在晚市啊。你没赶上早集，鸡蛋坏啦！什么，早集的鸡蛋也不好吃？真搞不懂你们，鸡蛋有那么多种做法，你还爱吃木须肉，为啥要来这儿说鸡蛋不好吃呢，弄得大家都不愉快。发表观点是发表观点，但是说服不了别人又引战，你看看你……（东拉西扯诡辩）
        23：你说鸡蛋不好吃？你个小年轻又来胡说八道了啊，挨没挨你爹妈揍？（转移话题+羞辱）
        24：你说鸡蛋不好吃？我听XX明说过，人心理阴暗会导致味觉异常，进而不爱吃鸡蛋，这是病，你最好去查查。（放私货+强行论证诡辩）
        25：你说鸡蛋不好吃？不好意思，傻子请原地去世。（人身攻击）
        ```

-   [Oculus explains how room-scale VR taxes your USB ports](https://www.engadget.com/2017/01/27/oculus-explains-how-room-scale-vr-taxes-your-usb-ports/) -<

    :   Oculus explains how room-scale VR taxes your USB ports

        You might need a quad channel USB card.

        We've been dealing with USB for about two decades now, and to be
        honest, we're not usually asking that much from it. Plug in an adapter,
        microphone or game controller, then keep it moving. All of that
        changes, however, when it comes to virtual reality. As Oculus explains,
        plugging in a bunch of room scale sensors sends enough data through the
        ports to potentially overwhelm the 400MB/s capacity of the controller
        chip on your motherboard.

        Because of this, the answer isn't to simply plug in a hub and get more
        high-speed USB 3.0 ports, in fact, Oculus says you should probably get
        good results by **using two USB 3.0 connections, plus one older USB 2.0 port**
        if you need to go beyond two sensors to get some more mobility in
        your VR experiences. The blog is currently helping gamers get through
        the setup process, so go ahead and check out all of the posts to make
        sure everything is positioned and working correctly.

-   [Tutorial on Deep Learning | Simons Institute for the Theory of Computing](https://simons.berkeley.edu/talks/tutorial-deep-learning) -<

    :   -   **Lecture 1: **[Tutorial on Deep Learning I](https://simons.berkeley.edu/talks/ruslan-salakhutdinov-01-26-2017-1)
        -   **Lecture 2: **[Tutorial on Deep Learning II ](https://simons.berkeley.edu/talks/ruslan-salakhutdinov-01-26-2017-2)
        -   **Lecture 3: **[Tutorial on Deep Learning III](https://simons.berkeley.edu/talks/ruslan-salakhutdinov-01-26-2017-3)
        -   **Lecture 4: **[Tutorial on Deep Learning IV](https://simons.berkeley.edu/talks/ruslan-salakhutdinov-01-26-2017-4)

-   [Bibliomania: the strange history of compulsive book buying | Books | The Guardian](https://www.theguardian.com/books/2017/jan/26/bibliomania-the-strange-history-of-compulsive-book-buying)

-   [Box Breathing (the Navy SEAL breathing technique) from QuietKit](http://quietkit.com/box-breathing/) -<

    :   ![](http://quietkit.com/wp-content/uploads/box-breathing-4x-v01.gif)

        圆圈扩张，吸气。

        **Here are the directions**:

        1.  Inhale for 4 seconds (as the circle expands)
        2.  Hold your lungs full for 4 seconds (as the circle stays fully expanded)
        3.  Exhale for 4 seconds (as the circle shrinks)
        4.  Hold your lungs empty for 4 seconds (as the circle is contracted)

        That's it!

        Repeat for as many times as you need to calm down.

-   [http://numerical.recipes/](http://numerical.recipes/) -<

    :   The Art of Scientific Computing.

-   [A hello world post - Fabio Franchino](https://fabiofranchino.com/blog/hello-world/) -<

    :   First off, a confession.
        I’ve been always an internet lurker (贡献者) with some timid (胆小的) public contributions.

        I’ve always felt a bit guilty. That particular feeling in the gut when you owe something to someone.

        refs and see also

        -   [A hello world post | Hacker News](https://news.ycombinator.com/item?id=13513098)

-   [Boost C++ Libraries - Browse /boost-binaries/1.63.0 at SourceForge.net](https://sourceforge.net/projects/boost/files/boost-binaries/1.63.0/)

-   [regex - vim delete all lines that do NOT contain a certain word - Super User](http://superuser.com/questions/265085/vim-delete-all-lines-that-do-not-contain-a-certain-word) -<

    :   You can use

        :%g!/price/d

        to delete every line that doesn't contain "price"

        `:g!` is also known as `:v` (akin to `grep -v`)

-   [SIFT on GPU (siftgpu)](http://cs.unc.edu/~ccwu/siftgpu/) -<

    :   SiftGPU requires a decent GPU that has a large graphic memory and supports dynamic branching. GLSL is used by default, and CUDA is provided as an alternative for nVidia graphic cards.

-   [Google 的 SRE Book 现在可以免费在线阅读了 - V2EX](https://www.v2ex.com/t/337281) -<

    :   [Google - Site Reliability Engineering](https://landing.google.com/sre/book.html)

        只是这本书可以免费看了。

-   [Marker Detection for Augmented Reality Applications - reindernijhoff.net](http://reindernijhoff.net/2010/04/marker-detection-for-augmented-reality-applications/)

-   [reindernijhoff.net](http://reindernijhoff.net/page/2/)

-   [bash - How can I convert tabs to spaces in every file of a directory? - Stack Overflow](http://stackoverflow.com/questions/11094383/how-can-i-convert-tabs-to-spaces-in-every-file-of-a-directory) -<

    :   tab2spaces

        ```bash
        find . -name '*.java' ! -type d -exec bash -c 'expand -t 4 "$0" > /tmp/e && mv /tmp/e "$0"' {} \;
        ```

-   [Face Morph Using OpenCV — C++ / Python | Learn OpenCV](http://www.learnopencv.com/face-morph-using-opencv-cpp-python/)

-   [Lesson 0: Getting started with WebGL | Learning WebGL](http://learningwebgl.com/blog/?p=11)

-   [这个社会，对年轻人太好了吗？①_城市_好奇心日报](http://www.qdaily.com/articles/37071.html?share_from=app)

-   [Velodyne Plans a Lidar Megafactory - IEEE Spectrum](http://spectrum.ieee.org/cars-that-think/transportation/sensors/velodyne-to-build-lidar-megafactory) -<

    :   Velodyne’s expansion suggests not only that the company thinks it can
        outdo Google but also other startups that in recent years have started
        talking up plans for much less costly solid-state lidars that they
        claim would equal or even outperform the Velodyne design. Then, last
        month, Velodyne claimed a “breakthrough” in solid-state design that,
        with mass production, should drop the unit price below $50.

-   [客制化金属60% Infinity修改版 机械键盘外壳 极简主义 GH60独家-淘宝网](https://item.taobao.com/item.htm?spm=a230r.1.14.9.oxNoQC&id=521491575881&ns=1&abbucket=16#detail)

-   [Scientists must fight for the facts : Nature News & Comment](http://www.nature.com/news/scientists-must-fight-for-the-facts-1.21347) -<

    :   On 21 January, one day after the inauguration of Donald Trump as the
        45th president of the United States, millions of people took to the
        streets in protests across the country and around the world. The
        marches were spurred by Trump’s treatment of women, but the focus
        expanded to include issues ranging from apparent hostility towards
        environmental regulations to disregard for the truth. Many hoped that
        the sobering reality of entering the White House would transform
        Trump’s approach into something more conventionally presidential, but
        the early signs are not promising.

-   [Element](http://element.eleme.io/#/en-US) -<

    :   Element，一套为开发者、设计师和产品经理准备的基于 Vue 2.0 的组件库，提供了配套设计资源，帮助你的网站快速成型。

        饿了么前端

-   [Lessons learned from On Writing Well - RWieruch](https://www.robinwieruch.de/lessons-learned-on-writing-well/) :hearts: -<

    :   How to learn?

        :   Repetition is the key for learning. You have to repeat. It applies
            for every subject you want to learn. You have to repeat and do it
            over and over again. “You learn to write by writing” says William
            Zinsser.  When you produce a certain amount of words on a regular
            basis, you will improve eventually. But in order to learn writing
            well, you cannot solely use your first draft of writing. You have
            to refine your writing and rewrite it a dozen times. “The essence
            of writing is rewriting”.

-   [AI is nearly as good as humans at identifying skin cancer](https://www.engadget.com/2017/01/26/ai-rivals-humans-in-identifying-skin-cancer/)

-   [Freeciv-web online browser HTML5 WebGL version](https://play.freeciv.org/)

-   [Scientists are making genetically modified cyborg dragonflies](https://www.engadget.com/2017/01/26/genetically-modified-cyborg-dragonflies/)

-   [Researchers create first viable hybrid human-pig embryo](https://www.engadget.com/2017/01/26/hybrid-human-pig-embryo-chimera-stem-cells/) -<

    :   后来被叫停了。（当时看新闻的时候我特么就觉得这不可能没人禁止啊……）

-   [哪些行业的工作人员可能会被人工智能取代？](http://daily.zhihu.com/story/9136689) -<

    :   再补充一些事实。以美国为例，近年来受过高等教育劳动者比例持续上升，
        新职业类别快速产生，新职业从业者中接受过高等教育者比例较高。
        同时，有高等教育经历劳动者报酬上升，且相对于没有高等教育经历差距持续拉大。
        这与前面提到的“中间衰败，两头增加”吻合，说明技术进步偏向高等教育人群，
        提高了这部分个体竞争优势。人工智能这方面偏向可能更强，导致分化速度可能更快，
        幅度更大。尽管人工智能可能“解放”一部分中低收入人群，但他们可能失业，
        最早利用人工智能并获取利润的很可能仍是受过特定高等教育的人群。

-   [开始找工作，可工作都要求有经验，这死循环怎么解开？](http://daily.zhihu.com/story/9136005) -<

    :   若是没有「积极争取」这种信念，人生的发展轨道会非常狭窄。

        也不是，房子背后更深层次的诉求是「未来相对殷实的物质生活」，所以如果现在没有什么钱，但是展现出未来能赚很多钱的样子，也是有机会满足要求的。

-   [谷歌 Material Design 从这些方面打破了我的思维局限](http://daily.zhihu.com/story/9153511)

-   [为了研究种族歧视，经济学家到红灯区问了一圈儿价格](http://daily.zhihu.com/story/9156380)

    :   因为不喜欢，所以必须要更高价格才能交易，不然无法克服自己的厌恶。

-   [为什么有人说在银行工作越久，能力越差？](http://daily.zhihu.com/story/9166209) -<

    :   我的理解是，单个银行员工的个人能力对银行利润的贡献是非常小的。银行体系过于庞大，每个员工都是这个庞大系统中的一个小份子，而且具有很强的可替代性。

        当在一个体系中，专业性无法成为屏蔽竞争对手的重要手段时，大家就会逐渐放弃对专业的追求，或者说深度追求。

        而券商、基金、私募的人，个人的专业能力对公司的利润贡献显然就大得多了。比如，一个非常优秀的基金经理是有可能撑起公司
        10% 甚至更高利润贡献的；又如一个券商的宏观研究团队如果像任泽平、姜超一样出色，是能够给公司带来极大正面影响的，
        这些影响也都能够反映在公司的利润上。对这类公司的员工来说，你手中拿的是铁饭碗还是金饭碗，
        基本上取决于你的专业能力。但银行不同，你再优秀的员工也只能在自己的岗位上贡献一点小小的力量。

-   [2070 年穆斯林人口会占全球 1/3，现在就成了时尚业的新市场｜好奇心小数据_时尚_好奇心日报](http://www.qdaily.com/articles/37263.html)

-   [谈了很多理念，说说如何６步融入同事圈](http://daily.zhihu.com/story/9168375)

-   [女人三十四十如狼似虎，确有其事么? - 性生活 - 知乎](https://www.zhihu.com/question/25547543?rf=22184605)

-   [为什么是金融和 IT #F620](http://mp.weixin.qq.com/s?__biz=MzAxNTMxMTc0MA==&mid=2651014972&idx=1&sn=c36661d84ac0dada16673b794408e1e1&scene=21#wechat_redirect) -<

    :   我们可能都低估了“政治正确”对经济的伤害。

        什么叫“政治正确”。它包含一系列的含义；

        -   环境保护
        -   动物保护
        -   劳动法案
        -   少数族裔保护
        -   社会责任
        -   历史文化保护
        -   …………

-   [水库文章目录](https://mp.weixin.qq.com/s?__biz=MzAxNTMxMTc0MA==&mid=206663049&idx=1&sn=b811130f28a5a8fd49fbd8204b90eb72&chksm=12203b9a2557b28c53413e71624b1666e32079ff08f2329cb3eee6f870e519c7e4bc41c0a885&scene=18&key=564c3e9811aee0ab9321605a1aeecbff4fdbf5af068a1d54a5f403fbc06105db846d476f7db11de46bce97a345e2fe304eeb9093ed26813d47197423be6823f7ee88159dfbec951f89b2f49060dc2727&ascene=0&uin=MTIyMDU3MTc4MQ%3D%3D&version=12010110&nettype=WIFI&fontScale=100&pass_ticket=lHq3l3C%2FkzJF09vfN8Gu38UUN4mWhMd229lVR2Ql9BaDCJCJ%2F1CVGxq2ZqSUhCTg)

-   [Parerga und Paralipomena » Blog Archive » Using Mendeley and Dropbox to sync your pdf library across computers](http://www.michelepasin.org/blog/2012/08/07/using-mendeley-and-dropbox-to-sync-your-pdf-library-across-computers/)

-   [Shadertoy BETA](https://www.shadertoy.com/user/miloyip)

-   [Kristen Stewart co-wrote a paper on machine learning](https://www.engadget.com/2017/01/20/kristen-stewart-paper-style-transfers-come-swim/) -<

    :   Kristen Stewart, best known for her role as Bella in the Twilight saga,
        has co-authored a paper on machine learning. It details her use of a
        technique known as 'style transfers' for select scenes in Come Swim, a
        short film that will be shown at Sundance and marks her directorial
        debut.  The process has become popular with apps such as Prisma, which
        allow the user to apply filters in the style of famous paintings. At
        its core, the system relies on deep neural networks to identify the
        "content" of your photo and the "style" of another, blending them
        together into a completely new image.

-   [The Practice of Programming: 18 Years Later](http://kjamistan.com/the-practice-of-programming-18-years-later/) -<

    :   The book is 18 years old. It covers C programming. It handles issues
        like signed versus unsigned integers, piping data between mismatched
        byte systems and a few other topics that do not affect my programming,
        nor most of the folks I know. Why reread it?

-   [Don't Be A Free User (Pinboard Blog)](https://blog.pinboard.in/2011/12/don_t_be_a_free_user/) -<

    :   What if a little site you love doesn't have a business model? Yell at
        the developers! Explain that you are tired of good projects folding and
        are willing to pay cash American dollar to prevent that from happening.
        It doesn't take prohibitive per-user revenue to put a project in the
        black. It just requires a number greater than zero.

-   [Problem loading page](https://blog.cryptographyengineering.com/2012/01/02/very-casual-introduction-to-fully/)

-   [Security/Contextual Identity Project/Containers - MozillaWiki](https://wiki.mozilla.org/Security/Contextual_Identity_Project/Containers)

-   [bethrobson/Head-First-Java: Code for Head First Java](https://github.com/bethrobson/Head-First-Java)

-   [《STL 源碼剖析》](http://jjhou.boolan.com/jjwbooks-tass.htm)

-   [“知乎很早就有 ... - - 矩阵的广播 - 豆瓣](https://m.douban.com/people/bluegobin/status/1943749855) -<

    :   “知乎很早就有大 V 组成的联盟了，共享黑名单，划分粉丝群体，分配热点事件什么的，相互点赞，偶尔互怼。
        隔不了几天小号提个奇葩问题，然后各路大神轮番上阵搭起一场营销大戏，都是套路。”
        中国税负果然高，连智商税都是有组织地在收。#勃学导论 #

-   [SlamCN](http://slamcn.org/index.php/%E9%A6%96%E9%A1%B5)

-   [Physically Based Rendering: From Theory to Implementation](http://pbrt.org/) -<

    :   From movies to video games, computer-rendered images are pervasive
        today. Physically Based Rendering introduces the concepts and theory of
        photorealistic rendering hand in hand with the source code for a
        sophisticated renderer.

-   [The lost art of 3D rendering without shaders](http://machinethink.net/blog/3d-rendering-without-shaders/)

-   [The Vine Archive will keep the videos looping forever](https://www.engadget.com/2017/01/20/vine-archive/)

-   [矩阵求导术（上） - 长躯鬼侠的文章 - 知乎专栏](https://zhuanlan.zhihu.com/p/24709748)

-   [离职员工的控诉：为什么离开锤子科技_国内动态 - 07073产业频道](http://chanye.07073.com/guonei/1539479.html) -<

    :   当然在之后差不多两年的工作时间里，我慢慢对弹性工作制的认识从理想化的状态变成了公司不愿意给加班费，
        因为所谓的弹性工作制就是一种可以让你每天加班到 10 点但是不用付薪水的制度。

-   [这篇美国华裔二代的吐槽帖，火遍美国论坛](http://www.guancha.cn/america/2017_01_20_390356_s.shtml)

-   Linear Algebra Notes -<

    :   ## Linear Independence and Basis

        if none of the vectors can be expressed as a linear combination of the
        remaining vectors. Otherwise the set is called **linearly dependent**.

        ### Properties of a Basis

        Let B and B' be two bases of a linear space V.

        basis 可以表示所有的 vector，而且表示唯一；

            B   = (b1,  b2,     ..., bn )
            B'  = (b1', b2',    ..., bn')

        B = B'A，A 是基转化的矩阵，一定是可逆的，所以有 B' = BA^{-1}。

        这个其实很好理解：Bx 是一个向量，在 B 下的坐标为 x，在 B' 下的坐标为 Ax（B'Ax = Bx），
        所以 Bx = B'Ax -> B = B'A。

            bi' = Σ{aji * bj} for all j
            aji -> A,

            given B = (b1..bn), B' = (b1'..bn')
            B' = BA, A 的每一列形成一个新的 b。
            B = B'A^{-1}

        ## Inner Product

        也叫 dot product。

        -   线性：所以你可以把参数提取到外面
        -   对称：`<u,v> = <v,u>`
        -   positive definite（正定）：`<u,u> ≥ 0`

        **Norm**

        V -> R 引入了 norm, `norm(v) := sqrt(<v,v>)`

        **Metric** (distance between two vectors)

        V+V -> R 引入了 metric，定义为 `d(v,w) := norm(v-w)`

        Since the metric is induced by a scalar product V is called a Hilbert space.

        ### canonical inner product

        最常规的内积定义

        在 V 上，B 下，两个向量 x, y 的 canonical inner product 是：

            <x,y> = x^T × y = sum (xi × yi)

        I = B'A⁻¹

        如果 y 就是 x 的话，这就是 Euclidean 的 L2-norm（平面距离）。

        B 由基变化（basis transform）A 到 B'（B = B'A^{-1}）,

            BA = B'
            简单记忆：
                -   坐标变换左乘 x -> Ax
                -   　基变换右乘 B -> B' = BA
                          (b1, ..., bn) -> (Ab1, ..., Abn) 即 (b1, ..., bn)*A

        公式：（基变换影响内积）

            <x,y>   =   x^T * y
                    =   (Ax')^T * (Ay')
                    =   (x'^T * A^T) * A * y'
                    =   x'^T * y'
                    =   <x', y'> A^TA，注意这里的写法 <x', y'> A^TA 不是 <x', y'>*A^TA 的意思……
                        （这叫 induced inner product from the matrix A）

            话说上面的写法不符合我的习惯，我把
            <x, y> 看成原来的，
            <x', y'> 看成新的重写一遍

            <x',y'> =   x'^T * y'
                    =   (Ax)^T * (Ay)
                    =   (x^T * A^T) * A * y
                    =   <x, y> A^TA

            这一段其实是说内积可以用一个矩阵来表示：<x,y> = x^T * M * y
            内积完全由这个 M 确定。我们常用的 Eclidean 内积公式的 M 是一个 Identity。

        维基上看到：The general form of an inner product on C^n^ is known as
        the Hermitian form and is given by

            ⟨x, y⟩ := y† * M * x = \bar{ x† * M *y }

        向量的垂直：

            v ⟂ w
                iff <v,w> = 0

        ## Kronecker Product and Stack of a Matrix

        products of matrices

        A ∈  ℜ^{m×n}
        B ∈  ℜ^{k×l}

        Kronecker 积是

        A ⊗ B =

                a11*B   ...     a1n*B
                        ...                 ∈  ℜ^{mk×nl}
                am1*B   ...     amn*B

        Matlab: `C=kron(A,B)`

        Stack 则是把 mat A 的各个列竖着放：

            A^s = (     a1
                        a2
                         .
                         .
                         .
                        an
            ) ∈  ℜ^{mn}.

        我醉了……引入 kron 和 stack 后，原来的

        **u^T * A * v 可以写成 (v ⊗ u)^T * A^s**

        （上面的公式……成功的把想要的内积的向量 u,v 和决定内积的 A 分离了……）

        ## Linear Transformations and Matrices

        Linear algebra studies the properties of linear transformations
        between linear spaces. Since these can be represented by
        matrices, linear algebra studies the properties of matrices.

        A linear transformation **L** between two linear spaces
        V and W is a map L : V → W such that:

        -   L ( x + y) = L ( x) + L ( y), ∀ x,y ∈  V
        -   L(α x) = α L(x), ∀ x ∈  V, α ∈ R

        线性变换是两个线性空间之间的一个联系，
        这个变换也有线性性。

        因为线性空间里面的一些向量都可以用基地来表示，

        x --->L---> x' 表示为 L(x) = Ax，∀ x ∈ V.

        A 是 (L(e1, e2, ..., en))，是一个矩阵，∈  ℜ^{m × n}

        一点说明：

            线性空间里面的向量可以表达成：

                B1 * x1 = B2 * x2

            也就是说
            如果用 B1 作为基地，这个向量的坐标是 x1
            如果用 B2 作为基地，这个向量的坐标是 x2

            所以上面那个 L(x) = Ax，A = (L(e1), L(e2), ..., L(en)) 其实是说
            我们对原来的 e1, ..., en 这些基地向量进行了线性变换，
            形成了一个新的基地，在这个基地上原来的向量的坐标不变。
            （意思是我把整个坐标系都移动了）

            如果你把 A*x 看成 I*(Ax) 就是说，在原来的坐标下，
            这个线性变换后，你的坐标从 x 变到了 Ax。

        如果 m = n, 这个 L 则是一个环（意思是向量变换之后其实还在这个空间内）。

        M(m, n) ≡ M(n) 是一个环 if m==n

        V x V -> V

        ## The Linear Groups GL(n) and SL(n)

        GL 是 general linear group。

        SL 是 special linear group。

        linear group 是啥意思？

        就是一堆 L 的集合，满足：

        -   inverse：如果 g 在 G 里面，则有 g^{-1} 也在

            （就是说 G 里面有一个变换 L 对向量的操作，可以用 G 里面的另一个变换来复原）

        -   closed：g1*g2 = g'，就是说连续的变换其实可以看成一个变换

            （就是说可以一步一步来，也可以一步到位）

        -   assoc：变换的步骤是无关的，g1*(g2*g3) = (g1*g2)*g3

            （显然三维空间中刚体的旋转不是 assoc）

        -   neutral：就是说，不变也算一种变换

        injective trans（就是每个 input，必有 output）

        forall A in M(n), det(A) ≠ 0

        SL(n) 是不改变体积的线性变换的集合。
        det(A⁻¹) = det(A)⁻¹

        ## Matrix Representation of Groups

        cam

        G has a matrix representation, or can be realized as a matrix group:

            iif

                R: G → GL(n)

        R(e) = Inxm, R(g ◦ h) = R(g)R(h), ∀ g,h \in G

        such a map R is called a **group homomorphism**.

        ## The Affine Group A(n)

        L: R^n → R^n

        A in GL(n), vectar b in R^n

        L(x) = Ax + b

        introducing homogeneous coordinates to represent x ∈ R n by

        L: R^{n+1} → R^{n+1},

            x               A   b       x
                    →
            1               0   1       1

            A b     with A in GL(n) and b in R^n is called
            0 1     an affine matrix

                    is an element of GL(n+1).
                    the affine matrices form a subgroup of GL(n+1).

        ## The Orthogonal Group O(n)

        为了 <Ax, Ay> = <x,y>

            aka     <Rx, Ry> = x^T R^T R y = x^T y
            只要    R^T * R = R * R^T = I

        O(n) = {R ∈ GL(n) | R^T * R = I}

        det(R) = ±1，所以 ortho 其实是翻转。

        if det(R)=1，这叫 special orthogonal group SO(n)

        det -1 is not closed.

        SO(n) = O(n) \cap SL(n)

        SO(3) is the group of all 3-dim rotation matrices.

        ## The Euclidean Group E(n)


                    R       T       |
            E(n) =                  |   R in O(n), T in R^n
                    0       1       |

        if R in SO(n), ie det(R)=1, special euclidean group SE(n)

        SE(3) is the **rigid-body motions**.

        SO(n) in O(n) in GL(n)
        SE(n) in E(n) in A(n) in GL(n+1)

        ## Range, Span, Null Space and Kernel

        A in R^{m*n}

        -   range / span of A
        -   ker(A) ≡ null(A)
        -   rank,
            -   rank(A) = n - dim(null(A))
            -   0 ≤ rank(A) ≤ min{m,n}
            -   Sylvester’s inequality
                rank(A)+rank(B)-n ≤ rank(AB) ≤ min{rank(A), rank(B)}
            -   C, D not singular
                then rank(A) = rank(CAD)

        ## Eigenvalues and Eigenvectors

        C^n

        Av = λv

        -   λ: eigenvalue of A
        -   v lefteigenvector of A, if v^T * A = λ * V^T

        [V, D] = eig(A), evs → D, AV = VD

        All eigenvalues σ(A) are the roots of the characteristic
        polynomial det(λI − A) = 0. Therefore det(A) is equal to
        the product of all eigenvalues (some of which may appear
        multiple times).

        if B = PAP⁻¹, σ(B) = σ(A)

        try to understand.

        if λ is ev, then \hat{λ} also a ev.

        ### Symmetric Matrices

        S^T = S

        -   all evs are real
        -   vi perp vj if λi ≠ λj
        -   diagnalize: S = V /\ V^T
        -   S is positive (semi-)definite,
            if all eigenvalues are positive (nonnegative).
        -   Let S be positive semi-definite and
            λ1 ,λn the largest and smallest eigenvalue.
            Then
            -   λ1 = max_{|x|=1} <x,Sx> and
            -   λn = min_{|x|=1} <x,Sx>.

        ###  Norms of Matrices

        induced 2-norm of a matrix A

        ||A||₂ ≡ max...

        Frobenius norm of A

        ||A||_f ≡

            sqrt(
                trace(A^T * A)
            )

        A^T*A is symmetric and pos.semi-difnite

        A^T * A = V diag {σ^2...} V^T


        ||A||_2 = σ₁
        ||A||_f = sqrt((σ₁)^2..+(σn)^2)

        skew-symmetric

        A = V /\ V^T,

                        0       -u_3    u_2
        \hat{u} =       u_3     0       -u_1
                        -u_2    u_1     0

        \hat{u}*v = u \times v

-   录屏 sankore

-   读书笔记：《珞珈风云》，《武汉大学图史》 -<

    :   -   珞珈风云 -<

            :   -   骑驴疑云：李四光骑着毛驴给武大寻校址的故事不真实，有虚构的成分；其实是开着飞机……
                -   珞珈山校舍，开尔斯，Yale，不太知名；李四光找来此人
                -   王世杰：1891-1981，武汉大学首任校长

                    -   在武昌，适鄂督张之洞提倡新学，在武昌城内创办现代式高等小学五所，分东、南、西、北、中五路，招收民间十四岁左右的秀良子弟为生。
                    -   张之洞摸了摸王世杰的礼帽，问：“叫什么名字？住什么地方？”王世杰挺起胸膛：“本人王世杰，家住崇阳县白霓回头岭”。
                    -   在武昌南路小学，张之洞批准陪同王世杰念书的家人在校门口摆了个花生摊，以便照顾王世杰的起居。
                    -   在北洋大学求学不到一年，武昌起义爆发。王世杰立即投身革命，辍学南归，返回武昌参加起义。
                    -   **1929** 年 2 月，南京政府急需人才，决定在原武昌高等师范学校的基础上组建一所全国一流水平的综合性大学，
                        任命王为国立武大校长。现在武大的校址就是王世杰和李四光圈定的。
                    -   >   以后为我立碑时，去掉所有头衔，只须刻上‘前国立武汉大学校长王雪艇先生之墓’

                -   王星拱：1888-1949，1934 年 6 月到 1945 年 7 月，王星拱担任武大校长 11 年，时间之长，仅次于李达（14 年）
                -   迁坟：叶雅各直接带工人挖坟；土豪闹；政府出来：说教育第一，可以；结果：只能迁出，不许迁入
                -   沈祝三：做赔钱买卖支持校舍工程；工程有资金链问题导致的建筑问题，但总体言，瑕不掩瑜
                -   狮子山与珞珈山
                -   “文采飞扬”与“法理正直”，误读，其实南方建筑承包商失误，所以文学院修得檐角飞扬
                -   宋卿体育馆：黎元洪，字宋卿
                -   听松庐，半山庐（教授单身公寓）
                -   斯人已逝，黉（hong2）宫常在：邵逸夫人文科学馆，1988 投资，1990 竣工
                -   王星拱：一二 \cdot 九运动；
                -   樱花：通常二三十年，长不过 50 年；战争，1939 年 28 株，八九十年代死光（1997 最后一棵），和平；汤商皓，日语日本夫人，梅花 vs 樱花；

                    通过“母本”枝条嫁接延续；

        -   武汉大学图史 -<

            :   -   自强学堂 -> 方言学堂（1893-1911）
                -   国立武昌高等师范（1913-1923），校徽：熊、6 羽毛、黄牛革
                -   国立武昌师范大学 -> 国立武昌中山大学（1923-1927）
                -   国立武汉大学（1928-1949），1938 乐山
                -   武汉大学（1949-2000）
                -   四校合并：武汉大学，武汉测绘科技大学，武汉水力电力大学，湖北医科大学

-   [Euler angles - Wikipedia](https://en.wikipedia.org/wiki/Euler_angles) -<

    :   Euler angles are typically denoted as

        -   α, β, γ, or
        -   φ（phi/fai）, θ（theta/seita）, ψ（psi/sai）.

        [Aircraft principal axes - Wikipedia](https://en.wikipedia.org/wiki/Aircraft_principal_axes)

        :   ![](https://upload.wikimedia.org/wikipedia/commons/thumb/5/54/Flight_dynamics_with_text.png/300px-Flight_dynamics_with_text.png)

            ~~常见的 model space 坐标系（右：x，上：y，前：z，左手坐标系），三个轴分别对应 pitch，yaw，roll~~ 更常见的是右手坐标系。

            如果是右手坐标系，那就把 y 轴朝下。
            ![](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c1/Yaw_Axis_Corrected.svg/375px-Yaw_Axis_Corrected.svg.png)

            -   y: Vertical axis (yaw)

                pos yaw 右转。

            -   x: Lateral (横向的) axis (pitch)

                The pitch axis (also called lateral or transverse axis).

            -   z: Longitudinal (roll)

                The roll axis (or longitudinal axis).

                The angular displacement about this axis is called bank.

-   [Oscar Wilde Quotes](https://www.douban.com/note/337856067/) -<

    :   [Oscar Wilde - Wikipedia](https://en.wikipedia.org/wiki/Oscar_Wilde)

        Oscar Fingal O'Flahertie Wills Wilde (16 October 1854 – 30 November 1900)
        was an Irish playwright, novelist, essayist, and poet. After
        writing in different forms throughout the 1880s, he became one of
        London's most popular playwrights in the early 1890s. He is remembered
        for his epigrams, his novel The Picture of Dorian Gray, his plays, as
        well as the circumstances of his imprisonment and early death.

        -   “**Only dull people are brilliant at breakfast.**”
        -   “Be yourself; everyone else is already taken.”
        -   “To live is the rarest thing in the world. Most people exist, that is all.”
        -   “**We are all in the gutter, but some of us are looking at the stars.**”
        -   “The pure and simple truth is rarely pure and never simple.”
        -   “Most people are other people. Their thoughts are someone else's
            opinions, their lives a mimicry, their passions a quotation.”
        -   “Yes: I am a dreamer. For a dreamer is one who can only find his
            way by moonlight, and his punishment is that he sees the dawn
            before the rest of the world.”
        -   “I am not young enough to know everything.”
        -   “Every saint has a past, and every sinner has a future.”
        -   “I never travel without my diary. One should always have something
            sensational to read in the train.”
        -   “Everything in the world is about sex except sex. Sex is about power.”
        -   “I am so clever that sometimes I don't understand a single word of
            what I am saying.”
        -   “You don't love someone for their looks, or their clothes, or for
            their fancy car, but because they sing a song only you can hear.”
        -   “All women become like their mothers. That is their tragedy. No man
            does, and that is his.”
        -   “It is absurd to divide people into good and bad. People are either
            charming or tedious.”
        -   “To love oneself is the beginning of a lifelong romance.”

        [Arthur Rimbaud - Wikipedia](https://en.wikipedia.org/wiki/Arthur_Rimbaud)

        [阿蒂尔·兰波 - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E9%98%BF%E8%92%82%E5%B0%94%C2%B7%E5%85%B0%E6%B3%A2)

        额……记错了。我以为 Rimbaud 的男朋友是 Wilde。（Rimbaud 是攻 ==）

-   低俗小说里面一段有趣的话 -<

    :   （多亏万能的互联网，我不需要再看一遍去翻）

        Vincent: [about a foot massage]

        >   It's layin' your hands in a familiar way on Marsellus' new wife.
        >   I mean, is it as bad as eatin' her pussy out? No, but it's the same
        >   fuckin' ballpark. (棒球场；活动领域；可变通范围)

        Jules:

        >   Whoa, whoa, whoa. Stop right there. Eating a bitch out and giving a
        >   bitch a foot massage ain't even the same fucking thing.

        Vincent:

        >   It's not. It's the same ballpark.

        Jules:

        >   Ain't no fucking ballpark neither. Now, look, maybe your method of
        >   massage differs from mine, but, you know, touching his wife's feet
        >   and sticking your tongue in the holiest of holies ain't the same
        >   fucking ballpark. It ain't the same league. It ain't even the same
        >   fucking sport. Look, foot massages don't mean shit.

        ... （这部分太多，直接跳到 Vincent 最后一句）

        Vincent:

        >   I ain't saying it's right.
        >   But you're saying a foot massage don't mean nothing, and I'm saying it does.
        >   Now, look, I've given a million ladies a million foot massages, and they all meant something.
        >   **We act like they don't, but they do, and that's what's so fucking cool about them.
        >   There's a sensuous thing going on where you don't talk about it,
        >   but you know it, she knows it, fucking Marsellus knew it, and Antoine should have fucking better known better.**
        >   I mean, that's his fucking wife, man. He ain't gonna have no sense of humor about that shit.
        >   You know what I'm saying?

        ---

        Pulp Fiction is a 1994 neo-noir film about the lives of **two mob hit men**, a
        boxer, a gangster's wife, and a pair of diner bandits that intertwine in
        four tales of violence and redemption.

        ![The "famous dance scene": Vincent Vega (John Travolta) and
            Mia Wallace (Uma Thurman) do the twist at Jack Rabbit Slim's](http://5.darkroom.shortlist.com/750/98a12a47dacc9cdd4f82bd8df754312d:4869faa189e1c50378db4c3eee0d134a/33)

        [50 Things You (Probably) Didn't Know About Pulp Fiction | ShortList Magazine](http://www.shortlist.com/entertainment/films/50-things-you-%28probably%29-didnt-know-about-pulp-fiction#gallery-1) -<

        :   -   John Travolta spoke to a recovering heroin addict during his
                research for Vincent Vega. The addict, a friend of Quentin
                Tarantino, suggested Travolta get drunk on tequila and lie in a
                hot pool, as this would be the closest representation of
                heroin's effects without actually it. Travolta tried this
                method with his wife in their hotel hot tub, lining up tequila
                shots along the bath.

            -   The shot of Vincent plunging the syringe of adrenaline into
                Mia's chest was filmed by having John Travolta pull the needle
                out, then reversing the footage.

            -   A theme throughout the film is guns not being used as intended.
                A close-range gunshot miraculously misses Jules, Vincent
                accidentally shoots Marvin in the face, Butch shoots Vincent
                with a gun that was meant to kill him and, at the end of the
                film, it is Jules' gun that prevents violence in the coffee
                shop.

            -   Jules' famous and oft-quoted Bible passage was in fact made up
                by Quentin Tarantino and Samuel L. Jackson. Only the final two
                lines feature in Ezequiel 25:17.

            -   Pulp Fiction cost a relatively modest $8m to make, with over
                $5m going towards actor salaries. The film went on to make over
                $210m.

            -   Uma Thurman was originally against the the song played during
                the Jack Rabbit Slim's Twist Contest, and told Quentin
                Tarantino she thought it didn't sound right. Tarantino stood
                firm, telling Thurman, "Trust me, it's perfect."

            -   Marcellus Wallace being raped is ironic. He tells Butch, "In
                the fifth, your ass goes down." When interrogating Butch's
                trainer, he says to "Set the dogs on his ass", and when asked
                about Butch, he says "If he goes to Indo-China I want a nigger
                in a bowl of rice ready to pop a cap in his ass." Wallace's
                preoccupation with punishing his enemies in 'the ass' comes
                back to bite him in his own.

            -   The novel Vincent reads on the toilet, Modesty Blaise, is a
                1965 'pulp' novel, in keeping with the movie's title.

            -   The mystery of what's in Marcellus Wallace's briefcase has
                raged for years. Some argue it's Elvis' gold suit from True
                Romance, others the diamonds from Reservoir Dogs. The most
                popular theory is that it's Marcellus Wallace's soul, hence the
                case's glow, the plaster on the back of Wallace's head (this is
                where the soul is removed) and the combination - 666. In
                reality, the band aid on Wallace's head was used to cover a
                shaving scar suffered by actor Ving Rhames, and though Quentin
                Tarantino's original script had the briefcase containing
                diamonds, he quickly dismissed this as it was too similar to
                Reservoir Dogs. Instead, Tarantino thought it better to never
                reveal (or even decide) what was in the case, in the hope
                people would guess, speculate and create their own theories. It
                worked.

        refs and see also

        -   [Pulp Fiction - Wikiquote](https://en.wikiquote.org/wiki/Pulp_Fiction)
        -   [Pulp Fiction - Wikipedia](https://en.wikipedia.org/wiki/Pulp_Fiction#Plot)
