#ifndef RATES_H
#define RATES_H
#include<iostream>
#include<vector>
#include<fstream>
#include<historicalrate.h>
#include<sstream>
#include<algorithm>
#include<currentrates.h>
class Rates
{   private:
    std::vector<HistoricalRate> bitcoinRates;
    std::vector<HistoricalRate> ethereumRates;
    std::vector<HistoricalRate> binanceCoinRates;
    std::vector<HistoricalRate> tetherRates;
    std::vector<HistoricalRate> rippleRates;
    CurrentRates currentRates;

public:
    Rates();

    float getRateValueByDate(tm date, const cryptoType& whatCrypto);

    void setCurrentRatesByDate(tm currentDate);

    CurrentRates getCurrentRates();

};

#endif // RATES_H
