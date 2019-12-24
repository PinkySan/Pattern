#pragma once
#include <ostream>
#include <string>

enum class messageType
{
    INVALID,
    DATA,
    STATUS,
    UNKNOWN = 99
};

std::ostream &operator<<(std::ostream &os, const messageType &type);

class message
{
  private:
    messageType type = messageType::UNKNOWN;
    std::string data;

  protected:
    message(messageType newType);

  public:
    message() = delete;
    message &setData(const std::string &&newData);
    message &setData(const std::string &newData);
    auto getData() const -> decltype(data);
    auto getType() const -> decltype(type);
};

class invalidMessage : public message
{
  public:
    invalidMessage();
};

class dataMessage : public message
{
  public:
    dataMessage();
};

class statusMessage : public message
{
  public:
    statusMessage();
};