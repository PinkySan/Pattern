find_package(Catch2 REQUIRED)

add_executable(adapterTester adapterTester.cpp)
target_link_libraries(adapterTester PRIVATE Catch2::Catch2 newInterface oldInterfaceAdapter)
add_test(NAME adapterTester COMMAND adapterTester -o adapterTester.xml -r junit)
set_target_properties(adapterTester PROPERTIES FOLDER structural/adapter/test)
target_compile_definitions(adapterTester PRIVATE CATCH_CONFIG_MAIN)