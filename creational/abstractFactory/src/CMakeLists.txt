add_library(vwFactory STATIC vwFactory.h vwFactory.cpp)
target_link_libraries(vwFactory PUBLIC abstractCarFactory)
target_include_directories(vwFactory PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(vwFactory PROPERTIES FOLDER creational/abstractFactory)