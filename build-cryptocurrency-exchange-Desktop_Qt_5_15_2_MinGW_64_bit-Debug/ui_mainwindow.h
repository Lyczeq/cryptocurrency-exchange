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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

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
    QCustomPlot *customPlot;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QPushButton *binanceCoinGraphBtn;
    QPushButton *tetherGraphBtn;
    QPushButton *bitcoinGraphBtn;
    QPushButton *ethereumGraphBtn;
    QPushButton *rippleGraphBtn;
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
    QPushButton *goBackBtnFromMyCryptoBtn;
    QFrame *pieChartPlace;
    QHBoxLayout *horizontalLayout;
    QLabel *myCryptocurrencyBox;
    QWidget *addUSDPanel;
    QPushButton *goBackBtnFromDepositFundsBtn;
    QLabel *sendTransferTitle_2;
    QGroupBox *groupBox_7;
    QDoubleSpinBox *addUSDBOX;
    QLabel *USDLabel;
    QPushButton *addUSDConfirmBtn;
    QWidget *myOrdersPanel;
    QLabel *myOrdersLabel;
    QPushButton *goBackBtnFromMyOrdersBtn;
    QLabel *myOrdersLabel_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_19;
    QFormLayout *formLayout_4;
    QLabel *cryptoAmountLabel;
    QComboBox *chooseCurrencyOrder;
    QDoubleSpinBox *howMuchOrder;
    QLabel *orderTypeLabel;
    QComboBox *chooseOrderType;
    QLabel *howMuchCryptoOrderLabel;
    QLabel *usdAmountLabel;
    QDoubleSpinBox *howMuchUSD;
    QPushButton *submitOrderBtn;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_12;
    QSpacerItem *verticalSpacer_3;
    QComboBox *chooseOrderToDelete;
    QPushButton *deleteOrderBtn;
    QLabel *chooseOrderToDeleteLabel;
    QSpacerItem *verticalSpacer_4;
    QScrollArea *myOrdersScrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_7;
    QWidget *historicalOrdersPanel;
    QPushButton *goBackBtnFromHistOrdersBtn;
    QLabel *orderbookTitle_2;
    QScrollArea *historicalOrdersScrollArea;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_13;
    QWidget *seeOrderbookPanel;
    QLabel *orderbookTitle;
    QPushButton *goBackBtnFromOrderbookBtn;
    QScrollArea *orderbookScrollArea;
    QWidget *scrollAreaWidgetContents_10;
    QGridLayout *gridLayout_15;
    QWidget *sendTransferPanel;
    QLabel *sendTransferTitle;
    QPushButton *sendTransferConfirmBtn;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_18;
    QFormLayout *formLayout_3;
    QLabel *transferEmailLabel;
    QLineEdit *recipientEmail;
    QDoubleSpinBox *howMuchToTransfer;
    QComboBox *chooseCurrency;
    QLineEdit *transferTitle;
    QLabel *transferTitleLabel;
    QPushButton *goBackBtnFromSendTransferBtn;
    QWidget *historicalTransfersPanel;
    QPushButton *goBackFromTransfersHistBtn;
    QLabel *transfersHistoryTitle;
    QLabel *sentTransfersLabel;
    QLabel *receivedTransfersLabel;
    QScrollArea *sentTransfersArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QScrollArea *receivedTransfersArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_4;
    QWidget *CFDPanel;
    QLabel *CFDLabel;
    QPushButton *goBackBtnFromCFDBtn;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_8;
    QComboBox *cryptoCFD;
    QDoubleSpinBox *chooseUnitsAmount;
    QComboBox *chooseTypeCFD;
    QLabel *typeCFD;
    QLabel *unitsAmount;
    QLabel *chooseCryptoCFD;
    QLabel *makeContractLabel;
    QPushButton *submitCFDBtn;
    QScrollArea *myCFDScrollArea;
    QWidget *scrollAreaWidgetContents_8;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_10;
    QSpacerItem *verticalSpacer;
    QComboBox *chooseCFDToDelete;
    QPushButton *deleteCFDBtn;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QWidget *historicalCFDPanel;
    QPushButton *goBackBtnFromHistCFDBtn;
    QLabel *historyCFDLabel;
    QScrollArea *closedCFDScrollAera;
    QWidget *scrollAreaWidgetContents_9;
    QGridLayout *gridLayout_11;
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
        stackedWidget->setGeometry(QRect(0, 80, 790, 361));
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
        customPlot = new QCustomPlot(graphsPanel);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(170, 30, 601, 271));
        groupBox_4 = new QGroupBox(graphsPanel);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 30, 141, 271));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        binanceCoinGraphBtn = new QPushButton(groupBox_4);
        binanceCoinGraphBtn->setObjectName(QString::fromUtf8("binanceCoinGraphBtn"));
        binanceCoinGraphBtn->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(binanceCoinGraphBtn, 2, 0, 1, 1);

        tetherGraphBtn = new QPushButton(groupBox_4);
        tetherGraphBtn->setObjectName(QString::fromUtf8("tetherGraphBtn"));
        tetherGraphBtn->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(tetherGraphBtn, 3, 0, 1, 1);

        bitcoinGraphBtn = new QPushButton(groupBox_4);
        bitcoinGraphBtn->setObjectName(QString::fromUtf8("bitcoinGraphBtn"));

        gridLayout_6->addWidget(bitcoinGraphBtn, 0, 0, 1, 1);

        ethereumGraphBtn = new QPushButton(groupBox_4);
        ethereumGraphBtn->setObjectName(QString::fromUtf8("ethereumGraphBtn"));
        ethereumGraphBtn->setAutoFillBackground(false);
        ethereumGraphBtn->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(ethereumGraphBtn, 1, 0, 1, 1);

        rippleGraphBtn = new QPushButton(groupBox_4);
        rippleGraphBtn->setObjectName(QString::fromUtf8("rippleGraphBtn"));
        rippleGraphBtn->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(rippleGraphBtn, 4, 0, 1, 1);

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
        goBackBtnFromMyCryptoBtn = new QPushButton(myCryptocurrencyPanel);
        goBackBtnFromMyCryptoBtn->setObjectName(QString::fromUtf8("goBackBtnFromMyCryptoBtn"));
        goBackBtnFromMyCryptoBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromMyCryptoBtn->setFont(font1);
        pieChartPlace = new QFrame(myCryptocurrencyPanel);
        pieChartPlace->setObjectName(QString::fromUtf8("pieChartPlace"));
        pieChartPlace->setGeometry(QRect(20, 17, 530, 300));
        horizontalLayout = new QHBoxLayout(pieChartPlace);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        myCryptocurrencyBox = new QLabel(myCryptocurrencyPanel);
        myCryptocurrencyBox->setObjectName(QString::fromUtf8("myCryptocurrencyBox"));
        myCryptocurrencyBox->setGeometry(QRect(570, 17, 200, 201));
        myCryptocurrencyBox->setFont(font4);
        myCryptocurrencyBox->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"padding: 10px;\n"
"color: black;\n"
""));
        myCryptocurrencyBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
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
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        font6.setPointSize(20);
        font6.setBold(true);
        font6.setWeight(75);
        sendTransferTitle_2->setFont(font6);
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
        myOrdersLabel = new QLabel(myOrdersPanel);
        myOrdersLabel->setObjectName(QString::fromUtf8("myOrdersLabel"));
        myOrdersLabel->setGeometry(QRect(120, 40, 130, 45));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Arial"));
        font7.setPointSize(16);
        myOrdersLabel->setFont(font7);
        goBackBtnFromMyOrdersBtn = new QPushButton(myOrdersPanel);
        goBackBtnFromMyOrdersBtn->setObjectName(QString::fromUtf8("goBackBtnFromMyOrdersBtn"));
        goBackBtnFromMyOrdersBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromMyOrdersBtn->setFont(font1);
        myOrdersLabel_2 = new QLabel(myOrdersPanel);
        myOrdersLabel_2->setObjectName(QString::fromUtf8("myOrdersLabel_2"));
        myOrdersLabel_2->setGeometry(QRect(530, 50, 210, 45));
        myOrdersLabel_2->setFont(font7);
        groupBox_5 = new QGroupBox(myOrdersPanel);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(509, 100, 281, 161));
        verticalLayout_19 = new QVBoxLayout(groupBox_5);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        cryptoAmountLabel = new QLabel(groupBox_5);
        cryptoAmountLabel->setObjectName(QString::fromUtf8("cryptoAmountLabel"));
        cryptoAmountLabel->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, cryptoAmountLabel);

        chooseCurrencyOrder = new QComboBox(groupBox_5);
        chooseCurrencyOrder->addItem(QString());
        chooseCurrencyOrder->addItem(QString());
        chooseCurrencyOrder->addItem(QString());
        chooseCurrencyOrder->addItem(QString());
        chooseCurrencyOrder->addItem(QString());
        chooseCurrencyOrder->setObjectName(QString::fromUtf8("chooseCurrencyOrder"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Arial"));
        font8.setPointSize(8);
        chooseCurrencyOrder->setFont(font8);
        chooseCurrencyOrder->setLayoutDirection(Qt::RightToLeft);
        chooseCurrencyOrder->setModelColumn(0);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, chooseCurrencyOrder);

        howMuchOrder = new QDoubleSpinBox(groupBox_5);
        howMuchOrder->setObjectName(QString::fromUtf8("howMuchOrder"));
        howMuchOrder->setEnabled(true);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, howMuchOrder);

        orderTypeLabel = new QLabel(groupBox_5);
        orderTypeLabel->setObjectName(QString::fromUtf8("orderTypeLabel"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, orderTypeLabel);

        chooseOrderType = new QComboBox(groupBox_5);
        chooseOrderType->addItem(QString());
        chooseOrderType->addItem(QString());
        chooseOrderType->addItem(QString());
        chooseOrderType->addItem(QString());
        chooseOrderType->addItem(QString());
        chooseOrderType->addItem(QString());
        chooseOrderType->setObjectName(QString::fromUtf8("chooseOrderType"));
        chooseOrderType->setEnabled(true);
        chooseOrderType->setFont(font8);
        chooseOrderType->setLayoutDirection(Qt::RightToLeft);
        chooseOrderType->setModelColumn(0);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, chooseOrderType);

        howMuchCryptoOrderLabel = new QLabel(groupBox_5);
        howMuchCryptoOrderLabel->setObjectName(QString::fromUtf8("howMuchCryptoOrderLabel"));
        howMuchCryptoOrderLabel->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, howMuchCryptoOrderLabel);

        usdAmountLabel = new QLabel(groupBox_5);
        usdAmountLabel->setObjectName(QString::fromUtf8("usdAmountLabel"));
        usdAmountLabel->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, usdAmountLabel);

        howMuchUSD = new QDoubleSpinBox(groupBox_5);
        howMuchUSD->setObjectName(QString::fromUtf8("howMuchUSD"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, howMuchUSD);


        verticalLayout_19->addLayout(formLayout_4);

        submitOrderBtn = new QPushButton(myOrdersPanel);
        submitOrderBtn->setObjectName(QString::fromUtf8("submitOrderBtn"));
        submitOrderBtn->setGeometry(QRect(610, 270, 80, 25));
        groupBox_9 = new QGroupBox(myOrdersPanel);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(360, 90, 131, 203));
        gridLayout_12 = new QGridLayout(groupBox_9);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_3, 2, 0, 1, 1);

        chooseOrderToDelete = new QComboBox(groupBox_9);
        chooseOrderToDelete->setObjectName(QString::fromUtf8("chooseOrderToDelete"));
        chooseOrderToDelete->setFont(font8);
        chooseOrderToDelete->setLayoutDirection(Qt::RightToLeft);
        chooseOrderToDelete->setModelColumn(0);

        gridLayout_12->addWidget(chooseOrderToDelete, 1, 0, 1, 1);

        deleteOrderBtn = new QPushButton(groupBox_9);
        deleteOrderBtn->setObjectName(QString::fromUtf8("deleteOrderBtn"));

        gridLayout_12->addWidget(deleteOrderBtn, 3, 0, 1, 1);

        chooseOrderToDeleteLabel = new QLabel(groupBox_9);
        chooseOrderToDeleteLabel->setObjectName(QString::fromUtf8("chooseOrderToDeleteLabel"));
        chooseOrderToDeleteLabel->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(chooseOrderToDeleteLabel, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 4, 0, 1, 1);

        myOrdersScrollArea = new QScrollArea(myOrdersPanel);
        myOrdersScrollArea->setObjectName(QString::fromUtf8("myOrdersScrollArea"));
        myOrdersScrollArea->setGeometry(QRect(20, 90, 330, 200));
        myOrdersScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 328, 198));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        myOrdersScrollArea->setWidget(scrollAreaWidgetContents_3);
        stackedWidget->addWidget(myOrdersPanel);
        historicalOrdersPanel = new QWidget();
        historicalOrdersPanel->setObjectName(QString::fromUtf8("historicalOrdersPanel"));
        goBackBtnFromHistOrdersBtn = new QPushButton(historicalOrdersPanel);
        goBackBtnFromHistOrdersBtn->setObjectName(QString::fromUtf8("goBackBtnFromHistOrdersBtn"));
        goBackBtnFromHistOrdersBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromHistOrdersBtn->setFont(font1);
        orderbookTitle_2 = new QLabel(historicalOrdersPanel);
        orderbookTitle_2->setObjectName(QString::fromUtf8("orderbookTitle_2"));
        orderbookTitle_2->setGeometry(QRect(250, 10, 290, 45));
        orderbookTitle_2->setFont(font6);
        orderbookTitle_2->setAlignment(Qt::AlignCenter);
        historicalOrdersScrollArea = new QScrollArea(historicalOrdersPanel);
        historicalOrdersScrollArea->setObjectName(QString::fromUtf8("historicalOrdersScrollArea"));
        historicalOrdersScrollArea->setGeometry(QRect(170, 80, 450, 230));
        historicalOrdersScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 448, 228));
        gridLayout_13 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        historicalOrdersScrollArea->setWidget(scrollAreaWidgetContents_6);
        stackedWidget->addWidget(historicalOrdersPanel);
        seeOrderbookPanel = new QWidget();
        seeOrderbookPanel->setObjectName(QString::fromUtf8("seeOrderbookPanel"));
        orderbookTitle = new QLabel(seeOrderbookPanel);
        orderbookTitle->setObjectName(QString::fromUtf8("orderbookTitle"));
        orderbookTitle->setGeometry(QRect(300, 10, 190, 45));
        orderbookTitle->setFont(font6);
        orderbookTitle->setAlignment(Qt::AlignCenter);
        goBackBtnFromOrderbookBtn = new QPushButton(seeOrderbookPanel);
        goBackBtnFromOrderbookBtn->setObjectName(QString::fromUtf8("goBackBtnFromOrderbookBtn"));
        goBackBtnFromOrderbookBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromOrderbookBtn->setFont(font1);
        orderbookScrollArea = new QScrollArea(seeOrderbookPanel);
        orderbookScrollArea->setObjectName(QString::fromUtf8("orderbookScrollArea"));
        orderbookScrollArea->setGeometry(QRect(170, 80, 450, 230));
        orderbookScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 448, 228));
        gridLayout_15 = new QGridLayout(scrollAreaWidgetContents_10);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        orderbookScrollArea->setWidget(scrollAreaWidgetContents_10);
        stackedWidget->addWidget(seeOrderbookPanel);
        sendTransferPanel = new QWidget();
        sendTransferPanel->setObjectName(QString::fromUtf8("sendTransferPanel"));
        sendTransferTitle = new QLabel(sendTransferPanel);
        sendTransferTitle->setObjectName(QString::fromUtf8("sendTransferTitle"));
        sendTransferTitle->setGeometry(QRect(250, 10, 290, 35));
        sendTransferTitle->setFont(font6);
        sendTransferTitle->setAlignment(Qt::AlignCenter);
        sendTransferConfirmBtn = new QPushButton(sendTransferPanel);
        sendTransferConfirmBtn->setObjectName(QString::fromUtf8("sendTransferConfirmBtn"));
        sendTransferConfirmBtn->setGeometry(QRect(345, 240, 100, 35));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Arial"));
        font9.setPointSize(11);
        font9.setBold(true);
        font9.setWeight(75);
        sendTransferConfirmBtn->setFont(font9);
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

        recipientEmail = new QLineEdit(groupBox_3);
        recipientEmail->setObjectName(QString::fromUtf8("recipientEmail"));
        recipientEmail->setFont(font8);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, recipientEmail);

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
        chooseCurrency->setFont(font8);
        chooseCurrency->setLayoutDirection(Qt::RightToLeft);
        chooseCurrency->setModelColumn(0);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, chooseCurrency);

        transferTitle = new QLineEdit(groupBox_3);
        transferTitle->setObjectName(QString::fromUtf8("transferTitle"));
        transferTitle->setFont(font8);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, transferTitle);

        transferTitleLabel = new QLabel(groupBox_3);
        transferTitleLabel->setObjectName(QString::fromUtf8("transferTitleLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, transferTitleLabel);


        verticalLayout_18->addLayout(formLayout_3);

        goBackBtnFromSendTransferBtn = new QPushButton(sendTransferPanel);
        goBackBtnFromSendTransferBtn->setObjectName(QString::fromUtf8("goBackBtnFromSendTransferBtn"));
        goBackBtnFromSendTransferBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromSendTransferBtn->setFont(font1);
        stackedWidget->addWidget(sendTransferPanel);
        historicalTransfersPanel = new QWidget();
        historicalTransfersPanel->setObjectName(QString::fromUtf8("historicalTransfersPanel"));
        goBackFromTransfersHistBtn = new QPushButton(historicalTransfersPanel);
        goBackFromTransfersHistBtn->setObjectName(QString::fromUtf8("goBackFromTransfersHistBtn"));
        goBackFromTransfersHistBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackFromTransfersHistBtn->setFont(font1);
        transfersHistoryTitle = new QLabel(historicalTransfersPanel);
        transfersHistoryTitle->setObjectName(QString::fromUtf8("transfersHistoryTitle"));
        transfersHistoryTitle->setGeometry(QRect(200, 10, 400, 31));
        transfersHistoryTitle->setFont(font6);
        transfersHistoryTitle->setAlignment(Qt::AlignCenter);
        sentTransfersLabel = new QLabel(historicalTransfersPanel);
        sentTransfersLabel->setObjectName(QString::fromUtf8("sentTransfersLabel"));
        sentTransfersLabel->setGeometry(QRect(20, 70, 240, 16));
        receivedTransfersLabel = new QLabel(historicalTransfersPanel);
        receivedTransfersLabel->setObjectName(QString::fromUtf8("receivedTransfersLabel"));
        receivedTransfersLabel->setGeometry(QRect(430, 70, 240, 20));
        sentTransfersArea = new QScrollArea(historicalTransfersPanel);
        sentTransfersArea->setObjectName(QString::fromUtf8("sentTransfersArea"));
        sentTransfersArea->setGeometry(QRect(20, 110, 330, 200));
        sentTransfersArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 328, 198));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sentTransfersArea->setWidget(scrollAreaWidgetContents);
        receivedTransfersArea = new QScrollArea(historicalTransfersPanel);
        receivedTransfersArea->setObjectName(QString::fromUtf8("receivedTransfersArea"));
        receivedTransfersArea->setGeometry(QRect(430, 110, 330, 200));
        receivedTransfersArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 328, 198));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        receivedTransfersArea->setWidget(scrollAreaWidgetContents_2);
        stackedWidget->addWidget(historicalTransfersPanel);
        CFDPanel = new QWidget();
        CFDPanel->setObjectName(QString::fromUtf8("CFDPanel"));
        CFDLabel = new QLabel(CFDPanel);
        CFDLabel->setObjectName(QString::fromUtf8("CFDLabel"));
        CFDLabel->setGeometry(QRect(195, 10, 400, 50));
        CFDLabel->setFont(font6);
        goBackBtnFromCFDBtn = new QPushButton(CFDPanel);
        goBackBtnFromCFDBtn->setObjectName(QString::fromUtf8("goBackBtnFromCFDBtn"));
        goBackBtnFromCFDBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromCFDBtn->setFont(font1);
        groupBox_6 = new QGroupBox(CFDPanel);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(520, 130, 271, 131));
        gridLayout_8 = new QGridLayout(groupBox_6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        cryptoCFD = new QComboBox(groupBox_6);
        cryptoCFD->addItem(QString());
        cryptoCFD->addItem(QString());
        cryptoCFD->addItem(QString());
        cryptoCFD->addItem(QString());
        cryptoCFD->addItem(QString());
        cryptoCFD->setObjectName(QString::fromUtf8("cryptoCFD"));
        cryptoCFD->setFont(font8);
        cryptoCFD->setLayoutDirection(Qt::RightToLeft);
        cryptoCFD->setModelColumn(0);

        gridLayout_8->addWidget(cryptoCFD, 1, 1, 1, 1);

        chooseUnitsAmount = new QDoubleSpinBox(groupBox_6);
        chooseUnitsAmount->setObjectName(QString::fromUtf8("chooseUnitsAmount"));

        gridLayout_8->addWidget(chooseUnitsAmount, 0, 1, 1, 1);

        chooseTypeCFD = new QComboBox(groupBox_6);
        chooseTypeCFD->addItem(QString());
        chooseTypeCFD->addItem(QString());
        chooseTypeCFD->setObjectName(QString::fromUtf8("chooseTypeCFD"));
        chooseTypeCFD->setFont(font8);
        chooseTypeCFD->setLayoutDirection(Qt::RightToLeft);
        chooseTypeCFD->setModelColumn(0);

        gridLayout_8->addWidget(chooseTypeCFD, 2, 1, 1, 1);

        typeCFD = new QLabel(groupBox_6);
        typeCFD->setObjectName(QString::fromUtf8("typeCFD"));
        typeCFD->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(typeCFD, 2, 0, 1, 1);

        unitsAmount = new QLabel(groupBox_6);
        unitsAmount->setObjectName(QString::fromUtf8("unitsAmount"));
        unitsAmount->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(unitsAmount, 0, 0, 1, 1);

        chooseCryptoCFD = new QLabel(groupBox_6);
        chooseCryptoCFD->setObjectName(QString::fromUtf8("chooseCryptoCFD"));
        chooseCryptoCFD->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(chooseCryptoCFD, 1, 0, 1, 1);

        makeContractLabel = new QLabel(CFDPanel);
        makeContractLabel->setObjectName(QString::fromUtf8("makeContractLabel"));
        makeContractLabel->setGeometry(QRect(560, 100, 201, 21));
        makeContractLabel->setFont(font7);
        submitCFDBtn = new QPushButton(CFDPanel);
        submitCFDBtn->setObjectName(QString::fromUtf8("submitCFDBtn"));
        submitCFDBtn->setGeometry(QRect(600, 270, 80, 25));
        myCFDScrollArea = new QScrollArea(CFDPanel);
        myCFDScrollArea->setObjectName(QString::fromUtf8("myCFDScrollArea"));
        myCFDScrollArea->setGeometry(QRect(20, 90, 350, 200));
        myCFDScrollArea->setWidgetResizable(true);
        myCFDScrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 348, 198));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        myCFDScrollArea->setWidget(scrollAreaWidgetContents_8);
        groupBox_8 = new QGroupBox(CFDPanel);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(380, 87, 131, 203));
        gridLayout_10 = new QGridLayout(groupBox_8);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer, 2, 0, 1, 1);

        chooseCFDToDelete = new QComboBox(groupBox_8);
        chooseCFDToDelete->setObjectName(QString::fromUtf8("chooseCFDToDelete"));
        chooseCFDToDelete->setFont(font8);
        chooseCFDToDelete->setLayoutDirection(Qt::RightToLeft);
        chooseCFDToDelete->setModelColumn(0);

        gridLayout_10->addWidget(chooseCFDToDelete, 1, 0, 1, 1);

        deleteCFDBtn = new QPushButton(groupBox_8);
        deleteCFDBtn->setObjectName(QString::fromUtf8("deleteCFDBtn"));

        gridLayout_10->addWidget(deleteCFDBtn, 3, 0, 1, 1);

        label = new QLabel(groupBox_8);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_2, 4, 0, 1, 1);

        stackedWidget->addWidget(CFDPanel);
        historicalCFDPanel = new QWidget();
        historicalCFDPanel->setObjectName(QString::fromUtf8("historicalCFDPanel"));
        goBackBtnFromHistCFDBtn = new QPushButton(historicalCFDPanel);
        goBackBtnFromHistCFDBtn->setObjectName(QString::fromUtf8("goBackBtnFromHistCFDBtn"));
        goBackBtnFromHistCFDBtn->setGeometry(QRect(20, 325, 93, 28));
        goBackBtnFromHistCFDBtn->setFont(font1);
        historyCFDLabel = new QLabel(historicalCFDPanel);
        historyCFDLabel->setObjectName(QString::fromUtf8("historyCFDLabel"));
        historyCFDLabel->setGeometry(QRect(275, 10, 240, 50));
        historyCFDLabel->setFont(font6);
        closedCFDScrollAera = new QScrollArea(historicalCFDPanel);
        closedCFDScrollAera->setObjectName(QString::fromUtf8("closedCFDScrollAera"));
        closedCFDScrollAera->setGeometry(QRect(170, 70, 450, 240));
        closedCFDScrollAera->setWidgetResizable(true);
        closedCFDScrollAera->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 448, 238));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents_9);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        closedCFDScrollAera->setWidget(scrollAreaWidgetContents_9);
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

        stackedWidget->setCurrentIndex(0);


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
        groupBox_4->setTitle(QString());
        binanceCoinGraphBtn->setText(QCoreApplication::translate("MainWindow", "Binance Coin", nullptr));
        tetherGraphBtn->setText(QCoreApplication::translate("MainWindow", "Tether", nullptr));
        bitcoinGraphBtn->setText(QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        ethereumGraphBtn->setText(QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        rippleGraphBtn->setText(QCoreApplication::translate("MainWindow", "Ripple", nullptr));
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
        goBackBtnFromMyCryptoBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        myCryptocurrencyBox->setText(QString());
        goBackBtnFromDepositFundsBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        sendTransferTitle_2->setText(QCoreApplication::translate("MainWindow", "DEPOSIT USD", nullptr));
        groupBox_7->setTitle(QString());
        USDLabel->setText(QCoreApplication::translate("MainWindow", "USD", nullptr));
        addUSDConfirmBtn->setText(QCoreApplication::translate("MainWindow", "ADD USD", nullptr));
        myOrdersLabel->setText(QCoreApplication::translate("MainWindow", "My Orders", nullptr));
        goBackBtnFromMyOrdersBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        myOrdersLabel_2->setText(QCoreApplication::translate("MainWindow", "Add a new order", nullptr));
        groupBox_5->setTitle(QString());
        cryptoAmountLabel->setText(QCoreApplication::translate("MainWindow", "Cryptocurrency: ", nullptr));
        chooseCurrencyOrder->setItemText(0, QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        chooseCurrencyOrder->setItemText(1, QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        chooseCurrencyOrder->setItemText(2, QCoreApplication::translate("MainWindow", "Binance Coin", nullptr));
        chooseCurrencyOrder->setItemText(3, QCoreApplication::translate("MainWindow", "Tether", nullptr));
        chooseCurrencyOrder->setItemText(4, QCoreApplication::translate("MainWindow", "Ripple", nullptr));

        orderTypeLabel->setText(QCoreApplication::translate("MainWindow", "Order type: ", nullptr));
        chooseOrderType->setItemText(0, QCoreApplication::translate("MainWindow", "Market Buy", nullptr));
        chooseOrderType->setItemText(1, QCoreApplication::translate("MainWindow", "Market Sell", nullptr));
        chooseOrderType->setItemText(2, QCoreApplication::translate("MainWindow", "Stop Limit Sell", nullptr));
        chooseOrderType->setItemText(3, QCoreApplication::translate("MainWindow", "Stop Limit Buy", nullptr));
        chooseOrderType->setItemText(4, QCoreApplication::translate("MainWindow", "Stop Market Sell", nullptr));
        chooseOrderType->setItemText(5, QCoreApplication::translate("MainWindow", "Stop Market Buy", nullptr));

        howMuchCryptoOrderLabel->setText(QCoreApplication::translate("MainWindow", "Amount in crypto: ", nullptr));
        usdAmountLabel->setText(QCoreApplication::translate("MainWindow", "Amount in USD: ", nullptr));
        submitOrderBtn->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        groupBox_9->setTitle(QString());
        deleteOrderBtn->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        chooseOrderToDeleteLabel->setText(QCoreApplication::translate("MainWindow", "Choose order\n"
"to delete", nullptr));
        goBackBtnFromHistOrdersBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        orderbookTitle_2->setText(QCoreApplication::translate("MainWindow", "History of orders", nullptr));
        orderbookTitle->setText(QCoreApplication::translate("MainWindow", "Orderbook", nullptr));
        goBackBtnFromOrderbookBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        sendTransferTitle->setText(QCoreApplication::translate("MainWindow", "SEND TRANSFER", nullptr));
        sendTransferConfirmBtn->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        groupBox_3->setTitle(QString());
        transferEmailLabel->setText(QCoreApplication::translate("MainWindow", "E - mail:", nullptr));
        recipientEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "jankowalski@gmail.com", nullptr));
        chooseCurrency->setItemText(0, QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        chooseCurrency->setItemText(1, QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        chooseCurrency->setItemText(2, QCoreApplication::translate("MainWindow", "Binance Coin", nullptr));
        chooseCurrency->setItemText(3, QCoreApplication::translate("MainWindow", "Tether", nullptr));
        chooseCurrency->setItemText(4, QCoreApplication::translate("MainWindow", "Ripple", nullptr));

        transferTitle->setPlaceholderText(QCoreApplication::translate("MainWindow", "The title", nullptr));
        transferTitleLabel->setText(QCoreApplication::translate("MainWindow", "Title: ", nullptr));
        goBackBtnFromSendTransferBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        goBackFromTransfersHistBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        transfersHistoryTitle->setText(QCoreApplication::translate("MainWindow", "TRANSFERS HISTORY", nullptr));
        sentTransfersLabel->setText(QCoreApplication::translate("MainWindow", "History of sent transfers", nullptr));
        receivedTransfersLabel->setText(QCoreApplication::translate("MainWindow", "History of received transfers", nullptr));
        CFDLabel->setText(QCoreApplication::translate("MainWindow", "Contracts for differences", nullptr));
        goBackBtnFromCFDBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        groupBox_6->setTitle(QString());
        cryptoCFD->setItemText(0, QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        cryptoCFD->setItemText(1, QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        cryptoCFD->setItemText(2, QCoreApplication::translate("MainWindow", "Binance Coin", nullptr));
        cryptoCFD->setItemText(3, QCoreApplication::translate("MainWindow", "Tether", nullptr));
        cryptoCFD->setItemText(4, QCoreApplication::translate("MainWindow", "Ripple", nullptr));

        chooseTypeCFD->setItemText(0, QCoreApplication::translate("MainWindow", "Sell(Short)", nullptr));
        chooseTypeCFD->setItemText(1, QCoreApplication::translate("MainWindow", "Buy(Long)", nullptr));

        typeCFD->setText(QCoreApplication::translate("MainWindow", "Type: ", nullptr));
        unitsAmount->setText(QCoreApplication::translate("MainWindow", "Units amount", nullptr));
        chooseCryptoCFD->setText(QCoreApplication::translate("MainWindow", "Cryptocurrency: ", nullptr));
        makeContractLabel->setText(QCoreApplication::translate("MainWindow", "Make a contract", nullptr));
        submitCFDBtn->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        groupBox_8->setTitle(QString());
        deleteCFDBtn->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Choose CFD\n"
"to delete", nullptr));
        goBackBtnFromHistCFDBtn->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        historyCFDLabel->setText(QCoreApplication::translate("MainWindow", "History of CFD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
