// singleton.h : Header file for your target.

#pragma once
#include <memory>

template<typename T>
class singleton
{
protected:
    singleton() = default;

public:
    static T& createInstance()
    {
        static T _instance;
        return _instance;
    };

    singleton(const singleton&) = delete;
    void operator=(const singleton&) = delete;
};