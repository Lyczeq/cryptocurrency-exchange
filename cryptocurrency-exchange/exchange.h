#include<ctime>
#include<iostream>
#include<userslist.h>
#include<orderbook.h>
#include<rates.h>
#ifndef EXCHANGE_H
#define EXCHANGE_H

class Exchange
{   private:
    tm date;
    UsersList usersList;
    Orderbook orderbook;
    Rates rates;

public:
    Exchange();

    Exchange(UsersList uList);

    UsersList getUsersList ();

    Orderbook getOrderbook ();

    Rates getRates ();

    tm getDate ();
};

#endif // EXCHANGE_H
