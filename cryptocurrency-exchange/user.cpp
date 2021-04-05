#include "user.h"
User::User(){}

User::User(std::string fn, std::string ln, std::string mail, Wallet wallet):
    firstName(fn), lastName(ln), email(mail), myWallet(wallet){}

std::string User::getFirstName()
{
    return firstName;
}
std::string User::getLastName()
{
    return lastName;
}
std::string User::getEmail()
{
    return email;
}

