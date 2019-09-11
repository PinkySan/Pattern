#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <message.h>

TEST_CASE("message")
{
    message mess(messageType::DATA);
    REQUIRE(mess.getData() == "");
    REQUIRE(mess.getType() == messageType::DATA);
    {
        std::string data = "myInfo";
        mess.setData(data);
        REQUIRE(mess.getData() == data);
    }
    {
        mess.setData("newInformation");
        REQUIRE(mess.getData() == "newInformation");
    }
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