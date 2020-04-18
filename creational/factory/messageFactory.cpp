#include "messageFactory.h"

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
    default:
        throw(std::exception("Define messagetype"));
    }
}
