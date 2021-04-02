QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cryptoType.cpp \
    cryptocurrency.cpp \
    exchange.cpp \
    main.cpp \
    mainwindow.cpp \
    orderbook.cpp \
    rates.cpp \
    user.cpp \
    userslist.cpp \
    wallet.cpp

HEADERS += \
    cryptoType.h \
    cryptocurrency.h \
    exchange.h \
    mainwindow.h \
    orderbook.h \
    rates.h \
    user.h \
    userslist.h \
    wallet.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
