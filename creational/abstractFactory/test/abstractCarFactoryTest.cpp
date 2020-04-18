#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <carAbstractFactory.h>
#include <memory>
#include <vwFactory.h>

TEST_CASE("abstractFactory","vw")
{
    std::unique_ptr<abstractCarFactory> factory = std::make_unique<vwFactory>();
    std::unique_ptr<car> myCar = factory->createCar();
    std::shared_ptr<tires> myTires = factory->createTires();
    std::shared_ptr<engine> myEngine = factory->createEngine();
    myCar->setName("Golf").mountTires(myTires).installEngine(myEngine);
    REQUIRE(myTires->getSizeInInch() == 17);
}
