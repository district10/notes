.PHONY: all clean install aha

DIFF = git diff --color-words --no-index --diff-algorithm=patience $^ | \
	perl -e 'while(<>){next if 1..5;print;}' | \
	./aha.bin > $@
DIFFS:= diff_c.diff \
	diff_bvlc_flickr.diff

all: aha.bin $(DIFFS)
clean:
	rm -f aha.bin *.diff

aha: aha.bin
aha.bin: aha.c
	gcc -std=c99 $(CFLAGS) $(LDFLAGS) $(CPPFLAGS) $< -o $@

diff_c.diff: diff_a.txt diff_b.txt
	$(DIFF)
diff_bvlc_flickr.diff: train_val_bvlc.prototxt train_val_flickr.prototxt
	$(DIFF)
