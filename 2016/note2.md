---
title: Working Notes
...

-   **You should blog even if you have no readers.**

-   360 的自我保护模式，关闭，然后才能退出。

    真想不通图书馆那个重启后自动回复到原始状态的电脑上干嘛要装 360，你还得手工
    关闭着破玩意。

    还有那蛋疼的有道词典以及它蛋疼的弹窗。以及搜狗输入法。即使搜狗输入再好，我
    也不愿意用，因为它打扰我，妈的智障软件。

    还有蛋疼的 Adobe 阅读器，安装后没有打开过一次，害得所有人打开后看它长长的
    license，都要点“接受”。

    还有图书馆的【有道笔记本】，txt 居然默认用这货打开！这货修改后没保存居然没
    有提示。当然我说的不是退出的时候直接就退出了，我说的是他居然没有显示一个
    `*` 表示内容已经修改，这不是行业规范吗？！

-   `CMAKE_BUILD_TYPE=Release/Debug`{.cmake}

    :   A Release build is equivalent to use the
        `--enable-optimized` flag in the configure script, while a Debug build is
        equivalent to the `--disable-optimized` flag.

-   For Visual Studio 2013, use the generator for Visual Studio 12. The
    name of the generator uses the Visual Studio version instead of its
    commercial name.

-   The most noticeable design decision of LLVM is its segregation between backend
    and frontend as two separate projects, LLVM core and Clang. LLVM started as a set
    of tools orbiting around the LLVM intermediate representation (IR) and depended
    on a hacked GCC to translate high-level language programs to its particular IR,
    stored in bitcode files. Bitcode is a term coined as a parody of Java bytecode files. An
    important milestone of the LLVM project happened when Clang appeared as the first
    frontend specifically designed by the LLVM team, bringing with it the same level of
    quality, clear documentation, and library organization as the core LLVM. It is not
    only able to convert C and C++ programs into LLVM IR but also to supervise the
    entire compilation process as a flexible compiler driver that strives to stay compatible
    with GCC.

    +   clang check
    +   clang format
    +   C/C++ program ---clang--> LLVM IR

    clang:

    1.  c/c++ -> LLVM IR
    2.  dump the internal Clang Abstract Syntax Tree (AST) representation of any
        program

    Clang Modernizer
      ~ It is a code refactoring tool that scans C++ code and
        changes old-style constructs to conform with more modern styles proposed
        by newer standards, such as the C++-11 standard

    Clang Tidy
      ~ It is a linter tool that checks for common programming mistakes
        that violate either LLVM or Google coding standards

    Modularize
      ~ It helps you in identifying C++ header files that are suitable to
        compose a module, a new concept that is being currently discussed by C++
        standardization committees (for more information, please refer to Chapter 10,
        Clang Tools with LibTooling)

    PPTrace
      ~ It is a simple tool that tracks the activity of the Clang
        C++ preprocessor

    ```bash
    $ clang-modernize –version
    clang-modernizer version 3.4
    ```

    Understanding Compiler-RT

    :   The Compiler-RT (runtime) project provides target-specific support for low-level
        functionality that is not supported by the hardware. For example, 32-bit targets
        usually lack instructions to support 64-bit division. Compiler-RT solves this problem
        by providing a target-specific and optimized function that implements 64-bit division
        while using 32-bit instructions. It provides the same functionalities and thus is the
        LLVM equivalent of libgcc. Moreover, it has runtime support for the address and
        memory sanitizer tools. You can download Compiler-RT Version 3.4 at http://llvm.
        org/releases/3.4/compiler-rt-3.4.src.tar.gz or look for more versions at
        http://llvm.org/releases/download.html

    ```cpp
    #include <stdio.h>
    #include <stdint.h>
    #include <stdlib.h>
    int main() {
        uint64_t a = 0ULL, b = 0ULL;
        scanf ("%lld %lld", &a, &b);
        printf ("64-bit division is %lld\n", a / b);
        return EXIT_SUCCESS;
    }
    ```

    ```bash
    clang -S -m32 test.c -o test-32bit.S    # -m32  --> 32 bit x86 program
    clang -S test.c -o test-64bit.S         # .S    --> assembly lang
    ```

    Even with the rise of Clang, DragonEgg persists today because Clang only handles
    the C and C++ languages, while GCC is able to parse a wider variety of languages.

    refs and see also

    -   <http://blog.csdn.net/yeliping2011/article/details/7210700>

-   tasklist, taskkill

-   一个中科大 LUG 的 Qt 教程：<https://lug.ustc.edu.cn/sites/qtguide/>

-   ShareX, <-- .net 4.0

-   CSAPP: encoding

    ```cpp
    /* WARNING: This is buggy code */
    float sum_elements(float a[], unsigned length)
    {
        int i;
        float result = 0;

        for (i = 0; i <= length-1; i++)
            result += a[i];
        return result;
    }
    ```

    In the single-precision floating-point format (a float in C), fields s,
    exp, and frac are 1, k = 8, and n = 23 bits each, yielding a 32-bit
    representation. In the double-precision floating-point format (a double in C),
    fields s, exp, and frac are 1, k = 11, and n = 52 bits each, yielding a
    64-bit representation.

    ```
    exp  = e_{k-1}...e_0 -> E
    frac = f_{n-1}...f_0 -> M

    s           k (exp)                         n (frac~[0, 1))
    1    +       8 (0-- 255,  -128-- 127)   +   23=32
    1    +      11 (0--2047, -1024--1023)   +   52=64
    ```

    exp = 0 -> denormalized form.

    page 89

-   i3 快捷键

    +   Mod1 + 数字 切换到不同虚拟桌面 (container)
    +   Mod1 + enter 启动 terminal 终端
    +   Mod1 + v 启动 dmenu, 可以方便启动各个程序
    +   Mod1 + f 全屏当前程序
    +   Mod1 + 方向键 在一个虚拟桌面 container 里切换不同程序界面
    +   Mod1 + Shift + 数字键 将当前程序移动到指定虚拟桌面
    +   Mod1 + Shift + ; 改变窗口排列为纵向
    +   Mod1 + Shift + q 退出当前程序窗口
    +   Mod1 + Shift + r 重启 i3, 不会关闭当前程序窗口, 但是会失去窗口的布局
    +   Mod1 + Shift + e 注销退出 i3, 会关闭所有程序
    +   Alt-Shift-<方向键>
