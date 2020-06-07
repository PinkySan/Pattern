add_library(monster STATIC monster.cpp monster.h)
set_target_properties(monster PROPERTIES FOLDER structural/decorator)

add_subdirectory(test)