#include "mainwindow.h"
#include"userslist.h"
#include <QApplication>


int main(int argc, char *argv[])
{
//    UsersList programsUsersList;
//    Rates rates;
//    Exchange mainExchange(programsUsersList, rates);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}
