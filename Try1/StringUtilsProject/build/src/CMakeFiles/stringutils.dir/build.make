# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build

# Include any dependencies generated for this target.
include src/CMakeFiles/stringutils.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/stringutils.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/stringutils.dir/flags.make

src/CMakeFiles/stringutils.dir/StringUtils.cpp.o: src/CMakeFiles/stringutils.dir/flags.make
src/CMakeFiles/stringutils.dir/StringUtils.cpp.o: ../src/StringUtils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/stringutils.dir/StringUtils.cpp.o"
	cd /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stringutils.dir/StringUtils.cpp.o -c /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/src/StringUtils.cpp

src/CMakeFiles/stringutils.dir/StringUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stringutils.dir/StringUtils.cpp.i"
	cd /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/src/StringUtils.cpp > CMakeFiles/stringutils.dir/StringUtils.cpp.i

src/CMakeFiles/stringutils.dir/StringUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stringutils.dir/StringUtils.cpp.s"
	cd /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/src/StringUtils.cpp -o CMakeFiles/stringutils.dir/StringUtils.cpp.s

# Object files for target stringutils
stringutils_OBJECTS = \
"CMakeFiles/stringutils.dir/StringUtils.cpp.o"

# External object files for target stringutils
stringutils_EXTERNAL_OBJECTS =

src/libstringutils.a: src/CMakeFiles/stringutils.dir/StringUtils.cpp.o
src/libstringutils.a: src/CMakeFiles/stringutils.dir/build.make
src/libstringutils.a: src/CMakeFiles/stringutils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstringutils.a"
	cd /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/stringutils.dir/cmake_clean_target.cmake
	cd /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stringutils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/stringutils.dir/build: src/libstringutils.a

.PHONY : src/CMakeFiles/stringutils.dir/build

src/CMakeFiles/stringutils.dir/clean:
	cd /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/stringutils.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/stringutils.dir/clean

src/CMakeFiles/stringutils.dir/depend:
	cd /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/src /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/src /home/bledyx/home/UA/cuarto/primer-cuatri/DCA/practicas/practica6/Try1/StringUtilsProject/build/src/CMakeFiles/stringutils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/stringutils.dir/depend

