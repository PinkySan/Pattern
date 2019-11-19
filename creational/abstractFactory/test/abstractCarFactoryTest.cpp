#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <carAbstractFactory.h>
#include <memory>
#include <vwFactory.h>

TEMPLATE_TEST_CASE("abstractFactory", "vw",vwFactory)
{
    std::unique_ptr<abstractCarFactory> factory = std::make_unique<TestType>();
    std::unique_ptr<car> myCar = factory->createCar();
    std::shared_ptr<tires> myTires = factory->createTires();
    std::shared_ptr<engine> myEngine = factory->createEngine();
    myCar->mountTires(myTires).installEngine(myEngine);
    std::cout << myTires->getSizeInInch();
}
