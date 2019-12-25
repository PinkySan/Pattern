add_library(MessageFactory STATIC messageFactory.h messageFactory.cpp message.h message.cpp)
set_target_properties(MessageFactory PROPERTIES FOLDER creational/factory)

add_subdirectory(test)