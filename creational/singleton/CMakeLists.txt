add_library(singleton INTERFACE)
target_include_directories(singleton INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(test)