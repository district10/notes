.PHONY: all clean include

SRC:=$(wildcard index.md 2014/*.md 2015/*.md 2016/*.md caffe-notes/*.md lang/*.md misc/*.md)
DST:=$(addprefix publish/, $(SRC:%.md=%.html))
CSS:=publish/github-markdown.css \
     publish/highlight.css \
     publish/lazyload.min.js \
     publish/jquery-3.0.0.min.js \
	 publish/jquery.idTabs.min.js \
     publish/egg.min.js \
     publish/notes.js \
     publish/notes.css \
     publish/fork-me-on-github.png \

FROM := markdown+abbreviations
ifeq (,$(DUMB))
	FROM := $(FROM)+east_asian_line_breaks+emoji
endif

all: $(DST) $(CSS)
serve:
	cd publish; python -m SimpleHTTPServer
clean:
	rm -rf publish/*
include:
	make -C include
gh:
	git add -A; git commit -m "`uname` -- `date`"; git push;

publish/index.html: index.md
	@mkdir -p $(@D)
	(perl meta/cat.pl $< | perl meta/drawer.pl || cat $<) | \
	pandoc \
		-V ISINDEX=true \
		-S -s --ascii --mathjax \
		-f $(FROM) \
		--template meta/note.template \
		-o $@
publish/%/index.html: %/index.md
	@mkdir -p $(@D)
	(perl meta/cat.pl $< | perl meta/drawer.pl || cat $<) | \
	pandoc \
		-V ISINDEX=true -V NOTBASE=true \
		-S -s --ascii --mathjax \
		-f $(FROM) \
		--template meta/note.template \
		-o $@
publish/%.html: %.md
	@mkdir -p $(@D)
	(perl meta/cat.pl $< | perl meta/drawer.pl || cat $<) | \
	pandoc \
		-V NOTBASE=true \
		-S -s --ascii --mathjax \
		-f $(FROM) \
		--template meta/note.template \
		-o $@

publish/%: meta/%
	@mkdir -p $(@D)
	cp $< $@

note: n
n:
	$(EDITOR) index.md 2016/ caffe-notes/
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
	touch publish/sitemap.html
	find publish/ | \
		sed -e "s/^publish/-   <http:\/\/tangzx.qiniudn.com\/notes/" | \
		sed -e "s/$$/>/" | tee sitemap.md | \
		pandoc --ascii -o publish/sitemap.html
	cat sitemap.md
