#include "wallet.h"

Wallet::Wallet(){}

Wallet::Wallet(const double& money, const std::vector<std::shared_ptr<Transfer>>& recTransfers):
    myUSD(money), receivedTransfers(recTransfers){}

double& Wallet::getMyUSD()
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

void Wallet::subtractUSD(const double& usdToSubstract)
{
    myUSD -= usdToSubstract;
}



void Wallet::changeValueOfSelectedCrypto(double value, bool increase, cryptoType cType)
{
    bool valueChanged = false;

    for(auto &crypto: myCryptocurrency)
    {
        if(crypto.getCryptoType() == cType)
        {
            crypto.changeAmount(value, increase);
            valueChanged = true;
        }

    }

    if(!valueChanged)
    {
       Cryptocurrency newCrypto(cType, value);
       myCryptocurrency.push_back(newCrypto);
    }

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
     loadOpenedCFDs(email);
     loadCLosedCFDs(email);
     loadHistoricalOrders(email);
     loadCurrentOrders(email);

 }

 void Wallet::loadCLosedCFDs(const std::string& email)
 {
     const std::string closedCFDsFileName = "users/"+email+"/ClosedCFDs.csv";

     std::ifstream closedCFDsFile(closedCFDsFileName);

     if(!closedCFDsFile.is_open())
     {
         //error_handler
     }
     else
     {
      std::string line;

      while(std::getline(closedCFDsFile,line))
      {
          if(line == "")
              continue;

          std::stringstream ss(line);
          double unitsAmount;
          double currentCryptoValue;
          cryptoType whatCrypto;
          std::string sellBufor;
          bool sell;
          tm date;
          getline(ss,line,'.');
          date.tm_mday = std::stoi(line);

          getline(ss,line,'.');
          date.tm_mon = std::stoi(line);

          getline(ss,line,',');
          date.tm_year = std::stoi(line);

          getline(ss,line,',');
          unitsAmount = std::stod(line);

          getline(ss,line,',');
          currentCryptoValue = std::stod(line);

          getline(ss,line,',');
          whatCrypto = intToCryptoType(std::stoi(line));

          getline(ss,line);
          line == "sell" ? sell = true : sell = false;

          CFD newCFD (unitsAmount,currentCryptoValue,date,whatCrypto,sell);

          closedCFDs.push_back(newCFD);
      }
     }
     closedCFDsFile.close();
 }

 void Wallet::loadOpenedCFDs(const std::string& email)
 {
     const std::string openedCFDsFileName("users/"+email+"/OpenedCFDs.csv");

     std::ifstream openedCFDsFile(openedCFDsFileName);

     if(!openedCFDsFile.is_open())
     {
         //error_handler
     }
     else
     {
      std::string line;

      while(std::getline(openedCFDsFile,line))
      {
          if(line == "")
              continue;

          std::stringstream ss(line);
          double unitsAmount;
          double currentCryptoValue;
          cryptoType whatCrypto;
          std::string sellBufor;
          bool sell;
          tm date;

          getline(ss,line,'.');
          date.tm_mday = std::stoi(line);

          getline(ss,line,'.');
          date.tm_mon = std::stoi(line);

          getline(ss,line,',');
          date.tm_year = std::stoi(line);

          getline(ss,line,',');
          unitsAmount = std::stod(line);

          getline(ss,line,',');
          currentCryptoValue = std::stod(line);

          getline(ss,line,',');
          whatCrypto = intToCryptoType(std::stoi(line));

          getline(ss,line);
          line == "sell" ? sell = true : sell = false;

          CFD newCFD (unitsAmount,currentCryptoValue,date,whatCrypto,sell);

          openedCFDs.push_back(newCFD);
      }
     }
     openedCFDsFile.close();
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
             recipient = line;

             getline(ss,line,',');
             sender = line;

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

double Wallet::getAmountOfCryptocurrency(const cryptoType& type){

    for(auto &crypto: myCryptocurrency)
    {
        if(crypto.getCryptoType() == type)
            return crypto.getAmount();
    }
    return 0;
}


std::vector<std::shared_ptr<Order>>& Wallet::getCurrentOrders()
{
 return currentOrders;
}

std::vector<std::shared_ptr<Order>>& Wallet::getHistoricalOrders()
{
    return historicalOrders;
}

std::vector<CFD>& Wallet::getOpenedCFDs()
{
    return openedCFDs;
}

std::vector<CFD>& Wallet::getClosedCFDs()
{
    return closedCFDs;
}

void Wallet::loadCurrentOrders(const std::string &email)
{
    const std::string currentOrdersFileName = "users/"+email+"/CurrentOrders.csv";

    std::ifstream currentOrdersFile(currentOrdersFileName);

    if(!currentOrdersFile.is_open())
    {
        //error_handler
    }
    else
    {
     std::string line;

     while(std::getline(currentOrdersFile,line))
     {
         if(line == "")
             continue;

        std::stringstream ss(line);

        std::string orderName="";
        cryptoType cType;
        double offeringAmount;
        bool partialRealised;
        tm creationDate;
        getline(ss,line,',');

        orderName = line;

        if(orderName == "MOB")
        {
            getline(ss,line,',');
            cType = intToCryptoType(std::stoi(line));

            getline(ss,line,',');
            offeringAmount = std::stod(line);

            getline(ss,line,',');
            line =="yes" ? partialRealised = true : partialRealised = false;

            getline(ss,line,'.');
            creationDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            creationDate.tm_mon = std::stoi(line);

            getline(ss,line);
            creationDate.tm_year = std::stoi(line);

            std::shared_ptr<MarketOrderBuy> marketBuy = std::make_shared<MarketOrderBuy>(cType, offeringAmount, partialRealised, creationDate);

            currentOrders.push_back(marketBuy);
        }
        else if( orderName == "MOS")
        {
            getline(ss,line,',');
            cType = intToCryptoType(std::stoi(line));

            getline(ss,line,',');
            offeringAmount = std::stod(line);

            getline(ss,line,',');
            line =="yes" ? partialRealised = true : partialRealised = false;

            getline(ss,line,'.');
            creationDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            creationDate.tm_mon = std::stoi(line);

            getline(ss,line);
            creationDate.tm_year = std::stoi(line);

            std::shared_ptr<MarketOrderSell> marketSell = std::make_shared<MarketOrderSell>(cType, offeringAmount, partialRealised, creationDate);
            currentOrders.push_back(marketSell);
        }
        else if(orderName == "SLO")
        {

            getline(ss,line,',');
            cType = intToCryptoType(std::stoi(line));

            getline(ss,line,',');
            offeringAmount = std::stod(line);

            getline(ss,line,',');
            double wantingAmount = std::stod(line);

            getline(ss,line,',');
            line =="yes" ? partialRealised = true : partialRealised = false;

            bool sell;
            getline(ss,line,',');
            line == "sell" ? sell = true: sell=false;

            getline(ss,line,'.');
            creationDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            creationDate.tm_mon = std::stoi(line);

            getline(ss,line);
            creationDate.tm_year = std::stoi(line);

            std::shared_ptr<StopLimitOrder> stopLimitOrder = std::make_shared<StopLimitOrder>(cType, offeringAmount,wantingAmount,partialRealised,creationDate,sell);
            currentOrders.push_back(stopLimitOrder);

        }
        else if(orderName == "SMO")
        {
            getline(ss,line,',');
            cType = intToCryptoType(std::stoi(line));

            getline(ss,line,',');
            offeringAmount = std::stod(line);

            getline(ss,line,',');
            double wantingAmount = std::stod(line);

            getline(ss,line,',');
            line =="yes" ? partialRealised = true : partialRealised = false;

            bool sell;
            getline(ss,line,',');
            line == "sell" ? sell = true: sell=false;

            getline(ss,line,'.');
            creationDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            creationDate.tm_mon = std::stoi(line);

            getline(ss,line);
            creationDate.tm_year = std::stoi(line);

            std::shared_ptr<StopMarketOrder> stopMarketOrder = std::make_shared<StopMarketOrder>(cType, offeringAmount,wantingAmount,partialRealised,creationDate,sell);
            currentOrders.push_back(stopMarketOrder);
        }


    }
    }
    currentOrdersFile.close();
}

void Wallet::loadHistoricalOrders(const std::string &email)
{
    const std::string historicalOrdersFileName = "users/"+email+"/HistoricalOrders.csv";

    std::ifstream historicalOrdersFile(historicalOrdersFileName);

    if(!historicalOrdersFile.is_open())
    {
        //error_handler
    }
    else
    {
     std::string line;

     while(std::getline(historicalOrdersFile,line))
     {
         if(line == "")
             continue;

        std::stringstream ss(line);

        std::string orderName="";
        cryptoType cType;
        double offeringAmount;
        bool partialRealised;
        tm creationDate;
        tm executionDate;
        getline(ss,line,',');

        orderName = line;

        if(orderName == "MOB")
        {
            getline(ss,line,',');
            cType = intToCryptoType(std::stoi(line));

            getline(ss,line,',');
            offeringAmount = std::stod(line);

            getline(ss,line,',');
            line =="yes" ? partialRealised = true : partialRealised = false;

            getline(ss,line,'.');
            creationDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            creationDate.tm_mon = std::stoi(line);

            getline(ss,line,',');
            creationDate.tm_year = std::stoi(line);

            getline(ss,line,'.');
            executionDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            executionDate.tm_mon = std::stoi(line);

            getline(ss,line);
            executionDate.tm_year = std::stoi(line);

            std::shared_ptr<MarketOrderBuy> marketBuy = std::make_shared<MarketOrderBuy>(cType, offeringAmount, partialRealised, creationDate);
            marketBuy->setExecutionDate(executionDate);

            historicalOrders.push_back(marketBuy);
        }
        else if( orderName == "MOS")
        {
            getline(ss,line,',');
            cType = intToCryptoType(std::stoi(line));

            getline(ss,line,',');
            offeringAmount = std::stod(line);

            getline(ss,line,',');
            line =="yes" ? partialRealised = true : partialRealised = false;

            getline(ss,line,'.');
            creationDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            creationDate.tm_mon = std::stoi(line);

            getline(ss,line,',');
            creationDate.tm_year = std::stoi(line);

            getline(ss,line,'.');
            executionDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            executionDate.tm_mon = std::stoi(line);

            getline(ss,line);
            executionDate.tm_year = std::stoi(line);

            std::shared_ptr<MarketOrderSell> marketSell = std::make_shared<MarketOrderSell>(cType, offeringAmount, partialRealised, creationDate);
            marketSell->setExecutionDate(executionDate);

            historicalOrders.push_back(marketSell);
        }
        else if(orderName == "SLO")
        {

            getline(ss,line,',');
            cType = intToCryptoType(std::stoi(line));

            getline(ss,line,',');
            offeringAmount = std::stod(line);

            getline(ss,line,',');
            double wantingAmount = std::stod(line);

            getline(ss,line,',');
            line =="yes" ? partialRealised = true : partialRealised = false;

            bool sell;
            getline(ss,line,',');
            line == "sell" ? sell = true: sell=false;

            getline(ss,line,'.');
            creationDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            creationDate.tm_mon = std::stoi(line);

            getline(ss,line,',');
            creationDate.tm_year = std::stoi(line);

            getline(ss,line,'.');
            executionDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            executionDate.tm_mon = std::stoi(line);

            getline(ss,line);
            executionDate.tm_year = std::stoi(line);

            std::shared_ptr<StopLimitOrder> stopLimitOrder = std::make_shared<StopLimitOrder>(cType, offeringAmount,wantingAmount,partialRealised,creationDate,sell);
            stopLimitOrder->setExecutionDate(executionDate);

            historicalOrders.push_back(stopLimitOrder);

        }
        else if(orderName == "SMO")
        {
            getline(ss,line,',');
            cType = intToCryptoType(std::stoi(line));

            getline(ss,line,',');
            offeringAmount = std::stod(line);

            getline(ss,line,',');
            double wantingAmount = std::stod(line);

            getline(ss,line,',');
            line =="yes" ? partialRealised = true : partialRealised = false;

            bool sell;
            getline(ss,line,',');
            line == "sell" ? sell = true: sell=false;

            getline(ss,line,'.');
            creationDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            creationDate.tm_mon = std::stoi(line);

            getline(ss,line,',');
            creationDate.tm_year = std::stoi(line);

            getline(ss,line,'.');
            executionDate.tm_mday = std::stoi(line);

            getline(ss,line,'.');
            executionDate.tm_mon = std::stoi(line);

            getline(ss,line);
            executionDate.tm_year = std::stoi(line);

            std::shared_ptr<StopMarketOrder> stopMarketOrder = std::make_shared<StopMarketOrder>(cType, offeringAmount,wantingAmount,partialRealised,creationDate,sell);
            stopMarketOrder->setExecutionDate(executionDate);

            historicalOrders.push_back(stopMarketOrder);
        }
        }
    }
    historicalOrdersFile.close();
}






























