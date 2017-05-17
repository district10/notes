---
title: Working Notes
---

[【Prev Note】](2016/note7.html){title="../2016/note7.md"}

-   [Vi(m) tip #2: Entering greek/math symbols using vim digraphs « Alec's Web Log](http://www.alecjacobson.com/weblog/?p=443)

    :   **丫的发现原来 vim 里面 C-c 可以当成 Esc 用，我以为只有 c-[ 呢。**

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
