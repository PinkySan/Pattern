#pragma once
#include "message.h"

class messageFactory
{
  public:
    static message create(const messageType& type);
};
