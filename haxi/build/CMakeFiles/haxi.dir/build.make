# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wangyuanhao/core_repository/c-_example/haxi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wangyuanhao/core_repository/c-_example/haxi/build

# Include any dependencies generated for this target.
include CMakeFiles/haxi.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/haxi.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/haxi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/haxi.dir/flags.make

CMakeFiles/haxi.dir/haxi.cpp.o: CMakeFiles/haxi.dir/flags.make
CMakeFiles/haxi.dir/haxi.cpp.o: /home/wangyuanhao/core_repository/c-_example/haxi/haxi.cpp
CMakeFiles/haxi.dir/haxi.cpp.o: CMakeFiles/haxi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wangyuanhao/core_repository/c-_example/haxi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/haxi.dir/haxi.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/haxi.dir/haxi.cpp.o -MF CMakeFiles/haxi.dir/haxi.cpp.o.d -o CMakeFiles/haxi.dir/haxi.cpp.o -c /home/wangyuanhao/core_repository/c-_example/haxi/haxi.cpp

CMakeFiles/haxi.dir/haxi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/haxi.dir/haxi.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wangyuanhao/core_repository/c-_example/haxi/haxi.cpp > CMakeFiles/haxi.dir/haxi.cpp.i

CMakeFiles/haxi.dir/haxi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/haxi.dir/haxi.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wangyuanhao/core_repository/c-_example/haxi/haxi.cpp -o CMakeFiles/haxi.dir/haxi.cpp.s

# Object files for target haxi
haxi_OBJECTS = \
"CMakeFiles/haxi.dir/haxi.cpp.o"

# External object files for target haxi
haxi_EXTERNAL_OBJECTS =

haxi: CMakeFiles/haxi.dir/haxi.cpp.o
haxi: CMakeFiles/haxi.dir/build.make
haxi: CMakeFiles/haxi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wangyuanhao/core_repository/c-_example/haxi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable haxi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/haxi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/haxi.dir/build: haxi
.PHONY : CMakeFiles/haxi.dir/build

CMakeFiles/haxi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/haxi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/haxi.dir/clean

CMakeFiles/haxi.dir/depend:
	cd /home/wangyuanhao/core_repository/c-_example/haxi/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wangyuanhao/core_repository/c-_example/haxi /home/wangyuanhao/core_repository/c-_example/haxi /home/wangyuanhao/core_repository/c-_example/haxi/build /home/wangyuanhao/core_repository/c-_example/haxi/build /home/wangyuanhao/core_repository/c-_example/haxi/build/CMakeFiles/haxi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/haxi.dir/depend

