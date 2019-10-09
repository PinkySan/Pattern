#include "messageFactory.h"

message InvalidMessageFactory::create()
{
    return invalidMessage();
}

message DataMessageFactory::create()
{
    return dataMessage();
}

message StatusMessageFactory::create()
{
    return statusMessage();
}
