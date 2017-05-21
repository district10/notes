---
title: Learning Makefile
---

# Managing Projects with GNU Make

[![](https://img1.doubanio.com/lpic/s11232437.jpg)](https://book.douban.com/subject/1850994/)

## Foreword & Preface

The `make` utility is an enticing servant.

```
enticing

    [ɪn'taɪsɪŋ]

    adj. 迷人的；引诱的
    v. 引诱；诱骗（entice的ing形式）
```

## Part I: Basic Concepts

### Chapter 1: How to Write a Simple Makefile

-   Moreover, as the program’s complexity grows these **mundane tasks** can
    become increasingly error-prone as different versions of the
    program are developed, perhaps for other platforms or other
    versions of support libraries, etc.

    ```
    mundane [mʌn'den]

        adj. 世俗的，平凡的；世界的，宇宙的
    ```

-   Targets and Prerequisites
-   Dependencing Checking
-   Minimizing Rebuilds
-   Invoking make

    makefile, Makefile, GNUMakefile

-   Basic Makefile Syntax

    |   target~1~ target~2~ target~3~ : Prerequisites~1~ Prerequisites~2~
    |       cammand~1~
    |       cammand~2~
    |       cammand~3~

    ```
    $ make
    Makefile:6: *** commands commmence before first target.  Stop.
    ```

    ```
    commence
    英 [kə'mens] 美 [kə'mɛns]

        v. 开始；着手；<英>获得学位
    ```

### Chapter 2: Rules

-   Rules

    -   Explicit rules

        -   `*.o` <- `*.c`
        -   Wildcards: `~` (tilde), `*`, `?`, `[...]`, `[^...]`, etc
        -   Phony Targets

            -   the standard phony target is "clean"
            -   make cannot distinguish between a file target and phony target
            -   a special target `.PHONY` to tell make that a target is not a real file
            -   phony targets are always out of date, so their **dependent** always get to be remade

        -   Empty Targets

            -   `make` defines a varible `$?` to be set of prerequisites that are newer than the target
            -   ```makefile
                print: *.[hc]
                    lpr $?
                    touch $@
                ```

        -   Variables

            -   Automatic Variables

                -   `$@`{.makefile}: target
                -   `$*`{.makefile}: stem of the target filename (no file extension suffix)
                -   `$<`{.makefile}: first prerequsite
                -   `$?`{.makefile}: all newer prerequisites than target
                -   `$^`{.makefile}: all prerequisites, **sepped by spaces**, no dups
                -   `$+`{.makefile}: all prerequisites, **sepped by spaces**, with dups

                variants

                -   `D`, get directory portion of variable, e.g. `@mkdir -p $(@D)`{.makefile}
                -   `F`, get file portion of variable

        -   Finding Files with VPATH and vpath

            ```makefile
            # globally set
            VPATH = src
            CPPFLAGS = -I include

            # precise way to set: `vpath pattern diroctory-list'
            vpath %.c src
            vpath %.h include
            ```

            -   the `VPATH` variable consists of a list of directories to search when `make` needs a file

                The list of directories can be separated by spaces or
                colons on Unix and separated by spaces or semicolons on
                Windows. I prefer to use spaces since that works on all
                systems and we can **avoid the whole colon/semicolon imbroglio**.
                Also, the directories are easier to read
                when separated by spaces.

                ```
                imbroglio

                    英 [ɪm'brəʊlɪəʊ] 美 [ɪm'brolɪo]

                    n. 纠葛；纷乱；纷扰
                ```

    -   Pattern rules

        -   Static Pattern Rules

            A static pattern rule is one that applies only to a specific list of targets.

            ```makefile
            $(OBJECTS): %.o: %.c
                $(CC) -c $(CFLAGS) $< -o $@
            ```

            all `%.o` in `$(OBJECTS)` that depends on `$c` can be made with this command.

        -   Suffix Rules

            -   `.c.o:` 等价于 `.o: .c` (mnemonic: c->o)
            -   `.p:` -> `%: %.p`
            -   `make --no-built-in-rules`, `make -r`

    -   Implicit rules

        -   The Implicit Rules Database

            -   `make --print-data-base` -<

                :   ```bash
                    $ make --print-data-base
                    ...省略一些...
                    # Not a target:
                    .info:
                    #  Builtin rule
                    #  Implicit rule search has not been done.
                    #  Modification time never checked.
                    #  File has not been updated.

                    # Not a target:
                    caffe-notes/misc.md:
                    #  Implicit rule search has been done.
                    #  Last modified 2017-02-28 19:17:38
                    #  File has been updated.
                    #  Successfully updated.

                    # Not a target:
                    2016/note7.md:
                    #  Implicit rule search has been done.
                    #  Last modified 2017-03-31 16:38:39
                    #  File has been updated.
                    #  Successfully updated.

                    publish/lang/typescript.html: lang/typescript.md
                    #  Implicit rule search has been done.
                    #  Implicit/static pattern stem: 'lang/typescript'
                    #  Last modified 2017-03-06 10:47:56
                    #  File has been updated.
                    #  Successfully updated.
                    #  recipe to execute (from 'Makefile', line 66):
                            @mkdir -p $(@D)
                            (perl meta/cat.pl $< | perl meta/drawer.pl || cat $<) | \
                            pandoc \
                                    -V rootdir=../ \
                                    -S -s --ascii --mathjax \
                                    -f $(FROM) \
                                    --template meta/note.template \
                                    -o $@

                    # files hash-table stats:
                    # Load=304/1024=30%, Rehash=0, Collisions=5881/18470=32%
                    # VPATH Search Paths

                    # No 'vpath' search paths.

                    # No general ('VPATH' variable) search path.

                    # strcache buffers: 48 (47) / strings = 15127 / storage = 386261 B / avg = 25 B
                    # current buf: size = 8162 B / used = 3362 B / count = 105 / avg = 32 B
                    # other used: total = 382899 B / count = 15022 / avg = 25 B
                    # other free: total = 715 B / max = 28 B / min = 1 B / avg = 15 B

                    # strcache performance: lookups = 21279 / hit rate = 28%
                    # hash-table stats:
                    # Load=15127/16384=92%, Rehash=1, Collisions=57821/28961=200%
                    # Finished Make data base on Sun May 21 17:31:34 2017
                    ```

            -   Working with Implicit Rules
            -   Rule Structure
            -   Implicit Rules for Source Control
            -   A Simple Help Command

                ```makefile
                MAKE := make
                AWK := awk
                SORT := sort
                PR := pr
                help:
                    $(MAKE) --print-data-base --question |                                          \
                    $(AWK) '/^[^.%][-A-Za-z0-9_]*:/ { print substr($$1, 1, length($$1)-1) }' |      \
                    $(SORT) | $(PR) --omit-pagination --width=80 --columns=4
                ```

                ```bash
                $ make help
                all             help            n               t
                c               include         note            w
                clean           j               serve           watch
                clone           m               sitemap         wiki
                gh              Makefile        sm
                ```

                Using the `--question` option prevents make from running any actual commands.

            -   Special Targets

                A special target is a built-in phony target usedd to change make's default behavior.

            -   Automatic Dependency Generation

                ```bash
                $ echo "#include <stdio.h>" > stdio.c
                $ gcc -M stdio.c
                stdio.o: stdio.c \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/stdio.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/crtdefs.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/_mingw.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/_mingw_mac.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/_mingw_secapi.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/vadefs.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/sdks/_mingw_directx.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/sdks/_mingw_ddk.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/_mingw_print_push.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/_mingw_off_t.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/swprintf.inl \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/sec_api/stdio_s.h \
                 C:/Program\ Files/Haskell\ Platform/7.10.3/mingw/x86_64-w64-mingw32/include/_mingw_print_pop.h
                ```

                ```bash
                make --just-print
                ```

            -   Managing Libraries

                -   Creating and Updating Libraries
                -   Using Libraries as Prerequisites

            -   Double-Colon Rules

                Double-colon rules are an obscure feature that allows
                the same target to be updated with different commands
                depending on which set of prerequisites are newer than
                the target.

                Realistic, useful examples of this feature are
                difficult to come by (which is why it is an obscure
                feature), but here is an artificial example:

                ```makefile
                file-list:: generate-list-script
                    chmod +x $<
                    generate-list-script $(files) > file-list
                file-list:: $(files)
                    generate-list-script $(files) > file-list
                ```

                We can regenerate the file-list target two ways. If the
                generating script has been updated, we make the script
                executable, then run it. If the source files have
                changed, we simply run the script. Although a bit
                far-fetched, this gives you a feel for how the feature
                might be used.

### Chapter 3: Variables and Macros

-   What Variables Are Used For
-   Variables Types

    -   simply expanded variables: `:=`
    -   recursively expanded variables: `=`

-   Other Types of Assgnment

    -   `?=`: conditional variable assignment operator, assign only when the variable doesn't have a value

-   Macros

    -   用了 define 的叫 macro，用的 assignment 的叫 variable。
    -   macro 和 variable 的 specify 是一样的都是 `$(macro)`, `$(variable)`
    -   ```makefile
        define create-jar
          @echo Creating $@...
          $(RM) $(TMP_JAR_DIR)
          $(MKDIR) $(TMP_JAR_DIR)
          $(CP) -r $^ $(TMP_JAR_DIR)
          cd $(TMP_JAR_DIR) && $(JAR) $(JARFLAGS) $@ .
          $(JAR) -ufm $@ $(MANIFEST)
          $(RM) $(TMP_JAR_DIR)
        endef
        ```

-   When Variables Are Expanded

    -   `=`, `?=`
    -   `:=`
    -   `+=`
    -   it's evaluation is deferred (延时)

-   Target- and Pattern-Specific Variables
-   Where Variables Come From
-   Conditional and include Processing

    ```makefile
    ifdef COMSPEC
        ...
    else
        ...
    endif
    ```

    `ifdef` 还可以是 `ifndef`, `ifeq`, `ifneq`

-   The include Directive

    ```makefile
    include definitions.mk
    ```

-   Standard make Variables

### Chapter 4: Functions

-   User-Defined Functions

    `$(call macro-name[, param1...])`{.makefile}:

    ```makefile
    define parent
        echo "parent has two parameters: $1, $2"
        $(call child, $1)
    endef

    ...

    target: deps
        $(call parent,one,two)
    ```

-   Built-in Functions

    `$(function-name arg1[, argn])`

    -   String Functions

        -   `$(filter pattern...,text)`{.makefile} 注意不要有空格

            满足 pattern 的

        -   `$(filter-out pattern...,text)`{.makefile} 不满足的

        -   `$(findstring string,text)`{.makefile}
        -   `$(subst search-string,replace-string,text)`{.makefile}

            ```makefile
            $(subst .c,.o,$(sources))
            ```

        -   `$(patsubst search-pattern,replace-pattern,text)`{.makefile}

            wildcard version of `subst`.

        -   `$(words text)`：就是 `#text`
        -   `$(word n,text)`：就是 `text[n]`，n 从 1 开始数
        -   `$(firstword text)`, word 1,text
        -   `$(wordlist start,end,text)`, `text[start:end]`，inclusive

    -   Important Miscellaneous Functions

        -   `$(sort list)`, remove dups
        -   `$(shell command)`

    -   Filename Functions

        -   wildcard pattern...

            ```makefile
            sources := $(wildcard *.c *.h)
            ```

        -   dir list...

            ```makefile
            source-dirs := $(sort \
                                $(dir \
                                    $(shell find . -name '*.c')))
            ```

        -   notdir name... filename portion of a file path
        -   suffix name...
        -   basename name...
        -   addsuffix suffix,name...

            ```makefile
            # $(call find-program, filter-pattern)
            find-program = $(filter $1, \
                $(wildcard \
                    $(addsuffix /*, \
                        $(sort \
                            $(subst :, , \
                                $(subst ::,:.:, \
                                    $(patsubst :%,.:%, \
                                        $(patsubst %:,%:.,$(PATH)))))))))
            find:
                @echo $(words $(call find-program, %))
            ```

            ```makefile
            # $(call find-program,wildcard-pattern)
            find-program = $(wildcard \
                $(addsuffix /$1, \
                    $(sort \
                        $(subst :, , \
                            $(subst ::,:.:, \
                                $(patsubst :%,.:%, \
                                    $(patsubst %:,%:.,$(PATH))))))))
            find:
            @echo $(words $(call find-program,*))
            ```

        -   addprefix suffix,name...
        -   join prefix-list,suffix-list

-   Flow Control
-   Less Important Miscellaneous Functions

    -   strip text
    -   origin variable
    -   warning msg

-   Advanced User-Defined Functions

    -   eval and value
    -   Hooking Functions
    -   Passing Parameters

### Chapter 5: Commands

-   Parsing Commands
-   Continuing Long Commands
-   Command Modifiers

    -   `@`, don't echo the command
    -   `-`, ignore errors
    -   `+`, run even with `--just-print`

-   Error and Interputs
-   Which Shell to Use
-   Empty Commands: `header.h: ;`

    这样不好

    ```
    header.h:
        这一行只有一个 tab，可能被 editor 处理掉……
    ```

    Empty command 主要是为了防止因为一种 pattern 的文件更新了而 execute 一些无必要的 commands。

-   Command Environtment
-   Evaluating Commands
-   Command-Line Limits

    因为 shell 指令长度有限

## Part II: Advanced and Specialized Topics

### Chapter 6: Managing Large Projects
### Chapter 7: Portable Makefiles
### Chapter 8: C and C++
### Chapter 9: Java
### Chapter 10: Improving the Performance of make
### Chapter 11: Example Makefiles
### Chapter 12: Debugging Makefiles

## Part III: Appendixes

### Appendix A: Running make
### Appendix B: The Outer Limits
### Appendix C: GNU Free Documentation LicenseGNU ProjectFree Software Foundation (FSF)

## Colophon
