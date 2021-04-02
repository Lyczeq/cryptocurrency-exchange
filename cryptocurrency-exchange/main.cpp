#include "mainwindow.h"
#include"userslist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    UsersList programsUsersList;

    Exchange mainExchange(programsUsersList);

    QApplication a(argc, argv);
    MainWindow w(mainExchange);
    w.show();
    return a.exec();

}
