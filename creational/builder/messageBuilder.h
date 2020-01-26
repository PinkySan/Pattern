#pragma once
#include "message.h"

/**
 * @brief this is the abstract builder class
 * 
 */
class messageBuilder
{
public:
    /**
     * @brief Create a complex Message object.
     * 
     * @return message 
     */
    virtual message createComplexMessage() = 0;
};

class invalidMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    message createComplexMessage() override;
};

class dataMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    message createComplexMessage() override;
};

class statusMessageBuilder : public messageBuilder
{
public:
    // Inherited via messageBuilder
    message createComplexMessage() override;
};