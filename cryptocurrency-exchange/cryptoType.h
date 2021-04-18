#ifndef CRYPTOTYPE_H
#define CRYPTOTYPE_H
#include<iostream>
enum cryptoType{
    Bitcoin = 0,
    Ethereum = 1,
    BinanceCoin = 2,
    Tether = 3,
    Ripple = 4,
};

cryptoType intToCryptoType(const int& value );

cryptoType stringToCryptoType(const std::string& crypto);

#endif // CRYPTOTYPE_H
