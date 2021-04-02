#include "exchange.h"

Exchange::Exchange()
{

}

Exchange::Exchange(UsersList ulist):
    usersList(ulist){}

UsersList Exchange::getUsersList()
{
    return usersList;
}

Rates Exchange::getRates()
{
    return rates;
}

Orderbook Exchange::getOrderbook()
{
    return orderbook;
}

tm Exchange::getDate()
{
    return date;
}
