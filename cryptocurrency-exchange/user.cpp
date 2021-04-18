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
        //error handler
    }
    else
    {
        userDirectory<<firstName<<","<<lastName<<","<<email<<","<<getWallet().getMyUSD();
    }
    userDirectory.close();
}

//void User::saveReceivedTransfersToFile()
//{
//    saveCryptoFile();

//    std::ofstream receivedTransfersDirectory("users/"+email+"/receivedTransfers.csv");

//    if(!receivedTransfersDirectory.is_open())
//    {
//        //error handler
//    }
//    else
//    {
//        for(auto& transfer: myWallet.getReceivedTransfers())
//        {

////            std::shared_ptr<tm> datePtr = std::make_shared<tm> (transfer->getDate());
////            std::string day = std::to_string(datePtr->tm_mday);
////            std::string month = std::to_string(datePtr->tm_mon+1);
////            std::string year = std::to_string(datePtr->tm_year);

//            std::string day = std::to_string(transfer->getDate().tm_mday);
//            std::string month = std::to_string(transfer->getDate().tm_mon+1);
//            std::string year = std::to_string(transfer->getDate().tm_year);
////            std::cout<<"Rec Transfer"<<day<<'.'<<month<<'.'<<year<<','<<transfer->getRecipient()<<','<<transfer->getSender()<<','<<transfer->getCryptoType()<<','<<transfer->getAmount()<<','<<transfer->getTitle()<<std::endl;
//            receivedTransfersDirectory<<day<<'.'<<month<<'.'<<year<<','<<transfer->getRecipient()<<','<<transfer->getSender()<<','<<transfer->getCryptoType()<<','<<transfer->getAmount()<<','<<transfer->getTitle()<<std::endl;
//        }
//    }
//    receivedTransfersDirectory.close();
//}

void User::saveSentTransfersToFile()
{
    saveCryptoFile();

    std::ofstream sentTransfersDirectory("users/"+email+"/sentTransfers.csv");

    if(!sentTransfersDirectory.is_open())
    {
        //error handler
    }
    else
    {
        for(auto& transfer: myWallet.getSentTransfers())
        {
        std::string day = std::to_string(transfer.getDate().tm_mday);
        std::string month = std::to_string(transfer.getDate().tm_mon+1);
        std::string year = std::to_string(transfer.getDate().tm_year);
//        std::cout<<"SentTransfer"<<day<<'.'<<month<<'.'<<year<<','<<transfer.getRecipient()<<','<<transfer.getSender()<<','<<transfer.getCryptoType()<<','<<transfer.getAmount()<<','<<transfer.getTitle()<<std::endl;
        }


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

void User::saveCryptoFile()
{
    std::ofstream cryptoFileDirectory("users/"+email+"/cryptocurrency.csv");

    if(!cryptoFileDirectory.is_open())
    {
        //error handler
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

//void User::fulfillWallet()
//{
//    getWallet().setMyCryptocurrency(loadCryptoFromFile());

//    getWallet().setSentTransfers(loadSentTransfersFromFile());

////    for(auto& transfer: myWallet.getSentTransfers())
////    {
////        std::cout<<"fulfillwalletTransfer"<<transfer.getDate().tm_mday<<'.'<<transfer.getDate().tm_mon<<"."<<transfer.getDate().tm_year<<','<<transfer.getRecipient()<<','<<transfer.getSender()<<','<<transfer.getCryptoType()<<','<<transfer.getAmount()<<','<<transfer.getTitle()<<std::endl;
////    }

//}























