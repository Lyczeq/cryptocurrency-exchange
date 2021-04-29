#include "marketordersell.h"

MarketOrderSell::MarketOrderSell(const cryptoType& ct, const double& am, const bool& pR, const tm& date):
    Order(ct, am, pR,  date){}

void MarketOrderSell::realizeOrder()
{
}
