#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<exchange.h>
#include<QDebug>
#include<QDate>
#include<QtCharts>
#include<regex>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_signInButton_clicked();

    void on_signUpButton_clicked();

    void on_quitButton_clicked();

    void on_goBackButtonFromSignUpPanel_clicked();

    void on_goBackButtonFromSignInPanel_clicked();

    void on_signInButtonLog_clicked();

    void on_signUpButtonCreateAcc_clicked();

    void on_quitButtonFromMainPage_clicked();

    void on_LogOutButton_clicked();

    void fillRatesTable();

    void on_changeDateButton_clicked();

    bool isNewDateLower(const int& day, const int& month, const int& year);

    void saveNewDate();

    void fillMyBankBalance();

    void on_cryptoGraphsButton_clicked();

    void on_myWalletButton_clicked();

    void on_goBackBtnFromGraphs_clicked();

    void on_goBackBtnFromWalletBtn_clicked();

    void on_myCryptocurrencyBtn_clicked();

    void on_addUSDBtn_clicked();

    void on_goBackBtnFromMyCryptoBtn_clicked();

    void on_goBackBtnFromDepositFundsBtn_clicked();

    void on_myCurrentOrdersBtn_clicked();

    void on_goBackBtnFromMyOrdersBtn_clicked();

    void on_myHistoricalOrdersBtn_clicked();

    void on_goBackBtnFromHistOrdersBtn_clicked();

    void on_seeOrderbookBtn_clicked();

    void on_goBackBtnFromOrderbookBtn_clicked();

    void on_sendTransferBtn_clicked();

    void on_goBackBtnFromSendTransferBtn_clicked();

    void on_goBackFromTransfersHistBtn_clicked();

    void on_historicalTransfersBtn_clicked();

    void on_myCFDBtn_clicked();

    void on_goBackBtnFromCFDBtn_clicked();

    void on_historicalCFDBtn_clicked();

    void on_goBackBtnFromHistCFDBtn_clicked();

    void on_addUSDConfirmBtn_clicked();

    void on_sendTransferConfirmBtn_clicked();

    QLabel* createQLabel(const int& height, const int& width);

    std::string cryptoTypeToString(const cryptoType ct);

    void makePlot(cryptoType ct);

    void on_bitcoinGraphBtn_clicked();

    void on_ethereumGraphBtn_clicked();

    void on_binanceCoinGraphBtn_clicked();

    void on_tetherGraphBtn_clicked();

    void on_rippleGraphBtn_clicked();

    void on_submitOrderBtn_clicked();

    void on_chooseOrderType_activated(const QString &arg1);

    void on_submitCFDBtn_clicked();

    void realizeCFD();

    void printCFDs();

    void on_deleteCFDBtn_clicked();

    void printMyOrders();

    void printHistoricalOrders();

    void on_deleteOrderBtn_clicked();

    void realizeOrders();

private:
    Ui::MainWindow *ui;
    Exchange exchange;
};
#endif // MAINWINDOW_H
