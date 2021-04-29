#ifndef MARKETORDERBUY_H
#define MARKETORDERBUY_H
#include<order.h>

class MarketOrderBuy: public Order
{
public:
    MarketOrderBuy(const cryptoType& ct, const double& am, const bool& pR, const tm& date);

    void realizeOrder();
};

#endif // MARKETORDERBUY_H
