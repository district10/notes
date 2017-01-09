$( "a[href^='http://']" ).attr( "target", "_blank" );
$( "a[href^='https://']" ).attr( "target", "_blank" );
$( "a[href^='#']" ).attr( "target", "" );
$( "a[href*='tangzhixiong.com']" ).attr( "target", "" );

$('a').on('click', function(event){ event.stopPropagation(); });

$("p:contains('refs and see also')").addClass('refs');

$('img').each(function(index){
    var src = $(this).attr('src');
    $(this).attr({
        src: "data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==",
        'data-src': src,
        onload: "lzld(this)"
    });
    $a = $(this).parent('a');
    if ($a.length) {
        $a.addClass('dumb');
        $(this).addClass('dumb');
    }
});

$('a.hide').each(function(){
    $p = $(this).parent();
    if ( $p.is('li') ) {
        $p.addClass('hide');
    }
});

// install
$('dt > code.fold').each(function(){
    $(this)
        .parent().addClass('drawerClose').addClass('drawer')
        .next('dd').addClass('drawerHide');
});
$('dt > code.foldable').each(function(){
    $(this)
        .parent().addClass('drawerOpen').addClass('drawer');
});
// take effect when click
$('dt.drawer').on('click', function(event){
    if(getSelection().toString()){ return; }
    if($('body').hasClass('locked')){ return; }
    $('.focus').removeClass('focus');
    $(this).addClass('focus').next('dd').addClass('focus');
    $(this)
        .toggleClass('drawerOpen')
        .toggleClass('drawerClose');
    $(this).next('dd').toggleClass('drawerHide');
    event.stopPropagation();
});
$('dd').on('click', function(event){
    if ($(event.target).hasClass("copyme")) { return; }
    if(getSelection().toString()){ return; }
    if($('body').hasClass('locked')){ return; }
    var $dt = $(this).prev('dt');
    if ($dt.hasClass('drawer')) {
        if( !$dt.hasClass('focus') ) {
            $('.focus').removeClass('focus');
            $dt.addClass('focus');
            $(this).addClass('focus');
            return event.stopPropagation();
        }
        $('.focus').removeClass('focus');
        $(this).addClass('focus').prev('dt').addClass('focus');
        $dt
            .toggleClass('drawerOpen')
            .toggleClass('drawerClose');
        if ($(this).toggleClass('drawerHide').hasClass('drawerHide')) {
            if ( $(this).offset().top < pageYOffset ) {
                $('body,html').animate({scrollTop:$dt.offset().top},300);
            }
        }
        event.stopPropagation();
    }
});
$('li.drawer').on('click', function(event){
    if(getSelection().toString()){ return; }
    if($('body').hasClass('locked')){ return; }
    $('.focus').removeClass('focus');
    $(this).addClass('focus').children('ul,ol').addClass('focus');
    $(this)
        .toggleClass('drawerOpen')
        .toggleClass('drawerClose');
    $(this).children('ul,ol').toggleClass('drawerHide');
    event.stopPropagation();
});
$('ul,ol').on('click', function(event){
    if(getSelection().toString()){ return; }
    var $li = $(this).prev('li');
    if ($li.hasClass('drawer')) {
        if (!$li.hasClass('focus')) {
            $('.focus').removeClass('focus');
            $li.addClass('focus');
            $(this).addClass('focus');
            return stopPropagation();
        }
        if($('body').hasClass('locked')){ return; }
        $('.focus').removeClass('focus');
        $(this).addClass('focus');
        $li
            .addClass('focus')
            .toggleClass('drawerOpen')
            .toggleClass('drawerClose');
        if ($(this).toggleClass('drawerHide').hasClass('drawerHide')) {
            if ( $(this).offset().top < pageYOffset ) {
                $('body,html').animate({scrollTop:$dt.offset().top},300);
            }
        }
        event.stopPropagation();
    }
});
$('p.simpledrawer').on('click', function(event){
    if(getSelection().toString()){ return; }
    if($('body').hasClass('locked')){ return; }
    $list = $(this).next();
    if ($list.is('ul') || $list.is('ol') ) {
        $('.focus').removeClass('focus');
        $list.toggleClass('simpledrawerHide').addClass('focus');
        $(this).toggleClass('simpledrawerOpen').toggleClass('simpledrawerClose').addClass('focus');
        event.stopPropagation();
    }
});
$('ul,ol').on('click', function(event){
    if(getSelection().toString()){ return; }
    $p = $(this).prev();
    if ($p.is('p.simpledrawer')) {
        if( !$p.hasClass('focus') ) {
            $('.focus').removeClass('focus');
            $p.addClass('focus');
            $(this).addClass('focus');
            return event.stopPropagation();
        }
        if($('body').hasClass('locked')){ return; }
        $('.focus').removeClass('focus');
        $(this).addClass('simpledrawerHide');
        $p.addClass('simpledrawerClose').removeClass('simpledrawerOpen').addClass('focus');
        if ( $p.offset().top < pageYOffset ) {
            $('body,html').animate({scrollTop:$p.offset().top},300);
        }
        event.stopPropagation();
    }
});
$('p.drawer-ng-this').on('click', function(event){
    if(getSelection().toString()){ return; }
    if($('body').hasClass('locked')){ return; }
    if( !$(this).hasClass('focus') ) {
        $('.focus').removeClass('focus');
        $(this).addClass('focus');
        $(this).siblings('.drawer-ng-siblings').addClass('focus');
    }
    $(this).toggleClass('drawer-ng-open').toggleClass('drawer-ng-close');
    if($(this).hasClass('drawer-ng-open')) {
        $(this).siblings('.drawer-ng-siblings').removeClass('drawer-ng-hide');
    } else {
        $(this).siblings('.drawer-ng-siblings').addClass('drawer-ng-hide');
    }
});
$('.drawer-ng-siblings').on('click', function(event){
    if(getSelection().toString()){ return; }
    if($('body').hasClass('locked')){ return; }
    if( !$(this).hasClass('focus') ) {
        $('.focus').removeClass('focus');
        $(this).addClass('focus');
        $(this).siblings().addClass('focus');
        event.stopPropagation();
    }
    $dnt = $(this).siblings('p.drawer-ng-this');
    $dnt.toggleClass('drawer-ng-open').toggleClass('drawer-ng-close');
    if($dnt.hasClass('drawer-ng-open')) {
        $dnt.siblings('.drawer-ng-siblings').removeClass('drawer-ng-hide');
    } else {
        $dnt.siblings('.drawer-ng-siblings').addClass('drawer-ng-hide');
    }
});


$('body').on('click', function(event){
    if(getSelection().toString()){ return; }
    if($('body').hasClass('locked')){ return; }
    $('.focus').removeClass('focus');
});

function expandAll() {
    $('dt.drawerClose').removeClass('drawerClose').addClass('drawerOpen').next('dd').removeClass('drawerHide');
    $('li.drawerClose').removeClass('drawerClose').addClass('drawerOpen').children('ul,ol').removeClass('drawerHide');
    $('p.simpledrawerClose').removeClass('simpledrawerClose').addClass('simpledrawerOpen').next('ul,ol').removeClass('simpledrawerHide');
}
function foldAll() {
    $('dt.drawerOpen').removeClass('drawerOpen').addClass('drawerClose').next('dd').addClass('drawerHide');
    $('li.drawerOpen').removeClass('drawerOpen').addClass('drawerClose').children('ul,ol').addClass('drawerHide');
    $('p.simpledrawerOpen').removeClass('simpledrawerOpen').addClass('simpledrawerClose').next('ul,ol').addClass('simpledrawerHide');
}
function goUpDir() {
    $('#navigator a')[0].click();
}
function show(){ $('.hide').removeClass('hide').addClass('show'); }
function hide(){ $('.show').removeClass('show').addClass('hide'); }
function debug() {
    $('.show').css({'border': '1px solid blue'});
    $('.hide').css({'border': '1px solid red', 'display': 'block'});
}

$('body').addClass('foldable').removeClass('locked');
var $nav = $('#navigator a:eq(0)');
var navTitle = $nav.attr('title');
var navHref  = $nav.attr('href');
function toggleLock() {
    $('body').toggleClass('foldable').toggleClass('locked');
    if( $('body').hasClass('locked') ) {
        $nav.attr('title', 'Page Locked! Press "<right><right><right>" to unlock.');
        $nav.attr('href', '#');
    } else {
        $nav.attr('title', navTitle);
        $nav.attr('href',  navHref);
    }
}
function help() {
    alert(  '方向键有如下功能：\n\n'
         +  '\t1. 展开所有折叠盒：<right><right><down>\n'
         +  '\t2. 收起所有折叠盒：<right><right><up>\n'
         +  '\t3. 锁定所有折叠盒：<right><right><right>\n'
         +  '\n\n'
         +  '其他功能：\n\n'
         +  '\t4. 折叠/展开当前折叠盒（有红色标记）：<enter> \n'
         +  '\t5. 页面跳转，返回上一级：<left><left><left>' );
}

$('body').keydown(function(e){
    var code = e.which;
    // alert(code);
    if(code==72) {              // key: h,              show help
        help();
    } else if(code==8) {        // key: backspace,      toggle lock
        toggleLock();
        return false;
    } else if(code==13) {       // key: enter/return,   toggle fold/expand of drawer.focus
        $f = $('dt.drawer.focus, li.drawer.focus, p.simpledrawer.focus');
        if ($f.length) {
            $f[0].click();
        }
    }
});
$('#gotoindex').on('click', function(event){
    if($('body').hasClass('locked')) {
        alert($(this).attr('title'));
        return stopPropagation();
    }
});
$('#help').on('click', function(event){
    if(getSelection().toString()){ return; }
    help();
});

var egg = new Egg();
egg
    // left,left
    .addCode(   "left,left,left",       function() {    goUpDir();      }).addCode(     "u,p",          function() {    goUpDir();      })
    .addCode(   "left,left,down",       function() {    debug();        }).addCode(     "d,e,b,u,g",    function() {    debug();        })
    // right,right
    .addCode(   "right,right,down",     function() {    expandAll();    }).addCode(     "e,x,p,a,n,d",  function() {    expandAll();    })
    .addCode(   "right,right,up",       function() {    foldAll();      }).addCode(     "f,o,l,d",      function() {    foldAll();      })
    .addCode(   "right,right,right",    function() {    toggleLock();   }).addCode(     "l,o,c,k",      function() {    toggleLock();   })
    // left,right
    .addCode(   "left,right,down",      function() {    show();         }).addCode(     "s,h,o,w",      function() {    show();         })
    .addCode(   "left,right,up",        function() {    hide();         }).addCode(     "h,i,d,e",      function() {    hide();         })
    // right,left, reserved for what?
    .listen();

$(".tabNav > ul").each(function(){
    $(this).idTabs($(this).parent().attr('target'));
});

new Clipboard('.copyme');
// $('.copyme').on('click', function(event){ event.stopPropagation(); });

// $('*').on('click', function(event){ console.log(event.target(); }); '<button class="btn" data-clipboard-snippet=""><img class="clippy" src="https://clipboardjs.com/assets/images/clippy.svg" alt="Copy to clipboard" width="13"></button>'

$('.key').on('click', function(event){
    show();
});
