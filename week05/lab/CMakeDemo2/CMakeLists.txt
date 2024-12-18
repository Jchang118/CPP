cmake_minimum_required(VERSION 3.16)

project(CMakeDemo2)

aux_source_directory(. DIR_SRCS)

add_executable(CMakeDemo2 ${DIR_SRCS})