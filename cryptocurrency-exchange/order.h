#ifndef ORDER_H
#define ORDER_H
#include<cryptoType.h>
#include<memory>
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

    virtual void print(std::ostream& os) const =0;

    cryptoType getCryptoCype();

    double getAmount();

    tm getCreationDate();

    tm getExecutionDate();

    bool isPartialRealised();

    void setExecutionDate(const tm & date);

    friend std::ostream& operator<<(std::ostream& os, std::shared_ptr<Order> order)
    {
     order->print(os);
     return os;
    }


};

#endif // ORDER_H
