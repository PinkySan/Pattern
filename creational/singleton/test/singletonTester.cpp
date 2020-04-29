#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <singleton.h>

TEST_CASE("BasicUsage")
{
    REQUIRE_NOTHROW(singleton<int>::createInstance());
}

TEST_CASE("TwoTimes")
{
    auto& instance_1 = singleton<int>::createInstance();
    auto& instance_2 = singleton<int>::createInstance();
    REQUIRE(&instance_1 == &instance_2);
}

TEST_CASE("TwoTimesWithCopy")
{
    auto& instance_1 = singleton<int>::createInstance();
    auto& instance_2 = instance_1;
    instance_1 = 14;
    REQUIRE(instance_1 == instance_2);
}

class derivedSingleton : public singleton<derivedSingleton>
{
private:
    friend class singleton<derivedSingleton>;
    derivedSingleton() = default;

public:
    int value = 42;
};

TEST_CASE("DerivedSingleton")
{
    derivedSingleton& instance_1 = derivedSingleton::createInstance();
    derivedSingleton& instance_2 = derivedSingleton::createInstance();

    instance_1.value = 17;
    REQUIRE(instance_1.value == 17);
    CHECK(instance_1.value == instance_2.value);
}

TEST_CASE("DerivedSingletonWithCopy")
{
    derivedSingleton& instance_1 = derivedSingleton::createInstance();
    derivedSingleton& instance_2 = instance_1;

    instance_1.value = 17;
    REQUIRE(instance_1.value == 17);
    CHECK(instance_1.value == instance_2.value);
}