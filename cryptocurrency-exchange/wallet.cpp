#include "wallet.h"

Wallet::Wallet()
{    
}

Wallet::Wallet(const double& money, const std::vector<std::shared_ptr<Transfer>>& recTransfers):
    myUSD(money), receivedTransfers(recTransfers){}

double Wallet::getMyUSD()
{
    return myUSD;
}

std::vector<Cryptocurrency>& Wallet::getMyCryptocurrency()
{
    return myCryptocurrency;
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
    sentTransfers.push_back(std::move(transfer));
}

std::vector<std::shared_ptr<Transfer>> Wallet::getReceivedTransfers()
{
    return receivedTransfers;
}

std::vector<Transfer>& Wallet::getSentTransfers()
{
    return sentTransfers;
}

void Wallet::setMyCryptocurrency(const std::vector<Cryptocurrency>& cryptos)
{
    myCryptocurrency = cryptos;
}

void Wallet::setSentTransfers(const std::vector<Transfer> transfers)
{
    sentTransfers = transfers;
}

void Wallet::pushReceivedTransfer(std::shared_ptr<Transfer> recTransfer)
{
    receivedTransfers.push_back(recTransfer);
}

 void Wallet::loadUserGoods(const std::string& email)
 {
     loadCryptoFromFile(email);
     loadSentTransfersFromFile(email);
 }

void Wallet::loadCryptoFromFile(const std::string& email)
 {
     const std::string userCryptoFileName = "users/"+email+"/cryptocurrency.csv";

     std::ifstream userCryptoFile(userCryptoFileName);

     if(!userCryptoFile.is_open())
     {
         //error handler
     }
     else
     {  std::string line;
         while(std::getline(userCryptoFile, line))
         {
             if(line=="")
                 continue;

             double amount;
             cryptoType whatCrypto;
             std::stringstream ss(line);
             getline(ss,line,',');
             whatCrypto = intToCryptoType(std::stoi(line));

             getline(ss,line);
             amount = std::stod(line);
             Cryptocurrency newCrypto (whatCrypto, amount);

             myCryptocurrency.push_back(newCrypto);
         }
     }
    userCryptoFile.close();
 }

void Wallet::loadSentTransfersFromFile(const std::string& email)
 {
     const std::string transfersFileDictionary = "users/"+email+"/sentTransfers.csv";

     std::ifstream transfersFile(transfersFileDictionary);

     std::vector<Transfer> newvecTransfer;
     sentTransfers = newvecTransfer;

     if(!transfersFile.is_open())
     {
         //error handler
     }
     else
     {
         std::string line;
         while(std::getline(transfersFile, line))
         {
             if(line=="")
                 continue;

             double amount;
             std::string sender, recipient, title;
             tm date;
             cryptoType ct;
             std::stringstream ss(line);

             getline(ss,line,'.');
             date.tm_mday = std::stoi(line);

             getline(ss,line,'.');
             date.tm_mon = std::stoi(line)-1; // tm mon has range 0-11

             getline(ss,line,',');
             date.tm_year = std::stoi(line);

             getline(ss,line,',');
             sender = line;

             getline(ss,line,',');
             recipient = line;

             getline(ss,line,',');
             ct = intToCryptoType(std::stoi(line));

             getline(ss,line,',');
             amount = std::stod(line);

             getline(ss,line,',');
             title = line;

             Transfer newTransfer (date, ct, recipient, sender,amount, title);
             sentTransfers.push_back(std::move(newTransfer));
         }
     }
     transfersFile.close();
 }





























