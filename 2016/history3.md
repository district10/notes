---
title: 历史笔记 3
...

## 历史笔记 3

原载于 <https://github.com/district10/blog/blob/master/_pages/notes.md>。

---

[舌尖上的忘词&背单词的秘诀](http://mp.weixin.qq.com/s?__biz=MjM5NTExMTk5MA==&mid=409398412&idx=1&sn=a592c82fd0a57b15559832c983033ca8&scene=0#wechat_redirect) -<

:   TOT State (tip of the tongue)

    i. 一外国朋友见到蝌蚪惊呼 look, nigga sperms!
    #. 忘记老鼠怎么说，只好说是 Tom and Jerry 的 Jerry。
    #. 给留学生指路，指着面包车说 "a car like bread"，对方小哥机智的 get 到 "A van car?"
    #. 把拉肚子说成 shit like soup...
    #. 想不起来脚趾怎么说，说成了 foot finger，结果对方笑趴下了
    #. 一个哥们在国外旅游时忘了吸管的英文叫啥，结果说成了sucker...

     refs and see also

    #. [舌尖上的忘词&背单词的秘诀](http://mp.weixin.qq.com/s?__biz=MjM5NTExMTk5MA==&mid=409398412&idx=1&sn=a592c82fd0a57b15559832c983033ca8&scene=0#wechat_redirect)

`dpkg`{.featured .heart} -<

:   ```bash
    sudo dpkg -i DEB_PACKAGE # install
    sudo dpkg -r DEB_PACKAGE # remove
    ```

    ```markdown
    DPKG commands

    There are two actions, they are dpkg-query and dpkg-deb.
    Install a package

    # sudo dpkg -i {package_name}
    # sudo dpkg -i skype-ubuntu-precise_4.2.0.11-1_i386.deb

    Remove a package

    # sudo dpkg -r {package_name}
    # sudo dpkg -r vlc

    Remove a package and its configuration files

    # sudo dpkg -P {package_name}
    # sudo dpkg -P vlc

    List all installed packages.

    You can pipe the command to less (a pager) so you can more easily scroll the content:

    # dpkg -l | less

    Check if the package is installed or not

    # dpkg -l {package_name}
    # dpkg -l vlc

    Check if the package is installed or not, and if it is, launch it:

    # dpkg -l | vlc

    See whether a package is installed or not

    And this will show the location where the package will be installed. Here -S (capital S) to search whether the package was installed or not.

    # sudo dpkg -S {package_name}
    # sudo dpkg -S skype

    Install a *.deb package from a specified location

    Here -R is recursive. (Recursively handle all regular files matching the pattern *.deb found at specified directories and all of its subdirectories).

    # sudo dpkg -R --install {package_location}
    # sudo dpkg -R --install /home/sysadmin/soft

    Show package details

    Here -p (lowercase p) will show the package info:

    # dpkg -p {package_name}
    # dpkg -p apache2

    View the content of a package

    Use -c (lowercase c) to show the content:

    # sudo dpkg -c {package_name}
    # sudo dpkg -c skype-ubuntu-precise_4.2.0.11-1_i386.deb

    Extract the *.deb package file

    Use -x (lowercase x) to extract:

    # dpkg -x {package_name} {location_were_to_extract}
    # dpkg -x libqt4-phonon_4.6.3-4+squeeze1_i386.deb /home/sysadmin/

    Extract and display the filenames contained in a package

    Use -X (uppercase X) to display the content with extraction.

    # dpkg -X {package_name} {location_were_to_extract}
    # dpkg -X libqt4-phonon_4.6.3-4+squeeze1_i386.deb /home/sysadmin/

    Display information about a package

    Here -I stands for information:

    # dpkg -I {package_name}
    # dpkg -I libqt4-phonon_4.6.3-4+squeeze1_i386.deb

    Reconfigure an already installed package

    dpkg-reconfigure reconfigures packages after they already have been installed. Pass it the name(s) of a package or packages to reconfigure. It will ask configuration questions, much like when the package was first installed.

    # dpkg-reconfigure postfix

    This will reconfigure postfix the same way as when you installed it for the first time.

    Need to know more about dpkg commands? Have a look at the manual page:

    # man dpkg
    ```

    If you use an RPM-based distro, you may be able to install this deb using alien, or try

    `ar p $DEB data.tar.gz | sudo tar xvz --strip-components 2 -C /usr/local`{.bash}

    where `$DEB` is the path to the downloaded deb.

travis -<

:   -   `sed -i "s/AccessKey/$QAK/g" qiniu_sync`{.bash}
    -   `sed -i "s/SecretKey/$QSK/g" qiniu_sync`{.bash}

    持续集成（ Continuous Integration）或者CI，是一个已经在软件开发中已经流行好一阵
    子的东西了，但是最近逐渐在运维界中获得了越来越多的拥趸。CI提出来是为了解决多个
    开发者在同一个代码库开发的时候造成的集成问题。基本上，两个开发者在同一样的代码
    上进行开发就会产生冲突，并且只有在之后很久才会发现这些冲突。

    The complete build lifecycle, including three optional deployment steps and
    after checking out the git repository and changing to the repository directory,
    is:

    -   before_install
    -   install
    -   before_script
    -   script
    -   after_success or after_failure
    -   OPTIONAL before_deploy
    -   OPTIONAL deploy
    -   OPTIONAL after_deploy
    -   after_script

Configs 32-bit x86 -<

:   Deps

      - visual studio 2010
      - qt4.x
      - boost
      - liblas

    ENV Variables

      - `LIBLAS_ROOT` ==> `D:\Liblas (bin, include, lib)`
      - `BOOST_INCLUDEDIR` ==> include
      - `BOOST_LIBDIR` ==> lib

    You then need to set the following two environment variables to point
    respectively to the path of the libraries and the headers

      - `BOOST_LIBRARYDIR=C:\dev\libboost_1_54_0\lib32-msvc-10.0`
      - `BOOST_INCLUDEDIR=C:\dev\libboost_1_54_0`

    You also need to add in your `PATH` environment variable, the path to the
    Boost dll's:

      - `C:\dev\libboost_1_54_0\lib32-msvc-10.0`

    With other versions of Tom installers, the path to libraries may end with
    lib32 instead of lib32-msvc-10.0.

    I selected `C:\Qt\4.8.2` so `QTDIR` is set to `C:\Qt\4.8.2`

    I add `C:\Qt\4.8.2\bin` to my `PATH`

    `C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\bin`
    :   `cvtres.exe` ==> `cvtres1.exe`

PDB what for? For Debugging. -<

:   How to in Visual Studio

      - `Tools->Options->Debugging->Symbols`
      - and select checkbox "Microsoft Symbol Servers"

    Load PDB, `F5` ==> `Control + F5`

    link err, failure to convert to COFF
    Incremental Linking: `Yes` ==> `No`

    refs and see also

    :   #. <http://stackoverflow.com/questions/12954821/cannot-find-or-open-the-pdb-file-in-visual-studio-c-2010/12954908#12954908>
        #. <http://fisnikhasani.com/error-lnk1123-failure-during-conversion-to-coff-file-invalid-or-corrupt/>
        #. <http://blog.csdn.net/wlanye/article/details/7561559>

SVN -<

:   ```bash
    # 1
    svn update
    svn status
    svn diff
    svn commit -m 'commit message'

    # 2
    svn merge ?
    svn revert ?
    svn resolve ?
    # 3
    svn log
    ```

VS Extensions -<

:   - VsVim
    - tssts

OpenGL: <http://www.opengl.org/resources/libraries/glut/glutdlls37beta.zip> -<

:   - glut.h ==> `C:\Program Files (x86)\Microsoft SDKs\Windows\v7.0A\Include\gl`
    - glut.lib glut32.lib ==> `C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\lib`
    - glut.dll glut32.dll ==> `C:\Windows\System32`

`CMakeLists.txt Snippets`{.heart} -<

:   ```cmake
    set_target_properties( ${PROJECT_NAME} PROPERTIES VS_KEYWORD Qt4VSv1.0 )

    set( CMAKE_COLOR_MAKEFILE ON )
    set_property( GLOBAL PROPERTY USE_FOLDERS ON )

    # Set the include directories
    include_directories( ${CMAKE_SOURCE_DIR} )
    include_directories( ${CMAKE_SOURCE_DIR}/src )
    include_directories( ${CMAKE_CURRENT_BINARY_DIR} )

    link_directories( ${CMAKE_BINARY_DIR} )

    # Setup output directories
    set( LIBRARY_OUTPUT_PATH
        ${PROJECT_BINARY_DIR}/bin
        CACHE
        PATH
        "Single directory for all libraries" )

    set( EXECUTABLE_OUTPUT_PATH
        ${PROJECT_BINARY_DIR}/bin
        CACHE
        PATH
        "Single directory for all executables" )

    add_definitions( -DUNICODE )
    add_definitions( -D_CRT_SECURE_NO_WARNINGS )
    add_definitions( -Wall )

    # large address aware option setting
    if( ${MINGW} )
        set( LARGEADDRESSAWARE "--large-address-aware" )
    else(${MINGW})
        if( WIN32 )
            set( LARGEADDRESSAWARE "/LARGEADDRESSAWARE" )
        else( WIN32 )
            set( LARGEADDRESSAWARE " " )
        endif( WIN32 )
    endif( ${MINGW} )

    # this command finds Qt4 libraries and sets all required variables
    # note that it's Qt4, not QT4 or qt4
    find_package( Qt4 REQUIRED )

    set( QT_USE_QTMAIN TRUE )
    set( QT_USE_QTOPENGL TRUE )
    set( QT_USE_QTXML TRUE )

    # (QT_USE_FILE is a variable defined by FIND_PACKAGE( Qt4 ) that contains a
    # path to CMake script)
    include( ${QT_USE_FILE} )

    set( RSCS img.qrc )

    qt4_wrap_cpp( MOC_SRCS ${HDRS_FILES} )
    qt4_add_resources( RSC_SRCS ${RSCS} )
    qt4_wrap_ui( UI_HDRS ${UI_FILES} )

    set( FILES_TO_TRANSLATE ${FILES_TO_TRANSLATE}
         ${SRCS_FILES} ${UI_FILES} ${HDRS_FILES} PARENT_SCOPE )

    source_group( "UI Files" FILES ${UI_FILES} )
    source_group( "Generated Files" FILES ${MOC_SRCS} ${UI_HDRS} ${RSC_SRCS} )
    source_group( "Class Diagrams" FILES ${CD_FILES} )
    source_group( "Resources" FILES ${RSCS} )

    add_executable( ${PROJECT_NAME}
        ${SRCS_FILES} ${UI_FILES} ${HDRS_FILES}
        ${MOC_SRCS} ${UI_HDRS} ${RSC_SRCS} ${CD_FILES} )
    set_source_files_properties( ${CD_FILES} PROPERTIES HEADER_FILE_ONLY TRUE )
    target_link_libraries( ${PROJECT_NAME}
        ${QT_LIBRARIES} ${OPENGL_LIBRARY} ${GLUT_LIBRARIES} ${OpenCV_LIBS} )
    set_target_properties( ${PROJECT_NAME} PROPERTIES
                           LINK_FLAGS ${LARGEADDRESSAWARE} )
    set_target_properties( ${PROJECT_NAME} PROPERTIES
                           VS_KEYWORD Qt4VSv1.0 )

    add_executable( example WIN32
                    main.cpp mainwindow.cpp ${example_MOCS} ) # WIN32 needed

    install( TARGETS ${PROJECT_NAME} DESTINATION bin )

    # this command finds OpenCV libraries and sets all required variables
    find_package( OpenCV REQUIRED )
    include_directories( ${OPENCV_INCLUDE_DIR} )
    include_directories( ${CMAKE_BINARY_DIR} )

    find_package( OpenGL REQUIRED )
    file( GLOB_RECURSE HDRS_FILES *.h *.hpp )
    file( GLOB_RECURSE SRCS_FILES *.cpp )
    file( GLOB_RECURSE UI_FILES *.ui )
    file( GLOB CD_FILES *.cd )

    add_subdirectory( src )

    set (CMAKE_BUILD_TYPE Release) # cmake -DCMAKE_BUILD_TYPE=Debug .
    ```

    -   `uic`{.bash} ==> mainwindow.ui --> mainwindow.h
    -   `moc`{.bash} ==> mainwindow.h  --> mainwindow.cpp
    -   `g++`{.bash} ==>
    -   some bash

        ```bash
        uic mainwindow.ui  -o  ui_mainwindow.h
        moc mainwindow.h   -o moc_mainwindow.cpp  ==> Q_OBJECT
        rcc main.qrc       -o qrc_main.cpp
        g++ main.cpp mainwindow.cpp  moc_mainwindow.cpp \
        -IC:\Qt\4.8.4\include \
        -LC:\Qt\4.8.4\lib \
        -lQtCore4 \
        -lQtGui4 \
        -o main
        ```

    ```cmake
    # IF-ELSE-ENDIF
    if (exp)
    ...
    else (exp)
    ...
    endif (exp)

    # FOREACH
    foreach (list)
    ...
    endforeach (list)

    # WHILE
    while (cond)
    ...
    endwhile (cond)
    ```

    Headers & Libs

    :   - headers ==> **`include_directories`** --> PATH & LD_LIBRARY_PATH
        - libraries ==> **`find_library`**(good) or **`link_directories`**(bad)
        - include: `*.h` ==> `-I` in gcc
        - link dir: `{*.so/*.dll/*.lib/*.dylib/...}` ==> `-L` in gcc
        - link file: `*.so/*.dll/*.lib/*.dylib/...` ==> `-l` in gcc

    Use `FindXXXX.cmake` & set `${CMAKE_MODULE_PATH}` to

    ```cmake
    find_package( Qt4 REQUIRED ) # think of it as an #include
    ```

    Or create your own finders

    ```cmake
    get_filename_component( ... )

    # lib files
    find_library( ... ) # CMAKE_LIBRARY_PATH

    # header files
    find_file( ... )    # CMAKE_INCLUDE_PATH

    # MISC
    find_program( ... )
    try_compile( ... )
    try_run( ... )
    ```

    PkgConfig

    :   - `UsePkgConfig.cmake`
        - `FindPkgConfig.cmake`

    ---

    Qt with CMake

    ```cmake
    project( pfrac )
    find_package( QT4 REQUIRED )
    include( ${QT_USE_FILE} )
    SET( pfrac_SRCS main.cpp client.h client.cpp )
    SET( pfrac_MOC_HEADERS client.h )
    qt4_add_resoURCES( pfrac_SRCS
         ${PROJECT_SOURCE_DIR}/pfrac.qrc )
    qt4_wrap_cpp( pfrac_MOC_SRCS
         ${pfrac_MOC_HEADERS} )
    add_executable( pfrac ${pfrac_SRCS} ${pfrac_MOC_SRCS} )
    target_link_libraries( pfrac ${QT_LIBRARIES} )
    ```

    Congfigure file

    ```cmake
    set( VALUE 23 )
    configure_file( conf.h.in conf.h )
    check_include_file( unistd.h HAVE_UNISTD )
    ```

    `conf.h.in`:

    :   ```cmake
        #cmakedefine VAL
        #define KEY @VALUE@
        ```

    `conf.h`:

    :   ```c
        #define VAL
        #define KEY 23
        ```

    `*.h`:

    :   ```c
        #ifdef VAL
            int keys[KEY];
        #endif

        #include "conf.h"
        #ifdef HAVE_UNISTD
            // ...
        #else
            // ...
        #endif
        ```

    MISC

    ```cmake
    # MESSAGE
    message( [SEND_ERROR | STATUS | FATAL_ERROR] "message to display" ... )

    # LINK
    target_link_libraries( wakeup RELEASE ${SRC} )
    target_link_libraries( wakeupd DEBUG ${SRC} )

    # INSTALL
    install( TARGETS ... RUNTIME DESTINATION bin LIBRARY DESTINATION lib )

    # MACRO (text substitution)
    macro (INSERT_INTO_MAP _KEY _VALUE)
      set ("MyMap_${_KEY}" "${_VALUE}")
    endmacro (INSERT_INTO_MAP)

    set( MyKey "foo" )
    set( MyValue "bar" )
    insert_into_map( "${MyKey}" "${MyValue}" )

    # FUNCTION
    ...

    # EXECUTE_PROCESS
    execute_process( )

    # TARGET
    add_custom_targets

    # CACHE
    set( num 23 CACHE ) # use cached 'num' if possible, and save to it
    set( num 23 CACHE FORCE ) # force overwrite Cache.

    # POLICY (for Back/Forward?compatibility)
    ...

    # Properties
    cmake_minimum_required( ... )
    option( ... )
    get_cmake_property( ... )
    get_target_property( ... )
    set_target_property( ... )
    set_source_files_properties( ... )

    # Useful Varibles
    cmake_binary_dir( build  dir )    CMAKE_CURRENT_BINARY_DIR
    cmake_source_dir( source dir )    CMAKE_CURRENT_SOURCE_DIR

    PROJECT_BINARY_DIR   EXECUTABLE_OUTPUT_PATH
    PROJECT_SOURCE_DIR   LIBRARY_OUTPUT_PATH

    $ENV{name}
    ```

    ---

    MISC

    #. `*.ilk` => **incremental linker file**
    #. `LD_LIBRARY_PATH` ==> **Link Dynamically Lib Path**

    - CPack (for installer packaging)
    - CTest & CDash (for code testing & testing result displaying)

    ---

    - [realforce-to-hhkb2-pro/AutoHotkey.ahk at master ·
      guillaume-nargeot/realforce-to-hhkb2-pro](https://github.com/guillaume-nargeot/realforce-to-hhkb2-pro/blob/master/AutoHotkey.ahk)
    - [AutoHotKeyの設定](https://gist.github.com/kawaken/7652588)

pdf2img -<

:   ```bash
    PDF=$1
    IMG=${PDF%.*}

    convert              \
        -verbose         \
        -density 150     \
        -trim            \
        $PDF             \
        -quality 100     \
        -sharpen 0x1.0   \
        ${IMG}.jpg
    ```

    see also:

    ```bash
    # ppt -> pdf
    libreoffice --headless --invisible --convert-to pdf *.ppt

    # file -> pdf
    unoconv -f pdf file

    # crop pdf
    pdfcrop file.pdf cropped.pdf
    ```

    refs and see also

    -   [Note: 批量转换PPT（bash) - gnat - 博客园](http://www.cnblogs.com/gnat-tang/p/3536745.html)
    -   [Note: pdfcrop - gnat - 博客园](http://www.cnblogs.com/gnat-tang/p/3536750.html)
    -   [Filter Options - Apache OpenOffice Wiki](https://wiki.openoffice.org/wiki/Documentation/DevGuide/Spreadsheets/Filter_Options)

    `A.pdf -> A-{0,1}.jpg`

    ---

    后来，我建了一个 repo：[district10/pdf2img: Convert PDF file to Images, via ImageMagick.](https://github.com/district10/pdf2img)。

    再后来，我 [用 xpdf 处理 PDF · Issue #10 · district10/blog](https://github.com/district10/blog/issues/10)。

image magick -<

:   `raw2img`{.heart}

    :   ```bash
        #!/bin/bash

        echo start time: `date`

        for i in *.raw;
        do
            convert -size 5120x3840 -depth 8 gray:$i jpg/`basename $i .raw`.jpg
            mv $i raw/
        done

        echo end time: `date`
        ```

    imagemagick:

    :   ```bash
        !/bin/bash

        for i in rotate shear roll hue saturation brightness gamma spiff dull \
                 grayscale quantize despeckle reduceNoise addNoise sharpen blur \
                 threshold edgedetect spread shade raise segment solarize swirl \
                 implode wave oilpaint charcoal jpeg;
        do
            convert main.jpg -preview ${i} -gravity south -box "#00000020" \
                -pointsize 36 -fill "#887ddd" -draw "text 0,0 '${i}'" out.${i}.jpg
        done

        montage out.*.jpg -tile 1x$(ls out.*.jpg | wc -l) -geometry 766x936 out.main.jpg
        ```

        ```bash
        var fs = require('fs');
        var gm = require('gm');

        // resize and remove EXIF profile data
        gm('img/600x300.jpg')
        .resize(240, 240)
        .noProfile()
        .write('resized.png', function (err) {
          if (!err) { console.log('done'); }
        });
        ```

`curl`{.heart} -<

:   ```bash
    $ curl -X POST -F file=@./package.json localhost:8090/gridfs
    {
      "method": "POST",
      "url": "/gridfs",
      "header": {
        "user-agent": "curl/7.35.0",
        "host": "localhost:8090",
        "accept": "*/*",
        "content-length": "1022",
        "expect": "100-continue",
        "content-type": "multipart/form-data; boundary=------------------------72fd612aa595d9d6"
      }
    }
    ```

    ```bash
    $ curl -X POST -d @./package.json localhost:8090/gridfs
    {
      "method": "POST",
      "url": "/gridfs",
      "header": {
        "user-agent": "curl/7.35.0",
        "host": "localhost:8090",
        "accept": "*/*",
        "content-length": "783",
        "content-type": "application/x-www-form-urlencoded"
      }
    }

    $ curl -X POST \
        -F file=@./package.json \
        -F file=@./upload.js localhost:8000/upload
    ```

awk, word frequency counter -<

:   ```bash
    # wordfreq.awk --- print list of word frequencies

    {
        $0 = tolower($0)    # remove case distinctions
        # remove punctuation
        gsub(/[^[:alnum:][:blank:]]/, " ", $0)
        for (i = 1; i <= NF; i++)
            freq[$i]++
    }

    END {
        for (word in freq)
            printf "%s\t%d\n", word, freq[word]
    }
    ```

    ```bash
    #!/bin/bash

    FILE=$1

    sed -e 's/\([A-Z]\)/ \L\1/g' $FILE | \
    gawk -f wcf.awk | sort -k 2nr
    ```

read -<

:   ```bash
    #/bin/bash

    ADDTO="2015.md"
    DATE=`date +%Y-%m-%d`

    echo adding $1
    echo \* \[ \] \[$DATE\] $1 >> $ADDTO
    echo ===================================
    echo Please read, and read with pleasure.

    git add -A && git commit -m `date +%s` && git pull && git push
    ```

i3 window manager -<

:   By pressing `$mod+Enter`, a new terminal will be opened. It will fill the
    whole space available on your screen.

    Therefore, `$mod+j` is left, `$mod+k` is down, `$mod+l` is up and `$mod+;`
    is right. So, to switch between the terminals, use `$mod+k` or `$mod+l.` Of
    course, you can also use the arrow keys.

    To split a window vertically, press `$mod+v` before you create the new
    window. To split it horizontally, press `$mod+h`.

    To switch modes, press `$mod+e` for splith/splitv (it toggles), `$mod+s`
    for stacking and `$mod+w` for tabbed.

    To display a window in fullscreen mode or to go out of fullscreen mode
    again, press `$mod+f`.

    If an application does not provide a mechanism for closing (most
    applications provide a menu, the escape key or a shortcut like
    <kbd>Control+w</kbd> to close), you can press $mod+Shift+q to kill a
    window. For applications which support the WM_DELETE protocol, this will
    correctly close the application (saving any modifications or doing other
    cleanup). If the application doesn’t support the WM_DELETE protocol your X
    server will kill the window and the behaviour depends on the application.

    `$mod+num,` goto workspace,

    `$mod+shift+num,` move window to workspace.

    To restart i3 in place (and thus get into a clean state if there is a bug,
    or to upgrade to a newer version of i3) you can use $mod+Shift+r.

    To cleanly exit i3 without killing your X server, you can use
    `$mod+Shift+e`.  By default, a dialog will ask you to confirm if you really
    want to quit.

    You can toggle floating mode for a window by pressing `$mod+Shift+Space`.
    By dragging the window’s titlebar with your mouse you can move the window
    around.  By grabbing the borders and moving them you can resize the window.
    You can also do that by using the `[floating_modifier]`. Another way to
    resize floating windows using the mouse is to right-click on the titlebar
    and drag.

*/character-classes* -<

:   | ...    | ...     | ...     | ...                                           |
    | :---:  | :---:   | :---:   | :---:                                         |
    |  `/\i` |  `\i`   |   `\i`  |   identifier character (see 'isident' option) |
    |  `/\I` |  `\I`   |   `\I`  |   like `\i`, but excluding digits |
    |  `/\k` |  `\k`   |   `\k`  |   keyword character (see 'iskeyword' option) |
    |  `/\K` |  `\K`   |   `\K`  |   like `\k`, but excluding digits |
    |  `/\f` |  `\f`   |   `\f`  |   file name character (see 'isfname' option) |
    |  `/\F` |  `\F`   |   `\F`  |   like `\f`, but excluding digits |
    |  `/\p` |  `\p`   |   `\p`  |   printable character (see 'isprint' option) |
    |  `/\P` |  `\P`   |   `\P`  |   like `\p`, but excluding digits |
    |  `/\s` |  `\s`   |   `\s`  |   whitespace character: <Space> and <Tab> |
    |  `/\S` |  `\S`   |   `\S`  |   non-whitespace character; opposite of \s |
    |  `/\d` |  `\d`   |   `\d`  |   digit:              `[0-9]` |
    |  `/\D` |  `\D`   |   `\D`  |   non-digit:          `[^0-9]` |
    |  `/\x` |  `\x`   |   `\x`  |   hex digit:          `[0-9A-Fa-f]` |
    |  `/\X` |  `\X`   |   `\X`  |   non-hex digit:          `[^0-9A-Fa-f]` |
    |  `/\o` |  `\o`   |   `\o`  |   octal digit:            `[0-7]` |
    |  `/\O` |  `\O`   |   `\O`  |   non-octal digit:        `[^0-7]` |
    |  `/\w` |  `\w`   |   `\w`  |   word character:         `[0-9A-Za-z_]` |
    |  `/\W` |  `\W`   |   `\W`  |   non-word character:     `[^0-9A-Za-z_]` |
    |  `/\h` |  `\h`   |   `\h`  |   head of word character:     `[A-Za-z_]` |
    |  `/\H` |  `\H`   |   `\H`  |   non-head of word character: `[^A-Za-z_]` |
    |  `/\a` |  `\a`   |   `\a`  |   alphabetic character:       `[A-Za-z]` |
    |  `/\A` |  `\A`   |   `\A`  |   non-alphabetic character:   `[^A-Za-z]` |
    |  `/\l` |  `\l`   |   `\l`  |   lowercase character:        `[a-z]` |
    |  `/\L` |  `\L`   |   `\L`  |   non-lowercase character:    `[^a-z]` |
    |  `/\u` |  `\u`   |   `\u`  |   uppercase character:        `[A-Z]` |
    |  `/\U` |  `\U`   |   `\U`  |   non-uppercase character     `[^A-Z]` |
    |  `/\_` |  `\_x`  |   `\_x` |   where x is any of the characters above: character |

    see more at `:h regexp`

    -   `%s/pattern//gn`, count of matches
    -   `%s/pattern//n`, count of lines with matches
    -   `%s///n`, count of current word
    -   `:10,50s/pattern//gn`, line 10 to line 50
    -   `:s/\[\d\{,3\}\]//g`, delete ``-like ref links in wikipedia
    -   `:%s/^\(.*\)(/\L\1/`, cmake, lowercase commands

`opetators`{.heart} -<

:   ```cpp
    bool operator == (const ref_ptr& rp) const { return (_ptr==rp._ptr); }
    bool operator == (const T* ptr) const { return (_ptr==ptr); }
    friend bool operator == (const T* ptr, const ref_ptr& rp) { return (ptr==rp._ptr); }

    bool operator != (const ref_ptr& rp) const { return (_ptr!=rp._ptr); }
    bool operator != (const T* ptr) const { return (_ptr!=ptr); }
    friend bool operator != (const T* ptr, const ref_ptr& rp) { return (ptr!=rp._ptr); }

    bool operator < (const ref_ptr& rp) const { return (_ptr<rp._ptr); }

    // follows is an implmentation of the "safe bool idiom", details can be found at:
    //   http://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Safe_bool
    //   http://lists.boost.org/Archives/boost/2003/09/52856.php

    private:
    typedef T* ref_ptr::*unspecified_bool_type;

    public:
    // safe bool conversion
    operator unspecified_bool_type() const { return valid()? &ref_ptr::_ptr : 0; }
    #endif

    T& operator*() const { return *_ptr; }
    T* operator->() const { return _ptr; }
    T* get() const { return _ptr; }

    bool operator!() const   { return _ptr==0; } // not required
    bool valid() const       { return _ptr!=0; }

    /** release the pointer from ownership by this ref_ptr<>, decrementing the
     * objects refencedCount() via unref_nodelete() to prevent the Object
     * object from being deleted even if the reference count goes to zero.  Use
     * when using a local ref_ptr<> to an Object that you want to return from a
     * function/method via a C pointer, whilst preventing the normal ref_ptr<>
     * destructor from cleaning up the object. When using release() you are
     * implicitly expecting other code to take over management of the object,
     * otherwise a memory leak will result. */
    T* release() { T* tmp=_ptr; if (_ptr) _ptr->unref_nodelete(); _ptr=0; return tmp; }

    void swap(ref_ptr& rp) { T* tmp=_ptr; _ptr=rp._ptr; rp._ptr=tmp; }
    ```

**`If ... Else ... Paradigm`{.heart}** -<

:   [Cognitive Bias](http://en.wikipedia.org/wiki/List_of_cognitive_biases)

    -----------------------------------------------------------------------------
    **Name**                        **Description**
    ----------------------          ---------------------------------------------
    Ambiguity effect                The tendency to avoid options for which missing
                                    information makes the probability seem "unknown".

    Anchoring or focalism           The tendency to rely too heavily, or "anchor",
                                    on one trait or piece of information when
                                    making decisions (usually the first piece of
                                    information that we acquire on that subject)

    Anthropomorphism                The tendency to characterize animals, objects,
                                    and abstract concepts as possessing human-like
                                    traits, emotions, and intentions.

    Attentional bias                The tendency of our perception to be affected by
                                    our recurring thoughts.

    Automation bias                 The tendency to excessively depend on automated
                                    systems which can lead to erroneous automated
                                    information overriding correct decisions.

    Availability heuristic          The tendency to overestimate the likelihood of
                                    events with greater "availability" in memory,
                                    which can be influenced by how recent the
                                    memories are or how unusual or emotionally
                                    charged they may be.

    Availability cascade            A self-reinforcing process in which a
                                    collective belief gains more and more
                                    plausibility through its increasing repetition
                                    in public discourse (or "repeat something long
                                    enough and it will become true").

    Backfire effect                 When people react to disconfirming evidence by
                                    strengthening their beliefs.

    Bandwagon effect                The tendency to do (or believe) things because
                                    many other people do (or believe) the same.
                                    Related to groupthink and herd behavior.

    Base rate fallacy or            The tendency to ignore base rate information
    Base rate neglect               (generic, general information) and focus on
                                    specific information (information only
                                    pertaining to a certain case).

    Belief bias                     An effect where someone's evaluation of the
                                    logical strength of an argument is biased by
                                    the believability of the conclusion.

    Bias blind spot                 The tendency to see oneself as less biased than
                                    other people, or to be able to identify more
                                    cognitive biases in others than in oneself.

    Cheerleader effect              The tendency for people to appear more
                                    attractive in a group than in isolation.

    Choice-supportive bias          The tendency to remember one's choices as
                                    better than they actually were.

    Clustering illusion             The tendency to overestimate the importance of
                                    small runs, streaks, or clusters in large
                                    samples of random data (that is, seeing phantom
                                    patterns).

    Confirmation bias               The tendency to search for, interpret, focus on
                                    and remember information in a way that confirms
                                    one's preconceptions.

    Congruence bias                 The tendency to test hypotheses exclusively
                                    through direct testing, instead of testing
                                    possible alternative hypotheses.

    Conjunction fallacy             The tendency to assume that specific conditions
                                    are more probable than general ones.

    Conservatism (Bayesian)         The tendency to revise one's belief
                                    insufficiently when presented with new evidence.

    Contrast effect                 The enhancement or reduction of a certain
                                    perception's stimuli when compared with a
                                    recently observed, contrasting object.

    Curse of knowledge              When better-informed people find it extremely
                                    difficult to think about problems from the
                                    perspective of lesser-informed people.

    Declinism                       The belief that a society or institution is
                                    tending towards decline. Particularly, it is
                                    the predisposition to view the past favourably
                                    and future negatively.

    Decoy effect                    Preferences for either option A or B changes in
                                    favor of option B when option C is presented,
                                    which is similar to option B but in no way
                                    better.

    Denomination effect             The tendency to spend more money when it is
                                    denominated in small amounts (e.g., coins)
                                    rather than large amounts (e.g., bills).

    Disposition effect              The tendency to sell an asset that has
                                    accumulated in value and resist selling an
                                    asset that has declined in value.

    Distinction bias                The tendency to view two options as more
                                    dissimilar when evaluating them simultaneously
                                    than when evaluating them separately.

    Dunning-Kruger effect           The tendency for unskilled individuals to
                                    overestimate their own ability and the tendency
                                    for experts to underestimate their own ability.

    Duration neglect                The neglect of the duration of an episode in
                                    determining its value

    Empathy gap                     The tendency to underestimate the influence or
                                    strength of feelings, in either oneself or others.

    Endowment effect                The tendency for people to demand much more to
                                    give up an object than they would be willing to
                                    pay to acquire it.

    Essentialism                    Categorizing people and things according to
                                    their essential nature, in spite of
                                    variations.[dubious – discuss]

    Exaggerated expectation         Based on the estimates, real-world evidence
                                    turns out to be less extreme than our
                                    expectations (conditionally inverse of the
                                    conservatism bias).

    Experimenter's or               The tendency for experimenters to believe,
    expectation bias                certify, and publish data that agree with their
                                    expectations for the outcome of an experiment,
                                    and to disbelieve, discard, or downgrade the
                                    corresponding weightings for data that appear
                                    to conflict with those expectations.

    Focusing effect                 The tendency to place too much importance on
                                    one aspect of an event.

    Forer effect or                 The observation that individuals will give high
    Barnum effect                   accuracy ratings to descriptions of their
                                    personality that supposedly are tailored
                                    specifically for them, but are in fact vague
                                    and general enough to apply to a wide range of
                                    people. This effect can provide a partial
                                    explanation for the widespread acceptance of
                                    some beliefs and practices, such as astrology,
                                    fortune telling, graphology, and some types of
                                    personality tests.

    Framing effect                  Drawing different conclusions from the same
                                    information, depending on how that information
                                    is presented

    Frequency illusion              The illusion in which a word, a name, or other
                                    thing that has recently come to one's attention
                                    suddenly seems to appear with improbable
                                    frequency shortly afterwards (not to be
                                    confused with the recency illusion or selection
                                    bias). Colloquially, this illusion is known as
                                    the Baader-Meinhof Phenomenon.

    Functional fixedness            Limits a person to using an object only in the
                                    way it is traditionally used.

    Gambler's fallacy               The tendency to think that future probabilities
                                    are altered by past events, when in reality
                                    they are unchanged. The fallacy arises from an
                                    erroneous conceptualization of the law of large
                                    numbers. For example, "I've flipped heads with
                                    this coin five times consecutively, so the
                                    chance of tails coming out on the sixth flip is
                                    much greater than heads."

    Hard–easy effect                Based on a specific level of task difficulty,
                                    the confidence in judgments is too conservative
                                    and not extreme enough

    Hindsight bias                  Sometimes called the "I-knew-it-all-along"
                                    effect, the tendency to see past events as
                                    being predictable at the time those events
                                    happened.

    Hot-hand fallacy                The "hot-hand fallacy" (also known as the "hot
                                    hand phenomenon" or "hot hand") is the
                                    fallacious belief that a person who has
                                    experienced success with a random event has a
                                    greater chance of further success in additional
                                    attempts.

    Hyperbolic discounting          Discounting is the tendency for people to have
                                    a stronger preference for more immediate
                                    payoffs relative to later payoffs.  Hyperbolic
                                    discounting leads to choices that are
                                    inconsistent over time –people make choices
                                    today that their future selves would prefer not
                                    to have made, despite using the same reasoning.
                                    Also known as current moment bias,
                                    present-bias, and related to Dynamic
                                    inconsistency.

    Identifiable victim effect      The tendency to respond more strongly to a
                                    single identified person at risk than to a
                                    large group of people at risk.

    Illusion of control             The tendency to overestimate one's degree of
                                    influence over other external events.

    Illusion of validity            Belief that furtherly acquired information
                                    generates additional relevant data for
                                    predictions, even when it evidently does not.

    Illusory correlation            Inaccurately perceiving a relationship between
                                    two unrelated events.

    Impact bias                     The tendency to overestimate the length or the
                                    intensity of the impact of future feeling states.

    Information bias                The tendency to seek information even when it
                                    cannot affect action.

    Insensitivity to                The tendency to under-expect variation in small
    sample size                     samples.

    Irrational escalation           The phenomenon where people justify increased
                                    investment in a decision, based on the
                                    cumulative prior investment, despite new
                                    evidence suggesting that the decision was
                                    probably wrong. Also known as the sunk cost
                                    fallacy.

    Less-is-better effect           The tendency to prefer a smaller set to a
                                    larger set judged separately, but not jointly.

    Loss aversion                   The disutility of giving up an object is
                                    greater than the utility associated with
                                    acquiring it. (see also Sunk cost effects and
                                    endowment effect).

    Mere exposure effect            The tendency to express undue liking for things
                                    merely because of familiarity with them.

    Money illusion                  The tendency to concentrate on the nominal
                                    value (face value) of money rather than its
                                    value in terms of purchasing power.

    Moral credential effect         The tendency of a track record of non-prejudice
                                    to increase subsequent prejudice.

    Negativity effect               The tendency of people, when evaluating the
                                    causes of the behaviors of a person they
                                    dislike, to attribute their positive behaviors
                                    to the environment and their negative behaviors
                                    to the person's inherent nature.

    Negativity bias                 Psychological phenomenon by which humans have a
                                    greater recall of unpleasant memories compared
                                    with positive memories.

    Neglect of probability          The tendency to completely disregard
                                    probability when making a decision under
                                    uncertainty.

    Normalcy bias                   The refusal to plan for, or react to, a
                                    disaster which has never happened before.

    Not invented here               Aversion to contact with or use of products,
                                    research, standards, or knowledge developed
                                    outside a group. Related to IKEA effect.

    Observer-expectancy effect      When a researcher expects a given result and
                                    therefore unconsciously manipulates an
                                    experiment or misinterprets data in order to
                                    find it (see also subject-expectancy effect).

    Omission bias                   The tendency to judge harmful actions as worse,
                                    or less moral, than equally harmful omissions (inactions).

    Optimism bias                   The tendency to be over-optimistic,
                                    overestimating favorable and pleasing outcomes
                                    (see also wishful thinking, valence effect,
                                    positive outcome bias).

    Ostrich effect                  Ignoring an obvious (negative) situation.

    Outcome bias                    The tendency to judge a decision by its
                                    eventual outcome instead of based on the
                                    quality of the decision at the time it was
                                    made.

    Overconfidence effect           Excessive confidence in one's own answers to
                                    questions. For example, for certain types of
                                    questions, answers that people rate as "99%
                                    certain" turn out to be wrong 40% of the time.

    Pareidolia                      A vague and random stimulus (often an image or
                                    sound) is perceived as significant, e.g.,
                                    seeing images of animals or faces in clouds,
                                    the man in the moon, and hearing non-existent
                                    hidden messages on records played in reverse.

    Pessimism bias                  The tendency for some people, especially those
                                    suffering from depression, to overestimate the
                                    likelihood of negative things happening to
                                    them.

    Planning fallacy                The tendency to underestimate task-completion
                                    times.

    Post-purchase                   The tendency to persuade oneself through
    rationalization                 rational argument that a purchase was good value.

    Pro-innovation bias             The tendency to have an excessive optimism
                                    towards an invention or innovation's usefulness
                                    throughout society, while often failing to
                                    identify its limitations and weaknesses.

    Pseudocertainty effect          The tendency to make risk-averse choices if the
                                    expected outcome is positive, but make
                                    risk-seeking choices to avoid negative
                                    outcomes.

    Reactance                       The urge to do the opposite of what someone
                                    wants you to do out of a need to resist a
                                    perceived attempt to constrain your freedom of
                                    choice (see also Reverse psychology).

    Reactive devaluation            Devaluing proposals only because they
                                    purportedly originated with an adversary.

    Recency illusion                The illusion that a word or language usage is a
                                    recent innovation when it is in fact
                                    long-established (see also frequency illusion).

    Regressive bias                 A certain state of mind wherein high values and
                                    high likelihoods are overestimated while low
                                    values and low likelihoods are
                                    underestimated.

    Restraint bias                  The tendency to overestimate one's ability to
                                    show restraint in the face of temptation.
                                    Rhyme as reason effect  | Rhyming statements
                                    are perceived as more truthful. A famous
                                    example being used in the O.J Simpson trial
                                    with the defense's use of the phrase "If the
                                    gloves don't fit, then you must acquit."

    Risk compensation /             The tendency to take greater risks when
    Peltzman effect                 perceived safety increases.

    Selective perception            The tendency for expectations to affect perception.

    Semmelweis reflex               The tendency to reject new evidence that
                                    contradicts a paradigm.

    Social comparison bias          The tendency, when making hiring decisions, to
                                    favour potential candidates who don't compete
                                    with one's own particular strengths.

    Social desirability bias        The tendency to over-report socially desirable
                                    characteristics or behaviours in oneself and
                                    under-report socially undesirable
                                    characteristics or behaviours.

    Status quo bias                 The tendency to like things to stay relatively
                                    the same (see also loss aversion, endowment
                                    effect, and system justification).

    Stereotyping                    Expecting a member of a group to have certain
                                    characteristics without having actual
                                    information about that individual.

    Subadditivity effect            The tendency to judge probability of the whole
                                    to be less than the probabilities of the parts.

    Subjective validation           Perception that something is true if a
                                    subject's belief demands it to be true. Also
                                    assigns perceived connections between
                                    coincidences.

    Survivorship bias               Concentrating on the people or things that
                                    "survived" some process and inadvertently
                                    overlooking those that didn't because of their
                                    lack of visibility.

    Time-saving bias                Underestimations of the time that could be
                                    saved (or lost) when increasing (or decreasing)
                                    from a relatively low speed and overestimations
                                    of the time that could be saved (or lost) when
                                    increasing (or decreasing) from a relatively
                                    high speed.

    Third-person effect             Belief that that mass communicated media
                                    messages have a greater effect on others than
                                    on themselves.

    Triviality /                    The tendency to give disproportionate weight to
    Parkinson's Law of              trivial issues. Also known as bikeshedding,
                                    this bias explains why an organization may
                                    avoid specialized or complex subjects, such as
                                    the design of a nuclear reactor, and instead
                                    focus on something easy to grasp or rewarding
                                    to the average participant, such as the design
                                    of an adjacent bike shed.

    Unit bias                       The tendency to want to finish a given unit of
                                    a task or an item. Strong effects on the
                                    consumption of food in particular.

    Weber–Fechner law               Difficulty in comparing small differences in
                                    large quantities.

    Well travelled road effect      Underestimation of the duration taken to traverse
                                    oft-traveled routes and overestimation of the
                                    duration taken to traverse less familiar
                                    routes.

    Zero-risk bias                  Preference for reducing a small risk to zero
                                    over a greater reduction in a larger risk.

    Zero-sum heuristic              Intuitively judging a situation to be zero-sum
                                    (i.e., that gains and losses are correlated).
                                    Derives from the zero-sum game in game theory,
                                    where wins and losses sum to zero. The
                                    frequency with which this bias occurs may be
                                    related to the social dominance orientation
                                    personality factor
    -----------------------------------------------------------------------------

    refs and see also

    -   [The 12 Cognitive Bias that Prevent you from Being Rational](http://io9.com/5974468/the-most-common-cognitive-biases-that-prevent-you-from-being-rational)
    -   [心智工具箱（4）：执行意图 | 阳志平的日志](http://www.douban.com/note/256480522/)

[Language Tags in HTML and XML | W3C](http://www.w3.org/International/articles/language-tags/)

vim -<

:   -   `:b <TAB>`, list buffers.
    -   `:b PATTERN<TAB>`, list buffers.
    -   `:set readonly`
    -   `:set nomodifable`
    -   `:setlocal textwidth=70`
    -   `:ls`, or `:buffers`, `:files`, `:b 5`
    -   `:bdelete`
    -   `:help ctrl-w`
    -   `:ball`, open all buffers in current window
    -   `ctrl-w o`, leave only one window
    -   `:help 'switchbuf'`
    -   `:rew[ind]`, `:E`, `:e .`
    -   `ctrl-o`, older position
    -   in dir listing:
        +   `o`, `v`: open, open vertically
        +   `t`: tab open
        +   `p`: preview window
    -   `ctrl-o`, `ctrl-i`, back and forth
    -   ` `` `, last position, ` `. `, last edit, read more `:help jumplist`
    -   `:Sex .`

[我不是为她出发，却为她到达。](http://bbs.nju.edu.cn/bbstcon?board=Girls&file=M.1457382613.A) -<

:   <!-- `ZAK 同学喜欢`{.tzx-tag} -->

    ```tzx-bigquote
    绝大部分 20 左右的小伙子，心里想的都是付出、责任。他们可能没那么多花招，但是
    愿意做一切喜欢的女孩希望的事情。

    20 左右的小姑娘，心里只想着享受，每天纠结于霸道总裁还是知性暖男，韩国偶吧还
    是欧美猛男。总说再不疯狂就老了，总想着轰轰烈烈的恋爱。

    这时的小伙子想的都是奋斗、闯荡，他们会为自己不如其他小伙子而羞愧，渴望着有
    个公主等着自己呵护，认为通向城堡的路布满荆棘，还有可怕的巨龙。

    他还没有把剑擦亮，却看到公主坐着小马车寻欢作乐去了。

    “你能像吟游诗人一样天天为我讲故事么？”

    “你能像杂技演员一样天天逗我笑么？”

    “当我孤独的时候你却不在我身边，但是侍卫长却能温暖我”

    “我和花花公子在一起真的很开心，他带我四处旅游、喝红酒、吃大餐”

    我能理解，真的。可能你并不是我想象中的公主，但我还是会踏上这条荆棘之路。

    因为我们，是英雄啊

    有一天，在路边的田地里会有一个发髻上插着野花的姑娘，粗糙的手，小麦色的肌肤。

    她不美丽，却愿意对我笑。

    我不是为她出发，却为她到达。
    ```

    两条有意思的回复：
      ~ 公主不是夜总会里的么，600 一个，包夜 1000 多。
      ~ ```tzx-bigquote
        20 岁左右的姑娘遇到一个穷小伙。
        她觉得自己喜欢一个人，养他都行。
        然后姑娘读博去了。
        小伙子回家乡了工作了。
        小伙子很快结婚了。
        姑娘成了大龄单身女博士。
        同龄的男博士们都去找 20 的小姑娘了。
        并不是所有 20 岁的小姑娘都在寻欢作乐，有的搞学习，做实验去了。
        然后就浪费了青春，成了被人嫌弃的女博士。
        为什么你一开始目光都在小公主身上，到最后才发现小村姑呢。
        其实小村姑很多，长得不好看，在这个看脸的社会，你根本看不到。
        ```

[scientific-python-lectures](http://nbviewer.jupyter.org/github/jrjohansson/scientific-python-lectures/blob/master/Lecture-4-Matplotlib.ipynb) -<

:   To create an 800x400 pixel, 100 dots-per-inch figure, we can do:

    ```python
    fig = plt.figure(figsize=(8,4), dpi=100)
    ```

    ```python
    # code
    fig.savefig("filename.png") # fig.savefig("filename.png", dpi=200)

    # code
    fig, axes = plt.subplots(figsize=(12,3))

    axes.plot(x, y, 'r')
    axes.set_xlabel('x')
    axes.set_ylabel('y')
    axes.set_title('title');

    axes.legend(["curve1", "curve2", "curve3"]);

    ax.legend(loc=0) # let matplotlib decide the optimal location
    ax.legend(loc=1) # upper right corner
    ax.legend(loc=2) # upper left corner
    ax.legend(loc=3) # lower left corner
    ax.legend(loc=4) # lower right corner
    # .. many more options are available
    ```

    ```python
    # MATLAB style line color and style
    ax.plot(x, x**2, 'b.-') # blue line with dots
    ax.plot(x, x**3, 'g--') # green dashed line


    # Python style
    fig, ax = plt.subplots()

    ax.plot(x, x+1, color="red", alpha=0.5) # half-transparant red
    ax.plot(x, x+2, color="#1155dd")        # RGB hex code for a bluish color
    ax.plot(x, x+3, color="#15cc55")        # RGB hex code for a greenish color

    # plot range
    axes.axis('tight')
    axes.set_yscale("log")

    axes.set_ylim([0, 60])
    axes.set_xlim([2, 5])

    ax.set_xticks([1, 2, 3, 4, 5])
    ax.set_xticklabels([r'$\alpha$', r'$\beta$', r'$\gamma$', r'$\delta$', r'$\epsilon$'],
                       fontsize=18)

    # scientific notation
    fig, ax = plt.subplots(1, 1)

    ax.plot(x, x**2, x, np.exp(x))
    ax.set_title("scientific notation")

    ax.set_yticks([0, 50, 100, 150])

    from matplotlib import ticker
    formatter = ticker.ScalarFormatter(useMathText=True)
    formatter.set_scientific(True)
    formatter.set_powerlimits((-1,1))
    ax.yaxis.set_major_formatter(formatter)

    # distance between x and y axis and the numbers on the axes
    matplotlib.rcParams['xtick.major.pad'] = 5
    matplotlib.rcParams['ytick.major.pad'] = 5

    fig, ax = plt.subplots(1, 1)

    ax.plot(x, x**2, x, np.exp(x))
    ax.set_yticks([0, 50, 100, 150])

    ax.set_title("label and axis spacing")

    # padding between axis label and axis numbers
    ax.xaxis.labelpad = 5
    ax.yaxis.labelpad = 5

    ax.set_xlabel("x")
    ax.set_ylabel("y");
    ```

    ```python
    pd.read_clipboard()
    ```

Python Regex -<

:   ```python
    > import re
    > str = 'Zhouy a Python learner and i am now learning Regular Expression'
    > m = re.match('(\w+)\s',str)
    > print m
    > print m.group(0)
    <MatchObject object>
    Zhouy
    ```

    re.match, re.search, re.split, re.findAll, re.replace,

    ```python
    > s = '100 NORTH BROAD ROAD'
    > s_new = s[:-4] + s[-4:].replace('ROAD', 'RD.')
    > print s_new
    100 NORTH BROAD RD.
    ```

    ```python
    > import re
    > s = '100 NORTH BROAD ROAD'
    > s_new = re.sub('ROAD$', 'RD.', s)
    > print s_new
    Out: 100 NORTH BROAD RD.
    ```

    ```python
    import re
    pattern = '^M{0,3}$'
    print re.search(pattern, 'M')
    ```

    带有内联注释 (Inline Comments) 的正则表达式

    ```python
    pattern = """
    ^ # beginning of string
    M{0,3} # thousands - 0 to 3 M's
    (CM|CD|D?C{0,3}) # hundreds - 900 (CM), 400 (CD), 0-300 (0 to 3 C's),
    # or 500-800 (D, followed by 0 to 3 C's)
    (XC|XL|L?X{0,3}) # tens - 90 (XC), 40 (XL), 0-30 (0 to 3 X's),
    # or 50-80 (L, followed by 0 to 3 X's)
    (IX|IV|V?I{0,3}) # ones - 9 (IX), 4 (IV), 0-3 (0 to 3 I's),
    # or 5-8 (V, followed by 0 to 3 I's)
    $ # end of string
    """
    print re.search(pattern, 'M', re.VERBOSE)
    ```

    ```python
    > import re
    > print re.search(r'^(\d{3})-(\d{3})-(\d{4})$','800-555-1212').groups()
    800 555 1212
    ```

    ```python
    import re
    print re.search(r'^(\d{3})-(\d{3})-(\d{4})-(\d+)$','800-555-1212-1234').groups()
    print re.search(r'^(\d{3})-(\d{3})-(\d{4})-(\d+)$','800 555 1212 1234')
    ```

    `\D 匹配任意字符，除了数字位，+ 表示“1 个或者多个”`

    ```python
    import re
    def plural(noun):
        if re.search('[sxz]$', noun):
            return re.sub('$', 'es', noun)
        elif re.search('[^aeioudgkprt]h$', noun):
            return re.sub('$', 'es', noun)
        elif re.search('[^aeiou]y$', noun):
            return re.sub('y$', 'ies', noun)
        else:
            return noun + 's'
    ```

    ![](http://whudoc.qiniudn.com/python-regexp.png)

    [Python正则表达式指南 - AstralWind - 博客园](http://www.cnblogs.com/huxi/archive/2010/07/04/1771073.html) -<

    :   与大多数编程语言相同，正则表达式里使用 `\` 作为转义字符，这就可能造成反斜杠
        困扰。假如你需要匹配文本中的字符 `\`，那么使用编程语言表示的正则表达式里将
        需要4个反斜杠 `\\\\`：前两个和后两个分别用于在编程语言里转义成反斜杠，转换
        成两个反斜杠后再在正则表达式里转义成一个反斜杠。Python 里的原生字符串很好地
        解决了这个问题，这个例子中的正则表达式可以使用 `r"\\"` 表示。同样，匹配一个
        数字的`"\\d"` 可以写成 `r"\d"`。有了原生字符串，你再也不用担心是不是漏写了
        反斜杠，写出来的表达式也更直观。

Python2 & Python3 on Windows: `python3.bat` -<

:   ```bash
    @ echo off
    C:\Python34\python.exe %*
    ```

附 [In My Secret Life][in-my-secret-life] 的 [歌词][in-my-secret-life-lyrics]： -<

:   ```tzx-bigquote
    I saw you this morning.
    You were moving so fast.
    Can't seem to loosen my grip
    On the past.
    And I miss you so much.
    There's no one in sight.
    And we're still making love
    In My Secret Life.

    I smile when I'm angry.
    I cheat and I lie.
    I do what I have to do
    To get by.
    But I know what is wrong,
    And I know what is right.
    And I'd die for the truth
    In My Secret Life.

    Hold on, hold on, my brother.
    My sister, hold on tight.
    I finally got my orders.
    I'll be marching through the morning,
    Marching through the night,
    Moving cross the borders
    Of My Secret Life.

    Looked through the paper.
    Makes you want to cry.
    Nobody cares if the people
    Live or die.
    And the dealer wants you thinking
    That it's either black or white.
    Thank G-d it's not that simple
    In My Secret Life.

    I bite my lip.
    I buy what I'm told:
    From the latest hit,
    To the wisdom of old.
    But I'm always alone.
    And my heart is like ice.
    And it's crowded and cold
    In My Secret Life.
    ```

[in-my-secret-life]: http://www.xiami.com/song/1014582?spm=a1z1s.3521865.23309997.2.NsmCfy
[in-my-secret-life-lyrics]: http://www.lyrics.com/in-my-secret-life-lyrics-leonard-cohen.html

[True Table](http://en.wikipedia.org/wiki/Truth_table) -<

:   ```txz-plain
    0            (F F F F)(p, q)            ⊥            false, Opq            Contradiction
    1            (F F F T)(p, q)            NOR            p ↓ q, Xpq            Logical NOR
    2            (F F T F)(p, q)            \nleftarrow            p \nleftarrow q, Mpq            Converse nonimplication
    3            (F F T T)(p, q)            ¬p, ~p            ¬p, Np, Fpq            Negation
    4            (F T F F)(p, q)            \nrightarrow            p \nrightarrow q, Lpq            Material nonimplication
    5            (F T F T)(p, q)            ¬q, ~q            ¬q, Nq, Gpq            Negation
    6            (F T T F)(p, q)            XOR            p ⊕ q, Jpq            Exclusive disjunction
    7            (F T T T)(p, q)            NAND            p ↑ q, Dpq            Logical NAND
    8            (T F F F)(p, q)            AND            p ∧ q, Kpq            Logical conjunction
    9            (T F F T)(p, q)            XNOR            p If and only if q, Epq            Logical biconditional
    10            (T F T F)(p, q)            q            q, Hpq            Projection function
    11            (T F T T)(p, q)            p \rightarrow q            if p then q, Cpq            Material implication
    12            (T T F F)(p, q)            p            p, Ipq            Projection function
    13            (T T F T)(p, q)            p \leftarrow q            p if q, Bpq            Converse implication
    14            (T T T F)(p, q)            OR            p ∨ q, Apq            Logical disjunction
    15            (T T T T)(p, q)            ⊤            true, Vpq            Tautology
    ```

Eye exercise for speed reading: -<

:   ![](http://upload.wikimedia.org/wikipedia/commons/3/3c/Eye-exercise-for-speed-reading_thumb.gif)

    - **Close your eyes.** Do this sitting up to prevent you from falling asleep.

    ![][eye-01]

    - **Relax your body.** This can help relax your eyes.

    ![][eye-02]

    - **Rub your eyes.** Rub your eyes very gently, as if almost tickling them.

    ![][eye-03]

    - **Relax your face.** move your jaw side to side. Make sure you are not
      pressing your eyebrows together. Relax your cheeks and forehead.

    ![][eye-04]

    - **Try To keep your eyes closed during this process.**

    ![][eye-05]

    - **Gently open your eyes when you are done.** try to barely open them and
      focus on your eyelids. Follow them up and as you look at your eyelids your
      eyes will open up.

    ![][eye-06]

    - **Wash eyes with cold water frequently.**

    ![][eye-07]

    - **Try "pushing" your nose down, this will pull your eyes down with the rest
      of the face**

    ![][eye-08]

    refs and see also

    -   [Visual acuity - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Visual_acuity)
    -   [Fixation (visual) - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Fixation_(visual))
    -   [Subvocalization - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Subvocalization)
    -   [Study skills - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Study_skills)
    -   [SQ3R - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/SQ3R)
    -   [Tony Buzan - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Tony_Buzan)
    -   [Saccade - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Saccade)
    -   [Speed reading - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Speed_reading)

[how-to-relax-your-eyes]: http://www.wikihow.com/Relax-Your-Eyes
[eye-01]: http://gnat-tang-shared-image.qiniudn.com/pictures/670px-Relax-Your-Eyes-Step-1.jpg
[eye-02]: http://gnat-tang-shared-image.qiniudn.com/pictures/670px-Relax-Your-Eyes-Step-2.jpg
[eye-03]: http://gnat-tang-shared-image.qiniudn.com/pictures/670px-Relax-Your-Eyes-Step-3.jpg
[eye-04]: http://gnat-tang-shared-image.qiniudn.com/pictures/670px-Relax-Your-Eyes-Step-4.jpg
[eye-05]: http://gnat-tang-shared-image.qiniudn.com/pictures/670px-Relax-Your-Eyes-Step-5.jpg
[eye-06]: http://gnat-tang-shared-image.qiniudn.com/pictures/670px-Relax-Your-Eyes-Step-6.jpg
[eye-07]: http://gnat-tang-shared-image.qiniudn.com/pictures/670px-Relax-Your-Eyes-Step-7.jpg
[eye-08]: http://gnat-tang-shared-image.qiniudn.com/pictures/670px-Relax-Your-Eyes-Step-8.jpg

**[UrbanDictionary][ud]** 是一个用户定义的单词本网站。 -<

:   [Roza](http://www.urbandictionary.com/define.php?term=Roza&defid=7301080)

    :   Roza means simply beautiful. A girl who has beautiful hair, gorgeous, big
        eyes and a smile that could brighten the ocean.

        She looks gorgeous even in the morning or without any makeup on.  Everytime
        you look at her, she stuns you with her looks n by the way she looks at
        you.

        She is like a rose, closed in the beginning but if you give her time n
        nurture her, she will blossom into a mesmerizing beauty, who u feel blessed
        to have by your side.

        She is smart n amazing just the way she is. The girl of your dreams, she is
        wanted n appreciated by everyone. She is all you could wish for.

          - Guy 1: she is so pretty !!!
          - Guy 2: yeah that she is..cuz she is Roza ...guys usually drool over her
            but she is not just like any other pretty girl ...she is different yet
            amazing.
          - Guy 1: yeah, thats cuz she is Roza i guess Just as beautiful as her
            name :)

    [Vagina](http://www.urbandictionary.com/define.php?term=vagina&defid=3998266)

    :   a tasty treat

        my vagina smells like sugarcane but taste like flowers

[ud]: http://www.urbandictionary.com/

[Pierre de Fermat](http://en.wikipedia.org/wiki/Pierre_de_Fermat) -<

:   ![Pierre de Fermat](https://upload.wikimedia.org/wikipedia/commons/f/f3/Pierre_de_Fermat.jpg){align=right}

    Pierre de Fermat (French: `[pjɛːʁ dəfɛʁma]`; 17 August 1601 – 12 January
    1665) was **a French lawyer** at the Parlement of Toulouse, France, and **a
    mathematician who is given credit for early developments that led to
    infinitesimal calculus, including his technique of adequality**. In
    particular, he is recognized for his discovery of an original method of
    finding the greatest and the smallest ordinates of curved lines, which is
    analogous to that of the differential calculus, then unknown, and his
    research into number theory. He made notable contributions to analytic
    geometry, probability, and optics. He is best known for **Fermat's Last
    Theorem**, which he described in a note at the margin of a copy of
    Diophantus' Arithmetica.

[Johannes Kepler](http://en.wikipedia.org/wiki/Johannes_Kepler) -<

:   ![A 1610 portrait of Johannes Kepler by an unknown artist](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d4/Johannes_Kepler_1610.jpg/330px-Johannes_Kepler_1610.jpg){align=right}

    Johannes Kepler (German: `[ˈkɛplɐ]`; December 27, 1571 – November 15, 1630)
    was **a German mathematician, astronomer, and astrologer**. A key figure in
    the 17th century scientific revolution, he is best known for his laws of
    planetary motion, based on his works Astronomia nova, Harmonices Mundi, and
    Epitome of Copernican Astronomy. These works also provided one of the
    foundations for Isaac Newton's theory of universal gravitation.

    During his career, Kepler was **a mathematics teacher at a seminary
    school** in Graz, Austria, where he became an associate of Prince Hans
    Ulrich von Eggenberg. Later he became an assistant to astronomer Tycho
    Brahe, and eventually the imperial mathematician to Emperor Rudolf II and
    his two successors Matthias and Ferdinand II. He was also a mathematics
    teacher in Linz, Austria, and an adviser to General Wallenstein.
    Additionally, he did fundamental work in the field of optics, invented an
    improved version of the refracting telescope (the Keplerian Telescope), and
    mentioned the telescopic discoveries of his contemporary Galileo Galilei.

    Kepler lived in an era when there was no clear distinction between
    astronomy and astrology, but there was a strong division between astronomy
    (a branch of mathematics within the liberal arts) and physics (a branch of
    natural philosophy). Kepler also incorporated religious arguments and
    reasoning into his work, motivated by the religious conviction and belief
    that God had created the world according to an intelligible plan that is
    accessible through the natural light of reason. Kepler described his new
    astronomy as "celestial physics", as "an excursion into Aristotle's
    Metaphysics", transforming the ancient tradition of physical cosmology by
    treating astronomy as part of a universal mathematical physics.

[Richard Dedekind](http://en.wikipedia.org/wiki/Richard_Dedekind) -<

:   ![East German stamp from 1981,
        commemorating Richard Dedekind.](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d0/Stamps_of_Germany_%28DDR%29_1981%2C_MiNr_2605.jpg/330px-Stamps_of_Germany_%28DDR%29_1981%2C_MiNr_2605.jpg){align=right}

    Julius Wilhelm Richard Dedekind (6 October 1831 – 12 February 1916) was a
    German mathematician who made important contributions to abstract algebra
    (particularly ring theory), algebraic number theory and the definition of
    the real numbers.

    Dedekind's theorem states that if there existed a one-to-one correspondence
    between two sets, then Dedekind said that the two sets were "similar". He
    invoked similarity to give the first precise definition of an infinite set:
    a set is infinite when it is "similar to a proper part of itself," in
    modern terminology, is equinumerous to one of its proper subsets. Thus the
    set N of natural numbers can be shown to be similar to the subset of N
    whose members are the squares of every member of N, (N →N2):

        N    1  2  3  4  5  6  7  8  9  10 ...
                 ↓
        N2   1  4  9  16 25 36 49 64 81 100 ...

[Sir George Stokes, 1st Baronet](http://en.wikipedia.org/wiki/Sir_George_Stokes,_1st_Baronet) -<

:   <div class="tzx-fright">
    ![](https://upload.wikimedia.org/wikipedia/commons/a/ad/Ggstokes.jpg)
    </div>

    Sir George Gabriel Stokes, 1st Baronet, PRS (`/stoʊks/`; 13 August 1819 –
    1 February 1903), was a mathematician, physicist, politician and theologian.
    Born in Ireland, Stokes spent all of his career at University of Cambridge,
    where he served as the Lucasian Professor of Mathematics from 1849 until
    his death in 1903. Stokes made seminal contributions to fluid dynamics
    (including the Navier–Stokes equations), optics, and mathematical physics
    (including the first version of what is now known as Stokes' theorem). He
    was secretary, then president, of the Royal Society.

[René Descartes](http://en.wikipedia.org/wiki/Ren%C3%A9_Descartes) -<

:   <div class="tzx-fright">
    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/7/73/Frans_Hals_-_Portret_van_Ren%C3%A9_Descartes.jpg/360px-Frans_Hals_-_Portret_van_Ren%C3%A9_Descartes.jpg)
    </div>

    René Descartes (`/ˈdeɪˌkɑrt/`, French: `[ʁəne dekaʁt]`, 31 March 1596 – 11
    February 1650) was a French philosopher, mathematician and writer who spent
    most of his life in the Dutch Republic. He has **been dubbed the father of
    modern philosophy**, and much subsequent Western philosophy is a response
    to his writings, which are studied closely to this day. In particular, his
    Meditations on First Philosophy continues to be a standard text at most
    university philosophy departments. Descartes' **influence in mathematics is
    equally apparent**; the Cartesian coordinate system — allowing reference to
    a point in space as a set of numbers, and allowing algebraic equations to
    be expressed as geometric shapes in a two-dimensional coordinate system
    (and conversely, shapes to be described as equations) — was named after
    him. He is credited as **the father of analytical geometry**, the bridge
    between algebra and geometry, crucial to the discovery of infinitesimal
    calculus and analysis.  Descartes was also one of the key figures in the
    scientific revolution and has been described as an example of genius. He
    refused to accept the authority of previous philosophers and also refused
    to accept the obviousness of his own senses.

[William Thomson, 1st Baron Kelvin](http://en.wikipedia.org/wiki/William_Thomson,_1st_Baron_Kelvin) `@`{#lord-kelvin .tzx-anchor} -<

:   <div class="tzx-fright">
    ![Lord Kelvin by Hubert von Herkomer](https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Hubert_von_Herkomer03.jpg/330px-Hubert_von_Herkomer03.jpg)
    </div>

    William Thomson, 1st Baron Kelvin (/ˈkɛlvɪn/; 26 June 1824 – 17 December
    1907) was an **Irish mathematical physicist and engineer** who was born in
    Belfast in 1824. At the University of Glasgow he did important work in the
    mathematical analysis of electricity and formulation of the first and
    second laws of thermodynamics, and did much to unify the emerging
    discipline of physics in its modern form. He worked closely with
    mathematics professor Hugh Blackburn in his work. He also had a career as
    an electric telegraph engineer and inventor, which **propelled him into the
    public eye and ensured his wealth, fame and honour**. For his work on the
    transatlantic telegraph project he was knighted by Queen Victoria, becoming
    Sir William Thomson. He had extensive maritime interests and was most noted
    for his work on the mariner's compass, which had previously been limited in
    reliability.

    **Absolute temperatures are stated in units of kelvin in his honour.**
    While the existence of a lower limit to temperature (absolute zero) was
    known prior to his work, Lord Kelvin is widely known for determining its
    correct value as approximately −273.15 degree Celsius or −459.67 degree
    Fahrenheit.

**AFI's 100 Years... 100 Movie Quotes** (AFI: American Film Institute) -<

:   #. "Frankly, my dear, **I don't give a damn.**" *Gone with the Wind*
    #. "**I'm going to make him an offer he can't refuse.**" *The Godfather*
    #. "You don't understand! I coulda had class. I coulda been a contender. I
       could've been somebody, instead of a bum, which is what I am." *On the
       Waterfront*
    #. "Toto, I've got a feeling we're not in Kansas anymore." *The Wizard of Oz*
    #. "Here's looking at you, kid." *Casablanca*
    #. "Go ahead, make my day." *Sudden Impact*
    #. "All right, Mr. DeMille, I'm ready for my close-up." *Sunset Boulevard*
    #. "Fasten your seatbelts. It's going to be a bumpy night." *All About Eve*
    #. "**You talkin' to me?**" *Texi Driver*
    #. "What we've got here is failure to communicate" *Cool Hand Luke*
    #. "I love the smell of napalm (凝固汽油弹) in the morning." * Apocalypse Now*
    #. "Love means never having to say you're sorry." *Love Story*
    #. "The stuff that dreams are made of." *The Maltese Falcon*
    #. "E.T. phone home." *E.T. the Extra-Terrestrial*
    #. "They call me Mister Tibbs!" *In the Heat of the Night*
    #. "Rosebud." *Citizen Kane*
    #. "Made it, Ma! Top of the world!" *White Heat*
    #. "I'm as mad as hell, and I'm not going to take this anymore!" *Network*
    #. "Louis, I think this is the beginning of a beautiful friendship."  *Casablanca*
    #. "**A census taker once tried to test me. I ate his liver with some fava beans
       (`['fa:və]` 蚕豆) and a nice Chianti (`[ki'ænti]` 基安蒂红葡萄酒).**"
       *The Silence of the Lambs*
    #. "Bond. James Bond." *Dr. No*
    #. "There's no place like home." *Sunset Boulevard*
    #. "I am big! It's the pictures that got small." *Sunset Boulevard*
    #. "Show me the money!" *Jerry Maguire*
    #. "Why don't you come up sometime and see me?" *She Done Him Wrong*
    #. "I'm walking here! I'm walking here!" *Midnight Cowboy*
    #. "Play it, Sam. Play 'As Time Goes By.'" *Casablanca*
    #. "You can't handle the truth!" *A Few Good Men*
    #. "I want to be alone." *Grand Hotel*
    #. "After all, tomorrow is another day!" *Gone with the Wind*
    #. "Round up the usual suspects." *Casablanca*
    #. "I'll have what she's having." *When Harry Met Sally...*
    #. "You know how to whistle, don't you, Steve? You just put your lips
        together and blow." *To Have and Have Not*
    #. "You're gonna need a bigger boat." *Jaws*
    #. "Badges? We ain't got no badges! We don't need no badges! I don't have
        to show you any stinking badges!" *The Treasure of the Sierra Madre*
    #. "I'll be back." *The Terminator*
    #. "Today, I consider myself the luckiest man on the face of the Earth."
        *The Pride of Yankees*
    #. "If you build it, he will come." *Field of Dreams*
    #. "Mama always said **life was like a box of chocolates**. You never know what
        you're gonna get." *Forrest Gump*
    #. "We rob banks." *Bonnie and Clyde*
    #. "Plastics." *The Graduate*
    #. "We'll always have Paris." *Casablanca*
    #. "I see dead people." *The Sixth Sense*
    #. "Stella! Hey, Stella!" *A Streetcar Named Desire*
    #. "Oh, Jerry, don't let's ask for the moon. We have the stars." *Now, Voyager*
    #. "Shane. Shane. Come back!" *Shane*
    #. "Well, nobody's perfect." *Some Like It Hot*
    #. "**It's alive! It's alive!**" *Frankenstein*
    #. "Houston, we have a problem." *Apollo 13*
    #. "You've got to ask yourself one question: 'Do I feel lucky?' Well, do ya, punk?" *Dirty Harry*
    #. "You had me at 'hello.'" *Jerry Maguire*
    #. "One morning I shot an elephant in my pajamas. How he got in my pajamas,
        I don't know." *Animal Crackers*
    #. "There's no crying in baseball!" *A League of Their Own*
    #. "La-dee-da, la-dee-da." *Annie Hall*
    #. "A boy's best friend is his mother." *Psycho*
    #. "**Greed, for lack of a better word, is good.**" *Wall Street*
    #. "Keep your friends close, but your enemies closer." *The Godfather Part II*
    #. "As God is my witness, I'll never be hungry again." *Gone with the Wind*
    #. "Well, here's another nice mess you've gotten me into!" *Sons of the Desert*
    #. "Say 'hello' to my little friend!" *Scarface*
    #. "What a dump." *Beyond the Forest*
    #. "Mrs. Robinson, you're trying to seduce me. Aren't you?" *The Graduate*
    #. "Gentlemen, you can't fight in here! This is the War Room!" *Dr.
        Strangelove or: How I Learned to Stop Worrying and Love the Bomb*
    #. "Elementary, my dear Watson." *The Adventures of Sherlock Holmes*
    #. "Get your stinking paws off me, you damned dirty ape." *Planet of the Apes*
    #. "Of all the gin joints in all the towns in all the world, she walks into mine." *Casablanca*
    #. "Here's Johnny!" *The Shining*
    #. "They're here!" *Poltergeist*
    #. "Is it safe?" *Marathon Man*
    #. "Wait a minute, wait a minute. You ain't heard nothin' yet!" *The Jazz Singer*
    #. "No wire hangers, ever!" *Mommie Dearest*
    #. "Mother of mercy, is this the end of Rico?" *Little Caesar*
    #. "Forget it, Jake, it's Chinatown." *Chinatown*
    #. "I have always depended on the kindness of strangers." *A Streetcar Named Desire*
    #. "Hasta la vista, baby." *Terminator 2: Judgment Day*
    #. "Soylent Green is people!" *Soylent Green*
    #. "Open the pod bay doors please, HAL." *2001: A Space Odyssey*
    #. Striker: "Surely you can't be serious." Rumack: "I am serious...and don't call me Shirley." *Airplane!*
    #. "Yo, Adrian!" *Rocky*
    #. "Hello, gorgeous." *Funny Girl*
    #. "Toga! Toga!" *National Lampoon's Animal House*
    #. "Listen to them. Children of the night. What music they make." *Dracula*
    #. "Oh, no, it wasn't the airplanes. It was Beauty killed the Beast." *King Kong*
    #. "**My precious.**" *The Lord of the Rings: The Two Towers*
    #. "Attica! Attica!" *Dog Day Afternoon*
    #. "Sawyer, you're going out a youngster, but you've got to come back a star!" *42nd Street*
    #. "Listen to me, mister. You're my knight in shining armor. Don't you
        forget it. You're going to get back on that horse, and I'm going to be
        right behind you, holding on tight, and away we're gonna go, go, go!"
        *On Golden Pond*
    #. "Tell 'em to go out there with all they got and win just one for the Gipper." *Knute Rockne, All American*
    #. "A martini. Shaken, not stirred." *Godfather*
    #. "Who's on first?" *The Naughty Nineties*
    #. "Cinderella story. Outta nowhere. A former greenskeeper, now, about to
        become the Masters champion. It looks like a mirac...It's in the hole!
        It's in the hole! It's in the hole!" *Caddyshack*
    #. "Life is a banquet, and most poor suckers are starving to death!" *Auntie Mame*
    #. "I feel the need—the need for speed!" *Top Gun*
    #. "Carpe diem. Seize the day, boys. Make your lives extraordinary." *Dead Poets Society*
    #. "Snap out of it!" *Moonstruck*
    #. "My mother thanks you. My father thanks you. My sister thanks you. And I
        thank you." *Yankee Doodle Dandy*
    #. "Nobody puts Baby in a corner." *Dirty Dancing*
    #. "I'll get you, my pretty, and your little dog too!" *The Wizard Oz*
    #. "**I'm the king of the world!**" *Titanic*

    More quotes

    :   #. “曾经有一份真诚的爱情摆在我的面前，我没有珍惜，等到失去的时候才追悔莫及
            ，人世间最痛苦的事情莫过于此。如果上天能够给我一个重新来过的机会，我会
            对那个女孩子说三个字：‘我爱你’。如果非要给这份爱加上一个期限，我希望是
            ，一万年。” **大话西游**
        #. 你可以说我是跑龙套的，但是你不可以说我是“臭跑龙套”的！ *喜剧之王*
        #. 所以说做妖就像做人一样，要有仁慈的心，有了仁慈的心，就不再妖，是人妖。*
            大话西游*
        #. 不是我喜欢打架，是有很多人喜欢被我打！ *鹿鼎记*
        #. "你那忧郁的眼神,唏嘘的胡渣子,神呼奇迹的刀法,还有那杯晶莹透亮的马蒂尼,都
            掩饰不住你的出众,但是再怎么出众也要把过夜费付了吧" *零零柒*
        #. “准确的说，我是一个演员。”
        #. 你可以叫我“跑龙套的”，但不可以前面不要加"死”字！！！！ *喜剧之王*
        #. 实在令人太失望。听到你的声音，我还以为你是一个很有感性，很有电影幻想的人
            。看你这一身造型，就知道你太没有内涵了 *92家有喜事*
        #. 喂!你介不介意把裤子拉高一点,让我看看你的腿? *少林足球*
        #. 大不了我发个毒誓，如果以后我再赌钱的话，就让天下最丑的女人夜夜轮奸，直到
            体无完肤，摇摇欲坠为止，这样可以了吧 ！ *唐伯虎点秋香*
        #. 阿飞正传*：我听别人说这世界上有一种鸟是没有脚的，它只能一直飞呀飞呀，飞
            累了就在风里面睡觉，这种鸟一辈子只能下地一次，那边一次就是它死亡的时候。
        #. 英雄本色*：有信心不一定会成功，没信心一定不会成功。
        #. 笑傲江湖之东方不败*：有人就有恩怨，有恩怨就有江湖。人就是江湖，你怎么退出？
        #. *开往春天的地铁*：我一直怀疑27岁是否还会有一见钟情的倾心。我不知道该说什
            么，我只是突然在那一刻很想念她。
        #. *情人*：我以经老了，在人来人往的大厅，有一位老人他向我走来，他说我认识你
            ，那时的你还很年轻，美丽，你的身边有许许多多的追求者，不过跟那时相比，
            我更喜欢现在你这经历了沧桑的容颜？
        #. *春光乍泄*：一直以为我跟他不一样，原来寂寞的时候，所有的人都一样。
        #. *春光乍泻*：每个成功男人的背后，都有一个女人。每个不成功男人的背后，都有两个。
        #. *好想好想谈恋爱*：**承诺是男人给女人的定心丸。吃了安心，虽然这定心丸的药性
            有待考证，但女人都希望吃了再说。**
        #. “如果，我多一张船票，你会不会跟我一起走？” *花样年华*
        #. 往往都是事情改变人，人却改变不了事情。 *无间道*
        #. 我最讨厌你们这些打劫的了，一点技术含量都没有！！！！ *天下无贼*
        #. 给我一个机会，我想做好人！ *无间道*
        #. 做人如果没有梦想，那跟咸鱼有什么区别？ *少林足球*

    refs and see also

    :   * [AFI 100 Year ... 100 Movie Quotes](http://en.wikipedia.org/wiki/AFI%27s_100_Years...100_Movie_Quotes)
        * <http://www.lz13.cn/jingdiantaici/7987.html>
        * <http://blog.sina.com.cn/s/blog_701c7e240100nmwj.html>
        * <http://www.china.com.cn/info/zhuanti/zxc08/2008-01/24/content_9582793.htm>

MathJax -<

:   What is MathJax?

    :   * Open-source JS display engine
        * Modular, load components only when necessary
        * Rich API

    Getting Started

    :   * Using the MathJax Content Delivery Network (CDN)
        * Add these to your src code (.html or .md)

        ```html
        <script type="text/javascript"
                 src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML">
        </script>
        ```

    * MathJax hosted on GitHub: [mathjax | MathJax](https://github.com/mathjax/MathJax/)
    * TeX and LaTeX input
        * display: `$$...$$` or `\[...\]`
        * inline: `\(...\)` (default) or `$...$`
    * MathML, etc.

    Installing and Testing MathJax

    Loading and Configuring MathJax

    Common Configurations

    Use `default.js` or use this request:

    ```html
    <script type="text/javascript"
             src="path-to-MathJax/MathJax.js?config=default">
    </script>
    ```

    Using MathJax in popular web platforms

    MathJax TeX and LaTeX Support

    Note that the TeX input processor implements only the **math-mode** macros of TeX and LaTeX, not the **text-mode** macros.

    In Markdown, the back-tick (` ` `) is used to mark **verbatim text**

    And sometime you may double backslashs to escape

    ```latex
    \\begin{array}{cc}
      a & b \\\\
      c & c
    \\end{array}
    ```

    You can use the `\def`, `\newcommand`, `\renewcommand`, `\newenvironment`,
    `\renewenvironment`, and `\let` commands to **create your own macros and
    environments**.

    Some Examples I Tried

    ```latex
    We'll define our own macros and use them, $$
       \def\RR{\bf R}
       \def\bold#1{\bf #1}
       \bold{``bold\ face"}$$
    And do that again: \(\bold{``bold\ face"}\)
    And do that again: $$\bold{``bold\ face"}$$
    And do that again: $$\bold{``bold  face"}$$
    ```

    And you could create a file in `MathJax/config/local` called `local.js`
    that contains your macro definitions:

    ```javascript
    MathJax.Hub.Config({
      TeX: {
        Macros: {
          RR: "{\\bf R}",
          bold: ["{\\bf #1}",1]
        }
      }
    });

    MathJax.Ajax.loadComplete("[MathJax]/config/local/local.js");
    ```

    and then load it along with your main configuration file on the script that
    loads MathJax.js:

    `<script src="/MathJax/MathJax.js?config=TeX-AMS_HTML,local/local.js"></script>`{.html}

    Automatic Equation Numbering

    :   ```html
        <script type="text/x-mathjax-config">
        MathJax.Hub.Config({
          TeX: { equationNumbers: { autoNumber: "AMS" } }
        });
        </script>
        ```

    refs and see also

      - [MathJax Document](http://docs.mathjax.org/en/latest/mathjax.html)

    ---

    - **AC** – Axiom of Choice.
    - **AL** - Action limit.
    - **Ai** – [Airy function.](http://en.wikipedia.org/wiki/Airy_function)
    - **Alt** – alternating group (Alt(n) is also written as An.)
    - **An.** - alternate
    - **Aut** – automorphism group.
    - **Bi** – Airy function of the second kind.
    - **Card** – cardinality(基数) of a set. (Card(X) is also written #X, ♯X or
      |X|.)
    - **Chi** - hyperbolic cosine (ch*x*) integral function. `ch+i`
    - **Ci** - cosine integral function.
    - **Cl** – topological closure.
    - **DNE** - a solution for an expression does not exist, or is undefined.
      Generally used with limits and integrals. **D**efine **N**one **E**quation
      *or* **D**oes **N**ot **E**xist
    - **Ei** – exponential integral function.
    - **End** – categories of endomorphisms.
    - **Eqn** – equation.
    - **Ext** – Ext functor.
    - **FOL** – first-order logic.
    - **Frob** – Frobenius endomorphism.
    - **GF** - Galois field.
    - **GL** – general linear group.
    - **Gal** – Galois group. (Also written as Γ.)
    - **HOL** – higher-order logic.
    - **Hom** – Hom functor.
    - **Im** – either image of a function or imaginary part of a complex number.
    - **Ker** – kernel.
    - **LHS** – left-hand side of an equation.
    - **LST** – language of set theory.
    - **Li** – offset logarithmic integral function.
    - **NAND** – not-and in logic, *see* [*Sheffer stroke*](http://en.wikipedia.org/wiki/Sheffer_stroke)
    - **NOR** – not-or in logic.
    - **NTS** – need to show.
    - **No.** – number.
    - **PGL** – projective general linear group.
    - **PSL** – projective special linear group.
    - **Pr** – probability of an event.
    - **QED** – "Quod erat demonstrandum", a Latin phrase used at the end of a
      definitive proof. [how to
      pronunce?](http://zh.forvo.com/word/quod_erat_demonstrandum/)
    - **QEF** – "quod erat faciendum", a Latin phrase sometimes used at the end of
      a construction.
    - **RHS** – right-hand side of an equation.
    - **RTP** – required to prove.
    - **RV** – Random Variable. (or as R.V.)
    - **Re** – real part of a complex number. (Also written \Re.)
    - **Rk** – rank.
    - **SL** – special linear group.
    - **STP** – it is sufficient to prove.
    - **Shi - hyperbolic sine integral function.
    - **Si - sine integral function.
    - **Soln** – solution.
    - **Sp** – linear span of a set of vectors. (Also written with angle brackets.)
    - **Spec** – spectrum of a ring.
    - **Sym** – symmetric group (Sym(n) is also written as Sn.)
    - **TFAE** – the following are equivalent.
    - **Thm** – theorem.
    - **Tor** – Tor functor.
    - **Tr** – trace, either the field trace, or the trace of a matrix or linear
      transformation.
    - **WMA** - we may assume.
    - **WO** – well-ordered set.
    - **WTP** – want to prove.
    - **WTS** – want to show.
    - **W^5** – which was what we wanted. Synonym of Q.E.D.
    - **XOR** - exclusive or in logic.
    - **ZF** – Zermelo–Fraenkel axioms of set theory.
    - **ZFC** – Zermelo–Fraenkel axioms (with the Axiom of Choice) of set theory.
    - **a.e.** – almost everywhere
    - **a.s.** – almost surely
    - **adj** – adjugate of a matrix.
    - **arccos** – inverse cosine function.
    - **arccosec** – inverse cosecant function. (Also written as arccsc.)
    - **arccot** – inverse cotangent function.
    - **arccsc** – inverse cosecant function. (Also written as arccosec.)
    - **arcosech** – inverse hyperbolic cosecant function. (Also written as
      arcsch.)
    - **arcosh** – inverse hyperbolic cosine function.
    - **arcoth** – inverse hyperbolic cotangent function.
    - **arcsch** – inverse hyperbolic cosecant function. (Also written as
      arcosech.)
    - **arcsec** – inverse secant function.
    - **arcsin** – inverse sine function.
    - **arctan** – inverse tangent function.
    - **arg max** – argument of the maximum.
    - **arg min** – argument of the minimum.
    - **arg** – argument of a complex number.
    - **arsech** – inverse hyperbolic secant function.
    - **arsinh** – inverse hyperbolic sine function.
    - **artanh** – inverse hyperbolic tangent function.
    - **cdf** – cumulative distribution function.
    - **char** – characteristic
    - **cis - cos + i sin function.
    - **cod** – codomain. (Also written as codom.)
    - **codom** – codomain. (Also written as cod.)
    - **cos** – cosine function.
    - **cosec** – cosecant function. (Also written as csc.)
    - **cosech** – hyperbolic cosecant function. (Also written as csch.)
    - **cosh** – hyperbolic cosine function.
    - **cot** – cotangent function.
    - **coth** – hyperbolic cotangent function.
    - **cov** – covariance of a pair of random variables.
    - **csc** – cosecant function. (Also written as cosec.)
    - **csch** – hyperbolic cosecant function. (Also written as cosech.)
    - **curl** – curl of a vector field. (Also written as rot.)
    - **deg** – degree of a polynomial. (Also written as ∂.)
    - **del** – del, a differential operator. (Also written as [\nabla][nabla]（倒
      三角）).)
    - **det** – determinant of a matrix or linear transformation.
    - **dim** – dimension of a vector space.
    - **div** – divergence of a vector field.
    - **dkl** – decalitre（ 公斗；十升）`deca + litre（就是我们常用的 1L 矿泉水）`
    - **dom** – domain of a function. (Or, more generally, a relation.)
    - **erf** – [error function](http://en.wikipedia.org/wiki/Error_function)
    - **erfc** – complementary error function.
    - **exp** – exponential function. (exp x is also written as ex.)
    - **ext** – exterior.
    - **gcd** – greatest common divisor of two numbers. (Also written as hcf.)
    - **glb** – greatest lower bound. (Also written as inf.)
    - **grad** – gradient of a scalar field.
    - **hcf** – highest common factor of two numbers. (Also written as gcd.)
    - **iff** – if and only if.
    - **iid** - independent and identically distributed random variables.
    - **inf** – infimum of a set. (Also written as glb.)
    - **int** – interior.
    - **lcm** – lowest common multiple of two numbers.
    - **lerp** – linear interpolation.
    - **lg** – common logarithm (log10) or binary logarithm (log2).
    - **li** – logarithmic integral function or linearly independent.
    - **lim inf** – limit inferior.
    - **lim sup** – limit superior.
    - **lim** – limit of a sequence, or of a function.
    - **ln** – natural logarithm, loge.
    - **log** – logarithm. (If without a subscript, this may mean either log10 or
      loge.)
    - **logh** – natural logarithm, loge.
    - **lub** – least upper bound. (Also written sup.)
    - **max** – maximum of a set.
    - **min** – minimum of a set.
    - **mod** – modulo.
    - **mx** – matrix.
    - **ord** – ordinal number of a well-ordered set.
    - **pdf** – probability density function.
    - **pf** – proof.
    - **pmf** – probability mass function.
    - **ran** – range of a function.
    - **resp** – respectively.
    - **rng** – non-unital ring.
    - **rot** – rotor of a vector field. (Also written as curl.)
    - **sec** – secant function.
    - **sech** – hyperbolic secant function.
    - **seg** – initial segment of.
    - **sgn** – signum function.
    - **sin** – sine function.
    - **sinc** – sinc function.
    - **sinh** – hyperbolic sine function.
    - **st** – such that or so that.
    - **sup** – supremum of a set. (Also written lub.)
    - **supp** – support of a function.
    - **tan** – tangent function.
    - **tanh** – hyperbolic tangent function.
    - **undef** - a function or expression is undefined
    - **var** – variance of a random variable.
    - **walog** – without any loss of generality.
    - **wff** – well-formed formula.
    - **whp** - with high probability.
    - **wlog** – without loss of generality.
    - **wrt** – with respect to or with regard to.

    refs and see also

      - <https://en.wikipedia.org/wiki/List_of_mathematical_jargon>
      - <https://en.wikipedia.org/wiki/List_of_mathematical_abbreviations>

[nabla]: http://en.wikipedia.org/wiki/Nabla_symbol

M3U -<

:   M3U is a computer file format that contains multimedia playlists.  It
    originally was designed for audio files, such as MP3, but various software
    now uses it to play video file lists.  M3U's can also point a media player
    to an online streaming audio source.  Numerous media players and software
    applications supports the M3U file format.

    Samples

      * Example 1

        ```tzx-plain
        #EXTM3U

        #EXTINF:123, Sample artist - Sample title
        C:\Documents and Settings\I\My Music\Sample.mp3

        #EXTINF:321,Example Artist - Example title
        C:\Documents and Settings\I\My Music\Greatest Hits\Example.ogg
        ```
      * Example 2

        ```tzx-plain
        C:\Music
        ```

      * Example 3

        ```tzx-plain
        #EXTM3U

        #EXTINF:123, Sample artist - Sample title
        ```

      * Example 4

        ```tzx-plain
        Alternative\Band - Song.mp3
        Classical\Other Band - New Song.mp3
        Stuff.mp3
        D:\More Music\Foo.mp3
        ..\Other Music\Bar.mp3
        http://emp.cx:8000/Listen.pls
        http://www.example.com/~user/Mine.mp3
        ```

      * Example 5

        ```tzx-plain
        #EXTM3U
        #EXTINF:233,Everclear - So Much For The Afterglow
        Alternative\everclear_SMFTA.mp3
        #EXTINF:227,Weird Al - Everything You Know Is Wrong
        Comedy\Weird_Al_Everything_You_Know_Is_Wrong.mp3
        #EXTINF:187,Weird Al Yankovic - This is the Life
        Weird_Al_This_Is_The_Life.mp3
        #EXTINF:129,Weird Al: Bad Hair Day - Gump
        http://www.site.com/~user/gump.mp3
        #EXTINF:-1,My Cool Stream
        http://www.site.com:8000/listen.pls
        ```

    `#EXTM3U` At the VERY top of the Extended M3U file is this header, which
    signifies this is an extended M3U file. `#EXTM3U` must be all capital
    letters.

    `#EXTINF:233,Everclear - So Much For The Afterglow`
      ~ This is the line that tends to confuse people. Let's break it up into parts
      ~ `#EXTINF`: This signifies this is an Extended Information field. It
        ends with a colorn.
      ~ `233`: This is the time of the file in seconds followed by a comma.
        (233 seconds = 3:53). On the last entry there is a negative one, this
        is usually seen on streams, it tells the program to ignore the time
        entry.
      ~ `Everclear - So Much For The Afterglow`: Title to display. This is
        usually the title read from the file name or ID3 tags. This also can be
        the name of a stream. No characters follow the title.
      ~ `Alternative\everclear_SMFTA.mp3`: File location as described above
        with basic playlists.

    M3U8

    :   M3U8 is a Unicode UTF-8 version of M3U files for support of
        Unicode/"international" characters/text. M3U8 follows the same principles as
        explained above.

        Example

        ```tzx-plain
        #EXTM3U

        #EXT-X-STREAM-INF:PROGRAM-ID=1,BANDWIDTH=1217000,RESOLUTION=1280x720
        2013girlwithipad-1200k.m3u8

        #EXT-X-STREAM-INF:PROGRAM-ID=1,BANDWIDTH=824000,RESOLUTION=896x504
        2013girlwithipad-800k.m3u8

        #EXT-X-STREAM-INF:PROGRAM-ID=1,BANDWIDTH=629000,RESOLUTION=640x360
        2013girlwithipad-600k.m3u8

        #EXT-X-STREAM-INF:PROGRAM-ID=1,BANDWIDTH=430000,RESOLUTION=512x288
        2013girlwithipad-400k.m3u8

        #EXT-X-STREAM-INF:PROGRAM-ID=1,BANDWIDTH=216000,RESOLUTION=400x300
        2013girlwithipad-200k.m3u8

        #EXT-X-STREAM-INF:PROGRAM-ID=1,BANDWIDTH=121000,RESOLUTION=400x300
        2013girlwithipad-110k.m3u8
        ```

    refs and see also

    -   [M3U - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/M3U)
    -   [M3U Play List Specification - The Schworak Site](http://schworak.com/blog/e39/m3u-play-list-specification/)
    -   [M3U and PLS Specification - Winamp Forums](http://forums.winamp.com/showthread.php?threadid=65772)
    -   [What is an .M3U8 file? m3u8 template - GravityLab](http://www.gravlab.com/2013/07/05/what-is-an-m3u8-file/)
    -   [PLS (file format) - Wikipedia, the free encyclopedia][PLS]
    -   [draft-pantos-http-live-streaming-08 - HTTP Live Streaming](http://tools.ietf.org/html/draft-pantos-http-live-streaming-08)

[PLS]: http://en.wikipedia.org/wiki/PLS_(file_format)
[M3U]: https://gist.github.com/district10/a982f999a7e853d3ca1b

[Leonhard Euler](https://en.wikipedia.org/wiki/Leonhard_Euler) -<

:   <div class="tzx-fright">
    ![Leonhard Euler](https://upload.wikimedia.org/wikipedia/commons/thumb/6/60/Leonhard_Euler_2.jpg/220px-Leonhard_Euler_2.jpg)
    </div>

    Leonhard Euler (`/ˈɔɪlər/ oy-lər`;) (15 April 1707 – 18 September 1783) was
    a pioneering **Swiss mathematician and physicist**. He made important
    discoveries in fields as diverse as infinitesimal calculus and graph
    theory. He also introduced much of the modern mathematical terminology and
    notation, particularly for mathematical analysis, such as the notion of a
    mathematical function. He is also renowned for his work in mechanics, fluid
    dynamics, optics, astronomy, and music theory.

    无穷小量积分、图论，现代的数学命名和标记

    Euler is considered to be the **pre-eminent mathematician of the 18th
    century** and one of the greatest mathematicians to have ever lived. He is
    also one of the most prolific mathematicians; his collected works fill 60–
    80 [quarto（四开）](http://en.wikipedia.org/wiki/Quarto) volumes. He spent
    most of his adult life in St.  Petersburg, Russia, and in Berlin, Prussia.

    A statement attributed to Pierre-Simon Laplace expresses Euler's influence
    on mathematics: "*Read Euler, read Euler, he is the master of us all.*"

[Karl Weierstrass](http://en.wikipedia.org/wiki/Karl_Weierstrass) -<

:   <div class="tzx-fright">
    ![Karl Weierstrass](http://upload.wikimedia.org/wikipedia/commons/thumb/f/f1/Karl_Weierstrass.jpg/220px-Karl_Weierstrass.jpg)
    </div>

    Karl Theodor Wilhelm Weierstrass (German: `Weierstraß`; 31 October 1815 –
    19 February 1897) was a German mathematician often cited as the "father of
    modern analysis". Despite leaving university without a degree, he studied
    mathematics and trained as a teacher, eventually teaching mathematics,
    physics, botany and gymnastics.

    Weierstrass formalized the definition of the continuity of a function, and
    used it and the concept of uniform convergence to prove the Bolzano–
    Weierstrass theorem and Heine–Borel theorem.

[Joseph-Louis Lagrange](http://en.wikipedia.org/wiki/Joseph-Louis_Lagrange) -<

:   <div class="tzx-fright">
    ![Joseph-Louis Lagrange](http://upload.wikimedia.org/wikipedia/commons/thumb/1/19/Lagrange_portrait.jpg/200px-Lagrange_portrait.jpg)
    </div>

    Joseph-Louis Lagrange (`/ləˈɡrɑːndʒ/` or /ləˈɡreɪndʒ/; French: `[laˈgrɑ̃ʒ]`),
    born Giuseppe Lodovico Lagrangia or Giuseppe Ludovico De la Grange
    Tournier (also reported as Giuseppe Luigi Lagrange or Lagrangia) (25
    January 1736 – 10 April 1813), was an Italian Enlightenment Era
    mathematician and astronomer. He made significant contributions to the
    fields of analysis, number theory, and both classical and celestial
    mechanics.

    In 1766, on the recommendation of Euler and d'Alembert, Lagrange succeeded
    Euler as the director of mathematics at the Prussian Academy of Sciences in
    Berlin, Prussia, where he stayed for over twenty years, producing volumes
    of work and winning several prizes of the French Academy of Sciences.
    Lagrange's treatise on analytical mechanics (Mécanique analytique, 4. ed.,
    2 vols. Paris: Gauthier-Villars et fils, 1888–89), written in Berlin and
    first published in 1788, offered the most comprehensive treatment of
    classical mechanics since Newton and formed a basis for the development of
    mathematical physics in the nineteenth century.

    In 1787, at age 51, he moved from Berlin to Paris and became a member of
    the French Academy. He remained in France until the end of his life. He was
    significantly involved in the decimalisation in Revolutionary France,
    became the first professor of analysis at the École Polytechnique upon its
    opening in 1794, founding member of the Bureau des Longitudes and Senator
    in 1799.

[James Stirling] -<

:   <div class="tzx-fright">
    ![Stirling's grave in Greyfriars Kirkyard, Edinburgh, general view. It is
        the small plate between the two large tablets.](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f2/Grave_of_James_Stirling_%281692-1770%29%2C_general_view.jpg/330px-Grave_of_James_Stirling_%281692-1770%29%2C_general_view.jpg)
    </div>

    James Stirling (May 1692 Garden, Stirlingshire – 5 December 1770 Edinburgh)
    was a Scottish mathematician. The Stirling numbers, Stirling permutations,
    and Stirling's approximation are named after him. He also proved the
    correctness of Isaac Newton's classification of cubics.

    Stirling was the third son of Archibald Stirling of Garden, Stirling of
    Keir (Lord Garden, a lord of session). At 18 years of age he went to
    Balliol College, Oxford, where, chiefly through the influence of the Earl
    of Mar, he was nominated (1711) one of Bishop Warner's exhibitioners (or
    Snell exhibitioner) at Balliol. In 1715 he was expelled on account of his
    correspondence with members of the Keir and Garden families, who were noted
    Jacobites, and had been accessory to the "Gathering of the Brig o' Turk" in
    1708.

[James Stirling]: http://en.wikipedia.org/wiki/James_Stirling_(mathematician)

[Joseph Fourier](http://en.wikipedia.org/wiki/Joseph_Fourier) -<

:   <div class="tzx-fright">
    ![Jean-Baptiste Joseph Fourier](https://upload.wikimedia.org/wikipedia/commons/thumb/a/aa/Fourier2.jpg/375px-Fourier2.jpg)
    </div>

    Jean-Baptiste Joseph Fourier (`/ˈfʊəriˌeɪ, -iər/`; French: `[fuʁje]`; 21
    March 1768 – 16 May 1830) was a French mathematician and physicist born in
    Auxerre and best known for initiating the investigation of Fourier series
    and their applications to problems of heat transfer and vibrations. The
    Fourier transform and Fourier's law are also named in his honour. Fourier
    is also generally credited with the discovery of the greenhouse effect.

    There were three important contributions in this work, one purely
    mathematical, two essentially physical. In mathematics, Fourier claimed
    that any function of a variable, whether continuous or discontinuous, can
    be expanded in a series of sines of multiples of the variable. Though this
    result is not correct without additional conditions, Fourier's observation
    that some discontinuous functions are the sum of infinite series was a
    breakthrough. The question of determining when a Fourier series converges
    has been fundamental for centuries.  Joseph-Louis Lagrange had given
    particular cases of this (false) theorem, and had implied that the method
    was general, but he had not pursued the subject.  Peter Gustav Lejeune
    Dirichlet was the first to give a satisfactory demonstration of it with
    some restrictive conditions. This work provides the foundation for what is
    today known as the Fourier transform.

    One important physical contribution in the book was the concept of
    dimensional homogeneity in equations; i.e. an equation can be formally
    correct only if the dimensions match on either side of the equality;
    Fourier made important contributions to dimensional analysis. The other
    physical contribution was Fourier's proposal of his partial differential
    equation for conductive diffusion of heat. This equation is now taught to
    every student of mathematical physics.

[Henri Poincaré](http://en.wikipedia.org/wiki/Henri_Poincar%C3%A9) -<

:   ![Henri Poincaré](http://upload.wikimedia.org/wikipedia/commons/thumb/4/45/Henri_Poincar%C3%A9-2.jpg/230px-Henri_Poincar%C3%A9-2.jpg){align=right}

    Jules Henri Poincaré (French: `[ʒyl ɑ̃ʁi pwɛ̃kaʁe]`; 29 April 1854 – 17 July
    1912) was a French mathematician, theoretical physicist, engineer, and a
    philosopher of science. He is often described as a polymath, and in
    mathematics as The Last Universalist by Eric Temple Bell, since he excelled
    in all fields of the discipline as it existed during his lifetime.

    As a mathematician and physicist, he made many original fundamental
    contributions to pure and applied mathematics, mathematical physics, and
    celestial mechanics. He was responsible for formulating the Poincaré
    conjecture, which was one of the most famous unsolved problems in
    mathematics until it was solved in 2002–2003. In his research on the
    three-body problem, Poincaré became the first person to discover a chaotic
    deterministic system which laid the foundations of modern chaos theory. He
    is also considered to be one of the founders of the field of topology.

    Poincaré made clear the importance of paying attention to the invariance of
    laws of physics under different transformations, and was the first to
    present the Lorentz transformations in their modern symmetrical form.
    Poincaré discovered the remaining relativistic velocity transformations and
    recorded them in a letter to Dutch physicist Hendrik Lorentz (1853–1928) in
    1905. Thus he obtained perfect invariance of all of Maxwell's equations, an
    important step in the formulation of the theory of special relativity.

    The Poincaré group used in physics and mathematics was named after him.

[Issac Newton](http://en.wikipedia.org/wiki/Isaac_Newton) -<

:   ![Issac Newton](http://upload.wikimedia.org/wikipedia/commons/thumb/3/39/GodfreyKneller-IsaacNewton-1689.jpg/220px-GodfreyKneller-IsaacNewton-1689.jpg){align=right}

    Sir Isaac Newton Kt, PRS (`/ˈnjuːtən/`; 25 December 1642 – 20 March
    1726/27) was an English physicist and mathematician (described in his own
    day as a "natural philosopher") who is widely recognised as one of the most
    influential scientists of all time and a key figure in the scientific
    revolution. His book Philosophiæ Naturalis Principia Mathematica
    ("Mathematical Principles of Natural Philosophy"), first published in 1687,
    laid the foundations for classical mechanics. Newton made seminal
    contributions to optics, and he shares credit with Gottfried Leibniz for
    the development of calculus.

    Newton's Principia formulated the laws of motion and universal gravitation,
    which dominated scientists' view of the physical universe for the next
    three centuries. By deriving Kepler's laws of planetary motion from his
    mathematical description of gravity, and then using the same principles to
    account for the trajectories of comets, the tides, the precession of the
    equinoxes, and other phenomena, Newton removed the last doubts about the
    validity of the heliocentric model of the Solar System. This work also
    demonstrated that the motion of objects on Earth and of celestial bodies
    could be described by the same principles. His prediction that Earth should
    be shaped as an oblate spheroid was later vindicated by the measurements of
    Maupertuis, La Condamine, and others, which helped convince most
    Continental European scientists of the superiority of Newtonian mechanics
    over the earlier system of Descartes.

    Newton built the first practical reflecting telescope and developed a
    theory of colour based on the observation that a prism decomposes white
    light into the many colours of the visible spectrum. He formulated an
    empirical law of cooling, studied the speed of sound, and introduced the
    notion of a Newtonian fluid. In addition to his work on calculus, as a
    mathematician Newton contributed to the study of power series, generalised
    the binomial theorem to non-integer exponents, developed a method for
    approximating the roots of a function, and classified most of the cubic
    plane curves.

    Newton was a fellow of Trinity College and the second Lucasian Professor of
    Mathematics at the University of Cambridge. He was a devout but unorthodox
    Christian and, unusually for a member of the Cambridge faculty of the day,
    he refused to take holy orders in the Church of England, perhaps because he
    privately rejected the doctrine of the Trinity. Beyond his work on the
    mathematical sciences, Newton dedicated much of his time to the study of
    biblical chronology and alchemy, but most of his work in those areas
    remained unpublished until long after his death. In his later life, Newton
    became president of the Royal Society. Newton served the British government
    as Warden and Master of the Royal Mint.

[Henri Lebesgue](http://en.wikipedia.org/wiki/Henri_Lebesgue) -<

:   ![Henri Lebesgue](http://upload.wikimedia.org/wikipedia/commons/thumb/3/3e/Lebesgue_2.jpeg/225px-Lebesgue_2.jpeg){align=right}

    Henri Léon Lebesgue (French: `[ɑ̃ʁi leɔ̃ ləbɛɡ]`; June 28, 1875 –
    July 26, 1941) was a French mathematician most famous for his theory of
    integration, which was a generalization of the 17th century concept of
    integration—summing the area between an axis and the curve of a function
    defined for that axis. His theory was published originally in his
    dissertation Intégrale, longueur, aire ("Integral, length, area") at the
    University of Nancy during 1902.

    <div class="tzx-fleft">
    ![Approximation of the Riemann integral by rectangular areas.](https://upload.wikimedia.org/wikipedia/commons/thumb/e/ee/Riemann.gif/330px-Riemann.gif)
    </div>

    Lebesgue invented a new method of integration to solve this problem.
    Instead of using the areas of rectangles, which put the focus on the domain
    of the function, Lebesgue looked at the codomain of the function for his
    fundamental unit of area. Lebesgue's idea was to first define measure, for
    both sets and functions on those sets. He then proceeded to build the
    integral for what he called simple functions; measurable functions that
    take only finitely many values. Then he defined it for more complicated
    functions as the least upper bound of all the integrals of simple functions
    smaller than the function in question.

    Lebesgue integration has the property that every function defined over a
    bounded interval with a Riemann integral also has a Lebesgue integral, and
    for those functions the two integrals agree. Furthermore, every bounded
    function on a closed bounded interval has a Lebesgue integral and there are
    many functions with a Lebesgue integral that have no Riemann integral.

    ![Method of Lebesgue's integration.](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2a/Integral_of_positive_function.svg/330px-Integral_of_positive_function.svg.png){align=right}

    As part of the development of Lebesgue integration, Lebesgue invented the
    concept of measure, which extends the idea of length from intervals to a
    very large class of sets, called measurable sets (so, more precisely,
    simple functions are functions that take a finite number of values, and
    each value is taken on a measurable set). Lebesgue's technique for turning
    a measure into an integral generalises easily to many other situations,
    leading to the modern field of measure theory.

    The Lebesgue integral is deficient in one respect. The Riemann integral
    generalises to the improper Riemann integral to measure functions whose
    domain of definition is not a closed interval. The Lebesgue integral
    integrates many of these functions (always reproducing the same answer when
    it did), but not all of them. For functions on the real line, the Henstock
    integral is an even more general notion of integral (based on Riemann's
    theory rather than Lebesgue's) that subsumes both Lebesgue integration and
    improper Riemann integration. However, the Henstock integral depends on
    specific ordering features of the real line and so does not generalise to
    allow integration in more general spaces (say, manifolds), while the
    Lebesgue integral extends to such spaces quite naturally.

[Guillaume de l'Hôpital](http://en.wikipedia.org/wiki/Guillaume_de_l%27H%C3%B4pital) -<

:   ![Guillaume de l'Hôpital](http://upload.wikimedia.org/wikipedia/commons/thumb/a/a3/Guillaume_de_l%27H%C3%B4pital.jpg/220px-Guillaume_de_l%27H%C3%B4pital.jpg){align=right}

    Guillaume François Antoine, Marquis de l'Hôpital (French: `[ɡijom fʁɑ̃swa ɑ̃
    twan maʁki də lopital]`; 1661 – 2 February 1704) was a French
    mathematician. His name is firmly associated with l'Hôpital's rule for
    calculating limits involving indeterminate forms 0/0 and ∞/∞. Although the
    rule did not originate with l'Hôpital, it appeared in print for the first
    time in his treatise on the infinitesimal calculus, entitled Analyse des
    Infiniment Petits pour l'Intelligence des Lignes Courbes. This book was a
    first systematic exposition of differential calculus. Several editions and
    translations to other languages were published and it became a model for
    subsequent treatments of calculus.

    L'Hôpital was born into a military family. His father was Anne-Alexandre de
    l'Hôpital, a Lieutenant-General of the King's army, Comte de Sainte-Mesme
    and the first squire of Gaston, Duke of Orléans. His mother was Elisabeth
    Gobelin, a daughter of Claude Gobelin, Intendant in the King's Army and
    Councilor of the State.

    L'Hôpital abandoned a military career due to poor eyesight and pursued his
    interest in mathematics, which was apparent since his childhood. For a
    while, he was a member of Nicolas Malebranche's circle in Paris and it was
    there that in 1691 he met young Johann Bernoulli, who was visiting France
    and agreed to supplement his Paris talks on infinitesimal calculus with
    private lectures to l'Hôpital at his estate at Oucques. In 1693, l'Hôpital
    was elected to the French academy of sciences and even served twice as its
    vice-president. Among his accomplishments were the determination of the arc
    length of the logarithmic graph, one of the solutions to the
    brachistochrone problem, and the discovery of a turning point singularity
    on the involute of a plane curve near an inflection point.

    L'Hôpital exchanged ideas with Pierre Varignon and corresponded with
    Gottfried Leibniz, Christiaan Huygens, and Jacob and Johann Bernoulli. His
    Traité analytique des sections coniques et de leur usage pour la résolution
    des équations dans les problêmes tant déterminés qu'indéterminés ("Analytic
    treatise on conic sections") was published posthumously in Paris in 1707.

[Gottfried Willhelm Leibniz](http://en.wikipedia.org/wiki/Gottfried_Wilhelm_Leibniz) -<

:   <div class="tzx-fright">
    ![leibniz-portrait](http://upload.wikimedia.org/wikipedia/commons/thumb/6/6a/Gottfried_Wilhelm_von_Leibniz.jpg/220px-Gottfried_Wilhelm_von_Leibniz.jpg)
    </div>

    Gottfried Wilhelm (von) Leibniz (`/ˈlaɪbnɪts/`; German: `[ˈɡɔtfʁiːt ˈvɪlhɛ
    lm fɔn ˈlaɪbnɪts]` or `[ˈlaɪpnɪts]`; French: Godefroi Guillaume Leibnitz;
    July 1, 1646 – November 14, 1716) was **a German polymath and philosopher
    who occupies a prominent place in the history of mathematics and the
    history of philosophy. Scholars including Bertrand Russell believe Leibniz
    developed calculus independently of Isaac Newton, and Leibniz's notation
    has been widely used ever since it was published. It was only in the 20th
    century that his Law of Continuity and Transcendental Law of Homogeneity
    found mathematical implementation (by means of non-standard analysis). He
    became one of the most prolific inventors in the field of mechanical
    calculators.  While working on adding automatic multiplication and division
    to Pascal's calculator, he was the first to describe a pinwheel calculator
    in 1685 and invented the Leibniz wheel, used in the arithmometer, the first
    mass-produced mechanical calculator. He also refined the binary number
    system, which is the foundation of virtually all digital computers.

    In philosophy, Leibniz is most noted for his **optimism**, i.e. his
    conclusion that our Universe is, in a restricted sense, the best possible
    one that God could have created, an idea that was often lampooned by others
    such as Voltaire. Leibniz, along with René Descartes and Baruch Spinoza,
    was one of the three great 17th-century advocates of rationalism. The work
    of Leibniz anticipated modern logic and analytic philosophy, but his
    philosophy also looks back to the scholastic tradition, in which
    conclusions are produced by applying reason of first principles or prior
    definitions rather than to empirical evidence.

    Leibniz made major contributions to physics and technology, and anticipated
    notions that surfaced much later in philosophy, probability theory,
    biology, medicine, geology, psychology, linguistics, and computer science.
    He wrote works on philosophy, politics, law, ethics, theology, history, and
    philology. Leibniz's contributions to this vast array of subjects were
    scattered in various learned journals, in tens of thousands of letters, and
    in unpublished manuscripts. He wrote in several languages, but primarily in
    Latin, French, and German. There is no complete gathering of the writings
    of Leibniz.

[Giuseppe Peano](http://en.wikipedia.org/wiki/Giuseppe_Peano) -<

:   ![Giuseppe Peano](https://upload.wikimedia.org/wikipedia/commons/thumb/3/3a/Giuseppe_Peano.jpg/330px-Giuseppe_Peano.jpg){align=right}

    Giuseppe Peano (Italian: `[dʒuˈzɛppe peˈaːno]`; 27 August 1858 – 20 April
    1932) was **an Italian mathematician**. The author of over 200 books and
    papers, he was a founder of mathematical logic and set theory, to which he
    contributed much notation. The standard axiomatization of the natural
    numbers is named the Peano axioms in his honor. As part of this effort, he
    made key contributions to the modern rigorous and systematic treatment of
    the method of mathematical induction. He spent most of his career teaching
    mathematics at the University of Turin.

    After his mother died in 1910, Peano divided his time between teaching,
    working on texts aimed for secondary schooling including a dictionary of
    mathematics, and developing and promoting his and other auxiliary
    languages, becoming a revered member of the international auxiliary
    language movement. He used his membership of the Accademia dei Lincei to
    present papers written by friends and colleagues who were not members (the
    Accademia recorded and published all presented papers given in sessions).

    During the years 1913–1918, Peano published several papers that dealt with
    the remainder term for various numerical quadrature formulas, and
    introduced the Peano kernel.

    In 1925 Peano switched Chairs unofficially from Infinitesimal Calculus to
    Complementary Mathematics, a field which better suited his current style of
    mathematics. This move became official in 1931. Giuseppe Peano continued
    teaching at Turin University until the day before he died, when he suffered
    a fatal heart attack.

[George Green](http://en.wikipedia.org/wiki/George_Green) -<

:   ![The title page to Green's original essay on what is now known as
        Green's theorem.](http://upload.wikimedia.org/wikipedia/commons/thumb/b/b5/GreenEssay.png/220px-GreenEssay.png)

    George Green (14 July 1793 – 31 May 1841) was a British mathematical
    physicist who wrote An Essay on the Application of Mathematical Analysis to
    the Theories of Electricity and Magnetism (Green, 1828). The essay
    introduced several important concepts, among them a theorem similar to the
    modern Green's theorem, the idea of potential functions as currently used
    in physics, and the concept of what are now called Green's functions. Green
    was the first person to create a mathematical theory of electricity and
    magnetism and his theory formed the foundation for the work of other
    scientists such as James Clerk Maxwell, William Thomson, and others. His
    work on potential theory ran parallel to that of Carl Friedrich Gauss.

    Green's life story is remarkable in that he was almost entirely
    self-taught. He received only about one year of formal schooling as a
    child, between the ages of 8 and 9.

    In his final years at Cambridge, Green became rather ill, and in 1840 he
    returned to Sneinton, only to die a year later. There are rumours that at
    Cambridge, Green had "succumbed to alcohol", and some of his earlier
    supporters, such as Sir Edward Bromhead, tried to distance themselves from
    him.

    Green's work was not well known in the mathematical community during his
    lifetime. Besides Green himself, the first mathematician to quote his 1828
    work was the Briton Robert Murphy (1806–1843) in his 1833 work. In 1845,
    four years after Green's death, Green's work was rediscovered by the young
    William Thomson (then aged 21), later known as [Lord Kelvin](#lord-kelvin), who popularised
    it for future mathematicians. According to the book "George Green" by D.M.
    Cannell, William Thomson noticed Murphy's citation of Green's 1828 essay
    but found it difficult to locate Green's 1828 work; he finally got some
    copies of Green's 1828 work from William Hopkins in 1845.

[Gamma Function](http://en.wikipedia.org/wiki/Gamma_function) -<

:   ![](http://upload.wikimedia.org/wikipedia/commons/thumb/b/b9/Factorial_Interpolation.svg/250px-Factorial_Interpolation.svg.png)

    <div class="tzx-fright">
    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/7/74/Jahnke_gamma_function.png/300px-Jahnke_gamma_function.png)
    </div>

    In mathematics, the gamma function (represented by the capital Greek letter
    Γ) is an extension of the factorial function, with its argument shifted
    down by 1, to real and complex numbers. That is, if n is a positive
    integer:

    $$\Gamma(n) = (n-1)!.$$

    The gamma function is defined for all complex numbers except the
    non-positive integers. For complex numbers with a positive real part, it is
    defined via a convergent improper integral:

    $$\Gamma(t) = \int_0^\infty x^{t-1} e^{-x}\,dx.$$

    This integral function is extended by analytic continuation to all complex
    numbers except the non-positive integers (where the function has simple
    poles), yielding the meromorphic function we call the gamma function. In
    fact the gamma function corresponds to the Mellin transform of the negative
    exponential function:

    <!--
    no mathjax support in reads.html (supporting mathjax in this page will slow page rendering)
    $$\Gamma(t) = { \mathcal M e^{-x} }(t).$$

    use codecogs instead
    ![](http://latex.codecogs.com/gif.latex?%5CGamma%28t%29%20%3D%20%5C%7B%20%5Cmathcal%20M%20e%5E%7B-x%7D%20%5C%7D%28t%29.)

    or use wikipedia equation image url
    ![](https://upload.wikimedia.org/math/c/a/5/ca5a7eb3de47e2cc3c06348778780ee8.png)

    eh... sames they are all the same... BTW, Codecogs is open source.
    -->

    ![](https://upload.wikimedia.org/math/c/a/5/ca5a7eb3de47e2cc3c06348778780ee8.png)

    The gamma function is a component in various probability-distribution
    functions, and as such it is applicable in the fields of probability and
    statistics, as well as combinatorics.

[Georg Cantor](http://en.wikipedia.org/wiki/Georg_Cantor) -<

:   <div class="tzx-fleft">
    ![Georg Cantor](http://upload.wikimedia.org/wikipedia/commons/thumb/e/e7/Georg_Cantor2.jpg/225px-Georg_Cantor2.jpg)
    </div>

    Georg Ferdinand Ludwig Philipp Cantor (`/ˈkæntɔːr/` KAN-tor; German: `[ˈɡeɔ
    ʁkˈfɛʁdinant ˈluːtvɪç ˈfɪlɪp ˈkantɔʁ]`; March 3 [O.S. February 19] 1845 –
    January 6, 1918) was a German mathematician. He invented set theory, which
    has become a fundamental theory in mathematics. Cantor established the
    importance of one-to-one correspondence between the members of two sets,
    defined infinite and well-ordered sets, and proved that the real numbers
    are more numerous than the natural numbers. In fact, Cantor's method of
    proof of this theorem implies the existence of an "infinity of infinities".
    He defined the cardinal and ordinal numbers and their arithmetic. Cantor's
    work is of great philosophical interest, a fact of which he was well aware.

    Cantor's theory of transfinite numbers was originally regarded as so
    counter-intuitive – even shocking – that it encountered resistance from
    mathematical contemporaries such as Leopold Kronecker and Henri Poincaré
    and later from Hermann Weyl and L. E. J. Brouwer, while Ludwig Wittgenstein
    raised philosophical objections. Cantor, a devout Lutheran, believed the
    theory had been communicated to him by God. Some Christian theologians
    (particularly neo-Scholastics) saw Cantor's work as a challenge to the
    uniqueness of the absolute infinity in the nature of God – on one occasion
    equating the theory of transfinite numbers with pantheism – a proposition
    that Cantor vigorously rejected.

    The objections to Cantor's work were occasionally fierce: Henri Poincaré
    referred to his ideas as a "grave disease" infecting the discipline of
    mathematics, and Leopold Kronecker's public opposition and personal attacks
    included describing Cantor as a "scientific charlatan", a "renegade" and a
    "corrupter of youth." Kronecker objected to Cantor's proofs that the
    algebraic numbers are countable, and that the transcendental numbers are
    uncountable, results now included in a standard mathematics curriculum.
    Writing decades after Cantor's death, Wittgenstein lamented that
    mathematics is "ridden through and through with the pernicious idioms of
    set theory," which he dismissed as "utter nonsense" that is "laughable" and
    "wrong". Cantor's recurring bouts of depression from 1884 to the end of his
    life have been blamed on the hostile attitude of many of his
    contemporaries, though some have explained these episodes as probable
    manifestations of a bipolar disorder.

    The harsh criticism has been matched by later accolades. In 1904, the Royal
    Society awarded Cantor its Sylvester Medal, the highest honor it can confer
    for work in mathematics. David Hilbert defended it from its critics by
    declaring: "No one shall expel us from the Paradise that Cantor has
    created."

Donald Ervin Knuth -<

:   ![](http://upload.wikimedia.org/wikipedia/commons/thumb/4/4f/KnuthAtOpenContentAlliance.jpg/192px-KnuthAtOpenContentAlliance.jpg)

    Donald Ervin Knuth (/kəˈnuːθ/ kə-nooth; born January 10, 1938) is an American
    computer scientist, mathematician, and Professor Emeritus at Stanford
    University.

    美国程序员、数学家、Stanford 大学教授

    He is the author of the multi-volume work The Art of Computer Programming.
    Knuth has been called the "father" of the analysis of algorithms. He
    contributed to the development of the rigorous analysis of the computational
    complexity of algorithms and systematized formal mathematical techniques for
    it. In the process he also popularized the [asymptotic notation]. In addition
    to fundamental contributions in several branches of theoretical computer
    science, Knuth is the creator of the TeX computer typesetting system, the
    related METAFONT font definition language and rendering system, and the
    Computer Modern family of typefaces.

    TAOCP（计算机程序艺术）的作者；算法分析之父；TeX、METAFONT 作者；

    As a writer and scholar, Knuth created the WEB and CWEB computer programming
    systems designed to encourage and facilitate **literate programming**, and
    designed the MIX/MMIX instruction set architectures. As a member of the
    academic and scientific community, Knuth is strongly opposed to the policy of
    granting software patents. He has expressed his disagreement directly to both
    the United States Patent and Trademark Office and European Patent Organization.

    文学性编程；反对软件专利；

    **Early life**

    winning a contest when he was in eighth grade by finding over 4,500 words that
    could be formed from the letters in "Ziegler's Giant Bar"; the judges had only
    about 2,500 words on their master list.

    **Education**

    Physics or Music

    1963 PhD in mathematics MIT

    **Early work**

    *TAOCP*

    **Writings**

    *TAOCP* TeX, METAFONT *TAOCP*
    *Surreal Numbers*
    *3:16 Bible Texts Illuminated*

    **Health concerns**

    2006 prostate cancer pretty good

    **Computer musings**

    informal lectures at Stanford

    **Humor**

    pay a [finder's fee]

    **Awards**

    Honors bestowed on Knuth include:

    First ACM Grace Murray Hopper Award, 1971
    Turing Award, 1974
    Josiah Willard Gibbs Lecturer, 1978
    National Medal of Science, 1979
    Franklin Medal, 1988
    John von Neumann Medal, 1995
    Harvey Prize from the Technion, 1995
    Kyoto Prize, 1996
    Fellow of the Computer History Museum, 1998
    Katayanagi Prize, 2010
    BBVA Foundation Frontiers of Knowledge Award, 2010
    Stanford University School of Engineering Hero Award, 2011

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/e/e9/Donald_Knuth_in_front_of_statue_St._Mesrop_Mashtots_%28inventor_of_the_Armenian%2C_Georgian_and_Caucasian_Albanian_alphabets_in_the_4th_century%29%2C_Matenadaran%2C_Yerevan%2C_Armenia%2C_June_2006%2C_LA.jpg/195px-thumbnail.jpg)

    **Homepage**

    ![](http://www-cs-faculty.stanford.edu/~uno/don.gif)

    **F.A.Q.**

    [关于退休](http://www-cs-faculty.stanford.edu/~uno/retd.html)

    > I retired early because I realized that I would need about 20 years of
    > full-time work to complete The Art of Computer Programming (TAOCP), which I
    > have always viewed as the most important project of my life.

    [邮件](http://www-cs-faculty.stanford.edu/~uno/email.html)

    1990 再不用邮箱

    解释 e-mail -> email

    [最爱的编程语言](http://www-cs-faculty.stanford.edu/~uno/cweb.html)

    *The CWEB System of Structured Documentation*
    *Literate Programming*

    [出版的书](http://www-cs-faculty.stanford.edu/~uno/books.html)

    * *TAOCP*
    * *The TeXbook*, *The METAFONTbook*, *Computers & Typesetting*
    * *Concrete Mathematics*

    [为什么不写支票了？](http://www-cs-faculty.stanford.edu/~uno/news08.html)

    How do you pronounce your last name?
    Knuth (Ka-NOOTH)

    关于中文名 ![](http://www-cs-faculty.stanford.edu/~uno/gaoduhnah.gif)

    ![](http://www-cs-faculty.stanford.edu/~uno/chop.jpeg)

    **[Curriculum Vitæ](http://www-cs-faculty.stanford.edu/~uno/vita.html)**

    > I may not be able to read your message until many months have gone by,
    > because I'm working intensively on The Art of Computer Programming. However,
    > I promise to reply in due time.

    [Programs to Read](http://www-cs-faculty.stanford.edu/~uno/programs.html)


    [![](http://gnat.qiniudn.com/pic/Donald-E.-Knuth.png)](http://www-cs-faculty.stanford.edu/~uno/dek-14May10-1.jpeg)

    段子等

    -   [科学网—图灵奖史上最年轻获奖者高德纳：把一件平常事做到人间极致](http://news.sciencenet.cn/htmlnews/2010/3/229434.shtm)
    -   [八卦高德纳 (评论: 计算机程序设计艺术（第 1 卷）)](http://book.douban.com/review/5384627/)
    -   [科学松鼠会 » 近看图灵碗 (8. 我就是上帝) (上)](http://songshuhui.net/archives/33469)
    -   [科学松鼠会 » 近看图灵碗 (8. 我就是上帝) (下)](http://songshuhui.net/archives/34291)
    -   [Donald E. Knuth | Wikipedia](http://en.wikipedia.org/wiki/Donald_Knuth)

[Galileo Galilei](http://en.wikipedia.org/wiki/Galileo_Galilei) -<

:   ![galilei-portrait]

[galilei-portrait]: http://upload.wikimedia.org/wikipedia/commons/thumb/d/d4/Justus_Sustermans_-_Portrait_of_Galileo_Galilei%2C_1636.jpg/220px-Justus_Sustermans_-_Portrait_of_Galileo_Galilei%2C_1636.jpg

[asymptotic notation]: http://mathworld.wolfram.com/AsymptoticNotation.html
[finder's fee]: http://en.wikipedia.org/wiki/Finder%27s_fee

Math Functions -<

:   Function

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/3/3b/Function_machine2.svg/220px-Function_machine2.svg.png)

    Affine Function

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/7/76/Gerade.svg/220px-Gerade.svg.png)

    Quadric Function

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/f/f8/Polynomialdeg2.svg/220px-Polynomialdeg2.svg.png)

    Continuous Function

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/3/39/Uniform_continuity_animation.gif/220px-Uniform_continuity_animation.gif)

    Trignometric Function

    ![](http://gnat-tang-shared-image.qiniudn.com/pic/sin.png)
    ![](http://gnat-tang-shared-image.qiniudn.com/pic/cos.png)
    ![](http://gnat-tang-shared-image.qiniudn.com/pic/tan.png)

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/7/7e/Trigonometry_triangle.svg/288px-Trigonometry_triangle.svg.png)

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/3/3b/Circle_cos_sin.gif/300px-Circle_cos_sin.gif)

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/9/9d/Circle-trig6.svg/640px-Circle-trig6.svg.png)

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/0/0a/Synthesis_square.gif/340px-Synthesis_square.gif)

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/b/b7/Sawtooth_Fourier_Animation.gif/280px-Sawtooth_Fourier_Animation.gif)

    Exponential

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/4/4d/Root_graphs.svg/450px-Root_graphs.svg.png)

    ![](http://upload.wikimedia.org/wikipedia/commons/thumb/0/0e/ExpIPi.gif/300px-ExpIPi.gif)

    refs and see also

    -   [Function | Wikipedia][function]
    -   [Affine Transformation](http://en.wikipedia.org/wiki/Affine_transformation)
    -   [Quadric Function](http://en.wikipedia.org/wiki/Quadratic_function)
    -   [Continuous Function](http://en.wikipedia.org/wiki/Continuous_function)
    -   [Trignometric Function](http://en.wikipedia.org/wiki/Trigonometric_functions)
    -   [Hyperbolic Function](http://en.wikipedia.org/wiki/Hyperbolic_function)
    -   [幂函数](http://zh.wikipedia.org/wiki/%E5%B9%82%E5%87%BD%E6%95%B0)
    -   [Exponential](http://en.wikipedia.org/wiki/Exponentiation#rational-exponents)

    "**Even Homer nods**"，太过分了。。。

[function]: http://en.wikipedia.org/wiki/Function_(mathematics)

The Hacker's Code -<

:   >   "A hacker of the Old Code."

    -   Hackers come and go, but a great hack is forever.
    -   Public goods belong to the public.
    -   Software hoarding is evil.
        Software does the greatest good given to the greatest number.
    -   Don't be evil.
    -   Sourceless software sucks.
    -   People have rights.
        Organizations live on sufferance(容许).
    -   Governments are organizations.
    -   If it is wrong when citizens do it,
        it is wrong when governments do it.
    -   Information wants to be free.
        Information *deserves* to be free.
    -   Being legal doesn't make it right.
    -   Being illegal doesn't make it wrong.
    -   Subverting tyranny is the highest duty.
    -   Trust your technolust!

    The Hacker's Code of Ethics

    :   Levy (1984) suggests that there is a "code of ethics" for hacking which,
        though not pasted on the walls, is in the air:

        -   Access to Computers - and anything which might teach you something about
            the way the world works - should be unlimited and total. Always yield to
            the Hands-On Imperative!
        -   All information should be free.
        -   Mistrust Authority - Promote Decentralization.
        -   Hackers should be judged by their hacking, not bogus criteria such as
            degrees, age, race, or position.
        -   You can create art and beauty on a computer.
        -   Computers can change your life for the better.

    *DRAFT* The Hacker's Code *DRAFT*

    :   Preamble: We, the people of the electronic universe, in order to establish
        a society of knowledge and skills, do hereby proclaim the following.

        -   Hackers are diverse, from all cultures and backgrounds. Every
            hacker is unique, yet we all share some characteristics. While not
            every hacker follows this Code, many believe it is a fair
            description of our shared traditions, goals and values.
        -   Hackers share and are willing to teach their knowledge
        -   Hackers are skilled. Many are self-taught, or learn by interacting
            with other hackers.
        -   Hackers seek knowledge. This knowledge may come from unauthorized
            or unusual sources, and is often hidden.
        -   Hackers are tinkerers. They like to understand how things work, and
            want to make their own improvements or modifications.
        -   Hackers often disagree with authority, including parents,
            employers, social customs and laws. They often seek to circumvent
            authority they disagree with.
        -   Hackers disagree with each other. Different hackers have different
            values, and come from all backgrounds. This means that what one
            hacker is opposed to might be embraced by another.
        -   Hackers are persistent, and are willing to devote hours, days and
            years to pursuing their individual passions.
        -   This Code is not to prescribe how hackers act. Instead, it is to
            help us to recognize our own diversity and identify.
        -   Every hacker must make his or her own decisions about what is right
            or wrong, and some might do things they believe are illegal, amoral
            or anti-social to achieve higher goals.
        -   Hackers' motivations are their own, and there is no reason for all
            hackers to agree.
        -   Hackers have a shared identify, however, and many shared interests.
        -   By reading this Code, hackers can recognize themselves and each
            other, and understand better the group they are a part of. This
            will be beneficial to all hackers.

    The Conscience of a Hacker

    :   ~~~ {.tzx-poem #hacker-code}
                                       ==Phrack Inc.==

                            Volume One, Issue 7, Phile 3 of 10

        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
        The following was written shortly after my arrest...

                               \/\The Conscience of a Hacker/\/

                                              by

                                       +++The Mentor+++

                                  Written on January 8, 1986
        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

                Another one got caught today, it's all over the papers.  "Teenager
        Arrested in Computer Crime Scandal", "Hacker Arrested after Bank Tampering"...
                Damn kids.  They're all alike.

                But did you, in your three-piece psychology and 1950's technobrain,
        ever take a look behind the eyes of the hacker?  Did you ever wonder what
        made him tick, what forces shaped him, what may have molded him?
                I am a hacker, enter my world...
                Mine is a world that begins with school... I'm smarter than most of
        the other kids, this crap they teach us bores me...
                Damn underachiever.  They're all alike.

                I'm in junior high or high school.  I've listened to teachers explain
        for the fifteenth time how to reduce a fraction.  I understand it.  "No, Ms.
        Smith, I didn't show my work.  I did it in my head..."
                Damn kid.  Probably copied it.  They're all alike.

                I made a discovery today.  I found a computer.  Wait a second, this is
        cool.  It does what I want it to.  If it makes a mistake, it's because I
        screwed it up.  Not because it doesn't like me...
                        Or feels threatened by me...
                        Or thinks I'm a smart ass...
                        Or doesn't like teaching and shouldn't be here...
                Damn kid.  All he does is play games.  They're all alike.

                And then it happened... a door opened to a world... rushing through
        the phone line like heroin through an addict's veins, an electronic pulse is
        sent out, a refuge from the day-to-day incompetencies is sought... a board is
        found.
                "This is it... this is where I belong..."
                I know everyone here... even if I've never met them, never talked to
        them, may never hear from them again... I know you all...
                Damn kid.  Tying up the phone line again.  They're all alike...

                You bet your ass we're all alike... we've been spoon-fed baby food at
        school when we hungered for steak... the bits of meat that you did let slip
        through were pre-chewed and tasteless.  We've been dominated by sadists, or
        ignored by the apathetic.  The few that had something to teach found us will-
        ing pupils, but those few are like drops of water in the desert.

                This is our world now... the world of the electron and the switch, the
        beauty of the baud.  We make use of a service already existing without paying
        for what could be dirt-cheap if it wasn't run by profiteering gluttons, and
        you call us criminals.  We explore... and you call us criminals.  We seek
        after knowledge... and you call us criminals.  We exist without skin color,
        without nationality, without religious bias... and you call us criminals.
        You build atomic bombs, you wage wars, you murder, cheat, and lie to us
        and try to make us believe it's for our own good, yet we're the criminals.

                Yes, I am a criminal.  My crime is that of curiosity.  My crime is
        that of judging people by what they say and think, not what they look like.
        My crime is that of outsmarting you, something that you will never forgive me
        for.

                I am a hacker, and this is my manifesto.  You may stop this individual,
        but you can't stop us all... after all, we're all alike.

                                       +++The Mentor+++
        _______________________________________________________________________________
        ~~~

    refs and see also

    -   [黑客的价值观 | 酷 壳 - CoolShell.cn](http://coolshell.cn/articles/2439.html)
    -   [The Hacker's Code](http://muq.org/~cynbe/hackers-code.html)
    -   [The Hacker's Code of Ethics](http://courses.cs.vt.edu/cs3604/lib/WorldCodes/Hackers.Code.html)
    -   [The Hacker's Code: Related](http://www.petascale.org/code/code.html)
    -   [The Conscience of a Hacker](http://www.phrack.org/archives/issues/7/3.txt)
    -   [Hacker Manifesto - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/Hacker_Manifesto)

Math Abbrev -<

:   -   公理，定理
    -   函数，幂函数，指数函数（和对数函数），三角函数==> e^x
    -   Group，Field，Ring

    数学符号

    -   a, b, c, d, e, f, g, h
    -   i, j, k
    -   m, n
    -   p, q, r, s, t
    -   u, v, w
    -   x, y, z
    -   omega, episilon
    -   pi, tau, etc

大哥大嫂过年好 -<

:   大哥大嫂过年好，大哥大嫂过年好，大哥大嫂过年好

    抱歉用姜文的鬼子来了开个恶趣味的玩笑

    本小站是成人英语学习研究基地，站长呢，没啥本事，在一家所谓外企工作，大学时候参
    加过 CCTV 杯，对英文教学试验特别感兴趣，因为工作关系大姨妈经常犯，所以就在线做
    些感兴趣的事情减减压

    本小站目标：以最科学高效的语言学理论和最牛叉有趣的学习材料作支撑，加上你自己的
    一点小坚持——每天 1-2 小时，依个人基础不同，1-2 年后人人都可习得英文，美剧电影随
    便看，口语流利自然说，原版教材小说随便读

    很有趣是么？很不幸，先自问下一天 1-2 时，一年时间不动摇你能做到么？哈哈哈

    在进入正文之前，先做个自测

    1，在此前有没有照着录音一句话一句话暂停反复模仿的经历，如果有，请问每天一小时，
    最长坚持过多久，有没有超过三周？2，在此前有没有坚持做听写的经历，如果有，每天一
    小时，请问有没有坚持超过两周？3，你觉得自己看到不认识的单词的音标能做到比较标准
    的读出来么？4，估算下自己听英语的输入量大概有多少个小时，是否曾经每天坚持听 1-2
    个小时的英文（随便什么，新闻，有声书之类，但中文字幕或中英字幕的美剧不算）5，请
    问你丢弃英文，从未接触，低于三年么？6，请问你高考英语及格了么？7，请问过去时，
    现在时，完成时，虚拟语气，副词性从句，名词性从句，形容词性从句这些基本语法概念
    有么？不要求精通，但是请问你知道么？8，请问你能听懂多快速度的英文？VOA 慢速那种？
    还是 VOA 慢速已经可以听懂但是常速仍然力不从心的？或者你根本就不知道 VOA 是什么，
    而且从来就没有过听英文的习惯？

    如果以上问题，你给出的否定答案超过 3 个问题，那么下面正文并不适合你，你看完也不
    会有任何直接收获，请点开右边零基础那个房间，寻求赖世雄老师的帮助，每天一课，一
    年后学完全套教材，英文自然大成！

    好，正文！

    由于**直接决定英文水平的其实就是听力，没错，这是一切英文能力基础中的基础**，我
    相信二语教学中从听力入手的假说—婴幼儿接触语言，无一不是从声音入手，然后认字，学
    阅读和写作的，so，我在教程初期决定：所有级别的划定，统统只以听力材料的难度来划
    分，所以大声哭诉不知道自己英文级别的人，把我推荐的材料听下，觉得能听懂 70% 的，
    说明你就适合这个级别，如果全都能听懂但是英文仍然很烂的（我暂时先不计较你是不是
    在撒谎和跟我瞎操蛋），那么提高写要求，看自己能复述出多少，复述率 70% 左右的，甭
    管你听懂 100% 还是 120%，都只当作符合这个水平

    最后废话句，虽然对本教程对号入座全部学完（不一定要从初始级别开始），应付任何考
    试都无问题，但是它本质上不针对考试，我只是在做英文习得的试验而已，再有人发帖发
    邮，说自己四六级 / 考研 / 口译 / 托福等垃圾考试要到了，所以进组要好好努力，或者
    求各种考试办法（比如托福雅思口语），我送你几个字：滚你妈逼的！

    如果你说自己要晋升，或者要去外企，或者赚大钱，或者要移民出国做假洋鬼子，或者装
    逼说要看懂各类原版书做文艺青年，或者志向高洁说要使用英文多读专业书，学好本专业
    高精尖技术，出国留学做科学家报效祖国，那么小组对各位无任欢迎！赚到钱了也请记得
    请我吃饭

    OK，先简单扫盲下

    国外的 ESL 教学早就已经上升到心理学和脑神经学的高度了，各类语言学实验室开的兴旺，
    成果大批量产出，无数语言学家前赴后继殚精竭虑穷极一生，只为了追求拿最高效和最科
    学的教学手段方法，跟国内某机构或某名师拍脑袋想出来的办法（背熟新概念，背熟 2W 单
    词之类的言论）截然不同（庆父不死鲁难不已啊），其中的开宗立派的祖师爷，惹无数屌
    丝嫉妒，无数伪君子打压，国内无数英语系砖家叫兽故意掩盖伪装，被国人一只挡在门外
    的顶尖儿人物，就是南加州大学的 Dr Krashen！

    技插：南加州的语言学专家怎么这么多，祖师爷是那的，我一外教是那毕业的，下文中要
    提到的 Jeff 也是哪的，真是风水宝地出人才啊

    Dr Krashen 提出了几条著名的外语习得假说，根据我们今天的网络丰富资源，我们完全可
    以按照这几条假说来全面最大化的优化自己的学习，简单介绍下

    1，输入 input 假说：绝大部分人的英文不好并不是因为他们 practice 的不够多，而是
    因为 input 不够，换言之没事喜欢瞎找老外搭讪无疑是个蠢办法，至于那种认为去国外了
    英文自然就会好，或者美国卖菜的英文都比我们好的多人的人都是傻逼，当然，这只是条
    假说，目前并无法证据其为完全真理，所以只能假定这些人是傻逼 2，i+1 理论：也叫做可
    理解性输入假说，在你认同输入假说的基础上，进行输入练习时，要遵守 i+1 的原则，i
    即你现在的水平，1 即稍微高一点点的水平，这点被很多人熟悉，但是大家容易忽略的就
    是，在学习了一段时间后，水平提高了，以前的 i+1 其实已经是你现在 i 水准了，这个
    时候一定要 push 自己，去主动开拓，寻求进一步的提升，主动给自己的学习难度升级，
    这个是很少有人会做的

    这条可理解性输入假说是最重要，也是最核心的 ESL 教学理论，跟其它语言学派不同，这
    个还靠谱点，事实上，有一种自然学习学派的观点，起码我是绝对不赞同的：一开始就应
    该拿常速英文来练习，好像刚出生的小孩一样，静心打坐聆听，就算听不懂也听下去，总
    有一天会顿悟，突然打通耳朵。就好像打通了任督二脉一样，你的英文的小宇宙就可以爆
    发，因为没有特别多的人试验过这种自然学习法，而且我相信绝大部分人不会有胆量拿自
    己的时间来试验这种办法，所以老老实实思索自己的级别，找一些略难的材料好好学一学，
    学好了，再升个级别，这样有阶段性的上升和提高，收获的是扎扎实实的进步和提高 3，
    Narrow input 假说，意思就是，输入的材料在一定时间内相对要狭窄些，但是这条假说却
    是小组里无一人会愿意遵守的，比如今晚还有人问我入门级别的语法相关，求推荐简单的
    原版书（入门语法想读原版书，这个太高级了些）。我的观点很明确，既然确定了自己的
    级别，那么就在一定时间内，只接触这个级别的材料，起码在学完前，尽量不要接触其它
    材料，分散注意力。不要订出那种手捧赖世雄，脚填 Cloze，眼读原版书之类的天才计划，
    就算你订了，按照小组的时间设定，我很怀疑你每天都有那么多时间能每个方面都 cover
    到，订这种不切实际的计划没什么意思，更何况，一天数课的赖世雄老师已经占了你很大
    时间，再去读原版书既不靠谱，也不实际，我也很怀疑，作为一个需要赖世雄老师帮忙的
    小白，能看得懂 Peter Pan 么？

    4，情绪机制 学习的材料和环境应该是有趣的，轻松自如的，才能实现效果的最大化

    以上，是我个人比较赞同的 Krashen 的理论，具体的，可自己谷歌，或参照我之前写的帖
    子：为什么一定要听 ESLPOD 和 Egnlishpod

    So，根据这几条假说，我估摸着把国内目前已经有了一些基础的学习者分成三个级别，这
    个级别划分很简单，就是按照 1，听力能力；2，词汇能力来划分的 3，语法能力来划分

    中级：能够听懂慢速英语，但是对慢速英语都要求认真听仔细听，还不能随心所欲的人，
    词汇量在 3-4K 左右

    高级：轻松看懂无字幕美剧，原版专业书籍流畅读，词汇量 1W 以上，主动词汇超过 3K，
    各种英文从句和主句的造句方法都熟练使用，流畅阅读时代和经济学人等国际性报刊无障
    碍，与人交流或写作时，可以准确的使用单词和句式来表达自己的思想，语言文字不会地
    道，但一定会准确，清楚，易懂，口语表达会有自己个人口音，但比较流利

    我相信 stuck 在中级水平的人多——毕竟这个级别努努力就上来了，但达到高级水平的人却
    少，且中级水平的人想达到高级，只觉得路漫漫其修远兮，道阻且长啊，穷此生未必能达
    到，不知道如何规划学习时长，监控学习效果

    所以中级和高级之间肯定有个阶层，在这个阶层修炼的如鱼得水之后，闯下一关的高级就
    属于跳一跳，肯定摸得着的那种了

    中高级：词汇在 4K—6K 左右，好一点背单词勤快的大概能达到 7K-8K，可以很轻松的听懂
    VOA 慢速，但是在听常速英文的时候觉得困难重重，听懂率可能在 60%-70% 左右，看原版
    书觉得处处掣肘到处有生词不认识，在说和写方面，可以较为流畅的写，也可以表达，但
    是离轻松自如，并且写出来就知道对错的程度自己觉得很远，且困难重重，看不到什么提
    高的希望

    国内普遍学习者的水平（通过最上面自测的学习者），大抵可以分成这三个级别——废话一
    句，平时没有输入习惯也就是听和读的习惯的人，自然是无法知道自己级别的，如果你看
    到这里还是不清楚自己级别，我只能 give up on you 了，请立刻 X 了此页转零基础帖

    这种学习的巨大断层是国内基础教育和江湖派培训双重疏忽导致

    国内基础教育就是大家熟悉的 语法 - 翻译 - 背诵法，尤其是对词汇的背诵，懂语法背词
    汇多的人基本上都能通过考试——但这样对确实英文的输入并无多少增长，考试自然也检测
    不了什么水平——连听力题都是靠连蒙带猜，选择题和阅读题也多是靠所谓语感，这样一路
    蒙 + 猜过了四六八级，只能说明你运气好——发音，because 肯定发成 becaurse,famous 也
    是 famours，r 音到处飞，w 和 h 这两个字母一读就错；语法，各种名词性从句和形容词
    性从句以及副词性从句的构成规则一片糊涂，浑浑噩噩，简化从句更是掌握的一塌糊涂，
    更不知道怎么写好各种复合句了；阅读，因为从句知识一片糊涂，稍微长一点的句子满目
    抓瞎，压根不知道什么意思，连一开始的句子都读不懂，之后更不可能加快阅读速度了，
    自豪的做阅读题的高正确率无非是在大量做题之后依靠题目本身的简化句子连蒙带猜而已，
    基本的行文逻辑思维全无，更别提欣赏英美文学文字的艺术美感了。连这三项最简单的部
    分大家都做的极差，那么我们也不用和口语和写作表达了吧。。。辞不达意还在其次，对
    英文的 instant reflection 完全没有

    （请问诸君感到膝盖中满箭木有？）

    有些专家说国人对语法掌握很好，大家一说到学英文也常说自己的词汇好，书面英文好，
    阅读没问题，知识口语烂了些

    但很不幸，在我看来，大部分人的英文，包括高分学习者都是狗屁不通，语法更烂——基本
    的造句知识大部分人掌握的都很差，选择题都是靠 语感 ，和专家所说完全相反——用屁股
    想也知道了，如果大家的语法真的想你们所说的那么好，不会有那么多人抱怨英文难了，
    语法乃是英文根本中的根本，只要通了，以后不会很难

    所以基础教育全面崩溃，一片苍凉，虽然自称 语法 - 翻译法，但是连语法教授这一最基
    本的教学任务全部失败——大部分狗屁老师自己语法都未通。一言蔽之，失败！

    而真正个人学习的时候，网络时代来临前资料缺乏有限，我们当时多是用广播收听 VOA 和
    BBC，钟道隆老师的理论出来了之后总算是有了很好的学习方法，当时各种英文学习杂志本
    质上和这些广播没有什么不同，学习效果固然不错，但是在学习上有着一个巨大的断层。
    VOA specail 每分钟只有 80 个词，词汇量在 3K 左右，常用的只有 1.5K，而 VOA 常速
    每分钟至少有 140 个词，词汇量高达 9K。从 80 个词到 140 个词的听力速度可以说是个
    彻底飞跃，词汇量也有个巨大鸿沟，英文学习的难度巨大分层——明显完全违背了 Dr
    Krashen 的 i+1 理论，所以很多人听 VOA 慢速听的开头一切良好，但是很多因为适应不
    了常速而放弃——这种时候就不是毅力和坚持的问题了，个人认为纯粹是方法和材料选择的
    问题了。。。

    所以你看，学习是件痛苦的事情，尤其是你过了四六级一看美剧一读原版书还是满眼抓瞎
    的时候，哈哈哈（我们这里还没有讲复杂的英文造句呢）

    纵观整个学习流派，没有任何一家提出过一个很好的系统的流程，让你从初级学到高级，
    尤其是在难度极大的中高级阶段的学习——大量泛听输入和连读弱读的讲解造句方法之类过
    渡阶段必须学习的东西也完全没人提及过——甚至连这个概念都从未有人提起过

    是因为众多人的英文永远 stuck 在初级所以没人有中高级学习的体验吗？是侥幸顺利过渡
    完毕的高级学习者不屑来教人怎么过渡吗？但国内机构集体选择眼盲耳盲这一事实不能让
    人觉得不吊诡

    如果没有人愿意或者不屑，那么让我来！我愿意来讲授自己当年好不容易突破的艰难困苦！
    我愿意来分享突破的最高效办法！我愿意撕下各种名师传奇的假面具！让我来踢爆国内各
    类跳梁小丑！

    就好像洛杉矶的把妹界，众人都是无脑而跟风的，看到一种办法有效就纷纷效仿，讲故事
    有用就到处给妹子讲故事，幽默有用就到处到酒吧给妹子讲笑话——结果发现有的办法有用，
    有的办法只能被妹子扇耳光，为什么呢？没有任何一个人有好对策，一直到一位奇才——迷
    男的出现

    迷男彻底扫清了把妹学上的流俗，肃清了那种一招鲜吃遍天的荒谬状况，革命性的指出，
    跟妹子交往是分成不同阶段的，搭讪认识是一个，约会是一个，约人家到你家里玩是一个，
    最后成功上垒把妹得手又是一个（好比英文的高级水平），每个阶段，都必须用不同的方
    法才能最和妹子的心思，尤其还要思考和认清自己和妹子的关系所处阶段，结合了当代女
    性心理学与 NLP 理论，大量实践，总结经验，开班授课，成功案例众多，随后出版书籍，
    众拙男花 25 人民币加上一颗不要脸的心反复练习，此生便可永远左拥右抱，常有温香软
    玉漂亮妹子在怀，社会从此稳定，造福于民，伟大！

    你们可以想象下 威尔斯密斯在 Hitch 全民情圣中的角色，虽然迷男大师跟这种角色有很
    大不同，你们有空自己去优酷看看他的教程便知道了

    奶爸不才，但我自愿做英文学习界的迷男，设定系统，指出不同阶段的不同战略，教你认
    清自己，并仔细思考，时刻监控，你们身边的英文高手很多，一说学英文，每个人的方法
    可能都不同，什么跟读模仿，看美剧，听 BBC，看原版书，背词典也好，背课文也好，大
    家就会觉得每个人学习方法不同，要靠自己去琢磨，要找适合自己的，殊不知，这种所谓
    最适合自己的，往往背后的意思就是 固步自封，真正的原因还是一个，不同阶段要做的事
    情是不一样的，看自己的水平选择相应的材料。这样大家都能学好英文，以后去英语角，
    男生可以靠一口流利英语泡到心仪女生，搞死洋垃圾和死老外，女生可以傍上老美改变国
    籍，从此一生不愁

    而且随着网络时代的到来和数码技术的进步，过渡阶段的问题已经完美解决了，想知道？
    请在中级和中高阶段的帖子好好阅读吧!

**`etymology of mathematical terms`{.featured .heart}** -<

:   引用 Joseph J. Rotman 的
    [*The First Course in Abstract Algebra with Applications*](https://book.douban.com/subject/2853503/)：

    >   Giving the **etymology of mathematical terms** is rarely done. Let me
    >   explain, with an analogy, why I have included derivations of many terms.
    >
    >   There are many variations of standard poker games and, in my poker group,
    >   the dealer announces the game of his choice by naming it. Now some names
    >   are better than others.  For example, "Little Red" is a game in which one's
    >   smallest red card is wild; this is a good name because it reminds the
    >   players of its distinctive feature. On the other hand, "Aggravation" is not
    >   such a good name, for thought it is, indeed, suggestive, the name does not
    >   distinguish this particular game from several others.
    >
    >   Most terms in mathematics have been well chosen; there are more red names
    >   than aggravating ones. An example of a good name is *even* permutation, for
    >   a permutation is even if it is a product of an even number of
    >   transpositions.  Another example of a good term is the *parallelogram law*
    >   describing vector addition. But many good names, clear when they were
    >   chosen, are now obscure because their roots are either in another language
    >   or in another discipline.  The trigonometric terms *tangent* and *secant*
    >   are good names for those knowing some Latin, but they are obscure
    >   otherwise.
    >
    >   The term *mathematics* is obscure only because most of us do not know that
    >   it comes from the classical Greek word meaning "to learn". The term
    >   *corollary* is doubly obscure; it comes from the Latin word meaning
    >   "flower", but why should some theorems be called flowers? A plausible
    >   explanation is that it was common, in ancient Rome, to give flowers as
    >   gifts, and so a corollary is a gift bequeathed by a theorem. The term
    >   *theorem* comes from the Greek word meaning "to watch" or "to contemplate"
    >   (*theatre* has the same root); it was used by Euclid with its present
    >   meaning. The term *lemma* comes from the Greek word meaning "taken" or
    >   "received"; it is a statement that is taken for granted (for it has already
    >   been proved) in the course of proving a theorem.  **I believe that
    >   etymology of terms is worthwhile (and interesting!), for it often aids
    >   understanding by removing unnecessary obscurity.**

    推荐阅读：

    -   [Online Etymology Dictionary](http://www.etymonline.com/index.php?allowed_in_frame=0&search=sin){.featured title="牛逼闪闪的词源学网站。etym online dot com"}
    -   [Shady Characters: The Secret Life of Punctuation, Symbols, and Other Typographical Marks: Keith Houston: 9780393349726: Amazon.com: Books](http://www.amazon.com/Shady-Characters-Punctuation-Symbols-Typographical/dp/0393349721/)
    -   [The Words of Mathematics: An Etymological Dictionary of Mathematical Terms Used in English (Spectrum): Steven Schwartzman: 9780883855119: Amazon.com: Books](http://www.amazon.com/Words-Mathematics-Etymological-Dictionary-Mathematical/dp/0883855119)
    -   [The Etymologicon: A Circular Stroll Through the Hidden Connections of the English Language: Mark Forsyth: 9780425260791: Amazon.com: Books](http://www.amazon.com/Etymologicon-Circular-Through-Connections-Language/dp/0425260798/ref=pd_bxgy_14_img_2?ie=UTF8&refRID=0P4R3NAXGQZQXCPM29H9)
    -   [mathematics - Wiktionary](https://en.wiktionary.org/wiki/mathematics#Etymology)
    -   [Lists of etymologies - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Lists_of_etymologies)
    -   [List of computer term etymologies - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/List_of_computer_term_etymologies)

    举例：

    -   σ(X), the Standard Deviation of the Random Variable X. (`S`igma, `S`tandard)
    -   π(R), Projection from R to π(R), π(`p`i) for `p`rojection)
    -   k, constant. (konstant)

    Etymology of Mathematical Terms

    :   大量 etymology 源自此书

        ---------------     ---------------------   -----------------------------------
        英文                中文                    溯源
        ---------------     ---------------------   -----------------------------------
        Mathematics         数学                    From Greek, "to learn"

        Corollary           ?                       From Latin, "flower", 花当时是
                                                    一种礼物。类似现在文中常用的 Bonus

        Theorem             定理                    From Greek, "to watch", "to contemplate"

        Z, Q, R, C          ?                       -   *Zahl*(*German*) meanning "number"
                                                    -   Rational Numbers;
                                                    -   Real Numbers;
                                                    -   Complex Numbers

        Lemma               ?                       From Greek, "taken", "received", a.k.a. taken for granted

        Induction           归纳法，演绎法          From Latin, "to lead", came to
                                                    mean "prevailing to do something" or "influencing"

        Factor              ?                       From Latin, "to make", or "to contribute"

        Binomial            ?                       *bi*(*Latin*, "two") + *nomen*(*Latin*, "name", "term"); trinomial, monomial

        Polynomial          ?                       *poly*(*Greek*, many) + *namen*(*Latin*, "name", "term")

        Cyclotomic          ?                       From Greek, "circle splitting"

        Algorithm           ?                       来自一个印度数学家 Khwarizmi

        Googol              ?                       10^100

        Leap Year           ?                       闰年的 2 月比平年的多一天，因为
                                                    在 Roman calender 里三月一号才是一年的第一天

        Calendar            ?                       From Greek, "to call", evolved
                                                    into the Latin for the first day of a month(when accounts were due)

        Signum              ?                       From Latin, "mark", or "token", now we use "sign"
        Matrix              ?                       Derived from the word meaning
                                                    "mother", means "womb" in
                                                    Latin. More generally, it means
                                                    something that contains the essence of a thing.

        Translation         ?                       From Latin, "to transfer".
                                                    Language to language, point(of thoughts) to point.

        Dihedron            ?                       *di*(*Latin*, "two") + *hedron*(*Greek*, "two dimensional side")

        Stochastic          ?                       From Greek, "to guess"

        Homomorphism        ?                       *homo*(*Greek*, "same") + *morphism*(*Greek*, "shape" or "form")

        Isomorphism         ?                       *iso*(*Greek*, "equal") + *morphism*(*Greek*, "shape" or "form")

        Kernel              ?                       From German, "grain" or "seed".
                                                    Indicating an important ingredient of a homomorphism

        quaternion          ?                       ?

        Group, Ring         ?                       First used by E. H. Moore in 1893

        Field               ?                       *K<o">rper*(*German*), a
                                                    "realm", a "body" of things, or "collections of things"

        Ring                ?                       *Corps*(*French*), a "realm", a
                                                    "body" of things, or "collections of things"

        Domain              ?                       Abbrev. of *integral domain* of
                                                    the German word *Integret<a">tsbereich; A collection of things

        Quadratic           ?                       From Latin, "four". Four-sided
                                                    figures(Like a square, with area *x^2*). Linear, quadratic, cubic.

        Vector              ?                       From Latin, "to carry", vectors
                                                    in euclidean space carry the data of length and direction.

        Scalar              ?                       From scale, which is from the
                                                    Latin word meaning "ladder", 因为梯子的横均匀（可以作为度量）

        Orthogonal          ?                       *ortho*(*Greek*, "right") + *gon*(*Greek*, "angle"); Right angled or perpendicular

        Echelon             ?                       "Wings"; A matrix in echelon form（矩阵的梯形形式）

        Eigenvalue          ?                       From *Eigenwert*(*German*). *Wert* means *value*, *Eigen* is *characteristic* or *proper*

        Automorphism        ?                       *auto*(*Greek*, "self") + *morphism*("shape" or "form")

        Variety             ?                       Arose as a translation by E.
                                                    Beltami(inspired by Gauss) of the German term *Mannigfaltigkeit* used by
                                                    Riemann; nowdays, this term is usually tranlated as *manifold*

        Sine                ?                       参考 [Sine 的故事] ( url here )

        Root                ?                       参考 [Root 的故事] (url here)

        Tangent             ?                       The Latin word *tangere* means
                                                    "to touch"; a tangent is a line which touches the circle in only one point

        Secant              ?                       The Latin word *secare* means "to cut"; a secant is a line that cuts a circle

        Modulo              ?                       From Latin, "measure"
        ---------------     ---------------------   -----------------------------------

    refs and see also

    -   [A First Course in Abstract Algebra (豆瓣)](https://book.douban.com/subject/2853503/)

alphabet, greek, roman alphabet -<

:   | Letter | Letter Name | Pronunciation |
    | :---: | :---: | :---: |
    | A a | a | /ˈeɪ/ |
    | B b | bee | /ˈbiː/ |
    | C c | cee | /ˈsiː/ |
    | D d | dee | /ˈdiː/ |
    | E e | e | /ˈiː/ |
    | F f | ef | /ˈɛf/ |
    | G g | gee | /ˈdʒiː/ |
    | H h | aitch | /ˈeɪtʃ/ |
    | - - | haitch | /ˈheɪtʃ/ |
    | - - | hetch | /ˈhetʃ/ |
    | I i | i | /ˈaɪ/ |
    | J j | jay | /ˈdʒeɪ/ |
    | - - | jy | /ˈdʒaɪ/ |
    | K k | kay | /ˈkeɪ/ |
    | L l | el or ell | /ˈɛl/, /ˈɛɫ/ |
    | M m | em | /ˈɛm/ |
    | N n | en | /ˈɛn/ |
    | O o | o | /ˈəʊ/ |
    | P p | pee | /ˈpiː/ |
    | Q q | cue | /ˈkjuː/ |
    | R r | ar | /ˈɑː/ |
    | S s | ess | /ˈɛs/ |
    | T t | tee | /ˈtiː/ |
    | U u | u | /ˈjuː/ |
    | V v | vee | /ˈviː/ |
    | W w | double-u | /ˈdʌbəl.juː/ |
    | X x | ex | /ˈɛks/ |
    | Y y | wy or wye | /ˈwaɪ/ |
    | Z z | zed | /ˈzɛd/ |
    | - - | zee | /ˈziː/ |
    | - - | izzard | /ˈɪzərd/ |

    Greek Alphabet

    | Letter | Name | In LaTeX | Transliteration | Pronunciation |
    | :---: | :---: | :----: | :--------------: | :--------------: |
    | A α | [alpha][alpha] | - \alpha | a | [AL-fuh][p-alpha] |
    | B β | [beta][beta] | - \beta | b | [BAY-tuh, BEE-tuh][p-beta] |
    | Γ γ | [gamma][gamma] | \Gamma \gamma | g | [GAM-uh][p-gamma] |
    | Δ δ | [delta][delta] | \Delta \delta | d | [DELL-tuh][p-delta] |
    | E ϵ ε | [epsilon][epsilon] | - \epsilon \varepsilon | e | [EP-suh-lon][p-epsilon] |
    | F ϝ ϛ | [digamma][digamma] | - \digamma [~~stigma~~][stigma] | f | dee-GAM-uh ? |
    | Z ζ | [zeta][zeta] | - \zeta | z | [ZAY-tuh][p-zeta] |
    | H η | [eta][eta] | \eta | ē | [AY-tuh][p-eta] |
    | Θ θ ϑ | [theta][theta] | \Theta \theta \vartheta | th | [THAY-tuh, THEE-tuh][p-theta] |
    | Ι ι | [iota][iota] | - \iota | i | [eye-OH-tuh][p-iota] |
    | K κ ϰ | [kappa][kappa] | - \kappa \varkappa | k | [CAY-uh][p-kappa] |
    | Λ λ | [lambda][lambda] | \Lambda \lambda | l | [LAM-duh][p-lambda] |
    | M μ | [mu][mu] | - \mu | m | [MYOO, MOO][p-mu] |
    | N ν | [nu][nu] | - \nu | n | [NOO, NYOO][p-nu] |
    | Ξ ξ | [xi][xi] | \Xi \xi | x | [ZIGH, SIGN, KSEE][p-xi] |
    | Ο ο | [omicron][omicron] | -  \omicron | o | [AH-mih-cron, OH-mih-cron][p-omicron] |
    | Π π ϖ | [pi][pi] | \Pi \pi \varpi | p | [PIE][p-pi] |
    | Ρ ρ ϱ | [rho][rho] | - \rho \varrho | r / rh | [ROE][p-rho] |
    | Σ σ ς | [sigma][sigma] | \Sigma \sigma \varsigma | s | [SIG-muh][p-sigma] |
    | T τ | [tau][tau] | - \tau | t | [TOW, TAW][p-tau] |
    | Υ υ | [upsilon][upsilon] | \Upsilon \upsilon | u | [UP-suh-lon, YOOP-suh-lon][p-upsilon] |
    | Φ ϕ φ | [phi][phi] | \Phi \phi \varphi | phi | [FIE, FEE][p-phi] |
    | Χ χ | [chi][chi] | \chi | ch | [KIGN, KEE][p-chi] |
    | Ψ ψ | [psi][psi] | \Psi \psi | ps | [SIGH, PSIGH, PSEE][p-psi] |
    | Ω ω | [omega][omega] | \Omega \omega | ō | [oh-MEG-uh, oh-MEE-guh, oh-MAY-guh][p-omega] |

    Latin Alphabet, etc

    Archaic(古体的) Latin alphabet

    **Others**

    Aleph: `/ˈɑːlɛf/`

    ---

    >   The 18th and 19th centuries saw the creation and
    >   standardization of mathematical notation as used today.
    >   Euler was responsible for many of the notations in use today:
    >   the use of a, b, c for constants and x, y, z for unknowns,
    >   e for the base of the natural logarithm, sigma (Σ) for summation,
    >   i for the imaginary unit, and the functional notation f(x).
    >   He also popularized the use of π for Archimedes constant
    >   (due to William Jones' proposal for the use of π in this way
    >   based on the earlier notation of William Oughtred).
    >
    >   Many fields of mathematics bear the imprint of their creators for notation:
    >   the differential operator is due to Leibniz,
    >   the cardinal infinities to Georg Cantor (in addition to the lemniscate (∞) of John Wallis),
    >   the congruence symbol (≡) to Gauss, and so forth.

    看的英文数学书越多，越发感觉英文教材的“好处”，符号都是不言自明，不用特别的提示就能明白要表达的意思。
    先上一份整理自 Wikipedia 的“说明书”。

    Αα (alpha)

    :   α represents:

          - the first angle in a triangle, opposite the side A
          - one root of a quadratic equation, where β represents the other
          - the ratio of collector current to emitter current in a bipolar junction
            transistor (BJT) in electronics
          - the statistical significance of a result
          - the false positive rate in statistics ("Type I" error)
          - the reciprocal of the sacrifice ratio
          - the fine structure constant in physics
          - the angle of attack of an aircraft
          - an alpha particle (He2+)
          - angular acceleration in physics
          - the linear thermal expansion coefficient
          - the thermal diffusivity
          - the alpha carbon is the first carbon after the carbon that attaches to
            a functional group in organic chemistry
          - the α-carbon is the backbone carbon next to the carbonyl carbon in
            amino acids
          - right ascension in astrometry
          - The brightest star in a constellation.
          - Iron Ferrite and numerous phases within materials science.
          - the return in excess of the compensation for the risk borne in
            investment
          - the α-conversion in lambda calculus

    Ββ (beta)

    :   Β represents the beta function

        β represents:

          - the thermodynamic beta, equal to (kBT)−1, where kB is Boltzmann's
            constant and T is the absolute temperature.
          - the second angle in a triangle, opposite the side B
          - one root of a quadratic equation, where α represents the other
          - the ratio of collector current to base current in a bipolar junction
            transistor (BJT) in electronics (current gain)
          - the false negative rate in statistics ("Type II" error)
          - the beta coefficient, the non-diversifiable risk, of an asset in
            mathematical finance
          - the sideslip angle of an airplane
          - the first-order effects of variations in Coriolis force with latitude
            in planetary dynamics
          - a beta particle (e-)
          - sound intensity
          - velocity divided by the speed of light in special relativity
          - the beta brain wave in brain or cognitive sciences
          - ecliptic latitude in astrometry
          - The ratio of plasma pressure to magnetic pressure in plasma physics
          - β-reduction in lambda calculus

    Γγ (gamma)

    :   Γ represents:

          - the reflection coefficient of a transmission or telecommunication line.
          - the confinement factor of an optical mode in a waveguide
          - the gamma function, a generalization of the factorial
          - the upper incomplete gamma function
          - the modular group, the group of fractional linear transformations
          - the gamma distribution, a continuous probability distribution defined
            using the gamma function
          - second-order sensitivity to price in mathematical finance
          - the Christoffel symbols of the second kind
          - the neighbourhood of a vertex in a graph
          - the stack alphabet in the formal definition of a pushdown automaton

        γ represents:

          - the partial safety factors applied to loads and materials in structural
            engineering
          - the specific weight of substances
          - the lower incomplete gamma function
          - the third angle in a triangle, opposite the side C
          - the Euler–Mascheroni constant in mathematics
          - gamma rays and the photon
          - the heat capacity ratio in thermodynamics
          - the Lorentz factor in special relativity
          - the damping constant (kg/s)

    Δδ (delta)

    :   Δ represents:

          - a finite difference
          - a difference operator
          - a symmetric difference
          - the Laplace operator
          - the angle that subtends the arc of a circular curve in surveying
          - the determinant of an inverse matrix
          - the maximum degree of any vertex in a given graph
          - the difference or change in a given variable, e.g. ∆v means a
            difference or change in velocity
          - sensitivity to price in mathematical finance
          - distance to Earth, measured in astronomical units
          - heat in a chemical formula
          - the discriminant in the quadratic formula which determines the nature
            of the roots
          - the degrees of freedom in a non-pooled statistical hypothesis test of
            two population means

        δ represents:

          - percent error
          - a variation in the calculus of variations
          - the Kronecker delta function
          - the Feigenbaum constant
          - the force of interest in mathematical finance
          - the Dirac delta function
          - the receptor which enkephalins have the highest affinity for in
            pharmacology
          - the Skorokhod integral in Malliavin calculus, a subfield of stochastic
            analysis
          - the minimum degree of any vertex in a given graph
          - a partial charge. δ− represents a negative partial charge, and δ+
            represents a positive partial charge chemistry (See also: Solvation)
          - the Chemical shift of an atomic nucleus
          - declination in astrometry
          - the Turner function in computational material science
          - depreciation in macroeconomics
          - noncentrality measure in statistics

    Εε (epsilon)

    :   ε represents:

          - a small positive quantity; see limit
          - a random error in regression analysis
          - the absolute value of an error
          - in set theory, the limit ordinal of the sequence
            \omega,\omega^{\omega},\omega^{\omega^{\omega}},\dots
          - in computer science, the empty string
          - the Levi-Civita symbol
          - in electromagnetics, dielectric permittivity
          - emissivity
          - strain in continuum mechanics
          - permittivity
          - the Earth's axial tilt in astrometry
          - elasticity in economics
          - expected value in probability theory and statistics
          - electromotive force
          - in chemistry, the molar extinction coefficient of a chromophore.
          - set membership symbol ∈ is based on ε

    Ϝϝ (digamma)

    :   Ϝ is sometimes used to represent the digamma function, though the Latin
    letter F (which is nearly identical) is usually substituted.

    Ζζ (zeta)

    :   ζ represents:

          - the Riemann zeta function and other zeta functions in mathematics
          - the coefficient of viscous friction in polymer dynamics
          - the damping ratio
          - relative vertical vorticity in fluid dynamics

    Ηη (eta)

    :   Η represents:

          - the Eta function of Ludwig Boltzmann's H-theorem ("Eta" theorem), in
            statistical mechanics

        η represents:

          - the intrinsic impedance of medium (usually free space)
          - the partial regression coefficient in statistics
          - elasticities in economics
          - the absolute vertical vorticity (relative vertical vorticity + Coriolis
            effect) in fluid dynamics
          - an index of refraction
          - a type of meson
          - viscosity
          - efficiency (statistics)
          - efficiency (physics and engineering)
          - the Minkowski metric tensor in relativity
          - noise in communication system models

    Θθ (theta)

    :   Θ represents:

          - an asymptotically tight bound related to big O notation.
          - sensitivity to the passage of time in mathematical finance
          - Θ (set theory), a certain ordinal number

        θ represents:

          - a plane angle in geometry
          - the angle to the x axis in the xy-plane in spherical or cylindrical
            coordinates (mathematics)
          - the angle to the z axis in spherical coordinates (physics)
          - potential temperature in thermodynamics
          - the mean time between failure in reliability engineering
          - soil water contents in soil science
          - Debye temperature
          - In mathematical statistics, represents an unknown parameter
          - theta functions
          - sometimes also ϑ ("script theta"), cursive form of theta, often used in
            handwriting
          - the first Chebyshev function in number theory

    Ιι (iota)

    :   ι represents:

          - the index generator function in APL (in the form ⍳)
          - the orbital inclination with respect to the line of sight, used when
            describing gravitational wave sources.

    Κκ (kappa)

    :   Κ represents:

          - the Kappa number
          - κ represents:
          - the Von Kármán constant
          - the kappa curve
          - the condition number of a matrix in numerical analysis
          - the connectivity of a graph in graph theory
          - curvature
          - dielectric constant (\varepsilon / \varepsilon_0)
          - thermal conductivity (usually a lowercase Latin k)
          - thermal diffusivity
          - a spring constant (usually a lowercase Latin k)
          - the heat capacity ratio in thermodynamics (usually γ)
          - the receptor which dynorphins have the highest affinity for in
            pharmacology

    Λ λ (lambda)

    :   Λ represents:

          - the von Mangoldt function in number theory
          - the set of logical axioms in the axiomatic method of logical deduction
            in first-order logic
          - the cosmological constant
          - a type of baryon
          - a diagonal matrix of eigenvalues in linear algebra
          - the permeance of a material in electromagnetism

        λ represents:

          - one wavelength of electromagnetic radiation
          - the decay constant in radioactivity
          - function expressions in the lambda calculus
          - a general eigenvalue in linear algebra
          - the expected number of occurrences in a Poisson distribution in
            probability
          - the arrival rate in queueing theory
          - the average lifetime or rate parameter in an exponential distribution
            (commonly used across statistics, physics, and engineering)
          - the failure rate in reliability engineering
          - the mean or average value (probability and statistics)
          - the latent heat of fusion
          - the lagrange multiplier in the mathematical optimization method, known
            as the shadow price in economics
          - the Lebesgue measure denotes the volume or measure of a Lebesgue
            measurable set
          - longitude in geodesy
          - linear density
          - ecliptic longitude in astrometry
          - the Liouville function in number theory
          - the Carmichael function in number theory
          - a unit of measure of volume equal to one microlitre (1 μL) or one cubic
            millimetre (1 mm³)
          - the empty string in formal grammar

    Μμ (mu)

    :   μ represents:

          - the Möbius function in number theory
          - the ring representation of a representation module
          - the population mean or expected value in probability and statistics
          - a measure in measure theory
          - micro-, an SI prefix denoting 10−6 (one millionth)
          - the coefficient of friction in physics
          - the service rate in queueing theory
          - the dynamic viscosity in physics
          - magnetic permeability in electromagnetics
          - a muon
          - reduced mass
          - chemical potential in condensed matter physics
          - the ion mobility in plasma physics

    Νν (nu)

    :   ν represents:

          - frequency in physics in hertz (Hz)
          - Degrees of freedom in statistics
          - Poisson's ratio in material science
          - a neutrino
          - kinematic viscosity of liquids
          - stoichiometric coefficient in chemistry
          - dimension of nullspace in mathematics

    Ξ ξ (xi)

    :   Ξ represents:

          - the original Riemann Xi function, i.e. Riemann's lower case ξ, as
            denoted by Edmund Landau and currently
          - the grand canonical ensemble found in statistical mechanics
          - a type of baryon
          - ξ represents:
          - the original Riemann Xi function
          - the modified definition of Riemann xi function, as denoted by Edmund
            Landau and currently
          - a random variable
          - the extent of a chemical reaction
          - coherence length
          - the damping ratio
          - universal set
          - Οο (omicron)[edit]

        Ο represents:

          - big O notation (may be represented by an uppercase Latin O)
          - o represents:
          - small o notation (may be represented by a lowercase Latin o)

    Π π (pi)

    :   Π represents:

          - the product operator in mathematics
          - a plane
          - osmotic pressure
          - π represents:
          - Archimedes' constant, the ratio of a circle's circumference to its
            diameter
          - the prime-counting function
          - profit in microeconomics and game theory
          - inflation in macroeconomics, expressed as a constant with respect to
            time
          - the state distribution of a Markov chain
          - a type of covalent bond in chemistry (pi bond)
          - a pion (pi meson) in particle physics
          - in statistics, the population proportion of success
          - in electronics, a special type of small signal model is referred to as
            a hybrid-pi model
          - in relational algebra for databases, represents project

        ϖ (a graphic variant, see pomega) represents:

          - angular frequency of a wave, in fluid dynamics (angular frequency is
            usually represented by \omega but this may be confused with vorticity
            in a fluid dynamics context)
          - longitude of pericenter, in celestial mechanics
          - comoving distance, in cosmology

    Ρρ (rho)

    :   Ρ represents:

          - one of the Gegenbauer functions in analytic number theory.

        ρ represents:

          - one of the Gegenbauer functions in analytic number theory.
          - the Dickman-de Bruijn function
          - the radius in a polar, cylindrical, or spherical coordinate system
          - the correlation coefficient in statistics
          - the sensitivity to interest rate in mathematical finance
          - density (mass or charge per unit volume)
          - resistivity
          - the shape and reshape operators in APL (in the form ⍴)
          - the utilization in queueing theory
          - the rank of a matrix

    Σσ (sigma)

    :   Σ represents:

          - the summation operator
          - the covariance matrix
          - the set of terminal symbols in a formal grammar

        σ represents:

          - Stefan–Boltzmann constant in blackbody radiation
          - the divisor function in number theory
          - the real part of the complex variable s = σ + i t in analytic number
            theory
          - the sign of a permutation in the theory of finite groups
          - the population standard deviation, a measure of spread in probability
            and statistics
          - a type of covalent bond in chemistry (sigma bond)
          - the selection operator in relational algebra
          - stress in mechanics
          - electrical conductivity
          - area density
          - nuclear cross section
          - uncertainty
          - utilization in operations management
          - surface charge density for microparticles

    Ττ (tau)

    :   τ (lower-case) represents:

          - an interval of time
          - a mean lifetime
          - torque, the rotational force in mechanics
          - the elementary tau lepton in particle physics
          - the lifetime of a spontaneous emission process
          - the time constant of any device, such as an RC circuit
          - proper time in relativity
          - Kendall tau rank correlation coefficient, a measure of rank correlation
            in statistics
          - the golden ratio 1.618... (although φ (phi) is more common)
          - Ramanujan's tau function in number theory
          - in astronomy, a measure of opacity, or how much sunlight cannot
            penetrate the atmosphere
          - the intertwining operator in representation theory
          - the tau in biochemistry, a protein associated to microtubules
          - Shear stress in continuum mechanics
          - the number of divisors of highly composite numbers (sequence A000005 in
            OEIS)
          - the prefix of many stars, via the Bayer stellar designation system
          - an internal system step in transition systems
          - a type variable in type theories, such as the simply typed lambda
            calculus
          - path tortuosity in reservoir engineering
          - in Topology, a given topology
          - a proposed name  for the mathematical constant of the ratio of a
            circle's circumference to its radius, with value 2π (6.283...).

    Υυ (upsilon)

    :   Υ represents:

          - an elementary particle
          - υ represents:
          - frequency in physics textbooks

    Φφ (phi)

    :   Φ represents:

          - the work function in physics; the energy required by a photon to remove
            an electron from the surface of a metal
          - magnetic flux
          - the cumulative distribution function of the normal distribution in
            statistics
          - phenyl functional group
          - the reciprocal of the golden ratio (represented by φ, below), also
            represented as 1/φ
          - the value of the integration of information in a system (based on
            Integrated Information Theory)
          - note: a symbol for the empty set, \varnothing, resembles Φ but is not Φ

        φ represents:

          - the golden ratio 1.618... in mathematics, art, and architecture
          - Euler's totient function in number theory
          - a holomorphic map on an analytic space
          - the argument of a complex number in mathematics
          - the value of a plane angle in physics and mathematics
          - the angle to the z axis in spherical coordinates (mathematics)
          - the angle to the x axis in the xy-plane in spherical or cylindrical
            coordinates (physics)
          - latitude in geodesy
          - a scalar field
          - radiant flux
          - electric potential
          - the probability density function of the normal distribution in
            statistics
          - a feature of a syntactic node giving that node characteristics such as
            gender, number and person in syntax
          - the diameter of a vessel (engineering)

    Χχ (chi)

    :   χ represents:

          - the chi distribution in statistics (χ^2 is the more frequently
            encountered chi-squared distribution)
          - the chromatic number of a graph in graph theory
          - the Euler characteristic in algebraic topology
          - electronegativity in the periodic table
          - the Rabi frequency
          - the spinor of a fundamental particle
          - the Fourier transform of a linear response function
          - a character in mathematics; especially a Dirichlet character in number
            theory
          - the Sigma vectors in the unscented transform used in the unscented
            Kalman filter
          - sometimes the mole fraction
          - a characteristic or indicator function in mathematics

    Ψψ (psi)

    :   Ψ represents:

          - water potential
          - a quaternary combinator in combinatory logic

        ψ represents:

          - the wave function in the Schrödinger equation of quantum mechanics
          - the stream function in fluid dynamics
          - yaw angle in vehicle dynamics
          - the angle between the x-axis and the tangent to the curve in the
            intrinsic coordinates system
          - the reciprocal Fibonacci constant
          - the second Chebyshev function in number theory
          - the polygamma function in mathematics

    Ω ω (omega)

    :   Ω represents:

          - the Omega constant
          - an asymptotic lower bound related to big O notation
          - in probability theory and statistical mechanics, the set of possible
            distinct system states
          - the SI unit measure of electrical resistance, the ohm
          - the rotation rate of an object, particularly a planet, in dynamics
          - a solid angle
          - a baryon
          - the arithmetic function counting a number's prime factors
          - the right ascension of the ascending node in celestial mechanics
          - the density parameter in cosmology

        ω represents:

          - the first infinite ordinal
          - the differentiability class (i.e. C^\omega) for functions that are
            infinitely differentiable because they are complex analytic
          - the set of natural numbers in set theory (although \mathbb{N} or N is
            more common in other areas of mathematics)
          - an asymptotically dominant quantity related to big O notation
          - in probability theory, a possible outcome of an experiment
          - angular velocity / radian frequency
          - a complex cube root of unity — the other is ω² — (used to describe
            various ways of calculating the discrete Fourier transform)
          - vertical velocity in pressure-based coordinate systems (commonly used
            in atmospheric dynamics)
          - a meson
          - the arithmetic function counting a number's distinct prime factors
          - a differential form (esp. on an analytic space)
          - the argument of periapsis in celestial mechanics
          - the symbol ϖ, a graphic variant of π, is sometimes construed as omega
            with a bar over it; see π

    ---

    * 政无安，九月常常杀一万
    * [Euler's Formula](https://en.wikipedia.org/wiki/Euler_characteristic#Planar_graphs): `#Loop - #Edge + #Node = 0`

    矩阵的 Rank 是其基底（Group）的不变量，决定了
    能存储的信息量。如果 Rank = 0，意思是不能存储信息。
    如果因为 Rank = 0，而导致信息丢失，那就是 Unknown unknown。

    Det 则是线性变换中 Simplex 对应的 Signed Volume，在变幻中其实是一个置换群。
    Det 是 Grand Metric 下的不变量。
    如果 Det 不为 0，信息可以完全恢复。但是如果 Det = 0，信息将（可能）会丢失，
    多次变换后可能信息将消灭。

    向量则是在 Base 下的衡量。如果向量为 0，即 “我知道我不知道”。

    群，是 Metric 的基础。

    refs and see also

    -   <https://en.wikipedia.org/wiki/Greek_alphabet>
    -   <https://en.wikipedia.org/wiki/Latin_alphabet>
    -   <http://www.greekgrammar.org>
    -   <http://www.skyandtelescope.com/astronomy-resources/stargazing-basics/the-greek-alphabet/>
    -   <https://en.wikipedia.org/wiki/Greek_letters_used_in_mathematics,_science,_and_engineering>
    -   <https://en.wikipedia.org/wiki/Mathematical_notation>
    -   <https://en.wikipedia.org/wiki/Notation_in_probability_and_statistics>
    -   <https://en.wikipedia.org/wiki/Latin_letters_used_in_mathematics>
    -   <https://en.wikipedia.org/wiki/List_of_logic_symbols>

[alpha]: http://en.wikipedia.org/wiki/Alpha
[beta]: http://en.wikipedia.org/wiki/Beta
[gamma]: http://en.wikipedia.org/wiki/Gamma
[delta]: http://en.wikipedia.org/wiki/Delta_(letter)
[epsilon]: http://en.wikipedia.org/wiki/Epsilon
[digamma]: http://en.wikipedia.org/wiki/Digamma
[zeta]: http://en.wikipedia.org/wiki/Zeta
[eta]: http://en.wikipedia.org/wiki/Eta
[theta]: http://en.wikipedia.org/wiki/Theta
[iota]: http://en.wikipedia.org/wiki/Iota
[kappa]: http://en.wikipedia.org/wiki/Kappa
[lambda]: http://en.wikipedia.org/wiki/Lambda
[mu]: http://en.wikipedia.org/wiki/Mu_(letter)
[nu]: http://en.wikipedia.org/wiki/Nu_(letter)
[xi]: http://en.wikipedia.org/wiki/Xi_(letter)
[omicron]: http://en.wikipedia.org/wiki/Omicron
[pi]: http://en.wikipedia.org/wiki/Pi_(letter)
[rho]: http://en.wikipedia.org/wiki/Rho
[sigma]: http://en.wikipedia.org/wiki/Sigma
[tau]: http://en.wikipedia.org/wiki/Tau
[upsilon]: http://en.wikipedia.org/wiki/Upsilon
[phi]: http://en.wikipedia.org/wiki/Phi
[chi]: http://en.wikipedia.org/wiki/Chi_(letter)
[psi]: http://en.wikipedia.org/wiki/Psi_(letter)
[omega]: http://en.wikipedia.org/wiki/Omega
[stigma]: http://en.wikipedia.org/wiki/Stigma_(letter)
[p-alpha]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_alpha.mp3
[p-beta]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_beta.mp3
[p-gamma]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_gamma.mp3
[p-delta]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_delta.mp3
[p-epsilon]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_epsilon.mp3
[p-zeta]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_zeta.mp3
[p-eta]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_eta.mp3
[p-theta]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_theta.mp3
[p-iota]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_iota.mp3
[p-kappa]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_kappa.mp3
[p-lambda]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_lambda.mp3
[p-mu]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_mu.mp3
[p-nu]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_nu.mp3
[p-xi]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_xi.mp3
[p-omicron]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_omicron.mp3
[p-pi]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_pi.mp3
[p-rho]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_rho.mp3
[p-sigma]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_sigma.mp3
[p-tau]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_tau.mp3
[p-upsilon]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_upsilon.mp3
[p-phi]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_phi.mp3
[p-chi]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_chi.mp3
[p-psi]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_psi.mp3
[p-omega]: http://gnat.qiniudn.com/%40%2Faudio%2Fgreek-alphabet%2Fgreek_omega.mp3
[Aleph]: http://en.wikipedia.org/wiki/Aleph

[4ker/SharedPainter](https://github.com/4ker/SharedPainter){.bad} -<

:   整天而言，代码写得太烂。

    Goods

    #. CSS 专门放到一个文件里
    #. namespace & class static functions
    #. `QFontComboBox`
    #. try... catch...
    #. `const_cast` & meta programming
    #. `QFrame` (Container Widget), `QTextEditor`
    #. UI 组件化
    #. pure virtual class
    #. `hover{Enter, leave}Event`

    Bads

    #. too much license
    #. not work on my computer
    #. code is messy
    #. violate 80 char rule

    Snippets

    ```cpp
    clr_ = QColorDialog::getColor( clr_, this, tr("Pen Color"));

    if( !clr_.isValid() )
        return;

    class CS
    {
    #if defined(WIN32)
    private:
        CRITICAL_SECTION m_lock;
    public:
        CS() { ::InitializeCriticalSectionAndSpinCount( &m_lock, 4000 ); }
        ~CS() { ::DeleteCriticalSection( &m_lock ); }
        void Lock() { ::EnterCriticalSection( &m_lock ); }
        void Unlock() { ::LeaveCriticalSection( &m_lock ); }
        ...
    };

    struct SPaintData
    {
        double posX;
        double posY;
        double scale;
        bool posSetFlag;
        int itemId;
        std::string owner;
    };

    void hoverEnterEvent( QGraphicsSceneHoverEvent * event )
    {
        if( scene_->isFreePenMode() )
            return;

        scene_->setCursor( Qt::OpenHandCursor );
    }


    drawingItem->setFlags( QGraphicsItem::ItemIsMovable
                         | QGraphicsItem::ItemIsFocusable
                         | QGraphicsItem::ItemIsSelectable
                         | QGraphicsItem::ItemSendsGeometryChanges );
    addItem( drawingItem );

    QString tooltip = eventTarget_->onICanvasViewEvent_GetToolTipText( this, item );
    if( tooltip.isEmpty() == false )
        drawingItem->setToolTip( tooltip );

    QAbstractGraphicsShapeItem* i =
        reinterpret_cast<QAbstractGraphicsShapeItem *>(lastAddItem_->drawingObject());
    if( ! i )
        return;

    // setting style..
    QPainterPath path = createCoveringBorderPath( lastItemBorderType_, i );
    if ( path.isEmpty() )
        return;

    clearLastItemBorderRect();

    QAbstractGraphicsShapeItem* lastBorderItem = addPath( path );
    lastBorderItem->setPen(
            QPen( Util::getComplementaryColor(backgroundColor_, penColor() ), 2) );
    lastBorderItem->setZValue( currentZValue() );
    lastCoverGraphicsItem_ = lastBorderItem;

    void CSharedPainterScene::clearBackgroundImage( void )
    {
        backgroundImageItem_ = boost::shared_ptr<CBackgroundImageItem>();
        backgroundPixmap_ = QPixmap();
        resetBackground( sceneRect() );
    }
    ```

Peoples -<

:   * [Blaise Pascal](http://en.wikipedia.org/wiki/Blaise_Pascal)
    * [Augustin-Louis Cauchy](http://en.wikipedia.org/wiki/Augustin-Louis_Cauchy)
    * [Bernhard Riemann](http://en.wikipedia.org/wiki/Bernhard_Riemann)

    ![riemann-portrait]

    [riemann-portrait]: http://upload.wikimedia.org/wikipedia/commons/thumb/8/82/Georg_Friedrich_Bernhard_Riemann.jpeg/225px-Georg_Friedrich_Bernhard_Riemann.jpeg

    * [Brook Taylor](http://en.wikipedia.org/wiki/Brook_Taylor)

    ![][taylor-portrait]

    [Carl Friedrich Gauss](http://en.wikipedia.org/wiki/Carl_Friedrich_Gauss)

    ![gauss-portrait]


    * [Archidemes of Syracuse](http://en.wikipedia.org/wiki/Archimedes)

    ![archidemes-portrait]

[archidemes-portrait]: http://upload.wikimedia.org/wikipedia/commons/thumb/e/e7/Domenico-Fetti_Archimedes_1620.jpg/220px-Domenico-Fetti_Archimedes_1620.jpg
[gauss-portrait]: http://upload.wikimedia.org/wikipedia/commons/thumb/9/9b/Carl_Friedrich_Gauss.jpg/220px-Carl_Friedrich_Gauss.jpg
[taylor-portrait]: http://upload.wikimedia.org/wikipedia/commons/thumb/2/25/BTaylor.jpg/220px-BTaylor.jpg

The progress of abstraction -<

:   1.  Everything is an object.
    2.  A program is a bunch of objects telling each other what to do by sending
        messages.
    3.  Each object has its own memory made up of other objects.
    4.  Every object has a type.
    5.  All objects of a particular type can receive the same messages.

    -   An object has state, behavior and identity.
    -   An object has an interface
    -   An object provides services
    -   The hidden implementation (private, protected, public)
    -   Reusing the implementation

    `Is-a` vs. `is-like-a` relationships

    -   Interchangeable objects with polymorphism
    -   upcasting
    -   The singly rooted hierarchy
    -   Containers
    -   Object creation & lifetime
    -   Exception handling: dealing with errors
    -   Concurrent programming
    -   Java and the Internet

    You know what a procedural program looks like: data definitions and function
    calls. To find the meaning of such a program, you must work at it, looking
    through the function calls and low-level concepts to create a model in your
    mind. This is the reason we need intermediate representations when designing
    procedural programs—by themselves, these programs tend to be confusing because
    the terms of expression are oriented more toward the computer than to the
    problem you’re solving.

    -   Where storage lives
        -   The Stack.
        -   The Heap.
        -   Constant storage.
        -   Non-RAM storage.
    -   High-precision numbers
        -   BigInteger, BigDecimal

    An important use of static for methods is to allow you to call that method
    without creating an object. This is essential, as you will see, in defining the
    `main()` method that is the entry point for running an application.

    JavaDoc, Embedded HTML, @see, @version, @author, @since, @param, @return

    This phenomenon is often called `aliasing(t1 = t2)`, and it's a fundamental way
    that Java works with objects. But what if you don't want aliasing to occur in
    this case? You could forego the assignment and say: `t1.level = t2.level`

    A trailing character after a literal value establishes its type. Uppercase or
    lowercase L means long (however, using a lowercase l is confusing because it
    can look like the number one). Uppercase or lowercase `F` means float. Uppercase
    or lowercase `D` means double.

    `Integer.toBinaryString(b)`{.java}

    ```java
    int i = 23;
    long l = (long)i; // "Widening," so cast not really required, long l = i;
    int i2 = (int)l; // A "narrowing conversion"
    ```

    java.lang.Math

    A compendium `[kəm'pɛndɪəm]` 概略 of operators

    ```java
    Character.isLowerCase(c)
    return, break, continue, break, switch,
    Random.nextInt(23),
    Random.nextDouble(23.45)
    ```

    ```java
    public class Leaf {
        int i = 0;
        Leaf increment() {
            i++;
            return this;
        }
        void print() {
            System.out.println("i = " + i);
        }
        public static void main(String[] args) {
            Leaf x = new Leaf();
            x.increment().increment().increment().print();
        }
    }
    ```

    `new`, `finalize()`,

    1. Your objects might not get garbage collected.
    2. Garbage collection is not destruction.
    3. Garbage collection is only about memory.

    `super.finalize()`
    `System.gc() /* gabage collection */`

本章介绍了使用 NodeJS 操作文件时需要的 API 以及一些技巧，总结起来有以下几点： -<

-   学好文件操作，编写各种程序都不怕。
-   如果不是很在意性能，fs 模块的同步 API 能让生活更加美好。
-   需要对文件读写做到字节级别的精细控制时，请使用 fs 模块的文件底层操作 API。
-   不要使用拼接字符串的方式来处理路径，使用 path 模块。
-   掌握好目录遍历和文件编码处理技巧，很实用。

`git reset`{.bash .featured .heart} -<

:   ```bash
    git reset --hard HEAD^
    git reset --hard e8b4121
    git reflog
    ```

    -   场景1：当你改乱了工作区某个文件的内容，想直接丢弃工作区的修改时，用命令 `git checkout -- file`{.bash}
    -   场景2：当你不但改乱了工作区某个文件的内容，还添加到了暂存区时，想丢弃修改，分
        两步，第一步用命令 `git reset HEAD file`{.bash}，就回到了场景1，第二步按场景 1 操作。

    ```bash
    git remote add origin git@server-name:path/repo-name.git
    git checkout -b dev
    git branch dev && git checkout dev
    git checkout master && git merge dev
    ```

    -   查看分支：`git branch`{.bash}
    -   创建分支：`git branch <name>`{.bash}
    -   切换分支：`git checkout <name>`{.bash}
    -   创建+切换分支：`git checkout -b <name>`{.bash}
    -   合并某分支到当前分支：`git merge <name>`{.bash}
    -   删除分支：`git branch -d <name>`{.bash}

    ```bash
    $ git status
    On branch master
    You have unmerged paths.
      (fix conflicts and run "git commit")

    Unmerged paths:
      (use "git add <file>..." to mark resolution)

    both modified:      good.txt

    no changes added to commit (use "git add" and/or "git commit -a")
    ```

    ![](http://www.liaoxuefeng.com/files/attachments/001384909239390d355eb07d9d64305b6322aaf4edac1e3000/0)

    ```bash
    git stash
    git stash,
    git stash apply,
    git stash pop
    ```

    ```bash
    git remote
    git branch --set-upstream branch-name origin/branch-name
    git tag <tag-name>
    git show tag
    git tag -a <tag-name> -m <commit-msg> <commit-id>
    git tag -s <secret-tag-name> -m <commit-msg> <commit-id>
    git tag -d <tag-name>
    git push origin <tag-name> # push local tag to remote origin
    git push origin --tags
    ```

    delete romete tag
    :   `git push origin :refs/tags/<tag-name>`{.bash}

    ```bash
    git config --global alias.st status
    git config --global alias.last "log -1"
    cat ~/.gitconfig
    cat .git/config
    [core]
    repositoryformatversion = 0
    filemode = true
    bare = false
    logallrefupdates = true
    [remote "origin"]
    url = git@gitcafe.com:gnat/learngit.git
    fetch = +refs/heads/*:refs/remotes/origin/*
    ```

    -   `/etc/gitconfig` 文件：系统中对所有用户都普遍适用的配置。若使用 `git config`{.bash} 时用 `--system` 选项，读写的就是这个文件。
    -   `~/.gitconfig` 文件：用户目录下的配置文件只适用于该用户。若使用 `git config`{.bash} 时用 `--global` 选项，读写的就是这个文件。
    -   `git config --global core.editor emacs`{.bash}
    -   `git config --global merge.tool vimdiff`{.bash}

python code point -<

:   ```python
    name = raw_input()
    print "your name is ", name
    ord('A') # char -> integer ordinal
    chr(65)  # integer ordinal -> char
    u'中文'
    u'中文转换'.encode('utf-8').decode('utf-8')
    len(u'abc')
    ```
