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
include src/CMakeFiles/torus_library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/torus_library.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/torus_library.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/torus_library.dir/flags.make

src/CMakeFiles/torus_library.dir/torus.cpp.o: src/CMakeFiles/torus_library.dir/flags.make
src/CMakeFiles/torus_library.dir/torus.cpp.o: /Users/romk1a/Documents/GitHub/praktika/torusProject/src/torus.cpp
src/CMakeFiles/torus_library.dir/torus.cpp.o: src/CMakeFiles/torus_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/romk1a/Documents/GitHub/praktika/torusProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/torus_library.dir/torus.cpp.o"
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/torus_library.dir/torus.cpp.o -MF CMakeFiles/torus_library.dir/torus.cpp.o.d -o CMakeFiles/torus_library.dir/torus.cpp.o -c /Users/romk1a/Documents/GitHub/praktika/torusProject/src/torus.cpp

src/CMakeFiles/torus_library.dir/torus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/torus_library.dir/torus.cpp.i"
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/romk1a/Documents/GitHub/praktika/torusProject/src/torus.cpp > CMakeFiles/torus_library.dir/torus.cpp.i

src/CMakeFiles/torus_library.dir/torus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/torus_library.dir/torus.cpp.s"
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/romk1a/Documents/GitHub/praktika/torusProject/src/torus.cpp -o CMakeFiles/torus_library.dir/torus.cpp.s

# Object files for target torus_library
torus_library_OBJECTS = \
"CMakeFiles/torus_library.dir/torus.cpp.o"

# External object files for target torus_library
torus_library_EXTERNAL_OBJECTS =

src/libtorus_library.a: src/CMakeFiles/torus_library.dir/torus.cpp.o
src/libtorus_library.a: src/CMakeFiles/torus_library.dir/build.make
src/libtorus_library.a: src/CMakeFiles/torus_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/romk1a/Documents/GitHub/praktika/torusProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libtorus_library.a"
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/torus_library.dir/cmake_clean_target.cmake
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/torus_library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/torus_library.dir/build: src/libtorus_library.a
.PHONY : src/CMakeFiles/torus_library.dir/build

src/CMakeFiles/torus_library.dir/clean:
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/torus_library.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/torus_library.dir/clean

src/CMakeFiles/torus_library.dir/depend:
	cd /Users/romk1a/Documents/GitHub/praktika/torusProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/romk1a/Documents/GitHub/praktika/torusProject /Users/romk1a/Documents/GitHub/praktika/torusProject/src /Users/romk1a/Documents/GitHub/praktika/torusProject/build /Users/romk1a/Documents/GitHub/praktika/torusProject/build/src /Users/romk1a/Documents/GitHub/praktika/torusProject/build/src/CMakeFiles/torus_library.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/torus_library.dir/depend

