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

