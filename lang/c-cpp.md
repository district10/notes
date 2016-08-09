---
title: C & C++ Notes
...

C & C++ Notes
=============

[我的算法学习之路 - Lucida](http://lucida.me/blog/on-learning-algorithms/) -<

:   基友在人人发百度实习内推贴，当时自我感觉牛逼闪闪放光芒，于是就抱着看看国内IT环
    境+虐虐面试官的变态心理投了简历，结果在第一面就自己的师兄爆出翔：他让我写一个
    stof（字符串转浮点数），我磨磨唧唧半天也没写出完整实现，之后回到宿舍赶快写了一
    个版本发到师兄的邮箱，结果对方压根没鸟我。

    这件事对我产生了很大的震动——

    -   原来自己连百度实习面试都过不去。
    -   原来自己还是一个编程弱逼。
    -   原来自己还是一个算法菜逼。

    我也很happy，因为没想到自己写的库居然比MS的还要快几十倍，同时小十几倍。

    从这个事情之后我变得特别理解那些造轮子的人——你要想想，如果你需要一个飞机轮子但
    市场上只有自行车轮子而且老板还催着你交工，你能怎么搞。

    实习实习着就到了研二暑假，接下来就是求职季。

    求职季时我有一种莫名的复仇感——尼玛之前百度实习面试老子被你们黑的漫天飞翔，这回求职老子要把你们一个个黑回来，尼玛。

    现在回想当时的心理实属傻逼+幼稚，但这种黑暗心理也起了一定的积极作用：我丝毫不敢
    有任何怠慢，以至于在5月份底我就开始准备求职笔试面试，比身边的同学早了两个月不止。

    我没有像身边的同学那般刷题——而是继续看书抄代码学算法，因为我认为那些难得离谱的
    题面试官也不会问——事实上也是如此。

    编程珠玑&更多的编程珠玑

    没听说过这两本书请自行面壁。前者偏算法理论，后者偏算法轶事，前者提升能力，后者增长谈资，都值得一读。

    证明简单代码段的正确性是一个很神奇的技能——因为面试时大多数公司都会要求在纸上写
    一段代码，然后面试官检查这段代码，如果你能够自己证明自己写的代码是正确的，面试
    官还能挑剔什么呢？

    之后就是各种面试，详情见之前的博客，总之就是**项目经历**、**纸上代码**加**正确
    性证明**这三板斧，摧枯拉朽。

    MIT教授Erik Demaine则更为直接：

    >   If you want to become a good programmer, you can spend 10 years
    >   programming, or spend 2 years programming and learning algorithms.

[9个offer，12家公司，35场面试，从微软到谷歌，应届计算机毕业生的2012求职之路 - _Luc_ - 博客园](http://www.cnblogs.com/figure9/archive/2013/01/09/2853649.html) -<

:   外企（Google、MS、Yahoo等）>国内互联网（阿里、腾讯、百度、网易等）>企事业单位（基本不考虑）

    我的微软mentor曾提到过，我的实习面试表现一般，但后来表现出的动手能力大大超出之
    前面试的预估，而有些面试表现很出色，问题对答如流的选手，入职之后反而不是很理想
    ，至少没有达到面试时发挥出的水准。

    这说明一个问题，就是**笔试面试，准备和不准备会差异很大**。如果你的简历不是那么NB，
    那就只能靠笔试和面试的加分撑场面。身边经常有同学纳闷这样代码都编不利索的傻屌都
    能进MS为什么我不能进，答案往往很简单：人家比你多准备了一个月。平时电脑上写程序
    可能很利索，笔试面试时在纸上写写试试你就知道什么叫拙计。

    IT公司的笔试和面试的题量都不大（相对于企事业单位和银行动辄上百道选择题的题量，
    算是很少），一般十几道选择题，三四道大题就算题量很大。但计算机的东西实在又是太
    多，程序设计、数据结构、算法设计、操作系统、体系结构、编译原理、数据库、软件工
    程等分支，编译的话太难（一千个码农里也没几个人能在纸上写一个最基础的递归下降
    LLParser），软件工程、体系结构、数据库这些太水（不是说这些分支没用，而是它们很
    难考察，尤其对应届生来说这些都是些文字游戏，比如说面向对象的三要素五原则，有个
    鸟用），这么一排除，再把数据结构和算法设计一合并，就剩下**程序设计**、**算法**和
    **操作系统**。没错，这三项搞定，国内外IT公司通杀。

    Tips

    -   重温之前自己做过的靠谱项目，并总结里面的关键难题和解决思路
    -   重读Programming Pearls和More Programming Pearls，并完成所有课后题
    -   独立解决编程之美里面的题目（国内不少企业选题用的这本书）
    -   完成Careercup里Amazon、Google和Microsoft这三个分类下面的前20页面试题
    -   完成TopCoder的数十道D1L2~D2L1难度区间的算法题目
    -   重读Computer Systems a Programmer's Perspective的关键章节，回顾里面的关键点

    从七月底开始一直到十一月，花了接近四个月，很多东西都是一边面试一边准备：面试->发现盲点->修复盲点。

    简历

    -   篇幅。控制在一页以内。倒不是说不能写两页，而是HR没时间看两页这么多。而且就
        我看过的几百封简历而言，凡是超过两页的没一个靠谱，有这么高的先验概率，HR才
        没工夫一个个筛，反正中国有的是人。
    -   重点。一定要有重点，做到让 HR 通过简历在 20 秒内确定你靠不靠谱。可以用加黑字体进行视觉引导。
    -   别字。千万不要出现错别字，别字简历一般直接干掉。一页的简历都能出问题，一般不会靠谱。

    但是研发的算法题是一样的，最后一道算法题很有意思，我花了一个多小时才想到利用组
    合数学里面的知识（多元一次方程非负解）给出设计方案，后来和面试官聊这道题时他们
    也挺吃惊，因为我的方案比他们的答案还要优化。

    微软：

    -   题型只有**二十道不定项选择题**，难度较难，要求在一小时四十分钟完成。难度较难，
        覆盖面非常广，从设计模式，算法分析，代码阅读到C++语言特性，甚至连冷门的函数
        式程序设计语言都有涉及。
    -   微软的笔试题目BT之处在于其独特的积分机制：答对了加分，不答无分，答错了倒扣。
        这就使得很多ds答完试卷感觉自我良好但实际已经被倒扣出翔。以最后一道题为例，
        答对了加7分，答错倒扣13分，相当于一下子损失20分。所以微软的笔试题会做就得
        做对，不会做就别蒙，要不更惨。
    -   此外，微软的笔试题是英文的，加上时间比较短，有些人题都读不完，有些 ds 连
        functional language是什么都不知道，自然败的很惨。

    从笔试题可以明显看出，国外的大型IT公司（比如雅虎，微软和谷歌等）并不在意你现在
    的skill set，而更看重你的potential，因此题目大多很基础，并具备相当的深度，以确
    保你对CS有深刻的理解并能够走的很远；而国内的IT公司（比如百度、搜狗和人人等）更
    看重你现在的skill set，因此会出现不少语言特性，OS操作之类的具体题目，以确保你能
    够以尽快的速度上手干活，至于能发展到啥程度他们就不care了。

    考虑到几乎所有的公司都有编程题目，也就是在纸上写代码，这里推荐几本相关书籍：

    -   1 Elements of programming style 2nd，写出良好风格的代码。纸上代码一般不长，但短短几行代码往往可以看出这个人的水准，风格很差的代码往往会被pass掉。
    -   2 Algorithm design manual 2nd，作为非ACM出身的码农，这本书比算导实用很多，课后题也很实在，对回溯，动态规划这些编程技巧讲的非常清楚。
    -   3 C interfaces and implementation，无论是面试还是笔试，一般都会用C写程序，这本书包含大量的工业级C代码，绝佳的参考和模仿素材。

    最后推荐下Elements of programming和Structure and interpretation of computer
    programs，这两本书难度很高，需要大量的时间阅读，不适合临场阅读准备，但读过后，
    写出的代码绝逼会上两个层次，这里我就不多介绍了。

[C (programming language) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/C_(programming_language))

:   nil.

[C++ - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/C%2B%2B)

:   C++ (pronounced as cee plus plus, `/ˈsiː plʌs plʌs/`) is a general-purpose
    programming language. It has imperative, object-oriented and generic
    programming features, while also providing facilities for low-level memory
    manipulation.

一定要到 [cppreference.com](http://en.cppreference.com/w/) 多看看，
上面有函数说明，有 demo 代码，还有 Possible implementation 什么的！
简直了。

Tips

-   ambiguity: declaration or multiplication? -<

    :   ```cpp
        Class::X *p;
        // X can be object of Class, or a nested class.
        // so ambi'guity occurs
        type::type   * p;       // declare
        type::object * p;       // multiplication
        ```

-   2d-vector is esier to use -<

    :   ```cpp
        // c
        int **ary = new int*[row_num];
        for(int i = 0; i < row_num; ++i) {
            ary[i] = new int[col_num];
        }
        // delete[] ary[0];

        // cpp
        vector<vector<int> > ary(row_num, vector<int>(col_num, 0));
        ```

-   使用 reserve 来避免不必要的重新分配 -<

    :   ```cpp
        // std::vector, Defined in header <algorithm>
        void std::vector::reserve( size_type new_cap );
        vector<int> nums;
        nums.reserve( 25 );
        ```

        refs and see also

        -   [std::vector::reserve - cppreference.com](http://en.cppreference.com/w/cpp/container/vector/reserve)

-   even *vs* odd，奇偶数判断 -<

    :   ```cpp
        // even
        x % 2
        // odd
        x % 2 != 0
        x & 0x1
        ```

-   equal? float/double 数的判等 -<

    :   ```cpp
        // for int
        a == b
        // for double
        fabs(a-b) < 1e-9。
        ```

-   文件读写，用 FILE，fscanf 或者 ifstream，getline -<

    :   ```cpp
        FILE *fp = fopen(filename, "r");
        while( 2 == fscanf( fp, "%d %s", &index, buf ) ) {
            // ...
        }
        fclose(fp);
        ```

        ```cpp
        std::ifstream file(filename.c_str(), ifstream::in);
        // 和 Qt 那一套不太一样，不需要显式地 open
        if ( !file || !file.is_open() ) { exit(-1); }

        string line;
        while (getline(file, line)) {
            // ...
        }
        ```

-   `T::iterator`{.cpp}, `T::const_iterator`{.cpp}, `begin`{.cpp}, `end`{.cpp} -<

    :   -   begin, end, cbegin, cend, rbegin, rend
        -   iterator, const_iterator, reverse_iterator

        ```cpp
        template<typename Container, typename Function>
        void for_each(Container&& cont, Function f) {
            using std::begin;
            auto it = begin(cont);
            using std::end;
            auto end_it = end(cont);
            while (it != end_it) {
                f(*it);
                ++it;
            }
        }
        ```

        ```cpp
        #include <iostream>
        #include <vector>
        #include <iterator>

        int main()
        {
            std::vector<int> v = { 3, 1, 4 };
            auto vi = std::begin(v);
            std::cout << *vi << '\n';

            int a[] = { -5, 10, 15 };
            auto ai = std::begin(a);
            std::cout << *ai << '\n';
        }
        ```

        `std::reverse_iterator<std::string::iterator> r = s.rbegin()`{.cpp} -<

        :   ![](http://upload.cppreference.com/mwiki/images/3/39/range-rbegin-rend.svg)

            ```cpp
            #include <iostream>
            #include <string>
            #include <iterator>

            int main()
            {
                std::string s = "Hello, world";
                std::reverse_iterator<std::string::iterator> r = s.rbegin();
                r = 'O'; // replaces 'o' with 'O'
                r += 7; // iterator now points at 'O'
                std::string rev(r, s.rend());
                std::cout << rev << '\n'; // "OlleH"
            }
            ```

        refs and see also

        -   [std::iterator - cppreference.com](http://en.cppreference.com/w/cpp/iterator/iterator)
        -   [std::begin - cppreference.com](http://en.cppreference.com/w/cpp/iterator/begin)
        -   [std::end - cppreference.com](http://en.cppreference.com/w/cpp/iterator/end)
        -   [std::reverse_iterator - cppreference.com](http://en.cppreference.com/w/cpp/iterator/reverse_iterator)
        -   [std::ostream_iterator - cppreference.com](http://en.cppreference.com/w/cpp/iterator/ostream_iterator)

-   `std::min`, `std::max`, `std::minmax` -<

    :   ```cpp
        // misc
        std::max(1, 9999)
        std::max('a', 'b')
        std::max( { "foo", "bar", "hello" },
                [](const std::string& s1, const std::string& s2) {
                    return s1.size() < s2.size();
                });
        ```

        ```cpp
        template<class T, class Compare>
        std::pair<const T&, const T&> minmax( const T& a, const T& b, Compare comp )
        {
            return comp(b, a) ? std::pair<const T&, const T&>(b, a)
                              : std::pair<const T&, const T&>(a, b);
        }
        ```

        ```cpp
        #include <algorithm>
        #include <iostream>
        #include <vector>
        #include <cstdlib>
        #include <ctime>

        int main()
        {
            std::vector<int> v {3, 1, 4, 1, 5, 9, 2, 6};
            // or, std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6};
            std::srand(std::time(0));
            std::pair<int, int> bounds = std::minmax(std::rand() % v.size(),
                                                     std::rand() % v.size());

            std::cout << "v[" << bounds.first << "," << bounds.second << "]: ";
            for (int i = bounds.first; i < bounds.second; ++i) {
                std::cout << v[i] << ' ';
            }
            std::cout << '\n';
        }

        /*
        Possible output:

        v[2,7]: 4 1 5 9 2
        */
        ```

        refs and see also

        -   [std::max - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/max)
        -   [std::minmax - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/minmax)

-   `std::map`{.cpp} -<

    :   `std::map`{.cpp} is a sorted associative container that contains key-value pairs
        with unique keys. Keys are sorted by using the comparison function Compare.
        Search, removal, and insertion operations have logarithmic complexity. Maps
        are usually implemented as red-black trees.

        ```cpp
        #include <iostream>
        #include <sstream>
        #include <iterator>
        #include <numeric>

        int main()
        {
            std::istringstream str("0.1 0.2 0.3 0.4");
            std::partial_sum( std::istream_iterator<double>(str),
                              std::istream_iterator<double>(),
                              std::ostream_iterator<double>(std::cout, " ") );
        }
        ```

        Output: `0.1 0.3 0.6 1`

        refs and see also

        -   [std::map - cppreference.com](http://en.cppreference.com/w/cpp/container/map)

-   `std::partial_sum` -<

    :   ```
        // Defined in header <numeric>
        *(d_first)   = *first;
        *(d_first+1) = *first + *(first+1);
        *(d_first+2) = *first + *(first+1) + *(first+2);
        *(d_first+3) = *first + *(first+1) + *(first+2) + *(first+3);
        ...
        ```

-   `std::equal_range` -<

    :   Returns a range containing all elements equivalent to value in the range
        `[first, last)`.

        ```cpp
        template<class ForwardIt, class T, class Compare>
        std::pair<ForwardIt,ForwardIt>
            equal_range(ForwardIt first, ForwardIt last,
                        const T& value, Compare comp);
        {
            return std::make_pair(std::lower_bound(first, last, value, comp),
                                  std::upper_bound(first, last, value, comp));
        }
        ```

        ```cpp
        #include <algorithm>
        #include <vector>
        #include <iostream>

        struct S
        {
            int number;
            char name;

            S ( int number, char name  )
                : number ( number ), name ( name )
            {}

            // only the number is relevant with this comparison
            bool operator< ( const S& s ) const
            {
                return number < s.number;
            }
        };


        int main()
        {
            // note: not ordered, only partitioned w.r.t. S defined below
            std::vector<S> vec = { {1,'A'}, {2,'B'}, {2,'C'}, {2,'D'}, {4,'G'}, {3,'F'} };

            S value ( 2, '?' );

            auto p = std::equal_range(vec.begin(),vec.end(),value);

            for ( auto i = p.first; i != p.second; ++i )
                std::cout << i->name << ' ';
        }
        ```

        ```cpp
        #include <cstddef>
        #include <new>
        #include <vector>
        #include <iostream>

        // minimal C++11 allocator with debug output
        template <class Tp>
        struct NAlloc {
            typedef Tp value_type;
            NAlloc() = default;
            template <class T> NAlloc(const NAlloc<T>&) {}
            Tp* allocate(std::size_t n) {
                n *= sizeof(Tp);
                std::cout << "allocating " << n << " bytes\n";
                return static_cast<Tp*>(::operator new(n));
            }
            void deallocate(Tp* p, std::size_t n) {
                std::cout << "deallocating " << n*sizeof*p << " bytes\n";
                ::operator delete(p);
            }
        };
        template <class T, class U>
        bool operator==(const NAlloc<T>&, const NAlloc<U>&) { return true; }
        template <class T, class U>
        bool operator!=(const NAlloc<T>&, const NAlloc<U>&) { return false; }

        int main()
        {
            int sz = 100;
            std::cout << "using reserve: \n";
            {
                std::vector<int, NAlloc<int>> v1;
                v1.reserve(sz);
                for(int n = 0; n < sz; ++n)
                    v1.push_back(n);
            }
            std::cout << "not using reserve: \n";
            {
                std::vector<int, NAlloc<int>> v1;
                for(int n = 0; n < sz; ++n)
                    v1.push_back(n);
            }
        }
        ```

        Possible output:

        ```
        using reserve:
        allocating 400 bytes
        deallocating 400 bytes
        not using reserve:
        allocating 4 bytes
        allocating 8 bytes
        deallocating 4 bytes
        allocating 16 bytes
        deallocating 8 bytes
        allocating 32 bytes
        deallocating 16 bytes
        allocating 64 bytes
        deallocating 32 bytes
        allocating 128 bytes
        deallocating 64 bytes
        allocating 256 bytes
        deallocating 128 bytes
        allocating 512 bytes
        deallocating 256 bytes
        deallocating 512 bytes
        ```

        refs and see also

        -   [std::equal_range - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/equal_range)

-   `upper_bound` & `lower_bound` -<

    :   Returns an iterator pointing to the first element in the range
        `[first, last)` that is greater than value.

        ```cpp
        #include <algorithm>
        #include <iostream>
        #include <iterator>
        #include <vector>

        int main()
        {
            std::vector<int> data = { 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };

            auto lower = std::lower_bound(data.begin(), data.end(), 4);
            auto upper = std::upper_bound(data.begin(), data.end(), 4);

            std::copy(lower, upper, std::ostream_iterator<int>(std::cout, " "));
        }
        ```

        output: 4 4 4

        ```cpp
        #include <iostream>
        #include <sstream>
        #include <iterator>
        #include <numeric>

        int main()
        {
            std::istringstream str("0.1 0.2 0.3 0.4");
            std::partial_sum( std::istream_iterator<double>(str),
                              std::istream_iterator<double>(),
                              std::ostream_iterator<double>(std::cout, " "));
        }

        /*
        Output:

        0.1 0.3 0.6 1
        */
        ```

        ```cpp
        template<class ForwardIt, class T>
        ForwardIt upper_bound(ForwardIt first, ForwardIt last, const T& value)
        {
            ForwardIt it;
            typename std::iterator_traits<ForwardIt>::difference_type count, step;
            count = std::distance(first,last);

            while (count > 0) {
                it = first;
                step = count / 2;
                std::advance(it, step);
                if (!(value < *it)) {
                    first = ++it;
                    count -= step + 1;
                } else count = step;
            }
            return first;
        }
        ```

        refs and see also

        -   [std::upper_bound - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/upper_bound)
        -   [std::partial_sum - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/partial_sum)

-   `std::transform` -<

    :   ```cpp
        #include <string>
        #include <cctype>
        #include <algorithm>
        #include <iostream>

        int main()
        {
            std::string s("hello");
            // std::transform( s.begin(), s.end(), s.begin(), ::toupper );
            std::transform( s.begin(), s.end(), s.begin(),
                            [](unsigned char c) { return std::toupper(c); } );
            std::cout << s;
        }
        ```

        refs and see also

        -   [std::transform - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/transform)

-   `std::prev`, `std::next` -<

    :   ```cpp
        template<class ForwardIt>
        ForwardIt next(ForwardIt it,
                       typename std::iterator_traits<ForwardIt>::difference_type n = 1)
        {
            std::advance(it, n);
            return it;
        }
        ```

        ```cpp
        #include <iostream>
        #include <iterator>
        #include <vector>

        int main()
        {
            std::vector<int> v{ 3, 1, 4 };

            auto it = v.begin();

            auto nx = std::next(it, 2);

            std::cout << *it << ' ' << *nx << '\n';
        }
        ```

        ```cpp
        std::vector<int> v{ 3, 1, 4 };
        std::cout << *std::prev(v.end(), 3) << '\n';
        ```

        refs and see also

        -   [std::prev - cppreference.com](http://en.cppreference.com/w/cpp/iterator/prev)
        -   [std::next - cppreference.com](http://en.cppreference.com/w/cpp/iterator/next)

-   `std::advance` -<

    :   Increments given iterator it by n elements.

        If n is negative, the iterator is decremented. In this case, InputIt must
        meet the requirements of BidirectionalIterator, otherwise the behavior is
        undefined.

        ```
        #include <iostream>
        #include <iterator>
        #include <vector>

        int main()
        {
            std::vector<int> v{ 3, 1, 4 };

            auto vi = v.begin();

            std::advance(vi, 2);

            std::cout << *vi << '\n';
        }
        // output: 4
        ```

        refs and see also

        -   [std::advance - cppreference.com](http://en.cppreference.com/w/cpp/iterator/advance)

-   `std::distance` -<

    :   Defined in header `<iterator>`

        ```cpp
        #include <iostream>
        #include <iterator>
        #include <vector>

        int main()
        {
            std::vector<int> v{ 3, 1, 4 };
            std::cout << "distance(first, last) = "
                      << std::distance(v.begin(), v.end()) << '\n'
                      << "distance(last, first) = "
                      << std::distance(v.end(), v.begin()) << '\n';
        }

        /*
         *  Output:
         *
         *              distance(first, last) = 3
         *              distance(last, first) = -3
        **/
        ```

        refs and see also

        -   [std::distance - cppreference.com](http://en.cppreference.com/w/cpp/iterator/distance)

-   `std::remove`, `std::remove_if` -<

    :   ```cpp
        #include <algorithm>
        #include <string>
        #include <iostream>
        #include <cctype>

        int main()
        {
            std::string str1 = "Text with some   spaces";
            str1.erase(std::remove(str1.begin(), str1.end(), ' '),
                       str1.end());
            std::cout << str1 << '\n';

            std::string str2 = "Text\n with\tsome \t  whitespaces\n\n";
            str2.erase(std::remove_if(str2.begin(),
                                      str2.end(),
                                      [](char x){return std::isspace(x);}),
                       str2.end());
            std::cout << str2 << '\n';
        }
        ```

        Output:

        ```
        Textwithsomespaces
        Textwithsomewhitespaces
        ```

        ```
        const int n = 10;
        int A[n];
        std::remove_if(A, A+n, ' ');
        ```

        refs and see also

        -   [std::remove, std::remove_if - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/remove)

-   `std::copy` -<

    :   Copies the elements in the range, defined by [first, last), to another
        range beginning at d_first.

        -   1) Copies all elements in the range [first, last). The behavior is
            undefined if d_first is within the range [first, last). In this case,
            std::copy_backward may be used instead.
        -   3) Only copies the elements for which the predicate pred returns true.
            The order of the elements that are not removed is preserved. The behavior
            is undefined if the source and the destination ranges overlap.
        -   2,4) Same as (1,3), but executed according to policy. These overloads do
            not participate in overload resolution unless
            std::is_execution_policy_v<std::decay_t<ExecutionPolicy>> is true

        ```cpp
        #include <algorithm>
        #include <iostream>
        #include <vector>
        #include <iterator>
        #include <numeric>

        int main()
        {
            std::vector<int> from_vector(10);
            std::iota(from_vector.begin(), from_vector.end(), 0);

            std::vector<int> to_vector;
            std::copy(from_vector.begin(), from_vector.end(),
                      std::back_inserter(to_vector));
        // or, alternatively,
        //  std::vector<int> to_vector(from_vector.size());
        //  std::copy(from_vector.begin(), from_vector.end(), to_vector.begin());
        // either way is equivalent to
        //  std::vector<int> to_vector = from_vector;

            std::cout << "to_vector contains: ";

            std::copy(to_vector.begin(), to_vector.end(),
                      std::ostream_iterator<int>(std::cout, " "));
            std::cout << '\n';
        }
        ```

        output: to_vector contains: 0 1 2 3 4 5 6 7 8 9

        refs and see also

        -   [std::copy, std::copy_if - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/copy)

-   `std::unique` -<

    :   ```cpp
        #include <iostream>
        #include <algorithm>
        #include <vector>
        #include <string>
        #include <cctype>

        int main()
        {
            // remove duplicate elements (normal use)
            std::vector<int> v{1,2,3,1,2,3,3,4,5,4,5,6,7};
            std::sort(v.begin(), v.end()); // 1 1 2 2 3 3 3 4 4 5 5 6 7
            auto last = std::unique(v.begin(), v.end());
            // v now holds {1 2 3 4 5 6 7 x x x x x x}, where 'x' is indeterminate
            v.erase(last, v.end());
            for (int i : v)
              std::cout << i << " ";
            std::cout << "\n";

            // remove consecutive spaces
            std::string s = "wanna go    to      space?";
            auto end = std::unique(s.begin(), s.end(), [](char l, char r){
                return std::isspace(l) && std::isspace(r) && l == r;
            });
            // s now holds "wanna go to space?xxxxxxxx", where 'x' is indeterminate
            std::cout << std::string(s.begin(), end) << '\n';
        }
        ```

        Output:

        ```
        1 2 3 4 5 6 7
        wanna go to space?
        ```

        refs and see also

        -   [std::unique - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/unique)

-   `std::iota` -<

    :   Fills the range `[first, last)` with sequentially increasing values, starting
        with value and repetitively evaluating ++value.

        Equivalent operation:

        ```cpp
        *(d_first)   = value;
        *(d_first+1) = ++value;
        *(d_first+2) = ++value;
        *(d_first+3) = ++value;
        ...
        ```

        ```cpp
        #include <algorithm>
        #include <iostream>
        #include <list>
        #include <numeric>
        #include <random>
        #include <vector>

        int main()
        {
            std::list<int> l(10);
            std::iota(l.begin(), l.end(), -4);

            std::vector<std::list<int>::iterator> v(l.size());
            std::iota(v.begin(), v.end(), l.begin());

            std::shuffle(v.begin(), v.end(), std::mt19937{std::random_device{}()});

            std::cout << "Contents of the list: ";
            for(auto n: l) std::cout << n << ' ';
            std::cout << '\n';

            std::cout << "Contents of the list, shuffled: ";
            for(auto i: v) std::cout << *i << ' ';
            std::cout << '\n';
        }
        ```

        Possible output:

        ```
        Contents of the list: -4 -3 -2 -1 0 1 2 3 4 5
        Contents of the list, shuffled: 0 -1 3 4 -4 1 -2 -3 2 5
        ```

        Iota `/aɪˈoʊtə/` (uppercase Ι, lowercase ι; Greek: Ιώτα) is the ninth
        letter of the Greek alphabet. It was derived from the Phoenician letter
        Yodh.

        For example, the integer function denoted by ι produces a vector of the
        first N integers when applied to the argument N, …

        refs and see also

        -   [std::iota - cppreference.com](http://en.cppreference.com/w/cpp/algorithm/iota)
        -   [c++ - What does iota of std::iota stand for? - Stack Overflow](http://stackoverflow.com/questions/9244879/what-does-iota-of-stdiota-stand-for) -<

-   numeric limits -<

    :   limits

        T    |   std::numeric_limits<T>::max()
        :---: | :---:
        /* non-specialized */    |   T();
        bool    |   true
        char    |   CHAR_MAX
        signed char    |   SCHAR_MAX
        unsigned char    |   UCHAR_MAX
        wchar_t    |   WCHAR_MAX
        char16_t    |   UINT_LEAST16_MAX
        char32_t    |   UINT_LEAST32_MAX
        short    |   SHRT_MAX
        unsigned short    |   USHRT_MAX
        int    |   INT_MAX
        unsigned int    |   UINT_MAX
        long    |   LONG_MAX
        unsigned long    |   ULONG_MAX
        long long    |   LLONG_MAX
        unsigned long long    |   ULLONG_MAX
        float    |   FLT_MAX
        double    |   DBL_MAX
        long double    |   LDBL_MAX

        refs and see also

        -   [std::numeric_limits::max - cppreference.com](http://en.cppreference.com/w/cpp/types/numeric_limits/max)

-   `std::vector::erase` -<

    :   synopsis

        -   `iterator erase( iterator pos );`
        -   `iterator erase( const_iterator pos );`
        -   `iterator erase( iterator first, iterator last );`
        -   `iterator erase( const_iterator first, const_iterator last );`

        ```cpp
        #include <vector>
        #include <iostream>

        int main( )
        {
            std::vector<int> c{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            for (auto &i : c) {
                std::cout << i << " ";
            }
            std::cout << '\n';

            c.erase(c.begin());

            for (auto &i : c) {
                std::cout << i << " ";
            }
            std::cout << '\n';

            c.erase(c.begin()+2, c.begin()+5);

            for (auto &i : c) {
                std::cout << i << " ";
            }
            std::cout << '\n';
        }
        ```

        refs and see also

        -   [std::vector::erase - cppreference.com](http://en.cppreference.com/w/cpp/container/vector/erase)

-   MISC, unordered_map, find, unordered_multimap -<

    :   ```
        unordered_map<int, int> map;
        if (map.find(num[i]) != map.end()) { continue; }
        else { map[num[i]] = 1; }

        map.find(gap) != map.end() && map[gap] > i

        sort(num.begin(), num.end());

        vector<vector<int>> result;
        result.push_back({ 1, 2, 3 });

        unordered_map<int, vector<pair<int, int> > > cache;
        for (size_t a = 0; a < num.size(); ++a) {
            for (size_t b = a + 1; b < num.size(); ++b) {
                cache[num[a] + num[b]].push_back(pair<int, int>(a, b));
            }
        }

        unordered_multimap<int, pair<int, int>> cache;
        for (int i = 0; i + 1 < num.size(); ++i)
            for (int j = i + 1; j < num.size(); ++j)
                cache.insert(make_pair(num[i] + num[j], make_pair(i, j)));
            }
        }

        int trap(int A[], int n) {
            int *max_left = new int[n]();
            int *max_right = new int[n]();
            for (int i = 1; i < n; i++) {
                max_left[i] = max(max_left[i - 1], A[i - 1]);
                // 一下就把两边都考虑了……好牛逼！
                max_right[n - 1 - i] = max(max_right[n - i], A[n - i]);
            }
            int sum = 0;
            for (int i = 0; i < n; i++) {
                int height = min(max_left[i], max_right[i]);
                if (height > A[i]) {
                    sum += height - A[i];
                }
            }
            delete[] max_left;
            delete[] max_right;
            return sum;
        }

        class Solution  {
        public:
            vector<int> plusOne(vector<int> &digits) {
                add(digits, 1);
                return digits;
            }

        private:
            // 0 <= digit <= 9
            void add(vector<int> &digits, int digit) {
                int c = digit; // carry, 进位

                // method 1
                for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
                    *it += c;
                    c = *it / 10;
                    *it %= 10;
                }

                // method 2
                for_each(digits.rbegin(), digits.rend(), [&c](int &d){
                    d += c;
                    c = d / 10;
                    d %= 10;
                });

                if (c > 0) { digits.insert(digits.begin(), 1) }; // 这里是 insert c 比较好。
            }
        }
        ```

[語言技術：C++ Gossip](http://openhome.cc/Gossip/CppGossip/) -<

:   内容太基础。

    `auto_ptr` 自動管理配置資源

    :   對於使用new動態配置的資源，在不使用時必須記得delete，以釋放記憶體空間，然而
        動態記憶體配置很容易發生忘了delete，或是對同一個記憶體 位址delete兩次（例如一個
        物件被指定給兩個指標），或是對一個已經被delete的位址再作讀寫動作。

        ```
        #include <memory>
        ```

        auto_ptr可以指向一個以new建立的物件，當auto_ptr的生命週期結束後，所指向
        的物件之資源也會被釋放，在建立auto_ptr時必須指 定目標物件之型態，例如：

        ```
        auto_ptr<int> iPtr (new int(100));
        auto_ptr<string> sPtr (new string("caterpillar"));
        ```

    操作auto_ptr就像操作沒有使用auto_ptr的指標一樣，例如：

    ```
    cout << *iPtr << endl; // 顯示100
    if(sPtr->empty())
        cout << "字串為空" << endl;
    ```

    您也可以建立一個未指向任何物件的auto_ptr，例如：`auto_ptr<int> iPtr;`

    未指向任何物件的auto_ptr不可以取值，否則會發生不可預期之結果，既然不可取值，如
    何判斷它是否有指向物件呢？您可以使用get()函式，它會傳 回所指向物件的位址，如果
    傳回0，表示不指向任何物件，如果不指向任何物件，您可以使用reset()來讓它指向一個
    物件，例如：

    ```
    if(iPtr.get() == 0) {
        iPtr.reset(new int(100));
    }
    ```

    reset()可以接受一個指標或是0表示不指向任何物件，reset()會先delete目前指向的
    物件，然後重新指向新的物件，您也可以使用 release()釋放auto_ptr管理所指向物
    件的職責。

    auto_ptr可以使用另一個auto_ptr來建立，這會造成所有權的轉移，例如：

    ```
    auto_ptr<SafeArray> ptr1(new SafeArray(19));
    auto_ptr<SafeArray> ptr2(ptr1);
    ```

    當使用ptr1來建立ptr2時，ptr1不再對所指向物件的資源釋放負責，職責交給了ptr2
    ，在使用指定運算時，也有類似的行為，例如：

    ```
    auto_ptr<SafeArray> ptr1(new SafeArray(19));
    auto_ptr<SafeArray> ptr2(new SafeArray(20));
    ptr2 = ptr1;
    ```

    ptr2所指向的物件會先被delete，然後ptr1的屬性會複製至ptr2，也就是ptr1所指向
    的物件，現在由ptr2指向它了，ptr1不再負責 所指向物件的資源釋放。

    auto_ptr的資源維護動作是以inline的方式來完成，也就是在編譯時會被擴展開來，所以使用auto_ptr並不會犧牲效率。

    最後要注意的是，auto_ptr不能用來管理動態配置而來的陣列，如果用它來管理動態配置而來的陣列，結果是不可預期的。

[Access modifiers - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Access_modifiers) -<

:   **Access modifiers** (or access specifiers) are keywords in object-oriented
    languages that set the accessibility of classes, methods, and other members.
    Access modifiers are a specific part of programming language
    syntax used to facilitate the encapsulation of components.

    ```cpp
    #include <iostream>
    using std::cout;
    using std::endl;

    struct B { // default access modifier inside struct is public
        void set_n(int v) { n = v; }
        void f()          { cout << "B::f" << endl; }
      protected:
        int m, n; // B::m, B::n are protected
      private:
        int x;
    };

    struct D : B {
        using B::m;               // D::m is public
        int get_n() { return n; } // B::n is accessible here, but not outside
    //  int get_x() { return x; } // ERROR, B::x is inaccessible here
     private:
        using B::f;               // D::f is private
    };

    int main() {
        D d;

    //  d.x = 2; // ERROR, private          （B 的 private，D 无法访问）
    //  d.n = 2; // ERROR, protected        （B 的 protected，D 只能内部访问）
        d.m = 2; // protected B::m is accessible as D::m
                 //                         （B 的 protected，但是成了 D 的 public）

        d.set_n(2); // calls B::set_n(int)  （内部访问，set & get）
        cout << d.get_n() << endl; // output: 2

    //  d.f();   // ERROR, B::f is inaccessible as D::f
                 //                         （private 函数，限内部使用）

        B& b = d; // b references d and "views" it as being type B

    //  b.x = 3; // ERROR, private
    //  b.n = 3; // ERROR, protected
    //  b.m = 3; // ERROR, B::m is protected

        b.set_n(3); // calls B::set_n(int)  （虽然实际上是 d，但是类型是 B，所以用的 B::set_n）
    //  cout << b.get_n(); // ERROR, 'struct B' has no member named 'get_n'

        b.f();   // calls B::f()
        return 0;
    }
    ```

[Friend function - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Friend_function) -<

:   In object-oriented programming, a friend function that is a "friend" of a
    given class is **allowed access to private and protected data** in that class
    that it would not normally be able to as if the data was public.  Normally,
    a function that is defined outside of a class cannot access such
    information. Declaring a function a friend of a class allows this, in
    languages where the concept is supported.

    A friend function is declared by the class that is granting access,
    explicitly stating what function from a class is allowed access. A similar
    concept is that of friend class.

    Friends should be used with caution. Too many functions or external classes
    declared as friends of a class with protected or private (visibility modes)
    data may lessen the value of encapsulation of separate classes in
    object-oriented programming and may indicate a problem in the overall
    architecture design. Generally though, friend functions are a good thing
    for encapsulation, as you can
    **keep data of a class private from all except those who you explicitly state need it**,
    but this does mean your classes will become tightly coupled.

    ```cpp
    #include <iostream>
    using namespace std;

    class Foo;
    class Bar {
      private:
          int a;
      public:
          Bar(): a(0) {}
          //                                    和 Foo 一样，有这个 friend
          void show(Bar& x, Foo& y);        //  私有函数
          friend void show(Bar& x, Foo& y); //  declaration of global friend，一个全局的朋友
    };

    class Foo {
      private:
          int b;
      public:
          Foo(): b(6) {}
          //                                    和 Bar 一样，有这个 friend
          friend void show(Bar& x, Foo& y); //  declaration of global friend
          // 还把 Bar 里面的 show 函数给 friend 的了。
          friend void Bar::show(Bar& x, Foo& y); // declaration of friend from other class
          //
          //  如果不 friend 这个函数，Bar 那个函数没法编译。会有如下错误：
          //
          //    main.cpp: In member function 'void Bar::show(Bar&, Foo&)':
          //    main.cpp:17: error: 'int Foo::b' is private
          //    main.cpp:29: error: within this context
    };

    // Definition of a member function of Bar; this member is a friend of Foo
    void Bar::show(Bar& x, Foo& y) {
    // 因为这个函数是 Foo 指定 friend 的，所以 Bar 可以访问 y.b (Foo::b).
      cout << "Show via function member of Bar" << endl;
      cout << "Bar::a = " << x.a << endl;
      cout << "Foo::b = " << y.b << endl;
    }

    // Friend for Bar and Foo, definition of global function
    void show(Bar& x, Foo& y) {
      cout << "Show via global function" << endl;
      cout << "Bar::a = " << x.a << endl;
      cout << "Foo::b = " << y.b << endl;
    }

    int main() {
       Bar a;
       Foo b;

       show(a,b);
       a.show(a,b); // Bar::show,
    }
    ```

    ```cpp
    // 更常用的呢，是 friend operator<<
    class Y {
        int data; // private member
        // the non-member function operator<< will have access to Y's private members
        friend std::ostream& operator<<(std::ostream& out, const Y& o);
        friend char* X::foo(int); // members of other classes can be friends too

        // 还可以连续 friend 两个函数。
        friend X::X(char), X::~X(); // constructors and destructors can be friends
    };
    // friend declaration does not declare a member function
    // this operator<< still needs to be defined, as a non-member
    std::ostream& operator<<(std::ostream& out, const Y& y)
    {
        return out << y.data; // can access private member Y::data
    }
    ```

    ```cpp
    class Y {};
    class A {
        int data; // private data member
        class B { }; // private nested type
        enum { a = 100 }; // private enumerator
        friend class X; // friend class forward declaration (elaborated class name)
        friend Y; // friend class declaration (simple type specifier) (since c++11)
    };

    class X : A::B // Error until C++11: the base-clause is not part of member declarations
                   // allowed in C++11
    {
        A::B mx; // OK: A::B accessible to member of friend
        class Y : A::B { // OK: A::B accessible to base-clause of nested member of friend
        };
        int v[A::a]; // OK: A::a accessible to member of friend
    };
    ```

    Notes

    -   Friendship is **not transitive** (a friend of your friend is not your
        friend)
    -   Friendship is **not inherited** (your friend's children are not your
        friends)
    -   Prior to C++11, member declarations and definitions inside the nested
        class of the friend of class T cannot access the private and protected
        members of class T, but some compilers accept it even in pre-C++11
        mode.
    -   Storage class specifiers are not allowed in friend function
        declarations. A function that is defined in the friend declaration has
        external linkage, a function that was previously defined, keeps the
        linkage it was defined with.
    -   **Access specifiers have no effect on the meaning of friend declarations**
        (they can appear in private: or in public: sections, with no difference)
    -   A friend class declaration cannot define a new class
        (`friend class X {};` is an error，`friend class X;` 是可以的。)
    -   When a local class declares an unqualified function or class as a
        friend, only functions and classes in the innermost non-class scope are
        looked up, not the global functions:

        ```cpp
        class F {};
        int f();
        int main()
        {
            extern int g();
            class Local { // Local class in the main() function
                friend int f(); // Error, no such function declared in main()
                friend int g(); // OK, there is a declaration for g in main()

                // 即使 F 还没定义，也没声明，现在也可以 friend
                friend class F; // friends a local F (defined later)
                // 全剧的那个，可以用 ::F
                friend class ::F; // friends the global F
            };
            class F {}; // local F
        }
        ```

    Template friends -<

    :   tl;dr

        ```cpp
        class A {
            template<typename T>
            friend class B;                 // every B<T> is a friend of A

            template<typename T>
            friend void f(T) {}             // every f<T> is a friend of A
        };
        ```

        Friend declarations cannot refer to **partial specializations**, but can
        refer to full specializations:

        ```cpp
        template<class T> class A {};               // primary
        template<class T> class A<T*> {};           // partial
        template<> class A<int> {};                 // full
        class X {
            template<class T> friend class A<T*>;   // error!
            friend class A<int>;                    // OK
        };
        ```

        When a friend declaration refers to a full specialization of a function
        template, the keyword inline and default arguments cannot be used.

        ```cpp
        template<class T> void f(int);
        template<> void f<int>(int);

        class X {
            friend void f<int>(int x = 1); // error: default args not allowed
        };
        ```

        ...

    refs and see also

    -   [friend declaration - cppreference.com](http://en.cppreference.com/w/cpp/language/friend)
    -   [friend (C++)](https://msdn.microsoft.com/en-us/library/465sdshe.aspx)

[Template (C++) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Template_%28C%2B%2B%29) -<

:   Templates are a feature of the C++ programming language that allows
    functions and classes to operate with generic types. This allows a function
    or class to work on many different data types without being rewritten for
    each one.

    Templates are of great utility to programmers in C++, especially when
    combined with multiple inheritance and operator overloading. The C++
    Standard Library provides many useful functions within a framework of
    connected templates.

    Major inspirations for C++ templates were the parameterized modules
    provided by CLU and the generics provided by Ada.

    There are three kinds of templates: **function templates**,
    **class templates** and, since C++14, **variable templates**.
    Since C++11, templates may be either variadic or non-variadic; in earlier
    versions of C++ they are always non-variadic.

    Function templates -<

    :   A function template behaves like a function except that the template
        can **have arguments of many different types** (see example). In other
        words, a function template represents a family of functions. The format
        for declaring function templates with type parameters is

        ```cpp
        // 两者等价，但第一种可能有误导（不必须是 class）
        template <class identifier> function_declaration;
        template <typename identifier> function_declaration;
        ```

        ```cpp
        template <typename Type>
        Type max(Type a, Type b) {
            return a > b ? a : b;
        }

        #include <iostream>
        int main()
        {
            // call max<int> by implicit argument deduction.
            std::cout << max(3, 7) << std::endl;

            // max<double>
            std::cout << max(3.0, 7.0) << std::endl;

            // This depends on the compiler. Some compilers handle this by defining a template
            // function like double max <double> ( double a, double b);, while in some compilers
            // we need to explicitly cast it, like std::cout << max<double>(3,7.0);
            std::cout << max(3, 7.0) << std::endl;
            std::cout << max<double>(3, 7.0) << std::endl;
            return 0;
        }
        ```

        This function template can be **instantiated**（`[ɪns'tænʃɪet]`，实例化） with any copy-constructible type
        for which the expression `y > x` is valid. For user-defined types, this
        implies that the greater-than operator (>) must be overloaded in the type.

    Class templates -<

    :   A class template **provides a specification for generating classes based on parameters**.
        Class templates are generally used to implement containers.  A class
        template is instantiated by passing a given set of types to it as
        template arguments. The C++ Standard Library contains many class
        templates, in particular the containers adapted from the Standard
        Template Library, such as vector.

    Variable templates

    :   In C++14, templates can be also used for variables, as in the following example.

        ```cpp
        template<typename T> constexpr T pi = T(3.1415926535897932385);

        // Usual specialization rules apply:
        template<> constexpr const char* pi<const char*> = "pi";
        ```

        see more at [C++14 - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/C%2B%2B14#Variable_templates).

    Template specialization -<

    :   When a function or class is instantiated from a template, a
        specialization of that template is created by the compiler for the set
        of arguments used, and the specialization is referred to as being a
        generated specialization.

        ```cpp
        template <>
        bool max<bool>(bool a, bool b) {
            return a || b;
        }
        ```

    Variadic templates -<

    :   C++11 introduced variadic templates, which can take a variable number of
        arguments in a manner somewhat similar to variadic functions such as
        `std::printf`{.cpp}. Both function templates and class templates can be variadic.

        [Variadic template - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Variadic_template) -<

        :   In computer programming, variadic templates are templates that take
            a variable number of arguments.  Variadic templates are supported
            by C++ (since the C++11 standard), and the D programming language.

            ```cpp
            template<typename... Values> class tuple;

            tuple<int, std::vector<int>, std::map<<std::string>, std::vector<int>>> some_instance_name;
            tuple<> some_instance_name;     // no arguments

            template<typename First, typename... Rest> class tuple; // at least one argument
            ```

            Variadic templates may also apply to functions, thus not only
            providing a type-safe add-on to variadic functions (such as printf)
            - but also allowing a printf-like function to process non-trivial
            objects.

            ```cpp
            template<typename... Params> void printf(const std::string &str_format, Params... parameters);
            ```

[Type system - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Type_system){.heart} -<

:   In programming languages, a type system is **a collection of rules that
    assign a property called type** to various constructs a computer program
    consists of, such as variables, expressions, functions or modules. The
    main purpose of a type system is to **reduce possibilities for bugs** in
    computer programs by defining interfaces between different parts of a
    computer program, and then checking that the parts have been connected in a
    consistent way. This checking can happen statically (at compile time),
    dynamically (at run time), or as a combination of static and dynamic
    checking. Type systems have other purposes as well, such as enabling
    certain compiler optimizations, allowing for multiple dispatch, providing a
    form of documentation, etc.

    A type system associates a type with each computed value and, by examining
    the flow of these values, **attempts to ensure or prove that no type errors
    can occur**. The particular type system in question determines exactly what
    constitutes a type error, but in general the aim is to prevent operations
    expecting a certain kind of value from being used with values for which
    that operation does not make sense (**logic errors**); **memory errors** will also
    be prevented. Type systems are often specified as part of programming
    languages, and built into the interpreters and compilers for them; although
    the type system of a language can be extended by optional tools that
    perform additional kinds of checks using the language's original type
    syntax and grammar.


    [Fundamental types - cppreference.com](http://en.cppreference.com/w/cpp/language/types) -<

    :   -   Void type

            `void`，不能用来实例化对象，但可以用到 pointer，返回值，还可以用来消除 warning（比如 `(void)argc; (void)argv;`）

            `std::nullptr_t` 定义为 `typedef decltype(nullptr) nullptr_t;`。nullptr 和 NULL 类似。

            `std::nullptr_t` is the type of the null pointer literal, nullptr.
            It is a distinct type that is not itself a pointer type or a
            pointer to member type.

        -   Boolean type

            `bool`

        -   Character types

            unsigned char, siggned char, char（不是 signed 就是 unsigned）, char16_t, char32_t, wchar_t。

        -   Integer types

            signed/unsigned short/long, int, long long

            ![](http://whudoc.qiniudn.com/2016/2016-08-09-202600_1366x768_scrot.png)

        -   Floating point types

            float, double, long double

        ![](2016-08-09-202912_1366x768_scrot.png)

    General concepts

    -   Type safety

    Major categories

    -   Static vs. Dynamic
    -   Manifest vs. Inferred
    -   Nominal vs. Structural
    -   Duck typing

    Static and dynamic type checking in practice

    :   The choice between static and dynamic typing requires certain trade-offs.

    "Strong" and "weak" type systems

    :   TODO: <https://en.wikipedia.org/wiki/Strong_and_weak_typing>

    Type safety and memory safety

    :   ```c
        int x = 5;
        char y[] = "37";
        char* z = x + y;
        ```

        As this example shows, C is neither a memory-safe nor a type-safe language.

        In general, type-safety and memory-safety go hand in hand（手拉手，一起走。）.
        For example, a language that supports pointer arithmetic and number-to-pointer
        conversions (like C) is neither memory-safe nor type-safe, because it
        **allows arbitrary memory to be accessed** as if it were valid memory of any type.

        Variable levels of type checking

        -   The `use strict` directive in JavaScript and Perl applies stronger checking.
        -   The `@` operator in PHP suppresses some error messages.
        -   The `Option Strict On` in VB.NET allows the compiler to require a conversion between objects.

    Duck typing

    :   In "duck typing", a statement calling a method `m` on an object does
        not rely on the declared type of the object; only that the object, of
        whatever type, must supply an implementation of the method called, when
        called, at run-time.

        Duck typing differs from **structural typing** in that, if the "part" (of
        the whole module structure) needed for a given local computation is
        present at runtime, the duck type system is satisfied in its type
        identity analysis. On the other hand, a structural type system would
        require the analysis of the whole module structure at compile time to
        determine type identity or type dependence.

        Duck typing differs from a **nominative type** system in a number of
        aspects. The most prominent ones are that for duck typing, type
        information is determined at runtime (as contrasted to compile time),
        and the name of the type is irrelevant to determine type identity or
        type dependence; only partial structure information is required for
        that for a given point in the program execution.

        `['nɑmɪnətɪv]`, 主格

        Duck typing uses the **premise** (`['premɪs]`, 假定) that (referring to
        a value) "**if it walks like a duck, and quacks like a duck, then it is
        a duck**" (this is a reference to the duck test that is attributed to
        James Whitcomb Riley).  The term may have been coined[citation needed]
        by Alex Martelli in a 2000 message to the comp.lang.python newsgroup
        (see Python).

        While one controlled experiment showed an increase in developer
        productivity for duck typing in single developer projects, other
        controlled experiments on API usability show the opposite.

        [Duck typing - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Duck_typing)

        :   In computer programming, duck typing is an application of the duck test
            in type safety. It requires that type checking is deferred to runtime (推迟到运行时),
            and is implemented by means of dynamic typing or reflection.

            Duck typing is concerned with establishing the suitability of an object
            for some purpose. With normal typing, suitability is assumed to be
            determined by an object's type only. In duck typing, an object's
            suitability is determined by the presence of certain methods and
            properties (with appropriate meaning), rather than the actual type of
            the object. The analogy to the duck test appeared in a
            Python Enhancement Proposal discussion in 2002.

[Polymorphism (computer science) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Polymorphism_(computer_science)){.heart} -<

:   In programming languages and type theory, polymorphism `[,pɑlɪ'mɔrfɪzm]` (from Greek πολύς,
    polys, "many, much" and μορφή, morphē, "form, shape") is the provision of a
    single interface to entities of different types. A polymorphic type is one
    whose operations can also be applied to values of some other type, or
    types.  There are several fundamentally different kinds of polymorphism:

    -   Ad hoc polymorphism

        when a function denotes different and potentially heterogeneous
        implementations depending on a limited range of individually specified
        types and combinations. Ad hoc polymorphism is supported in many
        languages using function overloading.

    -   Parametric polymorphism

        when code is written without mention of any specific type and thus can
        be used transparently with any number of new types. In the
        object-oriented programming community, this is often known as generics
        or generic programming. In the functional programming community, this
        is often shortened to polymorphism.

    -   Subtyping (also called subtype polymorphism or inclusion polymorphism)

        when a name denotes instances of many different classes related by some
        common superclass. In the object-oriented programming community,
        this is often simply referred to as polymorphism.

        **Object-oriented programming languages offer subtype polymorphism using
        subclassing (also known as inheritance).** In typical implementations,
        each class contains what is called a **virtual table**—a table of functions
        that implement the polymorphic part of the class interface—and each
        object contains a pointer to the "vtable" of its class, which is then
        consulted whenever a polymorphic method is called. This mechanism is an
        example of:

        +   **late binding**, because virtual function calls are not bound until
            the time of invocation;
        +   **single dispatch (i.e. single-argument polymorphism)**, because
            virtual function calls are bound simply by looking through the
            vtable provided by the first argument (the this object), so the
            runtime types of the other arguments are completely irrelevant.

    The interaction between parametric polymorphism and subtyping leads to the
    concepts of variance and bounded quantification.

    Static and dynamic polymorphism

    :   Polymorphism can be distinguished by when the implementation is
        selected:

          - **statically (at compile time)** or
          - **dynamically (at run time, typically via a virtual function)**.

        This is known respectively as **static dispatch** and **dynamic dispatch**, and
        the corresponding forms of polymorphism are accordingly called static
        polymorphism and dynamic polymorphism.

        Static polymorphism executes faster, because there is
        **no dynamic dispatch overhead**, but requires additional compiler support.
        Further, static polymorphism allows greater static analysis, by compilers
        (notably for optimization), source code analysis tools, and human
        readers (programmers). Dynamic polymorphism is more flexible but slower
        --for example, dynamic polymorphism allows **duck typing**, and a
        dynamically linked library may operate on objects without knowing their
        full type.

        Static polymorphism typically occurs in ad hoc polymorphism and
        parametric polymorphism, whereas dynamic polymorphism is usual for
        subtype polymorphism. However, it is possible to achieve static
        polymorphism with subtyping through more sophisticated use of template
        metaprogramming, namely **the curiously recurring template pattern**.

[Virtual inheritance - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Virtual_inheritance){.heart} -<

:   Virtual inheritance is a technique used in C++, where a particular base
    class in an **inheritance hierarchy** is declared to share its member data
    instances with any other inclusions of that same base in further derived
    classes. For example, if class A is normally (non-virtually) derived from
    class X (assumed to contain data members), and if class B is also derived
    from class X, and class C inherits from both classes A and B, it will
    contain two sets of the data members associated with class X (accessible
    independently, often with suitable disambiguating qualifiers). But if class
    A is virtually derived from class X instead, then objects of class C will
    contain only one set of the data members from class X. 这个例子像不像是近亲结婚？……

    This feature is most useful for **multiple inheritance**, as it makes the
    virtual base a common subobject for the deriving class and all classes that
    are derived from it. This can be used to avoid the diamond problem by
    clarifying ambiguity over which ancestor class to use, as from the
    perspective of the deriving class (C in the example above) the virtual base
    (X) acts as though it were the direct base class of C, not a class derived
    indirectly through its base (A).

    It is used when inheritance represents restriction of a set rather than
    composition of parts. In C++, a base class intended to be common throughout
    the hierarchy is denoted as virtual with the `virtual` keyword.

    Consider the following class hierarchy.

    ```cpp
    class Animal {
     public:
      virtual void eat();
    };

    class Mammal : public Animal {
     public:
      virtual void breathe();
    };

    class WingedAnimal : public Animal {
     public:
      virtual void flap();
    };

    // A bat is a winged mammal
    class Bat : public Mammal, public WingedAnimal {
    };

    Bat bat;
    ```

    ```cpp
    Bat b;
    Animal &a = b; // error: which Animal subobject should a Bat cast into,
                   // a Mammal::Animal or a WingedAnimal::Animal?
    ```

    To disambiguate, one would have to explicitly convert bat to either base
    class subobject:

    ```cpp
    Bat b;
    Animal &mammal = static_cast<Mammal&> (b);
    Animal &winged = static_cast<WingedAnimal&> (b);

    static_cast<Mammal&>(bat).eat();
    bat.Mammal::eat();
    ```

    ![the diamond problem](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8e/Diamond_inheritance.svg/330px-Diamond_inheritance.svg.png)

    ```cpp
    class Animal {
     public:
      virtual void eat();
    };

    // Two classes virtually inheriting Animal:
    class Mammal : public virtual Animal {
     public:
      virtual void breathe();
    };

    class WingedAnimal : public virtual Animal {
     public:
      virtual void flap();
    };

    // A bat is still a winged mammal
    class Bat : public Mammal, public WingedAnimal {
    };
    ```

    The Animal portion of `Bat::WingedAnimal` is now the same `Animal` instance as
    the one used by `Bat::Mammal`, which is to say that a Bat has only one,
    shared, `Animal` instance in its representation and so a call to `Bat::eat()`
    is unambiguous. Additionally, a direct cast from Bat to Animal is also
    unambiguous, now that there exists only one Animal instance which Bat could
    be converted to.

    The ability to share a single instance of the Animal parent between `Mammal`
    and `WingedAnimal` is enabled by recording the **memory offset** between the
    Mammal or WingedAnimal members and those of the base Animal within the
    derived class. However this offset can in the general case only be known at
    runtime, thus Bat must become (`vpointer`, Mammal, vpointer, WingedAnimal,
    Bat, Animal). There are two vtable pointers, one per inheritance hierarchy
    that virtually inherits Animal. In this example, one for Mammal and one for
    WingedAnimal. The object size has therefore increased by two pointers, but
    now there is only one Animal and no ambiguity. **All objects of type Bat will
    use the same vpointers, but each Bat object will contain its own unique
    Animal object.** If another class inherits from Mammal, such as Squirrel,
    then the vpointer in the Mammal part of Squirrel will generally be
    different to the vpointer in the Mammal part of Bat though they may happen
    to be the same should the Squirrel class be the same size as Bat.

    [Virtual method table - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Vtable)

    :   A virtual method table (VMT), virtual function table, virtual call
        table, dispatch table, vtable, or vftable is a mechanism used in a
        programming language to support dynamic dispatch (or run-time method
        binding).

        Whenever a class defines a virtual function (or method), most compilers
        add a hidden member variable to the class which points to an array of
        pointers to (virtual) functions called the virtual method table (VMT or
        Vtable). These pointers are used at runtime to invoke the appropriate
        function implementations, because at compile time it may not yet be
        known if the base function is to be called or a derived one implemented
        by a class that inherits from the base class.

[Run-time type information - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Run-time_type_information) -<

:   In computer programming, **RTTI** (Run-Time Type Information, or Run-Time Type Identification)
    refers to a C++ mechanism that exposes information about an object's data type
    at runtime. Run-time type information can apply to simple data types,
    such as integers and characters, or to generic types.  This is a C++
    specialization of a more general concept called **type introspection**. Similar
    mechanisms are also known in other programming languages, such as Delphi
    (Object Pascal).

    In the original C++ design, Bjarne Stroustrup did not include run-time type
    information, because he thought this mechanism was frequently misused.

    执行期类型识别（Runtime Type Identification RTTI） -<

    :   1.  RTTI 只支持多态类，也就是说没有定义虚函数是的类是不能进行 RTTI的。
        2.  对指针进行dynamic_cast失败会返回NULL ,而对引用的话，识别会抛出 bad_cast exception。
        3.  typeid 可以返回const type_info&，用以获取类型信息。

        关于1是因为RTTI的实现是通过vptr来获取存储在虚函数表中的type_info* ，事实上
        为非多 态类提供RTTI,也没有多大意义。 2的原因在于指针可以被赋值为0，以表示
        no object，但是 引用不行。关于3，虽然第一点指出RTTI只支持多态类，但typeid和
        type_info同样可用于 内建类型及所有非多态类。与多态类的差别在于，非多态类的
        type_info对象是静态取得(所 以不能叫“执行期类型识别”)，而多态类的是在执行期
        获得。

[4ker/C: C语言](https://github.com/4ker/C)

[4ker/Cpp-Primer: C++ Primer 5ed answers](https://github.com/4ker/Cpp-Primer)

[sib9/cpp1x-study-resource: 旨在搜集国内外各种 C++11 的学习资源，供大家参考、学习。](https://github.com/sib9/cpp1x-study-resource) -<

:   ```cpp
    [](int x, int y) { return x + y; } // implicit return type from 'return' statement
    [](int& x) { ++x; }   // no return statement -> lambda function's return type is 'void'
    []() { ++global_x; }  // no parameters, just accessing a global variable
    []{ ++global_x; }     // the same, so () can be omitted


    [](int x, int y) -> int { int z = x + y; return z; }
    ```

    lambda 函数可以使用 lambda 函数外面的标志符。这些变量的集合通常被成为[闭包](https://en.wikipedia.org/wiki/Closure_(computer_science)#Function_objects_.28C.2B.2B.29)，闭包在 lambda 表达式的 `[]` 中定义，允许是值或者引用。如下所示：

    ```
    []        //no variables defined. Attempting to use any external variables in the lambda is an error.
    [x, &y]   //x is captured by value, y is captured by reference
    [&]       //any external variable is implicitly captured by reference if used
    [=]       //any external variable is implicitly captured by value if used
    [&, x]    //x is explicitly captured by value. Other variables will be captured by reference
    [=, &z]   //z is explicitly captured by reference. Other variables will be captured by value
    ```

    下面的两个例子演示了 lambda 表达式的用法：

    ```
    std::vector<int> some_list{ 1, 2, 3, 4, 5 };
    int total = 0;
    std::for_each(begin(some_list), end(some_list), [&total](int x) {
      total += x;
    });
    ```

    计算 `some_list` 的加和，存储到 `total` 中(引用传递)。

    ```
    std::vector<int> some_list{ 1, 2, 3, 4, 5 };
    int total = 0;
    int value = 5;
    std::for_each(begin(some_list), end(some_list), [&, value, this](int x) {
      total += x * value * this->some_func();
    });
    ```

    除 value 和 this 外，引用传递。计算得到 total 的值。只能抓取闭包中的非静态
    函数，lambda 和创建它的时候具有相同的存取权限,不管是否 protected/private 成
    员。

    这篇文章是我从[Move semantics and rvalue references in
    C++11](http://www.cprogramming.com/c++11/rvalue-references-and-move-semantics-in-c++11.html)
    翻译而来的。值得一提的是，不是全文/原文逐字逐句的翻译，加了一些我个人的理解
    ，并进行了一定的精简。

    右值引用会和一个临时对象绑定。比如，在 C++11 之前，如果你有一个临时对象，你
    可以用`regular`或者`lvalue reference` 去绑定它，但是仅仅是在`const`的情况下
    ：

    const string & name = get_name(); // ok
    string& name = get_name(); // NOT ok

    在 C++11 中，右值引用允许你为右值绑定一个可变引用，但是不能是一个左值。换句
    话说，右值引用可以检测到一个对象是不是临时对象。右值引用使用`&&`语法来声明
    而不是`&`，可以是常量，也可以是非常量。和左值引用一样，尽管你很少见到一个常
    量右值引用。

    ```
    const string && name = get_name(); // ok
    string && name = get_name();  // alse ok - praise be!

    void print_ref(const std::string & str)
    {
        std::cout << str << std::endl;
    }

    void print_ref(std::string && str)
    {
        std::cout << str << std::endl;
    }

    std::string name("jerryzhang");
    print_ref(name); // calls the first print_ref function, taking an lvalue reference
    print_ref(get_name()); // calls the second print_ref function, taking a mutable rvalue reference
    ```

[The Essence of C++_Bjarne Stroustrup.pptx_微盘下载](http://vdisk.weibo.com/s/G-kaugh7dbcL)

[isocpp/CppCoreGuidelines: The C++ Core Guidelines are a set of tried-and-true guidelines, rules, and best practices about coding in C++](https://github.com/isocpp/CppCoreGuidelines){.heart}

:   read: [CppCoreGuidelines/CppCoreGuidelines.md at master · isocpp/CppCoreGuidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md)

    **C++ Core Guidelines**

[awesome-c - NotABug.org: Free code hosting](https://notabug.org/koz.ross/awesome-c)

---

## 深入探索 C++ 对象模型

`第 1 章 关于对象(Object Lessons)`{.heart} -<

:   C 语言中数据和操作分开，语言本身没有提供之间的关联性。这种程序方法被称为 Procedural，
    它以一些函数为导向，处理共同的外部数据。

    -   空间布局和存取时间的额外成本 -<

        :   这些额外成本主要由 virtual 引起，包括：

            -   virtual function 机制，用来支持“执行期绑定”（runtime binding）。
            -   virtual base class ——虚基类机制，以实现共享虚基类的 subobject。

    -   简单对象模型、表格驱动对象模型以及 C++ 对象模型 -<

        :   C++ 中有两种 class data members：static 和 nonstatic，以及三种
            class member functions：static、nonstatic、virtual。

            -   简单对象模型

                ![](http://www.roading.org/images/2011-11/image_thumb10.png)

                全部都是指针，全部存起来。每一个实例都要存函数指针，所以空间成本高，
                执行效率低。

                C++ 并没有采用这样一种对象模型，但是被用到了C++中“指向成员的指针”（pointer-to-member）的概念当中。

            -   表格驱动对象模型

                ![](http://www.roading.org/images/2011-11/image11_thumb1.png)

                将所有的数据成员抽离出来建成数据成员表，将所有的函 数抽取出来建成一张函
                数成员表，而对象本身只保持一个指向数据成员表的指针。

                C++ 也没有采用这一种对象模型，但C++却以此模型作为支持虚函数的方案。

            -   C++ 对象模型

                所有的非静态数据成员存储在对象本身中。所有的静态数据成员、成员函数（包
                括静态与非静态）都置于对象之外。另外，用一张虚函数表（virtual table)存
                储所有指向虚函数的指针，并在表头附加上一个该类的type_info对象，在对象
                中则保存一个指向虚函数表的指针。如下图：

                ![](http://www.roading.org/images/2011-11/image17_thumb1.png)

                Virtual functions 则以上个步骤支持之：

                -   每一个 class 产生一堆志向 virtual functions 的指针，放在表
                    格之中。这个表格被称为 virtual table（vtbl）。
                -   每个 class object 被添加一个指针，指向相关的 virtual table。
                    通常这个指针被称为 vptr。其 setting 和 resetting 都由每个 class 的
                    constructor 和 destructor 和 copy assignment 运算符自动完成。每个
                    class 所关联的 `type_info object`（用以支持 RTTI，runtime type identification）
                    也经由 virtual table 被指出来，通常是放在表格的第一个 slot 处。

                这样一来，一个 class X 成员 x 的内存中，有 nonstatic 数据、align 的字节，以及 vptr，
                这个 vptr 指向一个 virtual table，这个 virtual table 的第一个地
                址（`px->_vtbl[0]`）指向 type_info for X，其它指向 X 中的各个 virtual function。

    -   三种编程典范 -<

        :   -   程序模型
            -   ADT 模型
            -   面向对象模型

    -   一个类的对象（class object）的内存大小包括： -<

        :   -   所有非静态数据成员的大小。
            -   由内存对齐（alignment）而填补（padding）的内存大小。
            -   为了支持 virtual 有内部产生的额外负担。

    -   关于面向对象和多态的更多思考 -<

        :   指针的类型，影响的是“被指出之内存的大小和其内容的解释方式”。

            ```
            Bear b;
            ZooAnimal *pz = &b;         // pz 之包括其中 ZooAnimal 的 subject
            Bear *pb = &b;              // pb 指向整个 Bear object

            pb->cell_block; // okay
            pz->cell_block; // bad

            // 不过我们可以 cast
            ((Bear *)pz)->cell_block;
            if( Bear *pb2 = dynamic_cast<Bear *>(pz) ) {
                pb2->cell_block;
            }
            ```

            pz 的类型将在编译时期决定以下两点：

            -   固定的可用接口（ZooAnimal 的 public 函数接口）
            -   该接口的 access level

            ```
            Bear b;
            ZooAnimal zb = b;           // 译注：这会引起 sliced
            zb.rotate();                // 会调用 ZooAnimal::rotate()
            ```

            为什么拷贝过去后，vptr 不是指向 `Bear::rotate`？
            因为编译器在 1）初始化及 2）assignment 操作（即上面的例子）之间
            作出了仲裁。编译器必须确保如果某个 object 含有一个或一个以上的
            vptrs，那些 vptrs 的内容不会被 base class object 初始化或改变。

            初始化或者 assignment 的时候，如 `Derived d; Base b = d;`，derived class object 会被
            sliced，然后拷贝塞入更小的空间。多态没有出现。如果是引用或者指针，如 `Base *b = &d;` 或者
            `Base &b = d;` 多态则出现了。

            >   **C++ 通过 class 的 pointer 和 references 来支持多态，这种程序
            >   设计风格就称为“面向对象”。**

第 2 章 构造函数语意学(The Semantics of constructors)

:   深入C++构造函数 -<

    :   -   包含有带默认构造函数的对象成员的类

            :   若一个类X没有定义任何构造函数，但却包含一个或以上定义有默认构造
                函数的 对象成员，此时编译器会为X合成默认构造函数，该默认函数会
                调用对象成员的 默认构造函数为之初始化。如果对象的成员没有定义默
                认构造函数，那么编译器 合成的默认构造函数将不会为之提供初始化。
                例如类A包含两个数据成员对象， 分别为：string str和char *Cstr，
                那么编译器生成的默认构造函数将只提 供对string类型成员的初始化，
                而不会提供对char*类型的初始化。

                假如类X的设计者为X定义了默认的构造函数来完成对str的初始化，形如
                ： A::A(){Cstr=”hello”};因为默认构造函数已经定义，编译器将不能
                再生成一 个默认构造函数。但是编译器将会扩充程序员定义的默认构造
                函数——在最前面插 入对初始化str的代码。若有多个定义有默认构造函
                数的成员对象，那么这些成员 对象的默认构造函数的调用将依据声明顺
                序排列。

        -   继承自带有默认构造函数的基类的类

            :   如果一个没有定义任何构造函数的类派生自带有默认构造函数的基类，
                那么编译 器为它定义的默认构造函数，将按照声明顺序为之依次调用其
                基类的默认构造函 数。若该类没有定义默认构造函数而定义了多个其他
                构造函数，那么编译器扩充 它的所有构造函数——加入必要的基类默认构
                造函数。另外，编译器会将基类的默 认构造函数代码加在对象成员的默
                认构造函数代码之前。

        -   带有虚函数的类

            :   带有虚函数的类，与其它类不太一样，因为它多了一个vptr，而vptr的
                设置是由 编译器完成的，因此编译器会为类的每个构造函数添加代码来
                完成对vptr的初始 化。

        -   带有一个虚基类的类

            :   在这种情况下，编译器要将虚基类在类中的位置准备妥当，提供支持虚
                基类的机 制。也就是说要在所有构造函数中加入实现前述功能的的代码。
                没有构造函数将 合成以完成上述工作。

        总结：简单来讲编译器会为构造函数做的一点事就是调用其基类或成员对象的默
        认构造函数，以及初始化vprt以及准备虚基类的位置。

        总的来说，编译器将对构造函数动这些手脚：

        -   如果类虚继承自基类，编译器将在所有构造函数中插入准备虚基类位置的代
            码和提供支持虚基类机制的代码。
        -   如果类声明有虚函数，那么编译器将为之生成虚函数表以存储虚函数地址，
            并将虚函数指针（vptr）的初始化代码插入到类的所有构造函数中。
        -   如果类的父类有默认构造函数，编译将会对所有的默认构造函数插入调用其
            父类必要的默认构造函数。必要是指设计者没有显示初始化其父类，调用顺
            序，依照其继承时声明顺序。
        -   如果类包含带有默认构造函数的对象成员，那么编译器将会为所有的构造函
            数插入对这些对象成员的默认构造函数进行必要的调用代码，所谓必要是指
            类设计者设计的构造函数没有对对象成员进行显式初始化。成员对象默认构
            造函数的调用顺序，依照其声明顺序。
        -   若类没有定义任何构造函数，编译器会为其合成默认构造函数，再执行上述
            四点。

    拷贝构造函数（copy constuctor） -<

    -   通常C++初级程序员会认为当一个类为没有定义拷贝构造函数的时候，编译器会
        为其合成一个，答案是否定的。编译器只有在必要的时候在合成拷贝构造函数。
        那么编译器什么时候合成，什么时候不合成，合成的拷贝构造函数在不同情况下
        分别如何工作呢？这是本文的重点。

        拷贝构造函数的定义

        :   有一个参数的类型是其类类型的构造函数是为拷贝构造函数。如下：

            ```cpp
            X::X( const X& x);
            Y::Y( const Y& y, int =0 );
            //可以是多参数形式，但其第二个即后继参数都有一个默认值
            ```

        拷贝构造函数的应用

        :   当一个类对象以另一个同类实体作为初值时，大部分情况下会调用拷贝构造
            函数。 一般是这三种具体情况：

            -   显式地以一个类对象作为另一个类对象的初值，形如X xx=x;
            -   当类对象被作为参数交给函数时。
            -   当函数返回一个类对象时。

        编译器何时合成拷贝构造函数

        :   并不是所有未定义有拷贝构造函数的类编译器都会为其合成拷贝构造函数，
            编译 器只有在必要的时候才会为其合成拷贝构造函数。所谓必要的时刻是指编译
            器在 普通手段无法完成解决“当一个类对象以另一个同类实体作为初值”时，才会
            合成 拷贝构造函数。也就是说，当常规武器能解决问题的时候，就没必要动用非
            常规 武器。

            如果一个类没有定义拷贝构造函数，通常按照“成员逐一初始化(Default
            Memberwise Initialization)”的手法来解决“一个类对象以另一个同类实体作为
            初值”——也就是说把内建或派生的数据成员从某一个对象拷贝到另一个对象身上，
            如果数据成员是一个对象，则递归使用“成员逐一初始化(Default Memberwise
            Initialization)”的手法。

            成员逐一初始化(Default Memberwise Initialization)具体的实现方式则是
            位 逐次拷贝（Bitwise copy semantics）1。也就是说在能使用这种常规方
            式 来解决“一个类对象以另一个同类实体作为初值”的时候，编译器是不需要
            合成拷 贝构造函数的。但有些时候常规武器不那么管用，我们就得祭出非常
            规武器了 ——拷贝构造函数。有以下几种情况之一，位逐次拷贝将不能胜任或
            者不适合来完 成“一个类对象以另一个同类实体作为初值”的工作。此时，如
            果类没有定义拷贝 构造函数，那么编译器将必须为类合成一个拷贝构造函数。

            -   当类内含一个成员对象，而后者的类声明有一个拷贝构造函数时（不论
                是设 计者定义的还是编译器合成的）。
            -   当类继承自一个声明有拷贝构造函数的类时（同样，不论这个拷贝构造
                函数 是被显示声明还是由编译器合成的）。
            -   类中声明有虚函数。
            -   当类的派生串链中包含有一个或多个虚基类。

            对于前两种情况，不论是基类还是对象成员，既然后者声明有拷贝构造函数
            时， 就表明其类的设计者或者编译器希望以其声明的拷贝构造函数来完成“
            一个类对象 以另一个同类实体作为初值”的工作，而设计者或编译器这样做—
            —声明拷贝构造函 数，总有它们的理由，而通常最直接的原因莫过于因为他
            们想要做一些额外的工 作或“位逐次拷贝”无法胜任。

            对于有虚函数的类，如果两个对象的类型相同那么位逐次拷贝其实是可以胜
            任的。 但问题将出现在，如果基类由其继承类进行初始化时，此时若按照位
            逐次拷贝来 完成这个工作，那么基类的vptr将指向其继承类的虚函数表，这
            将导致无法预料 的后果——调用一个错误的虚函数实体是无法避免的，轻则带
            来程序崩溃，更糟糕 的问题可能是这个错误被隐藏了。所以对于有虚函数的
            类编译器将会明确的使被 初始化的对象的vptr指向正确的虚函数表。因此有
            虚函数的类没有声明拷贝构造 函数，编译将为之合成一个，来完成上述工作
            ，以及初始化各数据成员，声明有 拷贝构造函数的话也会被插入完成上述工
            作的代码。

            对于继承串链中有虚基类的情况，问题同样出现在继承类向基类提供初值的
            情况， 此时位逐次拷贝有可能破坏对象中虚基类子对象的位置。

    命名返回值优化和成员初始化队列 -<

    :   对于一个如foo()这样的函数，它的每一个返回分支都返回相同的对象，编译器
        有可能对其做Named return Value优化（下文都简称NRV优化），方法是以一个参
        数result取代返回对象。

        ```cpp
        X foo()                            void  foo(X &result)
        {                                  {
            X xx;                              result.X::X();
            if(...)                            if(...)
                return xx;                     {
            else                                   //直接处理result
                return xx;                         return;
        }                                      }
                                               else
                                               {
                                                   //直接处理result
                                                   return;
                                               }
                                           }
        ```

        对比优化前与优化后的代码可以看出，对于一句类似于X a = foo()这样的代 码，
        NRV优化后的代码相较于原代码节省了一个临时对象的空间（省略了xx）,同 时
        减少了两次函数调用（减少xx对象的默认构造函数和析构函数，以及一次拷贝 构
        造函数的调用，增加了一次对a的默认构造函数的调用）。

    成员初始化队列（Member Initialization List） -<

    :   对于初始化队列，我相信厘清一个概念是非常重要的：在构造函数中对于对象 成
        员的初始化发生在初始化队列中——或者我们可以把初始化队列直接看做是对 成员
        的定义，而构造函数体中进行的则是赋值操作。所以不难理解有四种情况 必须用
        到初始化列表：

        -   有const成员
        -   有引用类型成员
        -   成员对象没有默认构造函数
        -   基类对象没有默认构造函数

前两者因为要求定义时初始化，所以必须明确的在初始化队列中给它们提供初 值。后两者因为不提供默认构造函数，所有必须显示的调用它们的带参构造函 数来定义即初始化它们。

显而易见的是当类中含有对象成员或者继承自基类的时候，在初始化队列中初 始化成员对象和基类子对象会在效率上得到提升——省去了一些赋值操作嘛。

最后，一个关于初始化队列众所周知的陷阱，初始化队列的顺序，请参考《C++ primer》或者《深度探索C++对象模型》。

`第 3 章 Data语意学（The Semantics of Data）`{.heart} :hearts: -<

:   C++ 类对象的大小 -<

    :   事实上，对于像X这样的一个的空类，编译器会对其动点手脚——隐晦的插入一个字节。为
        什么要这样做呢？插入了这一个字节，那么X的每一个对象都将有一个独一无二的地址。
        如果不插入这一个字节呢？哼哼，那对X的对象取地址的结果是什么？两个不同的X对象间
        地址的比较怎么办？

        对于那位Lippman的法国读者来说，A的 大小是共享的X实体1字节,X和Y的大小分别减去虚
        基类带来的内存空间，都是4。A的总计 大小为9，alignment以后就是12了。而对于vs2010
        来说，那个一字节被优化后，A的大小 为8，也不需再进行alignment操作。


        影响C++类的大小的三个因素：

        -   支持特殊功能所带来的额外负担（对各种virtual的支持）。
        -   编译器对特殊情况的优化处理。
        -   alignment操作，即内存对齐。

        C++ 对象模型尽量以空间优化和存取速度优化考虑来表现 nonstatic data members，
        并且保持和 C 语言 struct 数据配置的兼容性。

        Memeber rewriting rule

        :   也可以说是 member scope resolution rules。
            这样的好处是，你不必把所有的 data members 放在一开始就声明。
            唯一的特例是类中的子类型（nested type），需要放在前面。

    VC内存对齐准则（Memory alignment） -<

    :   ```
        // sizeof(T) == 1+(3) + 4 + 8 = 16
        class T {
            char c;
            int i;
            double  d;
        };

        // sizeof(T) == 1+(7) + 8 + 4+(4) = 24
        class T {
            char c;
            double  d;
            int i;
        };
        ```

        Vptr影响对齐而VbcPoint(Virtual base class pointer)不影响

        ```
        class X{char a;};
        class Y: virtual public X{};
        ```

    C++ 对象的数据成员 -<

    :   C++ 标准的规定

        -   在同一个Access Section（也就是private,public,protected片段）中， 要求较晚出
            现的数据成员处在较大的内存中。这意味着同一个片段中的数据成员并不需要紧密相
            连，编译器所做的成员对齐就是一个例子。
        -   允许编译器将多个Acess Section的顺序自由排列，而不必在乎它们的声明 次序。但
            似乎没有编译器这样做。
        -   对于继承类，C++标准并未指定是其基类成员在前还是自己的成员在前。
        -   对于虚基类成员也是同样的未予规定。

        一般的编译器怎么做？

        -   同一个Access Section中的数据成员按期声明顺序，依次排列。 但成员与成员之间因为内存对齐的原因可能存在空当。
        -   多个Access Section按其声明顺序排放。
        -   基类的数据成员总放在自己的数据成员之前，但虚基类除外。

        为了实现虚函数和虚拟继承两个功能，编译器一般会合成Vptr和Vbptr两个指针。那么这两
        个指针应该放在什么位置？C++标准肯定是不曾规定的，因为它甚至并没有规定如何来实现
        这两个功能，因此就语言层面来看是不存在这两个指针的。

        对于Vptr来说有的编译器将它放在末尾，如Lippman领导开发的Cfront。有的则将其放在最
        前面，如MS的VC，但似乎没人将它放在中间。为什么不放在中间？没有理由可以让人这么
        做，放在末尾，可以保持C++类对C的struct的良好兼容性，放在最前可以给多重继承下的
        指针或引用调用虚函数带来好处。

        看一小段代码：

        ```cpp
        class X{
        public:
            int a;
            virtual void vfc(){};
        };

        int main()
        {
            X x;
            std::cout << &x.a<< " " << &x << std::endl;
        }
        ```

        在VS2010和VC6.0中运行的结果都是地址值&x.a比&x大4，可见说vc的vptr放在对象的最前面此言非虚。

        对于Vbptr来说，有好几种方法，在这儿我们只看看VC的实现原理：

        对于由虚拟继承而得的类，VC 会在其每一个对象中插入一个 Vbptr，这个 Vbptr 指
        向 vitual base class table（虚基类表）。虚基类表中则存放有其虚基类子对象相对于虚
        基类指针的偏移量。例如声明如 `class Y:virtual public X` 的类的 virtual base class table 的
        虚基类表中当存储有 X 对象相对于Vbptr的偏移量。

        对象成员或基类对象成员后面的填充空白不能为其它成员所用，这样才能保证二进制的兼容性。

        ```
        X x;
        X2 x2;

        x2 = x;     // 如果 padding 可以为 drived 类使用，会发生覆盖
        x  = x2;    // 会发生截断，只会 copy sizeof(x) 大小的内存。
        ```

        Vptr与Vbptr1

        -   在多继承情况下，即使是多虚拟继承，继承而得的类只需维护一个Vbptr； 而多继承
            情况下Vptr则可能有要维护多个Vptr，视其基类有几个有虚函数。
        -   一条继承线路只有一个Vptr，但可能有多个Vbptr，视有几次虚拟 继承而定。换言之，
            对于一个继承类对象来说，不需要新合成vptr，而是使用其基类子对象的vptr。而
            对于一个虚拟继承类来说，必须新合成一个自己的Vbptr。

        ```cpp
        class X{
            virtual void vf(){}
        };
        class X2:virtual public X
        {
          virtual void vf(){}
        };
        class X3:virtual public  X2
        {
             virtual void vf(){}
        }
        ```

        X3将包含有一个Vptr，两个Vbptr。确切的说这两个Vbptr一个属于X3，一个属于X3的子对
        象X2,X3通过其Vbptr找到子对象X2，而X2通过其Vbptr找到X。

        其中差别在于vptr通过一个虚函数表可以确切地知道要调用的函数，而Vbptr通过虚基类表
        只能够知道其虚基类子对象的偏移量。这两条规则是由虚函数与虚拟继承的实现方式，以
        及受它们的存取方式和复制控制的要求决定的。

    数据成员的存取

    :   静态数据成员相当于一个仅对该类可见的全局变量，因为程序中只存在一个静态数据
        成员的实例，所以其地址在编译时就已经被决定。不论如何静态数据成员的存取不会
        带来任何额外负担。

        非静态数据成员的存取，相当于对象起始地址加上偏移量。效率上与C struct成员的
        效率等同。因为它的偏移量在编译阶段已经确定。但有一种情况例外：pt->x=0.0。当
        通过指针或引用来存取——x而x又是虚基类的成员的时候。因为必须要等到执行期才能
        知道pt指向的确切类型，所以必须通过一个间接导引才能完成。

    在VC中数据成员的布局顺序为：

    -   vptr部分（如果基类有，则继承基类的）
    -   vbptr （如果需要）
    -   基类成员（按声明顺序）
    -   自身数据成员
    -   虚基类数据成员（按声明顺序

    ```
    class Point3d : public Point2d {
    public:
        Point3d( float x = 0.0f, float y = 0.0f, float z = 0.0f )
          : Point2d( x, y )
          , _z( z ) { }

        void operator+=( const Point2d &rhs ) {
            Point2d::operator+=( rhs );
            _z += rsh.z();
        }

        ...

    protected:
        float _z;
    };
    ```

第 4 章 Function语意学（The Semantics of Function） -<

:   C++ 之成员函数调用 -<

    :   c++ 支持三种类型的成员函数，分别为 static, nostatic, virtual。每一种调用方式都不尽相同。

        非静态成员函数（Nonstatic Member Functions） -<

        :   ```cpp
            // 成员函数
            float Point::X();
            // 成员函数X 被插入额外参数 this，变成外部函数
            float Point::X(Point *const this );

            // 或者函数是 const 的，this 指针也要加上 const
            float Point::X() const;
            float Point::X( const Point *const this );
            ```

            将成员函数写成一个外部函数，对函数名进行“mangling”处理，使之成为独一无二的
            名称。

            ```cpp
            // Point3d obj;
            obj.normalize();
            ```

            这里不需要使用 `(*p->vptr[2])()`，因为编译期间就可以处理好，
            用 mangled 函数名直接调用即可：`normalize__7Point3dFv( &obj );`。

            `&Point3d::object_count();` 会得到一个数值，类型是 `unsigned int (*)();`（函数指针），
            而不是 `unsigned int (Point3d::*)();`（函数指针，但是是相对的便宜量）

        虚拟成员函数(Virtual Member Functions) -<

        :   如果function()是一个虚拟函数，那么用指针或引用进行的调用将发生一点特别的转
            换——一个中间层被引入进来。例如：

            ```cpp
            // p->function()
            //将转化为
            (*p->vptr[1])(p);
            ```

            -   其中vptr为指向虚函数表的指针，它由编译器产生。vptr也要进行名字处理，因为一
                个继承体系可能有多个vptr。
            -   1 是虚函数在虚函数表中的索引，通过它关联到虚函数function().

            >   **在 C++ 中，多态（polymorphism）表示“以一个 public base class“的
            >   指针（或 reference），寻址出一个 derived class object”的意思。**

        静态成员函数(Static Member Functions) -<

        :   静态成员函数的一些特性：

            -   不能够直接存取其类中的非静态成员（nostatic members），包括不能调用非静
                态 成员函数(Nonstatic Member Functions)。
            -   不能够声明为 const、voliatile或virtual。
            // passive polymorphism，消极多态
            -   它不需经由对象调用，当然，通过对象调用也被允许。

        ```
        // method 1
        float *ax = &pA.x;
        cout << *ax;

        // method 2
        float Point3d::*ax = &Point3d::x;
        cout << pA.*ax;
        ```

    C++ 之虚函数(Virtual Member Functions) -<

    :   《深度探索C++对象模型》是这样来说多态的:

        >   在 C++ 中,多态表示“以一个public base class 的指针（或引用），寻址出一
        >   个 derived class object”的意思。

        消极多态与积极多态 -<

        :   用基类指针来寻址继承类的对象，我们可以这样：

            ```cpp
            Point *ptr = new Point3d;               //Point3d继承自Point

            // passive polymorphism，消极多态
            ptr->x();
            ```

            在这种情况下，多态可以在编译期完成（虚基类情况除外），因此被称作消
            极多态（没有进行虚函数的调用）。相对于消极多态，则有积极多态——指向
            的对象类型需要在执行期在能决定。积极多态的例子如虚函数和 RTTI：

            ```cpp
            // active polymorphism，积极多态，调用了虚函数
            ptr->z();

            // active polymorphism, RTTI 的应用
            if( Point3d *p =dynamic_cast<Point3d*>(ptr) ) {
            return p->z();
            }
            ```

            识别一个 class 是否支持多态，就是看他有没有任何 virtual function。
            我们为每个多态的 class object 增加两个 members：

            -   一个字符串或数字，表示 class 的类型；
            -   一个指针，指向某表格，表格中带有程序的 virtual functions 的执行期地址。


        单继承下的虚函数 -<

        :   虚函数的实现：

            -   为每个有虚函数的类配一张虚函数表，它存储该类类型信息和所有虚函数执行期的地址。
            -   为每个有虚函数的类插入一个指针（vptr）,这个指针指向该类的虚函数表。
            -   给每一个虚函数指派一个在表中的索引。

            用这种模型来实现虚函数得益于在C++中,虚函数的地址在编译期是可知的，而且这一地址
            是固定不变的。而且表的大小不会在执行期增大或减小。

            一个类的虚函数表中存储有类型信息（存储在索引为0的位置）和所有虚函数地址，这些虚函数地址包括三种：

            -   这个类定义的虚函数，会改写（overriding）一个可能存在的基类的虚函数实体——假如基类也定义有这个虚函数。
            -   继承自基类的虚函数实体，——基类定义有，而这个类却没有定义。直接继承之。
            -   一个纯虚函数实体。用来在虚函数表中占座，有时候也可以当做执行期异常处理函数。

            每一个虚函数都被指派一个固定的索引值，这个索引值在整个继承体系中保持前后关联，
            例如,假如z()在Point虚函数表中的索引值为2，那么在Point3d虚函数表中的索引值也为2

            ```cpp
            // 基类 Point
            class Point {
            public:
                virtual ~Point();
                virtual Point& mult( float ) = 0;       // pure virtual function，纯虚函数
                                                        // 在 vtbl 里没有 slot，对应的是 pure_virtual_called()
                float x() const { return _x; }          // 不是虚函数，不需要在 vtbl 里加入 slot
                virtual float y() const { return 0; }   // vtbl 中有 slot 指向实现
                virtual float z() const { return 0; }
            protected:
                Point( float x = 0.0 );
                float _x;
            };
            ```

            ```cpp
            // Derived Class Point2d
            class Point2d : public Point {
            public:
                Point2d( float x = 0.0f, float y = 0.0f )
                  : Point( x ), _y( y ) { }
                ~Point2d();

                // 改写 base class virtual functions
                Point2d& mult( float );
                float y() const { return _y; }
                ...
            protected:
                float _y;
            };
            ```

            一共有三种可能：

            1.  它可以继承 base class 所声明的 virtual function（其实就是 vtbl
                下相应 slot（下的函数指针）拷贝过去）；
            2.  使用自己的函数实体，应该放到相应的位置 slot，覆盖原来的函数指针；
            3.  添加新的 virtual function，这时候 virtual table 会变大，新的
                slot 会被 append 到后方。

            ```cpp
            class Point3d : public Point2d {
            public:
                Point3d( float x = 0.0f, float y = 0.0f, float z = 0.0f )
                  : Point2d( x, y ), _z( z ) { }
                ~Point3d();

                // 改写 base class 的 virtual functions
                Point3d& mult( float );
                float z() const { return _z; }
                ...
            protected:
                float _z;
            };
            ```

            `ptr->z()` 如何在编译时期设定 virtual function 的调用呢？

            1.  我们不知道 ptr 所指的类型，但我们可以拿到该对象的 vtbl；
            2.  我们不知道哪个 z() 要被调用，但 z() 对应的 slot 都是一个位置（比如 slot4）

            于是编译器就可以把 `ptr->z()` 转化为 `(*ptr->vptr[4])( ptr )`。
            这里 vptr 和 4 都是在编译期间就知道的，只有 ptr 的地址和具体调用哪
            个 z() 是运行期间才知道的。

            pure virtual functions？

            :   ???

        多重继承下的虚函数 -<

        :   ```cpp
            Base2 *ptr = new Derived;

            // 需要被转换为，这个转换在编译期完成
            Derived *temp = new Derived;
            Base2 *ptr = temp ? temp + sizeof(base1) : 0 ; // 偏移“掉” Base1 的那部分
            ```

            当要delete ptr时又面临了一次转换，因为在delete ptr的时候，需要对整
            个对象而不是其子对象施行delete运算符，这期间需要调整ptr指向完整的对
            象起点，因为不论是调用正确的析构函数还是delete运算符都需要一个指向
            对象起点的指针，想一想给予一个derived类的成员函数指向base2
            subobjuect 的this指针会发生什么吧。因为ptr的具体类型并不知道，所以
            必须要等到执行期来完成。

            Bjame 的解决方法是将每一个虚函数表的 slot 扩展，以使之存放一个额外的
            偏移量。于是虚函数的调用：

            ```cpp
            (*ptr->vptr[1])(ptr);
            //将变成：
            (*ptr->vptr[1].addr)(ptr+*ptr->vptr[1].offset);
            ```

            其中使用 `ptr->vptr[1].addr` 用以获取正确的虚函数地址，而
            `ptr+*ptr->vptr[1].offset` 来获得指向对象完整的起点。这种方法的缺点显
            而易见，代价过大了一点，所有的情况都被这一种占比较小的情况拖累。

            还有一种叫做thunk的方法，thunk的作用在于:

            -   以适当的offset值来this调整指针.
            -   跳到虚函数中去。

            多继承下的虚函数，影响到虚函数的调用的实际质上为this的调整。而this调整一般为两种：

            -   调整指针指向对应的subobject，一般发生在继承类类型指针向基类类型
                指针赋值的情况下。
            -   将指向subobject的指针调整回继承类对象的起始点，一般发生在基类指
                针对继承类虚函数进行调用的时候。

            还有别忘了，vptr也可以看做一个数据成员，要找到虚函数，前提是获取正确的vptr偏移量。

        虚拟继承下的虚函数 -<

        :   Lippman说，如果一个虚基类派生自另一虚基类，而且它们都支持虚函数和非
            静态数据成员的时候，编译器对虚基类的支持就像迷宫一样复杂。其实我原
            想告诉他，我是怀着一颗勇士之心而来的 :你说呢:？。


第 5 章 构造、解构、拷贝 语意学（Semantics of Construction，Destruction，and Copy） -<

:   几点类设计原则 -<

    :   一些建议。

    构造、复制、析构语意学

    :   。。。

第 6 章 执行期语意学（Runtime Semantics）

第 7 章 站在对象模型的类端（On the Cusp of the Object Model）

refs and see also

-   [《深度探索C++对象模型》笔记汇总](http://www.roading.org/develop/cpp/%e3%80%8a%e6%b7%b1%e5%ba%a6%e6%8e%a2%e7%b4%a2c%e5%af%b9%e8%b1%a1%e6%a8%a1%e5%9e%8b%e3%80%8b%e7%ac%94%e8%ae%b0%e6%b1%87%e6%80%bb.html)
-   [C++之虚函数(Virtual Member Functions)](http://www.roading.org/develop/cpp/c%E4%B9%8B%E8%99%9A%E5%87%BD%E6%95%B0virtual-member-functions.html)

## C++ 快问快答

-   struct 和 class 的区别？

-   pointer 和 reference 的区别？

-   为什么 alignment 可以提高总线（bus）的运输效率？

-   What and where are the stack and heap?

    refs and see also

    -   [memory management - What and where are the stack and heap? - Stack Overflow](http://stackoverflow.com/questions/79923/what-and-where-are-the-stack-and-heap#79936)

-   What are the differences between a pointer variable and a reference variable in C++? -<

    :   -   A pointer can be re-assigned any number of times while a reference can not be re-seated after binding.
        -   Pointers can point nowhere (NULL), whereas reference always refer to an object.
        -   You can't take the address of a reference like you can with pointers.
        -   There's no "reference arithmetics" (but you can take the address of
            an object pointed by a reference and do pointer arithmetics on it
            as in `&obj + 5`).
        -   References cannot be stuffed into an array, whereas pointers can be

        You can have pointers to pointers to pointers offering extra levels of
        indirection. Whereas references only offer one level of indirection.

        ```cpp
        int x = 0;
        int y = 0;
        int *p = &x;
        int *q = &y;
        int **pp = &p;
        pp = &q;//*pp = q
        **pp = 4;
        assert(y == 4);
        assert(x == 0);
        ```

        A pointer is a variable that holds a memory address. Regardless of how
        a reference is implemented, a reference has the same memory address as
        the item it references.

        ```cpp
        int i = 2, *pi = &i, &ri = i;
        printf( "%p, %p, %p, %p\n", &i, pi, &ri, &pi );
        // 0x7fff039457c4, 0x7fff039457c4, 0x7fff039457c4, 0x7fff039457c8

        // &&ri --> error: label ‘ri’ used but not defined
        ```

        Const references can be bound to temporaries. Pointers cannot (not without some indirection):

        ```cpp
        const int &x = int(12); //legal C++
        int *y = &int(12); //illegal to dereference a temporary.
        ```

        This makes `const&` safer for use in argument lists and so forth.

        refs and see also

        -   [What are the differences between a pointer variable and a reference variable in C++? - Stack Overflow](http://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in)
        -   [C++ FQA Lite: References](http://yosefk.com/c++fqa/ref.html)

-   What is the difference between `const int*`, `const int * const`, and `int const *`? -<

    :   Read it backwards (as driven by Clockwise/Spiral Rule)...

        -   `int*` - pointer to int
        -   `int const *` - pointer to const int
        -   `int * const` - const pointer to int
        -   `int const * const` - const pointer to const int

        Now the first const can be on either side of the type so:

        -   `const int *` == `int const *`
        -   `const int * const` == `int const * const`

        If you want to go really crazy you can do things like this:

        -   `int **` - pointer to pointer to int
        -   `int ** const` - a const pointer to a pointer to an int
        -   `int * const *` - a pointer to a const pointer to an int
        -   **`int const **`** - a pointer to a pointer to a const int （这个有点容易弄错）
        -   `int * const * const` - a const pointer to a const pointer to an int
            ...

        And to make sure we are clear on the meaning of const

        ```cpp
        const int* foo;         // 不能改变指向位置的内容
        int *const bar = &i;    // 只能指向 i，不能 re-assign 了
        ```

        refs and see also

        -   [c++ - What is the difference between `const int*`, `const int * const`, and `int const *`? - Stack Overflow](http://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const)
        -   [Clockwise/Spiral Rule](http://c-faq.com/decl/spiral.anderson.html)

-   What are rvalues, lvalues, xvalues, glvalues, and prvalues? -<

    :   ```
                    expression
                     /    \
                    /      \
                   /        \
               glvalue     rvalue
               /    \      /    \
              /      \    /      \
             /        \  /        \
          lvalue     xvalue     prvalue

                    ______ ______
                   /      X      \
                  /      / \      \
                 |   l  | x |  pr  |
                  \      \ /      /
                   \______X______/
                       gl    r

        ```

        In C++03, an expression is either an rvalue or an lvalue.

        In C++11, an expression can be an:

        -   rvalue  = prvalue - xvalue
        -   glvalue = lvalue + xvalue

        Two categories have become five categories.

            What are these new categories of expressions?
            How do these new categories relate to the existing rvalue and lvalue categories?
            Are the rvalue and lvalue categories in C++0x the same as they are in C++03?
            Why are these new categories needed? Are the WG21 gods just trying to confuse us mere mortals?

        -   An lvalue (so-called, historically, because lvalues could appear on the
            left-hand side of an assignment expression) designates a function or an
            object.

            Example: If E is an expression of pointer type, then *E is an
            lvalue expression referring to the object or function to which E points. As
            another example, the result of calling a function whose return type is an
            lvalue reference is an lvalue.

        -   An xvalue (an “eXpiring” value) also refers to an object, usually near the
            end of its lifetime (so that its resources may be moved, for example). An
            xvalue is the result of certain kinds of expressions involving rvalue
            references.

            Example: The result of calling a function whose return type is
            an rvalue reference is an xvalue.

        -   A glvalue (“generalized” lvalue) is an lvalue or an xvalue.

        -   An rvalue (so-called, historically, because rvalues could appear on the
            right-hand side of an assignment expression) is an xvalue, a
            **temporary object** or subobject thereof（其中的）, or a value
            that is not associated with an object.

        -   A prvalue (“pure” rvalue) is an rvalue that is not an xvalue.

            Example: The result of calling a function whose return type is not
            a reference is a prvalue

        Examples with functions:

        ```cpp
        int   prvalue();
        int&  lvalue();
        int&& xvalue();
        ```

        But also don't forget that named rvalue references are lvalues:

        ```cpp
        void foo(int&& t) {
          // t is initialized with an rvalue expression
          // but is actually an lvalue expression itself
        }
        ```

        refs and see also

        -   [c++ - What are rvalues, lvalues, xvalues, glvalues, and prvalues? - Stack Overflow](http://stackoverflow.com/questions/3601602/what-are-rvalues-lvalues-xvalues-glvalues-and-prvalues)
        -   [n3055.pdf](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3055.pdf)

-   Iterator invalidation rules

    refs and see also

    -   [c++ - Iterator invalidation rules - Stack Overflow](http://stackoverflow.com/questions/6438086/iterator-invalidation-rules)

[Issues · ReadingLab/Discussion-for-Cpp](https://github.com/ReadingLab/Discussion-for-Cpp/issues)
[pezy/QtLab: Qt Primer](https://github.com/pezy/QtLab)

---

[Adoo's blog - Introduction to Algorithm -third edition](http://www.roading.org/category/introduction-to-algorithm-third-edition.html)

---

Books:

-   [《C语言接口与实现:创建可重用软件的技术》 David R. Hanson, 郭旭【摘要 书评 试读】图书](https://www.amazon.cn/gp/product/B005LAJ9F6/ref=as_li_ss_tl?ie=UTF8&camp=536&creative=3132&creativeASIN=B005LAJ9F6&linkCode=as2&tag=lucida-23)
