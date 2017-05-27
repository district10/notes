---
title: Learning Ruby
---

![](https://img3.doubanio.com/lpic/s12295310.jpg)

-   [The Ruby Programming Language - O'Reilly Media](http://shop.oreilly.com/product/9780596516178.do)
-   [The Ruby Programming Language (豆瓣)](https://book.douban.com/subject/2337297/)

```
By David Flanagan, Yukihiro Matsumoto
Publisher: O'Reilly Media
Final Release Date: January 2008
Pages: 448
```

## Chapter 1 Introduction

### A Tour of Ruby

-   ruby is (fully) object-oriented -<

    :   ```ruby
        1.class         # => Fixnum: the number 1 is a Fixnum
        0.0.class       # => Float: floating-point numbers have class Float
        true.class      # => TrueClass: true is a the singleton instance of TrueClass
        false.class     # => FalseClass
        nil.class       # => NilClass
        ```

        parentheses is optional

-   Blocks and Iterators -<

    :   ```ruby
        3.times { print "Ruby! " }      # Prints "Ruby! Ruby! Ruby! "
        1.upto(9) {|x| print x }        # Prints "123456789", upto, downto
        ```

        ```ruby
        a = [3, 2, 1]       # This is an array literal
        a[3] = a[2] - 1
        a.each do |elt|
            print elt+1
        end                 # This block was delimited with do/end instead of {}
        ```

        ```ruby
        a = [1,2,3,4]
        b = a.map {|x| x*x }
        c = a.select {|x| x%2==0 }
        a.inject do |sum,x|
            sum + x
        end
        ```

        hashes

        ```ruby
        h = {
            :one => 1,
            :two => 2
        }
        h[:one]
        h[:three] = 3
        h.each do |key,value|
            print "#{value}:#{key}; "
        end

        # 当然也支持 JS 那样的
        h = { one: 1, two: 2 }
        ```

        ```ruby
        File.open("data.txt") do |f|    # Open named file and pass stream to block
            line = f.readline           # Use the stream to read from the file
        end                             # Stream automatically closed at block end

        t = Thread.new do               # Run this block in a new thread
            File.read("data.txt")       # Read a file in the background
        end                             # File contents available as thread value
        ```

        ```ruby
        interpolated = "interpolated"
        print "can be #{interpolated}"

        # to_s: to string
        ```

-   Expressions and Operators in Ruby -<

    :   ```ruby
        "str" * 3                   # rep
        "%d %s" % [2, "two"]        # format
        2**1024                     # to the power of 1024
        ```

-   Operator overides: `[]` (Array & Hash)，在 ruby 里太灵活了太常见了……

-   Methods -<

    :   ```ruby
        def square(x)
            x*x
        end
        ```

        Live update Math module (core Ruby lib)

        ```ruby
        def Math.square(x)  # Define a class method of the Math module
            x*x             # The last expression is the return value
        end
        ```

-   Assignment -<

    :   ```ruby
        =
        +=, -=, *=, /=
        x,y = 1,2
        a,b = b,a               # swap
        x,y,z = [1,2,3]         # unpack, splat
        ```

        ```ruby
        o.x=(1)             # "x=" 是一个 method……所以是在调用子函数

        # 这样的 method 和一般的 method 没啥不同，除了它还可以这样调用：
        o.x = 1             # 等价于 o.x=(1)
        ```

-   Punctuation Suffixes and Prefixes -<

    :   ```ruby
        empty?              # 这是一个 method
        sort                #
        sort!               # mutator method, in-place
        $global_varible
        @instance_varible
        @@class_varible
        ```

-   Regexp and Range -<

    :   ```ruby
        /[Rr]uby/
        /\d{5}/
        1..3            # 1<= x <= 3
        1...3            # 1<= x < 3
        ```

        ```ruby
        generation = case birthyear
            when 1946..1963: "Baby Boomer"
            when 1964..1976: "Generation X"
            when 1978..2000: "Generation Y"
            # when cond1, cond2
            else nil
        end
        ```

-   Classes and Modules -<

    :   ```ruby
        class Sequence
            include Enumerable
            def initialize(from, to, by)    # Sequence.new(from,to,by)
                ...
            end
            def [](index)
                ...
            end
        ```

        ```ruby
        module Sequence
            def self.fromtoby(from, to, by)
                x = from
                while x <= to
                    yield x
                    x += by
                end
            end
        end
        # Sequences.fromtoby(1, 10, 2) {|x| print x }
        # Prints "13579"
        ```

        The core Ruby API is a rich one, and it is worth taking the time to
        study the platform (see Chapter 9) so you don’t end up spending
        time writing methods that have already been implemented for you!

-   Ruby Surprises -<

    :   ```ruby
        # ruby: mutable string
        []=             # method, insert, delete, update, etc
        <<              # append
        freeze          # make immutable
        ```

        nil -> false, otherwise -> true

### Try Ruby

-   `ruby -e 'puts "Hello World"'`{.bash}, `e` for evaluate
-   `irb --simple-prompt`{.bash}
-   `ri Array.sort`, read doc
-   Ruby Package Management with gem -<

    :   ```ruby
        # gem install rails
        gem list                    # List installed gems
        gem enviroment              # Display RubyGems configuration information
        gem update rails            # Update a named gem
        gem update                  # Update all installed gems
        gem update --system         # Update RubyGems itself
        gem uninstall rails         # Remove an installed gem
        ```

### About This Book

This chapter concludes with a heavily commented extended example
demonstrating a nontrivial Ruby program.

The chapters that follow cover Ruby from the bottom up: -<

:   -   Chapter 2 covers the lexical and syntactic structure of Ruby,
        including basic issues like character set, case sensitivity, and
        reserved words.
    -   Chapter 3 explains the kinds of data—numbers, strings, ranges,
        arrays, and so on — that Ruby programs can manipulate, and it
        covers the basic features of all Ruby objects.
    -   Chapter 4 covers primary expressions in Ruby—literals, variable
        references, method invocations, and assignments—and it explains the
        operators used to combine primary expressions into compound
        expressions.
    -   Chapter 5 explains conditionals, loops (including blocks and
        iterator methods), exceptions, and the other Ruby expressions that
        would be called statements or control structures in other
        languages.
    -   Chapter 6 formally documents Ruby’s method definition and
        invocation syntax, and it also covers the invocable objects known
        as procs and lambdas. This chapter includes an explanation of
        closures and an exploration of functional programming techniques in
        Ruby.
    -   Chapter 7 explains how to define classes and modules in Ruby.
        Classes are fundamental to object-oriented programming, and this
        chapter also covers topics such as inheritance, method visibility,
        mixin modules, and the method name resolution algorithm.
    -   Chapter 8 covers Ruby’s APIs that allow a program to inspect and
        manipulate itself, and then demonstrates metaprogramming techniques
        that use those APIs to make programming easier. The chapter
        includes an example of domain-specific language.
    -   Chapter 9 demonstrates the most important classes and methods of
        the core Ruby platform with simple code fragments. This is not a
        reference but a detailed overview of the core classes.  Topics
        include text processing, numeric computation, collections (such as
        arrays and hashes), input/output, networking, and threads. After
        reading this chapter, you’ll understand the breadth of the Ruby
        platform, and you’ll be able to use the ri tool or an online
        reference to explore the platform in depth.
    -   Chapter 10 covers the top-level Ruby programming environment,
        including global variables and global functions, command-line
        arguments supported by the Ruby interpreter, and Ruby’s security
        mechanism.

### A Sudoku Solver in Ruby

code -<

:   ```ruby
    class Puzzle
        ASCII = ".123456789"                                    # external rep
        BIN = "\000\001\002\003\004\005\006\007\010\011"        # internal rep
        def initialize(lines)
            if (lines.responds_to? :join)
                s = lines.join
            else
                s = lines.dup
            end
            s.gsub!(/\s/, "")                                   # strip all whitespaces

            raise Invalid, "Grid is the wrong size" unless s.size == 81
            if i = s.index(/[^123456789\.]/)
                raise Invalid, "Illegal character #{s[i,1]} in puzzle"
            end
            s.tr!(ASCII, BIN)                                   # external rep -> internal rep
            @grid = s.unpack('c*')                              # unpack bytes to array of nums
            raise Invalid, "Initial puzzle has duplicates" if has_duplicates?
        end

        def dup
            copy = super
            @grid = @grid.dup
            copy                                                # return the copied
        end

        def [](row,col)
            @grid[row*9+col]
        end

        def []=(row, col, newvalue)
            unless (0..9).include? newvalue
                raise ...
            end
            @grid[row*9+col] = newvalue
        end

        BoxOfIndex = [
            0,0,0,1,1,1,2,2,2,
            0,0,0,1,1,1,2,2,2,
            0,0,0,1,1,1,2,2,2,
            3,3,3,4,4,4,5,5,5,
            3,3,3,4,4,4,5,5,5,
            3,3,3,4,4,4,5,5,5,
            6,6,6,7,7,7,8,8,8,
            6,6,6,7,7,7,8,8,8,
            6,6,6,7,7,7,8,8,8
        ].freeze

        def each_unknown
            0.upto 8 do |row|
                0.upto 8 do |col|
                    index = row*9+col
                    next if @grid[index] != 0 # Move on if we know the cell's value
                    box = BoxOfIndex[index]
                    yield row, col, box
                end
            end
        end

        def has_duplicates?
            # uniq! returns nil (false) if all the elements in an array are unique.
            # So if uniq! returns something then the board has duplicates.
            0.upto(8) {|row| return true if rowdigits(row).uniq! }
            0.upto(8) {|col| return true if coldigits(col).uniq! }
            0.upto(8) {|box| return true if boxdigits(box).uniq! }
            false
        end

        AllDigits = [1, 2, 3, 4, 5, 6, 7, 8, 9].freeze
        def possible(row, col, box)
            # +: array concat, -: set diff
            AllDigits - (rowdigits(row) + coldigits(col) + boxdigits(box))
        end

        private # these below methods are private

        # all digits in the row-th row
        def rowdigits(row)
            # Array subtraction is set difference, with duplicate removal.
            @grid[row*9,9] - [0]
        end

        # 可以看到，“+” 是 array concat，“-” 是 set diffrence (no dup)
        def coldigits(col)
            result = []
            # Start with an empty array
            col.step(80, 9) {|i|
                v = @grid[i]
                # Get value of cell at that index
                result << v if (v != 0) # Add it to the array if non-zero
            }
            result              # 这是不是有 dup 啊……
        end

        # 每个 box 左上角的 index
        BoxToIndex = [0, 3, 6, 27, 30, 33, 54, 57, 60].freeze

        def boxdigits(b)
            # Convert box number to index of upper-left corner of the box.
            i = BoxToIndex[b]
            # Return an array of values, with 0 elements removed.
            [
                @grid[i], @grid[i+1], @grid[i+2],
                @grid[i+9], @grid[i+10], @grid[i+11],
                @grid[i+18], @grid[i+19], @grid[i+20]
            ] - [0]
        end
    end # This is the end of the Puzzle class
    ```

    ```ruby
    # An exception of this class indicates invalid input,
    class Invalid < StandardError
    end

    class Impossible < StandardError
    end

    def Sudoku.scan(puzzle)
        unchanged = false
        until unchanged
            unchanged = true            # Assume no cells will be changed this time
            rmin,cmin,pmin = nil        # Track cell with minimal possible set
            min = 10                    # More than the maximal number of possibilities
            puzzle.each_unknown do |row, col, box|
                p = puzzle.possible(row, col, box)
                case p.size
                when 0
                    raise Impossible
                when 1
                    puzzle[row,col] = p[0]  # set to the only possibility
                    unchanged = false       # note that we've made a change
                else    # >1
                    if unchanged && p.size < min
                        min = p.size
                        rmin, cmin, pmin = row, col, p
                    end
                end
            end
            return rmin, cmin, pmin         # 找到了 puzzle 最容易突破的点：这里可能性最少
        end

        def Sudoku.solve(puzzle)
            puzzle = puzzle.dup
            r,c,p = scan(puzzle)
            return puzzle if r == nil
            p.each do |guess|
                puzzle[r,c] = guess
                begin
                    return solve(puzzle)
                rescue Impossible
                    next
                end
            end
            raise Impossible
        end
    end
    ```

## Chapter 2 The Structure and Execution of Ruby Programs

### Lexical Structure

seq of tokens:

-   comments -<

    :   -   `# comments`
        -   ```ruby
            =begin
                embedded document
                you can comment out code here
            =end
            ```

            ```ruby
            =begin rdoc
                this uses a special markup language
                * list
                *   *bold* <b>....</b>
                *   *italic* <i>....</i>
            =end
            ```

-   Literals
-   Punctuation
-   Unicode 函数可以用 unicode 表示
-   Punctuation in identifiers -<

    :   ```ruby
        $files                      # A global variable
        @data                       # An instance variable
        @@counter                   # A class variable
        empty?                      # A Boolean-valued method or predicate
        sort!                       # An in-place alternative to the regular sort method
        timeout=                    # A method invoked by assignment
        ```

        the token `__END__` marks the end of the program (and the
        beginning of a data section) if it appears on a line by itself
        with no leading or trailing whitespace.

-   Whitespace -<

    :   ```ruby
        # fluent API, not work in Ruby 1.8
        animals = Array.new
            .push("dog")
            .push("cow")
            .push("cat")
            .sort
        # 有“.”开头的行，无需“\”来续行
        ```

        ```ruby
        f(3+2)+1
        f (3+2)+1           # 把 (3+1)+1 传入了函数 f
        ```

### Syntactic Structure

-   Literials -<

    :   -   `[1,2,3]`, **Array**
        -   `{1=>"one", 2=>"two"}`，**Hash**
        -   `1..3`，**Range**

-   Block Structure in Ruby -<

    :   -   `{  |var| ... }`，一行可以写完的话最好用这个
        -   `do |var| ... end`，很多行的话

### File Structure

`__END__` -<

:   ```ruby
    #!/usr/bin/ruby -w              # shebang comment
    # -*- coding: utf-8 -*-         # coding comment, for Emacs. (Vim? use "# vi: set fileencoding=utf-8")
    require 'socket'                # load libs

        ...                         # program code goes here

    __END__                         # mark end of code
        ...                         # program data goes here
    ```

### Program Encoding

Better utf-8

### Program Execution

utf-8 -<

:   -   `ruby -Ku`, utf-8
    -   ```ruby
        # coding: utf-8
        ```
    -   这个完全是 shell 的事情……

        ```bash
        ruby -E utf-8                   # Encoding name follows -E
        ruby -Eutf-8                    # The space is optional
        ruby --encoding utf-8           # Encoding following --encoding with a space
        ruby --encoding=utf-8           # Or use an equals sign with --encoding
        ```

        ruby 还可以 register `at_exit` 函数（和 C 一样）

## Chapter 3 Datatypes and Objects

### Numbers

-   Numberic (immutable) -<

    :   -   Integer
            -   Fixnum (31 bits)
            -   Bignum
        -   Float
        -   Complext (std. lib.)
        -   BigDecimal (std. lib.)
        -   Rational (std. lib.) 分数

-   `_` 来分隔，`0x...`、`0...` -<

    :   ```ruby
        1_000_000_000
        0x
        0b1111_0000
        x = 5 % 2
        x = 1.5 % 0.4
        4**3**2 # 4**9
        ```

-   integer division & modulo -<

    :   An important corollary of Ruby’s definition of integer division is
        that, in Ruby, -a/b equals a/-b but may not equal -(a/b) .

        ```
        corollary

        英 [kə'rɒlərɪ] 美 ['kɔrəlɛri]

            n. 推论；必然的结果
        ```

        Ruby’s definition of the modulo operation also differs from that of
        C and Java. In Ruby, –7%3 is 2 . In C and Java, the result is -1
        instead. The magnitude of the result differs, of course, because
        the value of the quotient differs. But the sign of the result
        differs, too.  In Ruby, the sign of the result is always the same
        as the sign of the second operand. In C and Java, the sign of the
        result is always the same as the sign of the first operand.  (Ruby
        also provides a remainder method that behaves, in sign and
        magnitude, like the C modulo operator.)

### Text

-   `'a\b' == 'a\\b'`可以，但是没必要 escape。
-   `"#{interp}"`, escape interp: `"\#{none_interp}"`
-   `''` 不可以用“\”续行，`""` 可以。
-   `\u00D7` "x"，leading 0 不能省略
-   `\u20ac"` "€"，大小写一样
-   `%q`, single quote -<

    :   ```ruby
        %q(..........)
        %q-..........-
        %q{..........}
        %q|..........|
        ```

        和 Perl 类似

-   `%Q`, double quote -<

    :   ```ruby
        %Q(..........)
        %Q-..........-
        %Q{..........}
        %_.........._ # Q 省略了
        ```

        `()` 这样的和 `||` 有点不一样。前者是 paired，后者没有。前者可以 nest
        而不需要 escape。

-   here doc -<

    :   ```ruby
        document = <<EOF
            ...
            ...
            ...
        EOF
        ```

-   backtick command execution & `%x[cmd]` -<

    :   `ls`, `%x[ls]`, Kernel.`('ls')

-   string literal -<

    :   -   `?\t` tab?
        -   `?\C-x` Ctrl-X?
        -   float to string: 2.3.to_s，在 string interp 的时候不需要显式输入 to_s

        -   ```ruby
            s = "..."
            s[0], s[-s.length]              # first char
            s[s.length-1], s[-1]            # last char
            s[0] = ?H                       # replace with 'H'
            s[-1] = ""                      # delete last char
            s[start,len]
            s[s.length,0] = "good"          # append
            s[2..3]
            s[-3..-1]
            s[0..0]                         # first char
            s[0...0]                        # no char

            s = "hello"                     # Start with the word "hello"
            while(s["l"])                   # While the string contains the substring "l"
                s["l"] = "L";               # Replace first occurrence of "l" with "L"
            end                             # Now we have "heLLo"

            s[/[aeiou]/] = '*'              # Replace first vowel with an asterisk
            ```

            `s[start,len=1]` 和 `s[start]` 几乎一样，除了后者在 start = s.length 时是“”
            而不是 nil。这样方便了 append。

        -   Iterating Strings

            -   s.length
            -   s.bytesize
            -   ```ruby
                text = stream.readline.force_encoding("utf-8")
                bytes = text.dup.force_encoding(nil)                # nil encoding means binary

                s = "\xa4".force_encoding("utf-8")                  # This is not a valid UTF-8 string
                s.valid_encoding?                                   # => false
                ```

### Arrays

-   `%q`, `%Q` for string literal
-   `%w`, `%W` for array literal
-   code examlpes -<

    :   ```ruby
        [-10...0, 0..10,] # An array of two ranges; trailing commas are allowed
        [[1,2],[3,4],[5]] # An array of nested arrays

        words = %w[this is a test]      # Same as: ['this', 'is', 'a', 'test']
        open = %w| ( [ { < |            # Same as: ['(', '[', '{', '<']
        white = %W(\s \t \r \n)         # Same as: ["\s", "\t", "\r", "\n"]

        a[0], a[-a.length]
        a[-1], a[a.length-1]

        a = ('a'..'e').to_a
        a << 1 << 2
        a << [4,5,6]
        a = [0] * 8

        a | b                           # merge, no dup
        b | a                           # merge, no dup
        a & b                           # union, no dup
        b & a                           # union, no dup
        ```

### Hashes

-   What is Hash? -<

    :   ```ruby
        numbers = Hash.new
        numbers["one"] = 1
        numbers["two"] = 2
        ```

-   Hash Literals -<

    :   ```ruby
        numbers = { "one" => 1, "two" => 2, "three" => 3 }
        numbers = { :one => 1, :two => 2, :three => 3 }
        ```

-   Hash Codes, Equality, and Mutable Keys -<

    :   rehash

### Ranges

-   what is range? -<

    :   ```ruby
        1..10
        1.0...10.0

        cold_war = 1945..1989
        cold_war.include? birthdate.year
        (1945..1989).include? birthdate.year

        r.each { ... }
        r.step(2) { ... }
        r.to_a              # enumerable defines to_a

        r.member?           # both continuous membership test
        r.include?
        ```

        这里要注意。

        Note that ranges with integer endpoints are discrete, but floating-point
        numbers as endpoints are continuous.

        在 case when 里面用得挺多。

### Symbols

-   `%s["]`
-   Symbols are often used to refer to method names in reflective code. -<

    :   For example, suppose we want to know if some object has an each method: :hearts:

        ```ruby
        o.respond_to? :each
        ```

### True, False, and Nil

```ruby
o == nil
o.nil?
```

### Objects

-   all are objects
-   gc
-   def Class.initialize -> Class.new
-   `object_id`, `__id__`
-   object class and object type -<

    :   ```ruby
        # ruby 1.8
        o = "str"
        o.class                     # String
        o.class.class               # Object
        o.class.class.class         # nil

        # Ruby 1.9 only
        Object.superclass           # BasicObject: Object has a superclass in 1.9
        BasicObject.superclass      # nil: BasicObject has no superclass
        ```

        ```ruby
        x.instance_of? Fixnum       # 类型
        x.is_a? Fixnum              # maybe 子类成员，和 kind_of 一样
        ```

-   object equality -<

    :   ```
        a.equals?(b)
        a.object_id == b.object_id  # Works like a.equal?(b)
        ```

        ```
        a.eql?(b)
        a.equal?(b)
        a == b

        1 == 1.0            # true: Fixnum and Float objects can be ==
        1.eql?(1.0)         # false: but they are never eql!
        ```

-   The `===` operator, case when range... -<

    :   多用在 case 里面判断 when 的时候，比如 (1..10) === 5 就是 true。

-   The `=~` operator -<

    :   regex match

        todo: p78

        ```ruby
        1 <=> 5             # order

        nan == nan          # false
        nan.equal?(nan)     # true
        ```

-   Object conversion -<

    :   ```
        to_s                # string
        to_i                # int
        to_f                # float
        to_a                # array
        ```

-   Copying Objects: clone, dup

-   Marshaling Objects

    :   -   marshal.dump
    -  :     marshal.load

-   Freezing Objects -<

    :   ```
        .freeze
        .frozen?
        ```

-   Taining Objects -<

    :   taint，被污染

        ```ruby
        s = "str"           # not tainted
        s.taint             # mark as tainted
        s.tainted?          # true
        s.upcase.tainted?   # still
        s[0,2].tainted?     # still
        ```

        user input are tainted.

        `$SAFE`

## Chapter 4 Expressions and Operators

### Literals and Keyword Literals

### Variable References

### Constant References

### Method Invocations

-   Method Invocations -<

    :   ```
        .
        ::
        # if omitted, the method is invoked on self

        puts "hello"                # Kernel.puts
        ```

        Assignment to arrays is also done via method invocation. If the
        object o defines a method named `[]=` , then the expression `o[x]=y`
        becomes `o.[]=(x,y)`, and the expression `o[x,y]=z` becomes
        `o.[]=(x,y,z)`.

        We’ll see later in this chapter that many of Ruby’s operators are
        defined as methods, and expressions like x+y are evaluated as
        `x.+(y)`, where the method name is `+`. The fact that many of Ruby’s
        operators are defined as methods means that you can redefine these
        operators in your own classes.

### Assignments

-   Assigning to Variables -<

    :   ```ruby
        class Ambiguous
            def x; 1; end               # A method named "x". Always returns 1
            def test
                puts x                  # No variable has been seen; refers to method above: prints 1
                x = 0 if false          # The line below is never evaluated, because of the "if false" clause. But
                                        # the parser sees it and treats x as a variable for the rest of the method.
                puts x
                x = 2
                puts x
            end
        end
        ```

        ```
        o.[]=(x,y),             o[x]   = y
        o.[]=(x,y,z),           o[x,y] = z
        ```

-   Abbreviated Assignment -<

    :   ```
        +, -, *, /
        %,
        **,
        &&, ||, &, |, ^
        <<, >>
        ```

        The `||=` Idiom

        ```
        results ||= []
        results = results || []
        ```

-   Parallel Assignment -<

    :   -   Same number of lvalues and rvalues: `x,y,z = 1,2,3`
        -   One lvalue, multiple rvalues:

            ```ruby
            x  = 1,2,3          # x = [1,2,3]
            x, = 1,2,3          # x =  1
            ````

        -   Multiple lvalues, single array rvalue

            ```
            x,y,z = [1,2,3]     # x,y,z = 1,2,3
            x     = [1,2,3]
            x,    = [1,2,3]
            ```

        -   Different numbers of lvalues and rvalues

            nil

        -   The splat operator

            splat，发出溅泼声

            ```
            x,y,z = 1, *[2,3]
            ```

            不能 double splat。

            ```
            x, *y = 1,2,3           # x=1, y=[2,3]
            x, *y = 1,2             # x=1, y=[2]
            x, *y = 1               # x=1, y=[]

            # Ruby 1.9 only
            *x,y = 1, 2, 3          # x=[1,2]; y=3
            *x,y = 1, 2             # x=[1]; y=2
            *x,y = 1                # x=[]; y=1

            # 两面同时 splat
            x, y, *z = 1, *[2,3,4] # x=1; y=2; z=[3,4]
            ```

        -   Parentheses in parallel assignment

            "unpack"

            ```
            x,y,z = 1,[2,3]                 # No parens: x=1;y=[2,3];z=nil
            x,(y,z) = 1,[2,3]               # Parens: x=1;y=2;z=3
            a,b,c,d = [1,[2,[3,4]]]         # No parens: a=1;b=[2,[3,4]];c=d=nil
            a,(b,(c,d)) = [1,[2,[3,4]]]     # Parens: a=1;b=2;c=3;d=4
            ```

        -   The value of parallel assignment

            The return value of a parallel assignment expression is the
            array of rvalues (after being augmented by any splat operators).

### Operators

Ruby operators, by precedence (high to low), with arity (N),
associativity (A), and definability (M)

-   Unary + and –
-   Exponentiation: `**`
-   Arithmetic: +, –, *, /, and %
-   Shift and Append: << and >>
-   Complement, Union, Intersection: ~, &, |, and ^

    ```
    (0b1010 & 0b1100).to_s(2)       # => "1000"
    ```

-   Comparison: <, <=, >, >=, and <=>

    ```ruby
    # Declare class A as a subclass of B
    class A < B
    end
    ```

-   Equality: ==, !=, =~, !~, and ===

    ```
    != inverse of ==
    !~ inverse of =~
    === case-equality operator
    ```

-   Boolean Operators: &&, ||, !, and, or, not

-   Ranges and Flip-Flops: .. and ...

    Boolean flip-flops

    `..` creates an awk-style flip-flop, and `...` creates a sed-style flip-flop.

    ```
    (1..10).each {|x| print x if x==3..x==5 }
    ```

    In the code example, the flip-flop is evaluated repeatedly, for
    values of x from 1 to 10. It starts off in the false state, and
    evaluates to false when x is 1 and 2 . When x==3 , the
    flip-flop flips to true and returns true . It continues to
    return true when x is 4 and 5 . When x==5 , however, the
    flip-flop flops back to false , and returns false for the
    remaining values of x . The result is that this code prints 345.

    ```
    ARGF.each do |line|
        # For each line of standard in or of named files
        print line if line=~/TODO/..line=~/^$/ # Print lines when flip-flop is true
    end
    ```

-   Conditional: ?:

    ```
    a ? b : c ? d : e           # This expression...
    a ? b : (c ? d : e)         # is evaluated like this..
    (a ? b : c) ? d : e         # NOT like this
    ```

    最后一种好搞怪……

-   Assignment Operators

    right-associative

-   The defined? Operator

    ```
    # Compute f(x), but only if f and x are both defined
    y = f(x) if defined? f(x)
    ```

    Return values of the defined? operator

    ```
    defined? a and defined? b               # This works
    defined? a && defined? b                # Evaluated as: defined?((a && defined? b))
    ```

-   Statement Modifiers

    ```
    print x if x
    ```

-   Nonoperators:

    ```
    ()                  # method definition & invocation
    []
    {}                  # alternative to do/end, also used in hash literals
    .   ::              # qualified names
    ;   ,   =>          # sep
    :                   # symbol prefix
    *   &   <           # *:unpack, &, <: subclass
    ```

## Chapter 5 Statements and Control Structures

-   Conditionals
-   Loops
-   Iterators and blocks
-   Flow-altering statements like return and break
-   Exceptions
-   The special-case BEGIN and END statements
-   The esoteric control structures known as fibers and continuations

```
esoteric

    英 [,esə'terɪk; ,iːsə-] 美 [,ɛsə'tɛrɪk]

    adj. 秘传的；限于圈内人的；难懂的
```

### Conditionals

-   if

    -   if cond ... end,
    -   if cond ... else ... end
    -   if conf ... elsif conf ... end

    In most languages, the if conditional is a statement. In Ruby,
    however, **everything is an expression**, even the control structures
    that are commonly called statements. The return value of an if
    “statement” (i.e., the value that results from evaluating an if
    expression) is the value of the last expression in the code that
    was executed, or nil if no block of code was executed.

-   if As a Modifier

    ... if cond （不能换行）

    ```
    y = x.invert if x.respond_to? :invert           # 可能不 evaluate
    y = (x.invert if x.respond_to? :invert)         # 总是 evaluate，可能 nil
    ```

    ```
    if cond             begin               (
        ...                 ...                 ...
        ...                 ...                 ...
    end                 end if cond         ) end if cond
    ```

-   unless

    ```
    unless cond
        ...
    end

    unless cond
        ...
    else
        ...
    end

    ... unless cond
    ```

-   case

    ```
    case var
    when cond then ...
    when cond then ...
    else
        ...
    end
    ```

-   The ?: Operator

### Loops

-   while and until

    ```
    while cond do
        ...
    end

    until cond do
        ...
    end

    begin
        ...
    end until cond

    (
        ...
    ) until cond
    ```

-   while and until As Modifiers

-   the for/in Loop

    ```
    for var in collection [do]
        ...
    end

    for key,value in hash
        ...
    end
    ```

### Iterators and Enumerable Objects

-   tap

    ```
    chars = "hello world"   .tap    { |x| puts "original object: #{x.inspect}" }
        .each_char          .tap    { |x| puts "each_char returns: #{x.inspect}" }
        .to_a               .tap    { |x| puts "to_a returns: #{x.inspect}" }
        .map {|c| c.succ }  .tap    { |x| puts "map returns: #{x.inspect}"  }
        .sort               .tap    { |x| puts "sort returns: #{x.inspect}" }
    ```

-   Enumerable Objects

    ```
    File.open(filename) do |f|
        f.each_with_index do |line,number|
            print "#{number}: #{line}"
        end
    end
    ```

    -   collect (map)
    -   select (类似“filter”的概念)
    -   reject (和 select 相反)
    -   inject (有点像 c++ 的 partial_sum)

        ```ruby
        data = [2, 5, 3, 4]
        sum = data.inject {|sum, x| sum + x }               # => 14 (2+5+3+4)
        floatprod = data.inject(1.0) {|p,x| p*x }           # => 120.0 (1.0*2*5*3*4)
        max = data.inject {|m,x| m>x ? m : x }              # => 5 (largest element)
        ```

-   Writing Custom Iterators

    yield

    ```
    def sequence(n, m, c)
        i = 0
        while(i < n)
            yield m*i + c
            i += 1
        end
    end

    sequence(3, 5, 1) {|y| puts y }
    ```

    Nomenclature: yield and Iterators -<

    :   ```
        nomenclature

            英 [nə(ʊ)'meŋklətʃə; 'nəʊmən,kleɪtʃə] 美 [ˈnomənˌkletʃɚ]

            n. 命名法；术语
        ```

        A method such as sequence that expects a block and invokes it
        multiple times is called an iterator because it looks and
        behaves like a loop. This may be confusing if you are used to
        languages like Java in which iterators are objects. In Java,
        the client code that uses the iterator is in control and
        “pulls” values from the iterator when it needs them.  In Ruby,
        the iterator method is in control and “pushes” values to the
        block that wants them.

        This nomenclature issue is related to the distinction between
        “internal iterators” and “external iterators,” which is
        discussed later in this section.

If a method is invoked without a block, it is an error for that method to yield,
because there is nothing to yield to. Sometimes you want to write a method
that yields to a block if one is provided but takes some default action (other
than raising an error) if invoked with no block. To do this, use block_given?
to determine whether there is a block associated with the invocation.
block_given? , and its synonym iterator? , are Kernel methods, so they act like
global functions. Here is an example:

```
def sequence(n, m, c)
    i, s = 0, []
    while(i < n)
        y = m*i + c
        yield y if block_given?
        s << y
        i += 1
    end
    s
end
```

-   Enumerators

```
to_enum
enum_for

# Call this method with an Enumerator instead of a mutable array.
# This is a useful defensive strategy to avoid bugs.
process(data.to_enum) # Instead of just process(data)

# iterator methods: :each_char, :each_byte, :each_line
s = "hello"
s.enum_for(:each_char).map {|c| c.succ }    # => ["i", "f", "m", "m", "p"]
s.chars.map { ... }

for line, number in text.each_line.with_index
    print "#{number+1}: #{line}"
end
```

-   External Iterators

    ```
    iterator = 9.downto(1)                      # An enumerator as external iterator
    begin                                       # So we can use rescue below
        print iterator.next while true          # Call the next method repeatedly
    rescue StopIteration                        # When there are no more values
        puts "...blastoff!"                     # An expected, nonexceptional condition
    end
    ```

-   Internal versus External Iterators

    The “gang of four” define and contrast internal and external iterators
    quite clearly in their design patterns book:

    >   A fundamental issue is deciding which party controls the iteration, the
    >   iterator or the client that uses the iterator. When the client controls
    >   the iteration, the iterator is called an external iterator, and when
    >   the iterator controls it, the iterator is an internal iterator. Clients
    >   that use an external iterator must advance the traversal and request
    >   the next element explicitly from the iterator. In contrast, the client
    >   hands an internal iterator an operation to perform, and the iterator
    >   applies that operation to every element....
    >
    >   External iterators are more flexible than internal iterators. It’s easy
    >   to compare two collections for equality with an external iterator, for
    >   example, but it’s practi- cally impossible with internal iterators....
    >   But on the other hand, internal iterators are easier to use, because
    >   they define the iteration logic for you.

    In Ruby, iterator methods like each are internal iterators; they control
    the iteration and “push” values to the block of code associated with the
    method invocation. Enumerators have an each method for internal iteration,
    but in Ruby 1.9 and later, they also work as external iterators—client code
    can sequentially “pull” values from an enumerator with next.

### Blocks

-   `{}`, `begin ... end`
-

```
# The block takes two words and "returns" their relative order
words.sort! {|x,y| y <=> x }
```

```
array.collect do |x|
    next 0 if x == nil          # return x
    next x, x*x                 # return two values
end

# or without next
array.collect do |x|
    if x == nil
        0
    else
        [x, x*x]
    end
end
```

-   Blocks and Variable Scope: `hash.each {|key,value; i,j,k| ... }`
-   Passing Arguments to a Block:

    ```
    hash.each_pair {|k,v| ... }         # k,v = key, value
    hash.each {|k,v| ... }              # k,v = [key, value]

    def two; yield 1,2; end # An iterator that yields two values
    two {|x| p x }          # Ruby 1.8: warns and prints [1,2],
    two {|x| p x }          # Ruby 1.9: prints 1, no warning
    two {|*x| p x }         # Either version: prints [1,2]; no warning
    two {|x,| p x }         # Either version: prints 1; no warning

    [1,2,3].each {|x,y=10| print x*y }
    [1,2,3].each &->(x,y=10) { print x*y }      # Prints "102030"
    ```

### Altering Control Flow

-   return,

    主要用于 return permaturely

-   break,

    ```
    break if cond
    ```

    break with a value

    Recall that all syntactic constructs in Ruby are expressions, and all can
    have a value.  The break statement can specify a value for the loop or
    iterator it is breaking out of.  The break keyword may be followed by an
    expression or a comma-separated list of expressions. If break is used with
    no expression, then the value of the loop expression, or the return value
    of the iterator method, is nil . If break is used with a single expression,
    then the value of that expression becomes the value of the loop expression
    or the return value of the iterator. And if break is used with multiple
    expressions, then the values of those expressions are placed into an array,
    and that array becomes the value of the loop expression or the return value
    of the iterator.

    By contrast, a while loop that terminates normally with no break always has
    a value of nil. The return value of an iterator that terminates normally
    is defined by the iterator method. Many iterators, such as times and each ,
    simply return the object on which they were invoked.

-   next,

    ```ruby
    while(line = gets.chop)
        next if line[0,1] == "#"
        puts eval(line)
        # Control goes here when the next statement is executed
    end
    ````

-   redo,

    ```
    while(i < 3)
        # Control returns here when redo is executed
        print i
        i += 1
        redo if i == 3
    end
    ```

-   retry,

    retry 会重启整个 iteration

-   throw/catch,

### Exceptions and Exception Handling

The Ruby Exception Class Hierarchy

define new exception classes

class MyError < StandardError; end

```
raise "msg"
raise RuntimeError, "msg"
raise RuntimeError.new("msg")
raise RuntimeError.exception("msg")
raise RuntimeError
```

Handling Exceptions with rescue

```
begin
    ...
rescue
    ...
end

begin                                       # Handle exceptions in this block
    x = factorial(-1)                       # Note illegal argument
rescue => ex                                # Store exception in variable ex
    puts "#{ex.class}: #{ex.message}"       # Handle exception by printing message
end                                         # End the begin/rescue block
```

Handling exceptions by type

```
rescue Exception
rescue ArgumentError => e
# 可以 rescue 几遍
```

-   Propagation of exceptions
-   The else Clause
-   The ensure Clause (类似于 Java 的 finally）

### BEGIN and END

和 awk 一样

```
BEGIN {
    ...
}

END {
    ...
}

10.times {BEGIN { puts "loop" }}    # Only printed once

if (true)
    ...begin...                     # 执行 (一次)
    ...end...                       # 执行
else
    ...begin...                     # 执行
    ...end...                       # 不执行
end
```

The Kernel method at_exit provides an alternative to the END statement; it
registers a block of code to be executed just before the interpreter exits.

### Threads, Fibers, and Continuations

-   Threads for Concurrency

    ```
    threads = filenames.map do |f|
        Thread.new { File.read(f) }
    end

    threads.map { |t| t.value }
    ```

-   Fibers for Coroutines

    fiber 就是 lightweight thread，或者叫 coroutines （more accurately，semi-coroutines）

    The most common use for coroutines is to **implement generators**: objects that
    can compute a partial result, yield the result back to the caller, and save
    the state of the computation so that the caller can resume that computation
    to obtain the next result. In Ruby, the Fiber class is used to enable the
    automatic conversion of internal iterators, such as the each method, into
    enumerators or external iterators.

    Note that fibers are an advanced and relatively obscure control structure;
    the majority of Ruby programmers will never need to use the Fiber class
    directly. If you have never programed with coroutines or generators before,
    you may find them difficult to understand at first. If so, study the
    examples carefully and try out some examples of your own.

    ```
    f = Fiber.new {                     # Line 1:     Create a new fiber
        puts "Fiber says Hello"         # Line 2:
        Fiber.yield                     # Line 3:     goto line 9
        puts "Fiber says Goodbye"       # Line 4:
    }                                   # Line 5:     goto line 11
                                        # Line 6:
    puts "Caller says Hello"            # Line 7:
    f.resume                            # Line 8:     goto line 2
    puts "Caller says Goodbye"          # Line 9:
    f.resume                            # Line 10:    goto line 4
                                        # Line 11:
    ```

    It is worth noting here that the “yielding” performed by Fiber.yield is
    completely different than the yielding performed by the yield statement.
    Fiber.yield yields control from the current fiber back to the caller that
    invoked it. The yield statement, on the other hand, yields control from an
    iterator method to the block associated with the method.

    todo, p168

    -   Fiber arguments and return values
    -   Implementing generators with fibers
    -   Advanced fiber features

        ```
        require 'fiber'
        ```

-   Continuations

## Chapter 6 Methods, Procs, Lambdas, and Closures

-   method
-   invocation

### Defining Simple Methods

-   singleton

    ```
    o = "message"
    def o.printme           # Define a singleton method for this object
        puts self
    end
    o.printme               # Invoke the singleton
    ```

-   `undef`

### Method Names

-   Method Name Resolution

-   Method Aliases

    ```
    alias aka also_known_as
    ```

    其实像是一个 variable 指向一个 reference

### Methods and Parentheses

Optional parentheses

Define method 的时候，可以 omit paren （通常大家都这样。）

Required Parentheses

### Method Arguments

-   Parameter Defaults

    ```
    def prefix(s, len=1)
        s[0,len]
    end

    def suffix(s, index=s.size-1)
        s[index, s.size-index]
    end

    def append(x,a=[])
        a << x
    end
    ```

-   Variable-Length Argument Lists and Arrays

    ```
    def max(first, *rest)
        rest.each { ... }
    end
    ```

-   Mapping Arguments to Parameters
-   Hashes for Named Arguments
-   Block Arguments: `{ |x| ... }`

    -   One of the features of blocks is their anonymity
    -   add a final argument to your method, and
        prefix the argument name with an ampersand (`&`)

        ```
        def sequence3(n, m, c, &b)  # Explicit argument to get block as a Proc
            i = 0
            while(i < n)
                b.call(i*m + c)     # Invoke the Proc with its call method
                i += 1
            end
        end
        ```

-   Procs and Lambdas

todo, p189

### Procs and Lambdas

block 不是 obj，所以不能修改。一个 object，
像一个 block，称之为 proc 或者 lambda。

-   proc: block-like behavior
-   lambda: method-like behavior
-   proc 和 lambda 都是 Proc 类的 instance

The subsections that follow explain  -<

:   -   How to create Proc objects in both proc and lambda forms
    -   How to invoke Proc objects
    -   How to determine how many arguments a Proc expects
    -   How to determine if two Proc objects are the same
    -   How procs and lambdas differ from each other

-   Creating Procs

    ```
    def makeproc(&p)    # conv block to proc
        p
    end

    adder = makeproc {|x,y| x+y }

    sum = adder.call(2,2)
    ```

    -   Proc.new

        ```
        p = Proc.new {|x,y| x+y }
        ```

        ```
        def invoke(&b)                  def invoke
            b.call                          Proc.new.call
        end                             end
        ```

    -   Kernel.lambda

        ```
        is_positive = lambda {|x| x>0 }
        ```

    -   Lambda Literals

        ```
        succ = lambda {|x| x+1 }
        # >= ruby 1.9
        succ = ->(x){ x+1 }

        succ.call(2)

        # This lambda takes 2 args and declares 3 local vars
        f = ->(x,y; i,j,k) { ... }

        # with defaults
        zoom = ->(x,y,factor=2){ [x*factor, y*factor] }

        # omit paren
        succ = ->x { x+1 }
        f = -> x,y; i,j,k { ... }
        zoom = ->x,y,factor=2 { [...] }
        ```

        ```
        def compose(f,g)
            ->(x) { f.call(g.call(x)) }
        end

        succOfSquare = compose(->x{x+1}, ->x{x*x})
        succOfSquare.call(4)
        ```

        ```
        data.sort {|a,b| b-a }              # the block version
        data.sort &->(a,b){ b-a }           # the lambda version
        ```

-   Invoking Procs and Lambdas

    ```
    # f = Proc.new {|x,y| 1.0/(1.0/x+1.0/y) }
    z = f.call(x,y)
    z = f[x,y]
    z = f.(x,y)             # ruby >= 1.9
    ```

-   The Arity of a Proc

    Arity: n. 参数数量

    The arity of a proc or lambda is the number of arguments it expects.
    (The word is derived from the “ary” suffix of unary, binary, ternary, etc.)

    ```
    lambda{||}.arity                # 0
    lambda{|x| x}.arity             # 1
    lambda{|x,y| x+y}.arity         # 2

    lambda {|*args|}.arity          # -1
    lambda {|first, *rest|}.arity   # -2
    ```

-   Proc Equality

    always false unless `q = p.dup` (p == q: true, but `p.__id__ == q.__id__`: false)

-   How Lambdas Differ from Procs

    `.lambda?`

    -   return

        ```
        def test
            puts "entering method"
            1.times { puts "entering block"; return }   # Makes test method return
            puts "exiting method"                       # This line is never executed
        end
        test
        ```

        ```
        def test
            puts "entering method"
            p = Proc.new { puts "entering proc"; return }
            p.call                  # Invoking the proc makes method return
            puts "exiting method"   # This line is never executed
        end
        test
        ```

        ```
        def procBuilder(message)                # Create and return a proc
            Proc.new { puts message; return }   # return returns from procBuilder
            # but procBuilder has already returned here!
            end
        def test
            puts "entering method"
            p = procBuilder("entering proc")
            p.call                  # Prints "entering proc" and raises LocalJumpError!
            puts "exiting method"   # This line is never executed
        end
        test
        ```

        lambda 不太一样：

        ```
        def test
            puts "entering method"
            p = lambda { puts "entering lambda"; return }
            p.call                  # Invoking the lambda does not make the method return
            puts "exiting method"   # This line *is* executed now
        end
        test
        ```

        ```
        def lambdaBuilder(message)          # Create and return a lambda
            lambda { puts message; return } # return returns from the lambda
        end
        def test
            puts "entering method"
            l = lambdaBuilder("entering lambda")
            l.call                  # Prints "entering lambda"
            puts "exiting method"   # This line is executed
        end
        test
        ```

    -   breaks

    -   Other control-flow statements

    -   Argument passing to procs and lambdas

        -   proc: use nil
        -   lambda: wrong!

### Closures

closures: closes over

In Ruby, procs and lambdas are closures. The term “closure” comes from the
early days of computer science; it refers to an object that is both an
invocable function and a variable binding for that function. When you create a
proc or a lambda, the resulting Proc object holds not just the executable block
but also bindings for all the variables used by the block.

```
def multiplier(n)
    lambda {|data| data.collect{|x| x*n } }
end
doubler = multiplier(2)
puts doubler.call([1,2,3]) # Prints 2,4,6
```

-   Closures and Shared Variables

    ```
    def accessor_pair(initialValue=nil)
        value = initialValue
        getter = lambda { value }
        setter = lambda {|x| value = x }
        return getter,setter
    end

    getX, setX = accessor_pair(0)
    puts getX[]
    setX[10]
    puts getX[]
    ```

-   Closures and Bindings

    ```
    def multipliers(*args)
        x = nil
        args.map {|x| lambda {|y| x*y }}
    end
    double,triple = multipliers(2,3)
    puts double.call(2)
    ```

-   Closures and Bindings

    A Binding object

    -   providing no interesting methods of its own
    -   providing a context in which to evaluate a string of Ruby code

    ```
    def multiplier(n)
        lambda {|data| data.collect{|x| x*n } }
    end
    doubler = multiplier(2)
    puts doubler.call([1,2,3])      # 2,4,6
    ```

    bind!:

    ```
    eval("n=3", doubler.binding)            # 如果 doubler 是 proc 的话，用 eval("n=3", doubler.binding)
    # ruby >= 1.9
    doubler.binding.eval("n=3")
    ```

    ```
    puts doubler.call([1,2,3])  # 3,6,9
    ```

### Method Objects

Ruby has powerful metaprogramming (or reflection) capabilities, and methods can
actually be represented as instances of the Method class.

```
m = 0.method(:succ)             # A Method representing the succ method of Fixnum 0
```

-   Unbound Method Objects

    就是没有 bound 的 method，可以从随意一个 obj 获得。

    ```
    unbound_plus = Fixnum.instance_method("+")  # or `public_instance_method`

    # bind & call
    plus_2 = unbound_plus.bind(2)
    sum = plus_2.call(2)                        # => 4
    ```

### Functional Programming

```
mean = a.inject {|x,y| x+y } / a.size
sumOfSquares = a.map{|x| (x-mean)**2 }.inject{ |x,y| x+y }
standDevision = Math.sqrt(sumOfSquares/(a.size-1))
```

-   Applying a Function to an Enumerable

    ```
    module Functional
        def apply(enum)
            enum.map &self
        end
        alias | apply

        def reduce(enum)
            enum.inject &self
        end
        alias <= reduce
    end

    class Proc; include Functional; end
    class Method; include Functional; end
    ```

    ```
    sum= lamdba {|x,y| x+y }
    mean = (sum<=a)/a.size
    deviation = lambda{|x| x-mean }
    square = lambda{|x| x*x }
    standDeviation = Math.sqrt( (sum<=square|(deviation|a))/(a.size-1) )
    ```

-   Composing Functions

    ```
    module Functional
        def compose(f)
            if self.respond_to?(:arity) && self.arity == 1
                lambda {|*args| self[f[*args]] }
            else
                lambda {|*args| self[*f[*args]] }       # splash
            end
        end
        alias * compose
    end
    ```

    ```
    #   <=  reduce
    #   *   compose
    #   |   apply
    standardDeviation = Math.sqrt((sum<=square*deviation|a)/(a.size-1))

    # 这里其实还依赖了 mean，不好
    ```

-   Partially Applying Functions

    ```
    module Functional
        def apply_head(*first)
            lambda {|*rest| self[*first.concat(rest)]}
        end
        alias >> apply_head         # g = f >> 2 -- set first arg to 2
        def apply_tail(*last)
            lambda {|*rest| self[*rest.concat(last)]}
        end
        alias << apply_tail         # g = f << 2 -- set last arg to 2
    end
    ```

    ```
    difference = lambda {|x,y| x-y }
    deviation  = difference<<mean
    ```

-   Memoizing Functions

    ```
    module Functional
        def memoize
            cache = {}
            lambda {|*args|
                unless cache.has_key?(args)
                    cache[args] = self[*args]   # compute and cache, and return
                end
                cache[args]                     # retrieve from cache
            }                                   # return the lambda function
        end
        alias +@ memoize                        # cached_f = +f
    end
    ```

    ```
    factorial = lambda {|x| return 1 if x==0; x*factorial[x-1]; }.memoize
    factorial = +lambda {|x| return 1 if x==0; x*factorial[x-1]; }
    ```

-   Symbols, Methods, and Procs

    Ruby 1.9 adds a useful to_proc method to the Symbol class. This method
    allows a symbol to be prefixed with `&` and passed as a block to an iterator.

    这个很有用。

    ```
    [1,2,3].map(&:succ)             # => [2,3,4]
    # 等价于：
    [1,2,3].map {|n| n.succ }
    ```

    `:succ` 是一个 symbol，`&:succ` 是一个 symbol prefixed with &，所以整体就是一个 block

    Symbol.to_proc 的 implementation：

    ```
    class Symbol
        def to_proc
            lambda {|receiver, *args| receiver.send(self, *args)}
            # or
            # lambda {|receiver, *args| receiver.method(self)[*args]}
        end
    end
    ```

    ```
    class Module
        alias [] instance_method
    end

    String[:reverse].bind("hello").call         # => "olleh"

    class UnboundMethod
        alias [] bind
    end

    String[:reverse]["hello"][]                 # => "olleh"
    ```

    todo, p210

Chapter 7 Classes and Modules
    Defining a Simple Class
    Method Visibility: Public, Protected, Private
    Subclassing and Inheritance
    Object Creation and Initialization
    Modules
    Loading and Requiring Modules
    Singleton Methods and the Eigenclass
    Method Lookup
    Constant Lookup

Chapter 8 Reflection and Metaprogramming
    Types, Classes, and Modules
    Evaluating Strings and Blocks
    Variables and Constants
    Methods
    Hooks
    Tracing
    ObjectSpace and GC
    Custom Control Structures
    Missing Methods and Missing Constants
    Dynamically Creating Methods
    Alias Chaining
    Domain-Specific Languages

Chapter 9 The Ruby Platform
    Strings
    Regular Expressions
    Numbers and Math
    Dates and Times
    Collections
    Files and Directories
    Input/Output
    Networking
    Threads and Concurrency

Chapter 10 The Ruby Environment
    Invoking the Ruby Interpreter
    The Top-Level Environment
    Practical Extraction and Reporting Shortcuts
    Calling the OS
    Security

Colophon

---

-   [4ker/ruby-style-guide: A community-driven Ruby coding style guide](https://github.com/4ker/ruby-style-guide)
