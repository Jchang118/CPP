# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/cpp/CPP/week07/lab/sharedlib/cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/cpp/CPP/week07/lab/sharedlib/cmake/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/MyDynamicFun.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/MyDynamicFun.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/MyDynamicFun.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/MyDynamicFun.dir/flags.make

lib/CMakeFiles/MyDynamicFun.dir/mymath.cpp.o: lib/CMakeFiles/MyDynamicFun.dir/flags.make
lib/CMakeFiles/MyDynamicFun.dir/mymath.cpp.o: /root/cpp/CPP/week07/lab/sharedlib/cmake/lib/mymath.cpp
lib/CMakeFiles/MyDynamicFun.dir/mymath.cpp.o: lib/CMakeFiles/MyDynamicFun.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/root/cpp/CPP/week07/lab/sharedlib/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/MyDynamicFun.dir/mymath.cpp.o"
	cd /root/cpp/CPP/week07/lab/sharedlib/cmake/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/MyDynamicFun.dir/mymath.cpp.o -MF CMakeFiles/MyDynamicFun.dir/mymath.cpp.o.d -o CMakeFiles/MyDynamicFun.dir/mymath.cpp.o -c /root/cpp/CPP/week07/lab/sharedlib/cmake/lib/mymath.cpp

lib/CMakeFiles/MyDynamicFun.dir/mymath.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyDynamicFun.dir/mymath.cpp.i"
	cd /root/cpp/CPP/week07/lab/sharedlib/cmake/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/cpp/CPP/week07/lab/sharedlib/cmake/lib/mymath.cpp > CMakeFiles/MyDynamicFun.dir/mymath.cpp.i

lib/CMakeFiles/MyDynamicFun.dir/mymath.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyDynamicFun.dir/mymath.cpp.s"
	cd /root/cpp/CPP/week07/lab/sharedlib/cmake/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/cpp/CPP/week07/lab/sharedlib/cmake/lib/mymath.cpp -o CMakeFiles/MyDynamicFun.dir/mymath.cpp.s

# Object files for target MyDynamicFun
MyDynamicFun_OBJECTS = \
"CMakeFiles/MyDynamicFun.dir/mymath.cpp.o"

# External object files for target MyDynamicFun
MyDynamicFun_EXTERNAL_OBJECTS =

lib/libMyDynamicFun.so: lib/CMakeFiles/MyDynamicFun.dir/mymath.cpp.o
lib/libMyDynamicFun.so: lib/CMakeFiles/MyDynamicFun.dir/build.make
lib/libMyDynamicFun.so: lib/CMakeFiles/MyDynamicFun.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/root/cpp/CPP/week07/lab/sharedlib/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libMyDynamicFun.so"
	cd /root/cpp/CPP/week07/lab/sharedlib/cmake/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyDynamicFun.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/MyDynamicFun.dir/build: lib/libMyDynamicFun.so
.PHONY : lib/CMakeFiles/MyDynamicFun.dir/build

lib/CMakeFiles/MyDynamicFun.dir/clean:
	cd /root/cpp/CPP/week07/lab/sharedlib/cmake/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/MyDynamicFun.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/MyDynamicFun.dir/clean

lib/CMakeFiles/MyDynamicFun.dir/depend:
	cd /root/cpp/CPP/week07/lab/sharedlib/cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/cpp/CPP/week07/lab/sharedlib/cmake /root/cpp/CPP/week07/lab/sharedlib/cmake/lib /root/cpp/CPP/week07/lab/sharedlib/cmake/build /root/cpp/CPP/week07/lab/sharedlib/cmake/build/lib /root/cpp/CPP/week07/lab/sharedlib/cmake/build/lib/CMakeFiles/MyDynamicFun.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : lib/CMakeFiles/MyDynamicFun.dir/depend
