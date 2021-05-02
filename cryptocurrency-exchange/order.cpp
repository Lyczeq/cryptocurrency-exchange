#include "order.h"

Order::Order(const cryptoType& ct, const double& am, const bool& pR,const tm& date):
    cType(ct), offeringAmount(am), partialRealised(pR), creationDate(date){
}

void Order::setExecutionDate(const tm & date)
{
    executionDate = date;
}

cryptoType Order::getCryptoCype()
{
    return cType;
}

double Order::getAmount()
{
    return offeringAmount;
}

tm Order::getCreationDate()
{
    return creationDate;
}

bool Order::isPartialRealised()
{
    return partialRealised;
}

tm Order::getExecutionDate()
{
    return executionDate;
}
