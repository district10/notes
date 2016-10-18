---
title: Learning TypeScript
...

-   Starts and ends with JavaScript

    :   TypeScript starts from the same syntax and semantics that millions of
        JavaScript developers know today. Use existing JavaScript code, incorporate
        popular JavaScript libraries, and call TypeScript code from JavaScript.

        TypeScript compiles to clean, simple JavaScript code which runs on any browser,
        in Node.js, or in any JavaScript engine that supports ECMAScript 3 (or newer).

-   Strong tools for large apps

    :   Types enable JavaScript developers to use highly-productive development
        tools and practices like static checking and code refactoring when
        developing JavaScript applications.

        Types are optional, and type inference allows a few type annotations to
        make a big difference to the static verification of your code. Types
        let you define interfaces between software components and gain insights
        into the behavior of existing JavaScript libraries.

-   State of the art JavaScript

    :   TypeScript offers support for the latest and evolving JavaScript
        features, including those from ECMAScript 2015 and future proposals,
        like async functions and decorators, to help build robust components.

        These features are available at development time for high-confidence
        app development, but are compiled into simple JavaScript that targets
        ECMAScript 3 (or newer) environments.

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

```bash
tsc helloworld.ts
```

refs and see also

-   [TypeScript - JavaScript that scales.](http://www.typescriptlang.org/)

安装：`npm install -g typescript`{.bash}

Editor choice

-   [Visual Studio Code - Code Editing. Redefined](https://code.visualstudio.com/?utm_expid=101350005-28.R1T8FshdTBWEfZjY0s7XKQ.0&utm_referrer=http%3A%2F%2Fwww.typescriptlang.org%2F)
-   [ALM Tools for TypeScript](http://alm.tools/)

[Learn TypeScript | Xcat Liu's Blog](http://blog.xcatliu.com/2016/01/29/learn-typescript/)
[使用 ES6 进行开发的思考 | EFE Tech](http://efe.baidu.com/blog/es6-develop-overview/)

[瓜园耕读 - 打造TypeScript的Visual Studio Code开发环境](http://www.2gua.info/post/59?utm_source=tuicool&utm_medium=referral)

[AngularJS 教程 | 菜鸟教程](http://www.runoob.com/angularjs/angularjs-tutorial.html)
