#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
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

    if(loggedSuccessfully)
    {
        QMessageBox::information(this,"Sign In", "Logged successfully!" );
        ui->stackedWidget->setCurrentIndex(3);
    }
    else
    {
        QMessageBox::warning(this,"Sign In", "Email or password is not correct. Try again." );
    }
}

//SignUpPanel

void MainWindow::on_goBackButtonFromSignUpPanel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}




void MainWindow::on_signUpButtonCreateAcc_clicked()
{
    QString firstName = ui->firstNameLineEdit->text();
    QString lastName = ui->lastNameLineEdit->text();
    QString email = ui->emailLineEditSignUp->text();
    QString password = ui->passwordLineSignUp->text();

    //regex dla wszystkich informacji

    std::string firstNameString = firstName.toStdString();
    std::string lastNameString =lastName.toStdString();
    std::string emailString =email.toStdString();
    std::string passwordString =password.toStdString();

    UsersList uList = exchange.getUsersList();
    std::vector<std::string> emails = uList.getEmailVector();

    bool singUpSuccessfully = uList.signUp(firstNameString, lastNameString, emailString, passwordString);

    if(singUpSuccessfully)
    {
        QMessageBox::information(this,"Sign Up", "Account was created successfully!" );
        ui->stackedWidget->setCurrentIndex(3);
    }
    else
    {
        QMessageBox::warning(this,"Sign Up", "The provided email is already taken!" );
    }
}
























