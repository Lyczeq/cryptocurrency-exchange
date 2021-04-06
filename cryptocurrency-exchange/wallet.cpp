#include "wallet.h"

Wallet::Wallet()
{    
}

Wallet::Wallet(const double& money, const std::vector<Cryptocurrency>& cryptos):
    myUSD(money), myCryptocurrency(cryptos){}

double Wallet::getMyUSD()
{
    return myUSD;
}

void Wallet::addUSD(const double& additionalUSD)
{
    myUSD += additionalUSD;
}

