add_library(MessageBuilder STATIC messageBuilder.h messageBuilder.cpp message.h message.cpp)
set_target_properties(MessageBuilder PROPERTIES FOLDER creational/builder)
add_subdirectory(test)