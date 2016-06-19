#!/usr/bin/perl

use 5.010;
use strict;

while (<>) {
    s/-<\r?\n?$/`@`{.fold}\n/;          # -<
    s/\+<\r?\n?$/`@`{.foldable}\n/;     # +<

    s/-<<\r?\n?$/`@`{.fold-ng}\n/;
    s/\+<<\r?\n?$/`@`{.foldable-ng}\n/;

    if(/^(\s*)\@include <-(.*)=(.*)=/) {
        open INPUT, '<', $3;
        while(<INPUT>) { print $1 . $2 . $_; }
        next;
    }
    if(/^(\s*):   \@include <-(.*)=(.*)=/) {
        open INPUT, '<', $3;
        my $first = 1;
        while(<INPUT>) {
            if($first == 1) {
                print $1 . ":   " . $2 . $_;
                $first = 0;
            } else {
                print $1 . "    " . $2 . $_;
            }
        }
        next;
    }
    print;
}
