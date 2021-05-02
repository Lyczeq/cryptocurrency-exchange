#ifndef STOPMARKETORDER_H
#define STOPMARKETORDER_H

#include<order.h>
class StopMarketOrder: public Order
{
private:
    double wantingAmount;
    bool isSelling;
public:
    StopMarketOrder(const cryptoType& ct, const double& am,const double &wa, const bool& pR, const tm& date,const bool& s);

    void print(std::ostream& os)const ;
};

#endif // STOPMARKETORDER_H
