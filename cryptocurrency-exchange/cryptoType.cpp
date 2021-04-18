#include<cryptoType.h>

cryptoType intToCryptoType(const int& value )
{
    switch (value) {
    case 0:
        return Bitcoin;
    case 1:
        return Ethereum;
    case 2:
        return BinanceCoin;
    case 3:
        return Tether;
    case 4:
        return Ripple;
    }
}

cryptoType stringToCryptoType(const std::string& crypto)
{
    if(crypto == "Bitcoin")
        return Bitcoin;
    else if( crypto == "Ethereum")
        return Ethereum;
    else if( crypto == "Binance Coin")
        return BinanceCoin;
    else if( crypto == "Tether")
        return Tether;
    else if( crypto == "Ripple")
        return Ripple;
}

