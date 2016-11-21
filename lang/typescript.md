---
title: Learning TypeScript
...

# Learning TypeScript

本文主要参考了

-   官网：[TypeScript - JavaScript that scales.](http://www.typescriptlang.org/)
-   官方文档：[Quick start · TypeScript](https://www.typescriptlang.org/docs/tutorial.html)
-   一本开源书《Deep Dive》：[TypeScript Deep Dive · GitBook](https://www.gitbook.com/book/basarat/typescript/details)

TypeScript 是啥么？叼在哪儿？

-   Starts and ends with JavaScript -<

    :   TypeScript starts from the same syntax and semantics that millions of
        JavaScript developers know today. Use existing JavaScript code, incorporate
        popular JavaScript libraries, and call TypeScript code from JavaScript.

        TypeScript compiles to clean, simple JavaScript code which runs on any browser,
        in Node.js, or in any JavaScript engine that supports ECMAScript 3 (or newer).

-   Strong tools for large apps -<

    :   Types enable JavaScript developers to use highly-productive development
        tools and practices like static checking and code refactoring when
        developing JavaScript applications.

        Types are optional, and type inference allows a few type annotations to
        make a big difference to the static verification of your code. Types
        let you define interfaces between software components and gain insights
        into the behavior of existing JavaScript libraries.

-   State of the art JavaScript -<

    :   TypeScript offers support for the latest and evolving JavaScript
        features, including those from ECMAScript 2015 and future proposals,
        like async functions and decorators, to help build robust components.

        These features are available at development time for high-confidence
        app development, but are compiled into simple JavaScript that targets
        ECMAScript 3 (or newer) environments.

安装：`npm install -g typescript`。（Nodejs 到官方下载即可，嫌弃 npm 慢，可以用 cnpm。）

tsc 运行效果 -<

:   tsc：typescript compiler

    ```bash
    $ tsc
    Version 2.0.3
    Syntax:   tsc [options] [file ...]

    Examples: tsc hello.ts
              tsc --outFile file.js file.ts
              tsc @args.txt

    Options:
     --allowJs                           Allow javascript files to be compiled.
     --allowSyntheticDefaultImports      Allow default imports from modules with no
                                         default export. This does not affect code emit, just typechecking.
     --allowUnreachableCode              Do not report errors on unreachable code.
     --allowUnusedLabels                 Do not report errors on unused labels.
     --baseUrl                           Base directory to resolve non-absolute module names.
     -d, --declaration                   Generates corresponding '.d.ts' file.
     --experimentalDecorators            Enables experimental support for ES7 decorators.
     --forceConsistentCasingInFileNames  Disallow inconsistently-cased references to the same file.
     -h, --help                          Print this message.
     --init                              Initializes a TypeScript project and creates a tsconfig.json file.
     --jsx KIND                          Specify JSX code generation: 'preserve' or 'react'
     --lib                               Specify library files to be included in the compilation:
                                           'es5' 'es6' 'es2015' 'es7' 'es2016'
                                           'es2017' 'dom' 'webworker' 'scripthost'
                                           'es2015.core' 'es2015.collection'
                                           'es2015.generator' 'es2015.iterable'
                                           'es2015.promise' 'es2015.proxy'
                                           'es2015.reflect' 'es2015.symbol'
                                           'es2015.symbol.wellknown'
                                           'es2016.array.include' 'es2017.object'
                                           'es2017.sharedmemory'
     --mapRoot LOCATION                  Specify the location where debugger should
                                         locate map files instead of generated locations.
     --maxNodeModuleJsDepth              The maximum dependency depth to search
                                         under node_modules and load JavaScript files
     -m KIND, --module KIND              Specify module code generation: 'commonjs', 'amd', 'system', 'umd' or 'es2015'
     --moduleResolution                  Specify module resolution strategy: 'node' (Node.js) or 'classic' (TypeScript pre-1.6).
     --newLine NEWLINE                   Specify the end of line sequence to be used when emitting files: 'CRLF' (dos) or 'LF' (unix).
     --noEmit                            Do not emit outputs.
     --noEmitOnError                     Do not emit outputs if any errors were reported.
     --noFallthroughCasesInSwitch        Report errors for fallthrough cases in switch statement.
     --noImplicitAny                     Raise error on expressions and declarations with an implied 'any' type.
     --noImplicitReturns                 Report error when not all code paths in function return a value.
     --noImplicitThis                    Raise error on 'this' expressions with an implied 'any' type.
     --noImplicitUseStrict               Do not emit 'use strict' directives in module output.
     --noUnusedLocals                    Report errors on unused locals.
     --noUnusedParameters                Report errors on unused parameters.
     --outDir DIRECTORY                  Redirect output structure to the directory.
     --outFile FILE                      Concatenate and emit output to single file.
     --preserveConstEnums                Do not erase const enum declarations in generated code.
     --pretty                            Stylize errors and messages using color and context. (experimental)
     -p DIRECTORY, --project DIRECTORY   Compile the project in the given directory.
     --reactNamespace                    Specify the object invoked for createElement and __spread when targeting 'react' JSX emit
     --removeComments                    Do not emit comments to output.
     --rootDir LOCATION                  Specify the root directory of input files. Use to control the output directory structure with --outDir.
     --skipLibCheck                      Skip type checking of declaration files.
     --sourceMap                         Generates corresponding '.map' file.
     --sourceRoot LOCATION               Specify the location where debugger should locate TypeScript files instead of source locations.
     --strictNullChecks                  Enable strict null checks.
     --suppressImplicitAnyIndexErrors    Suppress noImplicitAny errors for indexing objects lacking index signatures.
     -t VERSION, --target VERSION        Specify ECMAScript target version: 'ES3' (default), 'ES5', or 'ES2015'
     --traceResolution                   Enable tracing of the name resolution process.
     --types                             Type declaration files to be included in compilation.
     -v, --version                       Print the compiler's version.
     -w, --watch                         Watch input files.
     @<file>                             Insert command line options and files from a file.
    ```

    使用方法：

    ```bash
    tsc helloworld.ts
    ```

    然后就生成了 helloworld.js 文件。

工欲善其事，必先利其器。编辑器的选择：

-   [Visual Studio Code - Code Editing. Redefined](https://code.visualstudio.com/?utm_expid=101350005-28.R1T8FshdTBWEfZjY0s7XKQ.0&utm_referrer=http%3A%2F%2Fwww.typescriptlang.org%2F)
-   [ALM Tools for TypeScript](http://alm.tools/)

在这个教程里，我用了 Visual Studio Code。

## 首先熟悉 Visual Studio Code

Visual Studio Code 是一个可以运行在 Mac OS X、Windows 和 Linux 之上的，针对于编
写现代 Web 和云应用的跨平台源代码编辑器。下文简称 VSC。

先说明一下本文对快捷键的表达（的 conventions）：

-   `C-X` 表示 Control+X
-   `S-X` 表示 Shift+X，其实就是大写字母“X”
-   `C-S-X` 表示 Control+Shift+X
-   `C-K X` 表示 Control+K 再 X
-   `C-Space` 表示 Control+Space

### 安装插件

点击【扩展】，或者 `C-S-X` 打开它。
我安装了 C++Intellisense，D3.js snippets，C/C++，
Vim 这几个扩展。

安装完毕后，需要重启 VSC。

### Tips

-   `html5:<TAB>` 自动填充 html5 模板

-   如果后面在 Visual Studio Code 中运行 typescript 的时候，
    说版本冲突，需要到“首选项--工作区”，用自己的设置覆盖原有的：

    ```json
    {
        // 指定包含要使用的 tsserver 和 lib*.d.ts 文件的文件夹路径。
        "typescript.tsdk": "node_modules/typescript/lib"
    }
    ```

    参考这篇文章：[vscode - Version mismatch between tsc compiler and VS Code's language service - Stack Overflow](http://stackoverflow.com/questions/39505048/version-mismatch-between-tsc-compiler-and-vs-codes-language-service)。

### Markdown 文件的编辑

用“文件 -- 打开文件夹”打开一个文件夹，
然后新建 `README.md`（光标移动到文件树上面，有“新建”按钮）。

在这里写 Markdown。用 `C-K V` 预览。
（我安装了 Vim 插件后，需要在 Insert-mode 才能使用这个快捷键。）

用 `C-S-V` 切换 HTML 和 Markdown 源码。

```javascript
// 试试代码高亮
let x;
```

我们还可以自己设定 CSS，还可以利用 task.json 自己指定 markdown 到 html 的转化，
参考文档是 [Markdown editing with Visual Studio Code](https://code.visualstudio.com/Docs/languages/markdown)。
不过我很少预览，就不在这里花时间了。

### 新建一个 tsconfig 文件

新建文件，文件名为 `tsconfig.json`，然后打开，
输入 `{}`，然后回车。
这是 ts 的配置文件，有代码补全，比如输入
“compiler”，就有代码提示，然后上下移动，选中 compilerOptions，
回车，补全了一个 `:{}`。还可以用 `C-Space` 代码补全。

```json
{
    "compilerOptions": {
        "target": "es5",
        "module": "amd",
        "sourceMap": true
    }
}
```

这个文件，主要还是要和 gulp 合作。（gulpfile.js 里的：`var tsProject = ts.createProject("tsconfig.json");`，下文有详细讲。）

### 新建一个 TypeScript 文件

同理新建文件，文件名为 "Hello.ts"

```javascript
let x = "Hello World";
let y = x.charAt("b")
```

发现提示代码错误。
这就是 TypeScript 这 Type 的意义。

`C-S-B` 然后【配置任务运行程序】，
点击那个新建 typescript 工程，于是生成了 `.vscode/tasks.json` 文件：

```json
{
    // See https://go.microsoft.com/fwlink/?LinkId=733558
    // for the documentation about the tasks.json format
    "version": "0.1.0",
    "command": "tsc",
    "isShellCommand": true,
    "args": ["-p", "."],
    "showOutput": "silent",
    "problemMatcher": "$tsc"
}
```

文档在这里：[Tasks in Visual Studio Code](http://code.visualstudio.com/docs/editor/tasks)。

把那个 args 的内容清空成 `args: []`，保存。
然后回到 HelloWorld.ts，`C-S-B`。

![](https://lh5.googleusercontent.com/LQfYjEPwUAFJZciR-NpauyxTF0w_62Kkv6Z8Dv25vSuTPR9ocIb0Dwbw6f4epiPp4PE-WcesIQuhI7oaVLt0Hqco0Y7G4_p9GYuVFhyF_5c6IcBiYRecjZiNcX-GvxVStrRgqOw)

发现生成了 HelloWorld.js 和 HelloWorld.js.map 文件。

（sourceMap 主要是用来 debug 已经 uglify 的 JS 代码：[Introduction to JavaScript Source Maps - HTML5 Rocks](https://www.html5rocks.com/en/tutorials/developertools/sourcemaps/)。）

`C-S-B` 是针对整个工程的，所以无所谓是在哪个文件里按下这个快捷键。
你可以把 B 理解为 Run Build Task。

看 [Quick start · TypeScript](https://www.typescriptlang.org/docs/tutorial.html) 来快速入门。
这篇文章介绍了 TypeScript 的 Hello World 程序的编写、运行，以及 Visual Studio Code 的使用。

点击点开这部分笔记 -<

:   ```javascript
    class Student {
        fullName: string;
        constructor(public firstName, public middleInitial, public lastName) {
            this.fullName = firstName + " " + middleInitial + " " + lastName;
        }
    }

    interface Person {
        firstName: string;
        lastName: string;
    }

    function greeter(person : Person) {
        return "Hello, " + person.firstName + " " + person.lastName;
    }

    var user = new Student("Jane", "M.", "User");

    document.body.innerHTML = greeter(user);
    ```

    用 tsc 编译生成 greeter.js，然后再页面中引入它：

    ```html
    <!DOCTYPE html>
    <html>
        <head><title>TypeScript Greeter</title></head>
        <body>
            <script src="greeter.js"></script>
        </body>
    </html>
    ```

### 常用快捷键

| 按键 | 作用 |
| :---: | :---: |
| F12 | 转到定义 |
| `C-S-P` | 打开 Command Palette |

### 命令行

这部分参考：[Integrated Terminal in Visual Studio Code](https://code.visualstudio.com/docs/editor/integrated-terminal)。

`` C-` `` 可以打开命令行。
如果快捷键冲突了，可以直接到【查看 -- 集成终端】打开。

The shell used defaults to `$SHELL` on Linux and OS X,
and `%COMSPEC%` on Windows. These can be overridden manually
by setting `terminal.integrated.shell.*` in settings.
Arguments can be passed to the terminal shell on Linux
and OS X using the `terminal.integrated.shellArgs.*` settings.

参考文献

-   [Using TypeScript in Visual Studio Code | TypeScript](https://blogs.msdn.microsoft.com/typescript/2015/04/30/using-typescript-in-visual-studio-code/)
-   [Quick start · TypeScript](https://www.typescriptlang.org/docs/tutorial.html)
-   [TypeScript/doc at master · Microsoft/TypeScript](https://github.com/Microsoft/TypeScript/tree/master/doc)

## TypeScript the Language

简要介绍了 TypeScript 和 VSC。下面介绍这个语言。

### 简介

TypeScript 的意义：

-   提供了一个 optional 的 type system（type 可以提高 agility `[ə'dʒɪlətɪ]`，也有助于生成文档）
-   提供了一个可用的 JavaScript 标准

而且，TypeScript 可以 implicit，也可以 explicit。
它的 Type 是 structural 的，类似于 duty typing（你表现得是个鸭子，那你就是一个鸭子）。
比如 `{name: string}` 一定是一个 `{name: string, id: number}`。

再，这种 type 的规范，只是一种建议，不管有多少 type 错误，javascript 依旧可以顺利生成。

Types can be ambient -<

:   这个我没有懂。（是说 TypeScript 提供的生态，允许从其他库导入？）

    ```javascript
    // 不行
    $('.awesome').show(); // Error: cannot find name `$`

    // 可以
    declare var $:any;
    $('.awesome').show(); // Okay!

    // 可以
    declare var $:{
        (selector:string)=>any;
    };
    $('.awesome').show(); // Okay!
    $(123).show(); // Error: selector needs to be a string
    ```

    We will discuss the details of creating TypeScript definitions for existing
    JavaScript in detail later once you know more about TypeScript (e.g. stuff
    like interface and the any).

还有，有了 TypeScript，你可以享受明天的标准。 -<

:   比如可以用 class 关键字，还可以用 fat arrow 定义函数：

    ```javascript
    // 类
    class Point {
        constructor(public x: number, public y: number) {
        }
        add(point: Point) {
            return new Point(this.x + point.x, this.y + point.y);
        }
    }

    var p1 = new Point(0, 10);
    var p2 = new Point(10, 20);
    var p3 = p1.add(p2); // {x:10,y:30}

    // fat arrow
    var inc = (x)=>x+1;
    ```

最后，TypeScript 是 JavaScript 的超集（甚至是它日后标准的超集）。
如果你要学好 TypeScript，你也得了解 JavaScript。The good parts and the pit falls。

### JS 和 TS，好与坏

几点内容：

-   `null` 和 `undefined`

-   `this` 的作用域 -<

    :   ```javascript
        function foo() {
          console.log(this);
        }

        foo(); // logs out the global e.g. `window` in browsers，这里的问题在于：没有函数级别的作用域
        let bar = {
          foo
        }
        bar.foo(); // Logs out `bar` as `foo` was called on `bar`，这里的问题在于：作用域太容易被入侵
        ```

-   closure 以及它的作用 -<

    :   ```javascript
        function createCounter() {
            let val = 0;
            return {
                increment() { val++ },
                    getVal() { return val }
            }
        }

        let counter = createCounter();
        counter.increment();
        console.log(counter.getVal()); // 1
        counter.increment();
        console.log(counter.getVal()); // 2
        ```

        其实是封装了一个状态。

### Gulp，Browserify 和 TypeScript :hearts:

这部分参考了 [Gulp · TypeScript](https://www.typescriptlang.org/docs/handbook/gulp.html)。

首先新建两个文件夹 `src` 和 `dist` 作为输入输出文件夹。

然后 `npm init` 新建一个 npm 工程，生成 package.json。 -<

:   ```bash
    $ npm init
    $ cat package.json
    {
      "name": "miniproj",
      "version": "1.0.0",
      "description": "A Minimal Project to Demonstrate How To Use Gulp with Visual Studio Code & TypeScript",
      "main": "dist/main.js",
      "scripts": {
        "test": "echo \"Error: no test specified\" && exit 1"
      },
      "author": "Tang zhixiong",
      "license": "ISC"
    }
    ```

然后安装一下依赖。 -<

:   ```bash
    $ npm install -g gulp-cli
    $ npm install --save-dev typescript gulp gulp-typescript
    ```

一个 TypeScript 文件：src/main.ts。 -<

:   ```javascript
    function hello(compiler: string) {
        console.log(`Hello from ${compiler}`);
    }
    hello("TypeScript");
    ```

    编写 gulpfile.js：

    ```javascript
    var gulp = require("gulp");
    var ts = require("gulp-typescript");
    var tsProject = ts.createProject("tsconfig.json");

    gulp.task("default", function () {
        return tsProject.src()
            .pipe(tsProject())
            .js.pipe(gulp.dest("dist"));
    });
    ```

    然后编译。

    ```bash
    $ gulp
    $ node dist/main.js
    Hello from TypeScript
    ```

模块化的思想，第二个 ts 文件：src/greet.ts。 -<

:   ```javascript
    export function sayHello(name: string) {
        return `Hello from ${name}, via module export. wathing... Really.`;
    }
    ```

    再安装一点工具：

    ```bash
    npm install --save-dev browserify tsify vinyl-source-stream
    npm install --save-dev watchify gulp-util
    npm install --save-dev gulp-uglify vinyl-buffer gulp-sourcemaps
    ```

最后，用 gulpfile.js 来配置 gulp 来做自动化的工作。 -<

:   ```javascript
    var gulp = require("gulp");
    var browserify = require("browserify");
    var source = require('vinyl-source-stream');
    var watchify = require("watchify");
    var tsify = require("tsify");
    var gutil = require("gulp-util");
    var watch = require("gulp-watch");
    var paths = {
        statics: ['src/*.html', 'src/statics/*.css', 'src/statics/*.js'],
        mdsrcs: ['src/*.md', 'README.txt']
    };
    var execSync = require('child_process').execSync;
    var run = require('gulp-run');
    var rename = require('gulp-rename');

    var watchedBrowserify = watchify(browserify({
        basedir: '.',
        debug: true,
        entries: ['src/main.ts'],
        cache: {},
        packageCache: {}
    }).plugin(tsify));

    // HTML 文件直接拷贝过去，可以在命令行直接运行 gulp copy-html
    // 来执行这个 task
    gulp.task("copy-statics", function () {
        return gulp.src(paths.statics)
            .pipe(gulp.dest("dist"));
    });
    gulp.task("md2html", function () {
        // return watch(paths.mdsrcs, { ignoreInitial: true })
        return gulp.src(paths.mdsrcs)
                .pipe(run("perl tools/drawer.pl"))
                .pipe(run("pandoc --ascii --template src/statics/html.template"))
                .pipe(rename(function (path) { path.extname = ".html" }))
                .pipe(gulp.dest("dist"));
    });
    gulp.task("doc", function () {
        return watch(paths.mdsrcs, { ignoreInitial: true })
                .pipe(run("perl tools/drawer.pl"))
                .pipe(run("pandoc --ascii --template src/statics/html.template"))
                .pipe(rename(function (path) { path.extname = ".html" }))
                .pipe(gulp.dest("dist"));
    });

    function bundle() {
        console.log("pwd: "+execSync('pwd').toString());
        return watchedBrowserify
            .bundle()
            .pipe(source('bundle.js'))
            .pipe(gulp.dest("dist"));
    }

    // 接口是：gulp.task(name [, deps] [, fn])
    //
    // 和 C++ 的默认参数不一样的是，fn 出现的时候，deps 不要求为空，也就是说
    // 这个接口包括 gulp.task( name, fn ) 的情况。
    //
    // default 是默认执行的 task
    //
    // gulp 的文档，在这里：
    //      https://github.com/gulpjs/gulp/blob/master/docs/API.md
    gulp.task("default", ["copy-statics", "md2html"], bundle);
    watchedBrowserify.on("update", bundle);
    watchedBrowserify.on("log", gutil.log);
    ```

gulp 周边有许多工具可以使用。 -<

:   -   [hparra/gulp-rename: Rename files easily](https://github.com/hparra/gulp-rename)

    -   [rvagg/through2: Tiny wrapper around Node streams2 Transform to avoid explicit subclassing noise](https://github.com/rvagg/through2) -<

        :   ```javascript
            fs.createReadStream('ex.txt')
              .pipe(through2(function (chunk, enc, callback) {
                for (var i = 0; i < chunk.length; i++)
                  if (chunk[i] == 97)
                    chunk[i] = 122 // swap 'a' for 'z'

                this.push(chunk)

                callback()
               }))
              .pipe(fs.createWriteStream('out.txt'))
            ```

    -   为了更好的配合 watch，加快工作流程，还以给浏览器装上
        [Auto Reload :: Add-ons for Firefox](https://addons.mozilla.org/en-US/firefox/addon/auto-reload/)
        插件。Chrome 上应该也有类似的工具。

### TypeScript 的概览特性

Classes -<

:   ```javascript
    class Point {
        x: number;
        y: number;
        constructor(x: number, y: number) {
            this.x = x;
            this.y = y;
        }
        add(point: Point) {
            return new Point(this.x + point.x, this.y + point.y);
        }
    }

    var p1 = new Point(0, 10);
    var p2 = new Point(10, 20);
    var p3 = p1.add(p2); // {x:10,y:30}
    ```

    继承（Inheritance）：`extends` -<

    :   ```javascript
        class Point3D extends Point {
            z: number;
            constructor(x: number, y: number, z: number) {
                super(x, y);
                this.z = z;
            }
            add(point: Point3D) {
                var point2D = super.add(point);
                return new Point3D(point2D.x, point2D.y, this.z + point.z);
            }
        }
        ```

    静态变量/函数：statics -<

    :   和 Java 一样，可以直接初始化。

        ```javascript
        class Something {
            static instances = 0;
            constructor() {
                Something.instances++;
            }
        }

        var s1 = new Something();
        var s2 = new Something();
        console.log(Something.instances); // 2
        ```

    访问控制：Access Modifiers -<

    :   |   accessible on   | public  | private | protected |
        | :---: | :---: | :---: | :---: |
        | class instances  | yes   |  no |  no |
        | class  | yes   |  yes   |  yes |
        | class children   | yes    | no |  yes |

        简单说，和 C++ 的 access modifiers 一样，public 是“向全世界”公开，
        protected 是“只向孩子”公开，private 是“不向任何人”公开。

        ```javascript
        class FooBase {
            public x: number;
            private y: number;
            protected z: number;
        }

        // EFFECT ON INSTANCES
        var foo = new FooBase();
        foo.x; // okay
        foo.y; // ERROR : private
        foo.z; // ERROR : protected

        // EFFECT ON CHILD CLASSES
        class FooChild extends FooBase {
            constructor() {
              super();
                this.x; // okay
                this.y; // ERROR: private
                this.z; // okay
            }
        }
        ```

    抽象类：Abstract -<

    :   就是有一些没有实现的函数。称之为接口。
        不可实例化。

    Constructor is optional -<

    :   和 C++ 一样，编译器提供默认的构造函数。

    Define using constructor -<

    :   一种语法糖把。好处是

        ```javascript
        class Foo {
            x: number;
            constructor(x:number) {
                this.x = x;
            }
        }
        ```

        也可以写成：

        ```javascript
        class Foo {
            constructor(public x:number) {
            }
        }
        ```

    Property initializer -<

    :   ```javascript
        class Foo {
            members = [];  // Initialize directly
            add(x) {
                this.members.push(x);
            }
        }
        ```

        比 C++ 方便太多（C++ 还需要在类的外面定义一遍。）。和 Java 类似。

Arrow Functions -<

:   也被称为（lovingly called）fat arrow（因为 `->` 是 thin arrow，所以 `=>` 是 fat arrow）。

    ```javascript
    var inc = (x)=>x+1;
    ```

    ```javascript
    class Person {
        constructor(public age:number) {}
        growOld = () => {
            this.age++;
        }
    }
    var person = new Person(1);
    setTimeout(person.growOld,1000);
    setTimeout(function() { console.log(person.age); },2000); // 2
    ```

    需要小心的是继承链条上的 b 和 d 公用一个 this，所以 d 和 b 的方法可能冲突：

    ```javascript
    class Adder {
    // This function is now safe to pass around
        add = (b: string): string => {
            return this.a + b;
        }
    }
    class ExtendedAdder extends Adder {
        // Create a copy of parent before creating our own
        private superAdd = this.add;
        // Now create our override
        add = (b: string): string => {
            return this.superAdd(b);
        }
    }
    ```

    上面冲突的方法是先把 super 的函数保存起来。也可以用不同的函数名。
    这样就不用担心无法从对象的 `_proto_` 找到合适的函数了。

Rest 参数：`...` -<

:   ```
    TODO
    ```

let：作用域 -<

:   ```
    TODO
    ```

const：不可修改的变量 -<

:   ```
    TODO
    ```

Destructuring -<

:   ```
    todo
    ```

    解耦。

Classes -<

:   ```javascript
    todo
    ```

for of，注意 JS 中的 for in 是 for 了下标（其实是 key） -<

:   ```javascript
    todo
    ```

Iterators -<

:   ```javascript
    todo
    ```

Template String `` `${1+1} is two.` ``{.javascript} -<

:   ```javascript
    todo
    ```

    一个特点是可以跨行，类似于 Python 的 `"""` 字符串。
    还可以 interpolate 变量：

    ```javascript
    var lyrics = 'Never gonna give you up';
    var html = `<div>${lyrics}</div>`;
    ```

    Tagged Templates

    You can place a function (called a tag) before the template string and it
    gets the opportunity to pre process the template string literals plus the
    values of all the placeholder expressions and return a result. A few notes:

    -   All the static literals are passed in as an array for the first
        argument.
    -   All the values of the placeholders expressions are passed in as the
        remaining arguments. Most commonly you would just use rest parameters
        to convert these into an array as well.

    Here is an example where we have a tag function (named htmlEscape) that escapes the html from all the placeholders:

    ```javascript
    var say = "a bird in hand > two in the bush";
    var html = htmlEscape `<div> I would just like to say : ${say}</div>`;

    // a sample tag function
    function htmlEscape(literals, ...placeholders) {
        let result = "";

        // interleave the literals with the placeholders
        for (let i = 0; i < placeholders.length; i++) {
            result += literals[i];
            result += placeholders[i]
                .replace(/&/g, '&amp;')
                .replace(/"/g, '&quot;')
                .replace(/'/g, '&#39;')
                .replace(/</g, '&lt;')
                .replace(/>/g, '&gt;');
        }

        // add the last literal
        result += literals[literals.length - 1];
        return result;
    }
    ```

spread -<

:   ```javascript
    todo
    ```

    可以用来替代 apply

    ```javascript
    // 这样的方法太丑
    function foo(x, y, z) { }
    var args = [0, 1, 2];
    foo.apply(null, args);

    // 这样好看
    function foo(x, y, z) { }
    var args = [0, 1, 2];
    foo(...args);
    ```

    其实就是 destructureing。

Enums -<

:   和 C++、Java 并没有什么不同。除了 Enum 的定义可以分散，之外。

Promise :hearts: -<

:   大大避免了 call-back hell，所以 TypeScript 社区用 4 个，而不是 2 个空格来缩进。

    ```javascript
    const promise = new Promise((resolve, reject) => {
        // the resolve / reject functions control the fate of the promise
    });
    ```

    一个 promise，要不被 fulfilled，要不被 rejected。

    Subscribing to the fate of the promise -<

    :   ```javascript
        // 因为 resolve 了，所以就 then 咯
        const promise = new Promise((resolve, reject) => {
            resolve(123);
        });
        promise.then((res) => {
            console.log('I get called:', res === 123); // I get called: true
        });
        promise.catch((err) => {
            // This is never called
        });

        // 因为 reject 了，所以不能 then，最后被 catch
        const promise = new Promise((resolve, reject) => {
            reject(new Error("Something awful happened"));
        });
        promise.then((res) => {
            // This is never called
        });
        promise.catch((err) => {
            console.log('I get called:', err.message); // I get called: 'Something awful happened'
        });
        ```

    Promise Shortcuts

    -   Quickly creating an already resolved promise : Promise.resolve(result)
    -   Quickly creating an already rejected promise : Promise.reject(error)

    Chain-ability of Promises -<

    :   The chain-ability of promises is the heart of the benefit that promises
        provide. Once you have a promise, from that point on, you use the then
        function to create a chain of promises.

        -   If you return a promise from any function in the chain, .then is only called once the value is resolved -<

            :   ```javascript
                Promise.resolve(123)
                    .then((res) => {
                        console.log(res); // 123
                        return 456;
                    })
                    .then((res) => {
                        console.log(res); // 456
                        return Promise.resolve(123);
                    })
                    .then((res) => {
                        console.log(res); // 123 : Notice that this `this` is called with the resolved value
                        return Promise.resolve(123);
                    })
                ```

        -   you can aggregate the error handling of any preceding portion of the chain with a single catch -<

            :   ```javascript
                Promise.reject(new Error('something bad happened'))
                    .then((res) => {
                        console.log(res); // not called
                        return 456;
                    })
                    .then((res) => {
                        console.log(res); // not called
                        return Promise.resolve(123);
                    })
                    .then((res) => {
                        console.log(res); // not called
                        return Promise.resolve(123);
                    })
                    .catch((err) => {
                        console.log(err.message); // something bad happened
                    });
                ```

        -   the catch actually returns a new promise (effectively creating a new promise chain): -<

            :   ```javascript
                ```

        -   Any synchronous errors thrown in a then (or catch) result in the returned promise to fail

    这部分太重要：

    [Promise · TypeScript Deep Dive](https://basarat.gitbooks.io/typescript/content/docs/promise.html)

Generators -<

:   ```javascript
    todo
    ```

Async await -<

:   ```javascript
    todo
    ```

Template String -<

:   ```javascript
    todo
    ```

### IIFE 的好处，Whats up with the IIFE

就是可以获得继承链条上面的 super。

对象的属性 `_proto_` 对应函数的 `prototype`。
对象调用方法的时候，从自己的属性找，找不到就从 `_proto_` 找，
`_proto_` 上面也没有，就从 `_proto_` 的 `_proto_` 找。直到 `_proto_` 为 undefined 为止。

### TypeScript 工程

Compilation Context -<

:   这里主要关于是 tsconfig.json 的编写。

    The compilation context is basically just a fancy term for
    **grouping of the files that TypeScript will parse and analyze** to determine what is valid and
    what isn't. Along with the information about which files, the compilation
    context contains information about which compiler options. A great way to
    define this logical grouping (we also like to use the term project) is
    using a tsconfig.json file.

    编译选项：

    ```json
    {
        "compilerOptions": {
            "target": "es5",
            "module": "commonjs",
            "declaration": false,
            "noImplicitAny": false,
            "removeComments": true,
            "noLib": false
        }
    }
    ```

    需要处理的文件，直接指明：

    ```json
    {
        "files":[
            "./some/file.ts"
        ]
    }
    ```

    需要处理的文件，或者 include/exclude 目录：

    ```json
    {
        "include":[
            "./folder/**/*"
        ],
        "exclude":[
            "./folder/**/*.spec.ts",
            "./folder/someSubFolder"
        ]
    }
    ```

Declaration Spaces -<

:   There are two declaration spaces in TypeScript: The variable declaration
    space and the type declaration space. These concepts are explored below.

    其实说的是 TS 的两个命名空间，需要记住的是变量和类型是分开的。

    ```javascript
    // 两者根本不会混淆
    class Foo { }
    var Bar = Foo;
    var bar: Bar; // ERROR: "cannot find name 'Bar'"
    ```

    鉴于这样的原因，可以用 namespace 和模块化的思想来定义类型。
    使用的时候，再 import：

    ```javascript
    namespace importing {
        export class Foo { }
    }

    import Bar = importing.Foo;
    var bar: Bar; // Okay
    ```

    类型可以推到（capturing）：

    ```javascript
    class Foo {
      foo: number; // some member whose type we want to capture
    }

    // Purely to capture type
    declare let _foo: Foo;

    // Same as before
    let bar: typeof _foo.foo;
    ```

    这种推导可以把 const 属性也拿到。

Modules -<

:   有两种 modules：

    1.  Global Modules

    2.  File Module，也叫 external modules

        如果在文件里 global module 的部分用了 import 和 export，这个文件的就被框到了 file module。

        ```javascript
        import {foo} from "./foo";
        var bar = foo; // allowed
        ```

    推荐使用 file modules，而避免污染全局变量 -<

    :   global modules 通常是很糟糕的，尤其在软件规模达到一定程度的时候。file modules 或者说 external modules 则
        是不错的隔离手段。下面从几方面看看 external modules。

        File lookup

        :   ```javascript
            import foo = require('foo');
            import foo = require('./foo');      // 相对路径
            ```

            Tells the TypeScript compiler to look for a TypeScript file at the relative
            location `./foo.ts` or `./foo.d.ts` with respect to the current file.

        Compiler Module Option -<

        :   `import foo = require('foo');` 会引入模块。
            但模块的引入有好几种：

            -   `--module commonjs` or
            -   `--module amd` or
            -   `--module umd` or
            -   `--module system`

            推荐 commonjs，因为和后端的 nodejs 和前端的 webpack 一样。

    globals.d.ts -<

    :   Nevertheless it is convenient to have some files just with type
        declarations (for smaller projects preferably one called globals.d.ts)
        in the global namespace to make it easy to have some types just
        magically available for consumption in all your TypeScript code. For
        any code that is going to generate JavaScript we still recommend using
        file modules.

        globals.d.ts is great for adding extensions to lib.d.ts

        这个东西，参考：[lib.d.ts · TypeScript Deep Dive](https://basarat.gitbooks.io/typescript/content/docs/types/lib.d.ts.html)。

    d.ts 类型定义文件，我感觉现在对我的用处就是编辑器的智能提示
    d.ts 是对现有的. js 的定义，例如什么函数传入什么类型的参数，返回什么类型的值，比如 jquery.d.ts

    所以引入 d.ts 的时候用的是 `/// <reference path='typings/tsd.d.ts' />`，还可以一层一层地引入 d.ts 文件。

    main.ts 中引入 ./typings/tsd.d.ts：

    ```javascript
    /// <reference path='typings/tsd.d.ts' />
    ```

    tsd.d.ts 引入 ./typings/jquery/jquery.d.ts 和 ./typings/three/three.d.ts。

    ```javascript
    /// <reference path="jquery/jquery.d.ts" />
    /// <reference path="threejs/three.d.ts" />
    ```

Namespaces -<

:   三句话概括：

    1.  声明的时候和 C++ 类似
    2.  里面的变量和函数都要 export
    3.  可以嵌套（nested）

    ```javascript
    namespace Utility {
        export function log(msg) {
            console.log(msg);
        }
        export function error(msg) {
            console.error(msg);
        }
    }

    // usage
    Utility.log('Call me');
    Utility.error('maybe!');
    ```

### NodeJS 速成

TypeScript has had first class support for NodeJS since inception（起初；获得学位，《盗梦空间》）.
Here's how to get setup with a NodeJS project in TypeScript:

-   Add node.d.ts (`npm install @types/node --save-dev`{.bash}) to your compilation context.
-   Compile with `--module` set to "commonjs".
-   Add node to the global resolution by simply adding it to types in your tsconfig.

So your tsconfig will look like:

```json
{
    "compilerOptions": {
        "module": "commonjs",
        "types": [
            "node"
        ]
    }
}
```

这样你就可以使用 nodejs 的一些东西了，比如要使用 `fs` 模块：`import fs = require('fs'))`{.javascript}

加上 browserify，你也可以开发网页前端了。


### 浏览器速成

这部分用的 webpack。
我准备用 browserify。所以略过。

## TypeScript 的 Type System

-   JS Migration Guide -<

    :   先从新建 tsconfig.json 开始，然后不断去掉 any 标签。

        主要是 [Best practices | DefinitelyTyped](http://definitelytyped.org/guides/best-practices.html)，
        这个网站提供了很多 `*.d.ts` 文件，比如 jquery.d.ts。

-   @types
-   Ambient Declarations
    -   Declaration Files
    -   Variables
-   Interfaces
-   lib.d.ts
-   Functions
-   Type Assertion
-   Freshness
-   Type Guard
-   String Literal Type
-   Readonly
-   Type Inference
-   Type Compatibility
-   Never Type
-   Discriminated Unions

---

## TODO

-   找一个 d3.js 的 ts 工程：[4ker/three.ts at gh-pages](https://github.com/4ker/three.ts)
-   找一个 angular 的 ts 工程：[4ker/Angular2-JumpStart: Angular 2 and TypeScript JumpStart example](https://github.com/4ker/Angular2-JumpStart)
-   试一下 Ajax 和 jQuery 的网络通信
-   material design.

[district10/TryTypeScript: Try Some TypeScript.](https://github.com/district10/TryTypeScript)

[typings/typings: The TypeScript Definition Manager](https://github.com/typings/typings)

---

refs and see also

-   [瓜园耕读 - 打造TypeScript的Visual Studio Code开发环境](http://www.2gua.info/post/59?utm_source=tuicool&utm_medium=referral)
-   [AngularJS 教程 | 菜鸟教程](http://www.runoob.com/angularjs/angularjs-tutorial.html)
