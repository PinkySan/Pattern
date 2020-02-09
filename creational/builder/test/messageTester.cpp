#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_CONSOLE_WIDTH 300
#include <catch2/catch.hpp>

#include <message.h>

TEST_CASE("message")
{
    message mess(messageType::DATA);
    REQUIRE(mess.getData() == "");
    REQUIRE(mess.getType() == messageType::DATA);
    SECTION("copy")
    {
        std::string data = "myInfo";
        mess.setData(data);
        REQUIRE(mess.getData() == data);
    }
    SECTION("RAII")
    {
        mess.setData("newInformation");
        REQUIRE(mess.getData() == "newInformation");
    }
    SECTION("std::move")
    {
        std::string data = "myInfoMoved";
        mess.setData(std::move(data));
        REQUIRE(mess.getData() == data);
    }
}

TEST_CASE("message.multiple")
{
    message mess(messageType::DATA);
    REQUIRE(mess.getData() == "");
    REQUIRE(mess.getType() == messageType::DATA);
    mess.setData("first").setData("second");
    REQUIRE(mess.getData() == "second");
}