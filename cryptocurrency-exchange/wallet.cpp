#include "wallet.h"

Wallet::Wallet()
{    
}

Wallet::Wallet(const float& money, const std::vector<Cryptocurrency>& cryptos):
    myMoney(money), myCryptocurrency(cryptos){}

