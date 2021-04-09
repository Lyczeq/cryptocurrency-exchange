#include "transfer.h"


Transfer::Transfer(const tm& dt,const cryptoType& wc, const std::string& rec, const std::string& sen, const double& am):
    date(dt), whatCrypto(wc), recipent(rec), sender(sen), amount(am){}

cryptoType Transfer::getCryptoType()
{
    return whatCrypto;
}

double Transfer::getAmount()
{
    return amount;
}

tm Transfer::getDate()
{
    return date;
}

std::string Transfer::getRecipent()
{
    return recipent;
}

std::string Transfer::getSender()
{
    return sender;
}
