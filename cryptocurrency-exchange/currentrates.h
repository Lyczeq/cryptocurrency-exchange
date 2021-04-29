#ifndef CURRENTRATES_H
#define CURRENTRATES_H
#include<cryptoType.h>

class CurrentRates
{private:
    double bitcoinRate;
    double ethereumRate;
    double binanceCoinRate;
    double tetherRate;
    double rippleRate;
public:
    CurrentRates();
    CurrentRates(const double& bRate,  const double& eRate,const double& biRate,const double& tRate,const double& rRate);

    double getCurrentRate(const cryptoType& ct);


};

#endif // CURRENTRATES_H
