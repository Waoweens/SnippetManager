cmake_minimum_required(VERSION 3.0)

# project name and version
project(SnippetManager VERSION 1.0)

# executable target
add_executable(SnippetManager src/main.cpp)

# include directories
target_include_directories(SnippetManager PUBLIC include)

# c++ standard
set_target_properties(CMAKE_CXX_STANDARD 20)