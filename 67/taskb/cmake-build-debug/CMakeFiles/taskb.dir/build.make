# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\GitHub\EducationalCodeForces\67\taskb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub\EducationalCodeForces\67\taskb\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/taskb.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/taskb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/taskb.dir/flags.make

CMakeFiles/taskb.dir/main.cpp.obj: CMakeFiles/taskb.dir/flags.make
CMakeFiles/taskb.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\EducationalCodeForces\67\taskb\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/taskb.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\taskb.dir\main.cpp.obj -c C:\GitHub\EducationalCodeForces\67\taskb\main.cpp

CMakeFiles/taskb.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/taskb.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub\EducationalCodeForces\67\taskb\main.cpp > CMakeFiles\taskb.dir\main.cpp.i

CMakeFiles/taskb.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/taskb.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub\EducationalCodeForces\67\taskb\main.cpp -o CMakeFiles\taskb.dir\main.cpp.s

# Object files for target taskb
taskb_OBJECTS = \
"CMakeFiles/taskb.dir/main.cpp.obj"

# External object files for target taskb
taskb_EXTERNAL_OBJECTS =

taskb.exe: CMakeFiles/taskb.dir/main.cpp.obj
taskb.exe: CMakeFiles/taskb.dir/build.make
taskb.exe: CMakeFiles/taskb.dir/linklibs.rsp
taskb.exe: CMakeFiles/taskb.dir/objects1.rsp
taskb.exe: CMakeFiles/taskb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub\EducationalCodeForces\67\taskb\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable taskb.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\taskb.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/taskb.dir/build: taskb.exe

.PHONY : CMakeFiles/taskb.dir/build

CMakeFiles/taskb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\taskb.dir\cmake_clean.cmake
.PHONY : CMakeFiles/taskb.dir/clean

CMakeFiles/taskb.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub\EducationalCodeForces\67\taskb C:\GitHub\EducationalCodeForces\67\taskb C:\GitHub\EducationalCodeForces\67\taskb\cmake-build-debug C:\GitHub\EducationalCodeForces\67\taskb\cmake-build-debug C:\GitHub\EducationalCodeForces\67\taskb\cmake-build-debug\CMakeFiles\taskb.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/taskb.dir/depend
