SRC:=$(wildcard index.md 2014/*.md 2015/*.md 2016/*.md caffe-notes/*.md)
DST:=$(addprefix publish/, $(SRC:%.md=%.html))
CSS:=publish/github-markdown.css \
     publish/highlight.css \
     publish/lazyload.min.js \
     publish/notes.js \
     publish/notes.css \

all: $(DST) $(CSS)
clean:
	rm -rf publish/*
gh:
	git add -A; git commit -m "`date +%s`"; git push;

publish/index.html: index.md
	@mkdir -p $(@D)
	pandoc -S -s --ascii $< -o $@

publish/%.html: %.md
	@mkdir -p $(@D)
	pandoc \
		-S -s --ascii --mathjax \
		-f markdown+east_asian_line_breaks+emoji \
		--template meta/note.template \
		$< -o $@

publish/%: meta/%
	@mkdir -p $(@D)
	cp $< $@

note: n
n:
	$(EDITOR) index.md ./
	make -C caffe-notes n
m:
	$(EDITOR) Makefile
