#ifndef ORDER_H
#define ORDER_H
#include<cryptoType.h>

class Order
{
protected:
    cryptoType cType;
    double offeringAmount;
    bool partialRealised;
    tm creationDate;
    tm executionDate;

public:
    Order(const cryptoType& ct, const double& am, const bool& pR, const tm& date);

    virtual void realizeOrder()=0;

    cryptoType getCryptoCype();

    double getAmount();

    tm getCreationDate();

    tm getExecutionDate();

    void setExecutionDate(const tm & date);


};

#endif // ORDER_H
