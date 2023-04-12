cmake_minimum_required(VERSION 3.0)

# project name and version
project(SnippetManager VERSION 1.0)

# executable target
add_executable(SnippetManager src/main.cpp)

# this is not recommended but i'm doing it anyways
# find all source files
file(GLOB_RECURSE SOURCES "src/*.cpp")
target_sources(SnippetManager PRIVATE ${SOURCES})

# include directories
target_include_directories(SnippetManager PUBLIC include)

# c++ standard
set(CMAKE_CXX_STANDARD 20)

# colors
set(CMAKE_COLOR_MAKEFILE ON)

# g++ arguments
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdiagnostics-color=always -fcompare-debug-second")

# boost program options
find_package(Boost COMPONENTS program_options REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(SnippetManager ${Boost_LIBRARIES})
