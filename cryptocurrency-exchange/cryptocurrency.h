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

    void increaseAmount(const double& value);
};

#endif // CRYPTOCURRENCY_H
