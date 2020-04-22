// singleton.cpp : Source file for your target.
//

#include "singleton.h"

std::shared_ptr<singleton> singleton::createInstance()
{
    if (!_instance)
        _instance = std::make_shared<singleton>();
    return _instance;
}
