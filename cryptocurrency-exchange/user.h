#ifndef USER_H
#define USER_H

#include<iostream>
#include<wallet.h>
#include<fstream>
#include<sstream>
class User
{   private:
    std::string firstName;
    std::string lastName;
    std::string email;
    Wallet myWallet;

public:
    User();

    User(std::string fn, std::string ln, std::string mail,const  Wallet& wallet);

    std::string getFirstName();

    std::string getLastName();

    std::string getEmail();

    Wallet& getWallet();

    void saveUSDToFile();

    void saveReceivedTransfersToFile();

    void saveSentTransfersToFile();

    void fulfillWallet();

    std::vector<Cryptocurrency> loadCryptoFromFile();

    std::vector<Transfer> loadSentTransfersFromFile();

    void saveCryptoFile();
};

#endif // USER_H
