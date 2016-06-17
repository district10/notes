$('img').each(function(index){
    var src = $(this).attr('src');
    $(this).attr({
        src: "data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==",
        'data-src': src,
        onload: "lzld(this)"
    });
    $a = $(this).parent('a');
    if ($a.length) {
        $a.addClass('tzx-dumb');
        $(this).addClass('tzx-dumb');
    }
});

// $('dt').each(function(){ $(this).addClass('drawer').addClass('drawerOpen'); });
$('dt > code.fold').each(function(){
    $(this)
        .parent().addClass('drawerClose').addClass('drawer')
        .next('dd').addClass('drawerHide');
});
$('dt.drawer').on('click', function(event){
    $(this)
        .toggleClass('drawerOpen')
        .toggleClass('drawerClose');
    $(this).next('dd').toggleClass('drawerHide');
    event.stopPropagation();
});
$('dd').on('click', function(event){
    var $dt = $(this).prev('dt');
    if ($dt.hasClass('drawer')) {
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
    .listen();
