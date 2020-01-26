#include "messageBuilder.h"


message invalidMessageBuilder::createComplexMessage()
{
    message temp(messageType::INVALID);
    temp.setData("invalid message");
    return temp;
}

message dataMessageBuilder::createComplexMessage()
{
    message temp(messageType::DATA);
    temp.setData("data message");
    return temp;
}

message statusMessageBuilder::createComplexMessage()
{   
    message temp(messageType::STATUS);
    temp.setData("status message");
    return temp;
}
