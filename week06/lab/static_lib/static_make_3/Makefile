lib_srcs = $(filter-out src/main.c, $(wildcard src/*.c))

lib_objs = $(patsubst %.c, %.o, $(lib_srcs))

include_path := ./include

I_options := $(include_path:%=-I%)

lib/%.o : src/%.c
	mkdir -p $(dir $@)
	gcc -c $^ -o $@ $(I_options)

lib/libmath.a : $(lib_objs)
	mkdir -p $(dir $@)
	ar -r $@ $^

static_lib : lib/libmath.a

clean:
	rm -rf ./lib

.PHONY : clean static_lib

#===== Linking static library =====
library_path := ./lib
linking_libs := math

l_options := $(linking_libs:%=-l%)
L_options := $(library_path:%=-L%)

linking_flags := $(l_options) $(L_options)

objs/main.o : src/main.c
	mkdir -p $(dir $@)
	gcc -c $^ -o $@ $(I_options)

objs/test : objs/main.o
	mkdir -p $(dir $@)
	gcc $^ -o $@ $(linking_flags)

run : objs/test
	./$<

clean :
	rm -rf ./lib ./objs

.PHONY : clean static_lib run
 