#include "stopmarketorder.h"

StopMarketOrder::StopMarketOrder(const cryptoType& ct, const double& am,const double &wa, const bool& pR, const tm& date,const bool& s):
    Order(ct,am, pR, date), wantingAmount(wa), isSelling(s){}

void StopMarketOrder::print(std::ostream& os) const
{
    std::string pRealised;

    partialRealised == true ? pRealised ="yes": pRealised = "no";
    std::string name = "SMO";

    std::string sellOrBuy;
    isSelling == true ? sellOrBuy ="sell": sellOrBuy = "buy";

    os<<name<<","<<cType<<","<<offeringAmount<<","<<wantingAmount<<","<<pRealised<<","<<sellOrBuy<<","<<creationDate.tm_mday<<"."<<creationDate.tm_mon<<"."<<creationDate.tm_year;
}

std::string StopMarketOrder::getOrderType()
{
    return "SMO";
}

bool StopMarketOrder::getIsSelling()
{
    return isSelling;
}

double StopMarketOrder::getWantingAmount()
{
    return wantingAmount;
}
