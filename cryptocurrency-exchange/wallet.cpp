#include "wallet.h"

Wallet::Wallet()
{    
}

Wallet::Wallet(const double& money, const std::vector<Cryptocurrency>& cryptos):
    myUSD(money), myCryptocurrency(cryptos){}

double Wallet::getMyUSD()
{
    return myUSD;
}

void Wallet::addUSD(const double& additionalUSD)
{
    myUSD += additionalUSD;
}

bool Wallet::realizeTransfer(const cryptoType& type, const double& value)
{
    for(auto &crypto: myCryptocurrency)
    {
        if(crypto.getCryptoType() == type)
        {
            if (crypto.getAmount() >= value)
            {
                crypto.changeAmount(value, false);
                return true;
            }
            return false;
        }
    }
    return false;
}

void Wallet::saveCryptocurrencyToFile(const std::string& userEmail)
{
    std::ofstream cryptoFile ("users/"+userEmail + "/cryptocurrency.csv");

    if(!cryptoFile.is_open())
    {
        //error handler
    }
    else
    {
        for(auto& crypto: myCryptocurrency)
            cryptoFile << crypto.getCryptoType()+','+crypto.getAmount()<<std::endl;
    }
    cryptoFile.close();
}

void Wallet::receiveTransfer(std::shared_ptr<Transfer>& transfer)
{
    bool transferReceived = false;

    for(auto &crypto: myCryptocurrency)
    {
        if(crypto.getCryptoType() == transfer->getCryptoType())
        {
            crypto.changeAmount(transfer->getAmount(), true);
            transferReceived =true;
        }
    }

    if(!transferReceived)
    {
        Cryptocurrency newCryptocurrency(transfer->getCryptoType(), transfer->getAmount());
        myCryptocurrency.push_back(newCryptocurrency);
    }
    receivedTransfers.push_back(transfer);
}

void Wallet::addTransferToTransfers(const Transfer& transfer)
{
    sentTransfers.push_back(transfer);
}

std::vector<std::shared_ptr<Transfer>> Wallet::getReceivedTransfers()
{
    return receivedTransfers;
}

std::vector<Transfer> Wallet::getSentTransfers()
{
    return sentTransfers;
}






























