#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include<order.h>
#include<stopmarketorder.h>
#include<stoplimitorder.h>
#include<marketorderbuy.h>
#include<marketordersell.h>
#include<vector>
#include<memory>
#include<userslist.h>
class Orderbook
{
private:
    std::vector<std::shared_ptr<Order>> orders;
public:
    Orderbook(UsersList& ul);

    std::vector<std::shared_ptr<Order>>& getOrders();

};

#endif // ORDERBOOK_H
