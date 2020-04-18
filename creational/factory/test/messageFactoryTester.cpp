#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <messageFactory.h>


TEST_CASE("ThrowOnUnknownMessage")
{
    REQUIRE_THROWS_WITH(messageFactory::create(messageType::UNKNOWN),"Define messagetype");
}

TEST_CASE("InvalidMessage")
{
    messageFactory factory;
    message mess = factory.create(messageType::INVALID);

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("InvalidMessageWithMove")
{
    messageFactory factory;
    message mess(factory.create(messageType::INVALID));

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("InvalidMessageWithString")
{
    messageFactory factory;
    message mess = factory.create(messageType::INVALID).setData("invalid string");

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData() == "invalid string");
}

TEST_CASE("DataMessage")
{
    messageFactory factory;
    message mess = factory.create(messageType::DATA);

    REQUIRE(mess.getType() == messageType::DATA);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("StatusMessage")
{
    messageFactory factory;
    message mess = factory.create(messageType::STATUS);

    REQUIRE(mess.getType() == messageType::STATUS);
    REQUIRE(mess.getData().empty());
}