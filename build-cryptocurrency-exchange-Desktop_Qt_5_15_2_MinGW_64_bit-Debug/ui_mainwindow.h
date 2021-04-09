/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *title;
    QStackedWidget *stackedWidget;
    QWidget *home;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *signInButton;
    QPushButton *signUpButton;
    QPushButton *quitButton;
    QWidget *signInPanel;
    QPushButton *goBackButtonFromSignInPanel;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *emailLabel;
    QLineEdit *emailLineEditSignIn;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEditSignIn;
    QPushButton *signInButtonLog;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *login;
    QWidget *signUpPanel;
    QPushButton *goBackButtonFromSignUpPanel;
    QGroupBox *groupBox_2;
    QPushButton *signUpButtonCreateAcc;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *signUpBox;
    QGridLayout *gridLayout;
    QLineEdit *firstNameLineEdit;
    QLabel *emailLabel_2;
    QLineEdit *lastNameLineEdit;
    QLabel *firstNameLabel;
    QLabel *passwordLabel_2;
    QLabel *lastNameLabel;
    QLineEdit *emailLineEditSignUp;
    QLineEdit *passwordLineSignUp;
    QWidget *mainPanel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *cryptoGraphsButton;
    QPushButton *myWalletButton;
    QPushButton *quitButtonFromMainPage;
    QGroupBox *cryptocurrencyTable;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *bitcoinLabel;
    QLabel *bitcoinCurrenValue;
    QLabel *ethereumLabel;
    QLabel *ethereumCurrentValue;
    QLabel *chilizLabel;
    QLabel *binanceCoinCurrentValue;
    QLabel *tetherLabel;
    QLabel *tetherCurrentValue;
    QLabel *rippleLabel;
    QLabel *rippleCurrentValue;
    QPushButton *LogOutButton;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *currentDate;
    QLabel *date;
    QVBoxLayout *verticalLayout_5;
    QDateEdit *dateEdit;
    QPushButton *changeDateButton;
    QLabel *welcomeUser;
    QLabel *bankBalanceLabel;
    QLabel *myBankBalance;
    QLabel *currentCryptoValues;
    QWidget *graphsPanel;
    QPushButton *goBackBtnFromGraphs;
    QLabel *label;
    QWidget *walletPanel;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_8;
    QPushButton *myCryptocurrencyBtn;
    QPushButton *addUSDBtn;
    QPushButton *myCurrentOrdersBtn;
    QPushButton *myHistoricalOrdersBtn;
    QPushButton *seeOrderbookBtn;
    QPushButton *goBackBtnFromWalletBtn;
    QGroupBox *cryptocurrencyTable_2;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_5;
    QLabel *bitcoinLabel2;
    QLabel *bitcoinCurrenValue2;
    QLabel *ethereumLabel2;
    QLabel *ethereumCurrentValue2;
    QLabel *chilizLabel2;
    QLabel *binanceCoinCurrentValue2;
    QLabel *tetherLabel2;
    QLabel *tetherCurrentValue2;
    QLabel *rippleLabel2;
    QLabel *rippleCurrentValue2;
    QLabel *bankBalanceLabel2;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_17;
    QPushButton *sendTransferBtn;
    QPushButton *historicalTransfersBtn;
    QPushButton *myCFDBtn;
    QPushButton *historicalCFDBtn;
    QLabel *currentCryptoValues2;
    QLabel *myBankBalance2;
    QWidget *myCryptocurrencyPanel;
    QLabel *label_3;
    QPushButton *goBackBtnFromMyCryptoBtn;
    QWidget *addUSDPanel;
    QPushButton *goBackBtnFromDepositFundsBtn;
    QLabel *sendTransferTitle_2;
    QGroupBox *groupBox_7;
    QDoubleSpinBox *addUSDBOX;
    QLabel *USDLabel;
    QPushButton *addUSDConfirmBtn;
    QWidget *myOrdersPanel;
    QLabel *label_5;
    QPushButton *goBackBtnFromMyOrdersBtn;
    QWidget *historicalOrdersPanel;
    QLabel *label_6;
    QPushButton *goBackBtnFromHistOrdersBtn;
    QWidget *seeOrderbookPanel;
    QLabel *label_7;
    QPushButton *goBackBtnFromOrderbookBtn;
    QWidget *sendTransferPanel;
    QLabel *sendTransferTitle;
    QPushButton *sendTransferConfirmBtn;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_18;
    QFormLayout *formLayout_3;
    QLabel *transferEmailLabel;
    QLineEdit *recipentEmail;
    QLabel *transferTitleLabel;
    QLineEdit *transferTitle;
    QDoubleSpinBox *howMuchToTransfer;
    QComboBox *chooseCurrency;
    QPushButton *goBackBtnFromSendTransferBtn;
    QWidget *historicalTransfersPanel;
    QLabel *label_9;
    QPushButton *goBackFromTransfersHistBtn;
    QLabel *transfersHistoryTitle;
    QWidget *CFDPanel;
    QLabel *label_10;
    QPushButton *goBackBtnFromCFDBtn;
    QWidget *historicalCFDPanel;
    QLabel *label_11;
    QPushButton *goBackBtnFromHistCFDBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setAcceptDrops(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        title = new QLineEdit(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(190, 10, 420, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        title->setFont(font);
        title->setFrame(false);
        title->setAlignment(Qt::AlignCenter);
        title->setReadOnly(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 80, 790, 361));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        stackedWidget->setFont(font1);
        home = new QWidget();
        home->setObjectName(QString::fromUtf8("home"));
        verticalLayoutWidget = new QWidget(home);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 120, 251, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        signInButton = new QPushButton(verticalLayoutWidget);
        signInButton->setObjectName(QString::fromUtf8("signInButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        signInButton->setFont(font2);

        verticalLayout->addWidget(signInButton);

        signUpButton = new QPushButton(verticalLayoutWidget);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setFont(font2);

        verticalLayout->addWidget(signUpButton);

        quitButton = new QPushButton(verticalLayoutWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setFont(font2);

        verticalLayout->addWidget(quitButton);

        stackedWidget->addWidget(home);
        signInPanel = new QWidget();
        signInPanel->setObjectName(QString::fromUtf8("signInPanel"));
        goBackButtonFromSignInPanel = new QPushButton(signInPanel);
        goBackButtonFromSignInPanel->setObjectName(QString::fromUtf8("goBackButtonFromSignInPanel"));
        goBackButtonFromSignInPanel->setGeometry(QRect(20, 325, 93, 28));
        goBackButtonFromSignInPanel->setFont(font1);
        groupBox = new QGroupBox(signInPanel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(250, 80, 280, 215));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 110, 245, 63));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        emailLabel = new QLabel(layoutWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        emailLabel->setFont(font3);

        formLayout->setWidget(0, QFormLayout::LabelRole, emailLabel);

        emailLineEditSignIn = new QLineEdit(layoutWidget);
        emailLineEditSignIn->setObjectName(QString::fromUtf8("emailLineEditSignIn"));

        formLayout->setWidget(0, QFormLayout::FieldRole, emailLineEditSignIn);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font3);

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEditSignIn = new QLineEdit(layoutWidget);
        passwordLineEditSignIn->setObjectName(QString::fromUtf8("passwordLineEditSignIn"));
        passwordLineEditSignIn->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEditSignIn);

        signInButtonLog = new QPushButton(groupBox);
        signInButtonLog->setObjectName(QString::fromUtf8("signInButtonLog"));
        signInButtonLog->setGeometry(QRect(90, 180, 95, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        signInButtonLog->setFont(font4);
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 10, 241, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        login = new QLabel(layoutWidget_2);
        login->setObjectName(QString::fromUtf8("login"));
        login->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(login);

        stackedWidget->addWidget(signInPanel);
        signUpPanel = new QWidget();
        signUpPanel->setObjectName(QString::fromUtf8("signUpPanel"));
        goBackButtonFromSignUpPanel = new QPushButton(signUpPanel);
        goBackButtonFromSignUpPanel->setObjectName(QString::fromUtf8("goBackButtonFromSignUpPanel"));
        goBackButtonFromSignUpPanel->setGeometry(QRect(20, 325, 93, 28));
        goBackButtonFromSignUpPanel->setFont(font1);
        groupBox_2 = new QGroupBox(signUpPanel);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 20, 281, 291));
        signUpButtonCreateAcc = new QPushButton(groupBox_2);
        signUpButtonCreateAcc->setObjectName(QString::fromUtf8("signUpButtonCreateAcc"));
        signUpButtonCreateAcc->setGeometry(QRect(90, 250, 95, 30));
        signUpButtonCreateAcc->setFont(font4);
        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 10, 250, 228));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        signUpBox = new QLabel(layoutWidget_3);
        signUpBox->setObjectName(QString::fromUtf8("signUpBox"));
        signUpBox->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(signUpBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        firstNameLineEdit = new QLineEdit(layoutWidget_3);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));
        firstNameLineEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(firstNameLineEdit, 0, 1, 1, 1);

        emailLabel_2 = new QLabel(layoutWidget_3);
        emailLabel_2->setObjectName(QString::fromUtf8("emailLabel_2"));
        emailLabel_2->setFont(font3);

        gridLayout->addWidget(emailLabel_2, 2, 0, 1, 1);

        lastNameLineEdit = new QLineEdit(layoutWidget_3);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));
        lastNameLineEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(lastNameLineEdit, 1, 1, 1, 1);

        firstNameLabel = new QLabel(layoutWidget_3);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));
        firstNameLabel->setFont(font3);

        gridLayout->addWidget(firstNameLabel, 0, 0, 1, 1);

        passwordLabel_2 = new QLabel(layoutWidget_3);
        passwordLabel_2->setObjectName(QString::fromUtf8("passwordLabel_2"));
        passwordLabel_2->setFont(font3);

        gridLayout->addWidget(passwordLabel_2, 3, 0, 1, 1);

        lastNameLabel = new QLabel(layoutWidget_3);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        lastNameLabel->setFont(font3);

        gridLayout->addWidget(lastNameLabel, 1, 0, 1, 1);

        emailLineEditSignUp = new QLineEdit(layoutWidget_3);
        emailLineEditSignUp->setObjectName(QString::fromUtf8("emailLineEditSignUp"));
        emailLineEditSignUp->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(emailLineEditSignUp, 2, 1, 1, 1);

        passwordLineSignUp = new QLineEdit(layoutWidget_3);
        passwordLineSignUp->setObjectName(QString::fromUtf8("passwordLineSignUp"));
        passwordLineSignUp->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineSignUp, 3, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        stackedWidget->addWidget(signUpPanel);
        mainPanel = new QWidget();
        mainPanel->setObjectName(QString::fromUtf8("mainPanel"));
        verticalLayoutWidget_2 = new QWidget(mainPanel);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 110, 231, 151));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        cryptoGraphsButton = new QPushButton(verticalLayoutWidget_2);
        cryptoGraphsButton->setObjectName(QString::fromUtf8("cryptoGraphsButton"));
        cryptoGraphsButton->setFont(font2);

        verticalLayout_4->addWidget(cryptoGraphsButton);

        myWalletButton = new QPushButton(verticalLayoutWidget_2);
        myWalletButton->setObjectName(QString::fromUtf8("myWalletButton"));
        myWalletButton->setFont(font2);

        verticalLayout_4->addWidget(myWalletButton);

        quitButtonFromMainPage = new QPushButton(mainPanel);
        quitButtonFromMainPage->setObjectName(QString::fromUtf8("quitButtonFromMainPage"));
        quitButtonFromMainPage->setGeometry(QRect(20, 325, 93, 28));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        quitButtonFromMainPage->setFont(font5);
        cryptocurrencyTable = new QGroupBox(mainPanel);
        cryptocurrencyTable->setObjectName(QString::fromUtf8("cryptocurrencyTable"));
        cryptocurrencyTable->setGeometry(QRect(320, 110, 281, 201));
        layoutWidget1 = new QWidget(cryptocurrencyTable);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 241, 171));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        bitcoinLabel = new QLabel(layoutWidget1);
        bitcoinLabel->setObjectName(QString::fromUtf8("bitcoinLabel"));
        bitcoinLabel->setFont(font4);

        gridLayout_2->addWidget(bitcoinLabel, 0, 0, 1, 1);

        bitcoinCurrenValue = new QLabel(layoutWidget1);
        bitcoinCurrenValue->setObjectName(QString::fromUtf8("bitcoinCurrenValue"));
        bitcoinCurrenValue->setFont(font1);

        gridLayout_2->addWidget(bitcoinCurrenValue, 0, 1, 1, 1);

        ethereumLabel = new QLabel(layoutWidget1);
        ethereumLabel->setObjectName(QString::fromUtf8("ethereumLabel"));
        ethereumLabel->setFont(font4);

        gridLayout_2->addWidget(ethereumLabel, 1, 0, 1, 1);

        ethereumCurrentValue = new QLabel(layoutWidget1);
        ethereumCurrentValue->setObjectName(QString::fromUtf8("ethereumCurrentValue"));
        ethereumCurrentValue->setFont(font1);

        gridLayout_2->addWidget(ethereumCurrentValue, 1, 1, 1, 1);

        chilizLabel = new QLabel(layoutWidget1);
        chilizLabel->setObjectName(QString::fromUtf8("chilizLabel"));
        chilizLabel->setFont(font4);

        gridLayout_2->addWidget(chilizLabel, 2, 0, 1, 1);

        binanceCoinCurrentValue = new QLabel(layoutWidget1);
        binanceCoinCurrentValue->setObjectName(QString::fromUtf8("binanceCoinCurrentValue"));
        binanceCoinCurrentValue->setFont(font1);

        gridLayout_2->addWidget(binanceCoinCurrentValue, 2, 1, 1, 1);

        tetherLabel = new QLabel(layoutWidget1);
        tetherLabel->setObjectName(QString::fromUtf8("tetherLabel"));
        tetherLabel->setFont(font4);

        gridLayout_2->addWidget(tetherLabel, 3, 0, 1, 1);

        tetherCurrentValue = new QLabel(layoutWidget1);
        tetherCurrentValue->setObjectName(QString::fromUtf8("tetherCurrentValue"));
        tetherCurrentValue->setFont(font1);

        gridLayout_2->addWidget(tetherCurrentValue, 3, 1, 1, 1);

        rippleLabel = new QLabel(layoutWidget1);
        rippleLabel->setObjectName(QString::fromUtf8("rippleLabel"));
        rippleLabel->setFont(font4);

        gridLayout_2->addWidget(rippleLabel, 4, 0, 1, 1);

        rippleCurrentValue = new QLabel(layoutWidget1);
        rippleCurrentValue->setObjectName(QString::fromUtf8("rippleCurrentValue"));
        rippleCurrentValue->setFont(font1);

        gridLayout_2->addWidget(rippleCurrentValue, 4, 1, 1, 1);

        LogOutButton = new QPushButton(mainPanel);
        LogOutButton->setObjectName(QString::fromUtf8("LogOutButton"));
        LogOutButton->setGeometry(QRect(130, 325, 93, 28));
        LogOutButton->setFont(font5);
        verticalLayoutWidget_5 = new QWidget(mainPanel);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(620, 110, 151, 151));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        currentDate = new QLabel(verticalLayoutWidget_5);
        currentDate->setObjectName(QString::fromUtf8("currentDate"));
        currentDate->setFont(font1);
        currentDate->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(currentDate);

        date = new QLabel(verticalLayoutWidget_5);
        date->setObjectName(QString::fromUtf8("date"));
        date->setFont(font1);
        date->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(date);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        dateEdit = new QDateEdit(verticalLayoutWidget_5);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2018, 5, 1), QTime(0, 0, 0)));
        dateEdit->setMaximumDate(QDate(2021, 4, 1));
        dateEdit->setMinimumDate(QDate(2018, 5, 1));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2018, 5, 1));

        verticalLayout_5->addWidget(dateEdit);

        changeDateButton = new QPushButton(verticalLayoutWidget_5);
        changeDateButton->setObjectName(QString::fromUtf8("changeDateButton"));
        changeDateButton->setFont(font1);

        verticalLayout_5->addWidget(changeDateButton);


        verticalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_7);

        welcomeUser = new QLabel(mainPanel);
        welcomeUser->setObjectName(QString::fromUtf8("welcomeUser"));
        welcomeUser->setGeometry(QRect(320, 40, 331, 16));
        welcomeUser->setFont(font3);
        welcomeUser->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        bankBalanceLabel = new QLabel(mainPanel);
        bankBalanceLabel->setObjectName(QString::fromUtf8("bankBalanceLabel"));
        bankBalanceLabel->setGeometry(QRect(20, 40, 115, 20));
        bankBalanceLabel->setFont(font4);
        myBankBalance = new QLabel(mainPanel);
        myBankBalance->setObjectName(QString::fromUtf8("myBankBalance"));
        myBankBalance->setGeometry(QRect(140, 40, 135, 20));
        myBankBalance->setFont(font4);
        currentCryptoValues = new QLabel(mainPanel);
        currentCryptoValues->setObjectName(QString::fromUtf8("currentCryptoValues"));
        currentCryptoValues->setGeometry(QRect(320, 80, 250, 20));
        currentCryptoValues->setFont(font4);
        stackedWidget->addWidget(mainPanel);
        graphsPanel = new QWidget();
        graphsPanel->setObjectName(QString::fromUtf8("graphsPanel"));
        goBackBtnFromGraphs = new QPushButton(graphsPanel);
        goBackBtnFromGraphs->setObjectName(QString::fromUtf8("goBackBtnFromGraphs"));
        goBackBtnFromGraphs->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromGraphs->setFont(font1);
        label = new QLabel(graphsPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 90, 451, 131));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        font6.setPointSize(28);
        label->setFont(font6);
        stackedWidget->addWidget(graphsPanel);
        walletPanel = new QWidget();
        walletPanel->setObjectName(QString::fromUtf8("walletPanel"));
        verticalLayoutWidget_3 = new QWidget(walletPanel);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 90, 161, 191));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        myCryptocurrencyBtn = new QPushButton(verticalLayoutWidget_3);
        myCryptocurrencyBtn->setObjectName(QString::fromUtf8("myCryptocurrencyBtn"));
        myCryptocurrencyBtn->setFont(font1);

        verticalLayout_8->addWidget(myCryptocurrencyBtn);

        addUSDBtn = new QPushButton(verticalLayoutWidget_3);
        addUSDBtn->setObjectName(QString::fromUtf8("addUSDBtn"));
        addUSDBtn->setFont(font1);

        verticalLayout_8->addWidget(addUSDBtn);

        myCurrentOrdersBtn = new QPushButton(verticalLayoutWidget_3);
        myCurrentOrdersBtn->setObjectName(QString::fromUtf8("myCurrentOrdersBtn"));
        myCurrentOrdersBtn->setFont(font1);

        verticalLayout_8->addWidget(myCurrentOrdersBtn);

        myHistoricalOrdersBtn = new QPushButton(verticalLayoutWidget_3);
        myHistoricalOrdersBtn->setObjectName(QString::fromUtf8("myHistoricalOrdersBtn"));
        myHistoricalOrdersBtn->setFont(font1);

        verticalLayout_8->addWidget(myHistoricalOrdersBtn);

        seeOrderbookBtn = new QPushButton(verticalLayoutWidget_3);
        seeOrderbookBtn->setObjectName(QString::fromUtf8("seeOrderbookBtn"));
        seeOrderbookBtn->setFont(font1);

        verticalLayout_8->addWidget(seeOrderbookBtn);

        goBackBtnFromWalletBtn = new QPushButton(walletPanel);
        goBackBtnFromWalletBtn->setObjectName(QString::fromUtf8("goBackBtnFromWalletBtn"));
        goBackBtnFromWalletBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromWalletBtn->setFont(font1);
        cryptocurrencyTable_2 = new QGroupBox(walletPanel);
        cryptocurrencyTable_2->setObjectName(QString::fromUtf8("cryptocurrencyTable_2"));
        cryptocurrencyTable_2->setGeometry(QRect(410, 90, 281, 201));
        layoutWidget_8 = new QWidget(cryptocurrencyTable_2);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(20, 10, 241, 171));
        gridLayout_5 = new QGridLayout(layoutWidget_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        bitcoinLabel2 = new QLabel(layoutWidget_8);
        bitcoinLabel2->setObjectName(QString::fromUtf8("bitcoinLabel2"));
        bitcoinLabel2->setFont(font4);

        gridLayout_5->addWidget(bitcoinLabel2, 0, 0, 1, 1);

        bitcoinCurrenValue2 = new QLabel(layoutWidget_8);
        bitcoinCurrenValue2->setObjectName(QString::fromUtf8("bitcoinCurrenValue2"));
        bitcoinCurrenValue2->setFont(font1);

        gridLayout_5->addWidget(bitcoinCurrenValue2, 0, 1, 1, 1);

        ethereumLabel2 = new QLabel(layoutWidget_8);
        ethereumLabel2->setObjectName(QString::fromUtf8("ethereumLabel2"));
        ethereumLabel2->setFont(font4);

        gridLayout_5->addWidget(ethereumLabel2, 1, 0, 1, 1);

        ethereumCurrentValue2 = new QLabel(layoutWidget_8);
        ethereumCurrentValue2->setObjectName(QString::fromUtf8("ethereumCurrentValue2"));
        ethereumCurrentValue2->setFont(font1);

        gridLayout_5->addWidget(ethereumCurrentValue2, 1, 1, 1, 1);

        chilizLabel2 = new QLabel(layoutWidget_8);
        chilizLabel2->setObjectName(QString::fromUtf8("chilizLabel2"));
        chilizLabel2->setFont(font4);

        gridLayout_5->addWidget(chilizLabel2, 2, 0, 1, 1);

        binanceCoinCurrentValue2 = new QLabel(layoutWidget_8);
        binanceCoinCurrentValue2->setObjectName(QString::fromUtf8("binanceCoinCurrentValue2"));
        binanceCoinCurrentValue2->setFont(font1);

        gridLayout_5->addWidget(binanceCoinCurrentValue2, 2, 1, 1, 1);

        tetherLabel2 = new QLabel(layoutWidget_8);
        tetherLabel2->setObjectName(QString::fromUtf8("tetherLabel2"));
        tetherLabel2->setFont(font4);

        gridLayout_5->addWidget(tetherLabel2, 3, 0, 1, 1);

        tetherCurrentValue2 = new QLabel(layoutWidget_8);
        tetherCurrentValue2->setObjectName(QString::fromUtf8("tetherCurrentValue2"));
        tetherCurrentValue2->setFont(font1);

        gridLayout_5->addWidget(tetherCurrentValue2, 3, 1, 1, 1);

        rippleLabel2 = new QLabel(layoutWidget_8);
        rippleLabel2->setObjectName(QString::fromUtf8("rippleLabel2"));
        rippleLabel2->setFont(font4);

        gridLayout_5->addWidget(rippleLabel2, 4, 0, 1, 1);

        rippleCurrentValue2 = new QLabel(layoutWidget_8);
        rippleCurrentValue2->setObjectName(QString::fromUtf8("rippleCurrentValue2"));
        rippleCurrentValue2->setFont(font1);

        gridLayout_5->addWidget(rippleCurrentValue2, 4, 1, 1, 1);

        bankBalanceLabel2 = new QLabel(walletPanel);
        bankBalanceLabel2->setObjectName(QString::fromUtf8("bankBalanceLabel2"));
        bankBalanceLabel2->setGeometry(QRect(20, 40, 115, 20));
        bankBalanceLabel2->setFont(font4);
        verticalLayoutWidget_9 = new QWidget(walletPanel);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(200, 90, 161, 191));
        verticalLayout_17 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        sendTransferBtn = new QPushButton(verticalLayoutWidget_9);
        sendTransferBtn->setObjectName(QString::fromUtf8("sendTransferBtn"));
        sendTransferBtn->setFont(font1);

        verticalLayout_17->addWidget(sendTransferBtn);

        historicalTransfersBtn = new QPushButton(verticalLayoutWidget_9);
        historicalTransfersBtn->setObjectName(QString::fromUtf8("historicalTransfersBtn"));
        historicalTransfersBtn->setFont(font1);

        verticalLayout_17->addWidget(historicalTransfersBtn);

        myCFDBtn = new QPushButton(verticalLayoutWidget_9);
        myCFDBtn->setObjectName(QString::fromUtf8("myCFDBtn"));
        myCFDBtn->setFont(font1);

        verticalLayout_17->addWidget(myCFDBtn);

        historicalCFDBtn = new QPushButton(verticalLayoutWidget_9);
        historicalCFDBtn->setObjectName(QString::fromUtf8("historicalCFDBtn"));
        historicalCFDBtn->setFont(font1);

        verticalLayout_17->addWidget(historicalCFDBtn);

        currentCryptoValues2 = new QLabel(walletPanel);
        currentCryptoValues2->setObjectName(QString::fromUtf8("currentCryptoValues2"));
        currentCryptoValues2->setGeometry(QRect(410, 60, 251, 20));
        currentCryptoValues2->setFont(font4);
        myBankBalance2 = new QLabel(walletPanel);
        myBankBalance2->setObjectName(QString::fromUtf8("myBankBalance2"));
        myBankBalance2->setGeometry(QRect(140, 40, 135, 20));
        myBankBalance2->setFont(font4);
        stackedWidget->addWidget(walletPanel);
        myCryptocurrencyPanel = new QWidget();
        myCryptocurrencyPanel->setObjectName(QString::fromUtf8("myCryptocurrencyPanel"));
        label_3 = new QLabel(myCryptocurrencyPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 210, 151, 16));
        goBackBtnFromMyCryptoBtn = new QPushButton(myCryptocurrencyPanel);
        goBackBtnFromMyCryptoBtn->setObjectName(QString::fromUtf8("goBackBtnFromMyCryptoBtn"));
        goBackBtnFromMyCryptoBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromMyCryptoBtn->setFont(font1);
        stackedWidget->addWidget(myCryptocurrencyPanel);
        addUSDPanel = new QWidget();
        addUSDPanel->setObjectName(QString::fromUtf8("addUSDPanel"));
        goBackBtnFromDepositFundsBtn = new QPushButton(addUSDPanel);
        goBackBtnFromDepositFundsBtn->setObjectName(QString::fromUtf8("goBackBtnFromDepositFundsBtn"));
        goBackBtnFromDepositFundsBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromDepositFundsBtn->setFont(font1);
        sendTransferTitle_2 = new QLabel(addUSDPanel);
        sendTransferTitle_2->setObjectName(QString::fromUtf8("sendTransferTitle_2"));
        sendTransferTitle_2->setGeometry(QRect(250, 20, 290, 35));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Arial"));
        font7.setPointSize(20);
        font7.setBold(true);
        font7.setWeight(75);
        sendTransferTitle_2->setFont(font7);
        sendTransferTitle_2->setAlignment(Qt::AlignCenter);
        groupBox_7 = new QGroupBox(addUSDPanel);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(272, 70, 245, 50));
        addUSDBOX = new QDoubleSpinBox(groupBox_7);
        addUSDBOX->setObjectName(QString::fromUtf8("addUSDBOX"));
        addUSDBOX->setGeometry(QRect(10, 10, 180, 30));
        addUSDBOX->setMaximum(5000.989999999999782);
        USDLabel = new QLabel(groupBox_7);
        USDLabel->setObjectName(QString::fromUtf8("USDLabel"));
        USDLabel->setGeometry(QRect(200, 10, 35, 30));
        addUSDConfirmBtn = new QPushButton(addUSDPanel);
        addUSDConfirmBtn->setObjectName(QString::fromUtf8("addUSDConfirmBtn"));
        addUSDConfirmBtn->setGeometry(QRect(345, 130, 100, 30));
        stackedWidget->addWidget(addUSDPanel);
        myOrdersPanel = new QWidget();
        myOrdersPanel->setObjectName(QString::fromUtf8("myOrdersPanel"));
        label_5 = new QLabel(myOrdersPanel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 180, 261, 16));
        goBackBtnFromMyOrdersBtn = new QPushButton(myOrdersPanel);
        goBackBtnFromMyOrdersBtn->setObjectName(QString::fromUtf8("goBackBtnFromMyOrdersBtn"));
        goBackBtnFromMyOrdersBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromMyOrdersBtn->setFont(font1);
        stackedWidget->addWidget(myOrdersPanel);
        historicalOrdersPanel = new QWidget();
        historicalOrdersPanel->setObjectName(QString::fromUtf8("historicalOrdersPanel"));
        label_6 = new QLabel(historicalOrdersPanel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 250, 141, 16));
        goBackBtnFromHistOrdersBtn = new QPushButton(historicalOrdersPanel);
        goBackBtnFromHistOrdersBtn->setObjectName(QString::fromUtf8("goBackBtnFromHistOrdersBtn"));
        goBackBtnFromHistOrdersBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromHistOrdersBtn->setFont(font1);
        stackedWidget->addWidget(historicalOrdersPanel);
        seeOrderbookPanel = new QWidget();
        seeOrderbookPanel->setObjectName(QString::fromUtf8("seeOrderbookPanel"));
        label_7 = new QLabel(seeOrderbookPanel);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 250, 181, 16));
        goBackBtnFromOrderbookBtn = new QPushButton(seeOrderbookPanel);
        goBackBtnFromOrderbookBtn->setObjectName(QString::fromUtf8("goBackBtnFromOrderbookBtn"));
        goBackBtnFromOrderbookBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromOrderbookBtn->setFont(font1);
        stackedWidget->addWidget(seeOrderbookPanel);
        sendTransferPanel = new QWidget();
        sendTransferPanel->setObjectName(QString::fromUtf8("sendTransferPanel"));
        sendTransferTitle = new QLabel(sendTransferPanel);
        sendTransferTitle->setObjectName(QString::fromUtf8("sendTransferTitle"));
        sendTransferTitle->setGeometry(QRect(250, 20, 290, 35));
        sendTransferTitle->setFont(font7);
        sendTransferTitle->setAlignment(Qt::AlignCenter);
        sendTransferConfirmBtn = new QPushButton(sendTransferPanel);
        sendTransferConfirmBtn->setObjectName(QString::fromUtf8("sendTransferConfirmBtn"));
        sendTransferConfirmBtn->setGeometry(QRect(345, 240, 100, 35));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Arial"));
        font8.setPointSize(11);
        font8.setBold(true);
        font8.setWeight(75);
        sendTransferConfirmBtn->setFont(font8);
        groupBox_3 = new QGroupBox(sendTransferPanel);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(250, 90, 290, 131));
        verticalLayout_18 = new QVBoxLayout(groupBox_3);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        transferEmailLabel = new QLabel(groupBox_3);
        transferEmailLabel->setObjectName(QString::fromUtf8("transferEmailLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, transferEmailLabel);

        recipentEmail = new QLineEdit(groupBox_3);
        recipentEmail->setObjectName(QString::fromUtf8("recipentEmail"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Arial"));
        font9.setPointSize(8);
        recipentEmail->setFont(font9);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, recipentEmail);

        transferTitleLabel = new QLabel(groupBox_3);
        transferTitleLabel->setObjectName(QString::fromUtf8("transferTitleLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, transferTitleLabel);

        transferTitle = new QLineEdit(groupBox_3);
        transferTitle->setObjectName(QString::fromUtf8("transferTitle"));
        transferTitle->setFont(font9);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, transferTitle);

        howMuchToTransfer = new QDoubleSpinBox(groupBox_3);
        howMuchToTransfer->setObjectName(QString::fromUtf8("howMuchToTransfer"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, howMuchToTransfer);

        chooseCurrency = new QComboBox(groupBox_3);
        chooseCurrency->addItem(QString());
        chooseCurrency->addItem(QString());
        chooseCurrency->addItem(QString());
        chooseCurrency->addItem(QString());
        chooseCurrency->addItem(QString());
        chooseCurrency->setObjectName(QString::fromUtf8("chooseCurrency"));
        chooseCurrency->setFont(font9);
        chooseCurrency->setLayoutDirection(Qt::RightToLeft);
        chooseCurrency->setModelColumn(0);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, chooseCurrency);


        verticalLayout_18->addLayout(formLayout_3);

        goBackBtnFromSendTransferBtn = new QPushButton(sendTransferPanel);
        goBackBtnFromSendTransferBtn->setObjectName(QString::fromUtf8("goBackBtnFromSendTransferBtn"));
        goBackBtnFromSendTransferBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromSendTransferBtn->setFont(font1);
        stackedWidget->addWidget(sendTransferPanel);
        historicalTransfersPanel = new QWidget();
        historicalTransfersPanel->setObjectName(QString::fromUtf8("historicalTransfersPanel"));
        label_9 = new QLabel(historicalTransfersPanel);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 180, 241, 16));
        goBackFromTransfersHistBtn = new QPushButton(historicalTransfersPanel);
        goBackFromTransfersHistBtn->setObjectName(QString::fromUtf8("goBackFromTransfersHistBtn"));
        goBackFromTransfersHistBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackFromTransfersHistBtn->setFont(font1);
        transfersHistoryTitle = new QLabel(historicalTransfersPanel);
        transfersHistoryTitle->setObjectName(QString::fromUtf8("transfersHistoryTitle"));
        transfersHistoryTitle->setGeometry(QRect(200, 20, 390, 31));
        transfersHistoryTitle->setFont(font7);
        transfersHistoryTitle->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(historicalTransfersPanel);
        CFDPanel = new QWidget();
        CFDPanel->setObjectName(QString::fromUtf8("CFDPanel"));
        label_10 = new QLabel(CFDPanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(310, 220, 241, 16));
        goBackBtnFromCFDBtn = new QPushButton(CFDPanel);
        goBackBtnFromCFDBtn->setObjectName(QString::fromUtf8("goBackBtnFromCFDBtn"));
        goBackBtnFromCFDBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromCFDBtn->setFont(font1);
        stackedWidget->addWidget(CFDPanel);
        historicalCFDPanel = new QWidget();
        historicalCFDPanel->setObjectName(QString::fromUtf8("historicalCFDPanel"));
        label_11 = new QLabel(historicalCFDPanel);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(360, 140, 161, 16));
        goBackBtnFromHistCFDBtn = new QPushButton(historicalCFDPanel);
        goBackBtnFromHistCFDBtn->setObjectName(QString::fromUtf8("goBackBtnFromHistCFDBtn"));
        goBackBtnFromHistCFDBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromHistCFDBtn->setFont(font1);
        stackedWidget->addWidget(historicalCFDPanel);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(11);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Cryptocurrency Exchange", nullptr));
        signInButton->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        signUpButton->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        quitButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        goBackButtonFromSignInPanel->setText(QCoreApplication::translate("MainWindow", "Go Back", nullptr));
        groupBox->setTitle(QString());
        emailLabel->setText(QCoreApplication::translate("MainWindow", "email:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "password:", nullptr));
        passwordLineEditSignIn->setText(QString());
        signInButtonLog->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Login</span></p></body></html>", nullptr));
        goBackButtonFromSignUpPanel->setText(QCoreApplication::translate("MainWindow", "Go Back", nullptr));
        groupBox_2->setTitle(QString());
        signUpButtonCreateAcc->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        signUpBox->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Sign up</span></p><p><br/></p></body></html>", nullptr));
        firstNameLineEdit->setText(QString());
        emailLabel_2->setText(QCoreApplication::translate("MainWindow", "email:", nullptr));
        lastNameLineEdit->setText(QString());
        firstNameLabel->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        passwordLabel_2->setText(QCoreApplication::translate("MainWindow", "password:", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        emailLineEditSignUp->setText(QString());
        passwordLineSignUp->setText(QString());
        cryptoGraphsButton->setText(QCoreApplication::translate("MainWindow", "Cryptocurrency Graphs", nullptr));
        myWalletButton->setText(QCoreApplication::translate("MainWindow", "My Wallet", nullptr));
        quitButtonFromMainPage->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        cryptocurrencyTable->setTitle(QString());
        bitcoinLabel->setText(QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        bitcoinCurrenValue->setText(QCoreApplication::translate("MainWindow", "BTC", nullptr));
        ethereumLabel->setText(QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        ethereumCurrentValue->setText(QCoreApplication::translate("MainWindow", "ETH", nullptr));
        chilizLabel->setText(QCoreApplication::translate("MainWindow", "BinanceCoin", nullptr));
        binanceCoinCurrentValue->setText(QCoreApplication::translate("MainWindow", "BNB", nullptr));
        tetherLabel->setText(QCoreApplication::translate("MainWindow", "Tether", nullptr));
        tetherCurrentValue->setText(QCoreApplication::translate("MainWindow", "USDT", nullptr));
        rippleLabel->setText(QCoreApplication::translate("MainWindow", "Ripple", nullptr));
        rippleCurrentValue->setText(QCoreApplication::translate("MainWindow", "XRP", nullptr));
        LogOutButton->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        currentDate->setText(QCoreApplication::translate("MainWindow", "Current date:", nullptr));
        date->setText(QCoreApplication::translate("MainWindow", "date", nullptr));
        changeDateButton->setText(QCoreApplication::translate("MainWindow", "Change date", nullptr));
        welcomeUser->setText(QCoreApplication::translate("MainWindow", "welcomeUser!", nullptr));
        bankBalanceLabel->setText(QCoreApplication::translate("MainWindow", "Bank balance:", nullptr));
        myBankBalance->setText(QCoreApplication::translate("MainWindow", "myBankBalance", nullptr));
        currentCryptoValues->setText(QCoreApplication::translate("MainWindow", "Current cryptocurrency values:", nullptr));
        goBackBtnFromGraphs->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "GRAPHS", nullptr));
        myCryptocurrencyBtn->setText(QCoreApplication::translate("MainWindow", "My Cryptocurrency", nullptr));
        addUSDBtn->setText(QCoreApplication::translate("MainWindow", "Add USD", nullptr));
        myCurrentOrdersBtn->setText(QCoreApplication::translate("MainWindow", "My Orders", nullptr));
        myHistoricalOrdersBtn->setText(QCoreApplication::translate("MainWindow", "Historical orders", nullptr));
        seeOrderbookBtn->setText(QCoreApplication::translate("MainWindow", "See orderbook", nullptr));
        goBackBtnFromWalletBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        cryptocurrencyTable_2->setTitle(QString());
        bitcoinLabel2->setText(QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        bitcoinCurrenValue2->setText(QCoreApplication::translate("MainWindow", "BTC", nullptr));
        ethereumLabel2->setText(QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        ethereumCurrentValue2->setText(QCoreApplication::translate("MainWindow", "ETH", nullptr));
        chilizLabel2->setText(QCoreApplication::translate("MainWindow", "BinanceCoin", nullptr));
        binanceCoinCurrentValue2->setText(QCoreApplication::translate("MainWindow", "BNB", nullptr));
        tetherLabel2->setText(QCoreApplication::translate("MainWindow", "Tether", nullptr));
        tetherCurrentValue2->setText(QCoreApplication::translate("MainWindow", "USDT", nullptr));
        rippleLabel2->setText(QCoreApplication::translate("MainWindow", "Ripple", nullptr));
        rippleCurrentValue2->setText(QCoreApplication::translate("MainWindow", "XRP", nullptr));
        bankBalanceLabel2->setText(QCoreApplication::translate("MainWindow", "Bank balance:", nullptr));
        sendTransferBtn->setText(QCoreApplication::translate("MainWindow", "Send Transfer", nullptr));
        historicalTransfersBtn->setText(QCoreApplication::translate("MainWindow", "Historical Transfers", nullptr));
        myCFDBtn->setText(QCoreApplication::translate("MainWindow", "CFD", nullptr));
        historicalCFDBtn->setText(QCoreApplication::translate("MainWindow", "Historical CFD", nullptr));
        currentCryptoValues2->setText(QCoreApplication::translate("MainWindow", "Current cryptocurrency values:", nullptr));
        myBankBalance2->setText(QCoreApplication::translate("MainWindow", "myBankBalance", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "mycryptos", nullptr));
        goBackBtnFromMyCryptoBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        goBackBtnFromDepositFundsBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        sendTransferTitle_2->setText(QCoreApplication::translate("MainWindow", "DEPOSIT USD", nullptr));
        groupBox_7->setTitle(QString());
        USDLabel->setText(QCoreApplication::translate("MainWindow", "USD", nullptr));
        addUSDConfirmBtn->setText(QCoreApplication::translate("MainWindow", "ADD USD", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "myOrdersPanel", nullptr));
        goBackBtnFromMyOrdersBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "historicalOrders", nullptr));
        goBackBtnFromHistOrdersBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "seeOrderbookPanel", nullptr));
        goBackBtnFromOrderbookBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        sendTransferTitle->setText(QCoreApplication::translate("MainWindow", "SEND TRANSFER", nullptr));
        sendTransferConfirmBtn->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        groupBox_3->setTitle(QString());
        transferEmailLabel->setText(QCoreApplication::translate("MainWindow", "E - mail:", nullptr));
        recipentEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "jankowalski@gmail.com", nullptr));
        transferTitleLabel->setText(QCoreApplication::translate("MainWindow", "Title: ", nullptr));
        transferTitle->setPlaceholderText(QCoreApplication::translate("MainWindow", "The title", nullptr));
        chooseCurrency->setItemText(0, QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        chooseCurrency->setItemText(1, QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        chooseCurrency->setItemText(2, QCoreApplication::translate("MainWindow", "Binance Coin", nullptr));
        chooseCurrency->setItemText(3, QCoreApplication::translate("MainWindow", "Tether", nullptr));
        chooseCurrency->setItemText(4, QCoreApplication::translate("MainWindow", "Ripple", nullptr));

        goBackBtnFromSendTransferBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "historicalTransfersPanel", nullptr));
        goBackFromTransfersHistBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        transfersHistoryTitle->setText(QCoreApplication::translate("MainWindow", "TRANSFERS HISTORY", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "CFDPanel", nullptr));
        goBackBtnFromCFDBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "historicalCFDPanel", nullptr));
        goBackBtnFromHistCFDBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
