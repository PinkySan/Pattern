#pragma once
#include <cstdint>
#include <vector>

namespace adapter
{

class SumValuesAdapter
{
    public:
        static std::int64_t AddValues(const std::vector<std::int32_t>& values);
};
}