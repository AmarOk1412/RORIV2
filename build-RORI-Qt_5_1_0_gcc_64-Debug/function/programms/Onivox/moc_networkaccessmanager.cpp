/****************************************************************************
** Meta object code from reading C++ file 'networkaccessmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/networkaccessmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkaccessmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetworkAccessManager_t {
    QByteArrayData data[15];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NetworkAccessManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NetworkAccessManager_t qt_meta_stringdata_NetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 12),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 15),
QT_MOC_LITERAL(4, 51, 14),
QT_MOC_LITERAL(5, 66, 5),
QT_MOC_LITERAL(6, 72, 22),
QT_MOC_LITERAL(7, 95, 15),
QT_MOC_LITERAL(8, 111, 4),
QT_MOC_LITERAL(9, 116, 27),
QT_MOC_LITERAL(10, 144, 13),
QT_MOC_LITERAL(11, 158, 5),
QT_MOC_LITERAL(12, 164, 9),
QT_MOC_LITERAL(13, 174, 16),
QT_MOC_LITERAL(14, 191, 5)
    },
    "NetworkAccessManager\0loadSettings\0\0"
    "requestFinished\0QNetworkReply*\0reply\0"
    "authenticationRequired\0QAuthenticator*\0"
    "auth\0proxyAuthenticationRequired\0"
    "QNetworkProxy\0proxy\0sslErrors\0"
    "QList<QSslError>\0error\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkAccessManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a,
       3,    1,   40,    2, 0x0a,
       6,    2,   43,    2, 0x08,
       9,    2,   48,    2, 0x08,
      12,    2,   53,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 7,    5,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 7,   11,    8,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 13,    5,   14,

       0        // eod
};

void NetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkAccessManager *_t = static_cast<NetworkAccessManager *>(_o);
        switch (_id) {
        case 0: _t->loadSettings(); break;
        case 1: _t->requestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 3: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 4: _t->sslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject NetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_NetworkAccessManager.data,
      qt_meta_data_NetworkAccessManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *NetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkAccessManager.stringdata))
        return static_cast<void*>(const_cast< NetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int NetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
