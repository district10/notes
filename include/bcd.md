【BCD 项目总结，草稿！】

[CVRS 参加第二届杭州机器人西湖论坛 - 公告 - 武汉大学计算机视觉与遥感实验室（CVRS Lab）](http://cvrs.whu.edu.cn/index.php?m=content&c=index&a=show&catid=99&id=50)

>   2016 年 5 月 22 日，由武汉大学计算机视觉与遥感实验室（WHU-CVRS Lab）姚剑教
>   授负责研制的《桥梁智能检测机器人系统》，协同合作单位 - 湖南桥康智能科技有限
>   公司团队参加第二届杭州机器人西湖论坛，参与了大会组织的项目路演，从最初的
>   100 多个项目中筛选出 10 个进入路演决赛，最后取得了第三名的好成绩。

BirX 桥梁检测机器人项目是研究生以来自己参与的第一个项目^[实际上那时候我本科还没
有毕业。也因为这个项目我没有参加毕业典礼（所以错过雷军在毕业典礼上的演讲）。]。
这个【项目总结】只针对自己参与的部分，主要是对各个传感器模块、日志模块、通信模块和
系统架构进行框架和代码上的总结分析。（代码不方便公开，所以这里的贴的是精简和调整过的示例代码片段。）

![我主要负责整体框架、各传感器模块、日志和通信模块，算法模块由各师兄负责。](http://whudoc.qiniudn.com/2016/system-architecture.png)

因为篇幅较大，所以计划分成如下六个主题分别讲述：

-   1.  硬件系统：简介我们的桥梁裂缝检测车以及上面的传感器。
-   2.  系统架构：简介高性能计算机和工控机的各自职责和各传感器；
-   3.  Logger（日志）模块和 Utils 模块：这是整个软件系统通用的部分；
-   4.  传感器模块选讲（LMS 和 IMU 和 UR）：简介如何写一个传感器代码，为算法模块提供接口；
-   5.  通信模块：Wrappers 和 Moderator：简介跨电脑 IPC，进行函数调用；
-   6.  总结：收获与不足

# 1. 硬件系统

>   简介我们的桥梁裂缝检测车以及上面的传感器。

首先，BriX 桥梁检测机器人项目的主要目标是实现对桥梁裂缝的自动识别和提取。

现阶段，桥梁裂缝的识别，主要靠人工（就是人跑到桥底用眼睛看，用尺子量），主要问题是：
1）效率低；2）不稳定（人的主观性对检测结果有干扰）。
图 1 是一些改进方案，但他们都或多或少存在适用性差、效率低、设计得过于复杂等问题。

![图 1](http://whudoc.qiniudn.com/2016/wpp_2016-07-26_10-53-03.png)

左下角的方案来自韩国汉阳大学，采用的是桥梁检测车。
早期的桥梁检测车设计粗糙（往往只是在普通货车上加一个支架），还是依赖人工，如图 2。

![图 2. 第一代桥梁检测车](http://whudoc.qiniudn.com/2016/wps_2016-07-26_10-43-13.png)

这突然让我想到了农业自动化水平高到令人叹为观止的德国，的……芒果收割机：

![Lemon Harvesting Machine](http://whudoc.qiniudn.com/2016/2016-07-26_13-35-57.gif)

哈哈哈哈。这“吊篮式”真是太逗啦。不过桥梁检测车是相对简单、经济、可行的解决方案，
我们的系统走的也是这条路。这是工作示意图：

![](http://whudoc.qiniudn.com/2016/2016-07-26_10-23-56.png)

首先，检测车走到桥面上，然后伸出机械臂，把传感器放到桥底合适的位置，然后用前进后退，对桥底进行检测分析。
下面两张图是我们实际效果。

![图 3. 展臂：把传感器放到合适的位置](http://whudoc.qiniudn.com/2016/wpp_2016-07-26_10-57-54.png)

![图 4. 行走：用传感器采集桥底影像数据](http://whudoc.qiniudn.com/2016/wpp_2016-07-26_10-58-57.png)

下面是驾驶室的控制台。

![图 5. ](http://whudoc.qiniudn.com/2016/2016-07-26_10-21-57.png)

可以看到控制台上有两台电脑，一台高性能计算机、一台工控机，可以对车辆和传感器进行监控和调度。

高性能计算机主要特征是性能强劲，它有 2 个 CPU：英特尔至强处理器 E5-2680 v2 (10核 2.8GHz Turbo, 25 MB)，
内存高达 128GB（8x16GB），主要用来对采集的传感器数据（尤其是相机影像数据）进行在线处理。
工控机的主要特征是插孔多，能够连接多种传感器。

检测车的机械臂末端，以及车体周围，含多种传感器（如图 6、7）：

-   3D 相机：[C2](http://at.fsinet.com/C2-2040-GigE.htm)，在激光器的协助下得到桥面点云；
-   面阵相机：[SP-20000C](http://www.jai.com/en/products/sp-20000-pmcl)（实际上是【彩色逐行扫描相机】）；
-   小机械臂（相对大机械臂而言）：[UR10](http://www.universal-robots.com/products/ur10-robot/)，用来微调末端位置，将传感器放置到合适的位置和姿态；
-   光源：LED 面阵光源；
-   超声波：用来检测各机械臂和桥体的距离（防止碰撞）；
-   激光器：协助 C2 相机；
-   惯导：对 LMS 的传感器平台进行位姿监控；
-   编码器：测量车辆行走距离（检测车工作时，通过行走论前进后退，通过编码器获取行走的距离和方向）；

![图 6](http://whudoc.qiniudn.com/2016/2016-07-26_10-17-24.png)

![图 7](http://whudoc.qiniudn.com/2016/2016-07-26_10-17-31.png)

项目初期，我们在长沙蓝色工业园的厂房内搭建了一个模拟的桥底，用于测试。
如图 8、9、10。

![图 8. 工场内景](http://whudoc.qiniudn.com/2016/2016-07-26_10-18-18.png)

![图 9. 测试用的假桥](http://whudoc.qiniudn.com/2016/2016-07-26_10-20-41.png)

![图 10. 装备了传感器的测试平台](http://whudoc.qiniudn.com/2016/2016-07-26_10-20-51.png)

# 2.  系统架构

>   简介高性能计算机和工控机的各自职责和各传感器；

首先，系统的软件部分主要运行在高性能计算机和公控机上。整个系统可分为四部分：

![采集模块+通信模块+算法模块+展示模块（这里没有画出）](http://whudoc.qiniudn.com/2016/system-architecture.png)

采集模块包括个传感器：LMS、IMU、UR 等，传感器分布在两台电脑上（指高性能计算机和工控机），
具体连接情况要看当时的接线。通信模块指的是两台电脑直接的传感器数据的共享，以及两者间的
IPC，函数调用。算法模块主要是对传感器定位定姿，对采集的影像数据拼接合并，多种传感器数据的配准融合。

## 采集模块

下面只介绍项目中我接触到的传感器。因为 C2 和 SP20000C 有官方提供的 SDK，不需要撰写数据获取程序，这里略过。

LMS

:   ![](http://gnat-tang-archive.qiniudn.com/lms.gif){align=right}

    在我 2015 年 9 月的一篇 post（[LMS 数据量](http://tangzx.qiniudn.com/post-0056-lms-chunk.html)），我也提过 LMS。

    LMS 是 SICK（德国西克） 公司生产的 Laser Measurement Sensor（激光测距仪）。
    通过一根网线可以读取 LMS 采集的数据。在我们的设置下，它的数据量约为 0.3 Mb/s。

MUC, IMU

:   TODO

ARM

:   大机械臂，TODO

UR 10

:   TODO

## 通信模块

传感器和计算机之间通信主要有 1）TCP（LMS 和 UR10 等），2）串口（UR 10、MCU、ARM 等），
两台电脑之间通信也是采用网线连接用的是 TCP。

## 算法模块

这部分我并不负责，只简单说明需要处理的部分难题。

![影像配准和拼接](http://whudoc.qiniudn.com/2016/2016-07-26_10-33-57.png)

![影像配准和拼接](http://whudoc.qiniudn.com/2016/2016-07-26_10-33-46.png)

![影像匀光匀色](http://whudoc.qiniudn.com/2016/wpp_2016-07-26_10-55-18.png)

![点云配准拼接](http://whudoc.qiniudn.com/2016/wps_2016-07-26_10-50-44.png)

![点云面提取](http://whudoc.qiniudn.com/2016/wps_2016-07-26_10-48-51.png)

## 展示模块

![](http://whudoc.qiniudn.com/2016/2016-07-26_10-32-24.png)

![](http://whudoc.qiniudn.com/2016/2016-07-26_10-32-31.png)

三维展示模块主要用的是 OpenSceneGraph，我也参与了一点（但是并不完善，所以没有纳入总结中），
见 [图片-dvorak4tzx](http://dvorak4tzx.lofter.com/post/1d4021c8_ac12379)。

# 3. Logger 模块和 Utils 模块

>   这是整个软件系统通用的部分；

## 日志模块

日志（logger）模块是项目进行到一段时间后才开发的，但我还是要放到其他模块之前讲。

程序在多线程、有网络通信无法用常规设置断点等方式 debug 的情况下，
实现多人参与多模块的系统代码调试，只能通过日志模块。
只有这种低级的打印方式才能发现程序运行中出现的问题。我们是迫于无奈，才要
弄这么一个日志模块，写得过程中碰到许多麻烦，但终于是搞定了~
（但现在我不主张自己写 Logger 模块。有次我直接从 CloudCompare 的源码里扣它的日志模块，
大概用了半小时就搞定了==，它还有一个界面，输出效果也比较满意。）

它的使用方法是：

-   `Logger::log( ) << 3 << "is three.";`{.cpp}，直接输出日志；
-   `Logger::log( 4 ) << "emphasized log."; // 1..5`{.cpp}，设定日志等级；
-   `Logger::log( BCD::LMS::CONNECT, QString("<QString> remarks") );`{.cpp}，某一个模块某一个函数输出的日志，传入 QString 类型；
-   `Logger::log( BCD::LMS::CONNECT, std::string("<c++ string> remarks") );`{.cpp}，传入 std::string 类型；
-   `Logger::log( BCD::LMS::CONNECT, "<c style string> remarks" );`{.cpp}，传入 char * 类型。

上面的 BCD 是我们项目的 namespace（BCD 的意思是 Bridge Crack Detection，桥梁裂缝检测）。
`BCD::LMS::CONNECT` 则指的是 LMS 采集模块的 `connect` 函数，我们在日志模块提前注册了各个模块的函数，所以
可以直接这么用。其实可以直接使用 C 语言提供的 `__FILE__` 和 `__FUNCTION__` 来进行日志，我们把这些东西都
提前定义好，是为了在使用的时候方便点（毕竟 VS 提供的代码补全可以让我们在写 `BCD::LMS::` 的时候就
弹出所有的候选项目）。

日志模块是一个类，使用了设计模式中的**单例模式**。为了显示方便，我们的日志模块输出的是 markdown 格式
的表格。上面提到的 [LMS 数据量](http://tangzx.qiniudn.com/post-0056-lms-chunk.html) 这篇文章里的表格，其实就是我直接从日志拷贝过去
（一行都没有修改）的显示效果。
下面把我的实现贴一下。

首先，**日志是分级的，我预设里 5 个等级，从 1 到 5 紧要程度以此降低**。
默认日志等级是 3（`BCD::ActionInfo::LEVEL3`），日志模块在界面上和控制台
显示的时候可以默认过滤掉一些等级不够的 log（虽然我这里并没有过滤）。

```cpp
#define LOG_FILTER_CONSOLE (  BCD::ActionInfo::LEVEL3  )
#define LOG_FILTER_GUIVIEW (  BCD::ActionInfo::LEVEL5  )
#define LOG_FILTER_ARCHIVE (  BCD::ActionInfo::LEVEL5  )
```

用 `#define` 定义常量太 naive 了，用 const int 定义常量太不帅，
所以我用了传说中的 enum hack：

```cpp
enum LOG_CONFIGS {
    WIDTH_INDEX            =  10,
    WIDTH_TYPE             =  10,
    WIDTH_LEVEL            =   5,
    WIDTH_REMARKS          =  40,
    LOG_LEVEL_MAX          =   9,
    LOG_LEVEL_MIN          =   0,
    LOG_LEVEL_STEP         =   5,
    LOG_LEVEL_DEFAULT      =   4,
    LOG_ENTRY_OFFSET       =   8, // at most 2^8 actions of each type
};
```

所有的函数都要注册，全部写死在代码里。（当时和组内成员沟通了好久==才把所有人的函数名敲定下来。==）

```cpp
namespace BCD {
// types
enum TypeID {
    TYPE_ARM,       // 对应 BCD::ARM::...
    TYPE_IMU,       // 对应 BCD::IUM::...
    TYPE_LMS,       // ...
    TYPE_MCU,
    TYPE_UR,
    ...
};
...

// actions
typedef int ActionID;
typedef struct {                  // 等级可以用来过滤
    enum Level {
        LEVEL1,                   // fatal error
        LEVEL2,                   // important
        LEVEL3,                   // average
        LEVEL4,                   // below average
        LEVEL5                    // least significant
    } level;
    QString info;
} ActionInfo;

// LMS
namespace LMS {
enum Action {
    LMS                           = TYPE_LMS<<LOG_ENTRY_OFFSET,
    CONSTRUCT,

    CONFIG_ADDRESS_PORT,
    CONFIG_ACTIONS,

    TURN_ON_READING,
    TURN_OFF_READING,

    ...
};
}  // namespace LMS
}  // namespace BCD
```

上面的 `LMS = TYPE_LMS<<LOG_ENTRY_OFFSET,`{.cpp} 的意思是每个模块里最多可以注册
LOG_ENTRY_OFFSET 个函数。有点难以解释，所以我不解释具体是啥意思啦:smile:，懂
enum 和位操作的人都懂我啥意思==。

下面到了重点。**每一条日志都是 Log 类的一个实例。**里面包含 log 的类型（type），id
号（action），备注信息（message），时间戳（timestamp）。

```cpp
class Log
{
private:
    static size_t               counter;

public:
    BCD::TypeID                 type;
    BCD::ActionID               action;
    QString                     message;
    qint64                      timestamp;

public:
    Log( ) {
        type            =       BCD::TYPE_META;
        action          =       (BCD::ActionID)0;
        message         =       QString();
        timestamp       =       0;
    }

    Log( BCD::TypeID tid, BCD::ActionID aid, QString msg="", qint64 ts=0 )
      : type( tid )
      , action( aid )
      , message( msg )
      , timestamp( 0 == ts ? QDateTime::currentMSecsSinceEpoch() : ts ) { ++counter; }

    const Log &show( ) const;
};
```

现在看起来这个 Log 很明显不应该维护一个 `static size_t counter`，但现在我们不讨
论其中的不足（这部分留到最后一篇总结）。

为了让 Log 可以使用 C++ 的“流操作”，我重载了两个操作符：

```cpp
QDataStream &operator<<( QDataStream &out, const Log &log )
{
    out << (int)log.type
        << (int)log.action
        << log.message
        << log.timestamp;
    return out;
}

QDataStream &operator>>( QDataStream  &in, Log &log )
{
    int type, action;
    in  >> type
        >> action
        >> log.message
        >> log.timestamp;
    log.type = (BCD::TypeID)type;
    log.action = (BCD::ActionID)action;
    return in;
}
```

Logger 用来生成和管理 Log 成员。在日志的过程中，必须上锁，所以用了
Qt 的 `QMutex`，日志全部存在一个静态的 `QList<Log>` 里。

```cpp
namespace BCD { typedef QString TypeInfo; }
class Logger
{
private:
    static QMutex           mutex;
    static QList<Log>       logs;
    const static QString    logPath;

private:
    typedef QHash<BCD::TypeID, BCD::TypeInfo> Type;
    typedef QHash<BCD::ActionID, BCD::ActionInfo> Action;

    // 这三个静态函数是一个设计上的失误
    static int initActionInfoWidth( );
    static Type initTypes( );
    static Action initActions( );

    static QList<Log> refresh( );
    static void saveLogs( QList<Log> &logs,
                          BCD::ActionInfo::Level level );

public:
    const static int widthActionInfo;
    const static Type types;
    const static Action actions;

public:
    Logger( ) { /* Empty Logger Constructor */ }
    ...
}; // class Logger
```

QMutex 使用的时候，可以用 QMutexLocker 来简便这个过程（这样也更不容易出错）。
一般的 mutex 类库都提供这样一个功能，比如 Boost 里也有 `boost::mutex::scoped_lock`，
和 Qt 这个 QMutexLocker 就是类似对等的。我们代码里的实例：

```cpp
// 还在 class Logger 里
static Log &log( Log &log )
{
    QMutexLocker locker( &mutex );
    logs.append( log.show() );
    return log;
}
```

为什么 Qt 这 `QMutexLocker` 或者说 `boost::mutex::scoped_lock` 能够自动锁住和释放 mutex 呢？
其实很简单，因为它是一个局部变量，在构造的时候拿了 mutex 的指针，来锁住它；在析构的时候
就会自动释放它。

因为很多代码都是重复的，我还用了很多宏：

```cpp
    // generic log (meta programming, saved a lot of typing...)
#define GENERIC_LOG_QSTRING(TYPE) \
    static Log log( BCD::##TYPE::Action action, QString message = "" ) \
    { \
        QMutexLocker locker( &mutex ); \
        Log log( BCD::TYPE_##TYPE, action, message ); \
        logs.append( log.show() ); \
        return log; \
    }

#define GENERIC_LOG_STRING(TYPE) \
       static Log log( BCD::##TYPE::Action action, std::string message ) \
       { return log( action, QString( message.c_str() ) ); }

#define GENERIC_LOG_CSTR(TYPE) \
       static Log log( BCD::##TYPE::Action action, char *message ) \
       { return log( action, QString( message ) ); }

       GENERIC_LOG_QSTRING(  LMS                    )
       GENERIC_LOG_QSTRING(  MCU                    )
       GENERIC_LOG_QSTRING(  UR                     )
       ...

       GENERIC_LOG_STRING(  LMS                    )
       GENERIC_LOG_STRING(  MCU                    )
       GENERIC_LOG_STRING(  UR                     )
       ...

       GENERIC_LOG_CSTR(  LMS                    )
       GENERIC_LOG_CSTR(  MCU                    )
       GENERIC_LOG_CSTR(  UR                     )
       ...

#undef GENERIC_LOG_QSTRING
#undef GENERIC_LOG_STRING
#undef GENERIC_LOG_CSTR
```

以上是头文件 logger.h，在 logger.cpp 里，我们首先要实例化那些 static 变量
（因为之前没有用过 static 成员，刚开始写这部分的时候，犯了很多错误。回头来看，那真
是太蠢了）。

```cpp
using namespace BCD;

const Logger::Type Logger::types = Logger::initTypes();
const Logger::Action Logger::actions = Logger::initActions();
const QString Logger::logPath = QString().sprintf( LOG_OUTPATH_FORMAT,
                                                   Util::ts( ) );
const int Logger::widthActionInfo = Logger::initActionInfoWidth( );
// 其中 initInfoWidth 只是获得字符串的最大宽度，便于对齐，实现如下：
//  int Logger::initActionInfoWidth( )
//  {
//      int width = 0;
//      foreach ( const ActionInfo &ai, actions.values() ) {
//          if ( ai.info.length() > width ) {
//              width = ai.info.length();
//          }
//      }
//      return width;
//  }

size_t Log::counter = 0;
QMutex Logger::mutex;
QList<Log> Logger::logs;
```

其实这里也有过度工程的嫌疑，因为 `initTypes()` 等函数只用了一次，完全没有必要放到 Logger 类
里面去（虽然设置了这些函数为 private 防止其他人调用），只要在 cpp 文件里用文件作用域的
static 函数就可以了。即把

```
// logger.cpp
Logger::Type Logger::initTypes( )
{
    Type types;

    types[  TYPE_ARM                   ] = QObject::tr(  "ARM"          );
    types[  TYPE_IMU                   ] = QObject::tr(  "IMU"          );
    types[  TYPE_LMS                   ] = QObject::tr(  "LMS"          );
    types[  TYPE_MCU                   ] = QObject::tr(  "MCU"          );
    types[  TYPE_UR                    ] = QObject::tr(  "UR"           );
    ...

    return types;
}
```

改成

```cpp
// logger.cpp
static Logger::Type initTypes( )
{
    Logger::Type types;

    types[  TYPE_ARM                   ] = QObject::tr(  "ARM"          );
    types[  TYPE_IMU                   ] = QObject::tr(  "IMU"          );
    types[  TYPE_LMS                   ] = QObject::tr(  "LMS"          );
    types[  TYPE_MCU                   ] = QObject::tr(  "MCU"          );
    types[  TYPE_UR                    ] = QObject::tr(  "UR"           );
    ...

    return types;
}
```

即可。

initActions 函数注册了所有 logger 可以直接使用的函数：

```cpp
// logger.cpp
Logger::Action Logger::initActions( )
{
    Action actions;
#define ACTION(aid, level, info) \
    actions[(int)aid]=actionInfo(ActionInfo::LEVEL##level,QObject::tr(info));

    /*
     * -- L M S --
     */
    ACTION( LMS::LMS,                               1, "LMS generic" );
    ACTION( LMS::CONSTRUCT,                         1, "construct" );
    ACTION( LMS::GEN_NEW_PATH,                      1, "gen new path" );

    ACTION( LMS::CONFIG_ADDRESS_PORT,               1, "configure ip, port" );
    ACTION( LMS::CONFIG_ACTIONS,                    1, "configure actions" );
    ACTION( LMS::CONFIG_AUTH_LEVELS,                1, "configure auth levels" );
    ACTION( LMS::CREATE_THREAD,                     1, "create thread" );
    ACTION( LMS::DETACH_THREAD,                     1, "detach thread" );

    ACTION( LMS::TURN_ON_READING,                   1, "turn on READING" );
    ACTION( LMS::TURN_OFF_READING,                  1, "turn off READING" );
    ACTION( LMS::POLLING_ONE,                       1, "just polling one" );

    ACTION( LMS::PARSE_PROFILE,                     1, "parse profiles" );
    ACTION( LMS::SAVE_PROFILES,                     1, "save profiles" );
    ACTION( LMS::CONFIG_BASEDIR,                    1, "configure output base dir" );

    ...

#undef ACTION

    return actions;
}
```

日志在保存的时候，可能存在时间戳的混乱（两台电脑的日志分别记录，他们的时间设定可能存在误差，
待程序结束的时候，工控机的日志除了本地保存，还会通过 TCP 回传给高性能。高性能会保存所有日志）：

```cpp
// 按照时间戳排序
bool compare( const Log &log1, const Log &log2 ) {
    return log1.timestamp < log2.timestamp;
}

void Logger::saveLogs( QList<Log> &logs, ActionInfo::Level level )
{
    if ( logs.isEmpty() ) { return; }

    // 不过我们实际使用中并没有排序，因为它不那么必要
    // qSort( logs.begin(), logs.end(), compare );

    // 会保存成 UTF-8 without BOM 格式
    FILE *fp = fopen( qPrintable(logPath), "a+" );
    // 这里本来有一些 Debug 信息，但是放到这里我把它们去掉了
    if ( NULL == fp ) { return; }

    int widthTimestamp = Util::ts2YYYYMMDD_HHMMSS_MS().length();
    static size_t i = 0;
    if ( 0 == i ) {
        // Markdown 格式的表格的表格头，因为我想让表格好看点，所以要对表格进行
        // 对齐，还花了不少功夫==
        // 原谅我处女座强迫症。
#define H(header, width) \
     arg("", (##width-QObject::tr(##header).length())/2, ' ') \
    .arg(QObject::tr(##header)) \
    .arg("", ##width-QObject::tr(##header).length()-(##width-QObject::tr(##header).length())/2, ' ')

    // 上面这一个蛋疼的宏，就是为了实现 C 语言字符串格式化中应该有而没有的居中对齐

        fputs( qPrintable( QString( "| %1%2%3 "          // index
                                    "| %4%5%6 "          // timestamp
                                    "| %7%8%9 "          // log level
                                    "| %10%11%12 "       // type
                                    "| %13%14%15 "       // action
                                    "| %16%17%18 |\n" )  // remarks
                                    .H( "INDEX",        WIDTH_INDEX )
                                    .H( "TIMESTAMP", widthTimestamp )
                                    .H( "LEVEL",        WIDTH_LEVEL )
                                    .H( "TYPE",          WIDTH_TYPE )
                                    .H( "ACTION",   widthActionInfo )
                                    .H( "REMARKS",    WIDTH_REMARKS ) ), fp );

#undef H
        // 格式就是这样：| idx | timestamp | level | type | action | remarks |
        fputs( QString( "| :%1: | :%2: | :%3: | :%4: | :%5: | :%6: |\n" )
                        .arg( "", WIDTH_INDEX-2,     '-' )
                        .arg( "", widthTimestamp-2,  '-' )
                        .arg( "", WIDTH_LEVEL-2,     '-' )
                        .arg( "", WIDTH_TYPE-2,      '-' )
                        .arg( "", widthActionInfo-2, '-' )
                        .arg( "", WIDTH_REMARKS-2,   '-' )
                        .toStdString().c_str(), fp );
    }  // header

    int i0 = i;
    foreach ( const Log &log, logs ) {
        // current level
        ActionInfo::Level cl = actions.value(log.action).level;
        if ( true || cl <= level ) {
            int len = strlen( qPrintable( types.value(log.type) ) );
            fprintf( fp,
                     "| %*i "              // index
                     "| %*s "              // timestamp
                     "| %*s%d%*s "         // log level
                     "| %*s%s%*s "         // type (aligned to center)
                     "| %-*s "             // action
                     "| %*s |\n",          // message
   /* index     */   WIDTH_INDEX, ++i,
   /* timestamp */   widthTimestamp, qPrintable(Util::ts2YYYYMMDD_HHMMSS_MS(log.timestamp)),
   /* log level */   (WIDTH_LEVEL-1)/2, "", (int)actions.value(log.action).level+1, WIDTH_LEVEL-(WIDTH_LEVEL-1)/2-1, "",
   /* type      */   (WIDTH_TYPE-len)/2, "", qPrintable(types.value(log.type)), WIDTH_TYPE-len-(WIDTH_TYPE-len)/2, "",
   /* action    */   widthActionInfo, qPrintable(actions.value(log.action).info),
   /* message   */   WIDTH_REMARKS, log.message.isEmpty() ? "" : qPrintable(log.message) );
        }
    }  // foreach

    fclose( fp );
    log() << "Saving logs... done. ("
          << (i-i0) << "out of "
          << logs.size() << "logs )";
}

QList<Log> Logger::refresh( )
{
    QList<Log> copy;

    QMutexLocker locker( &mutex );
    foreach ( const Log &log, logs ) {
        copy.append( log );
    }
    logs.clear();

    return copy;
}

// 还要按照等级保存，可能一些临时的级别特别低的调试信息就不保存了。
void Logger::save( ActionInfo::Level level )
{
    QList<Log> &logs = refresh();

    if ( !Bundle::activated() ) {
        saveLogs( logs, level );
    } else {
        // 工控机要把日志回传给高性能计算机
        qDebug() << "Sending" << logs.length() << "logs to MASTER...";
        QByteArray tx;
        QDataStream out( &tx, QIODevice::WriteOnly );
        out.setVersion( QDataStream::Qt_4_8 );
        out << (int)Moderator::META__SAVE_LOG__VOID;
        out << logs.length();
        foreach ( const Log &log, logs ) {
            out << log;
        }
        Bundle::send( tx );
        qDebug() << "Sending" << logs.length() << "logs to MASTER... done.";
    }
}

void Logger::lazySave()
{
    QList<Log> logs = refresh();
    saveLogs( logs, LOG_FILTER_ARCHIVE );
}
```

## Utils 模块

因为有很多网络数据需要处理，所以建了一个 utils 模块，放置一些通用的字节处理函数。

首先，引入 Qt 的头文件和日志模块：

```cpp
#ifndef BYTESUTILS
#define BYTESUTILS
#include <QtCore>
#include "logger.h"
```

第一个 util，是从字符串读取字节作为原始数据。
一般的 COM 串口助手都有类似的功能，我们发现没有这个函数很多时候调试起来很麻烦，
所以需要这么一个函数。

```cpp
//! e.g. "0x34 0x48" ==> 0x34 0x48
QByteArray parseHexString( const QString &hexstr )
{
    QStringList sl = hexstr.split(" ");
    QByteArray ba;
    foreach ( const QString &str, sl ) {
        int i = 0;
        sscanf_s( qPrintable( str ), "0x%x", &i );
        ba.append((quint8)i);
    }

    return ba;
}
```

这里的 `qPrintable` 宏真是详见恨晚！因为去长沙参与这个项目前对 Qt 并不熟悉，
刚开始我们使用的是 `qstr.toStdString().c_str()`，使用起来真是麻烦。
后来才发现 Qt 提供了这么一个宏。

有时候，还要把原始数据打印成可以看到的字符，就写了 ba2hexstr 函数：

```cpp
//! QByteArray to Hex String, e.g. 0x34 0x45 ==> "0x 34 0x45"
QString ba2hexstr( const QByteArray &ba,
                   QString prefix /* = "0x" */,
                   QString postfix /* = "" */ )
{
    QString str;
    for ( int i = 0; i < ba.length(); ++i ) {
        str.append( QString().sprintf( "%s%02x%s",
                                       qPrintable( prefix ),
                                       (uchar)ba.at(i),
                                       qPrintable( postfix ) ) );
    }
    return str;
}
```

上面的 [LMS 数据量](http://tangzx.qiniudn.com/post-0056-lms-chunk.html) 这篇文章里打印的
LMS 数据的每个字节就是这么显示出来的。

有时候，我们要像串口发送一个数据，然后，等待大概 2 秒钟，等现有的操作完成后，再发送下一个任务。
举例说，如下图，LMS 下方有一个步进电机（红色框出来了），LMS 工作的时候，就需要连续做三个动作，
然而步进电机不能反馈说“这个动作操作完成了”，我们好进行回调操作。所以，我们只能估计一个时间间隔，
插入到这三个操作调用之间。

![先逆时针转 15 度，再顺时针转 120 度，再逆时针转 15 度，中间都需要等待上一个操
    作完成，才能进行下一步。](http://whudoc.qiniudn.com/2016/2016-07-26_10-21-40.png)

这就是 `delay_ms` 函数，它能将线程暂停一定的毫秒数，而不影响主界面的消息循环。

```cpp
//! delay msecs
void delay_ms( const quint16 &t )
{
    QTime dieTime = QTime::currentTime().addMSecs(t);
    while( QTime::currentTime() < dieTime ) {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
```

下面两个比较简单，就是角度和弧度的转化：

```cpp
double rad2deg( const double &r ) { return r / M_PI * 180.0; }
double deg2rad( const double &d ) { return d * M_PI / 180.0; }
```

下面是几个时间戳函数。时间戳我们使用的是 Qt 的 `QDateTime::currentMSecsSinceEpoch()`，
因为它能明确表示一个时间点，而且精度是毫秒，它实际上是一个 int64_t 整形。

```cpp
QString Util::ts2HHMMSS_MS( qint64 ts/* =0 */ )
{
    QDateTime dt = ts2dt( ts );
    return QString().sprintf( "%02d:%02d:%02d.%03d"  // e.g. 01:23:45.678
                            , dt.time().hour()
                            , dt.time().minute()
                            , dt.time().second()
                            , dt.time().msec() );
}

QString Util::ts2YYYYMMDD_HHMMSS_MS( qint64 ts/*=0*/
    , const char *format/*="%4d/%02d/%02d %02d:%02d:%02d.%03d"*/ )
{
    QDateTime dt = ts2dt( ts );
    return QString().sprintf( format
                            , dt.date().year()
                            , dt.date().month()
                            , dt.date().day()
                            , dt.time().hour()
                            , dt.time().minute()
                            , dt.time().second()
                            , dt.time().msec() );
}

qint64 timestamp( )
{
    return QDateTime::currentMSecsSinceEpoch();
}

QString timestampstr( )
{
    qint64 dt = QDateTime::currentMSecsSinceEpoch();
    return timestampstr( dt );
}

QString timestampstr( const qint64 &dt )
{
    QString str;
    str.sprintf( "%lld", dt );
    return str;
}
```

之前我还对比过 `clock_t`、`time_t`，发现还是 Qt 的 `currentMSecsSinceEpoch` 好：
^[见 [clock_t 不是时间 - dvorak4tzx](http://dvorak4tzx.lofter.com/post/1d4021c8_7911622)。]

-   `clock_t` 根本不是时间戳，时间的 span 太短，只能用来对比时间先后，而不是真正的“纪录”时间；
-   `time_t` 和 Linux 上常用的 `date +%s` 应该等价，不过时间精度是秒，不够精确；
-   `QDateTime` 和 `time_t` 类似，但是精度达到了毫秒，所以它最好。

在 COM 编程（串口编程）中，经常需要处理一个
word 的数据（两个字节），所以写了几个字节操作，
用来获取高位、低位，把两个字节合并为一个 word：

```cpp
//! get higher byte
quint8 high( const quint16 &letter )
{
    return (quint8)(letter>>8 & 0xFF);
}

//! get lower byte
quint8 low( const quint16 &letter )
{
    return (quint8)(letter & 0xFF);
}

//! patch two bytes
quint16 highlow( const quint8 &high, const quint8 &low )
{
    quint16 hl = 0;
    hl |= (quint16)high << 8;
    hl |= low;
    return hl;
}
```

高位和低位我也是在长沙才 GET 到的概念。那时候我还在看 CSAPP，刚看到 two's complement。
串口数据经常会凌乱，所以通常都要校验，串口助手里，通常也有一个选项，需要你设置到底校验是
CRC16 校验是【高位在前】，还是【低位在前】。自己发送出去的数据，也要加上校验的两个字节
才可以。 否则对方也会认为数据“已损坏”。这个代码由长沙大学的刘博士提供的 MFC 程序修改
而来：

```cpp
//! generate CRC16 checksum
quint16 genCRC16( const QByteArray &ba, int length /* = -1 */ )
{
    quint16 crc = 0xFFFF;

    int len;
    if ( length > ba.length() || ba.length() == 0 ) {
        return 0;
    } else if ( -1 == length ) {
        len = ba.length();
    } else {
        len = length;
    }

    for ( int cnt = 0; cnt < len; ++cnt ) {
        int i;
        crc ^= (quint8)ba.at(cnt);

        for ( i = 0; i < 8; ++i ) {
            if ( crc & 0x01 ) {
                crc >>= 1;
                crc ^= 0xA001;       // magical...
            } else {
                crc >>= 1;
            }
        }
    }

    return crc;
}
```

首先获取收到的数据（我们把所有的原始数据都存在 QByteArray 里，而不是 `char *`
什么的里）的最后两个字节，然后把它整合成一个 quint16（word）：

```cpp
//! get last 2 bytes then patch to uint16
quint16 getCRC16( const QByteArray &ba )
{
    if ( ba.length() < 2 ) {
        return 0;
    }

    quint8  low  = ba.at( ba.length() - 2 ); // LSB first
    quint8  high = ba.at( ba.length() - 1 );
    quint16 hl = highlow( high, low );
    return hl;
}
```

给自己要发送的数据加上校验字节，我们的约定是【低位在前】：

```cpp
//! patch CRC16 tail
void patchCRC16Tail( QByteArray &data )
{
    quint16 crc = genCRC16( data );
    data.append( low(crc) );  // low first
    data.append( high(crc) );
}
```

```cpp
//! check if crc16 passed
bool crc16Passed( const QByteArray &ba )
{
    if ( getCRC16( ba ) == genCRC16(ba, ba.length()-2) ) {
        return true;
    } else {
        return false;
    }
}
```

然后就是把得到的原始数据转化为相应的 double，int 等类型，这部分在编码器模块、UR 模块里应用很多。

```cpp
quint16 parse2BytesToUInt16( const QByteArray &ba, quint16 cursor, bool doit /* = true */ )
{
    if ( cursor + 1 >= ba.length() ) {
        Logger::log( BCD::META::META, "Error parse 2 bytes to Uint16" );
        return 0;
    }

    if ( !doit ) {
        return 0;
    }

    quint16 num = 0;
    num  = (quint16)(ba.at(cursor + 0)) << 8; // MSB first
    num |= (quint8)ba.at(cursor + 1);
    return num;
}

quint32 parse4BytesToUInt32( const QByteArray &ba, quint16 cursor )
{
    if ( cursor + 3 >= ba.length() ) {
         Logger::log( BCD::META::META, "Error parse 4 bytes to Uint32" );
         return 0;
    }

    quint32 num = 0;
    quint16 low  = parse2BytesToUInt16( ba, cursor + 0 );  // LSB first
    quint16 high = parse2BytesToUInt16( ba, cursor + 2 );
    num |= (quint32)low;
    num |= ((quint32)high << 16);

    //QByteArray tmp = ba.mid( 0, 4 );
    //qDebug() << ba2hexstr( tmp ) << " : " << num;
    return num;
}

quint64 parse8BytesToUInt64( const QByteArray &ba, quint16 cursor )
{
    if ( cursor + 7 >= ba.length() ) {
        Logger::log( BCD::META::META, "Error parse 8 bytes to uint64" );
        return 0;
    }

    quint64 i = 0;
    i |= ba.at( cursor + 0 ) << 56;
    i |= ba.at( cursor + 1 ) << 48;
    i |= ba.at( cursor + 2 ) << 40;
    i |= ba.at( cursor + 3 ) << 32;
    i |= ba.at( cursor + 4 ) << 24;
    i |= ba.at( cursor + 5 ) << 16;
    i |= ba.at( cursor + 6 ) <<  8;
    i |= ba.at( cursor + 7 ) <<  0;
    return i;
}

int parse4Bytes2Int4UR( const QByteArray &ba, quint16 beg )
{
    if ( beg + 3 >= ba.length() ) {
        Logger::log( BCD::META::META, "Error parse 8 bytes to int 4ur" );
        return 0.0;
    }

    int i = 0;
    char *ii = (char *)&i;
    *ii |= ba.at(beg + 3); ++ii;
    *ii |= ba.at(beg + 2); ++ii;
    *ii |= ba.at(beg + 1); ++ii;
    *ii |= ba.at(beg + 0);
    return i;
}

// 为了让 UR 模块的代码好看点，添加了一个参数，当它为 true 的时候，可以“偷懒”不 parse。
double parse8Bytes2Double4UR( const QByteArray &ba, quint16 beg, bool parse )
{
    if ( beg + 7 >= ba.length() ) {
        Logger::log( BCD::META::META, "Error parse 8 bytes to double 4 ur" );
        return 0.0;
    }

    if ( !parse ) { return 0.0; }

    // 可以看到内存里字节序和网络收到的字节序是一样的，
    // 鉴于大部分操作系统包括 Windows 都是 small endian，
    // 那我们的网络字节序应该也是 small endian
    // （但我不保证啊……我早忘记了==）
    double d = 0.0;
    char *dd = (char *)&d;
    *dd |= ba.at(beg + 0); ++dd;
    *dd |= ba.at(beg + 1); ++dd;
    *dd |= ba.at(beg + 2); ++dd;
    *dd |= ba.at(beg + 3); ++dd;
    *dd |= ba.at(beg + 4); ++dd;
    *dd |= ba.at(beg + 5); ++dd;
    *dd |= ba.at(beg + 6); ++dd;
    *dd |= ba.at(beg + 7);
    return d;
}

double parse8BytesToDouble( const QByteArray &ba, quint16 beg, bool parse /*=true*/ )
{
    if ( beg + 7 >= ba.length() ) {
        Logger::log( BCD::META::META, "Error parse 8 bytes to double" );
        return 0.0;
    }

    if ( !parse ) {
        return 0.0;
    }

    double d = 0.0;
    char *dd = (char *)&d;
    *dd |= ba.at(beg + 7); ++dd;
    *dd |= ba.at(beg + 6); ++dd;
    *dd |= ba.at(beg + 5); ++dd;
    *dd |= ba.at(beg + 4); ++dd;
    *dd |= ba.at(beg + 3); ++dd;
    *dd |= ba.at(beg + 2); ++dd;
    *dd |= ba.at(beg + 1); ++dd;
    *dd |= ba.at(beg + 0);
    return d;
}

// 现在看，我也不知道为什么 unsigned 转化成 signed 要自己判断，
// 但肯定是普通的 cast 出了问题，我才这么“玩”的。多亏了当时自己
// 看了 CSAPP。
qint16 us2s( const quint16 &us )
{
    qint16 s = 0;

    if ( us > 0x7FFF ) {          // neg，让我现在写我就改成 us>>15 & 0x1
        s = us & 0x7FFF - 0x8000;
    } else {                      // pos
        s = us;
    }

    return s;
}
```

下面这个纯粹是用来调试字节了：

```cpp
//! pretty print bytes
QString bytes2bits( char *c, quint8 n )
{
    char *w = c;
    QString str;

    for ( int i = 0; i < 8 * n; ++i ) {
       int j = i / 8;
       int k = i % 8;

       if ( (*(w+n-1-j)>>(7-k)) & 0x01 == 1 ) {
           str.append("1");
       } else {
           str.append("0");
       }

       if ( k == 7 && j != n-1 ) {
           str.append(", ");
       }
    }
    return str;
}

// 可以看到这是 big endian，这应该是串口通信用到的
QByteArray word2ByteArray( const qint16 &data )
{
    QByteArray ba;
    ba.append( high(data) );
    ba.append( low(data) );
    return ba;
}

QByteArray patchAddrLength( const quint16 &addr, const quint16 &length )
{
    QByteArray ba;
    // addr
    ba.append( high(addr) );
    ba.append( low(addr) );
    // length
    ba.append( high(length) );
    ba.append( low(length) );

    return ba;
}

QByteArray bytes2Bits( const QByteArray &bytes, const quint16 &bitNum )
{
    QByteArray bits;

    if ( bitNum > 8 * bytes.length() ) {
        qDebug() << "bytes2bits wrong.";
        return bits;
    }

    for ( int i = 0; i < bitNum; ++i ) {
        bits.append( (quint8)( 0x1 & bytes.at((quint16)i/8) >> i%8 ) );
    }

    return bits;
}

QString parseBits2String( const QByteArray &bits )
{
    QString str;
    foreach ( const quint8 &c, bits ) {
        str.append( c == 0 ? "0 " : "1 " );
    }
    return str;
}
```

# 4.  传感器模块选讲（LMS 和 IMU 和 UR）

>   简介如何写一个传感器代码，为算法模块提供接口；

## LMS

![](http://whudoc.qiniudn.com/2016/lms_illus.png){align=right .w13}

在阅读了 [LMS 说明文档](http://gnat-tang-archive.qiniudn.com/lms.pdf) ，明白
LMS 数据采集和存储基本原理后，LMS 是我完成的第一个传感器模块。

代码实现上，主要文件有

-   lmsreader.h
-   lmsreader.cpp
-   lmsreaderconfig.h
-   lmsreaderconfig.cpp
-   lmsreaderconfig.ui

其中 `lmsreader{.h, .cpp}` 是实现 LMS 功能的类，
`lmsreaderconfig{.h, .cpp, .ui}` 是对 LMS 进行设置的界面。
基于【界面（相当于一个代理）和类（实际干活的人）应当低耦合】的原则，
lmsreaderconfig 界面只做简单的 validation, confinement，将按钮对应相应的函数，
内部都是在调用 lmsreader 的函数。
（关于低耦合，详细见我们之前的文档：
[changsha/modulize.md at master · district10/changsha](https://github.com/district10/changsha/blob/master/doc/modulize.md)）

LMS 提供的基础功能有

-   `QString getAddress()`, 获得 LMS 的 IP 地址
-   `quint16 getPort()`, 端口
-   `void turnOnReading()`, 开始读取
-   `void turnOffReading()`, 停止读取并保存
-   `void getAngleStartEnd()`, 请求 LMS 设置: 扫描起始角
-   `void getFrequencyAngleresolution()`, 请求 LMS 设置: 扫描频率, 角度分辨率

扩展功能（其实这些代码只要运行过一次就好，因为 LMS 的设定都要固定，不需要随时调整）

-   `void authorize()`, authorize 后才能设置扫描角度分辨率, 恢复出厂设置, etc
-   `void setFactoryDefault()`, 恢复出厂设置
-   `void saveSettings()`, 保存设置

Signals (public)

-   `void angle_start_end(int beg, int end)`, 扫描角度范围
-   `void frequency_angleresolution(int freq, double res)`, 频率,角度分辨率
-   `void authorization_passed(bool auth)`
-   `void scanning(int i, int freq)`, for showing 1/50~50/50 or 1/25~25/25

下面直接看代码。

首先我们定义了一些标志位，方便 LMS 在不同条件下工作。

```cpp
#ifndef LMSREADER_H
#define LMSREADER_H

#define LMS_USE_THREAD              (  true   )
#define LMS_PARSE_ON_THE_FLY        (  true   )  // on the fly: slightly slower
#define LMS_PRINT_SCAN_BUF          (  false  )  // flags for debugging
...
#define LMS_PROFILE_SIZE            (  50*60*5 )
#define LMS_DEFAULT_ADDRESS         ( "192.168.0.1" )
#define LMS_DEFAULT_PORT            ( 2111 )
#define LMS_PROFILE_POINTS_NUM      ( 541 )
...

#define M_PI (3.14159265358979323846)

#include "datastruct.h"
#include "utils.h"
#include "logger.h"
#include <QStringList>
#include <QTcpSocket>   // 提供 TCP 网络功能
#include <QHash>
#include <string>

#ifndef Q_MOC_RUN
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/condition.hpp>
#include <boost/chrono/chrono.hpp>
#endif
```

其中最重要的是 `#define LMS_PARSE_ON_THE_FLY`，它决定了 LMS 采集到的数据要不要在线转化为坐标点。
这里用的是宏而不是 enum hack，主要考虑的是这些变量还要被算法模块用到，enum hack 有作用域，在外部
使用起来没有宏方便。那个 `M_PI` 是从 math.h 拷贝来的（那几个
`USE_MATH_DEFINITIONS` 之类的几个破宏真是太麻烦了，所以我索性给它拷贝过来了）。

还用到了 boost 库的多线程，所以加上了它的头文件。`boost/chrono/chrono.hpp` 原本是要做时间戳，
但后来我们用了 Qt 的 QDateTime，所以其实已经被废置了。

至于那个 `#ifndef Q_MOC_RUN`，我们是碰到了问题才加上的。说是
“我们不希望 Qt 的 `moc`{.bash} 对 Boost 的头文件进行 moc，所以只在 moc 前 include。”，
但我其实不懂，为什么 moc 要处理 boost 的代码？……

LMSReader 通过 TCP 和 LMS 连接，进行通信，它首先集成至 QTcpSocket 类。这个类主要提供：

-   `readyReady` 信号，当数据来了的时候，这个信号被 emit；
-   `read` 函数，可以读取网络数据，类似的还有 `readAll` 函数，等等，它们返回的都是 `QByteArray` 类型的数据；
-   `write` 函数，可以写出数据。

下面是主要代码：

```cpp
class LMSReader : public QTcpSocket
{
    Q_OBJECT

private:
    enum LMSAction { GET_FREQ_ANGRES, SET_FREQ_ANGRES, GET_ANGBEG_ANGEND, SET_ANGBEG_ANGEND, ...  };
    typedef QHash<LMSAction, QString> ActionType;
    const static ActionType actions;
    // 这是过度工程的遗迹
    static ActionType configureActions( );

    enum LMSAuth {
        AUTH_MAINTENANCE          = 0x02,
        AUTH_AUTHEDCLIENT         = 0x03,
        AUTH_SERVICELEVEL         = 0x04,
    };
    typedef QHash<LMSAuth, QString> AuthType;
    const static AuthType auths;
    // 这也是过度工程的遗迹
    static AuthType configureAuthLevels( );

    // 写过几次代码，你就记住了 static 对象，【只】有 int 型可以在声明的时候就初始化。
    // （也不用再在类外再定义）
    const static int lmsAngleMin  = -45;
    const static int lmsAngleMax  = 225;

    enum LMSUserLevel {
        MAINTENANCE               = 0x02,
        AUTHORIZED_CLIENT         = 0x03,
        SERVICE                   = 0x04,
    };

    enum {
        // STX, ETX 这两个 ASCII 字符了解一下是不错的，前者是
        // STX: start of text，后者是
        // ETX: end   of text
        STX                       = 0x02,
        ETX                       = 0x03,
        AUTHORIZATION_SUCCESS     = 1,
        AUTHORIZATION_FAULURE     = 0,
        ANGLE_SCALE_FACTOR        = 10000,          /* 1/10000 Hz   */
        FREQUENCY_SCALE_FACTOR    = 100,            /* 1/100 Degree */
    };

    QString address;            // LMS 的 ip 地址
    quint16 port;               // LMS 的端口，默认 2111，LMS 相当于一个服务器，
                                // 它会给每一个连接发送数据（要先请求 LMS 发送数据）
    QByteArray lmsBA;
#ifdef LMS_PRINT_PROFILE_SAMPLE
    QByteArray zgBA;
#endif

    int lmsFrequency;           // 一些变量
    double lmsAngleRes;
    double lmsAngleBeg;
    double lmsAngleEnd;
    size_t lmsCount;

public:
    bool isRun;
    bool connected;
    int profileCur;
    boost::mutex mutex;
    vector<QStringList> profiles_raw;
    profile_t profilesX[ LMS_PROFILE_SIZE ];
    ...
```

这里值得一提的是 profilesX，它原来也是用的 vector，但是老出问题，后来发现原来是 `push_back` 太多后，
vector 的首地址就换了位置（原来的地方放不下，于是它重新分配了一个连续空间），于是我们写死了大小，
换成了数组。

不过现在知道，vector 也可以预留大小==，定义的时候直接用 `vector<T> v(t, a_big_number)` 就可以了啊。

另外值得一提的是那个 `bool isRun`，原来我们使用的是函数内的静态成员，但实际用了才发现我们的两个 LMS 凌乱了，
因为两个成员 lms1 和 lms2 居然使用了一个 `isRun`，但它们应当是独立的。这也是实践过程中碰到的一个大坑。

接着上面的代码。

```cpp
// class LMSReader() {
    ...

public:
    explicit LMSReader( );
    ~ LMSReader( );

    // 天知道我花了多少时间写这些无聊的 getter、setter 函数
    //! configure LMS address & port
    void setAddressPort( const QString &address, const quint16 &port );
    void resetAddressPort( );
    QString getAddress( ) { return address; }
    quint16 getPort( ) { return port; }

    //! set basedir of output
    // 毫无必要的重载，当时应该在项目组里推 QString，但是大家似乎都喜欢 std::string，
    // 我倒是觉得 QString 好用得多太多。
    void setBasedir( const string &bd )  { basedir = QString( bd.c_str() ); }
    void setBasedir( const char *bd )    { basedir = QString( bd ); }
    void setBasedir( const QString &bd ) { basedir = bd; }

    void postparse( );
    void start( qint64 ts = 0 );
    void stop( );
    void closeConnection( );

    void pollingOne( );
    void turnOnReadingInLazyMode( );
    void turnOnReading( );
    void turnOffReading( );
    // 这里删掉了很多函数声明，因为它们没必要在这里提到

private:
    QString basedir;
    void writeLMS( const QString &msg );
    void parse( const QStringList &bufstrlist );
    void postparse( QStringList &bufstrlist, profile_t &profile );
    ...
```

下面是一些 signal/slots（信号和槽），主要用于告诉主界面，LMS 配置好了，可以进行函数回调。

```cpp
// class LMSReader() {
    ...

signals:
    void angle_begin_end( int beg, int end );
    void frequency_angleresolution( int freq, double res );
    void authorization_passed( bool auth );
    void scanning( int i, int freq );
    void lmsConnected( bool on );

public slots:
    void connectToLMS( );
    void connectToLMS( QString addr, quint16 port );
    void readLMS( );
    void lmsConnectionError( QAbstractSocket::SocketError );
    void onStateChanged( QAbstractSocket::SocketState state );
};
```

从 LMS 的说明文档里，我知道每个对 LMS 的操作，其实都是向 LMS 发送一个特定的字符串。
于是我过度工程地（为什么又是过度工程==）把这些字符串起了名字，还用了 QHash：

```
enum LMSAction {
    GET_FREQ_ANGRES,
    SET_FREQ_ANGRES,
    GET_ANGBEG_ANGEND,
    SET_ANGBEG_ANGEND,
    ...
};
typedef QHash<LMSAction, QString> ActionType;
const static ActionType actions;
static ActionType configureActions( );
```

现在想想真是毫不必要。

lmsreader.cpp 里的实现：

```cpp
const LMSReader::ActionType LMSReader::actions = LMSReader::configureActions( );
// 实现是：
//  LMSReader::ActionType LMSReader::configureActions( )
//  {
//      LMSReader::ActionType actions;
//      actions[  GET_FREQ_ANGRES    ] = "sRN LMPscancfg";
//      actions[  SET_FREQ_ANGRES    ] = "sMN mLMPsetscancfg";
//      actions[  GET_ANGBEG_ANGEND  ] = "sRN LMPoutputRange";
//      ...
//      return actions;
//  }

const LMSReader::AuthType LMSReader::auths = LMSReader::configureAuthLevels( );
// 实现是：
//  LMSReader::AuthType LMSReader::configureAuthLevels( )
//  {
//      LMSReader::AuthType authLevels;

//      authLevels[  AUTH_MAINTENANCE   ] = "B21ACE26";
//      authLevels[  AUTH_AUTHEDCLIENT  ] = "F4724744";
//      authLevels[  AUTH_SERVICELEVEL  ] = "81BE23AA";

//      // Logger::log( BCD::LMS::CONFIG_AUTH_LEVELS );
//      return authLevels;
//  }
```

毫无疑问，这两个 hash 毫无必要。当时我还插了，说是 QHash 和 QMap 的接口几乎一样，但是 QHash 效率高一点，
所以这里用的是 QHash。但，我们的实际，用哪个其实都一样，最好不要用==。

在 LMS 的构造函数里，要链接一些槽函数：

```cpp
connect( this, SIGNAL(readyRead() ),
         this, SLOT(readLMS()) );
connect( this, SIGNAL(disconnected()),
         this, SLOT(connectToLMS()) );
connect( this, SIGNAL(error(QAbstractSocket::SocketError)),
         this, SLOT(lmsConnectionError(QAbstractSocket::SocketError)) );
connect( this, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
         this, SLOT(onStateChanged(QAbstractSocket::SocketState)) ); // 这个函数会提示界面 LMS 是否“掉线”

// 这是日志纪录，后面的 Logger::log 之类代码我就去掉了。
Logger::log( BCD::LMS::CONSTRUCT );
```

这个 lmsConnectionError 是一个无聊的函数，要是有 C++11，谁还专门写一个这函数啊！
用 lambda 函数不就好了。我们可以把

```cpp
connect( this, SIGNAL(error(QAbstractSocket::SocketError)),
         this, SLOT(lmsConnectionError(QAbstractSocket::SocketError)) ); // 连接到这个槽
...
// 实现它
void LMSReader::lmsConnectionError( QAbstractSocket::SocketError err )
{
    Logger::log (  BCD::LMS::CONNECTION_ERROR, QString( err ) );
}
```

改成

```cpp
connect( this, SIGNAL(error(QAbstractSocket::SocketError)),
         this, [=](QAbstractSocket::SocketError err) {  // 直接在这里实现
            Logger::log (  BCD::LMS::CONNECTION_ERROR, QString( err ) );
        } );
```

好看多了，是吧~

析构的时候，先关闭网络连接。

```cpp
LMSReader::~LMSReader( )
{
    closeConnection();
    Logger::log( BCD::LMS::DESTRUCT );
}

// 这是实现代码
void LMSReader::closeConnection( )
{
    if ( isOpen() ) {
        close();
        Logger::log (  BCD::LMS::DISCONNECT );
    }
}
```

按照约定 LMS 发送的数据应该满足格式：`STX + 数据字节 + ETX`，
STX 和 ETX 标志了数据的一帧。一帧数据就是一次扫描，大概有 550 个扫描点（具体在
【LMS 的数据量】里可以看到），代码如下：

```cpp
void LMSReader::writeLMS( const QString &data )
{
    QByteArray ba;
    ba.append( 0x02 ); // <STX>, start of text，就说了之前的那个 enum hack 里的
                       // STX，ETX 是过度工程，因为只有我自己用这两个变量，我又没有用！
    ba.append( data );
    ba.append( 0x03 ); // <ETX>, end of text
    write( ba );
}
```

其中的 `write` 函数是 QTcpSocket 提供的。其实 `ba.append( data )` 可以更方便地
写成 `ba << data`，但是我写习惯了，所以几乎没有用过 `operator<<`==。

还有如下的一些函数，存在有意义，但是几乎在我写完后，只设置了一遍，就不需要再使用了==。

```cpp
// 因为我们只要 authorize 一次，就能设定 LMS 的起始扫描角度、扫描的角度分辨率、频率
// 然后它就固定下来了
void LMSReader::authorize( )
{
    QString str;
    str.sprintf( "%s %2d %s",
                 qPrintable(actions.value( AUTHORIZE )),
                 AUTH_AUTHEDCLIENT,
                 qPrintable(auths.value( AUTH_AUTHEDCLIENT )) );
    writeLMS( str );

    Logger::log( BCD::LMS::AUTHORIZE );
}

// 也没有必要再次获取起始扫描角度，角度分辨率等了
void LMSReader::getAngleStartEnd( )
{
    writeLMS( actions[ GET_ANGBEG_ANGEND ] );

    Logger::log( BCD::LMS::ASK_SCANNING_ANGLE_START_END );
}

void LMSReader::getFrequencyAngleresolution( ) { ... }
void LMSReader::setFrequencyAngleresolution( const int &freq,
                                             const double &angres )
{
    QString str;
    str.sprintf( "%s %X %d %X %X %X",
                 qPrintable( actions[ SET_FREQ_ANGRES ] ),
                 FREQUENCY_SCALE_FACTOR * (freq),         // 25 or 50 Hz
                 1,                                       // reserved
                 (int) (ANGLE_SCALE_FACTOR * (angres)),   // 0.25 or 0.5 degree
                 (int) (ANGLE_SCALE_FACTOR * (-45 + 0)),  // place holder
                 (int) (ANGLE_SCALE_FACTOR * (225 - 0))   // place holder
               );
    writeLMS( str );

    Logger::log ( BCD::LMS::SET_SCANNING_FREQ_ANGRES,
                  QString( "freq: %1, angres: %2" ).arg( freq ).arg( angres ) );
}

void LMSReader::setAngleStartEnd( double start, double end )
{
    if ( start  > end )         { return; }
    if ( start  < lmsAngleMin ) { start = lmsAngleMin; }
    if ( end    > lmsAngleMax ) { end = lmsAngleMax; }

    QString str;
    str.sprintf( "%s %d %X %X %X",
                 qPrintable( actions[ SET_ANGBEG_ANGEND ] ),
                 1,                                  // status code
                 FREQUENCY_SCALE_FACTOR * (25),      // place holder
                 (int) (ANGLE_SCALE_FACTOR * start),
                 (int) (ANGLE_SCALE_FACTOR * end) );
    writeLMS( str );

    Logger::log ( BCD::LMS::SET_SCANNING_ANGLE_START_END,
                  QString( "start: %1, end: %2" ).arg( start ).arg( end ) );
}


void LMSReader::setTimestamp( quint16 year        /* = 2015 */
                            , quint8 month        /* =    1 */
                            , quint8 day          /* =    1 */
                            , quint8 hour         /* =    0 */
                            , quint8 minute       /* =    0 */
                            , quint8 second       /* =    0 */
                            , quint8 microsecond  /* =    0 */ )
{
    QString str;
    //               Y  M  D  H  M  S MS
    str.sprintf( "%s %X %X %X %X %X %X %X",
                 qPrintable( actions[SET_TIMESTAMP] ),
                 year, month, day,
                 hour, minute, second,
                 microsecond );
    writeLMS( str );

    Logger::log( BCD::LMS::SET_TIMESTAMP,
                 QString( "%1/%2/%3-%4:%5:%6.%7" )
                 .arg( year )
                 .arg( month )
                 .arg( day )
                 .arg( hour )
                 .arg( minute )
                 .arg( second )
                 .arg( microsecond ) );
}

// 还有一些类似的代码，就不一一贴在这里了
void LMSReader::setFactoryDefault( ) { ... }
void LMSReader::setFactoryDefault( ) { ... }
void LMSReader::getTimestamp( ) { ... }
void LMSReader::logout( ) { ... }
void LMSReader::startMeasure( ) { ... }
void LMSReader::stopMeasure( ) { ... }
void LMSReader::reboot( ) { ... }
void LMSReader::pollingOne( ) { ... }
void LMSReader::connectToLMS( ) { ... }
void LMSReader::connectToLMS( QString addr, quint16 port ) { ... }
```

LMS 的数据应该保存出来，但是没必要存到 log 里，所以它每次 start、stop 运行后，
就会保存出一个点云数据，可以用 CloudStudio 直接打开（第二列即 y 轴的拉伸要把握好才好看）：

```cpp
void LMSReader::genNewPath( )
{
    quint64 dt = QDateTime::currentMSecsSinceEpoch();
    lmsOutputPath.sprintf( "%lld-LMS-XYZ.txt", dt );

    Logger::log( BCD::LMS::GEN_NEW_PATH, lmsOutputPath );
}
/*
 * 保存出来的文件大概是这样：

      124.4507934888                  1437721968720      -124.4507934888
      116.2598232121                  1437721968720      -114.2482100809
      145.3066396684                  1437721968720      -140.3209908327
      155.2301153966                  1437721968720      -147.3078791985
      139.6885570093                  1437721968720      -130.2616867719
      134.9217526363                  1437721968720      -123.6330079937
      163.4918616050                  1437721968720      -147.2087333989
      232.1762734446                  1437721968720      -205.4122149469

**/
```

最后，LMS 最核心的一部分，是对收到的 LMS 数据进行解析，下面我们一点点分析这个函数。

首先，当网络中有数据时，信号 `readyRead` 就被 emit，就会调用 `readLMS()` 函数。

```cpp
//  connect( this, SIGNAL(readyRead() ),
//           this, SLOT(readLMS()) );
void LMSReader::readLMS( )
{
    ...
}
```

在 `readLMS` 函数里，它先把所有的数据读取到：

```cpp
QByteArray ba = readAll();
lmsBA.append( ba );

// read until <ETX> (end of one scan)
if ( ba.at(ba.length() -1) != ETX ) {
    return;
}
```

上面的 `ba.at(ba.length()-1 != ETX)` 是一个保护性质的操作，也是我们在实际写代码
后发现了问题，才改进的。因为 LMS 一个 profile 的网络数据可能会分成多次传给电脑，
电脑不应该在收到数据就进行处理，它要先判断，这个 profile 是否完整，如果完整了
（收到了 `ETX`），才处理之。

```cpp
    QString bufstr( lmsBA );

#ifdef LMS_PRINT_PROFILE_SAMPLE
    zgBA = lmsBA;
#endif

    lmsBA.clear();
```

LMS 每收到一组数据，就 emit 一个信号，让界面显示进度：

```cpp
// emit progress, 1/50 ~ 50/50 or 1/25 ~ 25/25
static int f = 0;
f = (++f) % lmsFrequency;
emit scanning( f+1, lmsFrequency );
```

```cpp
// not run, so no need to parse
// 如果没有打开读取（turnOnReading），就不处理收到的数据
if ( !isRun ) {
    // qDebug() << "Hit! But drop it.";
    return;
}

// 这是 debug 的时候用到的，可以把收到的内容打印在控制台
if( LMS_PRINT_SCAN_BUF ) {
    qDebug() << "Bufstr: " << bufstr;
}

// do it now!
QStringList bufstrlist = bufstr.split(" ");
```

然后对收到的数据进行分发：

```cpp
    // dispatch
    if( false ) {
        // 我通常都喜欢先写一个 if(false)，你造为什么吗？
    } else if( bufstrlist.at(1) == actions[TURN_ON].split(" ").at(1) ) {
        if ( LMS_PARSE_SCAN ) {
            // 这里是最终的一部分！！
            parse( bufstrlist );
            return;
        }
    } else if( bufstrlist.at(1) == actions[GET_ANGBEG_ANGEND].split(" ").at(1) ) {
        // 这是设置 LMS 或者获取 LMS 参数的时候，LMS 的返回情况：
        // sRA LMPoutputRange 1 1388 FFF92230 225510
        // 我们要把拿到的数据解析出来，然后设置到自己的变量里
        int angbeg, angend;
        sscanf_s( qPrintable( bufstrlist.at(4) ), "%x", &angbeg );
        sscanf_s( qPrintable( bufstrlist.at(5) ), "%x", &angend );
        lmsAngleBeg = angbeg / ANGLE_SCALE_FACTOR;
        lmsAngleEnd = angend / ANGLE_SCALE_FACTOR;
        emit angle_begin_end( lmsAngleBeg, lmsAngleEnd );
        Logger::log (  BCD::LMS::GOT_SCANNING_ANGLE_START_END,
                       QString("[%1-%2]").arg(lmsAngleBeg).arg(lmsAngleEnd) );
        return;
    } else if( bufstrlist.at(1) == actions[GET_FREQ_ANGRES].split(" ").at(1) ) {
        // 和上面类似，就不贴代码了
        // ...
        return;
    } else if( bufstrlist.at(1) == actions[AUTHORIZE].split(" ").at(1) ) {
        // ...
    } else {
        // 最后我还要写一个 else，虽然很可能这里从来没有东西，你造为什么吗？
    }
}
```

现在就差那个 `parse( bufstrlist )` 不知道是啥了。先判断是否是数据帧：

```cpp
void LMSReader::parse( const QStringList &bufstrlist )
{
    // 首先判断了是否是 LMS 的数据帧
    // already "LMDscandata" data
    // No: "sEA LMDscandata 0", Yes: "sSN LMDscandata 1" or "sRA LMDscandata"
    string ct = bufstrlist.at(0).toStdString().erase(0, 1); // command type
    if ( "sSN" != ct && "sRA" != ct ) {
        // cerr << "sEA data, not LMS scan.\n";
        return;
    }
```

需要打印？然后就打印一个帧的原始数据：

```cpp
#ifdef LMS_PRINT_PROFILE_SAMPLE
    static bool first = true;
    if ( first ) {
        Logger::log( BCD::LMS::LMS, QString( "LMS data (%1 bytes): %2" ).arg( zgBA.length() )
                                                                        .arg( ba2hexstr( zgBA ) ) );
        first = false;
    }
#endif
```

其实上文那个【LMS 数据量】里面的 “LMS data (6429 bytes): 0x02 0x73 0x53 0x4e...”就是在这里打印出来的。
没想到我打印完这个日志居然把代码还留着了，这种一次性代码理应删掉的。

```cpp
    // parse data
    profiles_raw.push_back( bufstrlist );               // 保存了原始数据，如果不在线处理
                                                        // profiles_raw 就会在离线处理的时候被用到
    // 每个数据帧，有 550 左右个点，时间戳都打成一样的（虽然扫描有先后）
    profilesX[profileCur].timestamp =  QDateTime::currentMSecsSinceEpoch();

    if ( !LMS_PARSE_ON_THE_FLY ) { // do not process, just return
        {
        // 我突然在想这个 scope 里的 lock 什么时候析构……应该在这个中括号后就析
        // 构，但总感觉它“死的”也太早了，哪天有空测试一些
            boost::mutex::scoped_lock lock( mutex );
            ++profileCur;
        }
        return;
    }

    // Parse it on the fly
    postparse( profiles_raw.at( profiles_raw.size()-1 ),
               profilesX[profileCur] );
    {
        boost::mutex::scoped_lock lock( mutex );
        ++profileCur;
    }
}
```

上面的 postpares 处理了当前帧，代码如下：

```cpp
void LMSReader::postparse( QStringList &bufstrlist, profile_t &profile )
{
    // emit progress, 1/50 ~ 50/50 or 1/25 ~ 25/25
    // 首先定义一些变量
    int scannednum = 0;
    int distance = 0;
    double anglebeg = 0.0, angleres = 0.0, anglecur = 0.0;
    double x = 0.0, z = 0.0;
    int tmp = 0;

    // start angle，起始扫描角
    sscanf_s( qPrintable( bufstrlist.at(23) ), "%x", &tmp );
    anglebeg = (double) tmp / ANGLE_SCALE_FACTOR;

    // angle resolution，角度分辨率
    sscanf_s( qPrintable( bufstrlist.at(24) ), "%x", &tmp );
    angleres = (double) tmp / ANGLE_SCALE_FACTOR;

    // num of points in this scan，当前帧的点数，大概 550 个
    sscanf_s( qPrintable( bufstrlist.at(25) ), "%x", &scannednum );

    int cnt = 0; // check for possible lost of points
    for ( int i = 0; i < scannednum; ++i ) {
        ++cnt;
        // scan distance, metric: mm，单位是毫秒
        // 先从字符中扫描出距离值
        sscanf_s( qPrintable( bufstrlist.at(i + 26) ), "%x", &distance );
        // 然后根据点的 index，计算点的角度
        anglecur = (anglebeg + i * angleres) / 180.0 * M_PI;
        // 最后，根据角度和距离，把点的位置计算出来
        profile.pts[i].x = cos(anglecur) * distance;
        profile.pts[i].z = sin(anglecur) * distance;
        // pt.x 和 pt.z 分别存了两个坐标，pt.y 存了时间戳（但实际上我们只要在一
        // 个 profile 里存一个时间戳就可以了）
    }

    Logger::log( BCD::LMS::PARSE_PROFILE );
}
```

当关闭读数后，LMS 会自动保存数据：

```cpp
void LMSReader::saveprofiles( )
{
    qDebug() << "Save LMS data(" << profiles_raw.size() << " profiles) ... to ";
    if ( !LMS_PARSE_ON_THE_FLY ) { // if not on the fly, we need to parse it now
        // 如果没有在线处理，那就用 profiles_raw 的数据，来 parse 出各个数据点
        qDebug() << "Save Profiles, Parsing...";
        // parse
        for ( int i = 0; i < profiles_raw.size(); ++i ) {
            postparse( profiles_raw[i], profilesX[i] );
        }
        {
            boost::mutex::scoped_lock lock( mutex );
            profileCur = profiles_raw.size();
        }
    } else {
        qDebug() << "Save Profiles, no need to parse.";
    }

    if ( lmsOutputPath.isEmpty() ) { genNewPath(); }
    FILE *fp = fopen( qPrintable( QString( "%1/%2" ).arg( basedir )
                                                    .arg( lmsOutputPath ) ), "a+" );
    if ( NULL == fp ) {
        qDebug() << "err, cant open file.";
        return;
    }

    qDebug() << "Save Profiles, saving...";
    for ( int i = 0; i < profiles_raw.size(); ++i ) {
        for ( int j = 0; j < LMS_PROFILE_POINTS_NUM; ++j ) {
            fprintf( fp, "%20.10f %30lld %20.10f\n"
                    , profilesX[i].pts[j].x
                    , profilesX[i].timestamp
                    , profilesX[i].pts[j].z );
        }
    }
    fclose( fp );

    Logger::log( BCD::LMS::SAVE_PROFILES );
}
```

上面已经提过，保存出来的数据大概这样：

```
      145.3066396684                  1437721968720      -140.3209908327
      155.2301153966                  1437721968720      -147.3078791985
      139.6885570093                  1437721968720      -130.2616867719
```

打开、关闭 LMS 数据的读取：

```cpp
void LMSReader::turnOnReading( )
{
    isRun = true;
    {
        boost::mutex::scoped_lock lock( mutex );
        profileCur = 0;
    }
    profiles_raw.clear();
}

void LMSReader::turnOffReading( )
{
    isRun = false;
    // parse & save
    saveprofiles();
}

void LMSReader::start( qint64 ts /* = 0 */ )
{
    qint64 dt = (ts == 0)
              ? QDateTime::currentMSecsSinceEpoch()
              : (qint64)ts;
    // 每次 start 都要产生新的输出路径，这样就不会覆盖原来保存下来的数据了
    genNewPath( dt );
    turnOnReading();
}

void LMSReader::stop( )
{
    turnOffReading();
}
```

在我看 LMS 代码的时候，我看到了自己最开始的注释：

```cpp
/*
 *
 *   // Fog Filter
 *   // <-- "sWN MSsuppmode 1"; // 0: glitch, 1: fog
 *   // --> "sWA MSsuppmode"
 *
 *   // n-Pulse to 1-Pulse Filter
 *   // <-- "sWN LFPnto1filter 1"; // 1: active, 0: inactive
 *   // --> "sWA LFPnto1filter"
 *
 *   // Mean Filter
 *   // <-- "sWN LFPmeanfilter 1 +10 0"; // 0: inactive, 1: active. number of scans: +2..+100. 0
 *   // --> "sWA LFPmeanfilter"
 *
 *   // Configure the data content for the scan
 *   // QString str = "sWN LMDscandatacfg";
 *   // channel: c1: 1, c2: 2, c1+c2: 3
 *   // Remission data output: 0: no, 1: yes
 *   // Resolution of Remission Data: 0: 8bit, 1: 16bit
 *   // Unit of Remission Data:
 *   // double AngRes = 2.0 / round(2.0 / GivenAngRes);
 *
 *   // Function Front Panel
 *   // <-- "sWN LMLfpFcn 1 0 1"; // 1: reserved, 0-2: Q1/Q2, 0-2: Okay/Stop, 0-1: display function
 *   // 0: no function, 1: application, 2: command
 *   // 0: application, 1: command
 *   // --> "sFA 8"
 *
 *   // Synchronization Phase
 *   // <-- "sWN SYPhase +90";
 *   // --> "sWA SYPhase"
 *
 *   // Set factory defaults
 *   // <-- "sMN mSCloadfacdef"
 *
 *   // Set IP-Address
 *   // <-- "sWN EIIpAddr C0 A8 0 1";
 *   // --> "sWA EIIpAddr"
 *
 *   // Power On Counter
 *   // <-- "sRN ODpwrc";
 *   // --> "sRA ODpwrc A7"
 *
 *   // Operating hours
 *   // <-- "sRN ODoprh";
 *   // --> "sRA ODoprh 4F4", 4F4 * 1/10h = 126.8 hours
 *
 *   // Ask Device Name
 *   // <-- "sRN LocationName";
 *   // --> "sRA LocationName B not defined"
 *
 *   // Device State
 *   // <-- "sRN SCdevicestate";
 *   // --> "sRA SCdevicestate 1", 0: busy, 1: ready, 2: error
 *
 *   // Device Ident
 *   // <-- "sRN DeviceIdent/sRI 0";
 *   // --> "sFA 3"?
 *
 *   // Reset output counter
 *   // <-- "sMN LIDrstoutpcnt";
 *   // --> "sAN LIDrstoutpcnt 0", 0: success
 *
 *   // Set output state
 *   // <-- "sMN mDOSetOutput 1 1"; // output number: 1-3, output state: 0:inactive / 1:active
 *   // "sAN mDOSetOutput 0", 0: err, 1: success
 *
 *   // Ask state of the outputs
 *   // <-- "sRN LIDoutputstate";
 *   // --> "sRA LIDoutputstate 1 E88CDA0F 1 A 1 A 1 A 2 0 2 0 2 0 2 0 2 0 2 0 2 0 2 0 1 7DD 1 1 0 1D 3B 5B8D8"
 *
 *   // Ask speed threshold
 *   // "sRN LICSpTh";
 *   // "sRA LICSpTh 5"
 *
 *   // Fixed speed
 *   // <-- "sWN LICFixVel +5"; // +0.001..+10
 *   // --> "sWA LICFixVel"
 *
 *   // Encoder resolution
 *   // QString str = "sWN LICencres +1000"; // +0.001..+2000
 *   // "sWA LICencres"
 *
 *   // Encoder Settings
 *      0 = Off
 *      1 = single Increment/INC1
 *      2 = Direction recognition (phase)
 *      3 = Direction recognition (level)
 *
 *   // <-- "sWN LICencset 2"
 *   // --> "sWA LICencset"

 *   // Increment source
 *   // <-- "sWN LICsrc 1"); // 0: fixed speed, 1: encoder
 *   // --> "sWA LICsrc"

 *   // <-- "sMN LMCstartmeas";
 *   // "sAN LMCstartmeas 0"

 *   // <-- "sMN LMCstandby"; // cant turn on, but can poll one
 *   // "sAN LMCstandby 0"

 *   // <-- "sMN LMCstopmeas";
 *   // ""sAN LMCstopmeas 0"

 *   // <-- "sMN mSCreboot";
 *   // "sAN mSCreboot"

 *   // <-- "sRN STlms";
 *   // "sRA STlms 7 0 8 00:34:19 A 01.01.1970 0 0 0"

 *   // <-- "sMN LSPsetdatetime";
 *   // "sAN LSPsetdatetime 1"

 *   // <-- "sMN mEEwriteall";
 *   // "sAN mEEwriteall 1"
 *
**/
```

可以看到 LMS 还提供很多功能，只不过我们没用用过，而已。

`lmsreaderconfig{.h, .cpp, .ui}` 内容没有多少，它只是一个封装。所有的代码大概都是这样：

```cpp
void on_pushButton_ip_port_clicked( ) {

    QString address   = ui->lineEdit_ip->text().simplified();
    quint16 port      = ui->lineEdit_port->text().toInt();
    lmsReader->setAddressPort( address, port );

}
```

.ui 其实是一个 xml 文件：

```xml
<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>lmsreaderconfig</class>
 <widget class="QWidget" name="lmsreaderconfig">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>901</width>
    <height>429</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>lmsreaderconfig</string>
  </property>
  <layout class="QGridLayout" name="gridLayout">
   <item row="0" column="0">
   ...
```

用 Qt 的 `uic`{.bash} 转为 cpp 文件一起编译，就生成成了界面程序。

LMS 就这样讲完了。讲得比较细致，因为它是我写的第一个传感器程序，后面的 IMU 和 UR 就要
讲得糙一点，快一点了。

## IMU

IMU（Inertial measurement unit，惯性测量单元，俗称俗称惯导，或惯性导航）是测量
物体三轴姿态角（或角速率）以及加速度的装置。IMU 装在 MCU（Micro Controller Unit，
微控制器）上，和电脑通过串口（COM）连接（用 Modbus 串口协议）。

使用到了第三方库
[QExtSerialPort](https://github.com/qextserialport/qextserialport)，这个库给
Qt4 提供了串口通信的功能（Qt5 中已经集成了这个功能）。
我们碰到的第一个问题是，怎么把 Qt 程序，移植到 VS 里？

其实我们的 Qt 也是用的 VS 的编译器。所以显示把原来 Qt 工程的那些 dll 和 lib 文件弄到 CMake 工程
是可行的。废了好几天的功夫（那时候我们 CMake 也不熟），我终于搞定了，大概的 CMakeLists.txt 文件
如下：

```cmake
# 首先加上 include 路径
include_directories( ${CMAKE_SOURCE_DIR}/GeneralLibs/imulib/bundle )

# 源码要一起编译
set( QEXTSERIALPORT_SOURCES
     ${CMAKE_SOURCE_DIR}/GeneralLibs/imulib/bundle/qextserialport.cpp
     ${CMAKE_SOURCE_DIR}/GeneralLibs/imulib/bundle/qextserialenumerator.cpp
     ${CMAKE_SOURCE_DIR}/GeneralLibs/imulib/bundle/qextserialenumerator_win.cpp
     ${CMAKE_SOURCE_DIR}/GeneralLibs/imulib/bundle/qextserialport_win.cpp )

# link 的目录和 link 的 lib 文件
link_directories( ${CMAKE_SOURCE_DIR}/GeneralLibs/imulib/lib )
set( QEXTSERIALPORT_LIBS "setupapi;advapi32;user32;qextserialport1;qextserialportd1;" )

file( GLOB QEXTSERIALPORT_HEADERS ${CMAKE_SOURCE_DIR}/GeneralLibs/imulib/bundle/*.h )
add_library( ${PROJECT_NAME} STATIC
    ${SRCS_FILES}
    ${UI_FILES} ${HDRS_FILES} ${MOC_SRCS} ${UI_HDRS} ${RSC_SRCS} ${CD_FILES}
    ${QEXTSERIALPORT_HEADERS} ${QEXTSERIALPORT_SOURCES} )
target_link_libraries( ${PROJECT_NAME} ${QT_LIBRARIES} ${QEXTSERIALPORT_LIBS} Utils )
```

IMU 没有像 LMS 一样继承别人，而是把提供了串口功能的 QextSerialPort 作为自己的一个成员：

```cpp
private:
    QextSerialPort *imuCom;
    QextSerialEnumerator *imuSerialeEnumerator;
```

那个 QextSerialEnumerator 可以显示电脑开启的 COM 接口，在 Qt creator 里可以正常工作，但在 VS 里
却没用。所以这样的代码是无效的：

```cpp
foreach ( const QextPortInfo &info, QextSerialEnumerator::getPorts() ) {
    ports << info.portName; // "COM1", "COM3", ...
    portsInfo << info;
}
```

眼尖的你，可能发现了 `getPorts` 函数是静态的，觉得没必要弄一个成员。
但其实我们只是要在串口号有更新的时候能够自动反馈一下而已，所以才
需要一个成员来连接槽函数：

```cpp
connect(imuSerialeEnumerator, SIGNAL(deviceDiscovered(QextPortInfo)),
        this, SLOT(onPortAddedOrRemoved()));
connect(imuSerialeEnumerator, SIGNAL(deviceRemoved(QextPortInfo)),
        this, SLOT(onPortAddedOrRemoved()));
```

Anyway，因为 enumerate 串口号的功能的失效，我们是在界面里自动生成 20 个串口的选项：

```cpp
void IMUReaderConfig::loadPorts( QStringList ports )
{
    // 如果不是 VS 里，就可以用 loadPorts( ports ) 直接加载。
    // 其中的 ports 就是从上面的“ports << info.portName; // "COM1", "COM3", ...”而来。
#ifndef _WIN64
    ui->comboBox_port->clear();
    if ( ports.length() == 0 ) { return; }

    int i = 0;
    int ci = 0;
    bool newPort = true;
    foreach ( const QString &port, ports ) {
        ui->comboBox_port->addItem( port );
        if ( port == arm->getCurPort() ) {
            ci = i;
            newPort = false;
        }
        ++i;
    }

    if ( newPort ) {
        ui->comboBox_port->setCurrentIndex( 0 );
        arm->setCurPort( ports.at(0) );
    } else {
        ui->comboBox_port->setCurrentIndex( ci );
    }
#else
    // VS 的话，就直接生成 20 个 COM 口。
    for ( int i = 0; i < 20; ++i ) {
        static QString str;
        str.sprintf( "COM%d", i+1 );
        ui->comboBox_port->addItem( str );
    }
#endif
}
```

配置界面弹出的时候，我们还要载入原来的设置，这里还会自动的把 combo box 的选中
自动切换到相应的 index（如果在选项中的话（如果不在，就添加一个，然后切换过去）），
代码略复杂：

```cpp
void IMUReaderConfig::loadConfigs( )
{
    // load ports
    loadPorts( arm->getPorts() );

    // baud rate, etc
    // clear
    ui->comboBox_baudrate->clear();
    ui->comboBox_databits->clear();
    ui->comboBox_parity->clear();
    ui->comboBox_stopbits->clear();

    // load and select
    int i = 0; // index
    int ci = 0; // current index
    foreach ( const QString &brt, arm->getBRTs().keys() ) {
        ui->comboBox_baudrate->addItem( brt );
        if ( brt == arm->getBRTs().key(arm->getBRT()) ) {
            ci = i;
        }
        ++i;
    }
    ui->comboBox_baudrate->setCurrentIndex( ci );

    i = ci = 0;
    foreach ( const QString &dbt, arm->getDBTs().keys() ) {
        ui->comboBox_databits->addItem( dbt );
        if ( dbt == arm->getDBTs().key(arm->getDBT()) ) {
            ci = i;
        }
        ++i;
    }
    ui->comboBox_databits->setCurrentIndex( ci );

    i = ci = 0;
    foreach ( const QString &pt, arm->getPTs().keys() ) {
        ui->comboBox_parity->addItem( pt );
        if ( pt == arm->getPTs().key(arm->getPT()) ) {
            ci = i;
        }
        ++i;
    }
    ui->comboBox_parity->setCurrentIndex( ci );

    i = ci = 0;
    foreach ( const QString &sbt, arm->getSBTs().keys() ) {
        ui->comboBox_stopbits->addItem( sbt );
        if ( sbt == arm->getSBTs().key(arm->getSBT()) ) {
            ci = i;
        }
        ++i;
    }
    ui->comboBox_stopbits->setCurrentIndex( ci );

    // disable set buttons
    ui->pushButton_set->setEnabled( false );
    ui->pushButton_wheel_fb->setEnabled( false );
    ui->pushButton_arm3_fb->setEnabled( false );
    ui->pushButton_arm3_fb_2->setEnabled( false );
}
```

这里的 SBT，DBT 之类，熟悉串口的朋友应该都知道，这里简要说明一下。
比如 BRT，其实就是 baud rate（波特率），有关数据传输的速率。
常用的波特率有 9600, 19200, 38400 等等，代码如下：

```cpp
const IMUReader::BRT IMUReader::brts = IMUReader::initBRTs();
//  IMUReader::BRT IMUReader::initBRTs( )
//  {
//      BRT brts;
//      brts[    "9600"  ] = BAUD9600;
//      brts[   "19200"  ] = BAUD19200;
//      brts[   "38400"  ] = BAUD38400;
//      brts[  "115200"  ] = BAUD115200;
//      brts[  "256000"  ] = BAUD256000;
//      return brts;
//  }
```

DBT 指的是 data bits（数据位），候选项有 `DATA_7`，`DATA_8`。
SBT 指的是 stop bits（停止位），候选项有 `STOP_1`，`STOP_2`。
PT 指的是 parity type（校验位类型），候选项有 `PAR_NONE`（无校验），
`PAR_ODD`（奇校验），`PAR_EVEN`（偶校验），可能还要设置 FlowControl，
它的候选项有 `FLOW_ON`，`FLOW_OFF`。

IMU 在构造的时候，就要把默认得配置设置好（否则连接了，数据读到的也是有问题的）：

```cpp
// default configs
imuBRT  = BAUD256000;
imuDBT  = DATA_8;
imuPT   = PAR_NONE;
imuSBT  = STOP_1;
```

连接串口：

```cpp
void IMUReader::openIMU(QString com /*=QString()*/) // com 的值可能是 "COM1"，"COM2"，等等
{
    // 如果提供了串口号，就尝试打开
    if (!com.isEmpty()) {
        imuCom = new QextSerialPort(com, QextSerialPort::EventDriven);
        imuCom ->open(QIODevice::ReadWrite);
    } else {
    // 如果没有提供串口号，就一个个试，直到打开一个
        QString str;
        for (int i = 0; i < 10; ++i) {
            com = str.sprintf("COM%d", i+1);
            imuCom = new QextSerialPort(com, QextSerialPort::EventDriven);
            imuCom ->open(QIODevice::ReadWrite);
            if (imuCom->isOpen()) {
                break;
            }
        }
    }

    if (!imuCom->isOpen()) {
        qDebug() << "Not open";
        emit comState(false);
        return;
    }

    emit comState(true);
    qDebug() << "Connected to " << com;

    imuCom->setBaudRate(imuBRT);
    imuCom->setDataBits(imuDBT);
    imuCom->setParity(imuPT);
    imuCom->setStopBits(imuSBT);
    imuCom->setFlowControl(FLOW_OFF);
    imuCom->setTimeout(10);

    // imu
    connect(imuCom, SIGNAL(readyRead()),
                  this, SLOT(readIMU()));
}
```

有数据来的时候，就读取之，这里只是简单地把数据 dump 出来：

```cpp
void IMUReader::readIMU()
{
    QByteArray ba = imuCom->readAll();
    QString str(ba);
    emit imuData(str);

    if (imuOutputPath.isEmpty()) { genNewOutputPath(); }
    FILE *fp = fopen(imuOutputPath.toAscii().data(), "a+");
    if (NULL == fp) {
        return;
    }
    fprintf(fp, "%s", str.toAscii().data());
    fclose(fp);
}
```

IMU 和 LMS 大大不同的地方是，IMU 是被动的需要你主动去请求数据。而 LMS 是主动地，
你请求一次后，数据就会持续传过来。由于 IMU 的被动性质，我们只能定时去请求 IMU 的
姿态，需要使用一个定时器：

```cpp
// QTimer t;
t.setInterval(100);
connect( &t, SIGNAL(timeout() ),
         this, SLOT(printPorts()) );
```

IMU 就讲到这里。其实 IMU 是最难最复杂的一个传感器模块，这里讲得如此简单，是因为这是早期的
一个 IMU 实现。后来我们所有的串口，都集中到了 MCU 模块，`class MCUController` 不仅可以生成一个
IMU 实例，还可以是触发器（可以触发激光器和面光源），编码器（用来测量行走轮行走的距离）。
只要在构造的时候传入相应的参数即可：

```cpp
namespace DeviceType {
enum DeviceAddress {
    TRIGGER = 0x01,     // COM1，当时，我们的触发器默认接线在 COM1，用来触发 C2
                        // 和 SP20000C 相机的采集频率，以及激光器和面光源的打开和关闭
    LMS_IMU = 0x02,     // COM2
    ENCODER = 0x03,     // COM3
    ENCODER2 = 0x04,    // COM4
};
}

class MCUController : public QObject
{
    Q_OBJECT
```

这部分讲 IMU，但是并没有涉及 IMU 数据的解析，因为它太复杂。在解析数据之前要讲串口通信的寄存器的读和写，
要讲什么是 holding registers，什么是 coils 等等概念。而 IMU 后来整合到 MCU 后，变得更加复杂，
mcu.h 和 mcu.cpp 的源码加起来将近 2500 行。这里贴一些头文件，感受下其中逻辑的复杂性：

```cpp
// 底层的数据读取，十分感谢长沙机械团队没有设置 coils，全部用了 resgisters 来存配置
enum MCUFunctionCodes {
    READ_HOLDING_REGISTERS    = 0x03,  // read output registers
    WRITE_MULTIPLE_REGISTERS  = 0x10,  // write multiple output registers
};
void readHoldingRegisters( const quint16 &addr,
                           const quint16 &length );
void writeMultipleRegisters( const quint16 &addr,
                             const quint16 &length,
                             const QByteArray &ba );

// 编码器
void mcuEncoders( double e1, double e2 );

// C2 相机和 SP20000C 的触发频率也有用我们的程序来控制
void mcuC2Frequency( quint16 c2f );
void mcuSP20000CFrequency( quint16 sp20000cf );

// 车体周围有五个超声波，他们的测距也要实时解析出来
void mcuRange1to5( quint16 r1,
                   quint16 r2,
                   quint16 r3,
                   quint16 r4,
                   quint16 r5 );

// 最复杂的，还是编码器，有很多变量有交替获取
// 也有很多计算（计算由算法模块提供）
void   getQuaternion( );
void parseQuaternion( const QByteArray &ba );
// 实现代码：
//              void MCUController::parseQuaternion( const QByteArray &ba )
//              {
//                  // 0: devAddr, 1: fc, 2: num
//                  if ( ba.length() != 3+8+2 || ba.at(2) != 8 ) {
//                      return;
//                  }
//
//                  quint8 c = 3; // cursor
//                  mcuInfo.quaternion[0] = us2s( parse2BytesToUInt16( ba, c ) ); c += 2;
//                  mcuInfo.quaternion[1] = us2s( parse2BytesToUInt16( ba, c ) ); c += 2;
//                  mcuInfo.quaternion[2] = us2s( parse2BytesToUInt16( ba, c ) ); c += 2;
//                  mcuInfo.quaternion[3] = us2s( parse2BytesToUInt16( ba, c ) ); c += 2;
//
//                  emit mcuQuaternion( mcuInfo.quaternion[0],
//                                      mcuInfo.quaternion[1],
//                                      mcuInfo.quaternion[2],
//                                      mcuInfo.quaternion[3] );
//                  Logger::log( BCD::MCU::GOT_QUATERNION,
//                               QString( "[ %1, %2, %3, %4 ]" ).arg( mcuInfo.quaternion[0] )
//                                                              .arg( mcuInfo.quaternion[1] )
//                                                              .arg( mcuInfo.quaternion[2] )
//                                                              .arg( mcuInfo.quaternion[3] ) );
//              }
//
void   getRollPitchYaw( );
void parseRollPitchYaw( const QByteArray &ba );
void   getAcceleration( );
void parseAcceleration( const QByteArray &ba );
void   getGyroScope( );
void parseGyroScope( const QByteArray &ba );
void   getMagnetometer( );
void parseMagnetometer( const QByteArray &ba );
void   getRotation( );
void parseRotation( const QByteArray &ba );
void   getEkf( );
void parseEkf( const QByteArray &ba );
// 处理好的数据，也要保存起来（直接用 Logger::log 存日志里就可以）
void savedata( const qint64 &dt, const qint16 &d0
             , const qint16 &d1, const qint16 &d2, const qint16 &d3
             , const qint16 &d4, const qint16 &d5, const qint16 &d6
             , const qint16 &d7, const qint16 &d8, const qint16 &d9
             , const qint16 &da, const qint16 &db, const qint16 &dc
             , const qint16 &dx, const qint16 &dy, const qint16 &dz);
// 主界面还要显示出来，这是一些信号
void mcuQuaternion( qint16 q0,
                    qint16 q1,
                    qint16 q2,
                    qint16 q3 );
void mcuAdisRequireData( qint16 d1, qint16 d2, qint16 d3,
                         qint16 d4, qint16 d5, qint16 d6,
                         qint16 d7, qint16 d8, qint16 d9,
                         qint16 da, qint16 db, qint16 dc );
void mcuRollPitchYaw( qint16 r,
                      qint16 p,
                      qint16 y );
void mcuAcc( qint16 x,
             qint16 y,
             qint16 z );
void mcuGyro( qint16 gyro_x,
              qint16 gyro_y,
              qint16 gyro_z );
void mcuMag( qint16 mag_x,
             qint16 mag_y,
             qint16 mag_z );
void mcuRefMatrix( qint16 r1, qint16 r2, qint16 r3,
                   qint16 r4, qint16 r5, qint16 r6,
                   qint16 r7, qint16 r8, qint16 r9 );
```

读取 MCU 数据后，也要 dispatch，而且还要判断读取是否有“交错”，因为数据读取
往往是向多个寄存器进行的，并不能假定请求和收到的数据就是一一匹配的，MCU 的
读取代码如下：

```cpp
void MCUController::readMCU( )
{
    QByteArray ba = mcuCom->readAll();

    // chop garbage values
    int i = 0;
    while ( i < ba.length() && ba.at(i) != devAddr ) {
        ++i;
    }
    ba.remove( 0, i );

    if ( ba.length() < 2 ) {      // at least 2 bytes: devAddr, function code
        return;
    }

    QString str( ba );
    QString hexstr = ba2hexstr( ba );
    emit mcuData( str );
   // emit mcuHexData( hexstr );
    if ( SHOW_READ ) {
        Logger::log( BCD::MCU::MCU, QString( "MCU%1 Received %2 bytes: %3" ).arg( id ).arg( ba.length() ).arg( hexstr ) );
    }

    quint8 fc = ba.at( 1 ); // function code
    if ( fc != functionCode ) {
        // function code is the <write data>'s status,
        // it must equal the <received data>'s status
        Logger::log( BCD::MCU::CONVOLUTED_TX_RX );
        return;
    }

    // dispatch
    if ( false ) {
    } else if ( READ_HOLDING_REGISTERS == fc ) {
        // 里面还要判断读到的地址和自己上次请求的地址是否一致。
        onReadHoldingRegisters( ba );
    }

    if ( !crc16Passed( ba ) ) {
        Logger::log( BCD::MCU::MCU, "err crc16 failed" );
        return;
    }
}

void MCUController::onReadHoldingRegisters( QByteArray &ba )
{
    switch ( currentMode ) {
    case GET_TIME_STAMP:                 parseTimestamp( ba );              break;
    case GET_RANGE_1_TO_5:               parseRange1to5( ba );              break;
/*  case GET_ADIS_REQUIRE_DATA:          parseADISRequiredata( ba );        break; // only one scan */
    case GET_ADIS_REQUIRE_DATA:          parseADISScans( ba );              break; // multiple scans
/*  case GET_ADIS_REQUIRE_DATA:          threadParseADIS( ba );             break; */
    case GET_QUATERNION:                 parseQuaternion( ba );             break;
    case GET_ROLL_PITCH_YALL:            parseRollPitchYaw( ba );           break;
    case GET_ACCEL_XYZ:                   parseAcceleration( ba );          break;
    case GET_GYRO_XYZ:                   parseGyroScope( ba );              break;
    case GET_MAG_XYZ:                    parseMagnetometer( ba );           break;
/*  case GET_H_MOTOR_NUM:                parseHMotorNum( ba );              break; */
    case GET_HORIZONTAL_MOTORNUM:        parseHorizontalMotornum( ba );     break;
    case GET_ROTATION_XYZ:               parseRotation( ba );               break;
    case GET_ENCODERS:                   parseEncoders( ba );               break;
    case GET_EKF:                        parseEkf( ba );                    break;
    default:                             Logger::log( BCD::MCU::MCU, "mcuFC not match." );
    }
}
```

IMU 用来测量姿态和加速度，如果一直使用精度就会很差，所以需要不时地 tare（置零）一下：

```cpp
void MCUController::doTare( )
{
    QByteArray tx;
    tx.append( '\0' );
    tx.append(  13  );
    writeMultipleRegisters( mcuAddr.value( ON_OFF_ADDR ), 1, tx );
    Logger::log( BCD::MCU::TARE );
}
```

从 `writeMultipleRegisters( mcuAddr.value( ON_OFF_ADDR ), 1, tx )` 可以看出，我依旧是把所有的函数地址
存在了一个 map 里。这样用起来比较方便（虽然有过度工程的嫌疑）。

那个 `tx.append( '\0' )` 则是无奈之举，因为我试了 `tx.append( 0 )` 和 `tx.append( char(0) )`，都不可以。
还好终于成功了==。

（By the way，这可能是早期的代码，因为现在一看就应该用 `quint16 highlow( const quint8 &high, const quint8 &low )` 啊。）

IMU 模块就到这里。下面讲 UR 模块。

## UR

在我还在老师的公司做本科毕设的时候，我就看到了 UR10。没想到后来它的控制程序还是我写的。

![放在公司二楼的 UR10 机械臂](http://whudoc.qiniudn.com/2016/2016-07-26_10-20-05.png){align=right}

先简要介绍一下它：

>   UR（Universal Robot）是一个机械臂，位于车机械臂末端，搭载了全部传感器。 共 6 个关节，均可 360 度旋转，可定点移动。

相比 LMS 使用 TCP，IMU 使用串口 Modbus 协议，UR10 提供了更全面便捷的交互接口：
你可以使用 TCP，也可以是用 Modbus（而且是 Modbus TCP，比 IMU 的串口 Modbus 好用得多）。

因为 TCP 使用起来方便得多，我们使用了 TCP[^urtcp]，它提供四个端口，所以我们的 URController 类里有四个成员变量：

```cpp
QTcpSocket urDashboardAgent;
QTcpSocket urClient1;
QTcpSocket urClient2;
QTcpSocket urStatusAgent;
```

这是一些有用的变量。

```cpp
enum {
    UR_ModbusTCPPort          = 502,    // UR 提供的 ModbusTCP 端口，不好用，所以没用了
    UR_DashboardPort          = 29999,
    UR_Client1Port            = 30001,  // controller
    UR_Client2Port            = 30002,
    UR_StatusPort             = 30003,  // UR status, 100Hz
};
```

如下图，urClient1 连接到端口 30001，用来控制 UR 的移动，使用的是 UR 文档中说到的 UScript 脚本。
urStatusAgent 连接到端口 30003，用来获取 UR 当前的位姿和状态，数据频率是 100 Hz，每次 1440 个字节的数据。

![](http://whudoc.qiniudn.com/2016/ur-conn-UR.png)

上图原是我画在 processingon 上的，链接在这里：<https://www.processon.com/view/link/56ee186de4b0881f9ac2e009>。

[^urtcp]: 开始我并不知道可以用 TCP，还在尝试用 Modbus 请求的方式一个个读取 register，
    后来惊现原来可以用 TCP，于是这些东西统统都用不着了：

    ```cpp
    enum URFunctionCodes {
        READ_COILS                = 0x01,  // read output bits
        READ_DISCRETE_INPUTS      = 0x02,  // read input bits
        READ_HOLDING_REGISTERS    = 0x03,  // read output registers
        READ_INPUT_REGISTERS      = 0x04,  // read input registers
        WRITE_SINGLE_COIL         = 0x05,  // write output bit, turn ON/OFF
        WRITE_SINGLE_REGISTER     = 0x06,  // write output register
        WRITE_MULTIPLE_COILS      = 0x0f,  // write multiple output bits
        WRITE_MULTIPLE_REGISTERS  = 0x10,  // write multiple output registers
    };
    ```

UR 最重要的，是它的当前姿态，我们把它存在了一起：

```cpp
struct URStatus {
    quint32 size;
    double time;
    double q_target[6];                 // joint target, rad
    double qd_target[6];                // rad/s
    double qdd_target[6];               // rad/s^2
    double i_target[6];                 // target current, A
    double m_target[6];                 // torque, in Nm

    double q_actual[6];                 // rad
    double qd_actual[6];                // rad/s
    double i_actual[6];                 // needed current, A
    double i_control[6];                // supplied current, A

    double tcp_vector_actual[6];        // m, rad
    double tcp_speed_actual[6];         // m/s, rad/s
    double tcp_force_actual[6];         // N, Nm
    double tcp_vector_target[6];        // m, rad
    double tcp_speed_target[6];         // m/s, rad/s

    double digital_input_bits;
    double motor_temperatures[6];       // temperature(°C) of six joints

    double controller_timer;
    double reverved_value;
    double robot_mode;
    double joint_modes[6];
    double safety_mode;

    double ur_only1[6];
    double tool_accelerometer_values[3];
    double ur_only2[6];

    double speed_scaling;
    double linear_momentum_norm;
    double ur_only3;
    double ur_only4;

    double v_main;                      // V
    double v_robot;                     // V
    double i_robot;                     // A
    double v_actual[6];
} ust;
```

里面的 tcp 可不是网络通信的 tcp，而是 tool center point，也就是 UR10 末端（最远端）。

在 UR 的构造函数里，需要连接几个槽：

```cpp
// 有数据就读数据
connect( this, SIGNAL(readyRead()),
         this, SLOT(readUR()) );
connect( &urClient1, SIGNAL(readyRead()),
         this, SLOT(parseURAgent1()) );
connect( &urClient2, SIGNAL(readyRead()),
         this, SLOT(parseURAgent2()) );
connect( &urDashboardAgent, SIGNAL(readyRead()),
         this, SLOT(parseURDashboard()) );
connect( &urStatusAgent, SIGNAL(readyRead()),
         this, SLOT(parseURStatus()) );

// 掉线就自动重连
connect( this, SIGNAL(disconnected()),
         this, SLOT(connectUR()) );
connect( &urDashboardAgent, SIGNAL(disconnected()),
         this, SLOT(connectDashboard()) );
connect( &urClient1, SIGNAL(disconnected()),
         this, SLOT(connectClient1()) );
connect( &urClient2, SIGNAL(disconnected()),
         this, SLOT(connectClient2()) );
connect( &urStatusAgent, SIGNAL(disconnected()),
         this, SLOT(connectStatusAgent()) );
connect( this, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
         this, SLOT(urStateChanged(QAbstractSocket::SocketState)) );
```

```cpp
void URController::dashboardWrite( QByteArray &ba )
{
    ba.append( "\r\n" );
    urDashboardAgent.write( ba, ba.length() );
    Logger::log( BCD::UR::DASHBOARD_WRITE );
}

void URController::client1Write( QByteArray &ba ) { ... }
void URController::client2Write( QByteArray &ba ) { ... }
```

UR 最重要的是获取 UR 的当前姿态，而且我们只 parse 我们需要的数据：

![](http://whudoc.qiniudn.com/2016/ur-decode-status.png)

代码如下：

```cpp
void URController::parseURStatus( const QByteArray &ba )
{
    if ( ba.length() != 2 * UR_STATUS_BUF_LENGTH ) { return; }

    // then we parse the 1044 bytes
    bool t = true, f = false;     // flag to determine Parsing or Not
    quint16 c = 0;                // cursor

    ust.size                         = parse4Bytes2Int4UR( ba, c ); c += 4;
    if (ust.size != UR_STATUS_BUF_LENGTH) {
        qDebug() << "oops: " << ust.size;
        return;
    }

#define PARSE_TO_DOUBLE parse8BytesToDouble
// #define PARSE_TO_DOUBLE parse8Bytes2Double4UR
    ust.time                         = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    // q target，这些东西不重要，所以传入“f”，即：【不处理】
    ust.q_target[0]                  = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.q_target[5]                  = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    // q target differential
    ust.qd_target[0]                 = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.qd_target[5]                 = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    // qdd
    ust.qdd_target[0]                = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.qdd_target[5]                = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    // I
    ust.i_target[0]                  = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.i_target[5]                  = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    // M
    ust.m_target[0]                  = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.m_target[5]                  = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    // q actual，关节的角度。这是我们关心的内容，所以传入“t”，表示【需要 parse】
    ust.q_actual[0]                  = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.q_actual[1]                  = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.q_actual[2]                  = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.q_actual[3]                  = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.q_actual[4]                  = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.q_actual[5]                  = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    // 解析得到的数据立马 emit 出去，主界面获得了，可以实时显示出来
    emit ustJ0toJ5( rad2deg( ust.q_actual[0] ),
                    rad2deg( ust.q_actual[1] ),
                    rad2deg( ust.q_actual[2] ),
                    rad2deg( ust.q_actual[3] ),
                    rad2deg( ust.q_actual[4] ),
                    rad2deg( ust.q_actual[5] ) );
    // qd，这是加速度。
    ust.qd_actual[0]                    = PARSE_TO_DOUBLE(ba, c, t); c += 8;
    ust.qd_actual[1]                    = PARSE_TO_DOUBLE(ba, c, t); c += 8;
    ust.qd_actual[2]                    = PARSE_TO_DOUBLE(ba, c, t); c += 8;
    ust.qd_actual[3]                    = PARSE_TO_DOUBLE(ba, c, t); c += 8;
    ust.qd_actual[4]                    = PARSE_TO_DOUBLE(ba, c, t); c += 8;
    ust.qd_actual[5]                    = PARSE_TO_DOUBLE(ba, c, t); c += 8;
    emit ustJ0toJ5d( rad2deg( ust.qd_actual[0] ),
                     rad2deg( ust.qd_actual[1] ),
                     rad2deg( ust.qd_actual[2] ),
                     rad2deg( ust.qd_actual[3] ),
                     rad2deg( ust.qd_actual[4] ),
                     rad2deg( ust.qd_actual[5] ) );
    ...

    // TCP，末端得位置
    ust.tcp_vector_actual[0]         = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.tcp_vector_actual[1]         = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.tcp_vector_actual[2]         = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.tcp_vector_actual[3]         = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.tcp_vector_actual[4]         = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    ust.tcp_vector_actual[5]         = PARSE_TO_DOUBLE( ba, c, t ); c += 8;
    emit ustXYZRxRyRz( ust.tcp_vector_actual[0],
                       ust.tcp_vector_actual[1],
                       ust.tcp_vector_actual[2],
                       ust.tcp_vector_actual[3],
                       ust.tcp_vector_actual[4],
                       ust.tcp_vector_actual[5] );

    // tcp speed actual
    ust.tcp_speed_actual[0]          = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.tcp_speed_actual[5]          = PARSE_TO_DOUBLE( ba, c, f ); c += 8;

    // tcp force
    ust.tcp_force_actual[0]          = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.tcp_force_actual[5]          = PARSE_TO_DOUBLE( ba, c, f ); c += 8;

    // tcp target
    ust.tcp_vector_target[0]         = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.tcp_vector_target[5]         = PARSE_TO_DOUBLE( ba, c, f ); c += 8;

    // tcp speed target
    ust.tcp_speed_target[0]          = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...
    ust.tcp_speed_target[5]          = PARSE_TO_DOUBLE( ba, c, f ); c += 8;
    ...

#undef PARSE_TO_DOUBLE
    // parsed c=1044 bytes now.
}
```

UR 模块还可以控制 UR 六个机械臂的移动：

```cpp
// 移动到某个角度
void URController::moveJ( const double &x1,
                          const double &x2,
                          const double &x3,
                          const double &x4,
                          const double &x5,
                          const double &x6 )
{
    QString str;
    str.sprintf( "movej([%lf, %lf, %lf, %lf, %lf, %lf]"
                 ",a=%.2lf, v=%.2lf, t=%.2lf, r=%.2lf)",
                  x1, x2, x3, x4, x5, x6,
                  urConf.qAcceleration,
                  urConf.qVelocity,          // velocity
                  urConf.time,               // time
                  urConf.blendRadius );      // blend radius
    QByteArray ba;
    ba.append( str );
    client1Write( ba );
    Logger::log( BCD::UR::UR, QString( "UR moveJ： %1").arg( str ) );
}

// 移动某个角度
void URController::moveJDiff( const double &x1,
                              const double &x2,
                              const double &x3,
                              const double &x4,
                              const double &x5,
                              const double &x6 )
{
    double j[6] = { ust.q_actual[0],
                    ust.q_actual[1],
                    ust.q_actual[2],
                    ust.q_actual[3],
                    ust.q_actual[4],
                    ust.q_actual[5] };
    Logger::log( BCD::UR::UR,
        QString( "UR moveJDiff： delta=[%1, %2, %3, %4, %5, %6]").arg( x1 ).arg( x2 ).arg( x3 ).arg( x4 ).arg( x5 ).arg( x6 ) );
    moveJ( j[0] + x1
         , j[1] + x2
         , j[2] + x3
         , j[3] + x4
         , j[4] + x5
         , j[5] + x6 );
}
```

里面用的是 UR 提供的脚本。UR10 的说明文档里有一本 UScript 1.0，里面对此
有所说明。我们需要的只是移动关节、移动到某一个位置。所以还不算太复杂。

![](http://whudoc.qiniudn.com/2016/ur-process.png)

![这是早期的一个截图](http://whudoc.qiniudn.com/2016/ur-old.png)

UR 就讲到这。

传感器模块也就到底为止了。

# 5.  通信模块：Wrappers 和 Moderator

>   简介跨电脑 IPC，进行函数调用；

（这部分很内容也很多。暂时没时间写完。）

电脑/进程之间的通信，可以使用 TCP，可以说 TCP 是最好的 IPC（没有之一），因为它：

-   跨平台、跨主机
-   跨语言
-   效率高
-   可靠传输

唯一的不好在于它不能使用共享内存，也就是说不能使用同一个变量。
可能存在变量的更新问题。But，anyway，用 TCP 来通信总是不错的。

（总有些人，要 UDP 来实现一个捉急的 TCP，效率低、效果差，早该一劳永逸直接上 TCP。）

其实以前的一篇 post 已经提到过：[封装说明](http://tangzx.qiniudn.com/post-0059-exe-wrapper.html)，
可以先看这边。这个 post 讲得是架构，也就是说【如何屏蔽程序调用？不管它来自本机，还是异地】。
对应的代码在 [district10/CrossOS: Cross OS Communication](https://github.com/district10/CrossOS)，
已经在 Linux 和 Windows 上测试通过。

在上面 repo 的 README.txt 里，写到：

>   还需要定义一个协议，规定相互传递数据的格式。如：
>   第一个字节代表传输类型，文本？buf？需要保存？数据开始？数据结束？等等。
>
>   假设这个规则为 moderator，moderator 需要在发送前对数据进行封装，在收到数据时进行解析和分发。
>   就好象这个 moderator 是我们的 PDU 解析工具。

基于这个 Wrapper，我设计了 Moderator（中介）模块，专门负责序列化和反序列化后函数调用。

它的作用如下图：

![](http://whudoc.qiniudn.com/2016/system-flow.png)

P.S. 中介通常翻译成 intermediary agent，为什么我要用 moderator 来做这个模块名？

:   因为我曾上过的一门自己喜欢的选修课：[英语演讲与辩论](http://tangzx.qiniudn.com/post-0027-ai-will-kill-us.html)，里
    每次讨论小组里都要有一个 moderator 作为协调者。他来统领讨论的进行。

    我觉得这个概念和这里完全契合。所以把这个模块叫 moderator。

Moderator 主要利用了 Qt 提供的序列化功能，实现了函数调用（以及调用参数）的的序列化。

首先要明确，我们的代码只有一份，只不过高性能计算机上会运行 Master 程序，工控机上会
运行 Slave 程序，两者都有各个传感器模块，只不过传感器只有一边是真的有，另一边只是
有一个空壳，它唯一的作用是请求另一边的传感器，并假装自己这边真的有传感器。
Moderator 在两边都有，下面是代码：

```cpp
class Moderator
{
public:
    Moderator( );
    static bool doItYourself( BCD::TypeID tid );

public:
    static void dispatch( QByteArray &msg );

    typedef QHash<BCD::TypeID, MasterSlaveType> WhichSide;
    const static WhichSide wss;
    enum CrossType {
        // -- G E N E S I S - L M S --
        GEN_LMS__START__QINT64,
        GEN_LMS__STOP__VOID,
        ...
        // -- G E N E S I S - U R --
        GEN_UNIT__SET_UR_POSE__DOUBLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
    };
    // -- G E N E S I S --
    static QByteArray genLMS_start( const qint64 &dt = 0 );
    static QByteArray genLMS_stop( );
    static QByteArray genUnit_setUrPose( double x, double y, double z,
                                         double rx, double ry, double rz );
    ...

private:
    static WhichSide initWhichSides( );
};
```

需要留意的地方有：

1.  `static bool doItYourself( BCD::TypeID tid )` 这个函数在一侧返回了 true，在另一侧就要返回 false，
    因为一个函数要把在 master 上执行，要不再工控机上执行，不能同时为 true（或者 false）。它的实现代码也
    颇为简单：`return Bundle::whoAmI() == wss.value( tid );`{.cpp}，其中 wss 存储了注册信息，也就是一个
    模块到底是要在工控机，还是高性能上运行。doItYourself 的参数是 BCD::TypeId
    tid，就是一个模块的编号。这个在日志模块那一部分讲过：

    ```cpp
    namespace BCD {
    // types
    enum TypeID {
        TYPE_ARM,       // 对应 BCD::ARM::...
        TYPE_IMU,       // 对应 BCD::IUM::...
        TYPE_LMS,       // ...
        TYPE_MCU,
        TYPE_UR,
        ...
    };
    ...
    }
    ```

    一个传感器要注册到 Master 或者 Slave，在 moderator.cpp 里有实现：

    ```cpp
    const Moderator::WhichSide Moderator::wss = Moderator::initWhichSides( );
    Moderator::WhichSide Moderator::initWhichSides( )
    {
        WhichSide wss;
        // Master: 高性能平台
        // Slave : 工控机
        wss.insert(  BCD::TYPE_SERVER,                  SLAVE           );
        wss.insert(  BCD::TYPE_CLIENT,                          MASTER  );
        wss.insert(  BCD::TYPE_LMS,                             MASTER  );
        wss.insert(  BCD::TYPE_MCU,                             MASTER  );
        wss.insert(  BCD::TYPE_UR,                      SLAVE           );
        wss.insert(  BCD::TYPE_ARM,                     SLAVE           );
        wss.insert(  BCD::TYPE_SP20000C,                        MASTER  );
        wss.insert(  BCD::TYPE_MULTIPLICATION_ON_SLAVE, SLAVE           );
        wss.insert(  BCD::TYPE_ADDITION_ON_MASTER,              MASTER  );

        return wss;
    }
    ```

2.  函数的序列化，需要将函数名注册，并和本地函数绑定，`enum CrossType { ... }` 做的
    就是函数名注册的工作，它里面的每一个标志都对应一个函数，比如 `GEN_LMS__START__QINT64`
    就对应 `static QByteArray genLMS_start( const qint64 &dt = 0 )`，`GEN_LMS__STOP__VOID`
    就对应 `static QByteArray genLMS_stop( )`。

    这三个函数的实现放在这里，以做参考：

    ```cpp
    为了减少输入量，TX_OUT 是一个宏（在通信领域，TX 通常指的是 transmission）
    #define TX_OUT \
        QByteArray tx; \
        QDataStream out( &tx, QIODevice::WriteOnly ); \
        out.setVersion( QDataStream::Qt_4_8 ); \
        out

    QByteArray Moderator::genLMS_start( const qint64 &dt /*= 0 */ )
    {
        TX_OUT << (int)GEN_LMS__START__QINT64 << dt;
        return tx;
    }

    QByteArray Moderator::genLMS_stop( )
    {
        TX_OUT << (int)GEN_LMS__STOP__VOID;
        return tx;
    }

    QByteArray Moderator::genUnit_setUrPose( double x, double y, double z, double rx, double ry, double rz )
    {
        TX_OUT << (int) GEN_UNIT__SET_UR_POSE__DOUBLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
               << x << y << z << rx << ry << rz;
        return tx;
    }
    ```

    其实就是把函数的标志号和参数一一序列化。

3.  dispatch 函数，就是收到反序列化为一个操作，然后如何调用具体的模块：

    ```cpp
    void Moderator::dispatch( QByteArray &msg )
    {
        int flag( -1 );

        QDataStream in( &msg, QIODevice::ReadOnly );
        in.setVersion ( QDataStream::Qt_4_8 );

        while ( !in.atEnd() ) {
            in >> flag;

            if ( false ) {
            }
            ...
            else if ( GEN_LMS__START__QINT64 == flag )
            {
                qint64 ts;
                in >> ts;
                if ( Bundle::activated() && Bundle::whoAmI() == SLAVE ) {
                    Bundle::getInstance()->m_LMSReader->start( ts );
                }
            }
            else if ( GEN_LMS__STOP__VOID == flag )
            {
                if ( Bundle::activated() && Bundle::whoAmI() == SLAVE ) {
                    Bundle::getInstance()->m_LMSReader->stop();
                }
            }
            ...
            else if ( GEN_UNIT__SET_UR_POSE__DOUBLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE == flag )
            {
                double x, y, z, rx, ry, rz;
                in >> x >> y >> z >> rx >> ry >> rz;
                if ( Bundle::activated() && Bundle::whoAmI() == SLAVE ) {
                    // config ur pose
                    if ( Bundle::getInstance() && Bundle::getInstance()->collectionUnit ) {
                        Bundle::getInstance()->setURPose( x, y, z, rx, ry, rz );
                    }
                }
            }
            else
            {
            }
        }
        ```

至此，问题都解决了。

# 6.  总结：收获与不足

一条条说吧。

收获：

-   从大三认识姚老师，我就在尝试使用 Qt，但经过这个项目，Qt 才算真正入了门；
-   CMake 原本也是略知一二；但拿到别人的 CMake 工程，跑起来容易；但自己用 CMake 来组织
    就不简单了，经过这一番项目磨砺，自己对 CMake 和 C++ 的编译链接也有了更多的了解；
-   做了一个大项目，自己的代码量是最大的，负责了几乎所有的传感器，也学到一些相关
    硬件知识、通信知识；
-   认识了长沙团队出色的企业家（科学家）、工程师，认识到知识真的是第一生产力；

不足：

-   基础不牢，写代码的过程中各种磕磕绊绊，比如在类中 static 成员的声明、定义、初始化上，
    就碰到了不少麻烦；
-   基础不牢，没有合理使用类的继承，导致重复代码出现得很多；（但也不能说全怪自己基础不扎实，
    因为项目推进过程中真的很难停下来重构，真的像是给高速上开着的车换轮胎）
-   基础不牢，friend 函数的使用可以大幅避免 public 成员的出现，却没有使用；
-   过度工程，比如设置了过多的标志位，为了程序中没有 magic number，使用了太多的宏定义；
-   花样编码，比如大量使用宏来拼接函数（但这有好有不好，也不算错，只是日后让别人维护起来会有难度）
-   在长沙吃胖了==

---

参考链接：

-   [district10/changsha: 长沙桥康项目组文档](https://github.com/district10/changsha)
-   跨电脑函数调用：[district10/CrossOS: Cross OS Communication](https://github.com/district10/CrossOS)
-   [桥梁模型贴纹理文档](http://tangzx.qiniudn.com/post-0025-doc-bridge-texture.html)
-   [CVRS 参加第二届杭州机器人西湖论坛 - 公告 - 武汉大学计算机视觉与遥感实验室（CVRS Lab）](http://cvrs.whu.edu.cn/index.php?m=content&c=index&a=show&catid=99&id=50)
-   自己之前画的一些架构图，等
    +   架构图：<https://www.processon.com/view/link/56ea64a6e4b010c6fe7d1ead>
    +   系统初始化：<https://www.processon.com/view/link/56ea640be4b00ac2e7a17fb2>
    +   TCP 连接的建立：<https://www.processon.com/view/link/56ea673be4b00ac2e7a1c344>
    +   Wrappers 和 Moderator 的作用：<https://www.processon.com/view/link/56ea6c21e4b010c6fe7db713>
    +   UR 的姿态控制和状态读取：<https://www.processon.com/view/link/56ee186de4b0881f9ac2e009>
    +   UR 状态数据的解析：<https://www.processon.com/view/link/57986275e4b0636f3aa3bf2d>
    +   UR 姿态控制：<https://www.processon.com/view/link/56ee1abfe4b0881f9ac2ea0a>
