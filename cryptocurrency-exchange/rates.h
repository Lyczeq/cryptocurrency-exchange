#ifndef RATES_H
#define RATES_H
#include<iostream>
#include<vector>
#include<fstream>
#include<historicalrate.h>
#include<sstream>
#include<algorithm>
class Rates
{   private:
    std::vector<HistoricalRate> bitcoinRates;
    std::vector<HistoricalRate> ethereumRates;
    std::vector<HistoricalRate> binanceCoinRates;
    std::vector<HistoricalRate> tetherRates;
    std::vector<HistoricalRate> rippleRates;

public:
    Rates();
};

#endif // RATES_H
