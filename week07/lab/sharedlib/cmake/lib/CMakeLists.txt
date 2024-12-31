# Search the source files in the current directory
# and store them into the variable LIB_SRCS
aux_source_directory(. LIB_SRCS)

# Creat a dynamic library
add_library(MyDynamicFun SHARED ${LIB_SRCS})