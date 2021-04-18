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

    void setDate(const int& day, const int& month, const int& year);

    void setLoggedUser(const User& user);

    void setDate(const tm& dt);

    User& getUser();
};

#endif // EXCHANGE_H
