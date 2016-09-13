// misc

    using namespace std;

// typedef

    typedef int Point;
    typedef struct { Point x, y; } Point2d;
    typedef Point2d Triangle[3];    // Triangle tri;    // 6 ints inside
    typedef Point2d (*FuncPtr)( Point2d p1, Point2d p2 );

// pointers

    int *array = new int[5];
    delete[] array;

    int *i = new int;
    delete i;

// vector

    #include <vector>
    vector<vector<int> > mat( row, vector<int>(col, 0) );
    vector<int> vec;
    vec.reserve(10);
    vec.resize(5);
    vec.clear();
    vector<int>().swap(vec);

// char manip

    #include <ctype>
    int isalnum(    int c   );
    int isalpha(    int c   );
    int isascii(    int c   );
    int isblank(    int c   );
    int iscntrl(    int c   );
    int isdigit(    int c   );
    int isgraph(    int c   );
    int isprint(    int c   );
    int ispunct(    int c   );
    int isspace(    int c   );
    int isxdigit(   int c   );

// equal?

    int i;
    i%2 == 0
    i%2 != 0

    double a, b;
    fabs(a-b) < 1e-9

// file io

    #include <stdio.h>
    FILE *fp = fopen(filename, "r");
    while( 2 == fscanf( fp, "%d %s", &index, buf ) ) { ... }
    fclose(fp);
    size_t fread(        void *ptr, size_t size, size_t nmemb, FILE *stream );
    size_t fwrite( const void *ptr, size_t size, size_t nmemb, FILE *stream );

    #include <fstream>
    ifstream file( filename.c_str(), ifstream::in );
    ifstream file;
    file.open( filename.c_str(), ifstream::in );
    if ( !file )                    { ... }
    if ( !file.is_open() )          { ... }

    string line;
    while ( getline(file, line) )   { ... }

    ofstream file;
    file.open( "example.txt" );
    file << "Writing this to a file.\n";
    file.close();

// string

    sscanf( string.c_str(), format, ...)
    int fscanf ( FILE * stream, const char * format, ... );
    fgets( buf, sizeof(buf), stdin );
    sprintf( str, %d", num );

    #include <sstream>
    string input;
    istringstream stream(input);
    while( stream >> i ) { ... }

// atoi, etc

    #include <stdlib.h>
    double      atof(  const char *str );
    int         atoi(  const char *str );
    long        atol(  const char *str );
    long long   atoll( const char *str );

// memset

    memset( buf, value, numbytes );

// stl

    fill( v.begin(), v.end(), -1 );

    reverse_iterator<string::iterator>  r = s.rbegin(); ++r;
    string::reverse_iterator            r = s.rbegin(); ++r;

    for (auto i : v)
    for (auto const &n : nums)

    struct Sum {
        Sum(): sum{0} { }
        void operator()(int n) { sum += n; }
        int sum;
    };

    vector<int> nums{3, 4, 2, 8, 15, 267};
    for_each( nums.begin(), nums.end(), [](int &n){ n++; } );
    Sum s = for_each( nums.begin(), nums.end(), Sum() );

    min( 1, 9999 )
    max( 1, 9999 )
    pair<const T&, const T&> minmax( const T& a, const T& b, Compare comp )

    vector<int>::iterator result = max_element( v.begin(), v.end() );
    int idx = distance( v.begin(), result );

    auto iter = prev( it, 2 );
    auto iter = next( it, 2 );
    advance( it, 2 );

    swap( a, b );

    partial_sum( first, last, d_first );


    #include <map>
    map<string, int> m;
    ++m[key];       // 第一次使用也不用创建，因为没有这个 key 的时候，会自动生成并把 int 初始化为 0。
    if( m.find(2) != m.end() )      { ... }
    if( m.count(2) )                { ...}

    unordered_map<int, int> map;

    for( std::stack<int> dump = stack; !dump.empty(); dump.pop() ) {
        std::cout << dump.top() << '\n';
    }

    for( deque<int>::iterator it = q.begin(); it != q.end(); ++it )
        cout << *it << endl;
    }

    #include <iterator>
    auto lower = lower_bound(data.begin(), data.end(), 4);
    auto upper = upper_bound(data.begin(), data.end(), 4);
    copy(lower, upper, std::ostream_iterator<int>(std::cout, " "));

    transform( s.begin(), s.end(), s.begin(), [](unsigned char c) { return toupper(c); } );

    str1.erase( remove(str1.begin(), str1.end(), ' '), str1.end() );
    auto last = unique(v.begin(), v.end());
    v.erase( last, v.end() );

// flags

    #include <limits>
    #include <cstddef>
    CHAR_MAX,               UCHAR_MAX
    SHRT_MAX,               USHRT_MAX
    INT_MAX,                UINT_MAX
    LONG_MAX,               ULONG_MAX
    LLONG_MAX,              ULLONG_MAX
    DBL_MAX
    FLT_MAX

#include <functional>               // std::greater
#include <queue>
priority_queue<int> q; q.push( 5 );
priority_queue<int, std::vector<int>, std::greater<int> > q;  // default is less<T>
q.top(); q.pop();

