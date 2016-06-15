PUBDIR:=publish

SRC:=$(wildcard *.md 2014/*.md 2015/*.md 2016/*.md)
DST:=$(addprefix $(PUBDIR)/, $(SRC:%.md=%.html))

all: $(DST)
clean:
	rm -rf $(PUBDIR)/*

$(PUBDIR)/%.html: %.md
	@mkdir -p $(@D)
	pandoc \
		-S -s --ascii -c http://tangzx.qiniudn.com/main.css \
		-f markdown+east_asian_line_breaks+emoji \
		$< -o $@

edit: e
e:
	$(EDITOR) 2016/
