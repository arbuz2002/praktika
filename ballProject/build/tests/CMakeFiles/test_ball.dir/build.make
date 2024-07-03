# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.6/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/romk1a/Documents/GitHub/practica/ballProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/romk1a/Documents/GitHub/practica/ballProject/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_ball.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_ball.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_ball.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_ball.dir/flags.make

tests/CMakeFiles/test_ball.dir/test_ball.cpp.o: tests/CMakeFiles/test_ball.dir/flags.make
tests/CMakeFiles/test_ball.dir/test_ball.cpp.o: /Users/romk1a/Documents/GitHub/practica/ballProject/tests/test_ball.cpp
tests/CMakeFiles/test_ball.dir/test_ball.cpp.o: tests/CMakeFiles/test_ball.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/romk1a/Documents/GitHub/practica/ballProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_ball.dir/test_ball.cpp.o"
	cd /Users/romk1a/Documents/GitHub/practica/ballProject/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_ball.dir/test_ball.cpp.o -MF CMakeFiles/test_ball.dir/test_ball.cpp.o.d -o CMakeFiles/test_ball.dir/test_ball.cpp.o -c /Users/romk1a/Documents/GitHub/practica/ballProject/tests/test_ball.cpp

tests/CMakeFiles/test_ball.dir/test_ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_ball.dir/test_ball.cpp.i"
	cd /Users/romk1a/Documents/GitHub/practica/ballProject/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/romk1a/Documents/GitHub/practica/ballProject/tests/test_ball.cpp > CMakeFiles/test_ball.dir/test_ball.cpp.i

tests/CMakeFiles/test_ball.dir/test_ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_ball.dir/test_ball.cpp.s"
	cd /Users/romk1a/Documents/GitHub/practica/ballProject/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/romk1a/Documents/GitHub/practica/ballProject/tests/test_ball.cpp -o CMakeFiles/test_ball.dir/test_ball.cpp.s

# Object files for target test_ball
test_ball_OBJECTS = \
"CMakeFiles/test_ball.dir/test_ball.cpp.o"

# External object files for target test_ball
test_ball_EXTERNAL_OBJECTS =

tests/test_ball: tests/CMakeFiles/test_ball.dir/test_ball.cpp.o
tests/test_ball: tests/CMakeFiles/test_ball.dir/build.make
tests/test_ball: lib/libgtest.a
tests/test_ball: lib/libgtest_main.a
tests/test_ball: src/libball_library.a
tests/test_ball: lib/libgtest.a
tests/test_ball: tests/CMakeFiles/test_ball.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/romk1a/Documents/GitHub/practica/ballProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_ball"
	cd /Users/romk1a/Documents/GitHub/practica/ballProject/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_ball.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/romk1a/Documents/GitHub/practica/ballProject/build/tests && /opt/homebrew/Cellar/cmake/3.29.6/bin/cmake -D TEST_TARGET=test_ball -D TEST_EXECUTABLE=/Users/romk1a/Documents/GitHub/practica/ballProject/build/tests/test_ball -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/romk1a/Documents/GitHub/practica/ballProject/build/tests -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=test_ball_TESTS -D CTEST_FILE=/Users/romk1a/Documents/GitHub/practica/ballProject/build/tests/test_ball[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /opt/homebrew/Cellar/cmake/3.29.6/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
tests/CMakeFiles/test_ball.dir/build: tests/test_ball
.PHONY : tests/CMakeFiles/test_ball.dir/build

tests/CMakeFiles/test_ball.dir/clean:
	cd /Users/romk1a/Documents/GitHub/practica/ballProject/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_ball.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_ball.dir/clean

tests/CMakeFiles/test_ball.dir/depend:
	cd /Users/romk1a/Documents/GitHub/practica/ballProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/romk1a/Documents/GitHub/practica/ballProject /Users/romk1a/Documents/GitHub/practica/ballProject/tests /Users/romk1a/Documents/GitHub/practica/ballProject/build /Users/romk1a/Documents/GitHub/practica/ballProject/build/tests /Users/romk1a/Documents/GitHub/practica/ballProject/build/tests/CMakeFiles/test_ball.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/test_ball.dir/depend

