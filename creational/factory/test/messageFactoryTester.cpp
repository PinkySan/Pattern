#include <catch2/catch.hpp>
#include <messageFactory.h>


TEST_CASE("InvalidMessage")
{
    InvalidMessageFactory factory;
    message mess = factory.create();

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("InvalidMessageWithMove")
{
    InvalidMessageFactory factory;
    message mess(factory.create());

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("InvalidMessageWithString")
{
    InvalidMessageFactory factory;
    message mess = factory.create().setData("invalid string");

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData() == "invalid string");
}

TEST_CASE("DataMessage")
{
    DataMessageFactory factory;
    message mess = factory.create();

    REQUIRE(mess.getType() == messageType::DATA);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("StatusMessage")
{
    StatusMessageFactory factory;
    message mess = factory.create();

    REQUIRE(mess.getType() == messageType::STATUS);
    REQUIRE(mess.getData().empty());
}