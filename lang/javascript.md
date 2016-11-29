---
title: Learning JavaScript
date: 2016-04-08
keywords:
tags:
  - javascript
  - es6
---

Learning JavaScript
===================

[ECMAScript 6入门](http://es6.ruanyifeng.com/#undefined)

《ECMAScript 6入门》是一本开源的JavaScript语言教程，全面介绍ECMAScript 6新引入的语法特性。

## ECMAScript 6简介

### ECMAScript和JavaScript的关系
### ECMAScript的历史
### 部署进度

nvm -> node -> cnpm

```bash
$ node --v8-options | grep harmony

  --harmony_typeof
  --harmony_scoping
  --harmony_modules
  --harmony_symbols
  --harmony_proxies
  --harmony_collections
  --harmony_observation
  --harmony_generators
  --harmony_iteration
  --harmony_numeric_literals
  --harmony_strings
  --harmony_arrays
  --harmony_maths
  --harmony
```

### Babel转码器

Babel是一个广泛使用的ES6转码器，可以将ES6代码转为ES5代码，从而在现有环境执行。
这意味着，你可以用ES6的方式编写程序，又不用担心现有环境是否支持。下面是一个例子。

```javascript
// 转码前
input.map(item => item + 1);

// 转码后
input.map(function (item) {
  return item + 1;
});
```

`.babelrc`

preset, 预调装置

```bash
# ES2015转码规则
$ npm install --save-dev babel-preset-es2015

# react转码规则
$ npm install --save-dev babel-preset-react

# ES7不同阶段语法提案的转码规则（共有4个阶段），选装一个
$ npm install --save-dev babel-preset-stage-0
$ npm install --save-dev babel-preset-stage-1
$ npm install --save-dev babel-preset-stage-2
$ npm install --save-dev babel-preset-stage-3
```

presets字段设定转码规则，官方提供以下的规则集，你可以根据需要安装。

```json
{
    "presets": [
        "es2015",
        "react",
        "stage-2"
    ],
    "plugins": []
}
```

Babel提供babel-cli工具，用于命令行转码。

babel-cli工具自带一个babel-node命令，提供一个支持ES6的REPL环境。它支持Node的REPL环境的所有功能，而且可以直接运行ES6代码。

它不用单独安装，而是随babel-cli一起安装。然后，执行babel-node就进入REPL环境。

babel-register模块改写require命令，为它加上一个钩子。此后，每当使用require加载.js、.jsx、.es和.es6后缀名的文件，就会先用Babel进行转码。

Babel也可以用于浏览器环境。但是，从Babel 6.0开始，不再直接提供浏览器版本，而是要用构建工具构建出来。如果你没有或不想使用构建工具，可以通过安装5.x版本的babel-core模块获取。

[Babel · The compiler for writing next generation JavaScript](https://babeljs.io/repl/)

### Traceur转码器
### ECMAScript 7

## let和const命令

### let命令

作用域， block level

```javascript
var a = [];
for (let i = 0; i < 10; i++) {
  a[i] = function () {
    console.log(i);
  };
}
a[6](); // 6
// var 的话可是 9！
```

let不像var那样会发生“变量提升”现象。所以，变量一定要在声明后使用，否则报错。

```javascript
console.log(foo); // 输出undefined
console.log(bar); // 报错ReferenceError

var foo = 2;
let bar = 2;
```

上面代码中，变量foo用var命令声明，会发生变量提升，即脚本开始运行时，变量foo
已经存在了，但是没有值，所以会输出undefined。变量bar用let命令声明，不会发生
变量提升。这表示在声明它之前，变量bar是不存在的，这时如果用到它，就会抛出一
个错误。

ES6明确规定，如果区块中存在let和const命令，这个区块对这些命令声明的变量，从一开始就形成了封闭作用域。凡是在声明之前就使用这些变量，就会报错。

“暂时性死区”（temporal dead zone，简称TDZ）。

总之，暂时性死区的本质就是，只要一进入当前作用域，所要使用的变量就已经存在了，但是不可获取，只有等到声明变量的那一行代码出现，才可以获取和使用该变量。

不允许重复声明

### 块级作用域

为什么需要块级作用域？

  - 第一种场景，内层变量可能会覆盖外层变量。
  - 第二种场景，用来计数的循环变量泄露为全局变量。（for var i）

块级作用域的出现，实际上使得获得广泛应用的立即执行匿名函数（IIFE）不再必要了。

```javascript
// IIFE写法
(function () {
  var tmp = ...;
  ...
}());

// 块级作用域写法
{
  let tmp = ...;
  ...
}
```

```javascript
function f() { console.log('I am outside!'); }
(function () {
  if(false) {
    // 重复声明一次函数f
    function f() { console.log('I am inside!'); }
  }

  f();
}());
```

### const命令

```javascript
'use strict';

const PI = 3.1415;
```

const的作用域与let命令相同：只在声明所在的块级作用域内有效。

```javascript
const foo = {};
foo.prop = 123;

foo.prop
// 123

foo = {} // TypeError: "foo" is read-only

const a = [];
a.push("Hello"); // 可执行
a.length = 0;    // 可执行
a = ["Dave"];    // 报错
```

如果真的想将对象冻结，应该使用Object.freeze方法。

```javascript
const foo = Object.freeze({});

// 常规模式时，下面一行不起作用；
// 严格模式时，该行会报错
foo.prop = 123;
```

除了将对象本身冻结，对象的属性也应该冻结。下面是一个将对象彻底冻结的函数。

```javascript
var constantize = (obj) => {
  Object.freeze(obj);
  Object.keys(obj).forEach( (key, value) => {
    if ( typeof obj[key] === 'object' ) {
      constantize( obj[key] );
    }
  });
};
```

### 跨模块常量

上面说过，const声明的常量只在当前代码块有效。如果想设置跨模块的常量，可以采用下面的写法。

```javascript
// constants.js 模块
export const A = 1;
export const B = 3;
export const C = 4;

// test1.js 模块
import * as constants from './constants';
console.log(constants.A); // 1
console.log(constants.B); // 3

// test2.js 模块
import {A, B} from './constants';
console.log(A); // 1
console.log(B); // 3
```

### 全局对象的属性

全局对象是最顶层的对象，在浏览器环境指的是window对象，在Node.js指的是global对象。ES5之中，全局对象的属性与全局变量是等价的。

```javascript
window.a = 1;
a // 1

a = 2;
window.a // 2
```

一方面规定，var命令和function命令声明的全局变量，依旧是全局对象的属性；另一方面规定，let命令、const命令、class命令声明的全局变量，不属于全局对象的属性。

```javascript
var a = 1;
// 如果在Node的REPL环境，可以写成global.a
// 或者采用通用方法，写成this.a
window.a // 1

let b = 1;
window.b // undefined
```

## 变量的解构赋值

### 数组的解构赋值

```javascript
var [a, b, c] = [1, 2, 3];
let [foo, [[bar], baz]] = [1, [[2], 3]];
let [foo, [[bar], baz]] = [1, [[2], 3]];
foo // 1
bar // 2
baz // 3

let [ , , third] = ["foo", "bar", "baz"];
third // "baz"

let [x, , y] = [1, 2, 3];
x // 1
y // 3

let [head, ...tail] = [1, 2, 3, 4];
head // 1
tail // [2, 3, 4]

let [x, y, ...z] = ['a'];
x // "a"
y // undefined
z // []

// 报错
let [foo] = 1;
let [foo] = false;
let [foo] = NaN;
let [foo] = undefined;
let [foo] = null;
let [foo] = {};
```

解构赋值不仅适用于var命令，也适用于let和const命令。

```javascript
let [x, y, z] = new Set(["a", "b", "c"])
```

事实上，只要某种数据结构具有Iterator接口，都可以采用数组形式的解构赋值。

```javascript
function* fibs() {
  var a = 0;
  var b = 1;
  while (true) {
    yield a;
    [a, b] = [b, a + b];
  }
}

var [first, second, third, fourth, fifth, sixth] = fibs();
sixth // 5
```

上面代码中，fibs是一个Generator函数，原生具有Iterator接口。解构赋值会依次从这个接口获取值。

```javascript
[x, y = 'b'] = ['a'] // x='a', y='b'
[x, y = 'b'] = ['a', undefined] // x='a', y='b'

let [x = 1, y = x] = [];     // x=1; y=1
let [x = 1, y = x] = [2];    // x=2; y=2
let [x = 1, y = x] = [1, 2]; // x=1; y=2
let [x = y, y = 1] = [];     // ReferenceError
```

### 对象的解构赋值

```javascript
var { foo, bar } = { foo: "aaa", bar: "bbb" };
foo // "aaa"
bar // "bbb"

var { baz } = { foo: "aaa", bar: "bbb" };
baz // undefined

let obj = { first: 'hello', last: 'world' };
let { first: f, last: l } = obj;
f // 'hello'
l // 'world'

let foo;
let {foo} = {foo: 1}; // SyntaxError: Duplicate declaration "foo"

let baz;
let {bar: baz} = {bar: 1}; // SyntaxError: Duplicate declaration "baz"
({foo} = {foo: 1}); // 成功

var obj = {
  p: [
    "Hello",
    { y: "World" }
  ]
};

var { p: [x, { y }] } = obj;
x // "Hello"
y // "World"


let obj = {};
let arr = [];

({ foo: obj.prop, bar: arr[0] } = { foo: 123, bar: true });

obj // {prop:123}
arr // [true]

let { log, sin, cos } = Math;
```

### 字符串的解构赋值

```javascript
const [a, b, c, d, e] = 'hello';
let {length : len} = 'hello';
```

### 数值和布尔值的解构赋值

```javascript
let {toString: s} = 123;
s === Number.prototype.toString // true

let {toString: s} = true;
s === Boolean.prototype.toString // true
```javascript

### 函数参数的解构赋值

```javascript
function add([x, y]){
  return x + y;
}

add([1, 2]) // 3

[[1, 2], [3, 4]].map(([a, b]) => a + b)
// [ 3, 7 ]

function move({x = 0, y = 0} = {}) {
  return [x, y];
}

move({x: 3, y: 8}); // [3, 8]
move({x: 3}); // [3, 0]
move({}); // [0, 0]
move(); // [0, 0]
```

### 圆括号问题

解构赋值虽然很方便，但是解析起来并不容易。对于编译器来说，一个式子到底是模式，还是表达式，没有办法从一开始就知道，必须解析到（或解析不到）等号才能知道。

由此带来的问题是，如果模式中出现圆括号怎么处理。ES6的规则是，只要有可能导致解构的歧义，就不得使用圆括号。

但是，这条规则实际上不那么容易辨别，处理起来相当麻烦。因此，建议只要有可能，就不要在模式中放置圆括号。

可以使用圆括号的情况只有一种：赋值语句的非模式部分，可以使用圆括号。

```javascript
[(b)] = [3]; // 正确
({ p: (d) } = {}); // 正确
[(parseInt.prop)] = [3]; // 正确
```

### 用途

```javascript
[x, y] = [y, x];

var jsonData = {
  id: 42,
  status: "OK",
  data: [867, 5309]
}

let { id, status, data: number } = jsonData;
// let { id, status, data } = jsonData;

console.log(id, status, number)
// console.log(id, status, data)
// 42, "OK", [867, 5309]
```

```javascript
// 函数参数的默认值
jQuery.ajax = function (url, {
  async = true,
  beforeSend = function () {},
  cache = true,
  complete = function () {},
  crossDomain = false,
  global = true,
  // ... more config
}) {
  // ... do stuff
};
```

```javascript
var map = new Map();
map.set('first', 'hello');
map.set('second', 'world');

for (let [key, value] of map) {
  console.log(key + " is " + value);
}
// first is hello
// second is world

// 获取键名
for (let [key] of map) {
  // ...
}

// 获取键值
for (let [,value] of map) {
  // ...
}
```

```javascript
// 输入模块的指定方法
const { SourceMapConsumer, SourceNode } = require("source-map");
```

## 字符串的扩展

ES6加强了对Unicode的支持，并且扩展了字符串对象。

### 字符的Unicode表示法

```javascript
"\u0061" // \uxxxx
// "a"
"\uD842\uDFB7"
// "𠮷"

"\u{20BB7}"
// "𠮷"

"\u{41}\u{42}\u{43}"
// "ABC"

"\u{20BB7}"
// "𠮷"

"\u{41}\u{42}\u{43}"
// "ABC"

let hello = 123;
hell\u{6F} // 123

'\u{1F680}' === '\uD83D\uDE80'
// true
```

上面代码中，最后一个例子表明，大括号表示法与四字节的UTF-16编码是等价的。

```javascript
'\z' === 'z'  // true
'\172' === 'z' // true
'\x7A' === 'z' // true
'\u007A' === 'z' // true
'\u{7A}' === 'z' // true
```

### `codePointAt()`

JavaScript内部，字符以UTF-16的格式储存，每个字符固定为2个字节。对于那些需要4个字节储存的字符（Unicode码点大于0xFFFF的字符），JavaScript会认为它们是两个字符。

```javascript
String.fromCodePoint()

String.fromCodePoint(0x20BB7)
// "𠮷"
String.fromCodePoint(0x78, 0x1f680, 0x79) === 'x\uD83D\uDE80y'
// true
```

### 字符串的遍历器接口

```javascript
for (let i of text) {
  console.log(i);
}
// "𠮷"

// charAt()  -> at()
'abc'.at(0) // "a"
'𠮷'.at(0) // "𠮷"
```

### `normalize()`

ES6提供字符串实例的normalize()方法，用来将字符的不同表示方法统一为同样的形式，这称为Unicode正规化。

normalize方法可以接受四个参数。

  - NFC，默认参数，表示“标准等价合成”（Normalization Form Canonical Composition），返回多个简单字符的合成字符。所谓“标准等价”指的是视觉和语义上的等价。
  - NFD，表示“标准等价分解”（Normalization Form Canonical Decomposition），即在标准等价的前提下，返回合成字符分解的多个简单字符。
  - NFKC，表示“兼容等价合成”（Normalization Form Compatibility Composition），返回合成字符。所谓“兼容等价”指的是语义上存在等价，但视觉上不等价，比如“囍”和“喜喜”。（这只是用来举例，normalize方法不能识别中文。）
  - NFKD，表示“兼容等价分解”（Normalization Form Compatibility Decomposition），即在兼容等价的前提下，返回合成字符分解的多个简单字符。

### `includes()`, `startsWith()`, `endsWith()`

  - includes()：返回布尔值，表示是否找到了参数字符串。
  - startsWith()：返回布尔值，表示参数字符串是否在源字符串的头部。
  - endsWith()：返回布尔值，表示参数字符串是否在源字符串的尾部。

这三个方法都支持第二个参数，表示开始搜索的位置。

### `repeat()`

```javascript
'x'.repeat(3) // "xxx"
'hello'.repeat(2) // "hellohello"
'na'.repeat(0) // ""
```

参数如果是小数，会被取整。

```javascript
'na'.repeat(2.9) // "nana"
'na'.repeat(NaN) // ""
'na'.repeat('na') // ""
'na'.repeat('3') // "nanana"
```

### `padStart()`，`padEnd()`

```javascript
'x'.padStart(5, 'ab') // 'ababx'
'x'.padStart(4, 'ab') // 'abax'

'x'.padEnd(5, 'ab') // 'xabab'
'x'.padEnd(4, 'ab') // 'xaba'
```

### 模板字符串

```javascript
$("#result").append(
  "There are <b>" + basket.count + "</b> " +
  "items in your basket, " +
  "<em>" + basket.onSale +
  "</em> are on sale!"
);

$("#result").append(`
  There are <b>${basket.count}</b> items
   in your basket, <em>${basket.onSale}</em>
  are on sale!
`);
```

实例：模板编译

```javascript
var x = 1;
var y = 2;

`${x} + ${y} = ${x + y}`
// "1 + 2 = 3"

`${x} + ${y * 2} = ${x + y * 2}`
// "1 + 4 = 5"

var obj = {x: 1, y: 2};
`${obj.x + obj.y}`
// 3

function fn() {
  return "Hello World";
}

`foo ${fn()} bar`
// foo Hello World bar
```

标签模板

`String.raw()`

## 正则的扩展

### RegExp构造函数

```
var regex = new RegExp('xyz', 'i');
var regex = new RegExp(/xyz/i);
// 等价于
var regex = /xyz/i;

new RegExp(/abc/ig, 'i').flags
// "i"
```

### 字符串的正则方法
### u修饰符
### y修饰符
### sticky属性
### flags属性
### RegExp.escape()
### 后行断言

## 数值的扩展

### 二进制和八进制表示法
### Number.isFinite(), Number.isNaN()
### Number.parseInt(), Number.parseFloat()
### Number.isInteger()
### Number.EPSILON
### 安全整数和Number.isSafeInteger()
### Math对象的扩展
### 指数运算符

## 数组的扩展

### Array.from()
### Array.of()
### 数组实例的copyWithin()
### 数组实例的find()和findIndex()
### 数组实例的fill()
### 数组实例的entries()，keys()和values()
### 数组实例的includes()
### 数组的空位
### 数组推导

## 函数的扩展

### 函数参数的默认值
### rest参数
### 扩展运算符
### name属性
### 箭头函数
### 函数绑定
### 尾调用优化
### 函数参数的尾逗号

## 对象的扩展

### 属性的简洁表示法
### 属性名表达式
### 方法的name属性
### Object.is()
### Object.assign()
### 属性的可枚举性
### 属性的遍历
### __proto__属性，Object.setPrototypeOf()，Object.getPrototypeOf()
    Object.values()，Object.entries()
    对象的扩展运算符
    Object.getOwnPropertyDescriptors()

## Symbol

### 概述
### 作为属性名的Symbol
### 实例：消除魔术字符串
### 属性名的遍历
### Symbol.for()，Symbol.keyFor()
### 内置的Symbol值

## Proxy和Reflect

### Proxy概述
### Proxy实例的方法
### Proxy.revocable()
### Reflect概述
### Reflect对象的方法

## 二进制数组

### ArrayBuffer对象
### TypedArray视图
### 复合视图
### DataView视图
### 二进制数组的应用

## Set和Map数据结构

### Set
### WeakSet
### Map
### WeakMap

## Iterator和for...of循环

### Iterator（遍历器）的概念
### 数据结构的默认Iterator接口
### 调用Iterator接口的场合
### 字符串的Iterator接口
### Iterator接口与Generator函数
### 遍历器对象的return()，throw()
### for...of循环

## Generator 函数

### 简介
### next方法的参数
### for...of循环
### Generator.prototype.throw()
### Generator.prototype.return()
### yield*语句
### 作为对象属性的Generator函数
### Generator函数的this
### Generator函数推导
### 含义
### 应用

## Promise对象

### Promise的含义
### 基本用法
### Promise.prototype.then()
### Promise.prototype.catch()
### Promise.all()
### Promise.race()
### Promise.resolve()
### Promise.reject()
### 两个有用的附加方法
### 应用
### async函数

## 异步操作和Async函数

### 基本概念
### Generator函数
### Thunk函数
### co模块
### async函数

### Class

### Class基本语法
### Class的继承
### 原生构造函数的继承
### Class的取值函数（getter）和存值函数（setter）
### Class的Generator方法
### Class的静态方法
### Class的静态属性和实例属性
### new.target属性
### Mixin模式的实现

## 修饰器

### 类的修饰
### 方法的修饰
### 为什么修饰器不能用于函数？
### core-decorators.js
### 使用修饰器实现自动发布事件
### Mixin
### Trait
### Babel转码器的支持

## Module

### 严格模式
### export命令
### import命令
### 模块的整体加载
### export default命令
### 模块的继承
### ES6模块加载的实质
### 循环加载
### ES6模块的转码

## 编程风格

### 块级作用域
### 字符串
### 解构赋值
### 对象
### 数组
### 函数
### Map结构
### Class
### 模块
### ESLint的使用

## 读懂 ECMAScript 规格

### 概述
### 相等运算符
### 数组的空位
### 数组的map方法

## 参考链接

### 官方文件
### 综合介绍
### let和const
### 解构赋值
### 字符串
### 正则
### 数值
### 数组
### 函数
### 对象
### Proxy和Reflect
### Symbol
### 二进制数组
### Set和Map
### Iterator
### Generator
### Promise对象
### 异步操作和Async函数
### Class
### Decorator
### Module
### 工具

---

---
title: Trevor Burnham's Book
date: 2016-04-02
keywords:
tags:
- hacker
- reading
- javascript
- functional programming
...

Trevor burnham 的书
===================

## Eloquent JavaScript

it's open source and can be read online, see

- [marijnh/Eloquent-JavaScript: The second edition of Eloquent JavaScript](https://github.com/marijnh/Eloquent-JavaScript)
- [Eloquent JavaScript](http://eloquentjavascript.net/)
- [Eloquent JavaScript :: Code Sandbox](http://eloquentjavascript.net/code/)

Eloquent JavaScript
A Modern Introduction to Programming

### Introduction

[Introduction :: Eloquent JavaScript](http://eloquentjavascript.net/00_intro.html)

I do not enlighten those who are not eager to learn, nor arouse those who are not anxious to give an explanation themselves. If I have presented one corner of the square and they cannot come back to me with the other three, I should not go over the points again.

-- Confucius

Overview of this book

### Part 1: Language

#### Values, Types, and Operators

[Values, Types, and Operators :: Eloquent JavaScript](http://eloquentjavascript.net/01_values.html)

Undefined values

:   There are two special values, written null and undefined, that are used to denote the absence of a meaningful value. They are themselves values, but they carry no information.

Many operations in the language that don’t produce a meaningful value (you’ll see some later) yield undefined simply because they have to yield some value.

The difference in meaning between undefined and null is an accident of JavaScript’s design, and it doesn’t matter most of the time. In the cases where you actually have to concern yourself with these values, I recommend treating them as interchangeable (more on that in a moment).

Automatic type conversion

    ```javascript
console.log(8 * null)
    // → 0
    console.log("5" - 1)
    // → 4
    console.log("5" + 1)
    // → 51
    console.log("five" * 2)
    // → NaN
console.log(false == 0)
    // → true

    console.log(null == undefined);
    // → true
    console.log(null == 0);
    // → false
    ```

    Because of this, expressions like 0 == false and "" == false are also true. For cases like this, where you do not want any automatic type conversions to happen, there are two extra operators: === and !==. The first tests whether a value is precisely equal to the other, and the second tests whether it is not precisely equal. So "" === false is false as expected.

    I recommend using the three-character comparison operators defensively to prevent unexpected type conversions from tripping you up. But when you’re certain the types on both sides will be the same, there is no problem with using the shorter operators.

    Short-circuiting of logical operators

#### Program Structure

    [Program Structure :: Eloquent JavaScript](http://eloquentjavascript.net/02_program_structure.html)

    ```javascript
    confirm("Shall we, then?");
    prompt("Tell me everything you know.", "...");

    var theNumber = Number(prompt("Pick a number", ""));
    alert("Your number is the square root of " +
            theNumber * theNumber);
    ```

    ```javascript
    for (var number = 0; number <= 12; number = number + 2) {
        if (...) { break; }
        console.log(number);
    }
// → 0
// → 2
//   … etcetera
```

```javascript
// C 语言里是不能这么用的。
switch (prompt("What is the weather like?")) {
    case "rainy":
        console.log("Remember to bring an umbrella.");
        break;
    case "sunny":
        console.log("Dress lightly.");
    case "cloudy":
        console.log("Go outside.");
        break;
    default:
        console.log("Unknown weather type!");
        break;
}
```

```
var str = '';
for (var i = 0; i < 8; i++) {
    for (var j = 0; j < 8; j++) {
        if ((i+j)%2!=0) { str += '#'; }
        else { str += ' '; }
        if ( j == 7 ) { str += '\n'; }
    }
}
console.log(str);
```

#### Functions

People think that computer science is the art of geniuses but the actual reality is the opposite, just many people doing things that build on each other, like a wall of mini stones.

-- Donald Knuth

```
var landscape = function() {
    var result = "";
    var flat = function(size) {
        for (var count = 0; count < size; count++)
            result += "_";
    };
    var mountain = function(size) {
        result += "/";
        for (var count = 0; count < size; count++)
            result += "'";
        result += "\\";
    };

    flat(3);
    mountain(4);
    flat(6);
    mountain(1);
    flat(1);
    return result;
};

console.log(landscape());
// → ___/''''\______/'\_
```

closure

```
function wrapValue(n) {
    var localVariable = n;
    return function() { return localVariable; };
}

var wrap1 = wrapValue(1);
var wrap2 = wrapValue(2);
console.log(wrap1());
// → 1
console.log(wrap2());
// → 2
```

    ```
function isEven(num)
{
    if ( num < 0 ) { return isEven(1-num); }
    if ( num === 0 ) { return true; }
    if ( num === 1 ) { return false; }
    return isEven( num - 2 );
}

console.log(isEven(50));
// → true
console.log(isEven(75));
// → false
console.log(isEven(-1));
```

    ```
function countChar(s, c)
{
    var hits = 0;
    for ( var i = 0; i < s.length; ++i ) {
        if ( s.charAt(i) === c ) {
            ++hits;
        }
    }
    return hits;
}

function countBs(s) {
    return countChar(s, 'B');
}

console.log(countBs("BBC"));
// → 2
console.log(countChar("kakkerlak", "k"));
// → 4
```

```
null.length;
// → TypeError: Cannot read property 'length' of null

var doh = "Doh";
console.log(typeof doh.toUpperCase);
// → function
console.log(doh.toUpperCase());
// → DOH
```

    ```
arr.push(elem[, elem])
    obj.node // undefined
    ```

    ```
    var anObject = {left: 1, right: 2};
console.log(anObject.left);
// → 1
delete anObject.left;
console.log(anObject.left);
// → undefined
console.log("left" in anObject);
// → false
console.log("right" in anObject);
// → true
```

you typically write array.length because that is easier to write than array["length"].

Mutability

```
var object1 = {value: 10};
var object2 = object1;
var object3 = {value: 10};

console.log(object1 == object2);
// → true
console.log(object1 == object3);
// → false

object1.value = 15;
console.log(object2.value);
// → 15
console.log(object3.value);
// → 10
```

The lycanthrope’s (`['laɪk(ə)n,θrəʊp]`, 变狼狂患者) log

中文:狼人;英语:werewolf;日语:狼男;法语:lycanthrope;韩语:늑대인간;

coefficient

```
function phi(table) {
    return (table[3] * table[0] - table[2] * table[1]) /
        Math.sqrt((table[2] + table[3]) *
                (table[0] + table[1]) *
                (table[1] + table[3]) *
                (table[0] + table[2]));
}

console.log(phi([76, 9, 4, 1]));
// → 0.068599434
```

objects as maps

```
var map = {};
function storePhi(event, phi) {
    map[event] = phi;
}
```

```
console.log([1, 2, 3, 2, 1].indexOf(2));
// → 1
console.log([1, 2, 3, 2, 1].lastIndexOf(2));
// → 3

console.log([0, 1, 2, 3, 4].slice(2, 4));
// → [2, 3]
console.log([0, 1, 2, 3, 4].slice(2));
// → [2, 3, 4]

function remove(array, index) {
    return array.slice(0, index)
        .concat(array.slice(index + 1));
}
console.log(remove(["a", "b", "c", "d", "e"], 2));
// → ["a", "b", "d", "e"]

console.log("e oee".indexOf("ee"));
// 3
```

The trim method removes whitespace (spaces, newlines, tabs, and similar characters) from the start and end of a string.

```
console.log("  okay \n ".trim());
// → okay
```

The arguments object

    ```
function packArgs()
{
    return arguments;
}
console.log(packArgs({nice:"good"}, "shit", 23));
// {0: {nice: "good"}, 1: "shit", 2: 23}
```

The Math object

As we’ve seen, Math is a grab-bag of number-related utility functions, such as
Math.max
Math.min
Math.sqrt
Math.random
Math.floor
Math.ceil
Math.round

The global object

    ```
for (var name in object)
    ```

    ```
    // Your code here.
function range(a,b,d)
{
    if (!d) { d = 1; }
    var arr = [];
    var cur = a;
    while( (d>0&&cur<=b) || (d<0&&cur>=b) ) {
        arr.push(cur);
        cur += d;
    }
    return arr;
}
function sum(arr) {
    var result = 0;
    for ( var i = 0; i < arr.length; ++i ) {
        result += arr[i];
    }
    return result;
}

console.log(range(1, 10));
// → [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
console.log(range(5, 2, -1));
// → [5, 4, 3, 2]
console.log(sum(range(1, 10)));
// → 55
```

#### Data Structures: Objects and Arrays

```
// Your code here.
function reverseArray(arr)
{
    var result = [];
    for ( var i = arr.length-1; i >= 0; --i ) {
        result.push( arr[i] );
    }
    return result;
}

function reverseArrayInPlace(arr)
{
    for ( var i = 0, j = arr.length-1; i < j; ++i, --j ) {
        var tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

console.log(reverseArray(["A", "B", "C"]));
// → ["C", "B", "A"];
var arrayValue = [1, 2, 3, 4, 5];
reverseArrayInPlace(arrayValue);
console.log(arrayValue);
// → [5, 4, 3, 2, 1]
```

```
// Your code here.
function arrayToList(arr)
{
    if (!arr.length) { return null; }
    var value = arr[0];
    var rest = arrayToList(arr.splice(1));
    return {value: value, rest: rest};
}
function listToArray(list)
{
    var arr = [];
    arr.push(list.value);
    while( list.rest != null ) {
        arr.push(list.rest.value);
        list = list.rest;
    }
    return arr;
}
function prepend(elem, arr)
{
    return {value: elem, rest: arr};
}

function nth(list, index)
{
    return listToArray(list)[index];
}

console.log(arrayToList([10, 20]));
// → {value: 10, rest: {value: 20, rest: null}}
console.log(listToArray(arrayToList([10, 20, 30])));
// → [10, 20, 30]
console.log(prepend(10, prepend(20, null)));
// → {value: 10, rest: {value: 20, rest: null}}
console.log(nth(arrayToList([10, 20, 30]), 1));
// → 20
```

```
// Your code here.
function deepEqual(a, b)
{
    if (typeof a === typeof {}) {
        return false;
    }
}

var obj = {here: {is: "an"}, object: 2};
console.log(deepEqual(obj, obj));
// → true
console.log(deepEqual(obj, {here: 1, object: 2}));
// → false
console.log(deepEqual(obj, {here: {is: "an"}, object: 2}));
// → true
```

#### Higher-order Functions

```
function greaterThan(n) {
    return function(m) { return m > n; };
}
var greaterThan10 = greaterThan(10);
console.log(greaterThan10(11));
// → true
```

```
function transparentWrapping(f) {
    return function() {
        return f.apply(null, arguments);
    };
}
```

This format is called JSON (pronounced “Jason”), which stands for JavaScript Object Notation. It is widely used as a data storage and communication format on the Web.

var string = JSON.stringify({name: "X", born: 1980});
console.log(string);
// → {"name":"X","born":1980}
console.log(JSON.parse(string).born);
// → 1980


filter(arr, function (elem){
        return true/false;
        });

arr.filter = f(elem)

    Transforming with map

    Summarizing with reduce

    bind and apply.

    [1,3,5].reduce(function(a,b){return a*b;})
    // 15

    Mother-child age difference

#### The Secret Life of Objects

    The problem with object-oriented languages is they’ve got all this implicit environment that they carry around with them. You wanted a banana but what you got was a gorilla holding the banana and the entire jungle.

    -- Joe Armstrong, interviewed in Coders at Work

    Usually a method needs to do something with the object it was called on. When a function is called as a method—looked up as a property and immediately called, as in object.method()—the special variable this in its body will point to the object that it was called on

    There is a method similar to apply, called call. It also calls the function it is a method of but takes its arguments normally, rather than as an array. Like apply and bind, call can be passed a specific this value.

    speak.apply(fatRabbit, ["Burp!"]);
    // → The fat rabbit says 'Burp!'
    speak.call({type: "old"}, "Oh my.");
    // → The old rabbit says 'Oh my.'

    Watch closely.

    var empty = {};
console.log(empty.toString);
// → function toString(){…}
console.log(empty.toString());
// → [object Object]

I just pulled a property out of an empty object. Magic!

Well, not really. I have simply been withholding information about the way JavaScript objects work. In addition to their set of properties, almost all objects also have a prototype. A prototype is another object that is used as a fallback source of properties. When an object gets a request for a property that it does not have, its prototype will be searched for the property, then the prototype’s prototype, and so on.

So who is the prototype of that empty object? It is the great ancestral prototype, the entity behind almost all objects, Object.prototype.

console.log(Object.getPrototypeOf({}) ==
        Object.prototype);
// → true
console.log(Object.getPrototypeOf(Object.prototype));
// → null

console.log(Object.getPrototypeOf(isNaN) ==
        Function.prototype);
// → true
console.log(Object.getPrototypeOf([]) ==
        Array.prototype);
// → true

var protoRabbit = {
speak: function(line) {
           console.log("The " + this.type + " rabbit says '" +
                   line + "'");
       }
};
var killerRabbit = Object.create(protoRabbit);
killerRabbit.type = "killer";
killerRabbit.speak("SKREEEE!");
// → The killer rabbit says 'SKREEEE!'

constructor

Constructors (in fact, all functions) automatically get a property named prototype, which by default holds a plain, empty object that derives from Object.prototype. Every instance created with this constructor will have this object as its prototype. So to add a speak method to rabbits created with the Rabbit constructor, we can simply do this:

Rabbit.prototype.speak = function(line) {
    console.log("The " + this.type + " rabbit says '" +
            line + "'");
};
blackRabbit.speak("Doom...");
// → The black rabbit says 'Doom...'

It is important to note the distinction between the way a prototype is associated with a constructor (through its prototype property) and the way objects have a prototype (which can be retrieved with Object.getPrototypeOf). The actual prototype of a constructor is Function.prototype since constructors are functions. Its prototype property will be the prototype of instances created through it but is not its own prototype.

When you add a property to an object, whether it is present in the prototype or not, the property is added to the object itself, which will henceforth have it as its own property. If there is a property by the same name in the prototype, this property will no longer affect the object. The prototype itself is not changed.

![](http://eloquentjavascript.net/img/rabbits.svg)

console.log(Array.prototype.toString ==
        Object.prototype.toString);
// → false
console.log([1, 2].toString());
// → 1,2


That function doesn’t know about arrays, so it simply puts the word “object” and the name of the type between square brackets.

console.log(Object.prototype.toString.call([1, 2]));
// → [object Array]

for (var name in map)

    Prototype interference

    Oddly, toString did not show up in the for/in loop, but the in operator did return true for it. This is because JavaScript distinguishes between enumerable and nonenumerable properties.

    All properties that we create by simply assigning to them are enumerable. The standard properties in Object.prototype are all nonenumerable, which is why they do not show up in such a for/in loop.

    Object.defineProperty(Object.prototype, "hiddenNonsense",
            {enumerable: false, value: "hi"});

console.log(map.hasOwnProperty("toString"));
// → false

Prototype-less objects

var map = Object.create(null); // objet without a prototype
map["pizza"] = 0.069;
console.log("toString" in map);
// → false
console.log("pizza" in map);
// → true

Polymorphism

Laying out a table

Getters and setters

var pile = {
elements: ["eggshell", "orange peel", "worm"],
          get height() {
              return this.elements.length;
          },
          set height(value) {
              console.log("Ignoring attempt to set height to", value);
          }
};

console.log(pile.height);
// → 3
pile.height = 100;
// → Ignoring attempt to set height to 100

#### Project: Electronic Life
#### Bugs and Error Handling
#### Regular Expressions
#### Modules

### Part 2: Browser

#### JavaScript and the Browser
#### The Document Object Model
#### Handling Events
#### Project: A Platform Game
#### Drawing on Canvas
#### HTTP
#### Forms and Form Fields
#### Project: A Paint Program

### Part 3: Node

#### Node.js
#### Project: Skill-Sharing Website

---

# JavaScript: The Good Parts

## Good Parts

JavaScript’s functions are first class objects with (mostly) lexical scoping. JavaScript
is the first lambda language to go mainstream. Deep down, JavaScript has more in
common with Lisp and Scheme than with Java. It is Lisp in C’s clothing. This makes
JavaScript a remarkably powerful language.

document.writeln('Hello, world!');

Function.prototype.method = function (name, func) {
    this.prototype[name] = func;
    return this;
};

## Grammar

railroal diagrams

## Objects

```
var obj = {};
var obj = {
k : "v",
    ...
}

obj.k
obj["k"]
```

The || operator can be used to fill in default values:
var middle = stooge["middle-name"] || "(none)";
var status = flight.status || "unknown";

Objects are passed around by reference. They are never copied:

Every object is linked to a prototype object from which it can inherit properties.
All objects created from object literals are linked to Object.prototype , an object that
comes standard with JavaScript.

if (typeof Object.create !== 'function') {
    Object.create = function (o) {
        var F = function () {};
        F.prototype = o;
        return new F();
    };
}
var another_stooge = Object.create(stooge);

Reflection

typeof flight.toString // 'function'
typeof flight.constructor // 'function'

Deletion

The delete operator can be used to remove a property from an object. It will remove
a property from the object if it has one. It will not touch any of the objects in the proto-
type linkage.
Removing a property from an object may allow a property from the prototype link-
age to shine

another_stooge.nickname; // local
delete another_stooge.nickname;
another_stooge.nickname; // prototype

Global Abatement (减轻)

    避免过多的 global 变量，可以全部放到一个 obj 里面。

## Functions

    Function Objects

    Functions in JavaScript are objects. Objects are collections of name/value pairs hav-
    ing a hidden link to a prototype object. Objects produced from object literals are
    linked to Object.prototype . Function objects are linked to Function.prototype
    (which is itself linked to Object.prototype ). Every function is also created with two
    additional hidden properties: the function’s context and the code that implements
    the function’s behavior.

    Function Literal

    // Create a variable called add and store a function
    // in it that adds two numbers.
    var add = function (a, b) {
        return a + b;
    };

Function Literal， 4 parts = "function" + [function name] +  '(' [params] ')' + { set of statements };

Invocation

The Method Invocation Pattern

When a function is stored as a property of an object, we call it a method.

obj.method,
    obj['method']

    A method can use this to access the object so that it can retrieve values from the
    object or modify the object. The binding of this to the object happens at invocation
    time. This very late binding makes functions that use this highly reusable. Methods
    that get their object context from this are called public methods.

    The Function Invocation Pattern

    A consequence of this error is that a method cannot
    employ an inner function to help it do its work because the inner function does not
    share the method’s access to the object as its this is bound to the wrong value.

    myObject.double = function () {
        var that = this; // Workaround.
        var helper = function () {
            that.value = add(that.value, that.value);
        };
        helper(); // Invoke helper as a function.
    };

The Constructor Invocation Pattern

JavaScript is a prototypal inheritance language. That means that objects can inherit
properties directly from other objects. The language is class-free.

// Create a constructor function called Quo.
// It makes an object with a status property.
var Quo = function (string) {
    this.status = string;
};
// Give all instances of Quo a public method

// called get_status.
Quo.prototype.get_status = function () {
    return this.status;
};
// Make an instance of Quo.
var myQuo = new Quo("confused");
document.writeln(myQuo.get_status()); // confused

Functions that are intended to be used with the new prefix are called constructors. By
convention, they are kept in variables with a capitalized name. If a constructor is
called without the new prefix, very bad things can happen without a compile-time or
runtime warning, so the capitalization convention is really important.

The Apply Invocation Pattern

Because JavaScript is a functional object-oriented language, functions can have
methods.

The apply method takes two parame-
ters. The first is the value that should be bound to this . The second is an array of
parameters.

Arguments

Because of a design error, arguments is not really an array. It is an array-like object.
arguments has a length property, but it lacks all of the array methods. We will see a
consequence of that design error at the end of this chapter.

Return

If the function was invoked with the new prefix and the return value is not an object,
   then this (the new object) is returned instead.

   Exceptions

   var add = function (a, b) {
       if (typeof a !== 'number' || typeof b !== 'number') {
           throw {
name: 'TypeError',
      message: 'add needs numbers'
           };
       }
       return a + b;
   }

var try_it = function () {
    try {
        add("seven");
    } catch (e) {
        document.writeln(e.name + ': ' + e.message);
    }
}

The throw statement interrupts execution of the function. It should be given an
exception object containing a name property that identifies the type of the exception,
          and a descriptive message property. You can also add other properties.

          Augmenting Types


          For example, by augmenting Function.prototype , we can make a method available to
          all functions:

          Function.prototype.method = function (name, func) {
              this.prototype[name] = func;
              return this;
          };

Number.method('integer', function () {
        return Math[this < 0 ? 'ceiling' : 'floor'](this);
        });

document.writeln((-10 / 3).integer()); // -3

JavaScript lacks a method that removes spaces from the ends of a string. That is an
easy oversight to fix:

String.method('trim', function () {
        return this.replace(/^\s+|\s+$/g, '');
        });
document.writeln('"' + " neat ".trim() + '"');

Recursion
