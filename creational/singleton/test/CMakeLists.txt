add_executable(singletonTester "singletonTester.cpp")
find_package(Catch2 REQUIRED)

target_link_libraries(singletonTester PRIVATE Catch2::Catch2 singleton)
add_test(NAME singletonTester COMMAND singletonTester -o singletonTester.xml -r junit)
set_target_properties(singletonTester PROPERTIES FOLDER creational/singleton/test)