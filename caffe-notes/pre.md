# Pre knowledge

## github howto?

see dvorak4tzx's blog post: <...>

## linux cmdline howto?

see dvorak4tzx's blog post: <...>

## ipython notebook howto?

ipython notebook 十分好用，这里的一些笔记直接写在了 notebook 里，存在 GitHub 上。
关于如何使用 notebook，可以参考我的博客：
[远程使用 Jupyter Notebook （iPython Notebook）](http://tangzx.qiniudn.com/post-0109-remote-jupyter.html).

```bash
# 在服务器上（当然你也可以 ssh 进入服务器运行 ipython notebook）
ipython notebook --no-browser --port=8889

# 沟通服务器和本机的两个 port
ssh -N -f -L localhost:8888:localhost:8889 tzx@192.168.1.106

# 最后用浏览器打开本地 localhost:8888 就可以看到服务器运行的 notebook 了
```
