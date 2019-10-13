#pragma once
#include "message.h"

class messageBuilder
{
public:
    virtual message createComplexMessage() = 0;
};

class invalidMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    virtual message createComplexMessage() override;
};

class dataMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    virtual message createComplexMessage() override;
};

class statusMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    virtual message createComplexMessage() override;
};