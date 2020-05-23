#include <catch2/catch.hpp>
#include <newInterface.h>
#include <interfaceAdapter.h>


#include <limits>
TEST_CASE("NewInterface")
{
    REQUIRE(7 == bar::SumValues::AddValues({4,3}));
    REQUIRE(7 == adapter::SumValuesAdapter::AddValues({4,3}));
}

TEST_CASE("MoreThan2Values")
{
    REQUIRE(9 == bar::SumValues::AddValues({4,3,2}));
    REQUIRE(9 == adapter::SumValuesAdapter::AddValues({4,3,2}));
}

TEST_CASE("NewInterfaceWithLargeNumber")
{
    constexpr std::int64_t largeValue = static_cast<std::int64_t>(std::numeric_limits<std::int32_t>::max()) +
        static_cast<std::int64_t>(std::numeric_limits<std::int32_t>::max());

    REQUIRE(largeValue == bar::SumValues::AddValues({std::numeric_limits<std::int32_t>::max(),
        std::numeric_limits<std::int32_t>::max()}));

    REQUIRE(largeValue == adapter::SumValuesAdapter::AddValues({std::numeric_limits<std::int32_t>::max(),
        std::numeric_limits<std::int32_t>::max()}));
}