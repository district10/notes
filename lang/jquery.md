---
title: Learning jQuery
...

Learning jQuery
===============

<div class="tzx-fright">
[![Learning jQuery - Fourth Edition (豆瓣)](https://img1.doubanio.com/mpic/s27104238.jpg)](https://book.douban.com/subject/24669823/)
</div>

jQuery is a powerful JavaScript library that can enhance your websites
regardless of your background. In this book, creators of the popular jQuery
learning resource, [jQuery Books](http://book.learningjquery.com/), share their
knowledge, experience, and enthusiasm about jQuery to help you get the most
from the library and to **make your web applications shine**. For designers,
jQuery leverages existing CSS and HTML skills, allowing you to dynamically find
and change any aspect of a page. This book provides a gentle introduction to
jQuery concepts, allowing you to add interactions and animations to your
pages-even if previous attempts at writing JavaScript have left you baffled (迷惑).
For programmers, jQuery offers an open-source, standards-compliant,
unobtrusive (`['ʌnəb'trʊsɪv]`, 不唐突的；谦虚的) approach to writing complex
JavaScript applications. This book will **guide you past the pitfalls**
associated with AJAX, events, effects, and advanced JavaScript language
features, as well as provide you with a reference to the jQuery library to
return to again and again. This book begins with a tutorial to jQuery, followed
by an examination of common, real-world client-side problems, and solutions for
each of them. A detailed reference rounds off the book, making it an invaluable
resource for answers to all your jQuery questions. Who this book is written for
This book is for web designers who want to create interactive elements for
their designs, and for developers who want to create the best user interface
for their web applications. The reader will need the basics of HTML and CSS,
and should be comfortable with the syntax of JavaScript. No knowledge of jQuery
is assumed, nor is experience with any other JavaScript libraries required.

## Getting Started

Words

:   #. WWW
    #. CSS
    #. jQuery

What jQuery does

:   #. Access elements in a document: `$('div.content').find('p');`{.javascript}
    #. Modify the appearance of a web page: `$('ul > li:first').addClass('active');`{.javascript}
    #. Alter the content of a document: `$('#container').append('<a href="more.html">more</a>);'`{.javascript}
    #. Respond to a user's interaction:

        ```javascript
        $('button.show-details').click(function() {
            $('div.details').show();
        });
        ```

    #. Animate changes being made to a document: `$('div.details').slideDown();`{.javascript}
    #. Retrieve information from a server without refreshing a page: `$('div.details').load('more.html #content');`{.javascript}
    #. Simplify common JavaScript tasks:

        ```javascript
        $.each(obj, function(key, value) {
            total += value;
        });
        ```

Why jQuery works well

:   #. Leverage knowledge of CSS
    #. Support extensions
    #. Abstract away browser quirks
    #. Always work with sets
    #. Allow multiple actions in one line

Development Tools

:  #. Firebug
:  #. Chrome Developer Tools

## Selecting Elements

`$()`{.javascript}

:   #. tag name: `p { }`{.css}
    #. id: `#id { }`{.css}
    #. class: `.class { }`{.css}
    #. more CSS selectors
        i. `#selected-plays > li { }`{.css}
        #. `#selected-plays li:not(.horizontal)`{.css}
    #. attribute selectors
        i. `img[alt] { }`{.css}
        #. `a[href^="mailto:"]`{.css}
            - `^=` (start with)
            - `$=` (end with)
            - `*=` (contains)
    #. custom selectors
        i. `$('div.horizontal:eq(1)')`{.javascript} (0-based) *vs.* `div:nth-child(1)`{.css} (1-based)
        #. `tr:even`{.css}
        #. `tr:nth-child(odd)`{.css}
        #. `tr:contains(Henry)`{.css}
        #. `nth-child(f(n))`{.css}, n->`{0..INF}`, f(n)->`{1..INF, -INF..-1}`
    #. form selectors
        i. `input[type="radio"]:checked`{.css}
        #. `input[type="password"]`{.css}

DOM traversal methods

:   #. `$('tr')`{.javascript} == `$('tr', this)`{.javascript} -> `$(this).find(tr)`{.javascript}
    #. `$('tr').filter(':even').addClass('alt');`{.javascript}
    #. example

        ```css
        a.external {
            background: #fff url(images/external.png) no-repeat 100% 2px;
            padding-right: 16px;
        }
        ```

        ```javascript
        $('a').filter(function() {
            return this.hostname && this.hostname != location.hostname;
        }).addClass('external');
        ```

    #. `next()`{.javascript}, `nextAll()`{.javascript},
       `nextAll().addBack()`{.javascript}, `parent()`{.javascript},
       `parent().children()`{.javascript},
    #. chaining

        ```javascript
        $('td:contains(Henry)')
            .parent()
            .find('td:eq(1)')           // Find the 2nd descendant cell
                .addClass('highlight')
                .end()                  // Return to the parent
            .find('td:eq(2)')           // Find the 3rd descendant cell
                .addClass('highlight');
        ```
    #. `$().get(0)`{.javascript} == `$()[0]`{.javascript}

## Handling Events

callback functions

:   ```javascript
    function doStuff() {
        // ...
    }
    ```

    ```html
    // *eval* a function when onload
    <body onload="doStuff();">
    ```

    or

    ```javascript
    window.onload = doStuff;
    ```

document ready:

:   ```javascript
    $(document).ready(function() {
        // ...
    });

    // same but shorter
    $(function() {
        // ...
    });

    jQuery(document).ready(function($) {
        // here, we can use $ like normal!
    });
    ```

actions:

:   ```javascript
    $().on( 'click', cb )

    $().addClass('className');
    $().removeClass('className');
    $().removeClass().addClass('className'); // remove all, then add one

    $().toggleClass('className');
    ```

`$(this)`{.javascript}, `this`{.javascript}:

:   The jQuery constructor accepts a 2nd parameter called **context** which can be
    used to override the context of the selection.

    `jQuery("img", this);`{.javascript} --> `jQuery(this).find("img");`{.javascript}

    - `this`, 表示当前的上下文对象是一个 **html 对象**，可以调用 html 对象所拥
      有的属性，方法;
    - `$(this)`, 代表的上下文对象是一个 jQuery 的上下文对象，可以调用 jQuery 的
      方法和属性值

    refs and see also

     - [javascript - $(this) selector and children? - Stack Overflow](http://stackoverflow.com/questions/306583/this-selector-and-children)
     - [Jquery中的this与$(this) - Chris.gong - 博客园](http://www.cnblogs.com/iceWolf/archive/2009/08/27/1555138.html)

Event propagation

:   ![capturing (to leaf) & bubbling (to root)](http://whudoc.qiniudn.com/event-propagation.png)

    #. event bubbling
    #. event bubbles up

    ```javascript
    $().click(function() {
        if (event.target == this) {
            // ...
            event.preventDefault();
            event.stopPropagation();
        }

        // return <propagate?>
    });

    // event.target is a html object, if (event.target == this) ...
    :? $(event.target).is('button');
    :? $(event.target).hasClass('className');

    $().hover(function(){
        // entering
    }, function(){
        // leaving
    });

    // remove an event handler
    $().off('click'); // 这种就把所有的 handler 都 remove 了

    $().on('click.namespace', cb); // event can be *named* to a namespace
    $().on(event, target, cb);

    // remove event handler
    $().off('click.namespace');

    $().one('click', cb);

    $().trigger('click');
    ```

`event.stopPropagation();`{.javascript} *vs.* `return false;`{.javascript}

:   有点不一样。

    `return false`{.javascript} calls both

      - `event.preventDefault()`{.javascript} and
      - `event.stopPropagation()`{.javascript}

    `preventDefault`{.javascript}
    `event.stopPropagation()`{.javascript}

    refs and see also

      - [Examples - Web API 接口 | MDN](https://developer.mozilla.org/zh-CN/docs/Web/API/Document_Object_Model/Examples#Example_5:_Event_Propagation)

kbds

:   - <a id="switcher-dents" href="http://tangzx.qiniudn.com/dents.html">dents</a>
    - <a id="switcher-notes" href="http://tangzx.qiniudn.com/notes.html">notes</a>
    - <a id="switcher-links" href="http://tangzx.qiniudn.com/links.html">links</a>

    ```javascript
    $(document).ready(function() {

        var triggers = {
            D: 'dents',
            N: 'notes',
            L: 'links'
        };

        $(document).keyup(function(event) {
            var key = String.fromCharCode(event.which);
            if (key in triggers) {
                $('#switcher-' + triggers[key]).click();
            }
        });

    });
    ```

    `mousedown`, `mouseup`

    不管用不用 jQuery，都是要处理 event 里面的 which。

## Styling and Animating

```javascript
// get one
.css('property') // returns "value"

// get multi
.css(['p1', 'p2']) // returns {'p1': 'v1', 'p2': 'v2'}

// set multi
.css({
    k: v
    ...
})

// example
$(document).ready(function() {
    var $speech = $('div.speech');
    $('#switcher-large').click(function() {
        var num = parseFloat($speech.css('fontSize'));
        num *= 1.4;
        $speech.css('fontSize', num + 'px');
    });
})

// parseFloat 是 js built-in。
```

用 jQuery 的 `.css`{.javascript} 的好处？

:   再不用一个一个手工处理兼容性：

    ```css
    -webkit-property-name: value;
    -moz-property-name: value;
    -ms-property-name: value;
    -o-property-name: value;
    property-name: value;
    ```

    `.css('propertyName', 'value')`{.javascript}

Effects

:   ```javascript
    hide(); show(); // default -> 400ms
    hide('slow');   // slow    -> 600ms
    show('fast');   // fast    -> 200ms
    show(850);      // specified
    ```

more effects

  - `fadeIn()`{.javascript}, (show)
  - `fadeOut()`{.javascript}, (hide)
  - `fadeTo('fast', 0.8)`{.javascript}
  - `slideUp()`{.javascript}, (hide)，这两个一定要区分好！拉下来就是看到了。
  - `slideDown()`{.javascript}, (show)，拉上去就是收起来。

```javascript
$('a.more').click(function(event) {
    event.preventDefault();
    if ($firstPara.is(':hidden')) {
        $firstPara.fadeIn('slow');
        $(this).text('read less');
    } else {
        $firstPara.fadeOut('slow');
        $(this).text('read more');
    }
};
```

cerating custom animations

:   ```javascript
    // 1
    .animate({
        property1: 'value1',
        property2: 'value2'
    }, duration, easing, function() {
        alert('The animation is finished.');
    });

    // 2
    .animate({properties}, {options});
    /*
        options, e.g.:
            duration: 'value',
            easing: 'value',
            specialEasing: {
                property1: 'easing1',
                property2: 'easing2'
            },
            queue: true,
            step: callback,
            complete: function() {
                alert('The animation is finished.');
            }
    */
    ```

    For example, adjusting the `left` property will have no effect on the
    matching elements unless those elements have their CSS position set to
    `relative` or `absolute`. The default CSS position for all block-level
    elements is `static`, which accurately describes how those elements will
    remain if we try to move them without first changing their position value.

## Positioning with CSS

position

  - static
  - absolute
  - relative
  - fixed

`position: absolute;`

  - `top: 50px;`
  - `bottom: 50px;`
  - `left: 50px;`
  - `right: 50px;`

relative

:   For example, if you have three paragraphs on your web page, and the third
    has a "position: relative" style placed on it, it's position will be offset
    based on it's current location.

    ```htlm
    <p>Paragraph 1.</p>
    <p>Paragraph 2.</p>
    <p style="position: relative;left: 2em;">Paragraph 3.</p>
    ```

    In the above example, the third paragraph will be positioned 2em from the left
    side of the container element, but will still be below the first two
    paragraphs. It would remain in the normal flow of the document, and just be
    offset slightly. If you changed it to position: absolute; anything following it
    would display on top of it, because it would no longer be in the normal flow of
    the document.

    fixed: my `footer` in this page, is fixed.

    refs and see also

      - [css - Position Relative vs Position Absolute? - Stack Overflow](http://stackoverflow.com/questions/10426497/position-relative-vs-position-absolute)
      - [Absolute vs. Relative - Explaining CSS Positioning](http://webdesign.about.com/od/advancedcss/a/aa061307.htm)
      - [css - Difference between style = "position:absolute" and style = "position:relative" - Stack Overflow](http://stackoverflow.com/questions/4457790/difference-between-style-positionabsolute-and-style-positionrelative) &hearts;
      - [Static vs Relative vs Absolute vs Fixed Positioning](http://www.yorku.ca/nmw/facs1939f13/week02/css_relVSabsVSfixed.html)

    ```javascript
    $switcher.css({
        position: 'relative'
    }).animate({
        borderWidth: '5px',
        left: paraWidth - switcherWidth,
        height: '+=20px'
    }, 'slow');
    ```

Simultaneous *vs.* queued effects

:   ```javascript
    $switcher
        .css({position: 'relative'})
        .animate({left: paraWidth - switcherWidth}, 'slow')
        .animate({height: '+=20px'}, 'slow')
        .animate({borderWidth: '5px'}, 'slow');

    // queued
    $switcher
        .css({position: 'relative'})
        .fadeTo('fast', 0.5)
        .animate({left: paraWidth - switcherWidth}, 'slow')
        .fadeTo('slow', 1.0)
        .slideUp('slow')
        .slideDown('slow');

    // sync
    $switcher
        .css({position: 'relative'})
        .fadeTo('fast', 0.5)
        .animate({
            left: paraWidth - switcherWidth
        }, {
            duration: 'slow',
            queue: false
        })
        .fadeTo('slow', 1.0)
        .slideUp('slow')

    $switcher
        .css({position: 'relative'})
        .fadeTo('fast', 0.5)
        .animate({
            left: paraWidth - switcherWidth
        }, {
            duration: 'slow',
            queue: false
        })
        .fadeTo('slow', 1.0)
        .slideUp('slow')
        .queue(function(next) {
            $switcher.css({backgroundColor: '#f00'});
            next();
        })
        .slideDown('slow');
    ```

<div class="tzx-drawer" shy>
[Effects | jQuery API Documentation](http://api.jquery.com/category/effects/)

:   The jQuery library provides several techniques for adding animation to a
    web page. These include simple, standard animations that are frequently
    used, and the ability to craft sophisticated custom effects.

    官网的 API 表示为 `.animate( properties [, duration ] [, easing ] [, complete ] )`，
    其实应该是： `.animate( properties [, duration [, easing [, complete ]]] )` 才对。
    当然，不必计较。
</div>

Effects

:   ```javascript
    $('p').eq(2)
        .css('border', '1px solid #333')
        .click(function() {
            var $clickedItem = $(this);
            $clickedItem.next().slideDown('slow', function() {
                $clickedItem.slideUp('slow');
            });
        });
    ```

Effects on a single set of elements are:

  - Simultaneous when applied as multiple properties in **a single `animate()` method**
  - Queued when applied in **a chain of methods**, **unless the queue option is
    set to `false`**

Effects on multiple sets of elements are:

  - Simultaneous by default
  - Queued when applied within the callback of another effect or within the callback of the `.queue()` method

## Manipulating the DOM

```javascript
$('div.chapter a').attr({
    rel: 'external',
    title: 'Learn more at Wikipedia'
});
```

To set a unique id value for each link, we can harness another feature of
jQuery methods such as `.css()` and `.each()` — **value callbacks**.

value callbacks 就是说设置的不是 value，而是一个 callback 函数，可以 eval 得到 value。如下：

```javascript
$(document).ready(function() {
    $('div.chapter a[href*="wikipedia"]').attr({
        rel: 'external',
        title: function() {
            return 'Learn more about ' + $(this).text()
                    + ' at Wikipedia.';
        },
        id: function(index, oldValue) {
            return 'wikilink-' + index;
        }
        });
});
```

The `.attr()`  and  `.prop()` methods are very powerful tools, and with them we
can make targeted changes to the document.

别忘了有些人不用或者有些人的浏览器不支持 javascript，所以不要把网页的内容，都放到 js 里来实现。

`$('<a href="#top">back to top</a>').insertAfter('div.chapter p')`{.html}, 每一个 p 都添加

inserts & pendtos

  - `.insertBefore()`{.javascript} adds content outside of and before existing elements
  - `.prependTo()`{.javascript} adds content inside of and before existing elements
  - `.appendTo()`{.javascript} adds content inside of and after existing elements
  - `.insertAfter()`{.javascript} adds content outside of and after existing elements

```javascript
var $notes = $('<ol id="notes"></ol>').insertBefore('#footer');
$('span.footnote').each(function(index) {
    $('<sup>' + (index + 1) + '</sup>').insertBefore(this);
    $(this).appendTo($notes).wrap('<li></li>');
});
```

Insertion method callbacks

:   `[ '<sup>', index + 1, '</sup>' ].join('')`{.javascript}

coping elements

:   `$('div.chapter p:eq(0)').clone().insertBefore('div.chapter');`{.javascript}

    ```javascript
    $clonedCopy
        .addClass('pulled')
        .find('span.drop')
            .html('&hellip;')
            .end()
        .prependTo($parentParagraph);
    ```

    - wrap
        + `.wrap()`{.javascript}
        + `.wrapAll()`{.javascript}
        + `.wrapInner()`{.javascript}
    - contents
        + `.html()`{.javascript}
        + `.text()`{.javascript}
    - replacements
        + `.replaceAll()`{.javascript}
        + `.replaceWith()`{.javascript}
    - removes
        + `.empty()`{.javascript}, remove all children
        + `.remove()`{.javascript}, remove matched (current?)
        + `.detach()`{.javascript}

aJax

:   ```javascript
    $(document).ready(function() {
        $('#letter-a a').click(function(event) {
            event.preventDefault();
            $('#dictionary').load('a.html');
        });
    });
    ```

    ```javascript
    $.load('.html')
    $.getScript('.js');
    $.getJSON('.json');
    $.get('.xml');
    ```

    ```javascript
    $('#dictionary').html(html);

    // $.get(url, callback)
    $.get("demo_ajax_load.txt", function(result){
        $("div").html(result);
    });

    // $.get(url, query)
    $.get("test.php", { name: "John", time: "2pm" } );

    // $.post(URL,data,callback);
    $.post("demo_test_post.asp", {
        name:"Donald Duck",
        city:"Duckburg"
    }, function(data,status){
        alert("Data: " + data + "\nStatus: " + status);
    });

    $(elem).empty();
    $(elem).append($(elem2))

    var formValues = $(this).serialize();

    $('#letter-f form').submit(function(event) {
        event.preventDefault();
        var formValues = $(this).serialize();
        $.get('f.php', formValues, function(data) {
            $('#dictionary').html(data);
        });
    });

    var $loading = $('<div id="loading">Loading...</div>').insertBefore('#dictionary');
    $(document).ajaxStart(function() {
        $loading.show();
    }).ajaxStop(function() {
        $loading.hide();
    });

    $('#dictionary').hide().load('a.html', function() {
        $(this).fadeIn();
    });

    $.get('z.php', requestData, function(data) {
        $('#dictionary').html(data);
    }).fail(function(jqXHR) {
        $('#dictionary')
            .html('An error occurred: ' + jqXHR.status)
            .append(jqXHR.responseText);
    });

    $('h3.term').click(function() {
        $(this).siblings('.definition').slideToggle();
    });
    ```

Security limitations

:   - js
    - iframe

    ```javascript
    $(document.createElement('script'))
        .attr('src', 'http://example.com/example.js')
        .appendTo('head');

    jQuery.parseJSON(obj)
    ```

    Cross-origin resource sharing A more recent technique that has been drafted
    into a W3C specification is Cross-Origin Resource Sharing (CORS). This
    technique requires sending a custom HTTP header from one domain that the other
    domain expects. The receiving domain must send back an
    Access-Control-Allow-Origin response header to the requester saying that the
    domain is accepted. For more information about CORS, visit <http://www.w3.org/TR/cors>.

    <div class="tzx-drawer" shy>
    [Cross-origin resource sharing - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Cross-origin_resource_sharing)

    :   Cross-origin resource sharing (CORS) is a mechanism that allows
        restricted resources (e.g. fonts) on a web page to be requested from
        another domain outside the domain from which the resource originated.

        "Cross-domain" AJAX requests are forbidden by default because of their
        ability to perform advanced requests (POST, PUT, DELETE and other types
        of HTTP requests, along with specifying custom HTTP headers) that
        introduce many cross-site scripting security issues.

        Simple example

        :   This is generally not appropriate when using the same-origin security
            policy. When a CORS-compatible browser attempts to make a cross-origin
            request:

            1. The browser sends the OPTIONS request with an Origin HTTP header.
               The value of this header is the domain that served the parent page.
               When a page from http://www.foo.com attempts to access a user's data
               in `bar.com`, the following request header would be sent to `bar.com`:

                ```
                Origin: http://www.foo.com
                ```

            2. The server may respond with:

              - An Access-Control-Allow-Origin (ACAO) header in its response
                indicating which origin sites are allowed. For example:

                ```
                Access-Control-Allow-Origin: http://www.foo.com
                ```

              - An error page if the server does not allow the cross-origin request

              - An `Access-Control-Allow-Origin (ACAO)` header with a wildcard that
                allows all domains:

                ```
                Access-Control-Allow-Origin: *
                ```

        To illustrate, the following table gives an overview of typical outcomes
        for checks against the URL `http://www.example.com/dir/page.html`.

        -----------------------------------------                 -------     -----------------------------------------
        Compared URL                                              Outcome     Reason

        http://www.example.com/dir/page2.html                     Success     Same protocol, host and port

        http://www.example.com/dir2/other.html                    Success     Same protocol, host and port

        http://username:password@www.example.com/dir2/other.html  Success     Same protocol, host and port

        http://www.example.com:81/dir/other.html                  Failure     Same protocol and host but different port

        https://www.example.com/dir/other.html                    Failure     Different protocol

        http://en.example.com/dir/other.html                      Failure     Different host

        http://example.com/dir/other.html                         Failure     Different host (exact match required)

        http://v2.www.example.com/dir/other.html                  Failure     Different host (exact match required)

        http://www.example.com:80/dir/other.html                  Depends     Port explicit. Depends on implementation in browser.
        -----------------------------------------                 -------     -----------------------------------------

        Relaxing the same-origin policy

          - document.domain property
          - Cross-Origin Resource Sharing
          - Cross-document messaging
          - JSONP
          - WebSockets

        refs and see also

          - [Same-origin policy - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Same-origin_policy)
          - [Cross-Origin Resource Sharing](https://www.w3.org/TR/cors/)
    </div>

Using JSONP for remote data

:   A PHP implementation of the JSONP technique is quite simple:

    :   ```php
        <?php
            print($_GET['callback'] .'('. $data .')');
        ?>
        ```

    low-level ajax method

    :   ```javascript
        $.ajax({
            url: 'a.html',
            success: function(data) {
                $('#dictionary').html(data);
            }
        });
        ```

        [jQuery.ajax() | jQuery API Documentation](http://api.jquery.com/jQuery.ajax/)

    modifying default options

    :   ```javascript
        $.ajaxSetup({
            url: 'a.html',
            type: 'POST',
            dataType: 'html'
        });
        ```

## Using Plugins

[JQuery Cycle Plugin](http://malsup.com/jquery/cycle/)

:   ```javascript
    $(document).ready(function() {
        $('#books').cycle();
    })
    ```

Specifying plugin method parameters

:   ```javascript
    $(document).ready(function() {
        $('#books').cycle({
            timeout: 2000,
            speed: 200,
            pause: true
        });
    });
    ```

Modifying parameter defaults

:   ```javascript
    $.fn.cycle.defaults.timeout = 10000;
    $.fn.cycle.defaults.random = true;
    ```
Custom selectors

:   ```javascript
    // api
    $.expr[':'].test = function(obj, index, meta, stack){
        // obj - is a current DOM element
        // index - the current loop index in stack
        // meta - meta data about your selector
        // stack - stack of all elements to loop

        // Return true to include current element
        // Return false to explude current element
    };

    // Usage:
    $('.someClasses:test').doSomething();

    // demo
    $.expr[':'].withRel = function(obj){
      var $this = $(obj);
      return ($this.attr('rel') != '');
    };

    // Usage:
    $('a:withRel').css('background-color', 'yellow');
    ```

    ```javascript
    // method 1
    $.expr[':'].selector = function(elem, idx, matches, set){...}

    // method 2
    $.extend($.expr(':'),{
        selector: function(elem, idx, matches, set){...}
    });
    ```

    refs and see also

      - [jQuery Howto: Custom jQuery selectors](http://jquery-howto.blogspot.jp/2009/06/custom-jquery-selectors.html)
      - [jQuery Custom [:] Expression Test](http://malsup.com/jquery/expr/)

[js-cookie/js-cookie: A simple, lightweight JavaScript API for handling browser cookies](https://github.com/js-cookie/js-cookie)

:   `$.cookie('cyclePaused', 'y', {path: '/', expires: 7})`{.javascript}

[jQuery UI](http://jqueryui.com/)

:   jQuery UI is a curated set of user interface interactions, effects,
    widgets, and themes built on top of the jQuery JavaScript Library. Whether
    you're building highly interactive web applications or you just need to add
    a date picker to a form control, jQuery UI is the perfect choice.

    [Easings | jQuery UI API Documentation](http://api.jqueryui.com/easings/)

    `$books.find('.title').resizable();`{.javascript}

    Other jQuery UI interactions include Draggable, Droppable, and Sortable.
    Like Resizable, they are highly configurable.

    ```javascript
    $('<div id="slider"></div>').slider({
        min: 0,
        max: $('#books li').length - 1
    }).appendTo($controls);

    var $books = $('#books').cycle({
        timeout: 2000,
        speed: 200,
        pause: true,
        before: function() {
            $('#slider').slider('value', $('#books li').index(this));
        }
    });
    ```

## Developing Plugins

Immediately Invoked Function Expression (IIFE), looks like this:

```javascript
(function($) {
    // ...
})(jQuery);
```

<div class="tzx-drawer" shy>
[Immediately-invoked function expression - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Immediately-invoked_function_expression)

:   An immediately-invoked function expression (or IIFE, pronounced "iffy")
    is a JavaScript design pattern which produces a lexical scope using
    JavaScript's function scoping. Immediately-invoked function expressions can
    be used to avoid variable hoisting from within blocks, protect against
    polluting the global environment and simultaneously allow public access to
    methods while retaining privacy for variables defined within the function.
    This pattern has been referred to as a **self-executing anonymous
    function**, but Ben Alman introduced the term IIFE as a more semantically
    accurate term for the pattern, shortly after its discussion arose on
    comp.lang.javascript.

    An initial parenthesis is one case where the automatic semicolon insertion
    (ASI) in JavaScript can cause problems; the expression is instead
    interpreted as a call to the last term on the preceding line. In some
    styles that omit optional semicolons, the semicolon is placed in front of
    the parenthesis, and is known as a defensive semicolon. For example:

    ```javascript
    a = b + c
    ;(function() {
      // code
    })();
    ```

    ...to avoid being parsed as c(...).

    ```javascript
    var v, getValue;
    v = 1;
    getValue = (function(x) {
      return function() { return x; };
    })(v);
    v = 2;

    getValue(); // 1
    ```

    Here the function passes v as an argument and is invoked immediately,
    preserving the inner function's execution context.

    IIFEs are also useful for establishing private methods for accessible
    functions while still exposing some properties for later use.[15] The
    following example comes from Alman's post on IIFEs.

    ```javascript
    var counter = (function(){
        var i = 0;

        return {
            get: function(){ return i; },
            set: function( val ){ i = val; },
            increment: function() { return ++i; }
        };
    })();

    // 'counter' is an object with properties, which in this case happen to be
    // methods.

    counter.get(); // 0
    counter.set( 3 );
    counter.increment(); // 4
    counter.increment(); // 5
    ```

    If we attempt to access counter.i from the global environment, it will be
    undefined as it is enclosed within the invoked function and is not a
    property of counter. Likewise, if we attempt to access i it will result in
    an error as we have not declared i in the global environment.

    In lambda-calculus, this construct was referred to as "redex", for
    reducible expression, see Reduction strategy (code optimization).

    refs and see also

      - [Reduction strategy (lambda calculus) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Reduction_strategy_(lambda_calculus))
      - [Reduction strategy (code optimization) - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Reduction_strategy_(code_optimization))
</div>

Adding new global functions

:   e.g.

    ```javascript
    $.ajax()
    $.each()
    $.map()
    $.grep()
    ```

    ```javascript
    (function($) {

        $.sum = function(array) {
            var total = 0;
            $.each(array, function(index, value) {
                value = $.trim(value);
                value = parseFloat(value) || 0;
                total += value;
            });
            return total;
        };

        $.average = function(array) {
            if ($.isArray(array)) {
                return $.sum(array) / array.length;
            }
            return '';
        };

    })(jQuery);
    ```

    Extending the global jQuery object We can also employ an alternate syntax in
    defining our functions using the `$.extend()` function:

    The options object, Default parameter values

    ```javascript
    (function($) {
        $.fn.shadow = function(opts) {
        var defaults = {
            copies: 5,
            opacity: 0.1
        };
        var options = $.extend(defaults, opts);
            // ...
        };
    })(jQuery);
    ```

Customizable defaults

:   ```javascript
    (function($) {
        $.fn.shadow = function(opts) {
            var options = $.extend({}, $.fn.shadow.defaults, opts);
            // ...
        };
        $.fn.shadow.defaults = {
            // ...
        }
    ```


Combining filtering and striping

:   `$(this).children(':nth-child(4)').text() == topic;`

More selectors and traversal methods

:   ```javascript
    (function($) {

        $.extend($.expr[':'], {
            group: function(element, index, matches, set) {
                var num = parseInt(matches[3], 10);
                if (isNaN(num)) { return false; }
                return index % (num * 2) <num;
            }
        });

    })(jQuery);
    ```

    Especially with client-side scripting, developers can easily fall into the
    traps of premature optimization and micro-optimization.  These pitfalls can
    cause us to spend countless hours tweaking our code to shave milliseconds
    off of JavaScript execution.

    - `$('input:eq(1)')` faster than `$('input').eq(1)`
    - `next()`, `parent()`, `filter()`, `find()`,
    - `end()`, `addBack()`,
    - `if (event.type == 'mouseenter') {`

Event delegation

:   ```javascript
    $(document).ready(function() {

        $('#gallery').on('mouseenter mouseleave', 'div.photo', function(event) {
            var $details = $(this).find('.details');
            if (event.type == 'mouseenter') {
                $details.fadeTo('fast', 0.7);
            } else {
                $details.fadeOut('fast');
            }
        });

    });
    ```

Throttling (`['θrɔtliŋ]`, 节流) events

:   [jQuery Event Extensions | jQuery Learning Center](http://learn.jquery.com/events/event-extensions/)

    Determining the animation state:
    `if (!$image.is(':animated') || event.type == 'mouseleave')`

    Halting a running animation

    ```javascript
    // stop the current animation, then make another one
    $(this).find('img').stop().animate(...);
    ```

    `.stop()` method by default halts animations at their current position To
    mitigate this type of problem, the `.stop()` method can accept two Boolean
    ( true / false ) arguments, the second of which is known as `goToEnd`. If
    we set this argument to  true , the current animation not only stops, but
    also jumps immediately to the final value.

    Another jQuery method, `.finish()`, is available for halting animations.
    It's similar to `.stop(true, true)` in that it clears all queued animations
    and jumps the current animation to the final value. However, unlike
    `.stop(true, true)`, it jumps all the queued animations to their final
    values as well.

Using global effect properties

:   `$.fx`

    ```javascript
    $('#fx-toggle').show().on('click', function() {
        $.fx.off = !$.fx.off;
    });
    ```

    **Each time an animation method is called, jQuery goes through the following
    steps to determine the duration of the effect, in this order:**

      - It checks if  `$.fx.off`{.javascript} is  true. If so, it sets the
        duration to  0 .
      - It checks if the duration passed is a number. If so, it sets the
        duration to that number of milliseconds.
      - It checks if the duration pass matches one of the property keys of the
        `$.fx.speeds`{.javascript} object. If so, it sets the duration to the
        value of the property.
      - If the duration is not set by any of the above checks, it sets the
        duration to the value of `$.fx.speeds._default`{.javascript}.

    `$.fx.speeds._default = 250;`{.javascript}

    `$.fx.speeds.crawl = 1200`

---

- Multiproperty easing
- Taking fine-grained control of animations

The requestAnimationFrame() approach to animations is usually
preferable to setTimeout(). However, because of potential conflicts
when the two are used in the same code, requestAnimationFrame()
is not implemented in the jQuery core library.

## Advanced DOM Manipulation

progressive enhancement.

:   ```javascript
    $(document).ready(function() {
        $('#my-data th a').click(function(event) {
            event.preventDefault();
            $('#my-data tbody').load($(this).attr('href'));
        });
    });
    ```

graceful degradation.

:   ```
    $(document).ready(function() {
        var $table1 = $('#t-1');
        var $headers = $table1.find('thead th').slice(1);
        $headers
            .wrapInner('<a href="#"></a>')
            .addClass('sort');
    });
    ```

supply a comparator function to the  .sort() method:

:   ```
    arr.sort(function(a,b) {
        if (a < b) { return -1; }
        if (a > b) { return  1; }
        return 0;
    });
    ```

then apply this `.sort()` method to our table rows.

Using HTML5 custom data attributes

:   ```html
    <table id="t-2" class="sortable">
        <thead>
            <tr>
                <th></th>
                <th data-sort='{"key":"title"}'>Title</th>
                <th data-sort='{"key":"authors"}'>Author(s)</th>
                <th data-sort='{"key":"publishedYM"}'>Publish Date</th>
                <th data-sort='{"key":"price"}'>Price</th>
            </tr>
        </thead>
        <tbody>
            <tr data-book='
                    {
                        "img":"2862_OS.jpg",
                        "title":"DRUPAL 7",
                        "authors":"MERCER DAVID",
                        "published":"September 2010",
                        "price":44.99,
                        "publishedYM":"2010-09"
                    }'>
                <td><img src="images/2862_OS.jpg" alt="Drupal 7"></td>
                <td>Drupal 7</td>
                <td>David Mercer</td>
                <td>September 2010</td>
                <td>$44.99</td>
            </tr>
        <!-- code continues -->
        </tbody>
    </table>
    ```

    ```javascript
    $headers.on('click', function(event) {
        event.preventDefault();
        var $header = $(this),
        sortKey = $header.data('sort').key,
        sortDirection = 1;
        if ($header.hasClass('sorted-asc')) {
            sortDirection = -1;
        }
        rows.sort(function(a, b) {
            var keyA = $(a).data('book')[sortKey];
            var keyB = $(b).data('book')[sortKey];
            if (keyA < keyB) return -sortDirection;
            if (keyA > keyB) return sortDirection;
            return 0;
        });
    });
    ```

    Sorting and building rows with JSON

    Although we are lovingly crafting our table rows by hand with
    these two functions, JavaScript template systems such as Mustache
    (https://github.com/janl/mustache.js) and Handlebars
    (http://handlebarsjs.com/) could do a lot of the string processing
    and concatenation for us. Using templates can be especially beneficial as
    the size and complexity of a project grows.

```javascript
function prepRows(rows) {
    $.each(rows, function(i, row) {
        var authors = [],
        authorsFormatted = [];
        rows[i].titleFormatted = row.title;
        rows[i].title = row.title.toUpperCase();
        $.each(row.authors, function(j, auth) {
            authors[j] = auth.last_name + ' ' + auth.first_name;
            authorsFormatted[j] = auth.first_name + ' '
            + auth.last_name;
        });
        rows[i].authorsFormatted = authorsFormatted.join(', ');
        rows[i].authors = authors.join(' ').toUpperCase();
    });
    return rows;
}
```

---------------               ----------------------       --------------------------------------------------------------
Hook type                     Method altered               Example usage

`$.attrHooks`{.javascript}    `.attr()`{.javascript}       Prevents the  type attribute of an element from being changed.

`$.cssHooks`{.javascript}     `.css()`{.javascript}        Provides special handling for opacity in Internet Explorer.

`$.propHooks`{.javascript}    `.prop()`{.javascript}       Corrects the behavior of the selected property in Safari.

`$.valHooks`{.javascript}     `.val()`{.javascript}        Allows radio buttons and checkboxes to report a consistent value across browsers.
---------------               ----------------------       --------------------------------------------------------------

```javascript
(function($) {
    var div = document.createElement('div');
    $.support.textShadow = div.style.textShadow === '';
    $.support.filter = div.style.filter === '';
    div = null;
    if ($.support.textShadow) {
        $.cssHooks.glowColor = {
            set: function(elem, value) {
                if (value == 'none') {
                    elem.style.textShadow = '';
                } else {
                    elem.style.textShadow = '0 0 2px ' + value;
                }
            }
        };
    } else {
        $.cssHooks.glowColor = {
            set: function(elem, value) {
                if (value == 'none') {
                    elem.style.filter = '';
                } else {
                    elem.style.zoom = 1;
                    elem.style.filter = 'progid:DXImageTransform.Microsoft'
                                      + '.Glow(Strength=2, Color=' + value + ');';
                }
            }
        };
    }
})(jQuery);
```
<https://github.com/brandonaaron/jquery-cssHooks>

## Advanced Ajax

```
$(document).ready(function() {
    var $ajaxForm = $('#ajax-form'),
    $response = $('#response');
    $ajaxForm.on('submit', function(event) {
        event.preventDefault();
        $response.load('http://api.jquery.com/ #content',
        $ajaxForm.serialize());
    });
});

$.ajax({
    url: 'http://book.learningjquery.com/api/',
    dataType: 'jsonp',
    data: {
        title: $('#title').val()
    },
    success: function(data) {
        console.log(data);
    }
});

$ajaxForm.on('submit', function(event) {
    event.preventDefault();
    $.ajax({
        url: 'http://book.learningjquery.com/api/',
        dataType: 'jsonp',
        data: {
            title: $('#title').val()
        },
        success: response,
            error: function() {
            $response.html(failed);
        }
    });
});
```

Ajax promises

:   Using the promise's methods, we can rewrite our `$.ajax()` call to replace
    the success and error callbacks with an alternate syntax:

```
$.ajax({
    url: 'http://book.learningjquery.com/api/',
    dataType: 'jsonp',
    data: {
        title: $('#title').val()
    },
    timeout: 15000
})
.done(response)
.fail(function() {
    $response.html(failed);
});
```

```
$ajaxForm.on('submit', function(event) {
    event.preventDefault();
    $response.addClass('loading').empty();
    $.ajax({
        url: 'http://book.learningjquery.com/api/',
        dataType: 'jsonp',
        data: {
            title: $('#title').val()
        },
        timeout: 15000
    })
    .done(response)
    .fail(function() {
        $response.html(failed);
    })
    .always(function() {
        $response.removeClass('loading');
    });
});
```

- Caching responses
- Throttling Ajax requests

Adding Ajax prefilters

```
$.ajaxPrefilter(function(options) {
    if (/\.yml$/.test(options.url)) {
        return 'yaml'; // set datatype to yaml
    }
});
```

Defining alternate transports

<http://www.verious.com/tool/is-my-image-loaded>

## Append A, JavaScript Closures

Handling interactions between closures

When a reference to an inner function finds its way outside of the scope in which
the function was defined, this creates a closure on that function. We call variables
that are neither parameters nor local to the inner function's free variables, and the
environment of the outer function call closes them. Essentially, the fact that the
function refers to a local variable in the outer function grants the variable a stay of
execution. The memory is not released when the function completes, as it is still
needed by the closure.

The fact that most jQuery code is inside a function body is useful, because this can
protect against some namespace collisions. For example, it is this feature that allows
us to use  jQuery.noConflict() to free up the  $ shortcut for other libraries while
still being able to define the shortcut locally for use within our  .ready() handler.

```
$(document).ready(function() {
    for (var i = 0; i < 5; i++) {
        (function(value) {
            $('<div>Print ' + value + '</div>')
                .click(function() {
                    console.log(value);
                }).insertBefore('#results');
        })(i);
    }
});
```

```
$(document).ready(function() {
    for (var i = 0; i < 5; i++) {
        $('<div>Print ' + i + '</div>')
            .on('click', {value: i}, function(event) {
                console.log(event.data.value);
            }).insertBefore('#results');
    }
});
```

## Append B, Testing JavaScript with QUnit

<http://qunitjs.com/>

Introduction to unit testing ( http://qunitjs.com/intro/ )
•  QUnit Cookbook ( http://qunitjs.com/cookbook/ )
•  The jQuery Test-Driven Development article by Elijah Manor ( http://msdn.
microsoft.com/en-us/scriptjunkie/ff452703.aspx )
•  The Unit Testing Best Practices article by Bob McCune ( http://www.
bobmccune.com/2006/12/09/unit-testing-best-practices/ )
Many books on the topic also exist, such as Test Driven Development: By Exam

## append c, quick ref

Selector expressions

  - Simple CSS
  - Position among siblings
  - Position among matched elements
  - Attributes
  - Forms
  - Miscellaneous selectors

DOM traversal methods

  - Filtering
  - Descendants
  - Siblings
  - Ancestors
  - Collection manipulation
  - Working with selected elements

Event methods

  - Binding
  - Shorthand binding
  - Triggering
  - Shorthand triggering
  - Utility

Effect methods

  - Predefined effects

Ajax methods

  - Issuing requests
  - Request monitoring
  - Configuration
  - Utilities

Deferred objects

  - `$.Deferred`...

---

## Misc Notes

```javascript
Attribute Contains Word Selector [name~="value"]
```

[jQuery设计思想 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2011/07/jquery_fundamentals.html)

:   ```javascript
    $('a:first') //选择网页中第一个a元素
    $('tr:odd') //选择表格的奇数行
    $('div:visible') //选择可见的div元素
    $('div:gt(2)') // 选择所有的div元素，除了前三个
    $('#myForm :input') // 选择表单中的input元素
    $('div:animated') // 选择当前处于动画状态的div元素

    $('div').has('p'); // 选择包含p元素的div元素
    $('div').not('.myClass'); //选择class不等于myClass的div元素
    $('div').filter('.myClass'); //选择class等于myClass的div元素
    $('div').first(); //选择第1个div元素
    $('div').eq(5); //选择第6个div元素
    $('div').next('p'); //选择div元素后面的第一个p元素
    $('div').parent(); //选择div元素的父元素
    $('div').closest('form'); //选择离div最近的那个form父元素
    $('div').children(); //选择div的所有子元素
    $('div').siblings(); //选择div的同级元素

    $('div')
        .find('h3')
            .eq(2)
                .html('Hello')
                .end()              //退回到选中所有的h3元素的那一步
            .eq(0)                  //选中第一个h3元素
                .html('World');     //将它的内容改为World

    .html() 取出或设置html内容
    .text() 取出或设置text内容```
    .attr() 取出或设置某个属性的值
    .width() 取出或设置某个元素的宽度
    .height() 取出或设置某个元素的高度
    .val() 取出某个表单元素的值

    // 返回的元素不一样
    $('div').insertAfter($('p'));
    $('p').after($('div'));
    ```

    复制元素使用 `.clone()`。删除元素使用 `.remove()` 和 `.detach()`。两者的区别在
    于，前者不保留被删除元素的事件，后者保留，有利于重新插入文档时使用。清空元素内
    容（但是不删除该元素）使用`.empty()`。

    常用的工具方法有以下几种：

      - `$.trim()`{.javascript} 去除字符串两端的空格。
      - `$.each()`{.javascript} 遍历一个数组或对象。
      - `$.inArray()`{.javascript} 返回一个值在数组中的索引位置。如果该值不在数组中，则返回-1。
      - `$.grep()`{.javascript} 返回数组中符合某种标准的元素。
      - `$.extend()`{.javascript} 将多个对象，合并到第一个对象。
      - `$.makeArray()`{.javascript} 将对象转化为数组。
      - `$.type()`{.javascript} 判断对象的类别（函数对象、日期对象、数组对象、正则对象等等）。
      - `$.isArray()`{.javascript} 判断某个参数是否为数组。
      - `$.isEmptyObject()`{.javascript} 判断某个对象是否为空（不含有任何属性）。
      - `$.isFunction()`{.javascript} 判断某个参数是否为函数。
      - `$.isPlainObject()`{.javascript} 判断某个参数是否为用"{}"或"new Object"建立的对象。
      - `$.support()`{.javascript} 判断浏览器是否支持某个特性。

    events:

      - `.blur()`{.javascript} 表单元素失去焦点。
      - `.change()`{.javascript} 表单元素的值发生变化
      - `.click()`{.javascript} 鼠标单击
      - `.dblclick()`{.javascript} 鼠标双击
      - `.focus()`{.javascript} 表单元素获得焦点
      - `.focusin()`{.javascript} 子元素获得焦点
      - `.focusout()`{.javascript} 子元素失去焦点
      - `.hover()`{.javascript} 同时为mouseenter和mouseleave事件指定处理函数
      - `.keydown()`{.javascript} 按下键盘（长时间按键，只返回一个事件）
      - `.keypress()`{.javascript} 按下键盘（长时间按键，将返回多个事件）
      - `.keyup()`{.javascript} 松开键盘
      - `.load()`{.javascript} 元素加载完毕
      - `.mousedown()`{.javascript} 按下鼠标
      - `.mouseenter()`{.javascript} 鼠标进入（进入子元素不触发）
      - `.mouseleave()`{.javascript} 鼠标离开（离开子元素不触发）
      - `.mousemove()`{.javascript} 鼠标在元素内部移动
      - `.mouseout()`{.javascript} 鼠标离开（离开子元素也触发）
      - `.mouseover()`{.javascript} 鼠标进入（进入子元素也触发）
      - `.mouseup()`{.javascript} 松开鼠标
      - `.ready()`{.javascript} DOM加载完成
      - `.resize() 浏览器窗口的大小发生改变
      - `.scroll() 滚动条的位置发生变化
      - `.select() 用户选中文本框中的内容
      - `.submit() 用户递交表单
      - `.toggle() 根据鼠标点击的次数，依次运行多个函数
      - `.unload() 用户离开页面

    以上这些事件在 jQuery 内部，都是 `.bind()` 的便捷方式。使用 `.bind()` 可以更灵
    活地控制事件，比如为多个事件绑定同一个函数：

    ```javascript
    $('input').bind(
    　　'click change', //同时绑定click和change事件
    　　function() {
    　　　　alert('Hello');
    　　}
    );
    ```

    有时，你只想让事件运行一次，这时可以使用 `.one()` 方法。

    `one` 是 `on` 的扩展

    所有的事件处理函数，都可以接受一个事件对象（event object）作为参数,
    这个事件对象有一些很有用的属性和方法：

      - event.pageX 事件发生时，鼠标距离网页左上角的水平距离
      - event.pageY 事件发生时，鼠标距离网页左上角的垂直距离
      - event.type 事件的类型（比如click）
      - event.which 按下了哪一个键
      - event.data 在事件对象上绑定数据，然后传入事件处理函数
      - event.target 事件针对的网页元素
      - event.preventDefault() 阻止事件的默认行为（比如点击链接，会自动打开新页面）
      - event.stopPropagation() 停止事件向上层元素冒泡

    有两种方法，可以自动触发一个事件。一种是直接使用事件函数，另一种是使用 `.trigger()` 或 `.triggerHandler()`。

      - `$('a').click();`
      - `$('a').trigger('click');`

[jQuery最佳实践 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2011/08/jquery_best_practices.html)

:   1. 使用最新版本的jQuery

    2. 用对选择器

      - （1）最快的选择器：id选择器和元素标签选择器
      - （2）较慢的选择器：class选择器
      - （3）最慢的选择器：伪类选择器和属性选择器

    3. 理解子元素和父元素的关系

    `$parent.find('.child')`, 这条是最快的语句。`.find()` 方法会调用浏览器的原生方
    法（getElementById，getElementByName，getElementByTagName等等），所以速度较快。

    `$('#parent > .child')`, jQuery 内部使用 Sizzle 引擎，处理各种选择器。Sizzle引
    擎的选择顺序是从右到左，所以这条语句是先选.child，然后再一个个过滤出父元素
    `#parent`，这导致它比最快的形式大约慢70%。

    ```
    $('a').click(function(){
        alert(this.id); // alert($(this).attr('id'));
    });
    ```

    4. 不要过度使用jQuery

    5. 做好缓存

    6. 使用链式写法

    采用链式写法时，jQuery自动缓存每一步的结果，因此比非链式写法要快。

    7. 事件的委托处理（Event Delegation）

    ```
    // better
    $("table").on("click", "td", function(){
        $(this).toggleClass("click");
    });

    // better than better
    $(document).on("click", "td", function(){
        $(this).toggleClass("click");
    });

    // cancel event binding
    $(document).off("click", "td");
    ```

    8. 少改动 DOM 结构

    - 如果要插入多个元素，就先把它们合并，然后再一次性插入。
    - 如果你要对一个DOM元素进行大量处理，应该先用.detach()方法，把这个元素从DOM中取出来，处理完毕以后，再重新插回文档。

    9. 正确处理循环

    10. 尽量少生成jQuery对象

    每当你使用一次选择器（比如 `$('#id')` ），就会生成一个jQuery对象。jQuery对象是一个很庞大的对象，带有很多属性和方法，会占用不少资源。所以，尽量少生成jQuery对象。

    ```javascript
    var $text = $("#text");

    var $ts = $text.text();
    var $ts = $.text($text); // faster
    ```

    11. 选择作用域链最短的方法

    第二段代码读取变量a的时候，不用前往上一层作用域，所以要比第一段代码快五六倍。

    同理，在调用对象方法的时候，closure模式要比prototype模式更快。

    prototype模式：

    ```
    var X = function(name){ this.name = name; }
    X.prototype.get_name = function() { return this.name; };
    ```

    closure模式：

    ```
    var Y = function(name) {
        var y = { name: name };
        return { 'get_name': function() { return y.name; } };
    };
    ```

    12. 使用Pub/Sub模式管理事件

    而要改用事件触发的形式

    ```
    $.trigger("DO_SOMETHING_DONE");

    $(document).on("DO_SOMETHING_DONE", function(){
        doSomethingElse(); }
    );
    ```

    还可以考虑使用deferred对象。

[jQuery的deferred对象详解 - 阮一峰的网络日志](http://www.ruanyifeng.com/blog/2011/08/a_detailed_explanation_of_jquery_deferred_object.html)

---

[jQuery Fundamentals :: JavaScript Basics](http://jqfundamentals.com/chapter/javascript-basics)
