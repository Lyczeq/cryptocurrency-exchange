#ifndef HISTORICALRATE_H
#define HISTORICALRATE_H
#include<iostream>
#include<cryptoType.h>
#include<ctime>
class HistoricalRate
{   private:
    cryptoType cryptocurrency;
    tm date;
    float value;

public:
    HistoricalRate(const tm& dt, const cryptoType& tCrypto,const float& val);

    tm getDate();

    float getValue();

    bool compareDates(tm& dateToComparise);
};

#endif // HISTORICALRATE_H
