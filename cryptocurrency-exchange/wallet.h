#ifndef WALLET_H
#define WALLET_H
#include<iostream>
#include<cryptocurrency.h>
#include<cryptoType.h>
#include<vector>

class Wallet
{
    private:

    float myMoney=0;
    std::vector<Cryptocurrency> myCryptocurrency;

    public:

    Wallet();

    Wallet(const float& money, const std::vector<Cryptocurrency>& cryptos);
};

#endif // WALLET_H
