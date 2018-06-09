

fighting_spam_at_the_frontline.pdf: fighting_spam_at_the_frontline.md
	pandoc -V theme:Madrid --slide-level=1  -t beamer+definition_lists fighting_spam_at_the_frontline.md -o fighting_spam_at_the_frontline.pdf

all: commit fighting_spam_at_the_frontline.pdf

commit:
	git add fighting_spam_at_the_frontline.md
	git commit -m "Current version"

clean:
	rm -f fighting_spam_at_the_frontline.pdf
