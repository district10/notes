$('a[href*=":"]').attr( "target", "_blank" );
$('a').on('click', function(event){ event.stopPropagation(); });

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

$('dt > code.fold').each(function(){
    $(this)
        .parent().addClass('drawerClose').addClass('drawer')
        .next('dd').addClass('drawerHide');
});
$('dt > code.foldable').each(function(){
    $(this)
        .parent().addClass('drawerOpen').addClass('drawer')
});
$('dt.drawer').on('click', function(event){
    if(getSelection().toString()){ return; }
    $('dt.focus,dd.focus').removeClass('focus');
    $(this).addClass('focus').next('dd').addClass('focus');
    $(this)
        .toggleClass('drawerOpen')
        .toggleClass('drawerClose');
    $(this).next('dd').toggleClass('drawerHide');
    event.stopPropagation();
});
$('dd').on('click', function(event){
    if(getSelection().toString()){ return; }
    var $dt = $(this).prev('dt');
    if ($dt.hasClass('drawer')) {
        $('dt.focus,dd.focus').removeClass('focus');
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

function expandAll() {
    $('dt.drawerClose').removeClass('drawerClose').addClass('drawerOpen').next('dd').removeClass('drawerHide');
}
function foldAll() {
    $('dt.drawerOpen').removeClass('drawerOpen').addClass('drawerClose').next('dd').addClass('drawerHide');
}
function goUpDir() {
    $('#navigator a')[0].click();
}

var egg = new Egg();
egg
    .addCode("left,left,down", function() {
        expandAll();
    })
    .addCode("left,left,up", function() {
        foldAll();
    })
    .addCode("e,x,p,a,n,d", function() {
        expandAll();
    })
    .addCode("f,o,l,d", function() {
        foldAll();
    })
    .addCode("s,h,o,w", function() {
        $('.hide').removeClass('hide').addClass('show');
    })
    .addCode("h,i,d,e", function() {
        $('.show').removeClass('show').addClass('show');
    })
    .addCode("u,p", function() {
        goUpDir();
    })
    .addCode("left,left,left", function() {
        goUpDir();
    })
    .listen();
