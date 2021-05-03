#include "orderbook.h"

Orderbook::Orderbook( UsersList& ul)
{
    for(auto &user: ul.getUsersVector())
    {
        for(auto &order: user.getWallet().getCurrentOrders())
            orders.push_back(order);
    }
}

std::vector<std::shared_ptr<Order>>& Orderbook::getOrders()
{
    return orders;
}

void Orderbook::printOrders()
{
    for(auto &order: orders)
    {
        std::cout<<order<<std::endl;
    }
}
