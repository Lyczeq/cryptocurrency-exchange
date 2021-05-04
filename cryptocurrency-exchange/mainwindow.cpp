#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

//HOMEPAGE

void MainWindow::on_signInButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_signUpButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_quitButton_clicked()
{
    QCoreApplication::quit();
}


//SIGN IN
void MainWindow::on_goBackButtonFromSignInPanel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_signInButtonLog_clicked()
{
    std::string emailString = ui->emailLineEditSignIn->text().toStdString();
    std::string passwordString = ui->passwordLineEditSignIn->text().toStdString();

    bool loggedSuccessfully =  exchange.getUsersList().signIn(emailString, passwordString);

    if(!loggedSuccessfully)
        QMessageBox::warning(this,"Sign In", "Email or password is not correct. Try again." );
    else
    {
        const std::string dateDirectory = "users/"+emailString+"/date.txt";
        std::ifstream dateFile(dateDirectory);

        if(!dateFile.is_open())
        {
            //error handler
        }
        else
        {
            tm newDate;
            std::string dateBufor;
            std::string dateLine;

            std::getline(dateFile,dateLine);
            std::stringstream ss(dateLine);

            std::getline(ss, dateBufor, '.');
            newDate.tm_mday = std::stoi(dateBufor);

            std::getline(ss, dateBufor, '.');
            newDate.tm_mon = std::stoi(dateBufor)-1; //tm_mon has range 0-11

            std::getline(ss, dateBufor);
            newDate.tm_year = std::stoi(dateBufor);

            exchange.setDate(newDate);
            QString qstr = QString::fromStdString(dateLine);
            ui->date->setText(qstr);

            ui->dateEdit->setDate(QDate(newDate.tm_year,newDate.tm_mon+1,newDate.tm_mday)); //tm_mon has range 0-11

        }
        dateFile.close();

        User& loggedUser = exchange.getUsersList().getUserByEmail(emailString);
        exchange.getRates().setCurrentRatesByDate(exchange.getDate());

        exchange.setLoggedUser( loggedUser );

        QString welcomeMessage = QString::fromStdString("Welcome "+loggedUser.getFirstName()+" "+loggedUser.getLastName()+"!");
        ui->welcomeUser->setText(welcomeMessage);

        realizeOrders();

        fillRatesTable();
        fillMyBankBalance();

        ui->emailLineEditSignIn->clear();
        ui->passwordLineEditSignIn->clear();



        QMessageBox::information(this,"Sign In", "Logged successfully!" );
        ui->stackedWidget->setCurrentIndex(3);
    }
}

//SIGN UP
void MainWindow::on_goBackButtonFromSignUpPanel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_signUpButtonCreateAcc_clicked()
{
    //regex dla wszystkich informacji
    std::string email =ui->emailLineEditSignUp->text().toStdString();


    if(exchange.getUsersList().checkIfUserExists(email))
    {
        QMessageBox::warning(this,"Sign Up", "The provided email is already taken." );
        return;
    }

    std::regex regEmail("^([a-zA-Z0-9_\\.]{3,})@([a-zA-Z0-9]+)\\.([a-z]+)");

    if(!std::regex_search(email, regEmail))
    {
        QMessageBox::warning(this,"Sign Up", "The provided email is not an email type." );
        return;
    }

    std::regex regNames("[a-zA-Z]+");

    std::string firstName = ui->firstNameLineEdit->text().toStdString();
    std::string lastName = ui->lastNameLineEdit->text().toStdString();

    if(!std::regex_match(firstName, regNames))
    {
        QMessageBox::warning(this,"Sign Up", "The provided first name cannot contain any numbers and special characters!" );
        return;
    }

    if(!std::regex_match(lastName, regNames))
    {
        QMessageBox::warning(this,"Sign Up", "The provided last name cannot contain any numbers and special characters!" );
        return;
    }

    std::regex regPassword("^\\,");

    std::string password = ui->passwordLineSignUp->text().toStdString();

    if(password.length() <10 || std::regex_search(password,regPassword))
    {
        QMessageBox::warning(this,"Sign Up", "The provided password must contain at least 10 characters and cannot contain a comma." );
        return;
    }

    Wallet newWalllet;
    User newUser(firstName, lastName, email, newWalllet);
    exchange.setLoggedUser(newUser);

    exchange.getUsersList().signUp(newUser, password);
    exchange.getUsersList().addUserToList(newUser);

    tm date;
    date.tm_mday = 1;
    date.tm_mon = 5 - 1; //tm_mon has range 0-11
    date.tm_year = 2018;
    exchange.setDate(date);

    std::string dateToShow = "01.05.2018";
    QString qstr = QString::fromStdString(dateToShow);
    ui->date->setText(qstr);
    ui->dateEdit->setDate(QDate(date.tm_year, date.tm_mon+1, date.tm_mday));

    exchange.getRates().setCurrentRatesByDate(exchange.getDate());

    std::string welcomeMessageStr = "Welcome "+newUser.getFirstName()+" "+newUser.getLastName()+"!";
    QString welcomeMessage = QString::fromStdString(welcomeMessageStr);
    ui->welcomeUser->setText(welcomeMessage);

    realizeOrders();

    fillRatesTable();
    fillMyBankBalance();

    ui->firstNameLineEdit->clear();
    ui->lastNameLineEdit->clear();
    ui->emailLineEditSignUp->clear();
    ui->passwordLineSignUp->clear();

    QMessageBox::information(this,"Sign Up", "Account was created successfully!" );

    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::fillRatesTable()
{
    ui->bitcoinCurrenValue->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(Bitcoin)));
    ui->ethereumCurrentValue->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(Ethereum)));
    ui->binanceCoinCurrentValue->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(BinanceCoin)));
    ui->tetherCurrentValue->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(Tether)));
    ui->rippleCurrentValue->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(Ripple)));

    ui->bitcoinCurrenValue2->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(Bitcoin)));
    ui->ethereumCurrentValue2->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(Ethereum)));
    ui->binanceCoinCurrentValue2->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(BinanceCoin)));
    ui->tetherCurrentValue2->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(Tether)));
    ui->rippleCurrentValue2->setText(QString::number(exchange.getRates().getCurrentRates().getCurrentRate(Ripple)));

}

void MainWindow::fillMyBankBalance()
{
    ui->myBankBalance->setText(QString::number(exchange.getUser().getWallet().getMyUSD()) + " USD");
    ui->myBankBalance2->setText(QString::number(exchange.getUser().getWallet().getMyUSD()) + " USD");
}

void MainWindow::on_LogOutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_quitButtonFromMainPage_clicked()
{
    QCoreApplication::quit();
}

//DATE CHANGE
void MainWindow::on_changeDateButton_clicked()
{
    std::string date =  ui->dateEdit->text().toStdString();

    int day = std::stoi(date.substr(0,2));
    int month = std::stoi(date.substr(3,5));
    int year = std::stoi(date.substr(6,10));

    if(! isNewDateLower(day, month, year))
    {
        QMessageBox::warning(this,"Date edit", "The provided date is lower or equal to the present one!" );
    }
    else
    {
        ui->date->setText(QString::fromStdString(date));
        exchange.setDate(day, month - 1, year);
        exchange.getRates().setCurrentRatesByDate(exchange.getDate());
        fillRatesTable();//tm_mon has range 0-11
        saveNewDate();
        realizeCFD();

        realizeOrders();
        fillMyBankBalance();
        exchange.getUser().saveUSDToFile();
        QMessageBox::information(this,"Date edit", "Date was changed successfully!" );
    }
}

bool MainWindow::isNewDateLower(const int& day, const int& month, const int& year)
{
    if(exchange.getDate().tm_year > year)
        return false;

    if(exchange.getDate().tm_year < year)
        return true;

    if(exchange.getDate().tm_year == year)
    {
        if(exchange.getDate().tm_mon + 1 > month)
            return false;

        if(exchange.getDate().tm_mon + 1 < month)
            return true;

        if(exchange.getDate().tm_mon + 1 == month)
        {
            if(exchange.getDate().tm_mday >= day)
                return false;
            else
                return true;
        }
    }
}

void MainWindow::saveNewDate()
{
    const std::string dateFileDirectory = "users/"+exchange.getUser().getEmail()+"/date.txt";
    std::ofstream dateFile(dateFileDirectory);

    if(!dateFile.is_open())
    {
        //error_handler
    }
    else
    {
        std::string newDateToFile = std::to_string( exchange.getDate().tm_mday)+'.'+std::to_string(exchange.getDate().tm_mon+1)+'.'+std::to_string(exchange.getDate().tm_year);
        dateFile<<newDateToFile;
    }
    dateFile.close();
}

//CRYPTOGRAPHS
void MainWindow::on_cryptoGraphsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    makePlot(Bitcoin);
}

void MainWindow::makePlot(cryptoType ct)
{
    std::vector<HistoricalRate>::iterator finalRate = exchange.getRates().getTodayHistoricalRate(ct, exchange.getDate());
    std::vector<HistoricalRate>::iterator startRate = prev(finalRate,28);
    std::vector<HistoricalRate>::iterator iter;
    ui->customPlot->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));

    ui->customPlot->xAxis->setLabel("Date");
    ui->customPlot->yAxis->setLabel("Value");

    int i=0;
    ui->customPlot->addGraph();

    QVector<QCPGraphData> timeData(29);
    QVector<double> buforVec;

    for (iter=startRate; iter<=finalRate; iter++)
    {
        QDateTime timeBufor (QDate(iter->getDate().tm_year, iter->getDate().tm_mon+1, iter->getDate().tm_mday ));
        long double dBufor = timeBufor.toTime_t();

        timeData[i].key = dBufor;
        buforVec.push_back(iter->getValue());
        timeData[i].value = iter->getValue();
        i++;
    }
    ui->customPlot->graph()->data()->set(timeData);

    QSharedPointer<QCPAxisTickerDateTime> dateTicker(new QCPAxisTickerDateTime);
    dateTicker->setDateTimeFormat("d.MM\nyyyy");
    ui->customPlot->xAxis->setTicker(dateTicker);

    double maxValue = *std::max_element(buforVec.begin(), buforVec.end());
    double minValue = *std::min_element(buforVec.begin(),  buforVec.end());

    ui->customPlot->xAxis->setRange(timeData[0].key,timeData[28].key);
    ui->customPlot->yAxis->setRange(minValue*9/10,maxValue*11/10);
    ui->customPlot->replot();
}

void MainWindow::on_bitcoinGraphBtn_clicked()
{
    makePlot(Bitcoin);
}

void MainWindow::on_ethereumGraphBtn_clicked()
{
    makePlot(Ethereum);
}

void MainWindow::on_binanceCoinGraphBtn_clicked()
{
    makePlot(BinanceCoin);
}

void MainWindow::on_tetherGraphBtn_clicked()
{
    makePlot(Tether);
}

void MainWindow::on_rippleGraphBtn_clicked()
{
    makePlot(Ripple);
}

void MainWindow::on_goBackBtnFromGraphs_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

// MY WALLET
void MainWindow::on_myWalletButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_goBackBtnFromWalletBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

//MY CRYPTO
void MainWindow::on_myCryptocurrencyBtn_clicked()
{
    QPieSeries * series = new QPieSeries();

    double totalValue =0;
    QString myCryptosText="";
    for(auto &crypto: exchange.getUser().getWallet().getMyCryptocurrency())
    {
       totalValue += crypto.getAmount()*exchange.getRates().getCurrentRates().getCurrentRate(crypto.getCryptoType());

       myCryptosText += QString::fromStdString(cryptoTypeToString(crypto.getCryptoType())+": ")+QString::number(crypto.getAmount())+"\n";
    }

    for(auto &crypto: exchange.getUser().getWallet().getMyCryptocurrency())
    {
        QString cryptoInChart = QString::fromStdString(cryptoTypeToString(crypto.getCryptoType()));

        double amountInPercent =crypto.getAmount()*exchange.getRates().getCurrentRates().getCurrentRate(crypto.getCryptoType())/totalValue*100;

        series->append(cryptoInChart+" "+QString::fromStdString(std::to_string(amountInPercent))+"%" , amountInPercent);
    }

    ui->myCryptocurrencyBox->setText(myCryptosText);
    QChart *chart = new QChart();
    chart->setMaximumWidth(530);
    chart->setMinimumWidth(530);
    chart->setMaximumHeight(300);
    chart->setMinimumHeight(300);
    chart->setTitle("My cryptocurrency");

    chart->addSeries(series);

    QChartView *chartView = new QChartView(chart);

    chartView->setParent(ui->pieChartPlace);

    ui->stackedWidget->setCurrentIndex(6);

    if(totalValue == 0)
    {
        QMessageBox::information(this,"My Cryptocurrency", "You don't have any cryptocurrencies.");
    }

}

//TODO

void MainWindow::on_goBackBtnFromMyCryptoBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//ADD USD
void MainWindow::on_addUSDBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_addUSDConfirmBtn_clicked()
{
    double addedFunds =  ui->addUSDBOX->value();

    if(addedFunds == 0)
    {
        QMessageBox::warning(this,"Send Transfer", "Value cannot be equal 0." );
        return;
    }

    exchange.getUser().getWallet().addUSD(addedFunds);
    exchange.getUser().saveUSDToFile();
    fillMyBankBalance();
    QMessageBox::information(this,"Add USD", "Adding USD was successful!" );
}

void MainWindow::on_goBackBtnFromDepositFundsBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->addUSDBOX->clear();
}

//MY ORDERS
void MainWindow::on_myCurrentOrdersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);

    ui->myOffer->setEnabled(true);
    ui->expectedOffer->setEnabled(false);
    ui->chooseOrderType->setCurrentText("Market Buy");

    printMyOrders();
}
//TODO adding new order
void MainWindow::on_submitOrderBtn_clicked()
{

    switch(ui->chooseOrderType->currentIndex())
    {
        case 0: //Market Buy
        {
            double myOfferAmount = ui->myOffer->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);


            if(myOfferAmount == 0 || myOfferAmount >= exchange.getUser().getWallet().getMyUSD())
            {
                QMessageBox::warning(this,"My Orders", "Value of USD cannot equal 0 or greater than yours." );
                return;
            }

            std::shared_ptr<MarketOrderBuy> marketBuy = std::make_shared<MarketOrderBuy>(cryptocurrency, myOfferAmount, false, exchange.getDate());

            exchange.getOrderbook().getOrders().push_back(marketBuy);
            exchange.getUser().getWallet().getCurrentOrders().push_back(marketBuy);
            QMessageBox::information(this,"My Orders", "adding a new order was successful." );
            break;
        }
        case 1: // Market Sell
        {
            double myOfferAmount = ui->myOffer->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);


            if(myOfferAmount == 0 || myOfferAmount >= exchange.getUser().getWallet().getAmountOfCryptocurrency(cryptocurrency))
            {
                QMessageBox::warning(this,"My Orders", "Value of selected cryptocurrency cannot equal 0 or greater than yours." );
                return;
            }

            std::shared_ptr<MarketOrderSell> marketSell = std::make_shared<MarketOrderSell>(cryptocurrency, myOfferAmount, false, exchange.getDate());

            exchange.getOrderbook().getOrders().push_back(marketSell);
            exchange.getUser().getWallet().getCurrentOrders().push_back(marketSell);
            QMessageBox::information(this,"My Orders", "adding a new order was successful." );
            break;
        }
        case 2: //Stop Limit Sell
        {
            double myOfferAmount = ui->myOffer->value();
            double expectedOffer = ui->expectedOffer->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);

            if(myOfferAmount <=0 || myOfferAmount >= exchange.getUser().getWallet().getAmountOfCryptocurrency(cryptocurrency))
            {
                QMessageBox::warning(this,"My Orders", "Value of selected cryptocurrency cannot equal 0 or greater than yours." );
                return;
            }

            if(expectedOffer <=0)
            {
                QMessageBox::warning(this,"My Orders", "Expected value cannot be equal 0." );
                return;
            }


             std::shared_ptr<StopLimitOrder> stopLimitSell = std::make_shared<StopLimitOrder>(cryptocurrency, myOfferAmount, expectedOffer, false, exchange.getDate(), true);

              exchange.getOrderbook().getOrders().push_back(stopLimitSell);
              exchange.getUser().getWallet().getCurrentOrders().push_back(stopLimitSell);
              QMessageBox::information(this,"My Orders", "adding a new order was successful." );
              break;

        }
        case 3: //Stop Limit Buy
        {
            double myOfferAmount = ui->myOffer->value();
            double expectedOffer = ui->expectedOffer->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);


            if(myOfferAmount == 0 || myOfferAmount >= exchange.getUser().getWallet().getMyUSD())
            {
                QMessageBox::warning(this,"My Orders", "Value of USD cannot equal 0 or greater than yours." );
                return;
            }

            if(expectedOffer <=0)
            {
                QMessageBox::warning(this,"My Orders", "Expected value cannot be equal 0." );
                return;
            }

             std::shared_ptr<StopLimitOrder> stopLimitBuy = std::make_shared<StopLimitOrder>(cryptocurrency, myOfferAmount, expectedOffer,false, exchange.getDate(), false);

             exchange.getOrderbook().getOrders().push_back(stopLimitBuy);
             exchange.getUser().getWallet().getCurrentOrders().push_back(stopLimitBuy);
             QMessageBox::information(this,"My Orders", "adding a new order was successful." );
             break;
        }
        case 4: //Stop Market Sell
        {
            double myOfferAmount = ui->myOffer->value();
            double expectedOffer = ui->expectedOffer->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);

            if(myOfferAmount <=0 || myOfferAmount >= exchange.getUser().getWallet().getAmountOfCryptocurrency(cryptocurrency))
            {
                QMessageBox::warning(this,"My Orders", "Value of selected cryptocurrency cannot equal 0 or greater than yours." );
                return;
            }

            if(expectedOffer <=0)
            {
                QMessageBox::warning(this,"My Orders", "Expected value cannot be equal 0." );
                return;
            }

             std::shared_ptr<StopMarketOrder> stopMarketSell = std::make_shared<StopMarketOrder>(cryptocurrency, myOfferAmount, expectedOffer, false, exchange.getDate(), true);

             exchange.getOrderbook().getOrders().push_back(stopMarketSell);
             exchange.getUser().getWallet().getCurrentOrders().push_back(stopMarketSell);
             QMessageBox::information(this,"My Orders", "adding a new order was successful." );
             break;

        }
        case 5: //Stop Market Buy
        {
            double myOfferAmount = ui->myOffer->value();
            double expectedOffer = ui->expectedOffer->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);


            if(myOfferAmount == 0 || myOfferAmount >= exchange.getUser().getWallet().getMyUSD())
            {
                QMessageBox::warning(this,"My Orders", "Value of USD cannot equal 0 or greater than yours." );
                return;
            }

            if(expectedOffer <=0)
            {
                QMessageBox::warning(this,"My Orders", "Expected value cannot be equal 0." );
                return;
            }

             std::shared_ptr<StopMarketOrder> stopMarketBuy = std::make_shared<StopMarketOrder>(cryptocurrency, myOfferAmount, expectedOffer, false, exchange.getDate(), false);

             exchange.getOrderbook().getOrders().push_back(stopMarketBuy);
             exchange.getUser().getWallet().getCurrentOrders().push_back(stopMarketBuy);
             QMessageBox::information(this,"My Orders", "adding a new order was successful." );
             break;
        }
    }

    ui->myOffer->clear();
    ui->expectedOffer->clear();
    ui->chooseOrderToDelete->clear();
    printMyOrders();

    exchange.getUser().saveCurrentOrders();
}

void MainWindow::realizeOrders()
{
        User& user = exchange.getUser();

        auto& currentOrders =  user.getWallet().getCurrentOrders();

        for(auto &order : currentOrders)
        {


            if(order->getOrderType() == "MOB")
            {
                cryptoType cType = order->getCryptoType();

                if(user.getWallet().getMyUSD() >= order->getAmount())
                {
                    user.getWallet().subtractUSD(order->getAmount());
                    double earnedVaulue = order->getAmount()/exchange.getRates().getCurrentRates().getCurrentRate(cType) ;
                    user.getWallet().changeValueOfSelectedCrypto( earnedVaulue, true,cType);

                    auto newOrder = order;
                    newOrder->setExecutionDate(exchange.getDate());

                    auto& historicalOrders = user.getWallet().getHistoricalOrders();

                    historicalOrders.push_back(newOrder);

                    auto & currentOrders =  user.getWallet().getCurrentOrders();
                    currentOrders.erase(std::remove(currentOrders.begin(), currentOrders.end(), order), currentOrders.end());
                    user.saveCurrentOrders();

                    exchange.getOrderbook().getOrders().erase(std::remove( exchange.getOrderbook().getOrders().begin(), exchange.getOrderbook().getOrders().end(), order), exchange.getOrderbook().getOrders().end());

                    user.saveHistoricalOrders();
                    user.saveUSDToFile();
                    user.saveCryptoFile();
                }
            }


            else if(order->getOrderType() == "MOS")
            {
                cryptoType cType = order->getCryptoType();

                if(user.getWallet().getAmountOfCryptocurrency(cType) >= order->getAmount() )
                {
                    user.getWallet().changeValueOfSelectedCrypto(order->getAmount(),false,cType);

                    double earnedUSD = order->getAmount() * exchange.getRates().getCurrentRates().getCurrentRate(cType);

                    user.getWallet().addUSD(earnedUSD);

                    auto newOrder = order;
                    newOrder->setExecutionDate(exchange.getDate());

                    auto& historicalOrders = user.getWallet().getHistoricalOrders();

                    historicalOrders.push_back(newOrder);

                    auto & currentOrders =  user.getWallet().getCurrentOrders();
                    currentOrders.erase(std::remove(currentOrders.begin(), currentOrders.end(), order), currentOrders.end());
                    user.saveCurrentOrders();

                    exchange.getOrderbook().getOrders().erase(std::remove( exchange.getOrderbook().getOrders().begin(), exchange.getOrderbook().getOrders().end(), order), exchange.getOrderbook().getOrders().end());

                    user.saveHistoricalOrders();
                    user.saveUSDToFile();
                    user.saveCryptoFile();
               }
            }

            else if(order->getOrderType() == "SMO")
            {
                cryptoType cType = order->getCryptoType();
                if(order->getIsSelling() == true)
                {
                    if( exchange.getRates().getCurrentRates().getCurrentRate(cType) >= order->getWantingAmount())
                    {
                        if(user.getWallet().getAmountOfCryptocurrency(cType) >= order->getAmount() )
                        {
                            user.getWallet().changeValueOfSelectedCrypto(order->getAmount(),false,cType);

                            double earnedUSD = order->getAmount() * exchange.getRates().getCurrentRates().getCurrentRate(cType);

                            user.getWallet().addUSD(earnedUSD);

                            auto newOrder = order;
                            newOrder->setExecutionDate(exchange.getDate());

                            auto& historicalOrders = user.getWallet().getHistoricalOrders();

                            historicalOrders.push_back(newOrder);

                            auto & currentOrders =  user.getWallet().getCurrentOrders();
                            currentOrders.erase(std::remove(currentOrders.begin(), currentOrders.end(), order), currentOrders.end());
                            user.saveCurrentOrders();

                            exchange.getOrderbook().getOrders().erase(std::remove( exchange.getOrderbook().getOrders().begin(), exchange.getOrderbook().getOrders().end(), order), exchange.getOrderbook().getOrders().end());

                            user.saveHistoricalOrders();
                            user.saveUSDToFile();
                            user.saveCryptoFile();
                       }
                    }
                }
                else if( order->getIsSelling() == false )
                {
                    if( exchange.getRates().getCurrentRates().getCurrentRate(cType) <= order->getWantingAmount())
                    {
                        if(user.getWallet().getMyUSD() >= order->getAmount())
                        {
                            user.getWallet().subtractUSD(order->getAmount());
                            double earnedVaulue = order->getAmount()/exchange.getRates().getCurrentRates().getCurrentRate(cType) ;
                            user.getWallet().changeValueOfSelectedCrypto( earnedVaulue, true,cType);

                            auto newOrder = order;
                            newOrder->setExecutionDate(exchange.getDate());

                            auto& historicalOrders = user.getWallet().getHistoricalOrders();

                            historicalOrders.push_back(newOrder);

                            auto & currentOrders =  user.getWallet().getCurrentOrders();
                            currentOrders.erase(std::remove(currentOrders.begin(), currentOrders.end(), order), currentOrders.end());
                            user.saveCurrentOrders();

                            exchange.getOrderbook().getOrders().erase(std::remove( exchange.getOrderbook().getOrders().begin(), exchange.getOrderbook().getOrders().end(), order), exchange.getOrderbook().getOrders().end());

                            user.saveHistoricalOrders();
                            user.saveUSDToFile();
                            user.saveCryptoFile();
                        }
                    }
                }
            }

            else if(order->getOrderType() == "SLO")
            {
                cryptoType cType = order->getCryptoType();

                if(order->getIsSelling() == true)
                {
                    if( exchange.getRates().getCurrentRates().getCurrentRate(cType) >= order->getWantingAmount())
                    {
                        if(user.getWallet().getAmountOfCryptocurrency(cType) >= order->getAmount() )
                        {
                            user.getWallet().changeValueOfSelectedCrypto(order->getAmount(),false,cType);

                            double earnedUSD = order->getAmount() * exchange.getRates().getCurrentRates().getCurrentRate(cType);

                            user.getWallet().addUSD(earnedUSD);

                            auto newOrder = order;
                            newOrder->setExecutionDate(exchange.getDate());

                            auto& historicalOrders = user.getWallet().getHistoricalOrders();

                            historicalOrders.push_back(newOrder);

                            auto & currentOrders =  user.getWallet().getCurrentOrders();
                            currentOrders.erase(std::remove(currentOrders.begin(), currentOrders.end(), order), currentOrders.end());
                            user.saveCurrentOrders();

                            exchange.getOrderbook().getOrders().erase(std::remove( exchange.getOrderbook().getOrders().begin(), exchange.getOrderbook().getOrders().end(), order), exchange.getOrderbook().getOrders().end());

                            user.saveHistoricalOrders();
                            user.saveUSDToFile();
                            user.saveCryptoFile();
                       }
                    }
                }
                else if( order->getIsSelling() == false )
                {
                    if( exchange.getRates().getCurrentRates().getCurrentRate(cType) <= order->getWantingAmount())
                    {
                        if(user.getWallet().getMyUSD() >= order->getAmount())
                        {
                            user.getWallet().subtractUSD(order->getAmount());
                            double earnedVaulue = order->getAmount()/exchange.getRates().getCurrentRates().getCurrentRate(cType) ;
                            user.getWallet().changeValueOfSelectedCrypto( earnedVaulue, true,cType);

                            auto newOrder = order;
                            newOrder->setExecutionDate(exchange.getDate());

                            auto& historicalOrders = user.getWallet().getHistoricalOrders();

                            historicalOrders.push_back(newOrder);

                            auto & currentOrders =  user.getWallet().getCurrentOrders();
                            currentOrders.erase(std::remove(currentOrders.begin(), currentOrders.end(), order), currentOrders.end());
                            user.saveCurrentOrders();

                            exchange.getOrderbook().getOrders().erase(std::remove( exchange.getOrderbook().getOrders().begin(), exchange.getOrderbook().getOrders().end(), order), exchange.getOrderbook().getOrders().end());

                            user.saveHistoricalOrders();
                            user.saveUSDToFile();
                            user.saveCryptoFile();
                        }
                    }
                }
            }
        }
}


void MainWindow::printMyOrders()
{
    int i=1;
    ui->chooseOrderToDelete->clear();
    foreach(QLabel* le, ui->myOrdersScrollArea->findChildren<QLabel*>())
    {
        delete le;
    }

    for(auto &order: exchange.getUser().getWallet().getCurrentOrders())
    {
        QLabel* orderLabel = createQLabel(140, 240);

        QString orderType;
        QString date = QString::fromStdString( std::to_string(order->getCreationDate().tm_mday) +"."+ std::to_string(order->getCreationDate().tm_mon+1)+ "."+ std::to_string(order->getCreationDate().tm_year));
        QString crypto = QString::fromStdString(cryptoTypeToString(order->getCryptoType()));
        QString offer = QString::number(order->getAmount());
        QString wantingOffer = "";
        QString partiallyRealised="";
        order->isPartialRealised() == true ? partiallyRealised = "yes" : partiallyRealised = "no";
        if(order->getOrderType() == "MOB")
        {
            orderType = "Market Buy";

        }
        else if (order->getOrderType() == "MOS")
        {
            orderType = "Market Sell";
        }
        else if (order->getOrderType() == "SLO")
        {
            order->getIsSelling() == true ? orderType = "Stop Limit Sell" : orderType = "Stop Limit Buy";
            wantingOffer = "\nExpected offer: "+ QString::number(order->getWantingAmount());
        }
        else
        {
            order->getIsSelling() == true ? orderType = "Stop Market Sell" : orderType = "Stop Market Buy";
            wantingOffer = "\nExpected offer: "+ QString::number(order->getWantingAmount());

        }
        orderLabel->setText(orderType+"\nCreation date: "+date+"\n"+"Offer: "+offer+"\n"+"Crypto: "+crypto+"\nPartially realised: "+partiallyRealised+wantingOffer);

        ui->chooseOrderToDelete->addItem(QString::number(i));

        ui->myOrdersScrollArea->widget()->layout()->addWidget(orderLabel);
        i++;
    }
}

void MainWindow::printHistoricalOrders()
{
    for(auto &order: exchange.getUser().getWallet().getHistoricalOrders())
    {
        QLabel* orderLabel = createQLabel(140, 400);

        QString orderType;
        QString date = QString::fromStdString( std::to_string(order->getCreationDate().tm_mday) +"."+ std::to_string(order->getCreationDate().tm_mon+1)+ "."+ std::to_string(order->getCreationDate().tm_year));
        QString exeucutionDate = QString::fromStdString(std::to_string(order->getExecutionDate().tm_mday) +"."+ std::to_string(order->getExecutionDate().tm_mon+1)+ "."+ std::to_string(order->getExecutionDate().tm_year));
        QString crypto = QString::fromStdString(cryptoTypeToString(order->getCryptoType()));
        QString offer = QString::number(order->getAmount());
        QString wantingOffer = "";
        QString partiallyRealised="";
        order->isPartialRealised() == true ? partiallyRealised = "yes" : partiallyRealised = "no";
        if(order->getOrderType() == "MOB")
        {
            orderType = "Market Buy";

        }
        else if (order->getOrderType() == "MOS")
        {
            orderType = "Market Sell";
        }
        else if (order->getOrderType() == "SLO")
        {
            order->getIsSelling() == true ? orderType = "Stop Limit Sell" : orderType = "Stop Limit Buy";
            wantingOffer = "\nExpected offer: "+ QString::number(order->getWantingAmount());
        }
        else
        {
            order->getIsSelling() == true ? orderType = "Stop Market Sell" : orderType = "Stop Market Buy";
            wantingOffer = "\nExpected offer: "+ QString::number(order->getWantingAmount());
        }
        orderLabel->setText(orderType+"\nCreation date: "+date+"\n"+"Offer: "+offer+"\n"+"Crypto: "+crypto+wantingOffer+"\nPartially realised: "+partiallyRealised+"\nExeuction date: "+exeucutionDate);

        ui->historicalOrdersScrollArea->widget()->layout()->addWidget(orderLabel);
    }
}


void MainWindow::on_deleteOrderBtn_clicked()
{
    int chosenOrder = ui->chooseOrderToDelete->currentText().toInt() -1;

    std::vector<std::shared_ptr<Order>>& currentOrders = exchange.getUser().getWallet().getCurrentOrders();

    currentOrders[chosenOrder]->setExecutionDate(exchange.getDate());

    std::vector<std::shared_ptr<Order>>& historicalOrders = exchange.getUser().getWallet().getHistoricalOrders();

    historicalOrders.push_back(currentOrders[chosenOrder]);

    currentOrders.erase(currentOrders.begin() + chosenOrder);

    exchange.getUser().saveCurrentOrders();
    exchange.getUser().saveHistoricalOrders();

    ui->chooseOrderToDelete->clear();

    printMyOrders();

    QMessageBox::information(this,"My Orders", "The chosen order was deleted successfully!" );
}



void MainWindow::on_chooseOrderType_activated(const QString &arg1)
{
    if(arg1 == "Market Buy" || arg1 == "Market Sell")
        ui->expectedOffer->setEnabled(false);
    else
    {
        ui->myOffer->setEnabled(true);
        ui->expectedOffer->setEnabled(true);
    }
}

void MainWindow::on_goBackBtnFromMyOrdersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    foreach(QLabel* le, ui->myOrdersScrollArea->findChildren<QLabel*>())
    {
        delete le;
    }
}

//HISTORICAL ORDERS
void MainWindow::on_myHistoricalOrdersBtn_clicked()
{
    printHistoricalOrders();
    ui->stackedWidget->setCurrentIndex(9);
}

//TODO

void MainWindow::on_goBackBtnFromHistOrdersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    foreach(QLabel* le, ui->historicalOrdersScrollArea->findChildren<QLabel*>())
    {
        delete le;
    }
}

//SEE ORDERBOOK
void MainWindow::on_seeOrderbookBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

    for( auto& order: exchange.getOrderbook().getOrders())
    {
        QLabel* orderLabel = createQLabel(140, 400);

        QString orderType;
        QString date = QString::fromStdString( std::to_string(order->getCreationDate().tm_mday) +"."+ std::to_string(order->getCreationDate().tm_mon+1)+ "."+ std::to_string(order->getCreationDate().tm_year));
        QString crypto = QString::fromStdString(cryptoTypeToString(order->getCryptoType()));
        QString offer = QString::number(order->getAmount());
        QString wantingOffer = "";

        if(order->getOrderType() == "MOB")
        {
            orderType = "Market Buy";

        }
        else if (order->getOrderType() == "MOS")
        {
            orderType = "Market Sell";
        }
        else if (order->getOrderType() == "SLO")
        {
            bool isSelling = order->getIsSelling();

            if(isSelling == true && exchange.getRates().getCurrentRates().getCurrentRate(order->getCryptoType()) < order->getWantingAmount())
                continue;

            if(isSelling == false && exchange.getRates().getCurrentRates().getCurrentRate(order->getCryptoType()) > order->getWantingAmount())
                continue;

            isSelling == true ? orderType = "Stop Limit Sell" : orderType = "Stop Limit Buy";
            wantingOffer = "\nExpected offer: "+ QString::number(order->getWantingAmount());
        }
        else
        {
            bool isSelling = order->getIsSelling();

            if(isSelling == true && exchange.getRates().getCurrentRates().getCurrentRate(order->getCryptoType()) < order->getWantingAmount())
                continue;

            if(isSelling == false && exchange.getRates().getCurrentRates().getCurrentRate(order->getCryptoType()) > order->getWantingAmount())
                continue;


            isSelling == true ? orderType = "Stop Market Sell" : orderType = "Stop Market Buy";
            wantingOffer = "\nExpected offer: "+ QString::number(order->getWantingAmount());
        }

        orderLabel->setText(orderType+"\nCreation date: "+date+"\n"+"Offer: "+offer+"\n"+"Crypto: "+crypto+wantingOffer);
        ui->orderbookScrollArea->widget()->layout()->addWidget(orderLabel);

    }
}

void MainWindow::on_goBackBtnFromOrderbookBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    foreach(QLabel* le, ui->orderbookScrollArea->findChildren<QLabel*>())
    {
       delete le;
    }
}

//SEND TRANSFER
void MainWindow::on_sendTransferBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_sendTransferConfirmBtn_clicked()
{
    std::string recipientEmail = ui->recipientEmail->text().toStdString();

    if(!exchange.getUsersList().checkIfUserExists(recipientEmail))
    {
        QMessageBox::warning(this,"Send Transfer", "There is no user with a provided email." );
        return;
    }

    if(exchange.getUser().getEmail() == recipientEmail)
    {
        QMessageBox::warning(this,"Send Transfer", "You cannot send transfer to yourself." );
        return;
    }

    std::string transferTitle = ui->transferTitle->text().toStdString();

    if(transferTitle=="")
    {
        QMessageBox::warning(this,"Send Transfer", "Title cannot be empty." );
        return;
    }

    double moneyToTransfer = ui->howMuchToTransfer->value();

    if(moneyToTransfer == 0)
    {
        QMessageBox::warning(this,"Send Transfer", "Value cannot be equal 0." );
        return;
    }

    std::string currency = ui->chooseCurrency->currentText().toStdString();
    cryptoType chosenCrypto = stringToCryptoType(currency); //zamiana na enuma

    if(!exchange.getUser().getWallet().realizeTransfer(chosenCrypto, moneyToTransfer))
    {
        QMessageBox::warning(this,"Send Transfer", "You do not have enough cryptocurrency to send a transfer." );
        return;
    }

    User& loggedUser = exchange.getUser();
    Transfer newTransfer (exchange.getDate(), chosenCrypto, recipientEmail, loggedUser.getEmail(), moneyToTransfer, transferTitle);
    loggedUser.getWallet().getSentTransfers().push_back(newTransfer);

    std::shared_ptr<Transfer> transferPointer =std::make_shared<Transfer> (newTransfer); // wskaznik na transfer
    exchange.getUsersList().getUserByEmail(recipientEmail).getWallet().receiveTransfer(transferPointer); // przesylam wskaznik na transfer do usera, ktory otrzymal transfer

    loggedUser.saveSentTransfersToFile();

    QMessageBox::information(this,"Send Transfer", "Transfer was sent successfully!" );
}

void MainWindow::on_goBackBtnFromSendTransferBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->recipientEmail->clear();
    ui->transferTitle->clear();
    ui->howMuchToTransfer->setValue(0);
    ui->chooseCurrency->setCurrentText("Bitcoin");
}

//HISTORICAL TRANSFERS
void MainWindow::on_historicalTransfersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);

    auto sentTransfers = exchange.getUser().getWallet().getSentTransfers();
    std::reverse(sentTransfers.begin(), sentTransfers.end());

    for(auto &transfer: sentTransfers)
    {
        QLabel* transferLabel = createQLabel(100, 280);
        const std::string date = std::to_string(transfer.getDate().tm_mday)+"."+std::to_string(transfer.getDate().tm_mon+1)+"."+std::to_string(transfer.getDate().tm_year);
        const std::string recipient = transfer.getRecipient();

        QString firstPhrase = QString::fromStdString("Date: "+date+"\n"+"Sender: "+recipient+"\n"+"Amount: ");
        QString secondPhrase = QString::number(transfer.getAmount(), 'G', 3);
        QString thirdPhrase = QString::fromStdString(" "+cryptoTypeToString(transfer.getCryptoType()));
        QString fourthPhrase = QString::fromStdString("\nTitle: "+transfer.getTitle());
        transferLabel->setText(firstPhrase+secondPhrase+thirdPhrase+fourthPhrase);
        ui->sentTransfersArea->widget()->layout()->addWidget(transferLabel);
    }

    auto receivedTransfers = exchange.getUser().getWallet().getReceivedTransfers();
    std::reverse(receivedTransfers.begin(), receivedTransfers.end());

    for(auto &transfer: receivedTransfers)
    {
        QLabel* transferLabel = createQLabel(100, 280);
        const std::string date = std::to_string(transfer->getDate().tm_mday)+"."+std::to_string(transfer->getDate().tm_mon+1)+"."+std::to_string(transfer->getDate().tm_year);
        const std::string sender = transfer->getSender();

        QString firstPhrase = QString::fromStdString("Date: "+date+"\n"+"Sender: "+sender+"\n"+"Amount: ");
        QString secondPhrase = QString::number(transfer->getAmount(),'G', 3);
        QString thirdPhrase = QString::fromStdString(" "+cryptoTypeToString(transfer->getCryptoType()));
        QString fourthPhrase = QString::fromStdString("\nTitle: "+transfer->getTitle());
        transferLabel->setText(firstPhrase+secondPhrase+thirdPhrase+fourthPhrase);
        ui->receivedTransfersArea->widget()->layout()->addWidget(transferLabel);
    }

}

std::string MainWindow::cryptoTypeToString(const cryptoType ct)
{
    switch(ct)
    {
    case Bitcoin:
        return "Bitcoin";
    case Ethereum:
        return "Ethereum";
    case BinanceCoin:
        return "Binance Coin";
    case Tether:
        return "Tether";
    case Ripple:
        return "Ripple";
    }
}

QLabel * MainWindow::createQLabel(const int& height, const int& width)
{
    QLabel * newLabel = new QLabel();
    newLabel->setStyleSheet("border: 1px solid black; padding: 10px;");

    newLabel->setAlignment(Qt::AlignLeft);

    newLabel->setMinimumHeight(height);
    newLabel->setMaximumHeight(height);

    newLabel->setMinimumWidth(width);
    newLabel->setMaximumWidth(width);

    return newLabel;
}

void MainWindow::on_goBackFromTransfersHistBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    foreach(QLabel* le, ui->sentTransfersArea->findChildren<QLabel*>())
    {
        delete le;
    }

    foreach(QLabel* le, ui->receivedTransfersArea->findChildren<QLabel*>())
    {
        delete le;
    }
}

//MY CFD
void MainWindow::on_myCFDBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);

    printCFDs();
}

void MainWindow::printCFDs()
{
    int i=1;

    for(auto &cfd: exchange.getUser().getWallet().getOpenedCFDs())
    {
        QLabel* CFDLabel = createQLabel(50, 300);


        std::string CFDtype;
        cfd.isSelling() == true ? CFDtype = "Sell(Short)" : CFDtype = "Buy(Long)";

        QString qCFDInfo = QString::fromStdString(CFDtype+", "+cryptoTypeToString(cfd.getChosenCrypto())+", "+"Units Amount: ");
        QString qUnitsAmount = QString::number(cfd.getUnitsAmount(),'G', 3);
        QString labelInfo =qCFDInfo+qUnitsAmount;

        CFDLabel->setText(labelInfo);
        ui->myCFDScrollArea->widget()->layout()->addWidget(CFDLabel);

        ui->chooseCFDToDelete->addItem(QString::number(i));
        i++;
    }
}

void MainWindow::on_submitCFDBtn_clicked()
{
    double unitsAmount = ui->chooseUnitsAmount->value();

    if(unitsAmount == 0)
    {
        QMessageBox::warning(this,"CFD", "Units amount cannot equal 0" );
        return;
    }

    std::string CFDtype = ui->chooseTypeCFD->currentText().toStdString();
    std::string chosenCrypto = ui->cryptoCFD->currentText().toStdString();
    cryptoType crypto = stringToCryptoType(chosenCrypto);

    double currentCryptoValue = exchange.getRates().getRateValueByDate(exchange.getDate(), crypto);

    bool sell;
    CFDtype =="Sell(Short)" ? sell = true: sell = false;

    CFD newCFD(unitsAmount,currentCryptoValue,exchange.getDate(),crypto,sell);

    exchange.getUser().getWallet().getOpenedCFDs().push_back(newCFD);
    exchange.getUser().saveOpenedCFDsToFile();

    foreach(QLabel* le, ui->myCFDScrollArea->findChildren<QLabel*>())
    {
        delete le;
    }

    ui->chooseCFDToDelete->clear();

   printCFDs();

    QMessageBox::information(this,"CFD", "Contract was made correctly!" );
}

void MainWindow::realizeCFD()
{
    User& user = exchange.getUser();
    std::vector<CFD>& openedCFDs = user.getWallet().getOpenedCFDs();
    std::vector<CFD>& closedCFDs = user.getWallet().getClosedCFDs();
    double& userAccount = user.getWallet().getMyUSD();
    bool bankrupt = false;

    for(auto &cfd : openedCFDs)
    {
        if(bankrupt == true)
            break;

        std::vector<HistoricalRate>::iterator previousDateIter = exchange.getRates().getTodayHistoricalRate(cfd.getChosenCrypto(), cfd.getCreationDate());
        std::vector<HistoricalRate>::iterator todayDateIter = exchange.getRates().getTodayHistoricalRate(cfd.getChosenCrypto(), exchange.getDate());
        std::vector<HistoricalRate>::iterator iter;

        double CFDUnits = cfd.getUnitsAmount();
        double CFDAmount = cfd.getCurrentCryptoValue();

        bool sell = cfd.isSelling();

        double previousDayAmount = CFDAmount;

        if(sell == true) //sell(short)
        {
            for(iter = previousDateIter; iter<=todayDateIter; iter++)
            {
                double cfdProfit = ( previousDayAmount - iter->getValue()) * CFDUnits;

                userAccount += cfdProfit;
                previousDayAmount = iter->getValue();

                if(userAccount <=0)
                {
                    userAccount = 0;
                    bankrupt = true;
                    break;
                }
            }
        }
        else //buy(long)
        {
            for(iter = previousDateIter; iter<=todayDateIter; iter++)
            {

                double cfdProfit = (-1) * ( previousDayAmount - iter->getValue()) * CFDUnits;
                userAccount += cfdProfit;
                previousDayAmount = iter->getValue();

                if(userAccount <=0)
                {
                    userAccount = 0;
                    bankrupt = true;
                    break;
                }
            }
        }
        cfd.setDate(exchange.getDate());
        cfd.setCurrentCryptoValue(todayDateIter->getValue());
    }

    if(bankrupt == true)
    {
        for(auto &cfd : openedCFDs)
           closedCFDs.push_back(cfd);

        while( openedCFDs.size() != 0 )
           openedCFDs.erase(openedCFDs.begin());
        QMessageBox::information(this,"CFD Management", "You are bankrupt, all contracts have been deleted." );
    }

    user.saveOpenedCFDsToFile();
    user.saveClosedCFDsToFile();
}

void MainWindow::on_deleteCFDBtn_clicked()
{
    int chosenCFD = ui->chooseCFDToDelete->currentText().toInt() -1;

    exchange.getUser().getWallet().getOpenedCFDs()[chosenCFD];

    std::vector<CFD>& openedCFDs = exchange.getUser().getWallet().getOpenedCFDs();

    std::vector<CFD>& closedCFDs = exchange.getUser().getWallet().getClosedCFDs();

    closedCFDs.push_back(openedCFDs[chosenCFD]);

    openedCFDs.erase(openedCFDs.begin() + chosenCFD);

    exchange.getUser().saveClosedCFDsToFile();
    exchange.getUser().saveOpenedCFDsToFile();

    foreach(QLabel* le, ui->myCFDScrollArea->findChildren<QLabel*>())
    {
        delete le;
    }

    ui->chooseCFDToDelete->clear();

    printCFDs();

    QMessageBox::information(this,"CFD", "The Contract was deleted successfully!" );
}

void MainWindow::on_goBackBtnFromCFDBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    foreach(QLabel* le, ui->myCFDScrollArea->findChildren<QLabel*>())
    {
        delete le;
    }
    ui->chooseCFDToDelete->clear();

}

//HISTORICAL CFD
void MainWindow::on_historicalCFDBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

    for(auto &cfd: exchange.getUser().getWallet().getClosedCFDs())
    {
        QLabel* CFDLabel = createQLabel(50, 300);

        std::string CFDtype;
        cfd.isSelling() == true ? CFDtype = "Sell(Short)" : CFDtype = "Buy(Long)";

        QString qCFDInfo = QString::fromStdString(CFDtype+", "+cryptoTypeToString(cfd.getChosenCrypto())+", "+"Units Amount: ");
        QString qUnitsAmount = QString::number(cfd.getUnitsAmount(),'G', 3);
        QString labelInfo =qCFDInfo+qUnitsAmount;

        CFDLabel->setText(labelInfo);
        ui->closedCFDScrollAera->widget()->layout()->addWidget(CFDLabel);
    }
}

void MainWindow::on_goBackBtnFromHistCFDBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    foreach(QLabel* le, ui->closedCFDScrollAera->findChildren<QLabel*>())
    {
        delete le;
    }
}


