#ifndef STOPLIMITORDER_H
#define STOPLIMITORDER_H
#include<order.h>

class StopLimitOrder: public Order
{
private:
    double wantingAmount;
    bool isSelling;
public:
    StopLimitOrder(const cryptoType& ct, const double& am,const double &wa, const bool& pR, const tm& date,const bool& s);

    void realizeOrder();
};

#endif // STOPLIMITORDER_H
