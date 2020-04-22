find_package(Catch2 REQUIRED)

add_executable(abstractCarFactoryTest abstractCarFactoryTest.cpp)
target_link_libraries(abstractCarFactoryTest PRIVATE Catch2::Catch2 vwFactory)
set_target_properties(abstractCarFactoryTest PROPERTIES FOLDER creational/abstractFactory/test)

add_test(NAME abstractCarFactoryTest COMMAND abstractCarFactoryTest -o abstractCarFactoryTest.xml -r junit)