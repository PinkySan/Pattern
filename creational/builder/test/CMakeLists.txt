find_package(Catch2 REQUIRED)

add_executable(messageTester messageTester.cpp)
target_link_libraries(messageTester PRIVATE Catch2::Catch2 Message)
add_test(NAME messageTester COMMAND messageTester)
set_target_properties(messageTester PROPERTIES FOLDER creational/builder/test)


add_executable(messageBuilderTester messageBuilderTester.cpp)
target_link_libraries(messageBuilderTester PRIVATE Catch2::Catch2 MessageBuilder)
add_test(NAME messageBuilderTester COMMAND messageBuilderTester)
set_target_properties(messageBuilderTester PROPERTIES FOLDER creational/builder/test)