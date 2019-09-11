add_library(Message STATIC message.h message.cpp)
add_library(MessageBuilder STATIC messageBuilder.h messageBuilder.cpp)
target_link_libraries(MessageBuilder PUBLIC Message)


set_target_properties(MessageBuilder PROPERTIES FOLDER creational/builder)
set_target_properties(Message PROPERTIES FOLDER creational/builder)

add_subdirectory(test)