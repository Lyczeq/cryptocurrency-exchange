#ifndef MARKETORDERBUY_H
#define MARKETORDERBUY_H
#include<order.h>

class MarketOrderBuy: public Order
{
public:
    MarketOrderBuy(const cryptoType& ct, const double& am, const bool& pR, const tm& date);

    void print(std::ostream& os) const;

    std::string getOrderType();

};

#endif // MARKETORDERBUY_H
