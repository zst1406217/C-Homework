# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhushaoting/Documents/C++/chap2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhushaoting/Documents/C++/chap2/build

# Include any dependencies generated for this target.
include CMakeFiles/chap2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/chap2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/chap2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chap2.dir/flags.make

CMakeFiles/chap2.dir/chap2.cpp.o: CMakeFiles/chap2.dir/flags.make
CMakeFiles/chap2.dir/chap2.cpp.o: ../chap2.cpp
CMakeFiles/chap2.dir/chap2.cpp.o: CMakeFiles/chap2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhushaoting/Documents/C++/chap2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chap2.dir/chap2.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/chap2.dir/chap2.cpp.o -MF CMakeFiles/chap2.dir/chap2.cpp.o.d -o CMakeFiles/chap2.dir/chap2.cpp.o -c /Users/zhushaoting/Documents/C++/chap2/chap2.cpp

CMakeFiles/chap2.dir/chap2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chap2.dir/chap2.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhushaoting/Documents/C++/chap2/chap2.cpp > CMakeFiles/chap2.dir/chap2.cpp.i

CMakeFiles/chap2.dir/chap2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chap2.dir/chap2.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhushaoting/Documents/C++/chap2/chap2.cpp -o CMakeFiles/chap2.dir/chap2.cpp.s

CMakeFiles/chap2.dir/stack.cpp.o: CMakeFiles/chap2.dir/flags.make
CMakeFiles/chap2.dir/stack.cpp.o: ../stack.cpp
CMakeFiles/chap2.dir/stack.cpp.o: CMakeFiles/chap2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhushaoting/Documents/C++/chap2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/chap2.dir/stack.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/chap2.dir/stack.cpp.o -MF CMakeFiles/chap2.dir/stack.cpp.o.d -o CMakeFiles/chap2.dir/stack.cpp.o -c /Users/zhushaoting/Documents/C++/chap2/stack.cpp

CMakeFiles/chap2.dir/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chap2.dir/stack.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhushaoting/Documents/C++/chap2/stack.cpp > CMakeFiles/chap2.dir/stack.cpp.i

CMakeFiles/chap2.dir/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chap2.dir/stack.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhushaoting/Documents/C++/chap2/stack.cpp -o CMakeFiles/chap2.dir/stack.cpp.s

# Object files for target chap2
chap2_OBJECTS = \
"CMakeFiles/chap2.dir/chap2.cpp.o" \
"CMakeFiles/chap2.dir/stack.cpp.o"

# External object files for target chap2
chap2_EXTERNAL_OBJECTS =

chap2: CMakeFiles/chap2.dir/chap2.cpp.o
chap2: CMakeFiles/chap2.dir/stack.cpp.o
chap2: CMakeFiles/chap2.dir/build.make
chap2: CMakeFiles/chap2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhushaoting/Documents/C++/chap2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable chap2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chap2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chap2.dir/build: chap2
.PHONY : CMakeFiles/chap2.dir/build

CMakeFiles/chap2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chap2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chap2.dir/clean

CMakeFiles/chap2.dir/depend:
	cd /Users/zhushaoting/Documents/C++/chap2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhushaoting/Documents/C++/chap2 /Users/zhushaoting/Documents/C++/chap2 /Users/zhushaoting/Documents/C++/chap2/build /Users/zhushaoting/Documents/C++/chap2/build /Users/zhushaoting/Documents/C++/chap2/build/CMakeFiles/chap2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chap2.dir/depend

