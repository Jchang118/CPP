cpp_srcs := $(wildcard src/*.cpp)
cpp_objs := $(patsubst src/%.cpp, objs/%.o, $(cpp_srcs))
so_objs := $(filter-out objs/main.o, $(cpp_objs))

include_path := ./include

I_options := $(include_path:%=-I%)

compile_flags := -g -O3 -w -fPIC $(I_options)

objs/%.o : src/%.cpp
	mkdir -p $(dir $@)
	g++ -c $^ -o $@ $(compile_flags)

compile : $(cpp_objs)

# Generating dynamic library
lib/libfunction.so : $(so_objs)
	mkdir -p $(dir $@)
	g++ -shared $^ -o $@

dynamic : lib/libfunction.so

clean:
	rm -rf ./objs ./lib

.PHONY : compile dynamic clean

# linking dynamic library
library_path := ./lib

linking_libs := function

l_options := $(linking_libs:%=-l%)
L_options := $(library_path:%=-L%)
r_options := $(library_path:%=-Wl,-rpath=%)

objs/testdynamic : objs/main.o compile dynamic
	mkdir -p $(dir $@)
	g++ $< -o $@ $(linking_flags)

run : objs/testdynamic
	./$<

clean :
	rm -rf lib objs

.PHONY : compile dynamic run clean
