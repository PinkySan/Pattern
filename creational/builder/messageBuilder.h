#pragma once
#include "message.h"

class messageBuilder
{
public:
    virtual message createMessage() = 0;
};

class invalidMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    virtual message createMessage() override;
};

class dataMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    virtual message createMessage() override;
};

class statusMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    virtual message createMessage() override;
};