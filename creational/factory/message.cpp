#include "message.h"

message::message(messageType newType):
    type(newType)
{
}

message& message::setData(const std::string&& newData)
{
    data = std::move(newData);
    return *this;
}

message& message::setData(const std::string& newData)
{
    data = newData;
    return *this;
}

auto message::getData() -> decltype(data)
{
    return data;
}

auto message::getType() -> decltype(type)
{
    return type;
}

std::ostream& operator<<(std::ostream& os, const messageType& type)
{
    switch (type)
    {
    case messageType::INVALID:
        os << "INVALID";
        break;
    case messageType::DATA:
        os << "DATA";
        break;
    case messageType::STATUS:
        os << "STATUS";
        break;
    default:
        os << "UNKNOWN";
        break;
    }
    return os;
}

invalidMessage::invalidMessage():
    message(messageType::INVALID)
{
}

dataMessage::dataMessage():
    message(messageType::DATA)
{
}

statusMessage::statusMessage():
    message(messageType::STATUS)
{
}
