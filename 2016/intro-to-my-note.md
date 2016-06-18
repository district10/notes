# 本笔记本简介

## Pandoc Markdown + GitHub Markdown CSS

[Geo Projections · mbostock/d3 Wiki](https://github.com/mbostock/d3/wiki/Geo-Projections)

> [Wiki](Home) ▸ [[API Reference]] ▸ [[Geo]] ▸ **Geo Projections**

<table class="highlight">
<tr height="146" valign="top">
<td>d3.geo.albersUsa<br><a href="http://bl.ocks.org/mbostock/4090848"><img src="http://bl.ocks.org/mbostock/raw/4090848/thumbnail.png" width="202"></a></td>
<td>d3.geo.azimuthalEqualArea<br><a href="http://bl.ocks.org/mbostock/3757101"><img src="http://bl.ocks.org/mbostock/raw/3757101/thumbnail.png" width="202"></a></td>
<td>d3.geo.azimuthalEquidistant<br><a href="http://bl.ocks.org/mbostock/3757110"><img src="http://bl.ocks.org/mbostock/raw/3757110/thumbnail.png" width="202"></a></td>
</tr>
<tr height="146" valign="top">
<td>d3.geo.conicEqualArea<br><a href="http://bl.ocks.org/mbostock/3734308"><img src="http://bl.ocks.org/mbostock/raw/3734308/thumbnail.png" width="202"></a></td>
<td>d3.geo.conicConformal<br><a href="http://bl.ocks.org/mbostock/3734321"><img src="http://bl.ocks.org/mbostock/raw/3734321/thumbnail.png" width="202"></a></td>
<td>d3.geo.conicEquidistant<br><a href="http://bl.ocks.org/mbostock/3734317"><img src="http://bl.ocks.org/mbostock/raw/3734317/thumbnail.png" width="202"></a></td>
</tr>
<tr height="146" valign="top">
<td>d3.geo.equirectangular<br><a href="http://bl.ocks.org/mbostock/3757119"><img src="http://bl.ocks.org/mbostock/raw/3757119/thumbnail.png" width="202"></a></td>
<td>d3.geo.gnomonic<br><a href="http://bl.ocks.org/mbostock/3757349"><img src="http://bl.ocks.org/mbostock/raw/3757349/thumbnail.png" width="202"></a></td>
<td>d3.geo.mercator<br><a href="http://bl.ocks.org/mbostock/3757132"><img src="http://bl.ocks.org/mbostock/raw/3757132/thumbnail.png" width="202"></a></td>
</tr>
<tr height="146" valign="top">
<td>d3.geo.orthographic<br><a href="http://bl.ocks.org/mbostock/3757125"><img src="http://bl.ocks.org/mbostock/raw/3757125/thumbnail.png" width="202"></a></td>
<td>d3.geo.stereographic<br><a href="http://bl.ocks.org/mbostock/3757137"><img src="http://bl.ocks.org/mbostock/raw/3757137/thumbnail.png" width="202"></a></td>
<td>d3.geo.transverseMercator<br><a href="http://bl.ocks.org/mbostock/5126418"><img src="http://bl.ocks.org/mbostock/raw/5126418/thumbnail.png" width="202"></a></td>
</tr>
</table>


<a name="projectionMutator" href="#projectionMutator">#</a> d3.geo.<b>projectionMutator</b>(<i>rawFactory</i>)

Using d3.geo.projectionMutator, you can implement a standard projection
that allows the parallels to be changed, reassigning the raw projection
used internally by d3.geo.projection:

![](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png){.w2 .r}

```javascript
function albers() {
  var φ0 = 29.5,
      φ1 = 45.5,
      mutate = d3.geo.projectionMutator(albersRaw),
      projection = mutate(φ0, φ1);

  projection.parallels = function(_) {
    if (!arguments.length) return [φ0, φ1];
    return mutate(φ0 = +_, φ1 = +_);
  };

  return projection;
}
```

![big fish](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png)

---

------
![img]
------

![](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png){.w2}
![](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png){.w2}

------ ------
![img] ![img]
------ ------

![with caption 1](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png){.w2}
![with caption 2](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png){.w2}

------ ------ ------
![img] ![img] ![img]
------ ------ ------

![](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png){.w3}
![](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png){.w3}
![](http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png){.w3}


------ ------ ------ ------ ------ ------
![img] ![img] ![img] ![img] ![img] ![img]
------ ------ ------ ------ ------ ------

[img]: http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png

## Format

### 一些好用的标记

-   值得仔细阅读的链接：`[title](url){.featured}`{.markdown}，如
    [Welcome to dvorak4tzx’s Blog.](http://tangzx.qiniudn.com){.featured}。
-   加 ♥ 的：`[title](url){.heart}` 和 `` `.heart`{.heart} `` 的都是特别赞的，如
    [Welcome to dvorak4tzx’s Blog.](http://tangzx.qiniudn.com){.heart} 和
    `.heart`{.heart}。
-   加 flag 的，表明很重要，不弄懂可能无法继续阅读：`[title](url){.flag}` 和 `` `.flag`{.flag} ``，如
    [Welcome to dvorak4tzx’s Blog.](http://tangzx.qiniudn.com){.flag} 和
    `.flag`{.flag}。
-   加 todo 的，还没弄懂：`[title](url){.todo}` 和 `` `.todo`{.todo} ``，如
    [Welcome to dvorak4tzx’s Blog.](http://tangzx.qiniudn.com){.todo} 以及
    `.todo`{.todo}。

### 折叠功能

如果一份笔记无法折叠，往往会让人陷入细节而不能看到 big picture。所以折叠是
一个好用的笔记必备的功能。

这是一个折叠了的列表。点击可以切换**（折叠/显示）**。`@`{.fold}

-   在一行文字后添加 `` `@`{.fold} ``，可以折叠它后面的列表；
-   `.fold` 会使得页面载入后初始为已经折叠状态，如果你希望折叠盒初始为展开，可以把
    `.fold` 换成 `.foldable`；
-   折叠的时候可以像这样：

    ```markdown
    下面的内容会折叠到本行下，隐藏起来 `@`{fold}

    -   one
    -   two
        +   two 1
        +   two 2
    -   three
    ```

    但不能像这样：

    ```markdown
    因为这一行特别长，我决定把它分成两行，
    但不幸的是 pandoc 不允许你这样。这是错误的！`@`{fold}

    -   one
    -   two
        +   two 1
        +   two 2
    -   three
    ```

-   折叠当然可以嵌套，比如我就是一个嵌套了的，而且默认展开的折叠盒~ `@`{.foldable}

    +   你看得到我
    +   我也看得到你
    +   点击我，可以把我收起来

当你把折叠盒收起来后，它会有一点视觉上的“动作”，这是为了让你理解自己“在哪儿”。
如果你觉得这很烦人，点击一下页面空白处（比如页面左侧）或者页面上的其他元素，就可以让它停下来。

除了把列表变成折叠盒，还可以把 `<dt>...</dt>`{.html} 和 `<dd>...</dd>`{.html}
折叠起来。语法一样，也是添加 `{.fold}` 或 `{.foldable}` 到行尾，如：

```markdown
定义 `@`{.foldable}

:   这个概念说的是……

    你可以……

    这就是这个概念的简要介绍，你可以……获取更多相关信息。
```

定义 `@`{.foldable}

:   这个概念说的是……

    你可以……

    这就是这个概念的简要介绍，你可以……获取更多相关信息。

下面是一个较为复杂的折叠盒。

如何配置服务器 SSH 登陆？ `@`{.foldable}

:   用户的添加和权限的配置 `@`{.foldable}

    :   ```bash
        sudo useradd -r -m -s /bin/bash yhlleo
        sudo vi /etc/sudoers
        # add this line: `yhlleo ALL=(ALL:ALL) ALL'
        ```

    ssh 服务器的安装、配置和使用 `@`{.fold}

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

    其他笔记 `@`{.fold}

    :   用 scp 传递（拷贝）文件 `@`{.foldable}

        :   ```bash
            scp /path/to/local/file tzx@192.168.1.108:~/Downloads/
            scp tzx@192.168.1.108:~/Downloads/file ./
            ```

        端口重映射 `@`{.fold}

        :   把远程服务器上只能本地打开的端口 8889 映射到本机端口 8888，
            这样就能通过 `localhost:8888` 访问服务器上的 8889 端口了。

            ```bash
            ssh -N -f -L localhost:8888:localhost:8889 tzx@192.168.1.108
            ```

最后，要打开所有的折叠盒，可以在页面上按下字母“e”，“x”，“p”，“a”，“n”，“d”这六个字母；
要折叠所有折叠盒，按下“f”，“o”，“l”，“d”即可。对于移动设备，因为字符输入较为麻烦，
可以相应使用方向键“右”，“右”，“下”和“右”，“右”，“上”。

最后的最后，回车键可以切换当前折叠盒（有红色折叠标记）。

## 图片

`.r`, `.l`,
`.w2`, `.w3`, `w4`

---

P.S. 如果你想看本文源码，请访问：
<https://raw.githubusercontent.com/district10/notes/master/2016/intro-to-my-note.md>。

## TODO

1.  两/三/四/五张图片横着。再多就用 table 吧。
2.  图片和说明并列。
3.  两张图片，有 caption，但是 pandoc 生成的没有 caption。如果加上 `.cap` 则添加 caption。
4.  jQuery 里可以从 p 找它的两/多个孩子。

    ```html
    <p>
    <img alt="with caption 1" src="http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png" class="w2">
    <img alt="with caption 2" src="http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png" class="w2">
    </p>
    ```

    ```html
    <div class="figure">
    <img src="http://gnat-tang-shared-image.qiniudn.com/big-fish/57.png" alt="big fish">
    <p class="caption">big fish</p>
    </div>
    ```
