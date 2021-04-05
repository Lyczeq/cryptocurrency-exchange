#include "exchange.h"

Exchange::Exchange(){
    UsersList newUsersList;
    Rates newRates;

    usersList = newUsersList;
    rates = newRates;
}

Exchange::Exchange(UsersList &ulist, Rates &rt):
    usersList(ulist), rates(rt){}

UsersList& Exchange::getUsersList()
{
    return usersList;
}

Rates& Exchange::getRates()
{
    return rates;
}

Orderbook& Exchange::getOrderbook()
{
    return orderbook;
}

tm Exchange::getDate()
{
    return date;
}

void Exchange::setLoggedUser(const User& user)
{
   loggedUser = user;
}

void Exchange::setDate(const tm& dt)
{
    date = dt;
}
