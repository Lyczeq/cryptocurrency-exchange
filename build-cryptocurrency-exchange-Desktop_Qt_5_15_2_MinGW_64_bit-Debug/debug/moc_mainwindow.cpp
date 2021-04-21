/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../cryptocurrency-exchange/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[59];
    char stringdata0[1399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 4), // "dodo"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 10), // "cryptoType"
QT_MOC_LITERAL(4, 28, 2), // "ct"
QT_MOC_LITERAL(5, 31, 23), // "on_signInButton_clicked"
QT_MOC_LITERAL(6, 55, 23), // "on_signUpButton_clicked"
QT_MOC_LITERAL(7, 79, 21), // "on_quitButton_clicked"
QT_MOC_LITERAL(8, 101, 38), // "on_goBackButtonFromSignUpPane..."
QT_MOC_LITERAL(9, 140, 38), // "on_goBackButtonFromSignInPane..."
QT_MOC_LITERAL(10, 179, 26), // "on_signInButtonLog_clicked"
QT_MOC_LITERAL(11, 206, 32), // "on_signUpButtonCreateAcc_clicked"
QT_MOC_LITERAL(12, 239, 33), // "on_quitButtonFromMainPage_cli..."
QT_MOC_LITERAL(13, 273, 23), // "on_LogOutButton_clicked"
QT_MOC_LITERAL(14, 297, 14), // "fillRatesTable"
QT_MOC_LITERAL(15, 312, 27), // "on_changeDateButton_clicked"
QT_MOC_LITERAL(16, 340, 14), // "isNewDateLower"
QT_MOC_LITERAL(17, 355, 3), // "day"
QT_MOC_LITERAL(18, 359, 5), // "month"
QT_MOC_LITERAL(19, 365, 4), // "year"
QT_MOC_LITERAL(20, 370, 11), // "saveNewDate"
QT_MOC_LITERAL(21, 382, 17), // "fillMyBankBalance"
QT_MOC_LITERAL(22, 400, 29), // "on_cryptoGraphsButton_clicked"
QT_MOC_LITERAL(23, 430, 25), // "on_myWalletButton_clicked"
QT_MOC_LITERAL(24, 456, 30), // "on_goBackBtnFromGraphs_clicked"
QT_MOC_LITERAL(25, 487, 33), // "on_goBackBtnFromWalletBtn_cli..."
QT_MOC_LITERAL(26, 521, 30), // "on_myCryptocurrencyBtn_clicked"
QT_MOC_LITERAL(27, 552, 20), // "on_addUSDBtn_clicked"
QT_MOC_LITERAL(28, 573, 35), // "on_goBackBtnFromMyCryptoBtn_c..."
QT_MOC_LITERAL(29, 609, 39), // "on_goBackBtnFromDepositFundsB..."
QT_MOC_LITERAL(30, 649, 29), // "on_myCurrentOrdersBtn_clicked"
QT_MOC_LITERAL(31, 679, 35), // "on_goBackBtnFromMyOrdersBtn_c..."
QT_MOC_LITERAL(32, 715, 32), // "on_myHistoricalOrdersBtn_clicked"
QT_MOC_LITERAL(33, 748, 37), // "on_goBackBtnFromHistOrdersBtn..."
QT_MOC_LITERAL(34, 786, 26), // "on_seeOrderbookBtn_clicked"
QT_MOC_LITERAL(35, 813, 36), // "on_goBackBtnFromOrderbookBtn_..."
QT_MOC_LITERAL(36, 850, 26), // "on_sendTransferBtn_clicked"
QT_MOC_LITERAL(37, 877, 39), // "on_goBackBtnFromSendTransferB..."
QT_MOC_LITERAL(38, 917, 37), // "on_goBackFromTransfersHistBtn..."
QT_MOC_LITERAL(39, 955, 33), // "on_historicalTransfersBtn_cli..."
QT_MOC_LITERAL(40, 989, 19), // "on_myCFDBtn_clicked"
QT_MOC_LITERAL(41, 1009, 30), // "on_goBackBtnFromCFDBtn_clicked"
QT_MOC_LITERAL(42, 1040, 27), // "on_historicalCFDBtn_clicked"
QT_MOC_LITERAL(43, 1068, 34), // "on_goBackBtnFromHistCFDBtn_cl..."
QT_MOC_LITERAL(44, 1103, 27), // "on_addUSDConfirmBtn_clicked"
QT_MOC_LITERAL(45, 1131, 33), // "on_sendTransferConfirmBtn_cli..."
QT_MOC_LITERAL(46, 1165, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(47, 1187, 12), // "createQLabel"
QT_MOC_LITERAL(48, 1200, 7), // "QLabel*"
QT_MOC_LITERAL(49, 1208, 6), // "height"
QT_MOC_LITERAL(50, 1215, 5), // "width"
QT_MOC_LITERAL(51, 1221, 18), // "cryptoTypeToString"
QT_MOC_LITERAL(52, 1240, 11), // "std::string"
QT_MOC_LITERAL(53, 1252, 8), // "makePlot"
QT_MOC_LITERAL(54, 1261, 26), // "on_bitcoinGraphBtn_clicked"
QT_MOC_LITERAL(55, 1288, 27), // "on_ethereumGraphBtn_clicked"
QT_MOC_LITERAL(56, 1316, 30), // "on_binanceCoinGraphBtn_clicked"
QT_MOC_LITERAL(57, 1347, 25), // "on_tetherGraphBtn_clicked"
QT_MOC_LITERAL(58, 1373, 25) // "on_rippleGraphBtn_clicked"

    },
    "MainWindow\0dodo\0\0cryptoType\0ct\0"
    "on_signInButton_clicked\0on_signUpButton_clicked\0"
    "on_quitButton_clicked\0"
    "on_goBackButtonFromSignUpPanel_clicked\0"
    "on_goBackButtonFromSignInPanel_clicked\0"
    "on_signInButtonLog_clicked\0"
    "on_signUpButtonCreateAcc_clicked\0"
    "on_quitButtonFromMainPage_clicked\0"
    "on_LogOutButton_clicked\0fillRatesTable\0"
    "on_changeDateButton_clicked\0isNewDateLower\0"
    "day\0month\0year\0saveNewDate\0fillMyBankBalance\0"
    "on_cryptoGraphsButton_clicked\0"
    "on_myWalletButton_clicked\0"
    "on_goBackBtnFromGraphs_clicked\0"
    "on_goBackBtnFromWalletBtn_clicked\0"
    "on_myCryptocurrencyBtn_clicked\0"
    "on_addUSDBtn_clicked\0"
    "on_goBackBtnFromMyCryptoBtn_clicked\0"
    "on_goBackBtnFromDepositFundsBtn_clicked\0"
    "on_myCurrentOrdersBtn_clicked\0"
    "on_goBackBtnFromMyOrdersBtn_clicked\0"
    "on_myHistoricalOrdersBtn_clicked\0"
    "on_goBackBtnFromHistOrdersBtn_clicked\0"
    "on_seeOrderbookBtn_clicked\0"
    "on_goBackBtnFromOrderbookBtn_clicked\0"
    "on_sendTransferBtn_clicked\0"
    "on_goBackBtnFromSendTransferBtn_clicked\0"
    "on_goBackFromTransfersHistBtn_clicked\0"
    "on_historicalTransfersBtn_clicked\0"
    "on_myCFDBtn_clicked\0on_goBackBtnFromCFDBtn_clicked\0"
    "on_historicalCFDBtn_clicked\0"
    "on_goBackBtnFromHistCFDBtn_clicked\0"
    "on_addUSDConfirmBtn_clicked\0"
    "on_sendTransferConfirmBtn_clicked\0"
    "on_pushButton_clicked\0createQLabel\0"
    "QLabel*\0height\0width\0cryptoTypeToString\0"
    "std::string\0makePlot\0on_bitcoinGraphBtn_clicked\0"
    "on_ethereumGraphBtn_clicked\0"
    "on_binanceCoinGraphBtn_clicked\0"
    "on_tetherGraphBtn_clicked\0"
    "on_rippleGraphBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  254,    2, 0x08 /* Private */,
       5,    0,  257,    2, 0x08 /* Private */,
       6,    0,  258,    2, 0x08 /* Private */,
       7,    0,  259,    2, 0x08 /* Private */,
       8,    0,  260,    2, 0x08 /* Private */,
       9,    0,  261,    2, 0x08 /* Private */,
      10,    0,  262,    2, 0x08 /* Private */,
      11,    0,  263,    2, 0x08 /* Private */,
      12,    0,  264,    2, 0x08 /* Private */,
      13,    0,  265,    2, 0x08 /* Private */,
      14,    0,  266,    2, 0x08 /* Private */,
      15,    0,  267,    2, 0x08 /* Private */,
      16,    3,  268,    2, 0x08 /* Private */,
      20,    0,  275,    2, 0x08 /* Private */,
      21,    0,  276,    2, 0x08 /* Private */,
      22,    0,  277,    2, 0x08 /* Private */,
      23,    0,  278,    2, 0x08 /* Private */,
      24,    0,  279,    2, 0x08 /* Private */,
      25,    0,  280,    2, 0x08 /* Private */,
      26,    0,  281,    2, 0x08 /* Private */,
      27,    0,  282,    2, 0x08 /* Private */,
      28,    0,  283,    2, 0x08 /* Private */,
      29,    0,  284,    2, 0x08 /* Private */,
      30,    0,  285,    2, 0x08 /* Private */,
      31,    0,  286,    2, 0x08 /* Private */,
      32,    0,  287,    2, 0x08 /* Private */,
      33,    0,  288,    2, 0x08 /* Private */,
      34,    0,  289,    2, 0x08 /* Private */,
      35,    0,  290,    2, 0x08 /* Private */,
      36,    0,  291,    2, 0x08 /* Private */,
      37,    0,  292,    2, 0x08 /* Private */,
      38,    0,  293,    2, 0x08 /* Private */,
      39,    0,  294,    2, 0x08 /* Private */,
      40,    0,  295,    2, 0x08 /* Private */,
      41,    0,  296,    2, 0x08 /* Private */,
      42,    0,  297,    2, 0x08 /* Private */,
      43,    0,  298,    2, 0x08 /* Private */,
      44,    0,  299,    2, 0x08 /* Private */,
      45,    0,  300,    2, 0x08 /* Private */,
      46,    0,  301,    2, 0x08 /* Private */,
      47,    2,  302,    2, 0x08 /* Private */,
      51,    1,  307,    2, 0x08 /* Private */,
      53,    1,  310,    2, 0x08 /* Private */,
      54,    0,  313,    2, 0x08 /* Private */,
      55,    0,  314,    2, 0x08 /* Private */,
      56,    0,  315,    2, 0x08 /* Private */,
      57,    0,  316,    2, 0x08 /* Private */,
      58,    0,  317,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,   17,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 48, QMetaType::Int, QMetaType::Int,   49,   50,
    0x80000000 | 52, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dodo((*reinterpret_cast< const cryptoType(*)>(_a[1]))); break;
        case 1: _t->on_signInButton_clicked(); break;
        case 2: _t->on_signUpButton_clicked(); break;
        case 3: _t->on_quitButton_clicked(); break;
        case 4: _t->on_goBackButtonFromSignUpPanel_clicked(); break;
        case 5: _t->on_goBackButtonFromSignInPanel_clicked(); break;
        case 6: _t->on_signInButtonLog_clicked(); break;
        case 7: _t->on_signUpButtonCreateAcc_clicked(); break;
        case 8: _t->on_quitButtonFromMainPage_clicked(); break;
        case 9: _t->on_LogOutButton_clicked(); break;
        case 10: _t->fillRatesTable(); break;
        case 11: _t->on_changeDateButton_clicked(); break;
        case 12: { bool _r = _t->isNewDateLower((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->saveNewDate(); break;
        case 14: _t->fillMyBankBalance(); break;
        case 15: _t->on_cryptoGraphsButton_clicked(); break;
        case 16: _t->on_myWalletButton_clicked(); break;
        case 17: _t->on_goBackBtnFromGraphs_clicked(); break;
        case 18: _t->on_goBackBtnFromWalletBtn_clicked(); break;
        case 19: _t->on_myCryptocurrencyBtn_clicked(); break;
        case 20: _t->on_addUSDBtn_clicked(); break;
        case 21: _t->on_goBackBtnFromMyCryptoBtn_clicked(); break;
        case 22: _t->on_goBackBtnFromDepositFundsBtn_clicked(); break;
        case 23: _t->on_myCurrentOrdersBtn_clicked(); break;
        case 24: _t->on_goBackBtnFromMyOrdersBtn_clicked(); break;
        case 25: _t->on_myHistoricalOrdersBtn_clicked(); break;
        case 26: _t->on_goBackBtnFromHistOrdersBtn_clicked(); break;
        case 27: _t->on_seeOrderbookBtn_clicked(); break;
        case 28: _t->on_goBackBtnFromOrderbookBtn_clicked(); break;
        case 29: _t->on_sendTransferBtn_clicked(); break;
        case 30: _t->on_goBackBtnFromSendTransferBtn_clicked(); break;
        case 31: _t->on_goBackFromTransfersHistBtn_clicked(); break;
        case 32: _t->on_historicalTransfersBtn_clicked(); break;
        case 33: _t->on_myCFDBtn_clicked(); break;
        case 34: _t->on_goBackBtnFromCFDBtn_clicked(); break;
        case 35: _t->on_historicalCFDBtn_clicked(); break;
        case 36: _t->on_goBackBtnFromHistCFDBtn_clicked(); break;
        case 37: _t->on_addUSDConfirmBtn_clicked(); break;
        case 38: _t->on_sendTransferConfirmBtn_clicked(); break;
        case 39: _t->on_pushButton_clicked(); break;
        case 40: { QLabel* _r = _t->createQLabel((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = std::move(_r); }  break;
        case 41: { std::string _r = _t->cryptoTypeToString((*reinterpret_cast< const cryptoType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 42: _t->makePlot((*reinterpret_cast< cryptoType(*)>(_a[1]))); break;
        case 43: _t->on_bitcoinGraphBtn_clicked(); break;
        case 44: _t->on_ethereumGraphBtn_clicked(); break;
        case 45: _t->on_binanceCoinGraphBtn_clicked(); break;
        case 46: _t->on_tetherGraphBtn_clicked(); break;
        case 47: _t->on_rippleGraphBtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
