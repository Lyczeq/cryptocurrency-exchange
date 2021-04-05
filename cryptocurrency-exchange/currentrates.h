#ifndef CURRENTRATES_H
#define CURRENTRATES_H
#include<cryptoType.h>

class CurrentRates
{private:
    float bitcoinRate;
    float ethereumRate;
    float binanceCoinRate;
    float tetherRate;
    float rippleRate;
public:
    CurrentRates();
    CurrentRates(const float& bRate,  const float& eRate,const float& biRate,const float& tRate,const float& rRate);

    float getCurrentRate(const cryptoType& ct);
};

#endif // CURRENTRATES_H
