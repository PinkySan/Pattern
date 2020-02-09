#pragma once;
#include <carAbstractFactory.h>

class vwFactory : public abstractCarFactory
{
public:
    std::unique_ptr<car> createCar() override;
    std::unique_ptr<tires> createTires() override;
    std::unique_ptr<engine> createEngine() override;
};


class vwCar : public car
{
public:
    // Inherited via car
    car& mountTires(std::shared_ptr<tires> carTires) override;
    car& installEngine(std::shared_ptr<engine> carEngine) override;
    const std::string& getName() const override;
    car& setName(const std::string& name) override;
};

class vwTires : public tires
{
public:
    // Inherited via tires
    unsigned int getSizeInInch() const override;
};

class vwEngine : public engine
{
public:
    // Inherited via engine
    unsigned int getHorsePower() const override;
};