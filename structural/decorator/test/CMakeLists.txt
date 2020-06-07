find_package(Catch2 REQUIRED)

add_executable(decoratorTester decoratorTester.cpp)
target_link_libraries(decoratorTester PRIVATE Catch2::Catch2 monster)
add_test(NAME decoratorTester COMMAND decoratorTester -o decoratorTester.xml -r junit)
set_target_properties(decoratorTester PROPERTIES FOLDER structural/decorator/test)
target_compile_definitions(decoratorTester PRIVATE CATCH_CONFIG_MAIN)