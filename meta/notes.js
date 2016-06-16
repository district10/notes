var imgs = document.getElementsByTagName('img');
for( var i = 0; i < imgs.length; ++i ) {
    imgs[i].setAttribute('data-src', imgs[i].src);
    imgs[i].src = 'data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==';
    imgs[i].setAttribute('onload', 'lzld(this)');
}

/*
var as = document.getElementsByTagName('a');
for( var i = 0; i < as.length; ++i ) {
    if( as[i].href.startsWith('#') ) {
    } else {
        as[i].target = '_blank';
    }
}

function appendSharpToHdrs( hdrs ) {
    for ( var i = 0; i < hdrs.length; ++i ) {
        var sharp = document.createElement( 'a' );
        sharp.href = '#' + hdrs[i].id;
        sharp.className = 'hdrRef';
        sharp.innerText = '#';
        hdrs[i].appendChild(sharp);
    }
}
h1s = document.getElementsByTagName( 'h1' ); appendSharpToHdrs(h1s);
h2s = document.getElementsByTagName( 'h2' ); appendSharpToHdrs(h2s);
h3s = document.getElementsByTagName( 'h3' ); appendSharpToHdrs(h3s);
h4s = document.getElementsByTagName( 'h4' ); appendSharpToHdrs(h4s);
*/
