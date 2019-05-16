# Prevent running without a build dir distinct from the root dir
.ifnmake obj && "$(.OBJDIR)" != "$(.CURDIR)/obj"
.BEGIN:
	@echo Create $(.CURDIR)/obj with \`make obj\`
	false
.endif


SRCS !:= find $(.CURDIR) -type f -name \*.md | sed -e 's|$(.CURDIR)/||g'
OBJS   := $(SRCS:R:S/$/.pdf/g)


.SUFFIXES: .md .pdf

all: $(OBJS)

commit:
	git add smtpd_tutorial.md
	git add smtpd_cheatsheet.md
	git commit -m "Current version"

clean:
	rm -f obj/*

view: smtpd_tutorial.pdf
	mupdf obj/smtpd_tutorial.pdf


# Inference-rule targets
.md.pdf:
	pandoc -V theme:Madrid --slide-level=1  -t beamer+definition_lists $< -o $@
