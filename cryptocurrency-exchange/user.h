#ifndef USER_H
#define USER_H

#include<iostream>
#include<wallet.h>
#include<fstream>
class User
{   private:
    std::string firstName;
    std::string lastName;
    std::string email;
    Wallet myWallet;

public:
    User();

    User(std::string fn, std::string ln, std::string mail, Wallet wallet);

    std::string getFirstName();

    std::string getLastName();

    std::string getEmail();

    Wallet& getWallet();

    void saveUSDToFile();

    void saveTransfersToFiles();

};

#endif // USER_H
