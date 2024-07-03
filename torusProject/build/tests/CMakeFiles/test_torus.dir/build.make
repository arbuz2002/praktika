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
CMAKE_SOURCE_DIR = /Users/romk1a/Documents/GitHub/praktika/torusProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/romk1a/Documents/GitHub/praktika/torusProject/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_torus.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_torus.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_torus.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_torus.dir/flags.make

tests/CMakeFiles/test_torus.dir/test_torus.cpp.o: tests/CMakeFiles/test_torus.dir/flags.make
tests/CMakeFiles/test_torus.dir/test_torus.cpp.o: /Users/romk1a/Documents/GitHub/praktika/torusProject/tests/test_torus.cpp
tests/CMakeFiles/test_torus.dir/test_torus.cpp.o: tests/CMakeFiles/test_torus.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/romk1a/Documents/GitHub/praktika/torusProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_torus.dir/test_torus.cpp.o"
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_torus.dir/test_torus.cpp.o -MF CMakeFiles/test_torus.dir/test_torus.cpp.o.d -o CMakeFiles/test_torus.dir/test_torus.cpp.o -c /Users/romk1a/Documents/GitHub/praktika/torusProject/tests/test_torus.cpp

tests/CMakeFiles/test_torus.dir/test_torus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_torus.dir/test_torus.cpp.i"
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/romk1a/Documents/GitHub/praktika/torusProject/tests/test_torus.cpp > CMakeFiles/test_torus.dir/test_torus.cpp.i

tests/CMakeFiles/test_torus.dir/test_torus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_torus.dir/test_torus.cpp.s"
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/romk1a/Documents/GitHub/praktika/torusProject/tests/test_torus.cpp -o CMakeFiles/test_torus.dir/test_torus.cpp.s

# Object files for target test_torus
test_torus_OBJECTS = \
"CMakeFiles/test_torus.dir/test_torus.cpp.o"

# External object files for target test_torus
test_torus_EXTERNAL_OBJECTS =

tests/test_torus: tests/CMakeFiles/test_torus.dir/test_torus.cpp.o
tests/test_torus: tests/CMakeFiles/test_torus.dir/build.make
tests/test_torus: lib/libgtest.a
tests/test_torus: lib/libgtest_main.a
tests/test_torus: src/libtorus_library.a
tests/test_torus: lib/libgtest.a
tests/test_torus: tests/CMakeFiles/test_torus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/romk1a/Documents/GitHub/praktika/torusProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_torus"
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_torus.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests && /opt/homebrew/Cellar/cmake/3.29.6/bin/cmake -D TEST_TARGET=test_torus -D TEST_EXECUTABLE=/Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests/test_torus -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=test_torus_TESTS -D CTEST_FILE=/Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests/test_torus[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /opt/homebrew/Cellar/cmake/3.29.6/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
tests/CMakeFiles/test_torus.dir/build: tests/test_torus
.PHONY : tests/CMakeFiles/test_torus.dir/build

tests/CMakeFiles/test_torus.dir/clean:
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_torus.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_torus.dir/clean

tests/CMakeFiles/test_torus.dir/depend:
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/romk1a/Documents/GitHub/praktika/torusProject /Users/romk1a/Documents/GitHub/praktika/torusProject/tests /Users/romk1a/Documents/GitHub/praktika/torusProject/build /Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests /Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests/CMakeFiles/test_torus.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/test_torus.dir/depend

