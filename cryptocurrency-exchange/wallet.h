#ifndef WALLET_H
#define WALLET_H
#include<iostream>
#include<cryptocurrency.h>
#include<cryptoType.h>
#include<vector>
#include<transfer.h>
#include<fstream>
#include<memory>
#include<sstream>
#include<order.h>
#include<marketorderbuy.h>
#include<marketordersell.h>
#include<stoplimitorder.h>
#include<stopmarketorder.h>
#include<cfd.h>

class Wallet
{
    private:
    double myUSD=0;
    std::vector<Cryptocurrency> myCryptocurrency;
    std::vector<Transfer> sentTransfers;
    std::vector<std::shared_ptr<Transfer>> receivedTransfers;
    std::vector<std::shared_ptr<Order>> currentOrders;
    std::vector<std::shared_ptr<Order>> historicalOrders;
    std::vector<CFD> openedCFDs;
    std::vector<CFD> closedCFDs;

    public:
    Wallet();

    Wallet(const double& money, const std::vector<std::shared_ptr<Transfer>>& recTransfers );

    double& getMyUSD();

    void addUSD(const double& additionalUSD);

    bool realizeTransfer(const cryptoType& type, const double& value);

    void receiveTransfer(std::shared_ptr<Transfer> &transfer);

    void addTransferToTransfers(const Transfer& transfer);

    std::vector<std::shared_ptr<Transfer>> getReceivedTransfers();

    std::vector<Transfer>& getSentTransfers();

    void setMyCryptocurrency(const std::vector<Cryptocurrency>& cryptos);

    void setSentTransfers(const std::vector<Transfer> transfers);

    void pushReceivedTransfer(std::shared_ptr<Transfer> recTransfer);

    std::vector<Cryptocurrency>& getMyCryptocurrency();

    void loadUserGoods(const std::string& email );

    void loadCryptoFromFile(const std::string& email);

    void loadSentTransfersFromFile(const std::string& email);

    double getAmountOfCryptocurrency(const cryptoType& type);

    std::vector<std::shared_ptr<Order>>& getCurrentOrders();

    std::vector<std::shared_ptr<Order>>& getHistoricalOrders();

    std::vector<CFD>& getOpenedCFDs();

    std::vector<CFD>& getClosedCFDs();

    void loadCLosedCFDs(const std::string& email);

    void loadOpenedCFDs(const std::string& email);

    void loadCurrentOrders(const std::string& email);

    void loadHistoricalOrders(const std::string& email);

};

#endif // WALLET_H
