#ifndef MARKETORDERSELL_H
#define MARKETORDERSELL_H
#include<order.h>

class MarketOrderSell: public Order
{
public:
    MarketOrderSell(const cryptoType& ct, const double& am, const bool& pR, const tm& date);

    void realizeOrder();
};

#endif // MARKETORDERSELL_H
