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

Wallet& User::getWallet()
{
    return myWallet;
}

void User::saveUSDToFile()
{
    std::ofstream userDirectory("users/"+email+"/info.csv");

    if(!userDirectory.is_open())
    {
        //error handler
    }
    else
    {
        userDirectory<<firstName<<","<<lastName<<","<<email<<","<<getWallet().getMyUSD();
    }
    userDirectory.close();
}

void User::saveTransfersToFiles()
{
    std::ofstream sentTransfersDirectory("users/"+email+"/sentTransfers.csv");

    if(!sentTransfersDirectory.is_open())
    {
        //error handler
    }
    else
    {
        for(auto& transfer: myWallet.getReceivedTransfers())
        {   std::string date = transfer->getDate().tm_mday+"."+(transfer->getDate().tm_mon+1)+'.'+transfer->getDate().tm_year;
            sentTransfersDirectory<<date+','+
        }
    }
    sentTransfersDirectory.close();

    std::ofstream receivedTransfersDirectory("users/"+email+"/sentTransfers.csv");
}



















