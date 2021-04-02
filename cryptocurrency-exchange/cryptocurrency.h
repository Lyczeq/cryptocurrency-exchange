#ifndef CRYPTOCURRENCY_H
#define CRYPTOCURRENCY_H

#include<iostream>
#include<cryptoType.h>

class Cryptocurrency
{   private:
    cryptoType whatCrypto;
    float amount;

public:
    Cryptocurrency(cryptoType ct, float a);

};

#endif // CRYPTOCURRENCY_H
