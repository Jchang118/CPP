# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build

# Include any dependencies generated for this target.
include CMakeFiles/CMakeDemo2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CMakeDemo2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CMakeDemo2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CMakeDemo2.dir/flags.make

CMakeFiles/CMakeDemo2.dir/codegen:
.PHONY : CMakeFiles/CMakeDemo2.dir/codegen

CMakeFiles/CMakeDemo2.dir/factorial.cpp.o: CMakeFiles/CMakeDemo2.dir/flags.make
CMakeFiles/CMakeDemo2.dir/factorial.cpp.o: /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/factorial.cpp
CMakeFiles/CMakeDemo2.dir/factorial.cpp.o: CMakeFiles/CMakeDemo2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CMakeDemo2.dir/factorial.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CMakeDemo2.dir/factorial.cpp.o -MF CMakeFiles/CMakeDemo2.dir/factorial.cpp.o.d -o CMakeFiles/CMakeDemo2.dir/factorial.cpp.o -c /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/factorial.cpp

CMakeFiles/CMakeDemo2.dir/factorial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CMakeDemo2.dir/factorial.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/factorial.cpp > CMakeFiles/CMakeDemo2.dir/factorial.cpp.i

CMakeFiles/CMakeDemo2.dir/factorial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CMakeDemo2.dir/factorial.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/factorial.cpp -o CMakeFiles/CMakeDemo2.dir/factorial.cpp.s

CMakeFiles/CMakeDemo2.dir/main.cpp.o: CMakeFiles/CMakeDemo2.dir/flags.make
CMakeFiles/CMakeDemo2.dir/main.cpp.o: /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/main.cpp
CMakeFiles/CMakeDemo2.dir/main.cpp.o: CMakeFiles/CMakeDemo2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CMakeDemo2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CMakeDemo2.dir/main.cpp.o -MF CMakeFiles/CMakeDemo2.dir/main.cpp.o.d -o CMakeFiles/CMakeDemo2.dir/main.cpp.o -c /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/main.cpp

CMakeFiles/CMakeDemo2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CMakeDemo2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/main.cpp > CMakeFiles/CMakeDemo2.dir/main.cpp.i

CMakeFiles/CMakeDemo2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CMakeDemo2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/main.cpp -o CMakeFiles/CMakeDemo2.dir/main.cpp.s

CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o: CMakeFiles/CMakeDemo2.dir/flags.make
CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o: /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/printinfo.cpp
CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o: CMakeFiles/CMakeDemo2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o -MF CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o.d -o CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o -c /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/printinfo.cpp

CMakeFiles/CMakeDemo2.dir/printinfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CMakeDemo2.dir/printinfo.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/printinfo.cpp > CMakeFiles/CMakeDemo2.dir/printinfo.cpp.i

CMakeFiles/CMakeDemo2.dir/printinfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CMakeDemo2.dir/printinfo.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/printinfo.cpp -o CMakeFiles/CMakeDemo2.dir/printinfo.cpp.s

# Object files for target CMakeDemo2
CMakeDemo2_OBJECTS = \
"CMakeFiles/CMakeDemo2.dir/factorial.cpp.o" \
"CMakeFiles/CMakeDemo2.dir/main.cpp.o" \
"CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o"

# External object files for target CMakeDemo2
CMakeDemo2_EXTERNAL_OBJECTS =

CMakeDemo2: CMakeFiles/CMakeDemo2.dir/factorial.cpp.o
CMakeDemo2: CMakeFiles/CMakeDemo2.dir/main.cpp.o
CMakeDemo2: CMakeFiles/CMakeDemo2.dir/printinfo.cpp.o
CMakeDemo2: CMakeFiles/CMakeDemo2.dir/build.make
CMakeDemo2: CMakeFiles/CMakeDemo2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CMakeDemo2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CMakeDemo2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CMakeDemo2.dir/build: CMakeDemo2
.PHONY : CMakeFiles/CMakeDemo2.dir/build

CMakeFiles/CMakeDemo2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CMakeDemo2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CMakeDemo2.dir/clean

CMakeFiles/CMakeDemo2.dir/depend:
	cd /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2 /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2 /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build /Users/liangchengchang/cpp/CPP/week05/lab/CMakeDemo2/build/CMakeFiles/CMakeDemo2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CMakeDemo2.dir/depend

