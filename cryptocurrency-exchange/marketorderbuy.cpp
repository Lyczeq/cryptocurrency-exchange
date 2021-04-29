#include "marketorderbuy.h"

MarketOrderBuy::MarketOrderBuy(const cryptoType& ct, const double& am, const bool& pR, const tm& date):
    Order(ct, am, pR,  date){}

void MarketOrderBuy::realizeOrder()
{
}
