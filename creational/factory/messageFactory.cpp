#include "messageFactory.h"
#include <exception>

message messageFactory::create(const messageType &type)
{
    switch (type)
    {
    case messageType::DATA:
        return dataMessage();
        break;
    case messageType::INVALID:
        return invalidMessage();
        break;
    case messageType::STATUS:
        return statusMessage();
        break;
    default:
        throw(std::exception("Define messagetype"));
    }
}
