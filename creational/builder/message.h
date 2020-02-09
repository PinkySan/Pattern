#pragma once
#include <string>
#include <ostream>

enum class messageType: uint8_t
{
    INVALID,
    DATA,
    STATUS,
    UNKNOWN = 99
};

std::ostream& operator<<(std::ostream& os, const messageType& type);

class message
{
private:
    messageType type = messageType::UNKNOWN;
    std::string data;

public:
    message(messageType newType);
    message& setData(const std::string& newData);
    auto getData() const -> decltype(data);
    auto getType() const -> decltype(type);
};  