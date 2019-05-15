

all: smtpd_tutorial.pdf smtpd_cheatsheet.pdf

smtpd_tutorial.pdf: smtpd_tutorial.md
	pandoc -V theme:Madrid --slide-level=1  -t beamer+definition_lists smtpd_tutorial.md -o smtpd_tutorial.pdf

smtpd_cheatsheet.pdf: smtpd_cheatsheet.md
	pandoc smtpd_cheatsheet.md -o smtpd_cheatsheet.pdf

commit:
	git add smtpd_tutorial.md
	git add smtpd_cheatsheet.md
	git commit -m "Current version"

clean:
	rm -f smtpd_tutorial.pdf
	rm -f smtpd_cheatsheet.pdf

view: smtpd_tutorial.pdf
	mupdf smtpd_tutorial.pdf
