#ifndef WALLET_H
#define WALLET_H
#include<iostream>
#include<cryptocurrency.h>
#include<cryptoType.h>
#include<vector>

class Wallet
{
    private:
    double myUSD=0;
    std::vector<Cryptocurrency> myCryptocurrency;

    public:
    Wallet();

    Wallet(const double& money, const std::vector<Cryptocurrency>& cryptos);

    double getMyUSD();

    void addUSD(const double& additionalUSD);
};

#endif // WALLET_H
