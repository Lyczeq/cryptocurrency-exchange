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
    QByteArrayData data[18];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_signInButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_signUpButton_clicked"
QT_MOC_LITERAL(4, 60, 21), // "on_quitButton_clicked"
QT_MOC_LITERAL(5, 82, 38), // "on_goBackButtonFromSignUpPane..."
QT_MOC_LITERAL(6, 121, 38), // "on_goBackButtonFromSignInPane..."
QT_MOC_LITERAL(7, 160, 26), // "on_signInButtonLog_clicked"
QT_MOC_LITERAL(8, 187, 32), // "on_signUpButtonCreateAcc_clicked"
QT_MOC_LITERAL(9, 220, 33), // "on_quitButtonFromMainPage_cli..."
QT_MOC_LITERAL(10, 254, 23), // "on_LogOutButton_clicked"
QT_MOC_LITERAL(11, 278, 14), // "fillRatesTable"
QT_MOC_LITERAL(12, 293, 27), // "on_changeDateButton_clicked"
QT_MOC_LITERAL(13, 321, 14), // "isNewDateLower"
QT_MOC_LITERAL(14, 336, 3), // "day"
QT_MOC_LITERAL(15, 340, 5), // "month"
QT_MOC_LITERAL(16, 346, 4), // "year"
QT_MOC_LITERAL(17, 351, 11) // "saveNewDate"

    },
    "MainWindow\0on_signInButton_clicked\0\0"
    "on_signUpButton_clicked\0on_quitButton_clicked\0"
    "on_goBackButtonFromSignUpPanel_clicked\0"
    "on_goBackButtonFromSignInPanel_clicked\0"
    "on_signInButtonLog_clicked\0"
    "on_signUpButtonCreateAcc_clicked\0"
    "on_quitButtonFromMainPage_clicked\0"
    "on_LogOutButton_clicked\0fillRatesTable\0"
    "on_changeDateButton_clicked\0isNewDateLower\0"
    "day\0month\0year\0saveNewDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    3,   90,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_signInButton_clicked(); break;
        case 1: _t->on_signUpButton_clicked(); break;
        case 2: _t->on_quitButton_clicked(); break;
        case 3: _t->on_goBackButtonFromSignUpPanel_clicked(); break;
        case 4: _t->on_goBackButtonFromSignInPanel_clicked(); break;
        case 5: _t->on_signInButtonLog_clicked(); break;
        case 6: _t->on_signUpButtonCreateAcc_clicked(); break;
        case 7: _t->on_quitButtonFromMainPage_clicked(); break;
        case 8: _t->on_LogOutButton_clicked(); break;
        case 9: _t->fillRatesTable(); break;
        case 10: _t->on_changeDateButton_clicked(); break;
        case 11: { bool _r = _t->isNewDateLower((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->saveNewDate(); break;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
