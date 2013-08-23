/****************************************************************************
** Meta object code from reading C++ file 'Interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI-Interface/Interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Interface_t {
    QByteArrayData data[23];
    char stringdata[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Interface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Interface_t qt_meta_stringdata_Interface = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 12),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 13),
QT_MOC_LITERAL(4, 38, 14),
QT_MOC_LITERAL(5, 53, 14),
QT_MOC_LITERAL(6, 68, 13),
QT_MOC_LITERAL(7, 82, 5),
QT_MOC_LITERAL(8, 88, 12),
QT_MOC_LITERAL(9, 101, 5),
QT_MOC_LITERAL(10, 107, 12),
QT_MOC_LITERAL(11, 120, 13),
QT_MOC_LITERAL(12, 134, 11),
QT_MOC_LITERAL(13, 146, 11),
QT_MOC_LITERAL(14, 158, 11),
QT_MOC_LITERAL(15, 170, 5),
QT_MOC_LITERAL(16, 176, 7),
QT_MOC_LITERAL(17, 184, 13),
QT_MOC_LITERAL(18, 198, 11),
QT_MOC_LITERAL(19, 210, 17),
QT_MOC_LITERAL(20, 228, 11),
QT_MOC_LITERAL(21, 240, 28),
QT_MOC_LITERAL(22, 269, 5)
    },
    "Interface\0goToRoriMode\0\0goToGraphMode\0"
    "goToOptionMode\0goToAgendaMode\0"
    "changeBGImage\0image\0changeColor1\0color\0"
    "changeColor2\0onTimerFinish\0sendClicked\0"
    "sendMessage\0QTcpSocket*\0cible\0message\0"
    "newConnection\0dataReceive\0serverReceiveData\0"
    "SocketError\0QAbstractSocket::SocketError\0"
    "error\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a,
       3,    0,   85,    2, 0x0a,
       4,    0,   86,    2, 0x0a,
       5,    0,   87,    2, 0x0a,
       6,    1,   88,    2, 0x0a,
       8,    1,   91,    2, 0x0a,
      10,    1,   94,    2, 0x0a,
      11,    0,   97,    2, 0x0a,
      12,    0,   98,    2, 0x0a,
      13,    2,   99,    2, 0x0a,
      17,    0,  104,    2, 0x0a,
      18,    0,  105,    2, 0x0a,
      19,    0,  106,    2, 0x0a,
      20,    1,  107,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Interface *_t = static_cast<Interface *>(_o);
        switch (_id) {
        case 0: _t->goToRoriMode(); break;
        case 1: _t->goToGraphMode(); break;
        case 2: _t->goToOptionMode(); break;
        case 3: _t->goToAgendaMode(); break;
        case 4: _t->changeBGImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->changeColor1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->changeColor2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onTimerFinish(); break;
        case 8: _t->sendClicked(); break;
        case 9: _t->sendMessage((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->newConnection(); break;
        case 11: _t->dataReceive(); break;
        case 12: _t->serverReceiveData(); break;
        case 13: _t->SocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject Interface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Interface.data,
      qt_meta_data_Interface,  qt_static_metacall, 0, 0}
};


const QMetaObject *Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Interface.stringdata))
        return static_cast<void*>(const_cast< Interface*>(this));
    return QWidget::qt_metacast(_clname);
}

int Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
