/****************************************************************************
** Meta object code from reading C++ file 'history.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/history.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'history.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HistoryManager_t {
    QByteArrayData data[15];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistoryManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistoryManager_t qt_meta_stringdata_HistoryManager = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 12),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 10),
QT_MOC_LITERAL(4, 40, 11),
QT_MOC_LITERAL(5, 52, 4),
QT_MOC_LITERAL(6, 57, 12),
QT_MOC_LITERAL(7, 70, 12),
QT_MOC_LITERAL(8, 83, 6),
QT_MOC_LITERAL(9, 90, 5),
QT_MOC_LITERAL(10, 96, 12),
QT_MOC_LITERAL(11, 109, 4),
QT_MOC_LITERAL(12, 114, 4),
QT_MOC_LITERAL(13, 119, 15),
QT_MOC_LITERAL(14, 135, 12)
    },
    "HistoryManager\0historyReset\0\0entryAdded\0"
    "HistoryItem\0item\0entryRemoved\0"
    "entryUpdated\0offset\0clear\0loadSettings\0"
    "load\0save\0checkForExpired\0historyLimit\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x05,
       3,    1,   60,    2, 0x05,
       6,    1,   63,    2, 0x05,
       7,    1,   66,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    0,   69,    2, 0x0a,
      10,    0,   70,    2, 0x0a,
      11,    0,   71,    2, 0x0a,
      12,    0,   72,    2, 0x08,
      13,    0,   73,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00095103,

       0        // eod
};

void HistoryManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistoryManager *_t = static_cast<HistoryManager *>(_o);
        switch (_id) {
        case 0: _t->historyReset(); break;
        case 1: _t->entryAdded((*reinterpret_cast< const HistoryItem(*)>(_a[1]))); break;
        case 2: _t->entryRemoved((*reinterpret_cast< const HistoryItem(*)>(_a[1]))); break;
        case 3: _t->entryUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->loadSettings(); break;
        case 6: _t->load(); break;
        case 7: _t->save(); break;
        case 8: _t->checkForExpired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HistoryManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryManager::historyReset)) {
                *result = 0;
            }
        }
        {
            typedef void (HistoryManager::*_t)(const HistoryItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryManager::entryAdded)) {
                *result = 1;
            }
        }
        {
            typedef void (HistoryManager::*_t)(const HistoryItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryManager::entryRemoved)) {
                *result = 2;
            }
        }
        {
            typedef void (HistoryManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryManager::entryUpdated)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject HistoryManager::staticMetaObject = {
    { &QWebHistoryInterface::staticMetaObject, qt_meta_stringdata_HistoryManager.data,
      qt_meta_data_HistoryManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistoryManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryManager.stringdata))
        return static_cast<void*>(const_cast< HistoryManager*>(this));
    return QWebHistoryInterface::qt_metacast(_clname);
}

int HistoryManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebHistoryInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = historyLimit(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setHistoryLimit(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HistoryManager::historyReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HistoryManager::entryAdded(const HistoryItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HistoryManager::entryRemoved(const HistoryItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HistoryManager::entryUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_HistoryModel_t {
    QByteArrayData data[6];
    char stringdata[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistoryModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistoryModel_t qt_meta_stringdata_HistoryModel = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 12),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 10),
QT_MOC_LITERAL(4, 38, 12),
QT_MOC_LITERAL(5, 51, 6)
    },
    "HistoryModel\0historyReset\0\0entryAdded\0"
    "entryUpdated\0offset\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a,
       3,    0,   30,    2, 0x0a,
       4,    1,   31,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void HistoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistoryModel *_t = static_cast<HistoryModel *>(_o);
        switch (_id) {
        case 0: _t->historyReset(); break;
        case 1: _t->entryAdded(); break;
        case 2: _t->entryUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HistoryModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_HistoryModel.data,
      qt_meta_data_HistoryModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryModel.stringdata))
        return static_cast<void*>(const_cast< HistoryModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int HistoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_HistoryFilterModel_t {
    QByteArrayData data[11];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistoryFilterModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistoryFilterModel_t qt_meta_stringdata_HistoryFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 11),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 17),
QT_MOC_LITERAL(4, 50, 7),
QT_MOC_LITERAL(5, 58, 11),
QT_MOC_LITERAL(6, 70, 18),
QT_MOC_LITERAL(7, 89, 6),
QT_MOC_LITERAL(8, 96, 5),
QT_MOC_LITERAL(9, 102, 3),
QT_MOC_LITERAL(10, 106, 17)
    },
    "HistoryFilterModel\0sourceReset\0\0"
    "sourceDataChanged\0topLeft\0bottomRight\0"
    "sourceRowsInserted\0parent\0start\0end\0"
    "sourceRowsRemoved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryFilterModel[] = {

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
       3,    2,   35,    2, 0x08,
       6,    3,   40,    2, 0x08,
      10,    3,   47,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void HistoryFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistoryFilterModel *_t = static_cast<HistoryFilterModel *>(_o);
        switch (_id) {
        case 0: _t->sourceReset(); break;
        case 1: _t->sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->sourceRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->sourceRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject HistoryFilterModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_HistoryFilterModel.data,
      qt_meta_data_HistoryFilterModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistoryFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryFilterModel.stringdata))
        return static_cast<void*>(const_cast< HistoryFilterModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int HistoryFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_HistoryMenuModel_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistoryMenuModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistoryMenuModel_t qt_meta_stringdata_HistoryMenuModel = {
    {
QT_MOC_LITERAL(0, 0, 16)
    },
    "HistoryMenuModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryMenuModel[] = {

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

void HistoryMenuModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject HistoryMenuModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_HistoryMenuModel.data,
      qt_meta_data_HistoryMenuModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistoryMenuModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryMenuModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryMenuModel.stringdata))
        return static_cast<void*>(const_cast< HistoryMenuModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int HistoryMenuModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_HistoryMenu_t {
    QByteArrayData data[7];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistoryMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistoryMenu_t qt_meta_stringdata_HistoryMenu = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 7),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 3),
QT_MOC_LITERAL(4, 25, 9),
QT_MOC_LITERAL(5, 35, 5),
QT_MOC_LITERAL(6, 41, 17)
    },
    "HistoryMenu\0openUrl\0\0url\0activated\0"
    "index\0showHistoryDialog\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08,
       6,    0,   35,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,

       0        // eod
};

void HistoryMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistoryMenu *_t = static_cast<HistoryMenu *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->showHistoryDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HistoryMenu::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryMenu::openUrl)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HistoryMenu::staticMetaObject = {
    { &ModelMenu::staticMetaObject, qt_meta_stringdata_HistoryMenu.data,
      qt_meta_data_HistoryMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistoryMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryMenu.stringdata))
        return static_cast<void*>(const_cast< HistoryMenu*>(this));
    return ModelMenu::qt_metacast(_clname);
}

int HistoryMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HistoryMenu::openUrl(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_HistoryCompletionModel_t {
    QByteArrayData data[3];
    char stringdata[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistoryCompletionModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistoryCompletionModel_t qt_meta_stringdata_HistoryCompletionModel = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 11),
QT_MOC_LITERAL(2, 35, 0)
    },
    "HistoryCompletionModel\0sourceReset\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryCompletionModel[] = {

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

void HistoryCompletionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistoryCompletionModel *_t = static_cast<HistoryCompletionModel *>(_o);
        switch (_id) {
        case 0: _t->sourceReset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HistoryCompletionModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_HistoryCompletionModel.data,
      qt_meta_data_HistoryCompletionModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistoryCompletionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryCompletionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryCompletionModel.stringdata))
        return static_cast<void*>(const_cast< HistoryCompletionModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int HistoryCompletionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_HistoryTreeModel_t {
    QByteArrayData data[8];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistoryTreeModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistoryTreeModel_t qt_meta_stringdata_HistoryTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 11),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 18),
QT_MOC_LITERAL(4, 49, 6),
QT_MOC_LITERAL(5, 56, 5),
QT_MOC_LITERAL(6, 62, 3),
QT_MOC_LITERAL(7, 66, 17)
    },
    "HistoryTreeModel\0sourceReset\0\0"
    "sourceRowsInserted\0parent\0start\0end\0"
    "sourceRowsRemoved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryTreeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08,
       3,    3,   30,    2, 0x08,
       7,    3,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    4,    5,    6,

       0        // eod
};

void HistoryTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistoryTreeModel *_t = static_cast<HistoryTreeModel *>(_o);
        switch (_id) {
        case 0: _t->sourceReset(); break;
        case 1: _t->sourceRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->sourceRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject HistoryTreeModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_HistoryTreeModel.data,
      qt_meta_data_HistoryTreeModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistoryTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryTreeModel.stringdata))
        return static_cast<void*>(const_cast< HistoryTreeModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int HistoryTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_TreeProxyModel_t {
    QByteArrayData data[1];
    char stringdata[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TreeProxyModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TreeProxyModel_t qt_meta_stringdata_TreeProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 14)
    },
    "TreeProxyModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TreeProxyModel[] = {

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

void TreeProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TreeProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_TreeProxyModel.data,
      qt_meta_data_TreeProxyModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *TreeProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TreeProxyModel.stringdata))
        return static_cast<void*>(const_cast< TreeProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int TreeProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_HistoryDialog_t {
    QByteArrayData data[8];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistoryDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistoryDialog_t qt_meta_stringdata_HistoryDialog = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 7),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 3),
QT_MOC_LITERAL(4, 27, 26),
QT_MOC_LITERAL(5, 54, 3),
QT_MOC_LITERAL(6, 58, 4),
QT_MOC_LITERAL(7, 63, 4)
    },
    "HistoryDialog\0openUrl\0\0url\0"
    "customContextMenuRequested\0pos\0open\0"
    "copy\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x08,
       6,    0,   40,    2, 0x08,
       7,    0,   41,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HistoryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistoryDialog *_t = static_cast<HistoryDialog *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->open(); break;
        case 3: _t->copy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HistoryDialog::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistoryDialog::openUrl)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HistoryDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HistoryDialog.data,
      qt_meta_data_HistoryDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistoryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryDialog.stringdata))
        return static_cast<void*>(const_cast< HistoryDialog*>(this));
    if (!strcmp(_clname, "Ui_HistoryDialog"))
        return static_cast< Ui_HistoryDialog*>(const_cast< HistoryDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int HistoryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void HistoryDialog::openUrl(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
