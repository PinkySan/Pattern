#pragma once

#include <cstdint>

namespace foo
{

class SumValues
{
    public:
        static std::int64_t AddValues(const std::int32_t& firstValue, const std::int32_t& secondValue);
};
}