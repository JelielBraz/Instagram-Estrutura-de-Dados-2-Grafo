# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/jeliel/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jeliel/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/flags.make

CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.o: CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/flags.make
CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.o   -c /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/main.c

CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/main.c > CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.i

CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/main.c -o CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.s

CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.o: CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/flags.make
CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.o: ../grafo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.o   -c /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/grafo.c

CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/grafo.c > CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.i

CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/grafo.c -o CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.s

# Object files for target prova_Estrutura2_Jeliel_Instagram
prova_Estrutura2_Jeliel_Instagram_OBJECTS = \
"CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.o" \
"CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.o"

# External object files for target prova_Estrutura2_Jeliel_Instagram
prova_Estrutura2_Jeliel_Instagram_EXTERNAL_OBJECTS =

prova_Estrutura2_Jeliel_Instagram: CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/main.c.o
prova_Estrutura2_Jeliel_Instagram: CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/grafo.c.o
prova_Estrutura2_Jeliel_Instagram: CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/build.make
prova_Estrutura2_Jeliel_Instagram: CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable prova_Estrutura2_Jeliel_Instagram"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/build: prova_Estrutura2_Jeliel_Instagram

.PHONY : CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/build

CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/clean

CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/depend:
	cd /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/cmake-build-debug /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/cmake-build-debug /home/jeliel/CLionProjects/prova-Estrutura2-Jeliel-Instagram/cmake-build-debug/CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prova_Estrutura2_Jeliel_Instagram.dir/depend

