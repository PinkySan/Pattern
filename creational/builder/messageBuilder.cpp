#include "messageBuilder.h"


message invalidMessageBuilder::createComplexMessage()
{
    return message(messageType::INVALID);
}

message dataMessageBuilder::createComplexMessage()
{
    return message(messageType::DATA);
}

message statusMessageBuilder::createComplexMessage()
{
    return message(messageType::STATUS);
}
