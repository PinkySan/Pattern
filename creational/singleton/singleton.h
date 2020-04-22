// singleton.h : Header file for your target.

#pragma once
#include <memory>

class singleton
{
  private:
    singleton() = default;
    static std::shared_ptr<singleton> _instance;

  public:
    static std::shared_ptr<singleton> createInstance();
    singleton(const singleton&) = delete;
    void operator=(const singleton &) = delete;
};