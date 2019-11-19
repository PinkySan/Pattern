#pragma once
#include <string>
#include <memory>

class car;
class tires;
class engine;

class abstractCarFactory
{
    public:
        virtual std::unique_ptr<car> createCar() = 0;
        virtual std::unique_ptr<tires> createTires() = 0;
        virtual std::unique_ptr<engine> createEngine() = 0;
};

class car
{
    protected:
        std::shared_ptr<tires> _carTires;
        std::shared_ptr<engine> _carEngine;
        std::string name;
        
    public:
        virtual car& mountTires(std::shared_ptr<tires> carTires) = 0;
        virtual car& installEngine(std::shared_ptr<engine> carEngine) = 0;
        virtual const std::string& getName() const = 0;
};


class tires
{
    public:
        virtual unsigned int getSizeInInch() const = 0;
};

class engine
{
    public:
        virtual unsigned int getHorsePower() const = 0;
};

