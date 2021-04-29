#include "orderbook.h"

Orderbook::Orderbook(){}

std::vector<std::shared_ptr<Order>>& Orderbook::getOrders()
{
    return orders;
}
