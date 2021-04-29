#include "marketorder.h"

MarketOrder::MarketOrder(const cryptoType& ct, const double& am, const bool& pR,const tm& date,const bool& s):
    Order(ct,am, pR, date, s){}
