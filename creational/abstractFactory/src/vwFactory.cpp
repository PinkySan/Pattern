#include "vwFactory.h"

std::unique_ptr<car> vwFactory::createCar()
{
    return std::make_unique<vwCar>();
}

std::unique_ptr<tires> vwFactory::createTires()
{
    return std::make_unique<vwTires>();
}

std::unique_ptr<engine> vwFactory::createEngine()
{
    return std::make_unique<vwEngine>();
}

car& vwCar::mountTires(std::shared_ptr<tires> carTires)
{
    _carTires = carTires;
    return *this;
}

car& vwCar::installEngine(std::shared_ptr<engine> carEngine)
{
    _carEngine = carEngine;
    return *this;
}

const std::string& vwCar::getName() const
{
    return _name;
}

car& vwCar::setName(const std::string& name)
{
    _name = name;
    return *this;
}

unsigned int vwTires::getSizeInInch() const
{
    return 17;
}

unsigned int vwEngine::getHorsePower() const
{
    return 120;
}
