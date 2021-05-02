#ifndef CFD_H
#define CFD_H
#include<cryptoType.h>

class CFD
{
private:
    double unitsAmount;
    double currentCryptoValue;
    tm creationDate;
    cryptoType chosenCrypto;
    bool sell; // if a user choose sell(short) = true, either sell=false

public:
    CFD(const double& units, double cryptoValue, tm creationDate,cryptoType type, bool sell);

    double getUnitsAmount();

    double getCurrentCryptoValue();

    cryptoType getChosenCrypto();

    bool isSelling();

    tm getCreationDate();

    void setDate(tm newDate);

    void setCurrentCryptoValue(const double& newValue);
};

#endif // CFD_H
