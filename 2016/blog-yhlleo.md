# 博客摘记之 yhlleo

博客地址

-   [文章列表 - yhl_leo - 博客频道 - CSDN.NET](http://blog.csdn.net/yhl_leo)
-   [yhl's blog – Better and better.](http://115.159.156.28/)

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
        scp /path/to/local/file yhlleo@192.168.1.108:~/Downloads/
        scp yhlleo@192.168.1.108:~/Downloads/file ./
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
