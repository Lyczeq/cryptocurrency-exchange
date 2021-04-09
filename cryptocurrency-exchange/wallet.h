#ifndef WALLET_H
#define WALLET_H
#include<iostream>
#include<cryptocurrency.h>
#include<cryptoType.h>
#include<vector>
#include<transfer.h>
#include<fstream>
#include<memory>

class Wallet
{
    private:
    double myUSD=0;
    std::vector<Cryptocurrency> myCryptocurrency;
    std::vector<Transfer> sentTransfers;
    std::vector<std::shared_ptr<Transfer>> receivedTransfers;

    public:
    Wallet();

    Wallet(const double& money, const std::vector<Cryptocurrency>& cryptos);

    double getMyUSD();

    void addUSD(const double& additionalUSD);

    bool realizeTransfer(const cryptoType& type, const double& value);

    void saveCryptocurrencyToFile(const std::string& userEmail);

    void receiveTransfer(std::shared_ptr<Transfer> &transfer);

    void addTransferToTransfers(const Transfer& transfer);

    std::vector<std::shared_ptr<Transfer>> getReceivedTransfers();

    std::vector<Transfer> getSentTransfers();
};

#endif // WALLET_H
