#include "exchange.h"

Exchange::Exchange(){
}

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

void Exchange::setDate(const int& day, const int& month, const int& year)
{
    date.tm_mday = day;
    date.tm_mon = month;
    date.tm_year = year;
}

User& Exchange::getUser()
{
    return loggedUser;
}

















