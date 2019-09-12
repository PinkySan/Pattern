add_library(Message STATIC message.h message.cpp)
add_library(MessageBuilder STATIC messageBuilder.h messageBuilder.cpp)
target_link_libraries(MessageBuilder PUBLIC Message)
treatWarningAsErrors(MessageBuilder)

set_target_properties(MessageBuilder PROPERTIES FOLDER creational/builder)
set_target_properties(Message PROPERTIES FOLDER creational/builder)
treatWarningAsErrors(Message)

add_subdirectory(test)