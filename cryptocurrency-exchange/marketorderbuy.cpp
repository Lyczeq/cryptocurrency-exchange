#include "marketorderbuy.h"

MarketOrderBuy::MarketOrderBuy(const cryptoType& ct, const double& am, const bool& pR, const tm& date):
    Order(ct, am, pR,  date){}

void MarketOrderBuy::print(std::ostream& os) const
{
    std::string pRealised;

    partialRealised == true ? pRealised ="yes": pRealised = "no";
    std::string name = "MOB";

    os<<name<<","<<cType<<","<<offeringAmount<<","<<pRealised<<","<<creationDate.tm_mday<<"."<<creationDate.tm_mon<<"."<<creationDate.tm_year;
}

std::string MarketOrderBuy::getOrderType()
{
    return "MOB";
}
