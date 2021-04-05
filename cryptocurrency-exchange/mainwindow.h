#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<exchange.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(Exchange exch,QWidget *parent=nullptr);
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

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Exchange exchange;
};
#endif // MAINWINDOW_H
