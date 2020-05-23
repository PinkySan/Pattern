#include "interfaceAdapter.h"
#include <oldInterface.h>

namespace adapter
{

std::int64_t SumValuesAdapter::AddValues(const std::vector<std::int32_t>& values)
{
    std::int64_t sum{0};
    for (const std::int32_t& value : values)
    {
        sum +=  foo::SumValues::AddValues(value,0);
    }
    return sum;
}
}