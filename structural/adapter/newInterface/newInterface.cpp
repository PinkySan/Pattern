#include "newInterface.h"

namespace bar
{

std::int64_t SumValues::AddValues(const std::vector<std::int32_t>& values)
{
    std::int64_t sum{0};
    for (const std::int64_t& value : values)
    {
        sum += value;
    }
    return sum;
}
}