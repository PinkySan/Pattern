cmake_minimum_required(VERSION 3.10)
project(pattern LANGUAGES CXX VERSION 0.0.1)

find_package(Catch2 REQUIRED)
include(CTest)
enable_testing()
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

function(treatWarningAsErrors TARGET_NAME)
    if(MSVC)
    target_compile_options(${TARGET_NAME} PRIVATE /W4 /WX)
    else()
    target_compile_options(${TARGET_NAME} PRIVATE -Wall -Wextra -pedantic -Werror)
    endif()
endfunction()


add_subdirectory(creational)