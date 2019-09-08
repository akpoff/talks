# Prevent running without a build dir distinct from the root dir
.ifnmake obj && "$(.OBJDIR)" != "$(.CURDIR)/obj"
.BEGIN:
	@echo Create $(.CURDIR)/obj with \`make obj\`
	false
.endif


SRCS !:= find $(.CURDIR) -type f -name \*.md | sed -e 's|$(.CURDIR)/||g'
OBJS   := $(SRCS:R:S/$/.pdf/g)


# Inference-rule targets
.SUFFIXES: .md .pdf
.md.pdf: Makefile
	pandoc -s \
	-f markdown \
	-V colortheme:dove \
	-V innertheme:circles \
	-V fonttheme:serif \
	--slide-level=1 \
	-t beamer $< -o $@


all: $(OBJS)

commit:
	git add $(SRCS)
	git commit -m "Current version"

clean:
	rm -f obj/*.pdf
