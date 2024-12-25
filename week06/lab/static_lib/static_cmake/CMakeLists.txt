# CMake minimum version
cmake_minimum_required(VERSION 3.16)

# project information
project(CMakeDemo4)

# Search the source files in the current directory
# and store then into the variables DIR_SRCS
aux_source_directory(. DIR_SRCS)

# add the directory of include
include_directories(lib)

# add the subdirectory of lib
add_subdirectory(lib)

# Specify the build target
add_executable(CMakeDemo4 ${DIR_SRCS})

# Add the static library
target_link_libraries(CMakeDemo4 MyFunction)