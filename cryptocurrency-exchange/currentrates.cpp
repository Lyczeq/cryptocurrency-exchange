#include "currentrates.h"

CurrentRates::CurrentRates(const float& bRate,  const float& eRate,const float& biRate,const float& tRate,const float& rRate):
    bitcoinRate(bRate), ethereumRate(eRate), binanceCoinRate(biRate), tetherRate(tRate), rippleRate(rRate) {}

CurrentRates::CurrentRates(){}

float CurrentRates::getCurrentRate(const cryptoType& ct)
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
