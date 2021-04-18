#include "transfer.h"


Transfer::Transfer(const tm dt,const cryptoType& wc, const std::string& rec, const std::string& sen, const double& am, const std::string & title):
    date(dt), whatCrypto(wc), recipient(rec), sender(sen), amount(am), title(title){}

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

std::string Transfer::getRecipient()
{
    return recipient;
}

std::string Transfer::getSender()
{
    return sender;
}

std::string Transfer::getTitle()
{
    return title;
}
