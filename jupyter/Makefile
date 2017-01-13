ipynb := $(wildcard note*.ipynb)
tex   := $(ipynb:%.ipynb=%.tex)
pdf   := $(ipynb:%.ipynb=%.pdf)
html  := $(ipynb:%.ipynb=%.html)

all: $(tex) $(pdf) $(html)

%.pdf: %.tex
	xelatex -interaction=nonstopmode $(<:%.tex=%)
	bibtex $(<:%.tex=%)
	xelatex -interaction=nonstopmode $(<:%.tex=%)
%.tex: %.ipynb
	jupyter nbconvert --to latex_with_lenvs $<
%.html: %.ipynb
	bibtex $(<:%.tex=%)
	jupyter nbconvert --to html_with_lenvs $<

clean:
	rm -f $(tex) $(pdf) $(html) *.log *.out *.aux *.toc *.bbl *.blg
	rm -rf note*_files
