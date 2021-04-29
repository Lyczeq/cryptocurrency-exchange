#include "stoplimitorder.h"

StopLimitOrder::StopLimitOrder(const cryptoType& ct, const double& am, const double &wa, const bool& pR,const tm& date,const bool& s):
    Order(ct,am, pR, date), wantingAmount(wa), isSelling(s){}

void StopLimitOrder::realizeOrder()
{

}
