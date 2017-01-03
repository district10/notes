.PHONY: all clean include

EDITOR ?= gvim
SRC:=$(wildcard index.md */*.md)
DST:=$(addprefix publish/, $(SRC:%.md=%.html))
CSS:=publish/github-markdown.css \
	publish/highlight.css \
	publish/lazyload.min.js \
	publish/jquery-3.0.0.min.js \
	publish/jquery.idTabs.min.js \
	publish/egg.min.js \
	publish/clipboard.min.js \
	publish/notes.js \
	publish/notes.css \
	publish/fork-me-on-github.png \

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
	cd publish; python -m SimpleHTTPServer
w: watch
watch: jwatch.jar
	java -jar jwatch.jar -i "publish"

jwatch.jar:
	curl http://whudoc.qiniudn.com/2016/jwatch.jar > jwatch.jar
clean:
	rm -rf publish/*
include:
	make -C include
gh:
	git add -A; git commit -m "`uname`"; git push;
wiki:	
	java -jar wikify.jar -ps '#main-body' -ns '#main-body > ul > li > dl' -i publish/ -o publish/ -ccs 50 -ncs 50 -pcs 20

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
		-V ISINDEX=true \
		-V rootdir=../ \
		-S -s --ascii --mathjax \
		-f $(FROM) \
		--template meta/note.template \
		-o $@
publish/%.html: %.md
	@mkdir -p $(@D)
	(perl meta/cat.pl $< | perl meta/drawer.pl || cat $<) | \
	pandoc \
		-V rootdir=../ \
		-S -s --ascii --mathjax \
		-f $(FROM) \
		--template meta/note.template \
		-o $@

publish/%: meta/%
	@mkdir -p $(@D)
	cp $< $@

publish/%: %
	@mkdir -p $(@D)
	cp $< $@

note: n
n:
	$(EDITOR) -p \
		2017/note1.md \
		index.md \
		lang/java.md \
		lang/typescript.md \
		lang/algo.md \
		lang/c-cpp.md \
		2016/job.md \

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
