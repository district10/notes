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

ssh 服务器的安装、配置和使用^[不错呢]

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

-   [Ubuntu 14.04 远程登录服务器 - 博客频道 - CSDN.NET](http://blog.csdn.net/YhL_Leo/article/details/51285545)
-   [Remote Jupyter](http://tangzx.qiniudn.com/post-0109-remote-jupyter.html)
