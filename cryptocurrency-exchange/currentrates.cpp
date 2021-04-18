#include "currentrates.h"

CurrentRates::CurrentRates(const double& bRate,  const double& eRate,const double& biRate,const double& tRate,const double& rRate):
    bitcoinRate(bRate), ethereumRate(eRate), binanceCoinRate(biRate), tetherRate(tRate), rippleRate(rRate) {}

CurrentRates::CurrentRates(){}

double CurrentRates::getCurrentRate(const cryptoType& ct)
{
    switch (ct) {
    case Bitcoin:
        return bitcoinRate;
    case Ethereum:
        return ethereumRate;
    case BinanceCoin:
        return binanceCoinRate;
    case Tether:
        return tetherRate;
    case Ripple:
        return rippleRate;
    }
}
