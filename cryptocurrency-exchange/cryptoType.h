#ifndef CRYPTOTYPE_H
#define CRYPTOTYPE_H
enum cryptoType{
    Bitcoin = 0,
    Ethereum = 1,
    Chiliz = 2,
    Tether = 3,
    Dogecoin = 4,
};

cryptoType intToCryptoType(const int& value );

#endif // CRYPTOTYPE_H
