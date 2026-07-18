//If this header is imported twice or even indirectly only compile one definition
#pragma once

//fixed width integers
#include <cstdint>

namespace ob{
    using OrderID = uint16_t;
    using Price = int64_t;
    using Qty = int64_t;

    struct order
    {
        OrderID id;
        Price price;
        Qty qty;
        bool is_buy;
    };
}
