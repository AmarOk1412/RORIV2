/****************************************************************************
** Meta object code from reading C++ file 'Server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/Server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[26];
    char stringdata[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Server_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 11),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 7),
QT_MOC_LITERAL(4, 28, 9),
QT_MOC_LITERAL(5, 38, 7),
QT_MOC_LITERAL(6, 46, 9),
QT_MOC_LITERAL(7, 56, 11),
QT_MOC_LITERAL(8, 68, 14),
QT_MOC_LITERAL(9, 83, 6),
QT_MOC_LITERAL(10, 90, 11),
QT_MOC_LITERAL(11, 102, 5),
QT_MOC_LITERAL(12, 108, 8),
QT_MOC_LITERAL(13, 117, 5),
QT_MOC_LITERAL(14, 123, 7),
QT_MOC_LITERAL(15, 131, 4),
QT_MOC_LITERAL(16, 136, 13),
QT_MOC_LITERAL(17, 150, 11),
QT_MOC_LITERAL(18, 162, 16),
QT_MOC_LITERAL(19, 179, 6),
QT_MOC_LITERAL(20, 186, 2),
QT_MOC_LITERAL(21, 189, 4),
QT_MOC_LITERAL(22, 194, 13),
QT_MOC_LITERAL(23, 208, 8),
QT_MOC_LITERAL(24, 217, 15),
QT_MOC_LITERAL(25, 233, 13)
    },
    "Server\0goToWebSite\0\0webSite\0precedent\0"
    "suivant\0takeVideo\0takePicture\0"
    "searchOnEngine\0search\0setBookmark\0"
    "print\0showCode\0close\0WebSite\0temp\0"
    "newConnection\0ReceiveData\0disconnectClient\0"
    "sendAt\0ip\0port\0messageToSend\0workData\0"
    "messageTransmis\0onTimerFinish\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x05,
       4,    0,  102,    2, 0x05,
       5,    0,  103,    2, 0x05,
       6,    0,  104,    2, 0x05,
       7,    0,  105,    2, 0x05,
       8,    1,  106,    2, 0x05,
      10,    0,  109,    2, 0x05,
      11,    0,  110,    2, 0x05,
      12,    0,  111,    2, 0x05,
      13,    0,  112,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      14,    1,  113,    2, 0x0a,
      16,    0,  116,    2, 0x0a,
      17,    0,  117,    2, 0x0a,
      18,    0,  118,    2, 0x0a,
      19,    3,  119,    2, 0x0a,
      23,    1,  126,    2, 0x0a,
      25,    0,  129,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   21,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Server *_t = static_cast<Server *>(_o);
        switch (_id) {
        case 0: _t->goToWebSite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->precedent(); break;
        case 2: _t->suivant(); break;
        case 3: _t->takeVideo(); break;
        case 4: _t->takePicture(); break;
        case 5: _t->searchOnEngine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setBookmark(); break;
        case 7: _t->print(); break;
        case 8: _t->showCode(); break;
        case 9: _t->close(); break;
        case 10: _t->WebSite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->newConnection(); break;
        case 12: _t->ReceiveData(); break;
        case 13: _t->disconnectClient(); break;
        case 14: _t->sendAt((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 15: _t->workData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->onTimerFinish(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Server::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::goToWebSite)) {
                *result = 0;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::precedent)) {
                *result = 1;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::suivant)) {
                *result = 2;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::takeVideo)) {
                *result = 3;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::takePicture)) {
                *result = 4;
            }
        }
        {
            typedef void (Server::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::searchOnEngine)) {
                *result = 5;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::setBookmark)) {
                *result = 6;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::print)) {
                *result = 7;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::showCode)) {
                *result = 8;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::close)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject Server::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Server.data,
      qt_meta_data_Server,  qt_static_metacall, 0, 0}
};


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata))
        return static_cast<void*>(const_cast< Server*>(this));
    return QWidget::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Server::goToWebSite(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Server::precedent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Server::suivant()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Server::takeVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Server::takePicture()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Server::searchOnEngine(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Server::setBookmark()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Server::print()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Server::showCode()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void Server::close()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
