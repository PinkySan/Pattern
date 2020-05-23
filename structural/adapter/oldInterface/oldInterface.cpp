#include "oldInterface.h"

namespace foo
{
std::int64_t SumValues::AddValues(const std::int32_t& firstValue, const std::int32_t& secondValue)
{
    return static_cast<std::int64_t>(firstValue) + static_cast<std::int64_t>(secondValue);
}
}