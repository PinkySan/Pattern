add_library(singleton STATIC "singleton.cpp" "singleton.h")
set_target_properties(singleton PROPERTIES FOLDER creational/singleton)

add_subdirectory(test)