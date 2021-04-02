#ifndef USER_H
#define USER_H

#include<iostream>
#include<wallet.h>

class User
{   private:
    std::string firstName;
    std::string lastName;
    std::string email;
    Wallet myWallet;

public:
    User(std::string fn, std::string ln, std::string mail, Wallet wallet);

    std::string getFirstName();

    std::string getLastName();

    std::string getEmail();

    bool comparePaswords(std::string passwordToCompare);

    bool compareEmails(std::string mailToCompare);

    void createPassword(std::string password);

};

#endif // USER_H
