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
CMAKE_COMMAND = "C:\Users\Gauthier V1.0\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Gauthier V1.0\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/coursCPP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/coursCPP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/coursCPP.dir/flags.make

CMakeFiles/coursCPP.dir/main.cpp.obj: CMakeFiles/coursCPP.dir/flags.make
CMakeFiles/coursCPP.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/coursCPP.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\coursCPP.dir\main.cpp.obj -c D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\main.cpp

CMakeFiles/coursCPP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coursCPP.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\main.cpp > CMakeFiles\coursCPP.dir\main.cpp.i

CMakeFiles/coursCPP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coursCPP.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\main.cpp -o CMakeFiles\coursCPP.dir\main.cpp.s

# Object files for target coursCPP
coursCPP_OBJECTS = \
"CMakeFiles/coursCPP.dir/main.cpp.obj"

# External object files for target coursCPP
coursCPP_EXTERNAL_OBJECTS =

coursCPP.exe: CMakeFiles/coursCPP.dir/main.cpp.obj
coursCPP.exe: CMakeFiles/coursCPP.dir/build.make
coursCPP.exe: CMakeFiles/coursCPP.dir/linklibs.rsp
coursCPP.exe: CMakeFiles/coursCPP.dir/objects1.rsp
coursCPP.exe: CMakeFiles/coursCPP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable coursCPP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\coursCPP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/coursCPP.dir/build: coursCPP.exe

.PHONY : CMakeFiles/coursCPP.dir/build

CMakeFiles/coursCPP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\coursCPP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/coursCPP.dir/clean

CMakeFiles/coursCPP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\cmake-build-debug D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\cmake-build-debug D:\Bureau\travail\0_PROJETS\CADET_COLLIGNON_CPP\src\cmake-build-debug\CMakeFiles\coursCPP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/coursCPP.dir/depend
