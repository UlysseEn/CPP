# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /user/7/ludeaut/c++/TPi_ludeaut

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /user/7/ludeaut/c++/TPi_ludeaut/build

# Include any dependencies generated for this target.
include CMakeFiles/Dvector_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dvector_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dvector_test.dir/flags.make

CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o: CMakeFiles/Dvector_test.dir/flags.make
CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o: ../src/Dvector.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /user/7/ludeaut/c++/TPi_ludeaut/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o -c /user/7/ludeaut/c++/TPi_ludeaut/src/Dvector.cxx

CMakeFiles/Dvector_test.dir/src/Dvector.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dvector_test.dir/src/Dvector.cxx.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /user/7/ludeaut/c++/TPi_ludeaut/src/Dvector.cxx > CMakeFiles/Dvector_test.dir/src/Dvector.cxx.i

CMakeFiles/Dvector_test.dir/src/Dvector.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dvector_test.dir/src/Dvector.cxx.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /user/7/ludeaut/c++/TPi_ludeaut/src/Dvector.cxx -o CMakeFiles/Dvector_test.dir/src/Dvector.cxx.s

CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o.requires:
.PHONY : CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o.requires

CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o.provides: CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o.requires
	$(MAKE) -f CMakeFiles/Dvector_test.dir/build.make CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o.provides.build
.PHONY : CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o.provides

CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o.provides.build: CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o

# Object files for target Dvector_test
Dvector_test_OBJECTS = \
"CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o"

# External object files for target Dvector_test
Dvector_test_EXTERNAL_OBJECTS =

Dvector_test: CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o
Dvector_test: CMakeFiles/Dvector_test.dir/build.make
Dvector_test: CMakeFiles/Dvector_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable Dvector_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dvector_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dvector_test.dir/build: Dvector_test
.PHONY : CMakeFiles/Dvector_test.dir/build

CMakeFiles/Dvector_test.dir/requires: CMakeFiles/Dvector_test.dir/src/Dvector.cxx.o.requires
.PHONY : CMakeFiles/Dvector_test.dir/requires

CMakeFiles/Dvector_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dvector_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dvector_test.dir/clean

CMakeFiles/Dvector_test.dir/depend:
	cd /user/7/ludeaut/c++/TPi_ludeaut/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /user/7/ludeaut/c++/TPi_ludeaut /user/7/ludeaut/c++/TPi_ludeaut /user/7/ludeaut/c++/TPi_ludeaut/build /user/7/ludeaut/c++/TPi_ludeaut/build /user/7/ludeaut/c++/TPi_ludeaut/build/CMakeFiles/Dvector_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dvector_test.dir/depend

