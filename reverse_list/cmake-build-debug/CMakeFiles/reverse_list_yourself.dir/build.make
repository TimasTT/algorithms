# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\c++_dev\ClionProjects\reverse_list_yourself

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\c++_dev\ClionProjects\reverse_list_yourself\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/reverse_list_yourself.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reverse_list_yourself.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reverse_list_yourself.dir/flags.make

CMakeFiles/reverse_list_yourself.dir/main.cpp.obj: CMakeFiles/reverse_list_yourself.dir/flags.make
CMakeFiles/reverse_list_yourself.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\c++_dev\ClionProjects\reverse_list_yourself\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reverse_list_yourself.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reverse_list_yourself.dir\main.cpp.obj -c C:\c++_dev\ClionProjects\reverse_list_yourself\main.cpp

CMakeFiles/reverse_list_yourself.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse_list_yourself.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\c++_dev\ClionProjects\reverse_list_yourself\main.cpp > CMakeFiles\reverse_list_yourself.dir\main.cpp.i

CMakeFiles/reverse_list_yourself.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse_list_yourself.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\c++_dev\ClionProjects\reverse_list_yourself\main.cpp -o CMakeFiles\reverse_list_yourself.dir\main.cpp.s

# Object files for target reverse_list_yourself
reverse_list_yourself_OBJECTS = \
"CMakeFiles/reverse_list_yourself.dir/main.cpp.obj"

# External object files for target reverse_list_yourself
reverse_list_yourself_EXTERNAL_OBJECTS =

reverse_list_yourself.exe: CMakeFiles/reverse_list_yourself.dir/main.cpp.obj
reverse_list_yourself.exe: CMakeFiles/reverse_list_yourself.dir/build.make
reverse_list_yourself.exe: CMakeFiles/reverse_list_yourself.dir/linklibs.rsp
reverse_list_yourself.exe: CMakeFiles/reverse_list_yourself.dir/objects1.rsp
reverse_list_yourself.exe: CMakeFiles/reverse_list_yourself.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\c++_dev\ClionProjects\reverse_list_yourself\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable reverse_list_yourself.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\reverse_list_yourself.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reverse_list_yourself.dir/build: reverse_list_yourself.exe

.PHONY : CMakeFiles/reverse_list_yourself.dir/build

CMakeFiles/reverse_list_yourself.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\reverse_list_yourself.dir\cmake_clean.cmake
.PHONY : CMakeFiles/reverse_list_yourself.dir/clean

CMakeFiles/reverse_list_yourself.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\c++_dev\ClionProjects\reverse_list_yourself C:\c++_dev\ClionProjects\reverse_list_yourself C:\c++_dev\ClionProjects\reverse_list_yourself\cmake-build-debug C:\c++_dev\ClionProjects\reverse_list_yourself\cmake-build-debug C:\c++_dev\ClionProjects\reverse_list_yourself\cmake-build-debug\CMakeFiles\reverse_list_yourself.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reverse_list_yourself.dir/depend

