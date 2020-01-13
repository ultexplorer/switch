program_name := ptr1
source_dirs := .

source_dirs := $(addprefix ../,$(source_dirs))
search_wildcards := $(addsuffix /*.c,$(source_dirs))

$(program_name): $(notdir $(patsubst %.c,%.o, $(wildcard $(search_wildcards) ) ) )
	gcc $^ -o $@

VPATH := $(source_dirs)

%.o: %.c
	gcc -c -MD $(compile_flags) $(addprefix -I,$(source_dirs)) $<

cr:
	rm -r release

cg:
	rm -r debug

include $(wildcard *.d)


