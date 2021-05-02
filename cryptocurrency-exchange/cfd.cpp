#include "cfd.h"

CFD::CFD(const double& units, double cryptoValue, tm creationDate,cryptoType type, bool sell):
    unitsAmount(units), currentCryptoValue(cryptoValue),creationDate(creationDate) ,chosenCrypto(type), sell(sell){}

double CFD::getUnitsAmount()
{
    return unitsAmount;
}

double CFD::getCurrentCryptoValue()
{
    return currentCryptoValue;
}

cryptoType CFD::getChosenCrypto()
{
    return chosenCrypto;
}

bool CFD::isSelling()
{
    return sell;
}

tm CFD::getCreationDate()
{
    return creationDate;
}

void CFD::setDate(tm newDate)
{
    creationDate = newDate;
}

void CFD::setCurrentCryptoValue(const double& newValue)
{
    currentCryptoValue = newValue;
}



