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

void Cryptocurrency::increaseAmount(const double& value)
{
    amount += value;
}
