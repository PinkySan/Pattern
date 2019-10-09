#pragma once
#include <string>
#include <ostream>

enum class messageType
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
    message() = delete;
    message(messageType newType);
    message& setData(const std::string&& newData);
    message& setData(const std::string& newData);
    auto getData() -> decltype(data);
    auto getType() -> decltype(type);
};

class invalidMessage : public message
{
public:
    invalidMessage();
};

class dataMessage : public message
{
public:
    dataMessage();
};

class statusMessage : public message
{
public:
    statusMessage();
};