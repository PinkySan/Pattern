
add_subdirectory(include)
add_library(vwFactory STATIC vwFactory.h vwFactory.cpp)
target_link_libraries(vwFactory PUBLIC abstractCarFactory)
set_target_properties(vwFactory PROPERTIES FOLDER creational/abstractFactory)
add_subdirectory(test)