#pragma once
#include "message.h"

class messageFactory
{
  public:
    virtual message create() = 0;
};

class InvalidMessageFactory : public messageFactory
{
  public:
    // Inherited via messageFactory
    virtual message create() override;
};

class DataMessageFactory : public messageFactory
{
  public:
    // Inherited via messageFactory
    virtual message create() override;
};

class StatusMessageFactory : public messageFactory
{
  public:
    // Inherited via messageFactory
    virtual message create() override;
};