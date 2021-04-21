#ifndef TRANSFER_H
#define TRANSFER_H
#include<cryptoType.h>
#include<iostream>
class Transfer
{
private:
    tm date;
    cryptoType whatCrypto;
    std::string recipient;
    std::string sender;
    double amount;
    std::string title;

public:
    Transfer(const tm dt, const cryptoType& wc, const std::string& rec, const std::string& sen, const double& am, const std::string& title);

    cryptoType getCryptoType();

    double getAmount();

    tm getDate();

    std::string getRecipient();

    std::string getSender();

    std::string getTitle();

};

#endif // TRANSFER_H
