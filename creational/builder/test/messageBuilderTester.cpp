#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <messageBuilder.h>

TEST_CASE("InvalidMessage")
{
    invalidMessageBuilder builder;
    message mess = builder.createComplexMessage();

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("InvalidMessageWithMove")
{
    invalidMessageBuilder builder;
    message mess(builder.createComplexMessage());

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("InvalidMessageWithString")
{
    invalidMessageBuilder builder;
    message mess = builder.createComplexMessage().setData("invalid string");

    REQUIRE(mess.getType() == messageType::INVALID);
    REQUIRE(mess.getData() == "invalid string");
}

TEST_CASE("DataMessage")
{
    dataMessageBuilder builder;
    message mess = builder.createComplexMessage();

    REQUIRE(mess.getType() == messageType::DATA);
    REQUIRE(mess.getData().empty());
}

TEST_CASE("StatusMessage")
{
    statusMessageBuilder builder;
    message mess = builder.createComplexMessage();

    REQUIRE(mess.getType() == messageType::STATUS);
    REQUIRE(mess.getData().empty());
}