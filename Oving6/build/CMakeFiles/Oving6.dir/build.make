# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/build"

# Include any dependencies generated for this target.
include CMakeFiles/Oving6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Oving6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Oving6.dir/flags.make

CMakeFiles/Oving6.dir/server.cpp.o: CMakeFiles/Oving6.dir/flags.make
CMakeFiles/Oving6.dir/server.cpp.o: ../server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Oving6.dir/server.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Oving6.dir/server.cpp.o -c "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/server.cpp"

CMakeFiles/Oving6.dir/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oving6.dir/server.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/server.cpp" > CMakeFiles/Oving6.dir/server.cpp.i

CMakeFiles/Oving6.dir/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oving6.dir/server.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/server.cpp" -o CMakeFiles/Oving6.dir/server.cpp.s

# Object files for target Oving6
Oving6_OBJECTS = \
"CMakeFiles/Oving6.dir/server.cpp.o"

# External object files for target Oving6
Oving6_EXTERNAL_OBJECTS =

Oving6: CMakeFiles/Oving6.dir/server.cpp.o
Oving6: CMakeFiles/Oving6.dir/build.make
Oving6: /usr/local/lib/libboost_system-mt.dylib
Oving6: CMakeFiles/Oving6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Oving6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Oving6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Oving6.dir/build: Oving6

.PHONY : CMakeFiles/Oving6.dir/build

CMakeFiles/Oving6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Oving6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Oving6.dir/clean

CMakeFiles/Oving6.dir/depend:
	cd "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6" "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6" "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/build" "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/build" "/Users/ianevangelista/OneDrive - NTNU/Dataingeniør/3. klasse/C++/Oving6/build/CMakeFiles/Oving6.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Oving6.dir/depend

