find_package(Catch2 REQUIRED)

add_executable(messageBuilderTester messageBuilderTester.cpp)
target_link_libraries(messageBuilderTester PRIVATE Catch2::Catch2 MessageBuilder)
add_test(NAME messageBuilderTester COMMAND messageBuilderTester -o messageBuilderTester.xml -r junit)
set_target_properties(messageBuilderTester PROPERTIES FOLDER creational/builder/test)