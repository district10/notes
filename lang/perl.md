---
title: Learning Perl
...

Learning Perl
=============

<!--
按照笔者自己的经历，从对Perl一无所知到可以上手干活，可以从小骆驼书——Learning
Perl (豆瓣)开始。快速浏览加实践下书上代码，两天就可以读个大概。

不过小骆驼书只覆盖了Perl Programming最基础的一部分知识，当你需要用Perl做面对对
象或者大型程序编程时，有必要去读一下神兽书——Intermediate Perl (豆瓣)。

这两本书应该能应付大部分的Perl Programming的需求，建议题主接下来应该去做大量的
实践。在实践过程中，有两个网站是肯定要经常打交道的。这两个网站，一个是The CPAN
Search Site，一个是Perl programming documentation。

前者就不介绍了，相信学Perl的童鞋都熟悉的。后者除了做为一个Perl内建函数的Ref网站
，还有大量介绍语言特性和细节的文章，非常值得一读，比如：

    Language reference
    Pragmas - http://perldoc.perl.org
    Utilities - http://perldoc.perl.org
    Internals and C language interface

以上链接中的内容，如果题主都能理解并且实践过，我相信可以算得上是一个Perl专家了。

笔者建议实践过一段时间后，回头再重新细看小骆驼、神兽书，会有不同的体悟。那时若
有兴趣，还可以把下面这些书加入你的Read List:

    Advanced Perl Programming (豆瓣)
    Mastering Perl (豆瓣)
    Perl Best Practices (豆瓣)

作者：蔡腾纬
链接：https://www.zhihu.com/question/19647485/answer/16093948
来源：知乎
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
-->

## Introduction

<div class="tzx-fright">
[![](https://img1.doubanio.com/mpic/s6569264.jpg)](https://book.douban.com/subject/6560927/)
</div>

Perl is sometimes called the "Practical Extraction and Report Language",
although it has also been called a "Pathologically Eclectic Rubbish Lister",
among other expansions. It's actually a **backronym**, not an **acronym**,
since Larry Wall, Perl's creator, came up with the name first and the expansion
later. That's why "Perl" isn't in all caps.  There's no point in arguing which
expansion is correct: Larry endorses both.  You may also see "perl" with a
lowercase *p* in some writing. In general, "Perl" with a capital *P* refers to
the language and "perl" with a lowercase *p* refers to the actual interpreter
that compiles and runs your programs. In the house style, we write the names of
programs like perl.

CPAN is the Comprehensive Perl Archive Network, your one-stop shopping for
Perl.  It has the source code for Perl itself, ready-to-install ports of Perl
to all sorts of non-Unix systems, examples, documentation, extensions to Perl,
and archives of messages about Perl. In short, CPAN is comprehensive.

`perldoc`{.bash}

Programming Perl

:   ```perl
    #!/usr/bin/perl
    print "Hello, world!\n";
    ```

    `.pl`, `.plx` (mening PerL eXecutable)

    ```perl
    #!/usr/bin/env perl

    use 5.010;          # Perl 5.10

    say "Hello World!";
    ```

    ```perl
    #!/usr/bin/perl
    @lines = `perldoc -u -f atan2`;
    foreach (@lines) {
        s/\w<([^>]+)>/\U$1/g;
        print;
    }
    ```

## Scalar Data

Larry: `$calar` & `@rray`.

Literals

:   ```perl
    1.25
    255.000
    255.0
    7.25e45         # 7.25 times 10 to the 45th power (a big number)
    –6.5e24         # negative 6.5 times 10 to the 24th
                    # (a big negative number)
    –12e–24         # negative 12 times 10 to the –24th
                    # (a very small negative number)
    –1.2E–23        # another way to say that the E may be uppercase

    0377            # 377 octal, same as 255 decimal
    0xff            # FF hex, also 255 decimal
    0b11111111      # also 255 decimal

    0x1377_0B77
    0x50_65_72_7C

    2 + 3           # 2 plus 3, or 5
    5.1 – 2.4       # 5.1 minus 2.4, or 2.7
    3 * 12          # 3 times 12 = 36
    14 / 2          # 14 divided by 2, or 7
    ```

Single-Quoted String Literals

:   ```perl
    use utf8;

    'barney'
    ''                           # the null string (no characters)
    '⅚∞☃☠'                      # Some "wide" Unicode characters
    'Don\'t let an apostrophe end this string prematurely!'
    'the last character is a backslash: \\'
    'hello\n'
    'hello
    there'                      # hello, newline, there (11 characters total)
    '\'\\'                      # single quote followed by backslash
    ```

Double-Quoted String Literals

:   ```perl
    "barney"                   # just the same as 'barney'
    "hello world\n"            # hello world, and a newline
    "The last character of this string is a quote mark: \""
    "coke\tsprite"             # coke, a tab, and sprite

    # character code point
    "\x{2668}"                 # Unicode HOT SPRINGS (♨, 温泉)
    ```

| Construct | Meaning |
| :---: | :---- |
| `\n` | Newline |
| `\r` | Return |
| `\t` | Tab |
| `\f` | Formfeed |
| `\b` | Backspace |
| `\a` | Bell |
| `\e` | Escape (ASCII escape character) |
| `\007` | Any octal ASCII value (here,  007 = bell) |
| `\x7f` | Any hex ASCII value (here,  7f = delete) |
| `\x{2744}` | Any hex Unicode code point (here,  U+2744 = snowflake) |
| `\cC` | A “control” character (here, Ctrl-C) |
| `\\` | Backslash |
| `\"` | Double quote |
| `\l` | Lowercase next letter |
| `\L` | Lowercase all following letters until `\E` |
| `\u` | Uppercase next letter |
| `\U` | Uppercase all following letters until `\E` |
| `\Q` | Quote nonword characters by adding a backslash until `\E` |
| `\E` | End `\L`, `\U` , or  `\Q` |

String Concatenation

:   ```perl
    "hello" . "world"           # same as "helloworld"
    "hello" . ' ' . "world"     # same as 'hello world'
    'hello world' . "\n"        # same as "hello world\n"

    "fred" x 3                  # is "fredfredfred"
    "barney" x (4+1)            # is "barney" x 5
    5 x 4.8                     # is really "5" x 4, which is "5555"

    0377                        # that's octal for 255 decimal
    '0377'                      # that's 377 decimal
    "Z" . 5 * 7                 # same as "Z" . 35, or "Z35"
    ```

warnings & diagnostics

:   ```perl
    #!/usr/bin/perl

    use warnings;
    ```

    or in command line:
      ~ `perl -w my_program`{.bash}, shebang: `#!/usr/bin/perl -w`{.bash}

    ```perl
    #!/usr/bin/perl

    use diagnostics;
    ```

    module: `perl -Mdiagnostics ./my_program`{.bash}

    ```perl
    $résumé
    $coördinate
    ```

    ```perl
    print "The answer is ", 6 * 7, ".\n";

    $what = "brontosaurus steak";
    $n = 3;
    print "fred ate $n $whats.\n";      # there is no $whats
    print "fred ate $n ${what}s.\n";    # now uses $what
    print "fred ate $n $what" . "s.\n"; # another way to do it
    print 'fred ate ' . $n . ' ' . $what . "s.\n"; # same but odd

    $alef  = chr( 0x05D0 );
    $alpha = chr( hex('03B1') );
    $omega = chr( 0x03C9 );

    $code_point = ord( '囧' );

    # That might be more work than interpolating them directly by putting the
    # hexadecimal representation in  \x{} :
    "\x{03B1}\x{03C9}"
    ```

    ```perl
    # gt, eq
    if ($name gt 'fred') {
        print "'$name' comes after 'fred' in sorted order.\n";
    } else {
        print "'$name' does not come after 'fred'.\n";
        print "Maybe it's the same string, in fact.\n";
    }
    ```

    ```perl
    chomp($text = <STDIN>);

    $count = 0;
    while ($count < 10) {
        $count += 2;
        print "count is now $count\n"; # Gives values 2 4 6 8 10
    }

    $madonna = <STDIN>;
    if ( defined($madonna) ) {
        print "The input was $madonna";
    } else {
        print "No input available!\n";
    }
    ```

## List and Arrays

list and arrays

:   ```perl
    $blank = $fred[ 142_857 ];        # unused array element gives undef
    $blanc = $mel;                    # unused scalar $mel also gives undef

    $rocks[0] = 'bedrock';
    $rocks[1] = 'slate';
    $rocks[2] = 'lava';
    $rocks[3] = 'crushed rock';
    $rocks[99] = 'schist';            # now there are 95 undef elements

    $end = $#rocks;                   # 99, which is the last element's index
    $number_of_rocks = $end + 1;      # okay, but you'll see a better way later
    $rocks[ $#rocks ] = 'hard rock';  # the last rock

    $rocks[ –1 ] = 'hard rock';       # easier way to do that last example
    $dead_rock = $rocks[–100];        # gets 'bedrock'
    $rocks[ –200 ] = 'crystal';       # fatal error!

    (1, 2, 3)                         # list of three values 1, 2, and 3
    (1, 2, 3,)                        # the same, okay to add extra ','
    ("fred", 4.5)                     # two values, "fred" and 4.5
    ( )                               # empty list - zero elements
    (1..100)                          # list of 100 integers

    (1..5)                            # same as (1, 2, 3, 4, 5)
    (1.7..5.7)                        # same thing; both values are truncated

    (5..1)                            # empty list; .. only counts "uphill"

    (0, 2..6, 10, 12)                 # same as (0, 2, 3, 4, 5, 6, 10, 12)
    ($m..$n)
    (0..$#rocks)                      # indices
    ```

the qw Shortcut

:   ```perl
    qw( fred barney betty wilma dino )

    qw! fred barney betty wilma dino !
    qw/ fred barney betty wilma dino /
    qw# fred barney betty wilma dino # # like in a comment!
    qw( fred barney betty wilma dino )
    qw{ fred barney betty wilma dino }
    qw[ fred barney betty wilma dino ]
    qw< fred barney betty wilma dino >

    # easier to read
    qw(
        fred
        barney
        betty
        wilma
        dino
    )
    ```

list (array)

:   ```perl
    ($fred, $barney, $dino) = ("flintstone", "rubble", undef);

    ($fred, $barney) = ($barney, $fred);                       # swap
    ($betty[0], $betty[1]) = ($betty[1], $betty[0]);

    ($fred, $barney) = qw< flintstone rubble slate granite >;  # ignore
    ($wilma, $dino) = qw[flintstone];                          # undef
    ```

    ```perl
    ($rocks[0], $rocks[1]) = qw/talc mica/;

    @rocks = qw/ bedrock slate lava /;
    @tiny = ( );                                # the empty list
    @giant = 1..1e5;                            # a list with 100,000 elements
    @stuff = (@giant, undef, @giant);           # a list with 200,001 elements
    $dino = "granite";
    @quarry = (@rocks, "crushed rock", @tiny, $dino);
    ```

    ```perl
    @array = 5..9;
    $fred = pop(@array);    # $fred gets 9, @array now has (5, 6, 7, 8)
    $barney = pop @array;   # $barney gets 8, @array now has (5, 6, 7)
    pop @array;             # @array now has (5, 6). (The 7 is discarded.)

    push(@array, 0);        # @array now has (5, 6, 0)
    push @array, 8;         # @array now has (5, 6, 0, 8)
    push @array, 1..10;     # @array now has those 10 new elements
    @others = qw/ 9 0 2 1 0 /;
    push @array, @others;   # @array now has those five new elements (19 total)
    ```

    ```perl
    @array = qw# dino fred barney #;
    $m = shift(@array);     # $m gets "dino", @array now has ("fred", "barney")
    $n = shift @array;      # $n gets "fred", @array now has ("barney")
    shift @array;           # @array is now empty
    $o = shift @array;      # $o gets undef, @array is still empty
    unshift(@array, 5);     # @array now has the one-element list (5)
    unshift @array, 4;      # @array now has (4, 5)
    @others = 1..3;
    unshift @array, @others; # @array now has (1, 2, 3, 4, 5)
    ```

    ```perl
    @array = qw( pebbles dino fred barney betty );
    @removed = splice @array, 2; # remove everything after fred
                                 # @removed is qw(fred barney betty)
                                 # @array is qw(pebbles dino)

    @array = qw( pebbles dino fred barney betty );
    @removed = splice @array, 1, 2; # remove dino, fred
                                    # @removed is qw(dino fred)
                                    # @array is qw(pebbles barney betty)

    @array = qw( pebbles dino fred barney betty );
    @removed = splice @array, 1, 2, qw(wilma); # remove dino, fred
                                               # @removed is qw(dino fred)
                                               # @array is qw(pebbles wilma
                                               # barney betty)

    @array = qw( pebbles dino fred barney betty );
    @removed = splice @array, 1, 0, qw(wilma); # remove nothing
                                               # @removed is qw()
                                               # @array is qw( pebbles wilma
                                               #    dino fred barney betty )
    ```

    总结：删除范围是 `[i, j]`，插入是在 i 前面（新的 *i*th）。

limestone `['laɪmston]` 石灰岩

Interpolating Arrays into Strings

:   ```perl
    @rocks = qw{ flintstone slate rubble };
    print "quartz @rocks limestone\n";
    # prints "quartz flintstone slate rubble limestone"

    $email = "fred\@bedrock.edu"; # Correct
    $email = 'fred@bedrock.edu'; # Another way to do that

    @fred = qw(hello dolly);
    $y = 2;
    $x = "This is $fred[1]'s place"; # "This is dolly's place"
    $x = "This is $fred[$y-1]'s place"; # same thing

    @fred = qw(eating rocks is wrong);
    $fred = "right"; # we are trying to say "this is right[3]"
    print "this is $fred[3]\n"; # prints "wrong" using $fred[3]
    print "this is ${fred}[3]\n"; # prints "right" (protected by braces)
    print "this is $fred"."[3]\n"; # right again (different string)
    print "this is $fred\[3]\n"; # right again (backslash hides it)
    ```

The foreach Control Structure

:   ```perl
    foreach $rock (qw/ bedrock slate lava /) {
        print "One rock is $rock.\n"; # Prints names of three rocks
    }

    @rocks = qw/ bedrock slate lava /;
    foreach $rock (@rocks) {
        $rock = "\t$rock"; # put a tab in front of each element of @rocks
        $rock .= "\n"; # put a newline on the end of each
    }
    print "The rocks are:\n", @rocks; # Each one is indented, on its own line
    ```

    ```perl
    $rock = 'shale';
    @rocks = qw/ bedrock slate lava /;
    foreach $rock (@rocks) {
        ...
    }
    print "rock is still $rock\n"; # 'rock is still shale'
    ```

Perl's Favorite Default: `$_`

:   ```perl
    foreach (1..10) { # Uses $_ by default
        print "I can count to $_!\n";
    }

    # the reverse operator
    @fred = 6..10;
    @barney = reverse(@fred);   # gets 10, 9, 8, 7, 6
    @wilma = reverse 6..10;     # gets the same thing, without the other array
    @fred = reverse @fred;      # puts the result back into the original array

    # the sort operator
    @rocks = qw/ bedrock slate rubble granite /;
    @sorted = sort(@rocks);      # gets bedrock, granite, rubble, slate
    @back = reverse sort @rocks; # these go from slate to bedrock
    @rocks = sort @rocks;        # puts sorted result back into @rocks
    @numbers = sort 97..102;     # gets 100, 101, 102, 97, 98, 99

    # the each operator
    use 5.012;

    @rocks = qw/ bedrock slate rubble granite /;
    while( my( $index, $value ) = each @rocks ) {
        say "$index: $value";
    }

    @rocks = qw/ bedrock slate rubble granite /;
    foreach $index ( 0 .. $#rocks ) {
        print "$index: $rocks[$index]\n";
    }
    ```

Scalar and List Context

:   ```perl
    42 + something # The something must be a scalar
    sort something # The something must be a list
    ```

    ```perl
    @people = qw( fred barney betty );
    @sorted = sort @people; # list context: barney, betty, fred
    $number = 42 + @people; # scalar context: 42 + 3 gives 45

    @list = @people;        # a list of three people
    $n = @people;           # the number 3
    ```

Using List-Producing Expressions in Scalar Context

:   ```perl
    @backwards = reverse qw/ yabba dabba doo /; # gives doo, dabba, yabba
    $backwards = reverse qw/ yabba dabba doo /; # gives oodabbadabbay
    ```

    ```perl
    $fred = something;                          # scalar context
    @pebbles = something;                       # list context
    ($wilma, $betty) = something;               # list context
    ($dino) = something;                        # still list context!
    ```

Here are some other expressions you've seen, and the contexts they provide.

First, some that provide scalar context to something:

:   ```perl
    $fred = something;
    $fred[3] = something;
    123 + something
    something + 654
    if (something) { ... }
    while (something) { ... }
    $fred[something] = something;
    ```

And here are some that provide a list context:

:   ```perl
    @fred = something;
    ($fred, $barney) = something;
    ($fred) = something;
    push @fred, something;
    foreach $fred (something) { ... }
    sort something
    reverse something
    print something
    ```

Using Scalar-Producing Expressions in List Context

:   ```perl
    @fred = 6 * 7; # gets the one-element list (42)
    @barney = "hello" . ' ' . "world";
    ```

    ```perl
    @wilma = undef; # OOPS! Gets the one-element list (undef)
    # which is not the same as this:
    @betty = ( ); # A correct way to empty an array
    ```

Forcing Scalar Context

:   ```perl
    @rocks = qw( talc quartz jade obsidian );
    print "How many rocks do you have?\n";
    print "I have ", @rocks, " rocks!\n"; # WRONG, prints names of rocks
    print "I have ", scalar @rocks, " rocks!\n"; # Correct, gives a number
    ```

`<STDIN>` in List Context

:   ```perl
    @lines = <STDIN>;           # Read all the lines
    chomp(@lines);              # discard all the newline characters

    chomp(@lines = <STDIN>);    # Read the lines, not the newlines
    ```

## Subroutines

Defining a Subroutine

:   ```perl
    sub marine {
        $n += 1; # Global variable $n
        print "Hello, sailor number $n!\n";
    }
    ```

Invoking a Subroutine

:   ```perl
    &marine; # says Hello, sailor number 1!
    &marine; # says Hello, sailor number 2!
    &marine; # says Hello, sailor number 3!
    &marine; # says Hello, sailor number 4!
    ```

Return Values

:   ```perl
    sub sum_of_fred_and_barney {
        print "Hey, you called the sum_of_fred_and_barney subroutine!\n";
        $fred + $barney; # That's the return value
    }
    ```

    ```perl
    $fred = 3;
    $barney = 4;
    $wilma = &sum_of_fred_and_barney;       # $wilma gets 7
    print "\$wilma is $wilma.\n";
    $betty = 3 * &sum_of_fred_and_barney;   # $betty gets 21
    print "\$betty is $betty.\n";
    ```

    be careful with your debugging `print`.

Arguments

:   ```perl
    $n = &max(10, 15); # This sub call has two parameters

    sub max {
        # Compare this to &larger_of_fred_or_barney
        if ($_[0] > $_[1]) {
            $_[0];
        } else {
            $_[1];
        }
    }

    ```

    But how about `&max(1,3,2)`{.perl}?

Private Variables in Subroutines

:   ```perl
    sub max {
        my($m, $n);             # new, private variables for this block
        ($m, $n) = @_;          # give names to the parameters
        if ($m > $n) { $m } else { $n }
    }
    ```

Variable-Length Parameter Lists

:   ```perl
    sub max {
        if (@_ != 2) {
            print "WARNING! &max should get exactly two arguments!\n";
        }
        # continue as before...
        .
        .
        .
    }
    ```

A Better &max Routine

:   ```perl
    sub max {
        my($max_so_far) = shift @_;   # the first one is the largest yet seen
        foreach (@_) {                # look at the remaining arguments
            if ($_ > $max_so_far) {   # could this one be bigger yet?
                $max_so_far = $_;
            }
        }
        $max_so_far;
    }
    ```

    Empty Parameter Lists
      ~ ```perl
        $maximum = &max(@numbers); # undef
        ```

Notes on Lexical (my) Variables

:   ```perl
    foreach (1..10) {
        my($square) = $_ * $_; # private variable in this loop
        print "$_ squared is $square.\n";
    }
    ```

Note also that the  my operator doesn't change the context of an assignment:

:   ```perl
    my($num) = @_;      # list context, same as ($num) = @_;
    my $num  = @_;      # scalar context, same as $num = @_;
    ```

    ```perl
    my $fred, $barney;  # WRONG! Fails to declare $barney
    my($fred, $barney); # declares both
    ```

    ```perl
    foreach my $rock (qw/ bedrock slate lava /) {
        print "One rock is $rock.\n"; # Prints names of three rocks
    }
    ```

The use strict Pragma

:   ```perl
    use strict;                          # Enforce some good programming rules

    # Starting with Perl 5.12, you implicitly use this pragma when you declare
    # a minimum Perl version:
    use 5.012;                           # loads strict for you
    ```

The return Operator

:   ```perl
    my @names = qw/ fred barney betty dino wilma pebbles bamm-bamm /;
    my $result = &which_element_is("dino", @names);
    sub which_element_is {
        my($what, @array) = @_;
        foreach (0..$#array) {          # indices of @array's elements
            if ($what eq $array[$_]) {
                return $_;              # return early once found
            }
        }
        –1;                             # return is optional here
    }
    ```

Omitting the Ampersand

:   ```perl
    sub chomp {
        print "Munch, munch!\n";
    }
    &chomp; # That ampersand is not optional!
    ```

    默认调用原生的。

Non-Scalar Return Values

:   ```perl
    sub list_from_fred_to_barney {
        if ($fred < $barney) {
            # Count upwards from $fred to $barney
            $fred..$barney;
        } else {
            # Count downwards from $fred to $barney
            reverse $barney..$fred;
        }
    }
    ```

Persistent, Private Variable

:   ```perl
    sub marine {
        state $n = 0;           # private, persistent variable $n
        $n += 1;
        print "Hello, sailor number $n!\n";
    }
    ```

    ```perl
    use 5.010;
    running_sum( 5, 6 );
    running_sum( 1..3 );
    running_sum( 4 );
    sub running_sum {
        state $sum = 0;
        state @numbers;
        foreach my $number ( @_ ) {
            push @numbers, $number;
            $sum += $number;
        }
        say "The sum of (@numbers) is $sum";
    }
    ```

## Input and Output

Input from Standard Input

:   ```perl
    $line = <STDIN>;            # read the next line
    chomp($line);               # and chomp it

    # same thing, but more *idiomatically*
    chomp($line = <STDIN>);
    ```

    **idiomatically** 这个词，可以理解为“地道”。编程这东西，大家都用的，几乎就
    是最好的。

    ```perl
    # much typing
    while (defined($line = <STDIN>)) {
        print "I saw $line";
    }

    # easier to type & read
    while (<STDIN>) {
        print "I saw $_";
    }

    # bulk reading at once
    foreach (<STDIN>) {
        print "I saw $_";
    }
    ```

Input from the Diamond Operator

:   The diamond operator is actually a special kind of line-input operator. But
    instead of getting the input from the keyboard, it comes from the user's
    choice of input:

    ```perl
    while (defined($line = <>)) {
        chomp($line);
        print "It was $line that I saw!\n";
    }

    while (<>) {
        chomp;
        print "It was $_ that I saw!\n";
    }
    ```

The Invocation Arguments

:   ```perl
    @ARGV = qw# larry moe curly #; # force these three files to be read
    while (<>) {
        chomp;
        print "It was $_ that I saw in some stooge-like file!\n";
    }
    ```

Output to Standard Output

:   ```perl
    print @array;    # print a list of items
    print "@array";  # print a string (containing an interpolated array)
    ```

    ```perl
    print (2+3)*4;          # Oops!
    ( print(2+3) ) * 4;     # Oops!
    ```

Formatted Output with printf

:   ```perl
    printf "Hello, %s; your password expires in %d days!\n",
            $user, $days_to_die;

    # "general" numeric conversion
    printf "%g %g %g\n", 5/2, 51/17, 51 ** 17; # 2.5 3 1.0683e+29

    printf "%6d\n", 42; # output like ````42 (the ` symbol stands for a space)
    printf "%2d\n", 2e3 + 1.95; # 2001

    printf "%10s\n", "wilma"; # looks like `````wilma
    printf "%-15s\n", "flintstone"; # left-justified

    printf "%12f\n", 6 * 7 + 2/3; # looks like ```42.666667
    printf "%12.3f\n", 6 * 7 + 2/3; # looks like ``````42.667
    printf "%12.0f\n", 6 * 7 + 2/3; # looks like ``````````43
    ```

Arrays and printf

:   ```perl
    my @items = qw( wilma dino pebbles );
    my $format = "The items are:\n" . ("%10s\n" x @items);
    ## print "the format is >>$format<<\n"; # for debugging
    printf $format, @items;

    # even shorted and better
    printf "The items are:\n".("%10s\n" x @items), @items;
    ```

Filehandles

:   ```perl
    open CONFIG, 'dino';
    open CONFIG, '<dino';
    open BEDROCK, '>fred';
    open LOG, '>>logfile';

    open CONFIG, '<:encoding(UTF-8)', 'dino';
    open BEDROCK, '>:encoding(UTF-8)', $file_name;
    open LOG, '>>:encoding(UTF-8)', &logfile_name();

    open BEDROCK, '>:utf8', $file_name; # probably not right
    ```

    With the  encoding() form, you can specify other encodings too. You can get
    a list of all of the encodings that your perl understands with a Perl
    one-liner: `% perl -MEncode -le "print for Encode->encodings(':all')"`{.bash}.

    ```perl
    # If you want a little-endian version of UTF-16:
    open BEDROCK, '>:encoding(UTF-16LE)', $file_name;

    # Or perhaps Latin-1:
    open BEDROCK, '>:encoding(iso-8859-1)', $file_name;
    ```

    ```perl
    open BEDROCK, '>:crlf', $file_name;
    open BEDROCK, '<:crlf', $file_name; # crlf -> newline
    ```

Binmoding Filehandles

:   ```perl
    binmode STDOUT;                         # don't translate line endings
    binmode STDERR;                         # don't translate line endings

    binmode STDOUT, ':encoding(UTF-8)';
    binmode STDERR, ':encoding(UTF-8)';
    ```

Bad Filehandles

:   ```perl
    my $success = open LOG, '>>', 'logfile'; # capture the return value
    if ( ! $success ) {
        # The open failed
        ...
    }
    ```

Closing a Filehandle

:   ```perl
    close BEDROCK;
    ```

Fatal Errors with die

:   ```perl
    if ( ! open LOG, '>>', 'logfile' ) {
        die "Cannot create logfile: $!";
    }

    if (@ARGV < 2) {
        die "Not enough arguments\n";
    }
    ```

Warning Messages with warn

:   ```perl
    warn ...
    ```

Automatically die-ing

:   ```perl
    use autodie;
    open LOG, '>>', 'logfile';
    ```

Using Filehandles

:   ```perl
    if ( ! open PASSWD, "/etc/passwd") {
        die "How did you get logged in? ($!)";
    }
    while (<PASSWD>) {
        chomp;
        ...
    }

    # filehandles
    print LOG "Captain's log, stardate 3.14159\n"; # output goes to LOG
    printf STDERR "%d percent complete.\n", $done/$total * 100;

    printf (STDERR "%d percent complete.\n", $done/$total * 100);
    printf STDERR ("%d percent complete.\n", $done/$total * 100);
    ```

Changing the Default Output Filehandle

:   ```perl
    select BEDROCK;
    print "I hope Mr. Slate doesn't find out about this.\n";
    print "Wilma!\n";

    select LOG;
    $| = 1; # don't keep LOG entries sitting in the buffer

    select STDOUT;
    # ... time passes, babies learn to walk, tectonic plates shift, and then...

    print LOG "This gets written to the LOG at once!\n";
    ```

- tectonic `[tɛk'tɑnɪk]` 构造的；建筑的；地壳构造上的

Reopening a Standard Filehandle

:   ```perl
    # Send errors to my private error log
    if ( ! open STDERR, ">>/home/barney/.error_log" ) {
        die "Can't open error log for append: $!";
    }
    ```

Output with say

:   ```perl
    use 5.010;
    print "Hello!\n";
    print "Hello!", "\n";
    say "Hello!";

    use 5.010;
    my @array = qw( a b c d );
    say @array;                     # "abcd\n"
    say "@array";                   # "a b c d\n";

    # file handle
    use 5.010;
    say BEDROCK "Hello!";
    ```

Filehandles in a Scalar

:   ```perl
    my $rocks_fh;
    open $rocks_fh, '<', 'rocks.txt'
        or die "Could not open rocks.txt: $!";

    open my $rocks_fh, '<', 'rocks.txt'
        or die "Could not open rocks.txt: $!";
    ```

    ```perl
    while( <$rocks_fh> ) {
        chomp;
        ...
    }

    open my $rocks_fh, '>>', 'rocks.txt'
        or die "Could not open rocks.txt: $!";
    foreach my $rock ( qw( slate lava granite ) ) {
        say $rocks_fh $rock
    }
    print $rocks_fh "limestone\n";
    close $rocks_fh;

    # ?
    print { $rock_fh };             # uses $_ by default
    print { $rocks[0] } "sandstone\n";
    ```

## Hashes

A hash as **a barrel of data**.

Yet another way to think of a hash is as **a very simple database**, in which
just one piece of data may be filed under each key. In fact, if your task
description includes phrases like "finding duplicates", "unique",
"cross-reference", or "lookup table", it's likely that a hash will be useful in
the implementation.

Hash Element Access

:   ```perl
    $hash{key}

    $family_name{'fred'}        = 'flintstone';
    $family_name{'barney'}      = 'rubble';

    foreach my $person (qw< barney fred >) {
        print "I've heard of $person $family_name{$person}.\n";
    }
    ```

    ```perl
    $foo = 'bar';
    print $family_name{ $foo . 'ney' }; # prints 'rubble'

    # adds a new key (and value)
    $family_name{'wilma'} = 'flintstone';

    # creates the element if needed
    $family_name{'betty'} .= $family_name{'barney'};

    $granite = $family_name{'larry'}; # undef
    ```

The Hash As a Whole

:   ```perl
    %some_hash = ( 'foo', 35, 'bar', 12.4, 2.5, 'hello',
                   'wilma', 1.72e30, 'betty', "bye\n" );

    @any_array = %some_hash; # list of key-value pairs

    print "@any_array\n";
    # might give something like this:
    # betty bye (and a newline) wilma 1.72e+30 foo 35 2.5 hello bar 12.4
    ```

Hash Assignment

:   ```perl
    my %new_hash = %old_hash
    my %inverse_hash = reverse %any_hash; # think for a moment
    ```

The Big Arrow

:   ```perl
    my %last_name = ( # a hash may be a lexical variable
        'fred' => 'flintstone',
        'dino' => undef,
        'barney' => 'rubble',
        'betty' => 'rubble',
    );

    my %last_name = (
        + => 'flintstone', # WRONG! Compilation error!
    );

    $score{'fred'} # or $score{fred}

    # But beware; if there's anything inside the curly braces besides a
    # bareword, Perl will interpret it as an expression.  For instance, if
    # there is a  . , Perl interprets it as a string concatenation:
    $hash{ bar.foo } = 1; # that's the key 'foobar'
    ```

Hash Functions

:   ```perl
    my %hash = ('a' => 1, 'b' => 2, 'c' => 3);
    my @k = keys %hash;
    my @v = values %hash;

    if (%hash) {
        print "That was a true value!\n";
    }

    # each

    while ( ($key, $value) = each %hash ) {
        print "$key => $value\n";
    }

    foreach $key (sort keys %hash) {
        $value = $hash{$key};
        print "$key => $value\n";
        # Or, we could have avoided the extra $value variable:
        # print "$key => $hash{$key}\n";
    }
    ```

Typical Use of a Hash

:   ```perl
    $books{"barney"} = 0; # no books currently checked out
    $books{"pebbles"} = undef; # no books EVER checked out; a new library card

    if (exists $books{"dino"}) {
        print "Hey, there's a library card for dino!\n";
    }

    my $person = "betty";
    delete $books{$person}; # Revoke the library card for $person

    foreach $person (sort keys %books) { # each patron, in order
        if ($books{$person}) {
            print "$person has $books{$person} items\n"; # fred has 3 items
        }
    }
    ```

The `%ENV` hash

:   ```perl
    print "PATH is $ENV{PATH}\n";
    ```

## In the World of Regular Expressions

Using Simple Patterns

:   ```perl
    $_ = "yabba dabba doo";
    if (/abba/) {
        print "It matched!\n";
    }
    ```

Unicode Properties: `\p{PROPERTY}`

:   ```perl
    # any sort of space
    if (/\p{Space}/) { # 26 different possible characters
        print "The string has some whitespace.\n";
    }

    if (/\p{Digit}/) { # 411 different possible characters
        print "The string has a digit.\n";
    }

    if (/\p{Hex}\p{Hex}/) {
        print "The string has a pair of hex digits.\n";
    }

    if (/\P{Space}/) { # Not space (many many characters!)
        print "The string has one or more non-whitespace characters.\n";
    }
    ```

About Metacharacters

:   The dot (`.`) is a wildcard character, it matches any single character
    except a newline (which is represented by `\n`).

    Simple Quantifiers

      - the star (*)
      - the plus (+)
      - the question mark (?)

Grouping in Patterns

:   ```perl
    $_ = "abba";
    if (/(.)\1/) { # matches 'bb'
        print "It matched same character next to itself!\n";
    }
    ```

    ```perl
    $_ = "yabba dabba doo";
    if (/y(....) d\1/) {
        print "It matched the same after y and d!\n";
    }

    $_ = "yabba dabba doo";
    if (/y(.)(.)\2\1/) { # matches 'abba'
        print "It matched after the y!\n";
    }

    use 5.010;
    $_ = "aa11bb";
    if (/(.)\g{1}11/) {
        print "It matched!\n";
    }

    use 5.010;
    $_ = "aa11bb";
    if (/(.)\g{1}11/) {
        print "It matched!\n";
    }
    ```

Alternatives

:   ```perl
    /fred|barney|betty/
    ```

Character Classes

:   ```perl
    $_ = "The HAL-9000 requires authorization to continue.";
    if (/HAL-[0-9]+/) {
        print "The string mentions some model of HAL computer.\n";
    }
    ```

Character Class Shortcuts

:   ```perl
    $_ = 'The HAL-9000 requires authorization to continue.';
    if (/HAL-[\d]+/) {
        say 'The string mentions some model of HAL computer.';
    }

    use 5.010;
    if (/\s/a) { # old, ASCII semantics
        say 'The string matched ASCII whitespace.';
    }
    if (/\h/) {
        say 'The string matched some horizontal whitespace.';
    }
    if (/\v/) {
        say 'The string matched some vertical whitespace.';
    }
    if (/[\v\h]/) { # same as \p{Space}, but not more than \s
        say 'The string matched some whitespace.';
    }
    ```

Negating the Shortcuts

:   - `[^\d]` => `\D`
    - `[^\w]` => `\W`
    - `[^\s]` => `\S`

## Matching with Regular Expressions

Matches with `m//`

:   Delimeters

      - `m/fred/`
      - `m,fred,`
      - `m!fred!`
      - `m^fred^`

Match Modifiers

:   ```perl
    # Case-Insensitive: `/i`
    print "Would you like to play a game? ";
    chomp($_ = <STDIN>);
    if (/yes/i) {
        print "In that case, I recommend that you go bowling.\n";
    }

    # Matching Any Character: `/s`: * -> [\d\D], s: super star
    $_ = "I saw Barney\ndown at the bowling alley\nwith Fred\nlast night.\n";
    if (/Barney.*Fred/s) {
        print "That string mentions Fred after Barney!\n";
    }

    # Adding Whitespace with `/x`
    /
    -?              # an optional minus sign
    [0-9]+          # one or more digits before the decimal point
    \.?             # an optional decimal point
    [0-9]*          # some optional digits after the decimal point
    /x

    /
    [0-9]+          # one or more digits before the decimal point
    [#]             # literal pound sign
    /x              # end of string

    # Combining Option Modifiers
    if (/barney.*fred/is) { # both /i and /s
        print "That string mentions Fred after Barney!\n";
    }
    ```

Choosing a Character Interpretation

:   ```perl
    use 5.014;
    /\w+/a         # A-Z, a-z, 0-9, _
    /\w+/u         # any Unicode word charcter
    /\w+/l         # The ASCII version, and word chars from the locale,
                   # perhaps characters like Œ from Latin-9
    ```

    <http://unicode.org/Public/UNIDATA/CaseFolding.txt>
      ~ ```perl
        # A single  /a modifier affects the character class shortcuts, but if you
        # have two  /a , it also tells Perl to use ASCII-only case-folding
        /k/aai # only matches the ASCII K or k, not Kelvin sign
        /k/aia # the /a's don't need to be next to each other
        /ss/aai # only matches ASCII ss, SS, sS, Ss, not ß
        /ff/aai # only matches ASCII ff, FF, fF, Ff, not ff
        ```

    In this case, you might get different results depending on how Perl treats
    the string in `$_` and the string in match operator. If your source code is
    in UTF-8 but your input is Latin-9, what happens? In Latin-9, the character
    Œ has ordinal value `0xBC` and its lowercase partner `œ` has `0xBD`. In
    Unicode, `Œ` is code point `U+0152` and `œ` is code point `U+0153`. In
    Unicode, `U+0OBC` is `¼` and doesn't have a lowercase version. If your
    input in  `$_` is `0xBD` and Perl treats that regular expression as UTF-8,
    you won't...

    ```perl
    $_ = <STDIN>;
    my $OE = chr( 0xBC );       # get exactly what we intend
    if (/$OE/i) {               # case-insensitive??? Maybe not.
        print "Found $OE\n";
    }
    ```

Others options

:   see `perlop`


Anchors

:   - beginnning of string: `m{\Ahttps?://}i`{.perl}
    - end of string: `m{\.png\z}i`{.perl}
    - end of string: `\Z`{.perl}, allows an optional newline after it.
    - `^`{.perl}
    - `$`{.perl}
    - 对于一些 Perl4 使用者而言，`/^barney/m`, Without the `/m` , the `^ `and
      `$` act just like `\A` and  `\z`.

    ```perl
    while (<STDIN>) {
        print if /\.png\Z/;
    }

    while (<STDIN>) {
        chomp;
        print "$_\n" if /\.png\z/;
    }
    ```

    - word boundry, `/\bfred\b/`{.perl}
    - nonword boundary, `\B`

The Binding Operator `=~`{.perl}

:   not just `$_`

    ```perl
    my $some_other = "I dream of betty rubble.";
    if ($some_other =~ /\brub/) {
        print "Aye, there's the rub.\n";
    }
    ```

Interpolating into Patterns

:   ```perl
    #!/usr/bin/perl -w
    my $what = "larry";
    while (<>) {
        if (/\A($what)/) { # pattern is anchored at beginning of string
            print "We saw $what in beginning of $_";
        }
    }
    ```

The Match Variables

:   ```perl
    $_ = "Hello there, neighbor";
    if (/\s(\[a-zA-Z]+),/) {       # capture the word between space and comma
        print "the word was $1\n"; # the word was there
    }

    $_ = "Hello there, neighbor";
    if (/(\S+) (\S+), (\S+)/) {
        print "words were $1 $2 $3\n";
    }

    my $dino = "I fear that I'll be extinct after 1000 years.";
    if ($dino =~ /([0-9]*) years/) {
        print "That said '$1' years.\n"; # 1000
    }

    $dino = "I fear that I'll be extinct after a few million years.";
    if ($dino =~ /([0-9]*) years/) {
        print "That said '$1' years.\n"; # empty string
    }
    ```

The Persistence of Captures

:   ```perl
    my $wilma = '123';
    $wilma =~ /([0-9]+)/;                        # Succeeds, $1 is 123
    $wilma =~ /([a-zA-Z]+)/;                     # BAD! Untested match result
    print "Wilma's word was $1... or was it?\n"; # Still 123!

    # 最好还是写在 if-else 里
    if ($wilma =~ /([a-zA-Z]+)/) {
        print "Wilma's word was $1.\n";
    } else {
        print "Wilma doesn't have a word.\n";
    }
    ```

Noncapturing Parentheses

:   ```perl
    if (/(bronto)?saurus (steak|burger)/) {
        print "Fred wants a $2\n";
    }

    if (/(?:bronto)?saurus (steak|burger)/) {
        print "Fred wants a $1\n";
    }

    if (/(?:bronto)?saurus (?:BBQ )?(steak|burger)/) {
        print "Fred wants a $1\n";
    }
    ```

Named Captures

:   ```perl
    use 5.010;
    my $names = 'Fred or Barney';
    if ( $names =~ m/(?<name1>\w+) (?:and|or) (?<name2>\w+)/ ) {
        say "I saw $+{name1} and $+{name2}";
    }

    # Previously, you used either  \1 or  \g{1} for this. With a labeled group,
    # you can use the label in  \g{label} :
    use 5.010;
    my $names = 'Fred Flintstone and Wilma Flintstone';
    if ( $names =~ m/(?<last_name>\w+) and \w+ \g{last_name}/ ) {
        say "I saw $+{last_name}";
    }

    use 5.010;
    my $names = 'Fred Flintstone and Wilma Flintstone';
    if ( $names =~ m/(?<last_name>\w+) and \w+ \k<last_name>/ ) {
        say "I saw $+{last_name}";
    }
    ```

The Automatic Match Variables

:   ```perl
    # matched part
    if ("Hello there, neighbor" =~ /\s(\w+),/) {
        print "That actually matched '$&'.\n";
    }

    if ("Hello there, neighbor" =~ /\s(\w+),/) {
        print "That was ($`)($&)($').\n";
        #           (Hello)( there,)( neighbor)
    }

    use 5.010;
    if ("Hello there, neighbor" =~ /\s(\w+),/p) {
        print "That actually matched '${^MATCH}'.\n";
    }
    if ("Hello there, neighbor" =~ /\s(\w+),/p) {
        print "That was (${^PREMATCH})(${^MATCH})(${^POSTMATCH}).\n";
    }
    ```

General Quantifiers

:   - `*`{.perl}: `{0,}`{.perl}
    - `+`{.perl}: `{1,}`{.perl}
    - `?`{.perl}: `{0,1}`{.perl}
    - `{m,n}`{.perl}
    - `/\w{8}/`{.perl}

Precedence

:   | Regular expression feature | Example |
    | :---- | :---: |
    | Parentheses (grouping or capturing) | `(…)`, `(?:…)`, `(?<LABEL>…)` |
    | Quantifiers | `a*`, `a+`, `a?`, `a{n,m}` |
    | Anchors and sequence | `abc`, `^`, `$`, `\A`, `\b`, `\z`, `\Z` |
    | Alternation | `a|b|c` |
    | Atoms | `a`, `[abc]`, `\d`, `\1`, `\g{2}` |

And There's More

:   Although we've covered all of the regular expression features that most
    people are likely to need for everyday programming, there are still even
    more features. A few are covered in Intermediate Perl, but also check the
    perlre, perlrequick, and perlretut documentation for more information about
    what patterns in Perl can do.

A Pattern Test Program

:   ```perl
    #!/usr/bin/perl
    while (<>) {                            # take one input line at a time
        chomp;
        if (/YOUR_PATTERN_GOES_HERE/) {
            print "Matched: |$`<$&>$'|\n";  # the special match vars
        } else {
            print "No match: |$_|\n";
        }
    }
    ```

## Processing Text with Regular Expressions

Substitutions with `s///`

:   ```perl
    s/with (\w+)/against $1's team/;
    print "$_\n"; # says "He's out bowling against Fred's team tonight."

    $_ = "green scaly dinosaur";
    s/(\w+) (\w+)/$2, $1/;          # Now it's "scaly, green dinosaur"
    s/^/huge, /;                    # Now it's "huge, scaly, green dinosaur"
    s/,.*een//;                     # Now it's "huge dinosaur"
    s/green/red/;                   # Failed match: still "huge dinosaur"
    s/\w+$/($`!)$&/;                # Now it's "huge (huge !)dinosaur"
    s/\s+(!\W+)/$1 /;               # Now it's "huge (huge!) dinosaur"
    s/huge/gigantic/;               # Now it's "gigantic (huge!) dinosaur"

    $_ = "fred flintstone";
    if (s/fred/wilma/) {
        print "Successfully replaced fred with wilma!\n";
    }
    ```

Global Replacements with `/g`

:   ```perl
    s/^\s+//;               # Replace leading whitespace with nothing
    s/\s+$//;               # Replace trailing whitespace with nothing

    s/^\s+|\s+$//g;         # Strip leading, trailing whitespace
    ```

Different Delimiters

:   ```perl
    s#^https://#http://#;
    s{fred}{barney};
    s[fred](barney);
    s<fred>#barney#;
    ```

Substitution Modifiers

:   - `/i`
    - `/x`
    - `/s`

```perl
$_ = "I saw barney with fred.";
s/(fred|barney)/\u\L$1/ig; # $_ is now "I saw Fred with Barney."
```

The split operator

:   ```perl
    my @fields = split /:/, "abc:def::g:h"; # gives ("abc", "def", "", "g", "h")
    my @args   = split /\s+/, $some_input; # ("This", "is", "a", "test.")
    my @fields = split; # like split /\s+/, $_;
    ```

The join Function

:   ```perl
    my $result = join $glue, @pieces;
    ```

`m//` in List Context

:   ```perl
    $_ = "Hello there, neighbor!";
    my($first, $second, $third) = /(\S+) (\S+), (\S+)/;
    print "$second is my $third\n";

    my $text = "Fred dropped a 5 ton granite block on Mr. Slate";
    my @words = ($text =~ /([a-z]+)/ig);
    print "Result: @words\n";
    # Result: Fred dropped a ton granite block on Mr Slate

    my $data = "Barney Rubble Fred Flintstone Wilma Flintstone";
    my %last_name = ($data =~ /(\w+)\s+(\w+)/g);
    ```

More Powerful Regular Expressions

:   Nongreedy Quantifiers
      ~ ```perl
        # nongreedy form of star is *?
        s#<BOLD>(.*?)</BOLD>#$1#g;
        ```

    Matching Multiple-Line Text
      ~ ```perl
        open FILE, $filename
        or die "Can't open '$filename': $!";
        my $lines = join '', <FILE>;
        $lines =~ s/^/$filename: /gm;
        ```

    Updating Many Files
      ~ ```perl
        #!/usr/bin/perl -w
        use strict;
        chomp(my $date = `date`);
        $^I = ".bak";
        while (<>) {
            s/^Author:.*/Author: Randal L. Schwartz/;
            s/^Phone:.*\n//;
            s/^Date:.*/Date: $date/;
            print;
        }
        ```

In-Place Editing from the Command Line

:   ```bash
    perl -p \
         -i.bak \
         -w \
         -e 's/Randall/Randal/g' \
         fred*.dat
    ```

    it's like:

    ```perl
    #!/usr/bin/perl -w
    $^I = ".bak";
    while (<>) {
        s/Randall/Randal/g;
        print;
    }
    ```

    The `-p` option tells Perl to write a program for you. It's not much of a
    program, though; it looks something like this:

    ```perl
    while (<>) {
        print;
    }
    ```

    If you want even less, you could use `-n` instead; that leaves out the
    automatic print statement, so you can print only what you wish.

## More Control Structures

The `unless` Control Structure

:   ```perl
    unless ($fred =~ /\A[A-Z_]\w*\z/i) {
        print "The value of \$fred doesn't look like a Perl identifier name.\n";
    }

    if ( ! ($fred =~ /\A[A-Z_]\w*\z/i) ) {
        print "The value of \$fred doesn't look like a Perl identifier name.\n";
    }
    ```

The `else` Clause with `unless`

:   ```perl
    unless ($mon =~ /\AFeb/) {
        print "This month has at least thirty days.\n";
    } else {
        print "Do you see what's going on here?\n";
    }
    ```

The until Control Structure

:   ```perl
    until ($j > $i) {
        $j *= 2;
    }
    ```

Expression Modifiers

:   ```perl
    print "$n is a negative number.\n" if $n < 0;

    &error("Invalid input") unless &valid($input);
    $i *= 2 until $i > $j;

    print " ", ($n += 2) while $n < 10;
    while ($n < 10) {
        print " ", ($n += 2);
    }

    &greet($_) foreach @person;

    print "fred is '$fred', barney is '$barney'\n"
        if $I_am_curious;
    ```

The Naked Block Control Structure

:   ```perl
    {
        print "Please enter a number: ";
        chomp(my $n = <STDIN>);
        my $root = sqrt $n; # calculate the square root
        print "The square root of $n is $root.\n";
    }
    ```

The `elsif` Clause

:   ```perl
    if ( ! defined $dino) {
        print "The value is undef.\n";
    } elsif ($dino =~ /^-?\d+\.?$/) {
        print "The value is an integer.\n";
    } elsif ($dino =~ /^-?\d*\.\d+$/) {
        print "The value is a _simple_ floating-point number.\n";
    } elsif ($dino eq '') {
        print "The value is the empty string.\n";
    } else {
        print "The value is the string '$dino'.\n";
    }
    ```

Autoincrement and Autodecrement

:   ```perl
    my @people = qw{ fred barney fred wilma dino barney fred pebbles };
    my %count; # new empty hash
    $count{$_}++ foreach @people; # creates new keys and values as needed
    ```

The Value of Autoincrement

:   ```perl
    ++$calar
    $calar++
    ```

The `for` Control Structure

:   ```perl
    for ($i = 1; $i <= 10; $i++) { # count from 1 to 10
        print "I can count to $i!\n";
    }

    for ($_ = "bedrock"; s/(.)//; ) { # loops while the s/// is successful
        print "One character is: $1\n";
    }
    ```

The Secret Connection Between foreach and for

:   `foreach` <-> `for`，就看你的分号有没有了。

    ```perl
    for (1..10) { # really a foreach loop from 1 to 10
        print "I can count to $_!\n";
    }
    ```

Loop Controls

:   last
      ~ ```perl
        # Print all input lines mentioning fred, until the __END__ marker
        while (<STDIN>) {
            if (/__END__/) {
                # No more input on or after this marker line
                last;
            } elsif (/fred/) {
                print;
            }
        }
        ## last comes here ##
        ```

    next
      ~ ```perl
        # Analyze words in the input file or files
        while (<>) {
            foreach (split) { # break $_ into words, assign each to $_ in turn
                $total++;
                next if /\W/; # strange words skip the remainder of the loop
                $valid++;
                $count{$_}++; # count each separate word
                ## next comes here ##
            }
        }
        print "total things = $total, valid words = $valid\n";
        foreach $word (sort keys %count) {
            print "$word was seen $count{$word} times.\n";
        }
        ```

    redo
      ~ ```perl
        # Typing test
        my @words = qw{ fred barney pebbles dino wilma betty };
        my $errors = 0;
        foreach (@words) {
            ## redo comes here ##
            print "Type the word '$_': ";
            chomp(my $try = <STDIN>);
            if ($try ne $_) {
                print "Sorry - That's not right.\n\n";
                $errors++;
                redo; # jump back up to the top of the loop
            }
        }
        print "You've completed the test, with $errors errors.\n";
        ```

    combined
      ~ ```perl
        foreach (1..10) {
            print "Iteration number $_.\n\n";
            print "Please choose: last, next, redo, or none of the above? ";
            chomp(my $choice = <STDIN>);
            print "\n";
            last if $choice =~ /last/i;
            next if $choice =~ /next/i;
            redo if $choice =~ /redo/i;
            print "That wasn't any of the choices... onward!\n\n";
        }
        print "That's all, folks!\n";
        ```

The Conditional Operator `?:`

:   `my $location = &is_weekend($day) ? "home" : "work";`{.perl}

Logical Operators

:   - `&&`
    - `||`
    - `!=`
    - `==`
    - `$name eq 'fred'`

The Value of a Short Circuit Operator

The `defined-or` Operator

:   ```perl
    use 5.010;
    my $last_name = $last_name{$someone} // '(No last name)';

    use 5.010;
    use warnings;
    my $name;                       # no value, so undefined!
    printf "%s", $name // '';
    ```

Control Structures Using Partial-Evaluation Operators

:   ```perl
    ($m > 10) || print "why is it not greater?\n";

    # and, or

    # idiometic way of opening file
    open my $fh, '<', $filename
      or die "Can't open '$filename': $!";
    ```

## Perl Modules

Comprehensive Perl Archive Network (CPAN)

Finding Modules

:   `perldoc CGI`{.bash}

    The cpan command that comes with Perl can create an autobundle, which is
    a list of everything you have installed, along with the version numbers:
    `cpan -a`{.bash}

Installing Modules

:   ```bash
    perl Makefile.PL
    make install
    ```

    `perl Makefile.PL INSTALL_BASE=/Users/fred/lib`{.bash}

    ```bash
    perl Build.PL
    ./Build install
    ```

    `perl Build.PL --install_base=/Users/fred/lib`{.bash}

    `CPAN.pm`
      ~ From the command line, you can start up the `CPAN.pm` shell from which you
        can issue commands: `perl -MCPAN -e shell`{.bash}

    Just call the script with a list of the modules you want to install:
    `cpan Module::CoreList LWP CGI::Prototype`{.bash}

Perl Package Manager (PPM).

:   There's another handy tool, `cpanm` (for cpanminus), although it doesn't come
    with Perl (yet). It's designed as a zero-conf, lightweight CPAN client that
    handles most of what people want to do.

    `cpanm DBI WWW::Mechanize`{.bash}

Using Your Own Directories

:   `perl -Mlocal::lib`{.bash}

    use the `-I` switch to install modules:
    `cpan -I Set::Crossproduct`{.bash}

And the third (and biggest) problem with this is that we're trying to solve a
problem someone else has already solved.

The `File::Basename` Module

:   ```perl
    use File::Basename;
    my $name = "/usr/local/bin/perl";
    my $basename = basename $name; # gives 'perl'
    # also, dirname
    ```

Using Only Some Functions from a Module

:   ```perl
    use File::Basename qw/ basename /;

    # ask for no new functions at all:
    use File::Basename qw/ /;                      # or: use File::Basename ()

    my $name = "/usr/local/bin/perl";
    my $dirname = File::Basename::dirname $name;   # dirname from the module
    ```

The `File::Spec` Module

:   ```perl
    use File::Basename;
    print "Please enter a filename: ";
    chomp(my $old_name = <STDIN>);
    my $dirname = dirname $old_name;
    my $basename = basename $old_name;
    $basename =~ s/^/not/; # Add a prefix to the basename
    my $new_name = "$dirname/$basename"; # how about windows?
    rename($old_name, $new_name)
        or warn "Can't rename '$old_name' to '$new_name': $!";
    ```

The `File::Spec` module is used for manipulating file specifications

:   ```perl
    my $new_name = File::Spec->catfile($dirname, $basename);
    rename($old_name, $new_name)
        or warn "Can't rename '$old_name' to '$new_name': $!";
    ```

`Path::Class`

:   ```perl
    my $dir = dir( qw(Users fred lib) );
    my $subdir = $dir−>subdir( 'perl5' );       # Users/fred/lib/perl5
    my $parent = $dir->parent;                  # Users/fred
    my $windir = $dir−>as_foreign( 'Win32' );   # Users\fred\lib
    ```

`CGI.pm`

:   ```perl
    #!/usr/bin/perl
    use CGI qw(:all);
    print header("text/plain");
    foreach $param ( param() ) {
        print "$param: " . param($param) . "\n";
    }
    ```

    ```perl
    #!/usr/bin/perl
    use CGI qw(:all);
    print header(),
    start_html("This is the page title"),
    h1( "Input parameters" );
    my $list_items;
    foreach my $param ( param() ) {
        $list_items .= li( "$param: " . param($param) );
    }
    print ul( $list_items );
    print end_html();
    ```

Databases and DBI

:   The DBI (Database Interface) module doesn't come with Perl, but it's one of
    the most popular modules since most people have to connect to a database of
    some sort.

Dates and Times

:   ```perl
    my $dt = DateTime−>from_epoch( epoch => time );
    printf '%4d%02d%02d', $dt->year, $dt->month, $dt->day;

    print $dt−>ymd; # 2011−04−23
    print $dt−>ymd('/'); # 2011/04/23
    print $dt->ymd(''); # 20010423

    my $dt1 = DateTime->new(
        year => 1987,
        month => 12,
        day => 18,
    );

    my $dt2 = DateTime->new(
        year => 2011,
        month => 5,
        day => 1,
    );

    my $duration = $dt2 - $dt1;

    my @units = $duration->in_units( qw(year month day) );
    printf '%d years, %d months, and %d days', @units;

    my $duration = DateTime::Duration->new( days => 5 );
    my $dt3 = $dt2 + $duration;
    print $dt3->ymd; # 2011-05-06
    ```

    If you just want to treat the time as an object, you can use `Time::Piece`,
    which replaces the built-in `localtime` with one that returns an object
    instead of a long list.

    ```perl
    use Time::Piece;
    my $t = localtime;
    print 'The month is ' . $t−>month . "\n"; # The month is Apr
    ```

## File Tests

File Test Operators

:   ```perl
    die "Oops! A file called '$filename' already exists.\n" # ?how about $!
        if -e $filename;

    warn "Config file is looking pretty old!\n"
        if -M CONFIG > 28;

    my @original_files = qw/ fred barney betty wilma pebbles dino bamm-bamm /;
    my @big_old_files;              # The ones we want to put on backup tapes

    foreach my $filename (@original_files) {
        push @big_old_files, $filename
            if -s $filename > 100_000 and -A $filename > 90;
    }
    ```

--------------   --------------------------------------------------------------------
`-r`{.perl}      File or directory is readable by this (effective) user or group

`-w`{.perl}      File or directory is writable by this (effective) user or group

`-x`{.perl}      File or directory is executable by this (effective) user or group

`-o`{.perl}      File or directory is owned by this (effective) user

`-R`{.perl}      File or directory is readable by this real user or group

`-W`{.perl}      File or directory is writable by this real user or group

`-X`{.perl}      File or directory is executable by this real user or group

`-O`{.perl}      File or directory is owned by this real user

`-e`{.perl}      File or directory name exists

`-z`{.perl}      File exists and has zero size (always false for directories)

`-s`{.perl}      File or directory exists and has nonzero size (the value is the size in bytes)

`-f`{.perl}      Entry is a plain file

`-d`{.perl}      Entry is a directory

`-l`{.perl}      Entry is a symbolic link

`-S`{.perl}      Entry is a socket

`-p`{.perl}      Entry is a named pipe (a “fifo”)

`-b`{.perl}      Entry is a block-special file (like a mountable disk)

`-c`{.perl}      Entry is a character-special file (like an I/O device)

`-u`{.perl}      File or directory is setuid

`-g`{.perl}      File or directory is setgid

`-k`{.perl}      File or directory has the sticky bit set

`-t`{.perl}      The filehandle is a TTY (as reported by the  isatty() system
                 function; filenames can't be tested by this test)

`-T`{.perl}      File looks like a “text” file

`-B`{.perl}      File looks like a “binary” file

`-M`{.perl}      Modification age (measured in days)

`-A`{.perl}      Access age (measured in days)

`-C`{.perl}      Inode-modification age (measured in days)
--------------   --------------------------------------------------------------------

But if you have a symbolic link pointing to a file, that will report true
for both `-f` and `-l`.

The `-o` and `-O` tests relate only to the user ID and not to the group ID.

The age tests, `-M`, `-A`, and `-C` (yes, they're uppercase), return the
number of days since the file was last **modified**, **accessed**, or had its inode
**changed**.

```perl
foreach (@lots_of_filenames) {
    print "$_ is readable\n" if -r;         # same as -r $_
}

# The filename is in $_
my $size_in_K = -s / 1000;                  # Oops!
my $size_in_k = (-s) / 1024;                # Uses $_ by default
```

Testing Several Attributes of the Same File

:   The virtual filehandle `_` uses the information from the last file lookup
    that a file test operator performed. Perl only has to look up the file
    information once now: `if (-r $file and -w _) { ... }`{.perl}.

    ```perl
    if (-r $file) {
        print "The file is readable!\n";
    }
    if (-w _) {
        print "The file is writable!\n";
    }
    ```

    When you return from that subroutine and do another file test, the `_`
    filehandle isn't for `$file` like you expect, but for `$other_file`:

    ```perl
    if (-r $file) {
        print "The file is readable!\n";
    }
    lookup( $other_file );
    if (-w _) {
        print "The file is writable!\n";
    }

    sub lookup {
        return -w $_[0];
    }
    ```

Stacked File Test Operators

:   ```perl
    use 5.010;
    if (-w -r $file) {
        print "The file is both readable and writable!\n";
    }

    if (-r -w -x -o -d $file) {
        print "My directory is readable, writable, and executable!\n";
    }

    # bad
    use 5.010;
    if (-s -d $file < 512) { # WRONG! DON'T DO THIS
        say 'The directory is less than 512 bytes!';
    }

    # bad
    if (( -d $file and -s _ ) < 512) {
        print "The directory is less than 512 bytes!\n";
    }

    # good
    if (-d $file and -s _ < 512) {
        print "The directory is less than 512 bytes!\n";
    }
    ```

The stat and lstat Functions

:   To get at the remaining information about a file, merely call the
    `stat`{.perl} function, which returns pretty much everything that the
    `stat`{.bash} Unix system call returns (hopefully more than you want to
    know).

    The operand to `stat`{.perl} is a filehandle (including the `_` virtual
    filehandle), or an expression that evaluates to a filename. The return
    value is either the empty list, indicating that the `stat`{.perl} failed
    (usually because the file doesn't exist), or a 13-element list of numbers,
    most easily described using the following list of scalar variables:

    ```perl
    my( $dev, $ino, $mode, $nlink,
        $uid, $gid, $rdev, $size,
        $atime, $mtime, $ctime, $blksize, $blocks ) = stat($filename);
    ```

    If you need the (mostly useless) information about the symbolic link
    itself, use `lstat`{.perl} rather than `stat`{.perl} (which returns the
    same information in the same order). If the operand isn't a symbolic link,
    `lstat` returns the same things that stat would.

    Like the file tests, the operand of `stat` or `lstat` defaults to  `$_`,
    meaning that the underlying `stat` system call will be performed on the
    file named by the scalar variable `$_`.

The localtime Function

:   ```perl
    my $timestamp = 1180630098;
    my $date = localtime $timestamp;
    ```

    The `gmtime` function is just the same as `localtime`, except that it
    returns the time in Universal Time (what we once called **Greenwich Mean
    Time**).

Bitwise Operators

:   - `|`, `&`, `^`, `~`, `>>`, `<<`

Using Bitstrings

:   All of the bitwise operators can work with bitstrings, as well as with
    integers.

    `\xAA` | `\x55` will give the string `\xFF`.

    ```perl
    my $now = gmtime; # Get the current universal timestamp as a string

    my( $sec, $min, $hour, $day, $mon,
        $year, $wday, $yday, $isdst ) = localtime $timestamp;
    ```

## Directory Operations

Moving Around the Directory Tree

:   ```perl
    chdir '/etc' or die "cannot chdir to /etc: $!";
    ```

Globbing

:   Normally, the shell expands any filename patterns on each command line into
    the matching filenames. This is called globbing.

    ```perl
    my @all_files = glob '*';
    my @pm_files = glob '*.pm';
    ```

An Alternate Syntax for Globbing

:   ```perl
    # used the angle-bracket syntax, similar to reading from a filehandle
    my @all_files = <*>;    # exactly the same as my @all_files = glob "*";
    my $dir = '/etc';
    my @dir_files = <$dir/* $dir/.*>;

    my @files = <FRED/*>;   # a glob
    my @lines = <FRED>;     # a filehandle read
    my @lines = <$fred>;    # a filehandle read
    my $name = 'FRED';
    my @files = <$name/*>;  # a glob

    my $name = 'FRED';
    my @lines = readline FRED;      # read from FRED
    my @lines = readline $name;     # read from FRED
    ```

    But **Perlers** rarely use the `readline` operator, as indirect filehandle reads
    are uncommon and are generally performed against a simple scalar variable
    anyway.

Directory Handles

:   ```perl
    my $dir_to_process = '/etc';
    opendir my $dh, $dir_to_process
        or die "Cannot open $dir_to_process: $!";
    foreach $file (readdir $dh) {
        print "one file in $dir_to_process is $file\n";
    }
    closedir $dh;
    ```

    ```perl
    opendir DIR, $dir_to_process
        or die "Cannot open $dir_to_process: $!";
    foreach $file (readdir DIR) {
        print "one file in $dir_to_process is $file\n";
    }
    closedir DIR;

    while ($name = readdir $dh) {
        next unless $name =~ /\.pm$/;
        ... more processing ...
    }

    next if $name =~ /^\./;
    next if $name eq '.' or $name eq '..';
    ```

Recursive Directory Listing

:   ```perl
    $ find2perl . -name '*.pm'
    #! /usr/bin/perl -w
    eval 'exec /usr/bin/perl -S $0 ${1+"$@"}'
    if 0; #$running_under_some_shell
    use strict;
    use File::Find ();
    # Set the variable $File::Find::dont_use_nlink if you're using AFS,
    # since AFS cheats.
    # for the convenience of &wanted calls, including -eval statements:
    use vars qw/*name *dir *prune/;
    *name = *File::Find::name;
    *dir = *File::Find::dir;
    *prune = *File::Find::prune;

    sub wanted;
    # Traverse desired filesystems
    File::Find::find({wanted => \&wanted}, '.');
    exit;
    sub wanted {
        /^.*\.pm\z/s
        && print("$name\n");
    }
    ```

Manipulating Files and Directories
:   Removing Files
      ~ ```perl
        # bash: rm slate bedrock lava
        unlink 'slate', 'bedrock', 'lava';
        unlink qw(slate bedrock lava);
        ```

    `unlink glob '*.o';`{.perl}

    ```perl
    my $successful = unlink "slate", "bedrock", "lava";
    print "I deleted $successful file(s) just now\n";

    foreach my $file (qw(slate bedrock lava)) {
        unlink $file or warn "failed on $file: $!\n";
    }
    ```

    Renaming Files
      ~ ```perl
        rename 'old' 'new'
        rename 'over_there/some/place/some_file' => 'some_file';

        foreach my $file (glob "*.old") {
            my $newfile = $file;
            $newfile =~ s/\.old$/.new/;
            if (-e $newfile) {
                warn "can't rename $file to $newfile: $newfile exists\n";
            } elsif (rename $file => $newfile) {
                # success, do nothing
            } else {
                warn "rename $file to $newfile failed: $!\n";
            }
        }

        # cleaner
        (my $newfile = $file) =~ s/\.old$/.new/;

        # even more clean
        my $newfile = $file =~ s/\.old$/.new/r;
        ```

Links and Files

:   ```perl
    # ln chicken egg
    link 'chicken', 'egg'
        or warn "can't link chicken to egg: $!";

    # ln -s dodgson carrol
    symlink 'dodgson', 'carroll'
        or warn "can't symlink dodgson to carroll: $!";
    ```

    **The file test `-l 'carroll'` would report true, but `-e 'carroll'` would be
    false.  It's a symlink, but its target doesn't exist.**

    ```perl
    my $where = readlink 'carroll';             # Gives "dodgson"
    my $perl  = readlink '/usr/local/bin/perl'; # Maybe tells where perl is
    ```

Making and Removing Directories

:   ```perl
    mkdir 'fred', 0755
        or warn "Cannot make fred directory: $!";

    my $name = "fred";
    my $permissions = "0755";
    mkdir $name, $permissions;      # danger...this isn't working
    mkdir $name, oct($permissions); # works, oct.

    # rmdir
    unlink glob "$temp_dir/* $temp_dir/.*"; # delete contents of $temp_dir
    rmdir $temp_dir; # delete now-empty directory

    # For a more robust solution, check out the `rmtree` function provided by
    # the File::Path module of the standard distribution.
    ```

Modifying Permissions

:   ```perl
    chmod 0755, 'fred', 'barney';
    ```

Changing Ownership

:   ```perl
    my $user = 1004;
    my $group = 100;
    chown $user, $group, glob '*.o';

    defined(my $user = getpwnam 'merlyn') or die 'bad user';
    defined(my $group = getgrnam 'users') or die 'bad group';
    chown $user, $group, glob '/home/merlyn/*';
    ```

Changing Timestamps

:   ```perl
    my $now = time;
    my $ago = $now - 24 * 60 * 60;          # seconds per day

    #    atime  mtime
    utime $now, $ago, glob '*';             # atime: now, mtime: a day ago
    # The third timestamp (the ctime value) is always set to "now" whenever
    # anything alters a file, so there's no way to set it
    ```

## Strings and Sorting

Finding a Substring with index

:   ```perl
    $where = index($big, $small);
    my $stuff = "Howdy world!";
    my $where1 = index($stuff, "w");                 # $where1 gets 2
    my $where2 = index($stuff, "w", $where1 + 1);    # $where2 gets 6
    my $where3 = index($stuff, "w", $where2 + 1);    # $where3 gets –1

    # last occurrence
    my $last_slash = rindex("/etc/passwd", "/");     # value is 4
    my $fred = "Yabba dabba doo!";
    my $where1 = rindex($fred, "abba");              # $where1 gets 7
    my $where2 = rindex($fred, "abba", $where1 - 1); # $where2 gets 1
    my $where3 = rindex($fred, "abba", $where2 - 1); # $where3 gets –1
    ```

Manipulating a Substring with substr

:   ```perl
    my $mineral = substr("Fred J. Flintstone", 8, 5); # gets "Flint"
    my $rock = substr "Fred J. Flintstone", 13, 1000; # gets "stone"
    my $pebble = substr "Fred J. Flintstone", 13;     # gets "stone"

    my $out = substr("some very long string", –3, 2); # $out gets "in"

    my $long = "some very very long string";
    my $right = substr($long, index($long, "l") );

    my $string = "Hello, world!";
    substr($string, 0, 5) = "Goodbye";                # "Goodbye, world!"

    substr($string, –20) =~ s/fred/barney/g;
    ```

Formatting Data with sprintf

:   ```perl
    my $date_tag = sprintf
        "%4d/%02d/%02d %2d:%02d:%02d",
        $yr, $mo, $da, $h, $m, $s;

    my $money = sprintf "%.2f", 2.49997;

    sub big_money {
        my $number = sprintf "%.2f", shift @_;
        # Add one comma each time through the do-nothing loop
        1 while $number =~ s/^(-?\d+)(\d\d\d)/$1,$2/;
        # Put the dollar sign in the right place
        $number =~ s/^(-?)/$1\$/;
        $number;
    }
    ```

Interpreting Non-Decimal Numerals

:   ```perl
    hex('DEADBEEF')             # 3_735_928_559 decimal
    hex('OxDEADBEEF')           # 3_735_928_559 decimal
    oct('0377')                 # 255 decimal
    oct('377')                  # 255 decimal
    oct('0xDEADBEEF')           # 3_735_928_559 decimal, saw leading 0x
    oct('0b1101')               # 13 decimal, saw leading 0b
    oct("0b$bits")              # convert $bits from binary
    ```

Advanced Sorting

:   ```perl
    sub by_number {
        # a sort subroutine, expect $a and $b
        if ($a < $b) { –1 } elsif ($a > $b) { 1 } else { 0 }
    }
    my @result = sort by_number @some_numbers;

    # spaceship operator (`<=>`).  -1 ,  0 , or  1
    sub by_number { $a <=> $b }

    # cmp, for string
    sub by_code_point { $a cmp $b }

    sub case_insensitive { "\L$a" cmp "\L$b" }

    use Unicode::Normalize;
    sub equivalents { NFKD($a) cmp NFKD($b) }

    # make sort routine "inline"
    my @numbers = sort { $a <=> $b } @some_numbers;
    ```

Sorting a Hash by Value

:   ```perl
    sub by_score { $score{$b} <=> $score{$a} }
    my %score = ("barney" => 195, "fred" => 205, "dino" => 30);
    my @winners = sort by_score keys %score;
    ```

Sorting by Multiple Keys

:   ```perl
    my @winners = sort by_score_and_name keys %score;
    sub by_score_and_name {
        $score{$b} <=> $score{$a} # by descending numeric score
        or
        $a cmp $b # code point order by name
    }

    @patron_IDs = sort {
        &fines($b) <=> &fines($a) or
        $items{$b} <=> $items{$a} or
        $family_name{$a} cmp $family_name{$b} or
        $personal_name{$a} cmp $family_name{$b} or
        $a <=> $b
    } @patron_IDs;
    ```

## Smart Matching and given-when

```perl
use 5.010001; # at least 5.10.1
```

The Smart Match Operator

:   ```perl
    my $flag = 0;
    foreach my $key ( keys %names ) {
        next unless $key =~ /Fred/;
        $flag = $key;
        last;
    }

    print "I found a key matching 'Fred'. It was $flag\n" if $flag;
    ```

    ```perl
    use 5.010001;
    say "I found a key matching 'Fred'" if %names ~~ /Fred/;
    say "I found a key matching 'Fred'" if /Fred/ ~~ %names; # same

    use 5.010001;
    say "The arrays have the same elements!"
        if @names1 ~~ @names2;
    ```

    ```perl
    use 5.010001;
    my @nums = qw( 1 2 3 27 42 );
    my $result = max( @nums );
    say "The result [$result] is one of the input values (@nums)"
        if @nums ~~ $result;
    ```

Smart Match Precedence

:   <http://perldoc.perl.org/perlsyn.html>

    See smart match operations for pairs of operands.[^smart-match-ops]

    [^smart-match-ops]: Smart match operations for pairs of operands

        | Example | Type of match |
        | :---: | :---: |
        | `%a ~~ %b` | hash keys identical |
        | `%a ~~ @b` or `@a ~~ %b` | at least one key in `%a` is in `@b` |
        | `%a ~~ /Fred/` or `/Fred/ ~~ %b` | at least one key matches pattern |
        | `'Fred' ~~ %a` | exists `$a{Fred}` |
        | `@a ~~ @b` | arrays are the same |
        | `@a ~~ /Fred/` | at least one element in `@a` matches pattern |
        | `$name ~~ undef` | `$name` is not defined |
        | `$name ~~ /Fred/` | pattern match |
        | `123 ~~ '123.0'` | numeric equality with "numish" string |
        | `'Fred' ~~ 'Fred'` | string equality |
        | `123 ~~ 456` | numeric equality |

    ```perl
    use 5.010001;
    say "match number ~~ string" if 4 ~~ '4abc';
    say "match string ~~ number" if '4abc' ~~ 4;
    ```

    You only get output for one of the smart matches:
      ~ `match string ~~ number`{.perl}
      ~ The first one is a string comparison even though it has a number on the
        lefthand side.  The only entry in the precedence table with a Num on
        the lefthand side expects a "numish" operand on the righthand side. The
        `4abc` doesn't look numish enough for Perl, so the smart match ends up at
        the final level where it has "Any" and "Any". The operation there is a
        string comparison.  The second one is a numeric comparison. It has "Any"
        on the lefthand side and "Num" on the righthand side. That's a couple
        of levels above the comparison the first one triggered.

The `given` Statement

:   It's Perl's equivalent to C's `switch` statement, but as with
    most things Perly, it's a bit more fancy so it gets a fancier name.

    ```perl
    use 5.010001;

    given ( $ARGV[0] ) {
        when ( 'Fred' ) { say 'Name is Fred' }
        when ( /fred/i ) { say 'Name has fred in it' }
        when ( /\AFred/ ) { say 'Name starts with Fred' }
        default { say "I don't see a Fred" }
    }
    ```

    In Perl parlance (`['pɑrləns]`, 说法, 语调), `given` is a **topicalizer** because it
    makes its argument the topic, the fancy new name for `$_` in Perl 6.

    ```perl
    use 5.010001;
    given ( $ARGV[0] ) {
        when ( 'Fred' ) { say 'Name is Fred'; continue }
        when ( /\AFred/ ) { say 'Name starts with Fred'; continue }
        when ( /fred/i ) { say 'Name has fred in it'; }
        default { say "I don't see a Fred" }
    }
    ```

Dumb Matching

:   ```perl
    use 5.010001;
    given ( $ARGV[0] ) {
        when ( $_ eq 'Fred' ) { say 'Name is Fred'; continue }
        when ( $_ =~ /\AFred/ ) { say 'Name starts with Fred'; continue }
        when ( $_ =~ /fred/i ) { say 'Name has fred in it'; }
        default { say "I don't see a Fred" }
    }
    ```

    You can even mix and match dumb and smart matching; the individual when
    expressions figure out their comparisons on their own:

    ```perl
    use 5.010001;
    given ( $ARGV[0] ) {
        when ( 'Fred' ) {                           #smart
            say 'Name is Fred'; continue }
        when ( $_ =~ /\AFred/ ) {                   #dumb
            say 'Name starts with Fred'; continue }
        when ( /fred/i ) {                          #smart
            say 'Name has fred in it'; }
        default { say "I don't see a Fred" }
    }
    ```

    Negated expressions, including a negated regular expression, don't use a
    smart match either. These cases are just like the control structure
    conditions you saw in previous chapters:

    ```perl
    # ???
    use 5.010001;
    given( $ARGV[0] ) {
        when( ! $boolean ) {                        #dumb
            say 'Name has fred in it' }
        when( ! /fred/i ) {                         #dumb
            say 'Does not match Fred' }
    }
    ```

Using `when` with Many Items

:   ```perl
    use 5.010001;
    foreach my $name ( @names ) {
        given( $name ) {
            ...
        }
    }
    ```

    ```perl
    use 5.010001;
    foreach ( @names ) { # don't use a named variable!
        say "\nProcessing $_";
        when ( /fred/i ) { say 'Name has fred in it'; continue }
        when ( /\AFred/ ) { say 'Name starts with Fred'; continue }
        when ( 'Fred' ) { say 'Name is Fred'; }

        say "Moving on to default...";
        default { say "I don't see a Fred" }
    }
    ```

## Processing Management

And like everything else in Perl, There's More Than One Way To Do It, with lots
of overlap, variations, and special features.

The system Function

:   ```perl
    system 'date';

    system 'ls -l  $HOME'; # bad
    system 'ls -l \$HOME'; # good

    system "long_running_command with parameters &";

    # shell script
    system 'for i in *; do echo == $i ==; cat $i; done';
    ```

Avoiding the Shell

:   ```perl
    system "tar cvf $tarfile @dirs"; # Oops!

    my $tarfile = 'something*wicked.tar';
    my @dirs = qw(fred|flintstone <barney&rubble> betty );
    system 'tar', 'cvf', $tarfile, @dirs;

    my @dirs = qw( ; rm -rf / );

    # same
    system $command_line;
    system '/bin/sh', '-c', $command_line;

    unless (system 'date') {
        # Return was zero, meaning success
        print "We gave you a date, OK!\n";
    }

    !system 'rm -rf files_to_delete' or die 'something went wrong';
    ```

The Environment Variables

:   ```perl
    # don't want the `IFS` environment variable to be set when you run the
    # command, because that might cause `make` or some subcommand
    # do the wrong thing
    $ENV{'PATH'} = "/home/rootbeer/bin:$ENV{'PATH'}";
    delete $ENV{'IFS'};
    ```

The `exec` Function

:   The `system` function creates a child process, which then scurries (`['skɝi]`, 急跑) off to
    perform the requested action while Perl naps (打盹儿). The `exec` function causes the
    Perl process itself to perform the requested action. Think of it as more
    like a "goto" than a subroutine call.

    ```perl
    chdir '/tmp' or die "Cannot chdir /tmp: $!";
    exec 'bedrock', '-o', 'args1', @ARGV;

    $ENV{PATH} = '/bin:/usr/bin';
    $ENV{DEBUG} = 1;
    $ENV{ROCK} = 'granite';
    chdir '/Users/fred';
    open STDOUT, '>', '/tmp/granite.out';
    exec 'bedrock';
    ```

    Having said that, it's actually quite rare to use  exec , except in
    combination with  fork (which you'll see later). If you are puzzling over
    system versus `exec`, just pick `system`, and nearly all of the time you'll
    be just fine. Except for handling the error when the requested command
    cannot be started:

    ```perl
    exec 'date';
    die "date couldn't run: $!";
    my $make_result = system 'make';
    ```

Using Backquotes to Capture Output

:   ```perl
    my $now = `date`;               # grab the output of date
    print "The time is now $now";   # newline already present

    my @functions = qw{ int rand sleep length hex eof not exit sqrt umask };
    my %about;
    foreach (@functions) {
        $about{$_} = `perldoc -t -f $_`;
    }

    # the generalized quoting operator,  qx()
    foreach (@functions) {
        $about{$_} = qx(perldoc -t -f $_);
    }
    ```

    As with the other generalized quotes, you mainly use this when the stuff
    inside the quotes is also the default delimiter. If you wanted to have a
    literal backquote in your command, you can use the `qx()` mechanism to **avoid
    the hassle of escaping the offending character**. There's another benefit to
    the generalized quoting, too. If you use the single quote as the delimiter,
    the quoting does not interpolate anything. If you want to use the shell's
    process ID variable `$$` instead of Perl's, you use `qx''` to avoid the
    interpolation: `my $output = qx'echo $$';`{.perl}.

    Avoid using backquotes in a place where the value isn't being captured.

    ```perl
    print "Starting the frobnitzigator:\n";
    `frobnitz -enable`;             # please don't do this
    print "Done!\n";

    my $output_with_errors = `frobnitz -enable 2>&1`;
    my $result = `some_questionable_command arg arg argh </dev/null`;
    ```

Using Backquotes in a List Context

:   ```perl
    my $who_text = `who`;
    my @who_lines = split /\n/, $who_text;
    ```

    But in a list context, we automatically get the data broken up by lines:

    ```perl
    my @who_lines = `who`;

    foreach (`who`) {
        my($user, $tty, $date) = /(\S+)\s+(\S+)\s+(.*)/;
        $ttys{$user} .= "$tty at $date\n";
    }
    ```

External Processes with `IPC::System::Simple`

:   There's really not that much to say about this module because it is truly
    simple. You can use it to replace the built-in system with its own ** more
    robust** version:

    ```perl
    use IPC::System::Simple qw(system);
    my $tarfile = 'something*wicked.tar';
    my @dirs = qw(fred|flintstone <barney&rubble> betty );
    system 'tar', 'cvf', $tarfile, @dirs;
    ```

    It also provides a `systemx` that never uses the shell, so you should never
    have the problem of unintended shell actions:
    `systemx 'tar', 'cvf', $tarfile, @dirs;`{.perl}.

    If you want to capture the output, you change the `system` or `systemx` to
    `capture` or `capturex`, both of which work like backquotes (but better):

    ```perl
    my @output = capturex 'tar', 'cvf', $tarfile, @dirs;
    ```

Processes as Filehandles

:   ```perl
    open DATE, 'date|' or die "cannot pipe from date: $!";
    open MAIL, '|mail merlyn' or die "cannot pipe to mail: $!";

    open my $date_fh, '-|', 'date' or die "cannot pipe from date: $!";
    open my $mail_fh, '|-', 'mail', 'merlyn'
        or die "cannot pipe to mail: $!";

    my $now = <$date_fh>;

    close $mail_fh;
    die "mail: non-zero exit of $?" if $?;

    open my $find_fh, '-|',
        'find', qw( / -atime +90 -size +1000 -print )
            or die "fork: $!";

    while (<$find_fh>) {
        chomp;
        printf "%s size %dK last accessed %.2f days ago\n",
            $_, (1023 + -s $_)/1024, -A $_;
    }
    ```

Getting Down and Dirty with Fork

:   Quick reimplementation of this: `system 'date';`{.perl}

    ```perl
    defined(my $pid = fork) or die "Cannot fork: $!";
    unless ($pid) {
        # Child process is here
        exec 'date';
        die "cannot exec date: $!";
    }
    # Parent process is here
    waitpid($pid, 0);
    ```

Sending and Receiving Signals

:   That's easy enough if you know that `SIGINT` corresponds to the number 2:

    ```perl
    kill 2, 4201 or die "Cannot signal 4201 with SIGINT: $!";

    kill 'INT', 4201 or die "Cannot signal 4201 with SIGINT: $!";
    ```

    You can even use the `=>` operator to automatically quote the signal name:

    ```perl
    kill INT => 4201 or die "Cannot signal 4201 with SIGINT: $!";
    ```

## Some Advanced Perl Techniques

What you've seen so far is the core of Perl, the part that you as a Perl user
should understand. But there are many other techniques that, while not
obligatory, are still valuable tools to have in your toolbox. We've gathered
the most important of those for this chapter. This also segues into the
continuation of this book, Intermediate Perl, which is your next step in Perl.

Slices

:   ```perl
    my(undef, $card_num, undef, undef, undef, $count) = split /:/;
    ```

    Perl can index into a list as if it were an array. This is a list slice.
    Here, since the  mtime is item  9 in the list returned by `stat`, you can
    get it with a subscript:

    ```perl
    my $mtime = (stat $some_file)[9];

    my $mtime =  stat($some_file)[9]; # Syntax error!
    ```

    ```perl
    my $card_num             = (split /:/)[1];
    my $count                = (split /:/)[5];
    my($card_num, $count)    = (split /:/)[1, 5];
    my($first, $last)        = (sort @names)[0, –1];
    ```

Array Slice

:   <div class="tzx-fright">
    ![](http://whudoc.qiniudn.com/array-slice.png)
    </div>

    That previous example could be made even simpler. When slicing elements
    from an array (as opposed to a list), the parentheses aren't needed. So we
    could have done the slice like this:

    ```perl
    my @numbers = @names[ 9, 0, 2, 1, 0 ];
    ```

Hash Slice

:   <div class="tzx-fright">
    ![](http://whudoc.qiniudn.com/hash-slice.png)
    </div>

    ```perl
    my @names = qw{ zero one two three};
    print "Bedrock @names[ 2, 1, 0 ]\n";
    ```

    ```perl
    my @players = qw/ barney fred dino /;
    my @bowling_scores = (195, 205, 30);
    @score{ @players } = @bowling_scores;

    print "Tonight's players were: @players\n";
    print "Their scores were: @score{@players}\n";
    ```

Trapping Errors

:   See the third book in this series, Mastering Perl, for an in-depth
    examination of error handling in Perl.

    With just basic Perl, you throw an exception with `die` and catch it with
    `eval`. You can inspect the value of `$@` to figure out what happened:

    ```perl
    eval {
        ...;
        die "An unexpected exception message" if $unexpected;
        die "Bad denominator" if $dino == 0;
        $barney = $fred / $dino;
    }

    if ( $@ =~ /unexpected/ ) {
        ...;
    }
    elsif( $@ =~ /denominator/ ) {
        ...;
    }
    ```

    ```perl
    use Try::Tiny;
    try {
        ...; # some code that might throw errors
    }
    catch {
        ...; # some code to handle the error
    }
    finally {
        ...;
    }
    ```

    ```perl
    use autodie;
    $filename = '/does/not/exist'
    open my $fh, '>', $filename;            # still dies on error
    ```

    If this fails, you get the error message you might have chosen yourself:
    `Can't open '/does/not/exist' for writing: No such file or directory`

    `use autodie qw( open system :socket );`{.perl}

    You might combine `autodie` with `Try::Tiny`:

    ```perl
    use 5.010;
    use autodie;
    use Try::Tiny;
    try {
        open my $fh, '>', $filename; # still dies on error
    }
    catch {
        when( 'open' ) { say 'Got an open error' }
    };
    ```

Picking Items from a List with grep

:   ```perl
    my @odd_numbers;
    foreach (1..1000) {
        push @odd_numbers, $_ if $_ % 2;
    }

    my @odd_numbers = grep { $_ % 2 } 1..1000;

    my @matching_lines = grep { /\bfred\b/i } <$fh>;
    my @matching_lines = grep /\bfred\b/i, <$fh>;
    ```

    ```perl
    my $line_count = grep /\bfred\b/i, <$fh>;

    my @matching_lines = grep /\bfred\b/i, <$fh>;
    my $line_count = @matching_lines;
    ```

Transforming Items from a List with map

:   ```perl
    my @data = (4.75, 1.5, 2, 1234, 6.9456, 12345678.9, 29.95);
    my @formatted_data = map { &big_money($_) } @data;

    print "The money numbers are:\n",
        map { sprintf("%25s\n", $_) } @formatted_data;

    my @data = (4.75, 1.5, 2, 1234, 6.9456, 12345678.9, 29.95);
    print "The money numbers are:\n",
        map { sprintf("%25s\n", &big_money($_) ) } @data;

    print "Some powers of two are:\n",
        map "\t" . ( 2 ** $_ ) . "\n", 0..15;
    ```

Fancier List Utilities

:   ```perl
    my $first_match;
    foreach (@characters) {
        if (/\bPebbles\b/i) {
            $first_match = $_;
            last;
        }
    }
    ```

    ```perl
    use List::Util qw(first);
    my $first_match = first { /\bPebbles\b/i } @characters;

    use List::Util qw(sum);
    my $total = sum( 1..1000 ); # 500500

    use List::Util qw(max);
    my $max = max( 3, 5, 10, 4, 6 );

    use List::Util qw(maxstr);
    my $max = maxstr( @strings );

    use List::Util qw(shuffle);
    my @shuffled = shuffle(1..1000); # randomized order of elements

    use List::MoreUtils qw(none any all);
    if (none { $_ > 100 } @numbers) {
        print "No elements over 100\n"
    } elsif (any { $_ > 50 } @numbers) {
        print "Some elements over 50\n";
    } elsif (all { $_ < 10 } @numbers) {
        print "All elements are less than 10\n";
    }
    ```

    If you want to deal with the list in groups of items, you can use the
    `natatime` (N at a time) to handle that for you:

    ```perl
    use List::MoreUtils qw(natatime);
    my $iterator = natatime 3, @array;
    while( my @triad = $iterator->() ) {
        print "Got @triad\n";
    }

    use List::MoreUtils qw(mesh);
    my @abc = 'a' .. 'z';
    my @numbers = 1 .. 20;
    my @dinosaurs = qw( dino );
    my @large_array = mesh @abc, @numbers, @dinosaurs;
    ```

---

## A. Exercise Answers

## B. Beyond the Llama (`['lɑmə]`, 美洲驼)

We don't expect many readers to read every word of this appendix, but we hope
you'll at least **skim the headings so that you'll be prepared to fight back**
when someone tells you, "You just can't use Perl for project X because Perl
can't do Y."

The most important thing to keep in mind (so that we're not repeating it in
every paragraph) is that the most important part of what we're not covering
here is covered in Intermediate Perl, also known as "the Alpaca" (`[æl'pækə]`, 羊驼).

After the Alpaca, you'll be ready to move on to Mastering Perl, also know as
"the Vicunas" (`[vi'kju:nə]`, 骆马) It covers the everyday tasks that you'll want to do while
programming Perl, such as benchmarking and profiling, program configuration,
and logging. It also goes through the work you'll need to do to deal with code
written by other people and how to integrate that into your own applications.

- [perltoc](http://perldoc.perl.org/perl.html)
- [perfaq](http://perldoc.perl.org/perlfaq.html)
- [perldoc](http://perldoc.perl.org)

RegExp

- [perlmod](http://perldoc.perl.org/perlmod.html)
- [perlmodlib](http://perldoc.perl.org/perlmodlib.html)

Other Operators and Functions

- [perlop](http://perldoc.perl.org/perlop.html)
- [perlfunc](http://perldoc.perl.org/perlfunc.html)

Transliteration with `tr///`

Here Documents

:   Here documents are a useful form of multiline string quoting; see the
    perldata documentation.

Mathematics

  - Advanced Math Functions
  - Imaginary and Complex Numbers
  - Large and High-Precision Numbers

Lists and Arrays

  - map and grep

Bits and Pieces

Formats

Networking and IPC

  - System V IPC
  - Sockets
  - Security

Probably the most important of these is data-flow analysis, better known as
taint checking.

- [perlsec](http://perldoc.perl.org/perlsec.html)

Debugging

- [perldebug](http://perldoc.perl.org/perldebug.html)

Command-Line Options

- [perlrun](http://perldoc.perl.org/perlrun.html)

Converting Other Languages to Perl

- sed, awk --a2p, s2p--> perl

C in perl: http://perldoc.perl.org/perlxs.html

find2perl /tmp -atime +14 -eval unlink >Perl-program

Command-Line Options in Your Programs

Embedded Documentation

Perl's own documentation is written in pod (plain-old documentation) format. You can
embed this documentation in your own programs, and it can then be translated to text,
HTML, or many other formats as needed. See the perlpod documentation. The Alpaca
book covers this, too.

More Ways to Open Filehandles

There are other modes to use in opening a filehandle; see the perlopentut documenta-
tion. The  open built-in is so feature-full that it gets its own documentation page.

Threads and Forking

Perl now has support for threads. Although this is experimental (as of this writing), it
can be a useful tool for some applications. Using  fork (where it's available) is better
supported; see the perlfork and perlthrtut documentation.

Thank you, Larry!

## C. A Unicode Primer

Unicode
The Unicode Character Set (UCS) is an abstract mapping of characters to code points.

You use the  NFKD subroutine (Normalization
Form Kompatibility Decomposition).

Since we don't actually read each letter in a word and instead recognize it as
a whole, the ligature is a slight improvement in our pattern recognition. So,
typographers combine the two graphemes.

```perl
use utf8;
use Unicode::Normalize;
# U+FB01 - fi ligature
# U+0065 U+0301 - decomposed é
# U+00E9 - composed é
binmode STDOUT, ':utf8';
my $string =
"Can you \x{FB01}nd my r\x{E9}sum\x{E9}?";
if( $string =~ /\x{65}\x{301}/ ) {
    print "Oops! Matched a decomposed é\n";
}
if( $string =~ /\x{E9}/ ) {
    print "Yay! Matched a composed é\n";
}
my $nfd = NFD( $string );
if( $nfd =~ /\x{E9}/ ) {
    print "Oops! Matched a composed é\n";
}
if( $nfd =~ /fi/ ) {
    print "Oops! Matched a decomposed fi\n";
}
my $nfkd = NFKD( $string );
if( $string =~ /fi/ ) {
    print "Oops! Matched a decomposed fi\n";
}
if( $nfkd =~ /fi/ ) {
    print "Yay! Matched a decomposed fi\n";
}
if( $nfkd =~ /\x{65}\x{301}/ ) {
    print "Yay! Matched a decomposed é\n";
}
```

```tzx-plain
Yay! Matched a composed é
Yay! Matched a decomposed fi
Yay! Matched a decomposed é
```

Fancier Characters by Name

:   `my $string = "\N{THAI CHARACTER KHOMUT}"; # U+0E5B, ๛`{.perl}

If you want to set the encoding for all filehandles that you will open, you can
use the open pragma. You can affect all input or all output filehandles:

```perl
use open IN => ':encoding(UTF-8)';
use open OUT => ':encoding(UTF-8)';

use open IN => ":crlf", OUT => ":bytes";
```

If you want to use the same encoding for both input and output, you can set
them at the same time, either using  IO or omitting it:

```perl
use open IO => ":encoding(iso−8859−1)";
use open ':encoding(UTF-8)';
```

Dealing with Command-Line Arguments

:   ```perl
    use I18N::Langinfo qw(langinfo CODESET);
    use Encode qw(decode);
    my $codeset = langinfo(CODESET);
    foreach my $arg ( @ARGV ) {
        push @new_ARGV, decode $codeset, $_;
    }
    ```

Further Reading

There are several parts of the Perl documentation that will help you with the
Perl parts, including the perlunicode, perlunifaq, perluniintro, perluniprops,
perlunitut documentation. Don't forget to check the documentation for any of
the Unicode modules that you use.

Symbols

有意思。

---

Notes

```perl
$hash->{key}
$list->[0]
$obj->method()

# 之外，还有一个神奇的功能来实现autobox,也就是所谓的·一切皆对象·
my $len = sub { length(shift) };
"hello"->$len();

$x = "I like dogs.";
$y = $x =~ s/dogs/cats/r;
print "$x $y\n"; # prints "I like dogs. I like cats."

# here doc
my $str = <<__;
some string here
bla blah
__

while(<$fh>)
{
    next if 1..100; # skip 1 ~ 100 line
    ...
}

(1,2,3) x 3 # (1,2,3,1,2,3,1,2,3)

# goto
LABEL:
for ( @list_A) {
    for ( @list_B ) {
       ...;
       next LABEL;
    }
}

my $x = 1;
my $y = 2;
print "$x + $y = @{[ $x + $y ]}"
```

Ideas

  - autovivification
  - heredoc

---

basename

:   `$0` is typically the name of your program, so how about this?

    ```perl
    use Cwd 'abs_path';
    print abs_path($0);
    ```

    Small comment, on activestate perl on windows $0 typically contains
    backslashes and abs_path returned forward slashes, so a quick "tr /\//\\/;"
    was needed to fix it.

    ```perl
    use File::Basename;
    my $dirname = dirname(__FILE__);
    ```

rm, cp, mv

:   ```perl
    # rm
    unlink $file;
    unlink @files;

    # mv
    rename $old_name, $new_name;

    use File::Copy qw(move);
    move $old_name, $new_name;

    # cp
    use File::Copy qw(copy);
    copy $old_file, $new_file;
    ```

trim first five lines

```bash
cat filein.txt | perl -e "while(<>){ next if 1..5; print; }" > fileout.txt
```
