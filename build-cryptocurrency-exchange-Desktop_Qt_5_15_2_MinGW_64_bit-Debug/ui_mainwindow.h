/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
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
    QWidget *mainPage;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *cryptoGraphsButton;
    QPushButton *myWalletButton;
    QPushButton *quitButtonFromMainPage;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *bitcoinLabel;
    QLabel *bitcoinCurrenValue;
    QLabel *ethereumLabel;
    QLabel *ethereumCurrentValue;
    QLabel *chilizLabel;
    QLabel *chilizCurrentValue;
    QLabel *tetherLabel;
    QLabel *tetherCurrentValue;
    QLabel *dogecoinLabel;
    QLabel *dogecoinCurrentValue;
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
        title->setGeometry(QRect(180, 10, 417, 44));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        title->setFont(font);
        title->setFrame(false);
        title->setAlignment(Qt::AlignCenter);
        title->setReadOnly(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 80, 781, 351));
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        signInButton->setFont(font1);

        verticalLayout->addWidget(signInButton);

        signUpButton = new QPushButton(verticalLayoutWidget);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setFont(font1);

        verticalLayout->addWidget(signUpButton);

        quitButton = new QPushButton(verticalLayoutWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setFont(font1);

        verticalLayout->addWidget(quitButton);

        stackedWidget->addWidget(home);
        signInPanel = new QWidget();
        signInPanel->setObjectName(QString::fromUtf8("signInPanel"));
        goBackButtonFromSignInPanel = new QPushButton(signInPanel);
        goBackButtonFromSignInPanel->setObjectName(QString::fromUtf8("goBackButtonFromSignInPanel"));
        goBackButtonFromSignInPanel->setGeometry(QRect(20, 310, 93, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        goBackButtonFromSignInPanel->setFont(font2);
        groupBox = new QGroupBox(signInPanel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(250, 80, 280, 215));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 110, 245, 61));
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
        signInButtonLog->setGeometry(QRect(80, 180, 137, 28));
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
        goBackButtonFromSignUpPanel->setGeometry(QRect(20, 310, 93, 28));
        goBackButtonFromSignUpPanel->setFont(font2);
        groupBox_2 = new QGroupBox(signUpPanel);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 60, 281, 271));
        signUpButtonCreateAcc = new QPushButton(groupBox_2);
        signUpButtonCreateAcc->setObjectName(QString::fromUtf8("signUpButtonCreateAcc"));
        signUpButtonCreateAcc->setGeometry(QRect(90, 230, 93, 28));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        signUpButtonCreateAcc->setFont(font4);
        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 10, 250, 208));
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
        mainPage = new QWidget();
        mainPage->setObjectName(QString::fromUtf8("mainPage"));
        verticalLayoutWidget_2 = new QWidget(mainPage);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 40, 231, 151));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        cryptoGraphsButton = new QPushButton(verticalLayoutWidget_2);
        cryptoGraphsButton->setObjectName(QString::fromUtf8("cryptoGraphsButton"));
        cryptoGraphsButton->setFont(font1);

        verticalLayout_4->addWidget(cryptoGraphsButton);

        myWalletButton = new QPushButton(verticalLayoutWidget_2);
        myWalletButton->setObjectName(QString::fromUtf8("myWalletButton"));
        myWalletButton->setFont(font1);

        verticalLayout_4->addWidget(myWalletButton);

        quitButtonFromMainPage = new QPushButton(mainPage);
        quitButtonFromMainPage->setObjectName(QString::fromUtf8("quitButtonFromMainPage"));
        quitButtonFromMainPage->setGeometry(QRect(20, 310, 93, 28));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        quitButtonFromMainPage->setFont(font5);
        groupBox_3 = new QGroupBox(mainPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(320, 110, 281, 201));
        layoutWidget1 = new QWidget(groupBox_3);
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
        bitcoinCurrenValue->setFont(font2);

        gridLayout_2->addWidget(bitcoinCurrenValue, 0, 1, 1, 1);

        ethereumLabel = new QLabel(layoutWidget1);
        ethereumLabel->setObjectName(QString::fromUtf8("ethereumLabel"));
        ethereumLabel->setFont(font4);

        gridLayout_2->addWidget(ethereumLabel, 1, 0, 1, 1);

        ethereumCurrentValue = new QLabel(layoutWidget1);
        ethereumCurrentValue->setObjectName(QString::fromUtf8("ethereumCurrentValue"));
        ethereumCurrentValue->setFont(font2);

        gridLayout_2->addWidget(ethereumCurrentValue, 1, 1, 1, 1);

        chilizLabel = new QLabel(layoutWidget1);
        chilizLabel->setObjectName(QString::fromUtf8("chilizLabel"));
        chilizLabel->setFont(font4);

        gridLayout_2->addWidget(chilizLabel, 2, 0, 1, 1);

        chilizCurrentValue = new QLabel(layoutWidget1);
        chilizCurrentValue->setObjectName(QString::fromUtf8("chilizCurrentValue"));
        chilizCurrentValue->setFont(font2);

        gridLayout_2->addWidget(chilizCurrentValue, 2, 1, 1, 1);

        tetherLabel = new QLabel(layoutWidget1);
        tetherLabel->setObjectName(QString::fromUtf8("tetherLabel"));
        tetherLabel->setFont(font4);

        gridLayout_2->addWidget(tetherLabel, 3, 0, 1, 1);

        tetherCurrentValue = new QLabel(layoutWidget1);
        tetherCurrentValue->setObjectName(QString::fromUtf8("tetherCurrentValue"));
        tetherCurrentValue->setFont(font2);

        gridLayout_2->addWidget(tetherCurrentValue, 3, 1, 1, 1);

        dogecoinLabel = new QLabel(layoutWidget1);
        dogecoinLabel->setObjectName(QString::fromUtf8("dogecoinLabel"));
        dogecoinLabel->setFont(font4);

        gridLayout_2->addWidget(dogecoinLabel, 4, 0, 1, 1);

        dogecoinCurrentValue = new QLabel(layoutWidget1);
        dogecoinCurrentValue->setObjectName(QString::fromUtf8("dogecoinCurrentValue"));
        dogecoinCurrentValue->setFont(font2);

        gridLayout_2->addWidget(dogecoinCurrentValue, 4, 1, 1, 1);

        LogOutButton = new QPushButton(mainPage);
        LogOutButton->setObjectName(QString::fromUtf8("LogOutButton"));
        LogOutButton->setGeometry(QRect(130, 310, 93, 28));
        LogOutButton->setFont(font5);
        verticalLayoutWidget_5 = new QWidget(mainPage);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(620, 110, 151, 151));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        currentDate = new QLabel(verticalLayoutWidget_5);
        currentDate->setObjectName(QString::fromUtf8("currentDate"));
        currentDate->setFont(font2);
        currentDate->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(currentDate);

        date = new QLabel(verticalLayoutWidget_5);
        date->setObjectName(QString::fromUtf8("date"));
        date->setFont(font2);
        date->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(date);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        dateEdit = new QDateEdit(verticalLayoutWidget_5);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_5->addWidget(dateEdit);

        changeDateButton = new QPushButton(verticalLayoutWidget_5);
        changeDateButton->setObjectName(QString::fromUtf8("changeDateButton"));
        changeDateButton->setFont(font2);

        verticalLayout_5->addWidget(changeDateButton);


        verticalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_7);

        welcomeUser = new QLabel(mainPage);
        welcomeUser->setObjectName(QString::fromUtf8("welcomeUser"));
        welcomeUser->setGeometry(QRect(290, 10, 331, 71));
        welcomeUser->setFont(font3);
        welcomeUser->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(mainPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


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
        groupBox_3->setTitle(QString());
        bitcoinLabel->setText(QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        bitcoinCurrenValue->setText(QCoreApplication::translate("MainWindow", "bitc", nullptr));
        ethereumLabel->setText(QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        ethereumCurrentValue->setText(QCoreApplication::translate("MainWindow", "eth", nullptr));
        chilizLabel->setText(QCoreApplication::translate("MainWindow", "Chiliz", nullptr));
        chilizCurrentValue->setText(QCoreApplication::translate("MainWindow", "chz", nullptr));
        tetherLabel->setText(QCoreApplication::translate("MainWindow", "Tether", nullptr));
        tetherCurrentValue->setText(QCoreApplication::translate("MainWindow", "teth", nullptr));
        dogecoinLabel->setText(QCoreApplication::translate("MainWindow", "Dogecoin", nullptr));
        dogecoinCurrentValue->setText(QCoreApplication::translate("MainWindow", "doge", nullptr));
        LogOutButton->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        currentDate->setText(QCoreApplication::translate("MainWindow", "Current date:", nullptr));
        date->setText(QCoreApplication::translate("MainWindow", "date", nullptr));
        changeDateButton->setText(QCoreApplication::translate("MainWindow", "Change date", nullptr));
        welcomeUser->setText(QCoreApplication::translate("MainWindow", "welcomeUser!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
