#ifndef CRYPTOCURRENCY_H
#define CRYPTOCURRENCY_H

#include<iostream>
#include<cryptoType.h>

class Cryptocurrency
{   private:
    cryptoType whatCrypto;
    double amount;

public:
    Cryptocurrency(cryptoType ct, double a);

    cryptoType getCryptoType();

    double getAmount();

    void changeAmount(const double &value, const bool& increase);
};

#endif // CRYPTOCURRENCY_H
