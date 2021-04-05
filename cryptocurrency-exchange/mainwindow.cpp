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

//Homepage

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


//SignInPanel

void MainWindow::on_goBackButtonFromSignInPanel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_signInButtonLog_clicked()
{
    QString email = ui->emailLineEditSignIn->text();
    QString password = ui->passwordLineEditSignIn->text();

    UsersList uList = exchange.getUsersList();

    std::vector<std::string> emails = uList.getEmailVector();

    std::string emailString = email.toStdString();
    std::string passwordString = password.toStdString();

    bool loggedSuccessfully =  uList.signIn(emailString, passwordString);
    std::cout<<emailString<<std::endl;
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

        std::string welcomeMessageStr = "Welcome "+loggedUser.getFirstName()+" "+loggedUser.getLastName()+"!";
        QString welcomeMessage = QString::fromStdString(welcomeMessageStr);
        ui->welcomeUser->setText(welcomeMessage);

        fillRatesTable();

        QMessageBox::information(this,"Sign In", "Logged successfully!" );
        ui->stackedWidget->setCurrentIndex(3);

    }
}

//SignUpPanel

void MainWindow::on_goBackButtonFromSignUpPanel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_signUpButtonCreateAcc_clicked()
{
    //regex dla wszystkich informacji
    QString email = ui->emailLineEditSignUp->text();
    std::string emailString =email.toStdString();

    std::vector<std::string> emailVector = exchange.getUsersList().getEmailVector();
    if(std::find(emailVector.begin(),emailVector.end(),emailString)!=emailVector.end())
    {
        QMessageBox::warning(this,"Sign Up", "The provided email is already taken!" );
        return;
    }

    QString firstName = ui->firstNameLineEdit->text();
    QString lastName = ui->lastNameLineEdit->text();
    QString password = ui->passwordLineSignUp->text();

    std::string firstNameString = firstName.toStdString();
    std::string lastNameString =lastName.toStdString();   
    std::string passwordString =password.toStdString();

    Wallet newWalllet;
    User newUser(firstNameString, lastNameString, emailString, newWalllet);
    exchange.setLoggedUser(newUser);

    exchange.getUsersList().signUp(newUser, passwordString);
    exchange.getUsersList().addUserToList(newUser);

    tm date;
    date.tm_mday = 1;
    date.tm_mon = 5 - 1; //tm_mon has range 0-11
    date.tm_year = 2019;
    exchange.setDate(date);

    std::string dateToShow = "01.04.2019";
    QString qstr = QString::fromStdString(dateToShow);
    ui->date->setText(qstr);
    ui->dateEdit->setDate(QDate(date.tm_year, date.tm_mon+1, date.tm_mday));


    exchange.getRates().setCurrentRatesByDate(exchange.getDate());

    std::string welcomeMessageStr = "Welcome "+newUser.getFirstName()+" "+newUser.getLastName()+"!";
    QString welcomeMessage = QString::fromStdString(welcomeMessageStr);
    ui->welcomeUser->setText(welcomeMessage);

    fillRatesTable();

    QMessageBox::information(this,"Sign Up", "Account was created successfully!" );

    ui->stackedWidget->setCurrentIndex(3);   
}


void MainWindow::on_quitButtonFromMainPage_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_LogOutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::fillRatesTable()
{
    std::string currentBitcoinRate = std::to_string(exchange.getRates().getCurrentRates().getCurrentRate(Bitcoin));
    std::string currentEthereumRate = std::to_string(exchange.getRates().getCurrentRates().getCurrentRate(Ethereum));
    std::string currentBinanceCoinRate = std::to_string(exchange.getRates().getCurrentRates().getCurrentRate(BinanceCoin));
    std::string currentTetherRate = std::to_string(exchange.getRates().getCurrentRates().getCurrentRate(Tether));
    std::string currentRippleRate = std::to_string(exchange.getRates().getCurrentRates().getCurrentRate(Ripple));

    ui->bitcoinCurrenValue->setText(QString::fromStdString(currentBitcoinRate));
    ui->ethereumCurrentValue->setText(QString::fromStdString(currentEthereumRate));
    ui->binanceCoinCurrentValue->setText(QString::fromStdString(currentBinanceCoinRate));
    ui->tetherCurrentValue->setText(QString::fromStdString(currentTetherRate));
    ui->rippleCurrentValue->setText(QString::fromStdString(currentRippleRate));
}

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
    {   std::cout<<"ok";
        std::string newDateToFile = std::to_string( exchange.getDate().tm_mday)+'.'+std::to_string(exchange.getDate().tm_mon+1)+'.'+std::to_string(exchange.getDate().tm_year);
        dateFile<<newDateToFile;
    }
    dateFile.close();
}





























