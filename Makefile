.PHONY: all clean include

PUBLISH ?= publish

EDITOR ?= gvim
SRC:=$(wildcard index.md */*.md)
DST:=$(addprefix $(PUBLISH)/, $(SRC:%.md=%.html))
CSS:=$(PUBLISH)/github-markdown.css \
	$(PUBLISH)/highlight.css \
	$(PUBLISH)/lazyload.min.js \
	$(PUBLISH)/jquery-3.0.0.min.js \
	$(PUBLISH)/jquery.idTabs.min.js \
	$(PUBLISH)/egg.min.js \
	$(PUBLISH)/clipboard.min.js \
	$(PUBLISH)/notes.js \
	$(PUBLISH)/notes.css \
	$(PUBLISH)/fork-me-on-github.png \

FROM := markdown+abbreviations
ifeq (,$(DUMB))
	FROM := $(FROM)+east_asian_line_breaks+emoji+raw_tex
endif

all: $(DST) $(CSS)
clone:
	@echo clone some other repo
	# 注意是 https 的链接，不是 git 的。
	# git clone --depth 1 https://github.com/4ker/LeetCode.git leetcode-maskray
	# git clone --depth 1 https://github.com/4ker/cracking-the-coding-interview.git
	# git clone --depth 1 https://github.com/district10/leetcode.git
serve:
	cd $(PUBLISH); python -m SimpleHTTPServer
w: watch
watch: jwatch.jar
	java -jar jwatch.jar -i "$(PUBLISH)"

jwatch.jar:
	curl http://whudoc.qiniudn.com/2016/jwatch.jar > jwatch.jar
clean:
	rm -rf $(PUBLISH)/*
include:
	make -C include
gh:
	git add -A; git commit -m "`uname`"; git push;
wiki:	
	java -jar wikify.jar -ps '#main-body' -ns '#main-body > ul > li > dl' -i $(PUBLISH)/ -o $(PUBLISH)/ -ccs 50 -ncs 50 -pcs 20

$(PUBLISH)/index.html: index.md
	@mkdir -p $(@D)
	(perl meta/cat.pl $< | perl meta/drawer.pl || cat $<) | \
	pandoc \
		-V ISINDEX=true \
		-S -s --ascii --mathjax \
		-f $(FROM) \
		--template meta/note.template \
		-o $@
$(PUBLISH)/%/index.html: %/index.md
	@mkdir -p $(@D)
	(perl meta/cat.pl $< | perl meta/drawer.pl || cat $<) | \
	pandoc \
		-V ISINDEX=true \
		-V rootdir=../ \
		-S -s --ascii --mathjax \
		-f $(FROM) \
		--template meta/note.template \
		-o $@
$(PUBLISH)/%.html: %.md
	@mkdir -p $(@D)
	(perl meta/cat.pl $< | perl meta/drawer.pl || cat $<) | \
	pandoc \
		-V rootdir=../ \
		-S -s --ascii --mathjax \
		-f $(FROM) \
		--template meta/note.template \
		-o $@

$(PUBLISH)/%: meta/%
	@mkdir -p $(@D)
	cp $< $@

$(PUBLISH)/%: %
	@mkdir -p $(@D)
	cp $< $@

note: n
n:
	$(EDITOR) -p \
		2017/note4.md \
		index.md \
		lang/ruby.md \

m:
	$(EDITOR) Makefile
t:
	$(EDITOR) meta/note.template
j:
	$(EDITOR) meta/notes.js
c:
	$(EDITOR) meta/notes.css
sm: sitemap
sitemap:
	touch $(PUBLISH)/sitemap.html
	find $(PUBLISH)/ | \
		sed -e "s/^$(PUBLISH)/-   <http:\/\/tangzx.qiniudn.com\/notes/" | \
		sed -e "s/$$/>/" | tee sitemap.md | \
		pandoc --ascii -o $(PUBLISH)/sitemap.html
	cat sitemap.md
