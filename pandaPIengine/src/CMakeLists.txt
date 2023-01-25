cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)


### if no build type is set, it is "Release"
if (NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "" FORCE)
endif()

project(pandaPIengine)

## required for IBM's CPLEX in order to force it to use newer names for the std headers
add_definitions(-DIL_STD)
list(APPEND compiler_flags -Wall -Wextra -Wno-unused-parameter -Wno-sign-compare -pedantic "$<$<CONFIG:DEBUG>:-Og;-ggdb3;-lpthread>" "$<$<CONFIG:RELEASE>:-O2;-lpthread>")

list(APPEND linker_flags "$<$<CONFIG:DEBUG>:-lpthread;-g>" "$<$<CONFIG:RELEASE>:-flto;-lpthread>")
list(APPEND compiler_flags -DCMAKE_NO_ILP)
list(APPEND compiler_flags -DCMAKE_NO_SAT)
list(APPEND compiler_flags -DCMAKE_NO_BDD)

### Cudd Library Includes
include(ExternalProject)
include_directories(SYSTEM ${CMAKE_SOURCE_DIR}/symbolic_search/cudd-3.0.0/cudd)
include_directories(SYSTEM ${CMAKE_SOURCE_DIR}/symbolic_search/cudd-3.0.0/cplusplus)

### Project Includes
include_directories("search")
include_directories("symbolic_search")
include_directories("heuristics")
include_directories("intDataStructures")
add_subdirectory(search)
add_subdirectory(symbolic_search)
add_subdirectory(heuristics)
add_subdirectory(intDataStructures)

file(GLOB main_SRC "*.h" "*.cpp" "cmdline.c")
 
# create the executable
add_executable (pandaPIengine ${main_SRC} "cmdline.c" "cmdline.h")
target_compile_options(pandaPIengine PUBLIC ${compiler_flags})
target_link_options(pandaPIengine PUBLIC ${linker_flags})

target_link_libraries(pandaPIengine PUBLIC search)
target_link_libraries(pandaPIengine PUBLIC symbolic_search)
target_link_libraries(pandaPIengine PUBLIC heuristics)
target_link_libraries(pandaPIengine PUBLIC hrc)
target_link_libraries(pandaPIengine PUBLIC hlm)

## must be added *after* SAT due to the use of the printMemory function, which is currently defined in the SAT module ... this is probably not a good idea.
target_link_libraries(pandaPIengine PUBLIC intDataStructures)
