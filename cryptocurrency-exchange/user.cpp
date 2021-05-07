#include "user.h"
User::User(){}

User::User(std::string fn, std::string ln, std::string mail,const Wallet& wallet):
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
        return;
    }
    else
    {
        userDirectory<<firstName<<","<<lastName<<","<<email<<","<<getWallet().getMyUSD();
    }
    userDirectory.close();
}

void User::saveSentTransfersToFile()
{
    saveCryptoFile();

    std::ofstream sentTransfersDirectory("users/"+email+"/sentTransfers.csv");

    if(!sentTransfersDirectory.is_open())
    {
        return;
    }
    else
    {
        for(auto& transfer: myWallet.getSentTransfers())
        {   std::shared_ptr<tm> datePtr = std::make_shared<tm> (transfer.getDate());
            std::string day = std::to_string(datePtr->tm_mday);
            std::string month = std::to_string(datePtr->tm_mon+1);
            std::string year = std::to_string(datePtr->tm_year);
            sentTransfersDirectory<<day<<'.'<<month<<'.'<<year<<','<<transfer.getRecipient()<<','<<transfer.getSender()<<','<<transfer.getCryptoType()<<','<<transfer.getAmount()<<','<<transfer.getTitle()<<std::endl;
        }
    }
    sentTransfersDirectory.close();
}

void User::saveOpenedCFDsToFile()
{
    std::ofstream CFDDirectory("users/"+email+"/OpenedCFDs.csv");

    if(!CFDDirectory.is_open())
    {
       return;
    }
    else
    {
        for(auto& cfd: myWallet.getOpenedCFDs())
        {
            std::string sellBufor;
            cfd.isSelling()==true? sellBufor="sell": sellBufor="buy";
            std::string dateToSave = std::to_string(cfd.getCreationDate().tm_mday)+"."+ std::to_string(cfd.getCreationDate().tm_mon)+"."+ std::to_string(cfd.getCreationDate().tm_year);
            CFDDirectory<<dateToSave<<","<<cfd.getUnitsAmount()<<","<<cfd.getCurrentCryptoValue()<<","<<cfd.getChosenCrypto()<<","<<sellBufor<<std::endl;
        }
    }
    CFDDirectory.close();
}

void User::saveClosedCFDsToFile()
{
    std::ofstream CFDDirectory("users/"+email+"/ClosedCFDs.csv");

    if(!CFDDirectory.is_open())
    {
        return;
    }
    else
    {
        for(auto& cfd: myWallet.getClosedCFDs())
        {
            std::string sellBufor;
            cfd.isSelling()==true? sellBufor="sell": sellBufor="buy";
            std::string dateToSave = std::to_string(cfd.getCreationDate().tm_mday)+"."+ std::to_string(cfd.getCreationDate().tm_mon)+"."+ std::to_string(cfd.getCreationDate().tm_year);
            CFDDirectory<<dateToSave<<","<<cfd.getUnitsAmount()<<","<<cfd.getCurrentCryptoValue()<<","<<cfd.getChosenCrypto()<<","<<sellBufor<<std::endl;
        }
    }
    CFDDirectory.close();
}

void User::saveCryptoFile()
{
    std::ofstream cryptoFileDirectory("users/"+email+"/cryptocurrency.csv");

    if(!cryptoFileDirectory.is_open())
    {
        return;
    }
    else
    {
        for(auto& myCrypto: myWallet.getMyCryptocurrency())
        {
            cryptoFileDirectory<<myCrypto.getCryptoType()<<','<<myCrypto.getAmount()<<std::endl;
        }
    }
    cryptoFileDirectory.close();
}

void User::saveCurrentOrders()
{
    std::ofstream currentOrdersDirectory("users/"+email+"/CurrentOrders.csv");

    if(!currentOrdersDirectory.is_open())
    {
        return;
    }
    else
    {
     for(auto &currentOrder : myWallet.getCurrentOrders())
     {
         currentOrdersDirectory<<currentOrder<<std::endl;
     }
    }
    currentOrdersDirectory.close();
}

void User::saveHistoricalOrders()
{
    std::ofstream historicalOrdersDirectory("users/"+email+"/HistoricalOrders.csv");

    if(!historicalOrdersDirectory.is_open())
    {
        return;
    }
    else
    {
     for(auto &historicalOrder : myWallet.getHistoricalOrders())
     {
         historicalOrdersDirectory<<historicalOrder<<","<<historicalOrder->getExecutionDate().tm_mday<<"."<<historicalOrder->getExecutionDate().tm_mon<<"."<<historicalOrder->getExecutionDate().tm_year<<std::endl;
     }
    }
    historicalOrdersDirectory.close();
}









