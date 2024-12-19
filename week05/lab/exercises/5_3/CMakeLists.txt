cmake_minimum_required(VERSION 3.16)

project(StuScore)

aux_source_directory(./src DIR_SRCS)

add_executable(StuScore ${DIR_SRCS})