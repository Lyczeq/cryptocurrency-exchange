#include "cryptocurrency.h"

Cryptocurrency::Cryptocurrency(cryptoType ct, double a ):
    whatCrypto(ct), amount(a){}

cryptoType Cryptocurrency::getCryptoType()
{
    return whatCrypto;
}

double Cryptocurrency::getAmount()
{
    return amount;
}

void Cryptocurrency::changeAmount(const double &value, const bool& increase)
{
    increase? amount += value : amount -= value;
}
