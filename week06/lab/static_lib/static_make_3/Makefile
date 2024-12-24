lib_srcs = $(filter-out src/main.c, $(wildcard src/*.c))

lib_objs = $(patsubst %.c, %.o, $(lib_srcs))

include_path := ./include

I_options := $(include_path:%=-I%)

lib