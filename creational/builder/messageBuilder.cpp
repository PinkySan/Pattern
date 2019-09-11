#include "messageBuilder.h"


message invalidMessageBuilder::createMessage()
{
    return message(messageType::INVALID);
}

message dataMessageBuilder::createMessage()
{
    return message(messageType::DATA);
}

message statusMessageBuilder::createMessage()
{
    return message(messageType::STATUS);
}
