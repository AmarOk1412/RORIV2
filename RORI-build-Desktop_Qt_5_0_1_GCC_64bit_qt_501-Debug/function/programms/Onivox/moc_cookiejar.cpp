/****************************************************************************
** Meta object code from reading C++ file 'cookiejar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/cookiejar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cookiejar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CookieJar_t {
    QByteArrayData data[19];
    char stringdata[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CookieJar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CookieJar_t qt_meta_stringdata_CookieJar = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 14),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 5),
QT_MOC_LITERAL(4, 32, 12),
QT_MOC_LITERAL(5, 45, 4),
QT_MOC_LITERAL(6, 50, 12),
QT_MOC_LITERAL(7, 63, 12),
QT_MOC_LITERAL(8, 76, 10),
QT_MOC_LITERAL(9, 87, 10),
QT_MOC_LITERAL(10, 98, 14),
QT_MOC_LITERAL(11, 113, 14),
QT_MOC_LITERAL(12, 128, 22),
QT_MOC_LITERAL(13, 151, 12),
QT_MOC_LITERAL(14, 164, 11),
QT_MOC_LITERAL(15, 176, 30),
QT_MOC_LITERAL(16, 207, 15),
QT_MOC_LITERAL(17, 223, 13),
QT_MOC_LITERAL(18, 237, 18)
    },
    "CookieJar\0cookiesChanged\0\0clear\0"
    "loadSettings\0save\0acceptPolicy\0"
    "AcceptPolicy\0keepPolicy\0KeepPolicy\0"
    "blockedCookies\0allowedCookies\0"
    "allowForSessionCookies\0AcceptAlways\0"
    "AcceptNever\0AcceptOnlyFromSitesNavigatedTo\0"
    "KeepUntilExpire\0KeepUntilExit\0"
    "KeepUntilTimeLimit\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CookieJar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   38, // properties
       2,   53, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a,
       4,    0,   36,    2, 0x0a,
       5,    0,   37,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0009510b,
       8, 0x80000000 | 9, 0x0009510b,
      10, QMetaType::QStringList, 0x00095103,
      11, QMetaType::QStringList, 0x00095103,
      12, QMetaType::QStringList, 0x00095103,

 // enums: name, flags, count, data
       7, 0x0,    3,   61,
       9, 0x0,    3,   67,

 // enum data: key, value
      13, uint(CookieJar::AcceptAlways),
      14, uint(CookieJar::AcceptNever),
      15, uint(CookieJar::AcceptOnlyFromSitesNavigatedTo),
      16, uint(CookieJar::KeepUntilExpire),
      17, uint(CookieJar::KeepUntilExit),
      18, uint(CookieJar::KeepUntilTimeLimit),

       0        // eod
};

void CookieJar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CookieJar *_t = static_cast<CookieJar *>(_o);
        switch (_id) {
        case 0: _t->cookiesChanged(); break;
        case 1: _t->clear(); break;
        case 2: _t->loadSettings(); break;
        case 3: _t->save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CookieJar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CookieJar::cookiesChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CookieJar::staticMetaObject = {
    { &QNetworkCookieJar::staticMetaObject, qt_meta_stringdata_CookieJar.data,
      qt_meta_data_CookieJar,  qt_static_metacall, 0, 0}
};


const QMetaObject *CookieJar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CookieJar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CookieJar.stringdata))
        return static_cast<void*>(const_cast< CookieJar*>(this));
    return QNetworkCookieJar::qt_metacast(_clname);
}

int CookieJar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkCookieJar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AcceptPolicy*>(_v) = acceptPolicy(); break;
        case 1: *reinterpret_cast< KeepPolicy*>(_v) = keepPolicy(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = blockedCookies(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = allowedCookies(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = allowForSessionCookies(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAcceptPolicy(*reinterpret_cast< AcceptPolicy*>(_v)); break;
        case 1: setKeepPolicy(*reinterpret_cast< KeepPolicy*>(_v)); break;
        case 2: setBlockedCookies(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: setAllowedCookies(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: setAllowForSessionCookies(*reinterpret_cast< QStringList*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CookieJar::cookiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_CookieModel_t {
    QByteArrayData data[3];
    char stringdata[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CookieModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CookieModel_t qt_meta_stringdata_CookieModel = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 14),
QT_MOC_LITERAL(2, 27, 0)
    },
    "CookieModel\0cookiesChanged\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CookieModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CookieModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CookieModel *_t = static_cast<CookieModel *>(_o);
        switch (_id) {
        case 0: _t->cookiesChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CookieModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_CookieModel.data,
      qt_meta_data_CookieModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *CookieModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CookieModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CookieModel.stringdata))
        return static_cast<void*>(const_cast< CookieModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int CookieModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_CookiesDialog_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CookiesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CookiesDialog_t qt_meta_stringdata_CookiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 13)
    },
    "CookiesDialog\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CookiesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CookiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CookiesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CookiesDialog.data,
      qt_meta_data_CookiesDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CookiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CookiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CookiesDialog.stringdata))
        return static_cast<void*>(const_cast< CookiesDialog*>(this));
    if (!strcmp(_clname, "Ui_CookiesDialog"))
        return static_cast< Ui_CookiesDialog*>(const_cast< CookiesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CookiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CookieExceptionsModel_t {
    QByteArrayData data[1];
    char stringdata[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CookieExceptionsModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CookieExceptionsModel_t qt_meta_stringdata_CookieExceptionsModel = {
    {
QT_MOC_LITERAL(0, 0, 21)
    },
    "CookieExceptionsModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CookieExceptionsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CookieExceptionsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CookieExceptionsModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_CookieExceptionsModel.data,
      qt_meta_data_CookieExceptionsModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *CookieExceptionsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CookieExceptionsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CookieExceptionsModel.stringdata))
        return static_cast<void*>(const_cast< CookieExceptionsModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int CookieExceptionsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CookiesExceptionsDialog_t {
    QByteArrayData data[7];
    char stringdata[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CookiesExceptionsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CookiesExceptionsDialog_t qt_meta_stringdata_CookiesExceptionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 5),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 5),
QT_MOC_LITERAL(4, 37, 15),
QT_MOC_LITERAL(5, 53, 11),
QT_MOC_LITERAL(6, 65, 4)
    },
    "CookiesExceptionsDialog\0block\0\0allow\0"
    "allowForSession\0textChanged\0text\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CookiesExceptionsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    0,   36,    2, 0x08,
       5,    1,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void CookiesExceptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CookiesExceptionsDialog *_t = static_cast<CookiesExceptionsDialog *>(_o);
        switch (_id) {
        case 0: _t->block(); break;
        case 1: _t->allow(); break;
        case 2: _t->allowForSession(); break;
        case 3: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CookiesExceptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CookiesExceptionsDialog.data,
      qt_meta_data_CookiesExceptionsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CookiesExceptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CookiesExceptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CookiesExceptionsDialog.stringdata))
        return static_cast<void*>(const_cast< CookiesExceptionsDialog*>(this));
    if (!strcmp(_clname, "Ui_CookiesExceptionsDialog"))
        return static_cast< Ui_CookiesExceptionsDialog*>(const_cast< CookiesExceptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CookiesExceptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
