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

// memory

    #include <stdlib.h>                 // malloc
    #include <string.h>                 // memcpy
    malloc( size    );
    calloc( nmemb, size );
    realloc(  ptr, size );
    free(   ptr     );

    memset( buf, value, numbytes );
    memcpy( dst, src, size );
    int strcmp(     s1,     s2  );
    int strncmp(    s1,     s2,     n );
    char *strcpy(   char *dest, const char *src );
    char *strncpy(  char *dest, const char *src, size_t n );
    char *strchr(   const char *s, int c );
    char *strrchr(  const char *s, int c );

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
    sort( line.begin(), line.end() );

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

    string output;
    ostringstream ss;
    ss << i << d << s;
    output = ss.str();

// atoi, etc

    #include <stdlib.h>
    double      atof(  const char *str );
    int         atoi(  const char *str );
    long        atol(  const char *str );
    long long   atoll( const char *str );

// stl

    fill(   v.begin(),  v.end(),    -1 );
    fill_n( v.begin(),  v.size(),   -1 );
    fill_n( &v[0],      v.size(),   -1 );

    reverse_iterator<string::iterator>  r = s.rbegin(); ++r;
    string::reverse_iterator            r = s.rbegin(); ++r;

    for (auto i : v)
    for (auto const &n : nums)

    vector<char> vec( str.begin(), str.end() );

    binary_search( haystack.begin(), haystack.end(), needle) );
    search( haystack.begin(), haystack.end(), needles.begin(), needles.end() ) != haystack.end();

    int i = 32;
    vector<int> vi = { 10, 21, 32, 43 };
    auto it1 = search( vi.begin(), vi.end(), &i, &i+1 );
    printf( "index: %d, value: %d\n", (int)distance(vi.begin(), it1), *it1 );
    //  index: 2, value: 32

    string s = "two";
    vector<string> vs = { "zero", "one", "two", "three" };
    auto it2 = search( vs.begin(), vs.end(), &s, &s+1 );
    printf( "index: %d, value: %s\n", (int)distance(vs.begin(), it2), it2->c_str() );
    //  index: 2, value: two

    struct Sum {
        Sum(): sum{0} { }
        void operator()(int n) { sum += n; }
        int sum;
    };
    vector<int> nums{1, 2, 5};
    for_each( nums.begin(), nums.end(), [](int &n){ n++; } );   // 2, 3, 6
    Sum s = for_each( nums.begin(), nums.end(), Sum() );
    int s = for_each( nums.begin(), nums.end(), Sum() ).sum;    // 11

    min( 1, 9999 );
    max( 1, 9999 );
    pair<const T&, const T&> minmax( const T& a, const T& b, Compare comp );

    vector<int>::iterator result = max_element( v.begin(), v.end() );
    int idx = distance( v.begin(), result );
    int val = v[idx];

    auto iter = prev( it, 2 );
    auto iter = next( it, 2 );
    advance( it, 2 );

    swap( a, b );

    partial_sum( first, last, d_first );

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

    // stack
        #include <stack>
        stack<int> s;
        s.push( 7 );
        s.pop();
        s.top();
        for( stack<int> dump = s; !dump.empty(); dump.pop() ) {
            cout << dump.top() << '\n';
        }

    // queue
        #include <functional>                                           // std::greater
        #include <queue>

        // priority_queue
        priority_queue<int> pq;
        priority_queue<int, std::vector<int>, std::greater<int> > pq;   // default is less<T>
        pq.push( 7 );                                                   // like stack
        pq.pop();
        pq.top();

        // queue
        queue<int> q;
        q.push( 7 );
        q.pop();
        q.front();      q.back();

    // set
        // set
        #include <set>
        set<int> s;
        s.insert( 5 );
        s.erase(  5 );
        for( auto i : s ) { cout << i << "\n"; }
        for( set<int>::iterator it = s.begin(); it != s.end(); ++it ) { cout << *it << "\n"; }


        // unoreder_set
        #include <unordered_set>
        unordered_set<int> us;
        us.insert( 5 );
        us.erase(  5 );
        for( auto i : s ) { cout << i << "\n"; }
        for( unordered_set<int>::iterator it = s.begin(); it != s.end(); ++it ) { cout << *it << "\n"; }

    // map
        // map
        #include <map>
        map<string, int> m;
        ++m[key];       // 第一次使用也不用创建，因为没有这个 key 的时候，会自动生成并把 int 初始化为 0。
                        //                  std::map<char, int> m;
                        //                  std::cout << m['a'] << "\n";    // 0
                        //                  ++m['b'];
                        //                  std::cout << m['b'] << "\n";    // 1
                        //                  m['c'] = 5;
                        //                  std::cout << m['c'] << "\n";    // 5
        if( m.find(2) != m.end() )      { ... }
        if( m.count(2) )                { ...}

        map<string, int> m = {{"one", 1}, {"two", 2}};
        m["zero"];
        for( auto p : m ) { cout << p.first << " -> " << p.second << "\n"; }
        for( map<string, int>::iterator it = m.begin(); it != m.end(); ++it ) { cout << it->first << " -> " << it->second << "\n"; }

        // unordered_map
        #include <unordered_map>
        unordered_map<string, int> m = {{"one", 1}, {"two", 2}};
        m["zero"];
        for( auto p : m ) { cout << p.first << " -> " << p.second << "\n"; }
        for( unordered_map<string, int>::iterator it = m.begin(); it != m.end(); ++it ) { cout << it->first << " -> " << it->second << "\n"; }

// flags

    #include <climits>
    #include <cstddef>
    CHAR_MAX,                   UCHAR_MAX
    SHRT_MAX,                   USHRT_MAX
    INT_MAX,                    UINT_MAX
    LONG_MAX,                   ULONG_MAX
    LLONG_MAX,                  ULLONG_MAX
    DBL_MAX
    FLT_MAX
