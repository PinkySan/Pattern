cmake_minimum_required(VERSION 3.10)
project(pattern LANGUAGES CXX VERSION 0.0.1)

find_package(Catch2 REQUIRED)
enable_testing()
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)
set(CMAKE_CXX_STANDARD 14)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(creational)