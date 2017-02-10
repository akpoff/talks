document=dc713_technician_license
suffx=md
template=/home/akp/.pandoc/templates/default.beamer

.SUFFIXES: .html .md .org .pdf .txt

.md.html:
#	pandoc --self-contained -t s5 --filter columnfilter.py $< -so $@
	pandoc -t html --filter columnfilter.py $< -so $@
	rm -f $@~

.md.pdf:
	pandoc -V theme:Warsaw -t beamer --template=$(template) --filter columnfilter.py $< -so $@
	rm -f $*F.tex

.md.txt:
	pandoc -t plain --filter columnfilter.py $< -so $@
	rm -f $@~

.org.html:
	pandoc -t s5 --filter columnfilter.py $< -so $@
	rm -f $(document).html~

.org.pdf:
	pandoc -t beamer --template=$(template) --filter columnfilter.py $< -so $@
	rm -f $(document).tex

.org.txt:
	pandoc -t plain --filter columnfilter.py $< -so $@
	rm -f $@~

all: html pdf

clean:
	rm -f $(document).html $(document).pdf $(document).txt
	rm -f *.tex
	rm -f *~

html: $(document).html

pdf: $(document).pdf

text: $(document).txt

evince: pdf
	evince $(document).pdf
