#include "rates.h"
Rates::Rates()
{
    const std::string ratesDirectory = "rates/";

    tm date;
    std::string line="";
    int day, month, year;
    std::string valueBufor="" , dateBufor="";
    float value;

    std::ifstream tetherRatesFile(ratesDirectory+"tether.csv");
    if(!tetherRatesFile.is_open())
    {
        //obsługa błędu
    }
    else{
        while(std::getline(tetherRatesFile, line))
        {
            if(line=="")
                continue;

            std::stringstream ss(line);

            std::getline(ss, dateBufor, '.');
            day=stoi(dateBufor);
            date.tm_mday=day;

            std::getline(ss, dateBufor, '.');
            month=stoi(dateBufor)-1; //tm_mon has range 0-11
            date.tm_mon = month;

            std::getline(ss, dateBufor, ',');
            year=stoi(dateBufor);
            date.tm_year=year;

            std::getline(ss, valueBufor);
            std::replace(valueBufor.begin(), valueBufor.end(), ',', '.');
            value=std::stof(valueBufor);

            HistoricalRate newHistoricalRate(date, Tether, value);

            tetherRates.push_back(newHistoricalRate);
        }
        tetherRatesFile.close();
    }
}

void Rates::setCurrentRatesByDate(tm currentDate)
{
    float currentBitcoinRate = getRateValueByDate(currentDate, Bitcoin);
    float currentEthereumRate = getRateValueByDate(currentDate, Ethereum);
    float currentBinanceCoinRate = getRateValueByDate(currentDate, BinanceCoin);
    float currentTetherRate = getRateValueByDate(currentDate, Tether);
    float currenRippleRate = getRateValueByDate(currentDate, Ripple);

    CurrentRates cr (currentBitcoinRate, currentEthereumRate, currentBinanceCoinRate, currentTetherRate, currenRippleRate);
    currentRates = cr;
}

CurrentRates Rates::getCurrentRates()
{
    return currentRates;
}

float Rates::getRateValueByDate(tm date, const cryptoType& whatCrypto)
{
    switch (whatCrypto) {
    case Bitcoin:
    {
        for(auto & rate: bitcoinRates)
        {
            if(rate.compareDates(date))
                return rate.getValue();
        }
    }
    case Ethereum:
    {
        for(auto & rate: ethereumRates)
        {
            if(rate.compareDates(date))
                return rate.getValue();
        }
    }
    case BinanceCoin:
    {
        for(auto & rate: binanceCoinRates)
        {
            if(rate.compareDates(date))
                return rate.getValue();
        }
    }
    case Tether:
    {
        for(auto & rate: tetherRates)
        {
            if(rate.compareDates(date))
                return rate.getValue();
        }
    }
    case Ripple:
    {
        for(auto & rate: rippleRates)
        {
            if(rate.compareDates(date))
                return rate.getValue();
        }
    }
    default:
    {
        //error handler
    }
    }
}









































