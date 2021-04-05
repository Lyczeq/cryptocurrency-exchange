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
    User loggedUser;

public:
    Exchange();

    Exchange(UsersList& uList, Rates& rt);

    UsersList& getUsersList ();

    Orderbook& getOrderbook ();

    Rates& getRates ();

    tm getDate ();

    void setLoggedUser(const User& user);

    void setDate(const tm& dt);
};

#endif // EXCHANGE_H
