QT       += core gui
QT       += core gui charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cfd.cpp \
    cryptoType.cpp \
    cryptocurrency.cpp \
    currentrates.cpp \
    exchange.cpp \
    historicalrate.cpp \
    main.cpp \
    mainwindow.cpp \
    marketorderbuy.cpp \
    marketordersell.cpp \
    order.cpp \
    orderbook.cpp \
    qcustomplot.cpp \
    rates.cpp \
    stoplimitorder.cpp \
    stopmarketorder.cpp \
    transfer.cpp \
    user.cpp \
    userslist.cpp \
    wallet.cpp

HEADERS += \
    cfd.h \
    cryptoType.h \
    cryptocurrency.h \
    currentrates.h \
    exchange.h \
    historicalrate.h \
    mainwindow.h \
    marketorderbuy.h \
    marketordersell.h \
    order.h \
    orderbook.h \
    qcustomplot.h \
    rates.h \
    stoplimitorder.h \
    stopmarketorder.h \
    transfer.h \
    user.h \
    userslist.h \
    wallet.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
