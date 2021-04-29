#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
        QMessageBox::warning(this,"Sign Up", "The provided email is already taken!" );
        return;
    }

    std::string firstName = ui->firstNameLineEdit->text().toStdString();
    std::string lastName = ui->lastNameLineEdit->text().toStdString();
    std::string password = ui->passwordLineSignUp->text().toStdString();

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
        QMessageBox::warning(this,"Date edit", "The provided date is lower than the present one!" );
    }
    else
    {
        ui->date->setText(QString::fromStdString(date));
        exchange.setDate(day, month - 1, year);
        exchange.getRates().setCurrentRatesByDate(exchange.getDate());
        fillRatesTable();//tm_mon has range 0-11
        saveNewDate();
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
            if(exchange.getDate().tm_mday > day)
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

    ui->howMuchOrder->setEnabled(false);
    ui->howMuchUSD->setEnabled(true);
    ui->chooseOrderType->setCurrentText("Market Buy");

    // printing user's current orders
}
//TODO adding new order
void MainWindow::on_submitOrderBtn_clicked()
{

    switch(ui->chooseCurrencyOrder->currentIndex())
    {
        case 0: //Market Buy
        {
            double usdAmount = ui->howMuchOrder->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);

            validateUSD(usdAmount);

            std::shared_ptr<MarketOrderBuy> marketBuy = std::make_shared<MarketOrderBuy>(cryptocurrency, usdAmount, false, exchange.getDate());

            exchange.getOrderbook().getOrders().push_back(marketBuy);
        }
        case 1: // Market Sell
        {
            double cryptoAmount = ui->howMuchOrder->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);

            validateCrypto(cryptocurrency, cryptoAmount);

            std::shared_ptr<MarketOrderSell> marketSell = std::make_shared<MarketOrderSell>(cryptocurrency, cryptoAmount, false, exchange.getDate());

            exchange.getOrderbook().getOrders().push_back(marketSell);

        }
        case 2: //Stop Limit Sell
        {
            double usdAmount = ui->howMuchOrder->value();
            double cryptoAmount = ui->howMuchOrder->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);

            validateUSD(usdAmount);
            validateCrypto(cryptocurrency, cryptoAmount);

             std::shared_ptr<StopLimitOrder> stopLimitSell = std::make_shared<StopLimitOrder>(cryptocurrency, cryptoAmount, usdAmount, false, exchange.getDate(), true);

              exchange.getOrderbook().getOrders().push_back(stopLimitSell);

        }
        case 3: //Stop Limit Buy
        {
            double usdAmount = ui->howMuchOrder->value();
            double cryptoAmount = ui->howMuchOrder->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);

            validateUSD(usdAmount);
            validateCrypto(cryptocurrency, cryptoAmount);

             std::shared_ptr<StopLimitOrder> stopLimitBuy = std::make_shared<StopLimitOrder>(cryptocurrency, usdAmount, cryptoAmount,false, exchange.getDate(), false);
        }
        case 4: //Stop Market Sell
        {
            double usdAmount = ui->howMuchOrder->value();
            double cryptoAmount = ui->howMuchOrder->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);

            validateUSD(usdAmount);
            validateCrypto(cryptocurrency, cryptoAmount);

             std::shared_ptr<StopMarketOrder> stopMarketSell = std::make_shared<StopMarketOrder>(cryptocurrency, cryptoAmount, usdAmount, false, exchange.getDate(), true);

             exchange.getOrderbook().getOrders().push_back(stopMarketSell);
        }
        case 5: //Stop Market Buy
        {
            double usdAmount = ui->howMuchOrder->value();
            double cryptoAmount = ui->howMuchOrder->value();
            const std::string selectedCrypto = ui->chooseCurrencyOrder->currentText().toStdString();
            cryptoType cryptocurrency = stringToCryptoType(selectedCrypto);

            validateUSD(usdAmount);
            validateCrypto(cryptocurrency, cryptoAmount);

             std::shared_ptr<StopMarketOrder> stopMarketBuy = std::make_shared<StopMarketOrder>(cryptocurrency, cryptoAmount, usdAmount, false, exchange.getDate(), false);

             exchange.getOrderbook().getOrders().push_back(stopMarketBuy);
        }
    }

}

void MainWindow::validateCrypto(const cryptoType& type, const double& cryptoAmount)
{
    if(cryptoAmount == 0)
    {
        QMessageBox::warning(this,"My Orders", "Value of selected cryptocurrency cannot be equal 0." );
        return;
    }

    if(cryptoAmount >= exchange.getUser().getWallet().getAmountOfCryptocurrency(type) )
    {
        QMessageBox::warning(this,"My Orders", "You don't have enough cryptocurrency to realize Order." );
        return;
    }
}

void MainWindow::validateUSD(const double& usd)
{
    if(usd == 0)
    {
        QMessageBox::warning(this,"My Orders", "Value of USD cannot be equal 0." );
        return;
    }

    if( usd >= exchange.getUser().getWallet().getMyUSD())
    {
        QMessageBox::warning(this,"My Orders", "You don't have enough USD to realize Order." );
        return;
    }
}

void MainWindow::on_chooseOrderType_activated(const QString &arg1)
{
    if(arg1 == "Market Buy")
        ui->howMuchOrder->setEnabled(false);
    else
        ui->howMuchOrder->setEnabled(true);

    if(arg1 == "Market Sell")
        ui->howMuchUSD->setEnabled(false);
    else
        ui->howMuchUSD->setEnabled(true);
}

void MainWindow::on_goBackBtnFromMyOrdersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    //removing them from area
}

//HISTORICAL ORDERS
void MainWindow::on_myHistoricalOrdersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

//TODO

void MainWindow::on_goBackBtnFromHistOrdersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//SEE ORDERBOOK
void MainWindow::on_seeOrderbookBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_goBackBtnFromOrderbookBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
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
        QString thirdPhrase = QString::fromStdString("\nTitle: "+transfer.getTitle());
        transferLabel->setText(firstPhrase+secondPhrase+thirdPhrase);
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
        QString thirdPhrase = QString::fromStdString("\nTitle: "+transfer->getTitle());
        transferLabel->setText(firstPhrase+secondPhrase+thirdPhrase);
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

//TODO

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
}

//TODO

void MainWindow::on_goBackBtnFromCFDBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//HISTORICAL CFD
void MainWindow::on_historicalCFDBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}

//TODO

void MainWindow::on_goBackBtnFromHistCFDBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}






