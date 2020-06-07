#include <catch2/catch.hpp>
#include <monster.h>

TEST_CASE("BasicMonster")
{
    monster temp;
    CHECK(std::string("say hello") == temp.action());
}

class moveupdecorator : public monster
{
  private:
    monster& _decoratedObject;

  public:
    moveupdecorator(monster& decoratedObject):
        _decoratedObject(decoratedObject) {};

    std::string action() override
    {
        return ("move up and " + _decoratedObject.action());
    }
};

class moveleftdecorator : public monster
{
  private:
    monster& _decoratedObject;

  public:
    moveleftdecorator(monster& decoratedObject):
        _decoratedObject(decoratedObject) {};

    std::string action() override
    {
        return ("move left and " + _decoratedObject.action());
    }
};

TEST_CASE("moveupDecorator")
{
    monster mainMonster;
    monster* decoratedMonster = new moveupdecorator(mainMonster);

    auto temp = decoratedMonster->action();
}

TEST_CASE("moveleftDecorator")
{
    monster mainMonster;
    monster* decoratedMonster = new moveleftdecorator(mainMonster);

    auto temp = decoratedMonster->action();
}

TEST_CASE("twodecorator")
{
    monster mainMonster;
    monster* decoratedMonster = new moveleftdecorator(*(new moveupdecorator(mainMonster)));

    auto temp = decoratedMonster->action();
}