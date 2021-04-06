#include "rates.h"
Rates::Rates()
{
//    const std::string ratesDirectory = "rates/";

//    tm date;
//    std::string line="";
//    int day, month, year;
//    std::string valueBufor="" , dateBufor="";
//    double value;

//    std::ifstream tetherRatesFile(ratesDirectory+"tether.csv");
//    if(!tetherRatesFile.is_open())
//    {
//        //obsługa błędu
//    }
//    else{
//        while(std::getline(tetherRatesFile, line))
//        {
//            if(line=="")
//                continue;

//            std::stringstream ss(line);

//            std::getline(ss, dateBufor, '.');
//            day=stoi(dateBufor);
//            date.tm_mday=day;

//            std::getline(ss, dateBufor, '.');
//            month=stoi(dateBufor)-1; //tm_mon has range 0-11
//            date.tm_mon = month;

//            std::getline(ss, dateBufor, ',');
//            year=stoi(dateBufor);
//            date.tm_year=year;

//            std::getline(ss, valueBufor);
//            std::replace(valueBufor.begin(), valueBufor.end(), ',', '.');
//            value=std::stod(valueBufor);

//            HistoricalRate newHistoricalRate(date, Tether, value);

//            tetherRates.push_back(newHistoricalRate);
//        }
//        tetherRatesFile.close();
//    }


    readRatesFromFile("bitcoin.csv", bitcoinRates, Bitcoin);
    readRatesFromFile("ethereum.csv", ethereumRates, Ethereum);
    readRatesFromFile("binanceCoin.csv", binanceCoinRates, BinanceCoin);
    readRatesFromFile("tether.csv", tetherRates, Tether);
    readRatesFromFile("ripple.csv", rippleRates, Ripple);
}

void Rates::readRatesFromFile(const std::string& cryptoFileName, std::vector<HistoricalRate>& cryptoVector, const cryptoType cType)
{
    std::ifstream cryptoFile("rates/"+cryptoFileName);

    tm date;
    std::string line="";
    int day, month, year;
    std::string  valueBufor="",dateBufor="";
    std::string firstValuePart="", secondValuePart="";
    double value;

    if(!cryptoFile.is_open())
    {
        //error handler
    }
    else
    {   std::string line;
        while(std::getline(cryptoFile, line))
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

//            std::getline(ss, valueBufor);
//            std::replace(valueBufor.begin(), valueBufor.end(), ',', '.');
//            value=std::stod(valueBufor);

            std::getline(ss, valueBufor,',');
            firstValuePart = valueBufor;
            firstValuePart.erase(std::remove(firstValuePart.begin(), firstValuePart.end(), '.'), firstValuePart.end());


            std::getline(ss, valueBufor,',');
            secondValuePart = valueBufor;

            value = std::stod(firstValuePart + "." + secondValuePart);

            HistoricalRate newHistoricalRate(date, cType, value);
            cryptoVector.push_back(newHistoricalRate);
        }
    }
    cryptoFile.close();
}

void Rates::setCurrentRatesByDate(tm currentDate)
{
    double currentBitcoinRate = getRateValueByDate(currentDate, Bitcoin);
    double currentEthereumRate = getRateValueByDate(currentDate, Ethereum);
    double currentBinanceCoinRate = getRateValueByDate(currentDate, BinanceCoin);
    double currentTetherRate = getRateValueByDate(currentDate, Tether);
    double currenRippleRate = getRateValueByDate(currentDate, Ripple);

    CurrentRates cr (currentBitcoinRate, currentEthereumRate, currentBinanceCoinRate, currentTetherRate, currenRippleRate);
    currentRates = cr;
}

CurrentRates Rates::getCurrentRates()
{
    return currentRates;
}

double Rates::getRateValueByDate(tm date, const cryptoType& whatCrypto)
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









































