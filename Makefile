# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/jr/Programs/design_pattern

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jr/Programs/design_pattern

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/jr/Programs/design_pattern/CMakeFiles /home/jr/Programs/design_pattern/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/jr/Programs/design_pattern/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named patterns

# Build rule for target.
patterns: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 patterns
.PHONY : patterns

# fast build rule for target.
patterns/fast:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/build
.PHONY : patterns/fast

abstract_factory/abstract_factory.o: abstract_factory/abstract_factory.cpp.o

.PHONY : abstract_factory/abstract_factory.o

# target to build an object file
abstract_factory/abstract_factory.cpp.o:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/abstract_factory/abstract_factory.cpp.o
.PHONY : abstract_factory/abstract_factory.cpp.o

abstract_factory/abstract_factory.i: abstract_factory/abstract_factory.cpp.i

.PHONY : abstract_factory/abstract_factory.i

# target to preprocess a source file
abstract_factory/abstract_factory.cpp.i:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/abstract_factory/abstract_factory.cpp.i
.PHONY : abstract_factory/abstract_factory.cpp.i

abstract_factory/abstract_factory.s: abstract_factory/abstract_factory.cpp.s

.PHONY : abstract_factory/abstract_factory.s

# target to generate assembly for a file
abstract_factory/abstract_factory.cpp.s:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/abstract_factory/abstract_factory.cpp.s
.PHONY : abstract_factory/abstract_factory.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/main.cpp.s
.PHONY : main.cpp.s

state/state.o: state/state.cpp.o

.PHONY : state/state.o

# target to build an object file
state/state.cpp.o:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/state/state.cpp.o
.PHONY : state/state.cpp.o

state/state.i: state/state.cpp.i

.PHONY : state/state.i

# target to preprocess a source file
state/state.cpp.i:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/state/state.cpp.i
.PHONY : state/state.cpp.i

state/state.s: state/state.cpp.s

.PHONY : state/state.s

# target to generate assembly for a file
state/state.cpp.s:
	$(MAKE) -f CMakeFiles/patterns.dir/build.make CMakeFiles/patterns.dir/state/state.cpp.s
.PHONY : state/state.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... patterns"
	@echo "... abstract_factory/abstract_factory.o"
	@echo "... abstract_factory/abstract_factory.i"
	@echo "... abstract_factory/abstract_factory.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... state/state.o"
	@echo "... state/state.i"
	@echo "... state/state.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

