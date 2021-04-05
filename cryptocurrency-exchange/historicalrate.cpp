#include "historicalrate.h"

HistoricalRate::HistoricalRate(const tm& dt, const cryptoType& tCrypto,const float& cValue):
    date(dt), cryptocurrency(tCrypto), value(cValue){}
