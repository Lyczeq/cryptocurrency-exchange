#ifndef TRANSFER_H
#define TRANSFER_H
#include<cryptoType.h>
#include<iostream>
class Transfer
{
private:
    tm date;
    cryptoType whatCrypto;
    std::string recipent;
    std::string sender;
    double amount;

public:
    Transfer(const tm& dt, const cryptoType& wc, const std::string& rec, const std::string& sen, const double& am);

    cryptoType getCryptoType();

    double getAmount();

    tm getDate();

    std::string getRecipent();

    std::string getSender();


};

#endif // TRANSFER_H
