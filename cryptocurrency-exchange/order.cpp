#include "order.h"

Order::Order(const cryptoType& ct, const double& am, const bool& pR,const tm& date):
    cType(ct), offeringAmount(am), partialRealised(pR), creationDate(date){
}

void Order::setExecutionDate(const tm & date)
{
    executionDate = date;
}
