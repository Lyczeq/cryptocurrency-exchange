#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{ Exchange newExch;
    exchange = newExch;
    ui->setupUi(this);
}

MainWindow::MainWindow(Exchange exch,QWidget *parent):
    exchange(exch),
    QMainWindow(parent)
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
            //obsługa błędu
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

        User loggedUser = exchange.getUsersList().getUserByEmail(emailString);
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
    std::cout<<dateFileDirectory;
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
}
//TODO

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
    ui->stackedWidget->setCurrentIndex(6);
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
}


//MY ORDERS
void MainWindow::on_myCurrentOrdersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

//TODO

void MainWindow::on_goBackBtnFromMyOrdersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
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

//TODO
void MainWindow::on_sendTransferConfirmBtn_clicked()
{
    std::string email = ui->recipentEmail->text().toStdString();

    if(!exchange.getUsersList().checkIfUserExists(email))
    {
        QMessageBox::warning(this,"Send Transfer", "There is no user with a provided email!" );
        return;
    }

    std::string transferTitle = ui->transferTitle->text().toStdString();

    if(transferTitle=="")
    {
        QMessageBox::warning(this,"Send Transfer", "Title cannot be empty!" );
        return;
    }

    double moneyToTransfer = ui->howMuchToTransfer->value();

    if(moneyToTransfer == 0)
    {
        QMessageBox::warning(this,"Send Transfer", "Value cannot be equal 0." );
        return;
    }

    std::string currency = ui->chooseCurrency->currentText().toStdString();



}

void MainWindow::on_goBackBtnFromSendTransferBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//HISTORICAL TRANSFERS
void MainWindow::on_historicalTransfersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

//TODO

void MainWindow::on_goBackFromTransfersHistBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

//HISTORICAL TRANSFERS
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






