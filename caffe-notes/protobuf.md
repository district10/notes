## Protocol Buffers

[google/protobuf: Protocol Buffers - Google's data interchange format](https://github.com/google/protobuf) +<

:   Protocol Buffers are a way of encoding structured data in an efficient yet
    extensible format. Google uses Protocol Buffers for almost all of its internal
    RPC protocols and file formats.

[Protocol Buffers  |  Google Developers](https://developers.google.com/protocol-buffers/) +<

:   Protocol buffers are Google's language-neutral, platform-neutral,
    extensible mechanism for serializing structured data – think XML, but
    smaller, faster, and simpler. You define how you want your data to be
    structured once, then you can use special generated source code to easily
    write and read your structured data to and from a variety of data streams
    and using a variety of languages.

    Why not just use XML? -<

    :   Protocol buffers have many advantages over XML for serializing structured data. Protocol buffers:

        -   are simpler
        -   are 3 to 10 times smaller
        -   are 20 to 100 times faster
        -   are less ambiguous
        -   generate data access classes that are easier to use programmatically

[Home · google/protobuf Wiki](https://github.com/google/protobuf/wiki) -<

:   brief intro.

    `.proto`

    :   ```
        message Person {
          required int32 id = 1;
          required string name = 2;
          optional string email = 3;
        }
        ```

        一旦你定义了自己的报文格式(message)，你就可以运行ProtocolBuffer编译器，
        将你的 .proto 文件编译成特定语言的类。

    usage

    :   ```cpp
        // write
        Person person;
        person.set_id(123);
        person.set_name("Bob");
        person.set_email("bob@example.com");

        fstream out("person.pb", ios::out | ios::binary | ios::trunc);
        person.SerializeToOstream(&out);
        out.close();

        // read
        Person person;
        fstream in("person.pb", ios::in | ios::binary);
        if (!person.ParseFromIstream(&in)) {
          cerr << "Failed to parse person.pb." << endl;
          exit(1);
        }

        // check
        cout << "ID: " << person.id() << endl;
        cout << "name: " << person.name() << endl;
        if (person.has_email()) {   // 不是 optional 也有这个函数
          cout << "e-mail: " << person.email() << endl;
        }
        ```

[Protocol Buffer Basics: C++  |  Protocol Buffers  |  Google Developers](https://developers.google.com/protocol-buffers/docs/cpptutorial#parsing-and-serialization) -<

:   source: addressbook.proto -<

    :   ```cpp
        @include <-=include/addressbook.proto=
        ```

    Compiling Your Protocol Buffers -<

    :   -   [protoc-2.6.1-win32.zip](https://github.com/google/protobuf/releases/download/v2.6.1/protoc-2.6.1-win32.zip)
        -   `%.proto` --> `protoc -I=$SRC_DIR --cpp_out=$DST_DIR $SRC_DIR/addressbook.proto`{.bash} --> `%.pb.{h,cc}`
        -   language support +<
            +   `--cpp_out`
            +   `--java_out`
            +   `--python_out`

    generated cpp code: addressbook.pb.{h,cc} -<

    :   addressbook.pb.h -<

        :   ```cpp
            @include <-=include/addressbook.pb.h=
            ```

        addressbook.pb.cc -<

        :   ```cpp
            @include <-=include/addressbook.pb.cc=
            ```

    The Protocol Buffer API -<

    :   -----------------------------------------               ----------------------------------------------------
        `optional string email = 3;`                            `inline bool has_email() const;`
        -----------------------------------------               ----------------------------------------------------

        -   Commons
            +   `get_`
            +   `set_`
            +   `clean_`, un-sets the field back to its empty state
            +   `has_`, required/optional both have this one
            +   `mutable_`,
            +   `_size` <- repeated fields
            +   [C++ Generated Code  |  Protocol Buffers  |  Google Developers](https://developers.google.com/protocol-buffers/docs/reference/cpp-generated)
        -   Enums and Nested Classes
            +   enums: `Person::PhoneType = {Person::HOME, Person::WORK}`
            +   classes: `Person::PhoneNumber` -> `Person_PhoneNumber`
        -   Standard Message Methods
            +   `bool IsInitialized() const;`
            +   `string DebugString() const;`
            +   `void CopyFrom(const Person& from);`
            +   `void Clear();`
        -   Parsing and Serialization (`sting *` to contain binary bits.)
            +   `bool SerializeToString(string* output) const;`
            +   `bool ParseFromString(const string& data);`
            +   `bool SerializeToOstream(ostream* output) const;`
            +   `bool ParseFromIstream(istream* input);`

    Writing A Message -<

    :   ```cpp
        @include <-=include/addressbook.write.cpp=
        ```

    Reading A Message -<

    :   ```cpp
        @include <-=include/addressbook.read.cpp=
        ```

    Extending a Protocol Buffer -<

    :   一些建议。

        [gperftools/gperftools: Main gperftools repository](https://github.com/gperftools/gperftools)

        :   ```
            gperftools
            ----------
            (originally Google Performance Tools)

            The fastest malloc we’ve seen; works particularly well with threads
            and STL. Also: thread-friendly heap-checker, heap-profiler, and
            cpu-profiler.
            ```

    Advanced Usage -<

    :   Protocol buffers have uses that go beyond simple accessors and
        serialization. Be sure to explore the C++ API reference to see what
        else you can do with them.

        One key feature provided by protocol message classes is reflection. You
        can iterate over the fields of a message and manipulate their values
        without writing your code against any specific message type. One very
        useful way to use reflection is for converting protocol messages to and
        from other encodings, such as XML or JSON. A more advanced use of
        reflection might be to find differences between two messages of the
        same type, or to develop a sort of "regular expressions for protocol
        messages" in which you can write expressions that match certain message
        contents. If you use your imagination, it's possible to apply Protocol
        Buffers to a much wider range of problems than you might initially
        expect!

        Reflection is provided by the [Message::Reflection
        interface](https://developers.google.com/protocol-buffers/docs/reference/cpp/google.protobuf.message.html#Message.Reflection).

[Language Guide  |  Protocol Buffers  |  Google Developers](https://developers.google.com/protocol-buffers/docs/proto#simple) -<

:   Defining A Message Type -<

    :   Specifying Field Types

        Assigning Tags -<

        :   -   unique numbered tag

        Specifying Field Rules -<

        :   three types

            -   required, {1}
            -   optional, {0,1}
            -   repeated, {0,}

            `repeated int32 samples = 4 [packed=true];`, packed=true for efficiency.
            Google 倾向于只用 optional 和 repeated。

        Adding More Message Types

        Adding Comments: `// one-line comment`

        Reserved Fields -<

        :   ```
            message Foo {
              reserved 2, 15, 9 to 11;
              reserved "foo", "bar";
            }
            ```

        What's Generated From Your `.proto`? -<

        :   -   .cc, .h
            -   .java
            -   etc

    Scalar Value Types -<

    :   all types

        -------------   ---------       ----------      ------------        ---------
        `.proto` Type   C++ Type        Java Type       Python Type         Go Type
        -------------   ---------       ----------      ------------        ---------
        `double`        `double`        `double`        `float`             `*float64`

        `float`         `float`         `float`         `float`             `*float32`

        `bool`          `bool`          `boolean`       `bool`              `*bool`

        `string`        `string`        `String`        `str/unicode`       `*string`

        `bytes`         `string`        `ByteString`    `str`               `[]byte`
        -------------   ---------       ----------      ------------        ---------

       注：string 必须是 utf-8 编码，或者只能是 7 bit 的 ascii。

    Optional Fields And Default Values -<

    :   只有 optional 才要有 default 呢，因为不 optional 的都要显式赋值？
        语法如下：

        ```
        optional int32 result_per_page = 3 [default = 10];

        // type-specific defaults
        //      string     <-      "",
        //      bool       <-      false,
        //      number     <-      0,
        ```

    Enumerations -<

    :   ```
        message SearchRequest {
          required string query = 1;
          optional int32 page_number = 2;
          optional int32 result_per_page = 3 [default = 10];
          enum Corpus {
            UNIVERSAL = 0;
            WEB = 1;
            IMAGES = 2;
            LOCAL = 3;
            NEWS = 4;
            PRODUCTS = 5;
            VIDEO = 6;
          }
          optional Corpus corpus = 4 [default = UNIVERSAL];
        }
        ```

        ```
        // 如果不 allow_alias 的话，不能同时给变量 STARTED 和 RUNNING 赋值 1
        enum EnumAllowingAlias {
          option allow_alias = true;
          UNKNOWN = 0;
          STARTED = 1;
          RUNNING = 1;
        }
        ```

    Using Other Message Types -<

    :   ```
        message SearchResponse {
          repeated Result result = 1;
        }

        message Result {
          required string url = 1;
          optional string title = 2;
          repeated string snippets = 3;
        }
        ```

    Importing Definitions -<

    :   `import "myproject/other_protos.proto";`

        有点复杂的是可以指定 public import。

    Nested Types -<

    :   不要用 group，用 nested types。

        ```
        message SearchResponse {
          message Result {
            required string url = 1;
            optional string title = 2;
            repeated string snippets = 3;
          }
          repeated Result result = 1;
        }
        ```

    Updating A Message Type

    Oneof -<

    :   If you have a message with many optional fields and where at most one
        field will be set at the same time, you can enforce this behavior and
        save memory by using the oneof feature.

[惊帆之静默 » Blog Archive » ProtoBuf开发者指南 – 非官方不完整版](http://gashero.yeax.com/?p=108) -<


:   代码风格指导 -<

    :   ```
        message SongServerRequest {
            required string song_name=1;
        }
        ```

        使用这种命名方式得到的名字如下:

        ```
        C++:
            const string& song_name() {...}
            void set_song_name(const string& x) {...}

        Java:
            public String getSongName() {...}
            public Builder setSongName(String v) {...}
        ```

        ```
        enum Foo {
            FIRST_VALUE=1;
            SECOND_VALUE=2;
        }
        ```

        每个枚举值最后以分号结尾，而不是逗号。

        如果你的 .proto 文件定义了RPC服务，你可以使用骆驼风格:

        ```
        service FooService {
            rpc GetSomething(FooRequest) returns (FooResponse);
        }
        ```

---

下一步：

See caffe 的 proto 定义

:   include from include dir

    @include <-=include/caffe.proto.md=
