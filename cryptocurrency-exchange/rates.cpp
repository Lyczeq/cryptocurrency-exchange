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
    std::cout<<line<<std::endl;
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
