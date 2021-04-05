#include "historicalrate.h"

HistoricalRate::HistoricalRate(const tm& dt, const cryptoType& tCrypto,const float& cValue):
    date(dt), cryptocurrency(tCrypto), value(cValue){}

tm HistoricalRate::getDate()
{
    return date;
}

float HistoricalRate::getValue()
{
    return value;
}

bool HistoricalRate::compareDates(tm& dateToComparise)
{
     return ((date.tm_year ==dateToComparise.tm_year) && (date.tm_mon ==dateToComparise.tm_mon) && (date.tm_mday ==dateToComparise.tm_mday) );
}
