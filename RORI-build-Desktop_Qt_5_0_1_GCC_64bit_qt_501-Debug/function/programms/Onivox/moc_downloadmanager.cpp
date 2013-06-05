/****************************************************************************
** Meta object code from reading C++ file 'downloadmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/downloadmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DownloadItem_t {
    QByteArrayData data[25];
    char stringdata[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DownloadItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DownloadItem_t qt_meta_stringdata_DownloadItem = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 13),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 18),
QT_MOC_LITERAL(4, 47, 13),
QT_MOC_LITERAL(5, 61, 10),
QT_MOC_LITERAL(6, 72, 17),
QT_MOC_LITERAL(7, 90, 11),
QT_MOC_LITERAL(8, 102, 10),
QT_MOC_LITERAL(9, 113, 6),
QT_MOC_LITERAL(10, 120, 5),
QT_MOC_LITERAL(11, 126, 4),
QT_MOC_LITERAL(12, 131, 8),
QT_MOC_LITERAL(13, 140, 10),
QT_MOC_LITERAL(14, 151, 4),
QT_MOC_LITERAL(15, 156, 13),
QT_MOC_LITERAL(16, 170, 11),
QT_MOC_LITERAL(17, 182, 9),
QT_MOC_LITERAL(18, 192, 17),
QT_MOC_LITERAL(19, 210, 5),
QT_MOC_LITERAL(20, 216, 27),
QT_MOC_LITERAL(21, 244, 4),
QT_MOC_LITERAL(22, 249, 16),
QT_MOC_LITERAL(23, 266, 15),
QT_MOC_LITERAL(24, 282, 8)
    },
    "DownloadItem\0statusChanged\0\0"
    "downloadInProgress\0bytesReceived\0"
    "bytesTotal\0downloadIsStarted\0stateChange\0"
    "deleteClic\0resume\0pause\0stop\0tryAgain\0"
    "openFolder\0open\0slotOpenAtEnd\0load_button\0"
    "load_icon\0downloadReadyRead\0error\0"
    "QNetworkReply::NetworkError\0code\0"
    "downloadProgress\0metaDataChanged\0"
    "finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x05,
       3,    2,  110,    2, 0x05,
       6,    0,  115,    2, 0x05,
       7,    0,  116,    2, 0x05,
       8,    0,  117,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    0,  118,    2, 0x0a,
      10,    0,  119,    2, 0x0a,
      11,    0,  120,    2, 0x0a,
      12,    0,  121,    2, 0x0a,
      13,    0,  122,    2, 0x0a,
      14,    0,  123,    2, 0x0a,
      15,    0,  124,    2, 0x0a,
      16,    0,  125,    2, 0x0a,
      17,    0,  126,    2, 0x0a,
      18,    0,  127,    2, 0x08,
      19,    1,  128,    2, 0x08,
      22,    2,  131,    2, 0x08,
      23,    0,  136,    2, 0x08,
      24,    0,  137,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DownloadItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadItem *_t = static_cast<DownloadItem *>(_o);
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->downloadInProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->downloadIsStarted(); break;
        case 3: _t->stateChange(); break;
        case 4: _t->deleteClic(); break;
        case 5: _t->resume(); break;
        case 6: _t->pause(); break;
        case 7: _t->stop(); break;
        case 8: _t->tryAgain(); break;
        case 9: _t->openFolder(); break;
        case 10: _t->open(); break;
        case 11: _t->slotOpenAtEnd(); break;
        case 12: _t->load_button(); break;
        case 13: _t->load_icon(); break;
        case 14: _t->downloadReadyRead(); break;
        case 15: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 16: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 17: _t->metaDataChanged(); break;
        case 18: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadItem::statusChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (DownloadItem::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadItem::downloadInProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (DownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadItem::downloadIsStarted)) {
                *result = 2;
            }
        }
        {
            typedef void (DownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadItem::stateChange)) {
                *result = 3;
            }
        }
        {
            typedef void (DownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadItem::deleteClic)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject DownloadItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DownloadItem.data,
      qt_meta_data_DownloadItem,  qt_static_metacall, 0, 0}
};


const QMetaObject *DownloadItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadItem.stringdata))
        return static_cast<void*>(const_cast< DownloadItem*>(this));
    if (!strcmp(_clname, "Ui_DownloadItem"))
        return static_cast< Ui_DownloadItem*>(const_cast< DownloadItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int DownloadItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void DownloadItem::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DownloadItem::downloadInProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DownloadItem::downloadIsStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DownloadItem::stateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DownloadItem::deleteClic()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
struct qt_meta_stringdata_DownloadManager_t {
    QByteArrayData data[25];
    char stringdata[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DownloadManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DownloadManager_t qt_meta_stringdata_DownloadManager = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 7),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 13),
QT_MOC_LITERAL(4, 39, 4),
QT_MOC_LITERAL(5, 44, 10),
QT_MOC_LITERAL(6, 55, 8),
QT_MOC_LITERAL(7, 64, 15),
QT_MOC_LITERAL(8, 80, 7),
QT_MOC_LITERAL(9, 88, 15),
QT_MOC_LITERAL(10, 104, 9),
QT_MOC_LITERAL(11, 114, 4),
QT_MOC_LITERAL(12, 119, 3),
QT_MOC_LITERAL(13, 123, 24),
QT_MOC_LITERAL(14, 148, 14),
QT_MOC_LITERAL(15, 163, 5),
QT_MOC_LITERAL(16, 169, 7),
QT_MOC_LITERAL(17, 177, 4),
QT_MOC_LITERAL(18, 182, 9),
QT_MOC_LITERAL(19, 192, 14),
QT_MOC_LITERAL(20, 207, 12),
QT_MOC_LITERAL(21, 220, 12),
QT_MOC_LITERAL(22, 233, 5),
QT_MOC_LITERAL(23, 239, 4),
QT_MOC_LITERAL(24, 244, 19)
    },
    "DownloadManager\0newItem\0\0DownloadItem*\0"
    "item\0itemDelete\0download\0QNetworkRequest\0"
    "request\0requestFileName\0MimeData*\0"
    "data\0url\0handleUnsupportedContent\0"
    "QNetworkReply*\0reply\0cleanup\0save\0"
    "updateRow\0slotDeleteItem\0removePolicy\0"
    "RemovePolicy\0Never\0Exit\0SuccessFullDownload\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       1,  142, // properties
       1,  145, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x05,
       5,    0,   92,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       6,    3,   93,    2, 0x0a,
       6,    2,  100,    2, 0x2a,
       6,    1,  105,    2, 0x2a,
       6,    3,  108,    2, 0x0a,
       6,    2,  115,    2, 0x2a,
       6,    1,  120,    2, 0x2a,
      13,    3,  123,    2, 0x0a,
      13,    2,  130,    2, 0x2a,
      13,    1,  135,    2, 0x2a,
      16,    0,  138,    2, 0x0a,
      17,    0,  139,    2, 0x08,
      18,    0,  140,    2, 0x08,
      19,    0,  141,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10,    8,    9,   11,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,    9,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool, 0x80000000 | 10,   12,    9,   11,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,   12,    9,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool, 0x80000000 | 10,   15,    9,   11,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,    9,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      20, 0x80000000 | 21, 0x0009510b,

 // enums: name, flags, count, data
      21, 0x0,    3,  149,

 // enum data: key, value
      22, uint(DownloadManager::Never),
      23, uint(DownloadManager::Exit),
      24, uint(DownloadManager::SuccessFullDownload),

       0        // eod
};

void DownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadManager *_t = static_cast<DownloadManager *>(_o);
        switch (_id) {
        case 0: _t->newItem((*reinterpret_cast< DownloadItem*(*)>(_a[1]))); break;
        case 1: _t->itemDelete(); break;
        case 2: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< MimeData*(*)>(_a[3]))); break;
        case 3: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 5: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< MimeData*(*)>(_a[3]))); break;
        case 6: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< MimeData*(*)>(_a[3]))); break;
        case 9: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->cleanup(); break;
        case 12: _t->save(); break;
        case 13: _t->updateRow(); break;
        case 14: _t->slotDeleteItem(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DownloadItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MimeData* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MimeData* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MimeData* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DownloadManager::*_t)(DownloadItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadManager::newItem)) {
                *result = 0;
            }
        }
        {
            typedef void (DownloadManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadManager::itemDelete)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject DownloadManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DownloadManager.data,
      qt_meta_data_DownloadManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *DownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadManager.stringdata))
        return static_cast<void*>(const_cast< DownloadManager*>(this));
    if (!strcmp(_clname, "Ui_DownloadDialog"))
        return static_cast< Ui_DownloadDialog*>(const_cast< DownloadManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int DownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< RemovePolicy*>(_v) = removePolicy(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRemovePolicy(*reinterpret_cast< RemovePolicy*>(_v)); break;
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
void DownloadManager::newItem(DownloadItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DownloadManager::itemDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
struct qt_meta_stringdata_DownloadModel_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DownloadModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DownloadModel_t qt_meta_stringdata_DownloadModel = {
    {
QT_MOC_LITERAL(0, 0, 13)
    },
    "DownloadModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadModel[] = {

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

void DownloadModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DownloadModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_DownloadModel.data,
      qt_meta_data_DownloadModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *DownloadModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadModel.stringdata))
        return static_cast<void*>(const_cast< DownloadModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int DownloadModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DownloadWidgetWindow_t {
    QByteArrayData data[9];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DownloadWidgetWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DownloadWidgetWindow_t qt_meta_stringdata_DownloadWidgetWindow = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 10),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 4),
QT_MOC_LITERAL(4, 38, 15),
QT_MOC_LITERAL(5, 54, 13),
QT_MOC_LITERAL(6, 68, 4),
QT_MOC_LITERAL(7, 73, 1),
QT_MOC_LITERAL(8, 75, 1)
    },
    "DownloadWidgetWindow\0enterEvent\0\0load\0"
    "newItemDownload\0DownloadItem*\0item\0x\0"
    "y\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadWidgetWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08,
       4,    3,   41,    2, 0x08,
       4,    2,   48,    2, 0x28,
       4,    1,   53,    2, 0x28,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void DownloadWidgetWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadWidgetWindow *_t = static_cast<DownloadWidgetWindow *>(_o);
        switch (_id) {
        case 0: _t->enterEvent(); break;
        case 1: _t->load(); break;
        case 2: _t->newItemDownload((*reinterpret_cast< DownloadItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->newItemDownload((*reinterpret_cast< DownloadItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->newItemDownload((*reinterpret_cast< DownloadItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DownloadItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DownloadItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DownloadItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DownloadWidgetWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadWidgetWindow::enterEvent)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DownloadWidgetWindow::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_DownloadWidgetWindow.data,
      qt_meta_data_DownloadWidgetWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *DownloadWidgetWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadWidgetWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadWidgetWindow.stringdata))
        return static_cast<void*>(const_cast< DownloadWidgetWindow*>(this));
    return QToolBar::qt_metacast(_clname);
}

int DownloadWidgetWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DownloadWidgetWindow::enterEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_DownloadItemWidgetWindow_t {
    QByteArrayData data[13];
    char stringdata[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DownloadItemWidgetWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DownloadItemWidgetWindow_t qt_meta_stringdata_DownloadItemWidgetWindow = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 11),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 9),
QT_MOC_LITERAL(4, 48, 8),
QT_MOC_LITERAL(5, 57, 3),
QT_MOC_LITERAL(6, 61, 16),
QT_MOC_LITERAL(7, 78, 13),
QT_MOC_LITERAL(8, 92, 10),
QT_MOC_LITERAL(9, 103, 8),
QT_MOC_LITERAL(10, 112, 15),
QT_MOC_LITERAL(11, 128, 11),
QT_MOC_LITERAL(12, 140, 4)
    },
    "DownloadItemWidgetWindow\0load_button\0"
    "\0setWidget\0QWidget*\0wid\0downloadProgress\0"
    "bytesReceived\0bytesTotal\0finished\0"
    "startedDownload\0setTextSlot\0text\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadItemWidgetWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a,
       3,    1,   45,    2, 0x0a,
       6,    2,   48,    2, 0x08,
       9,    0,   53,    2, 0x08,
      10,    0,   54,    2, 0x08,
      11,    1,   55,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void DownloadItemWidgetWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadItemWidgetWindow *_t = static_cast<DownloadItemWidgetWindow *>(_o);
        switch (_id) {
        case 0: _t->load_button(); break;
        case 1: _t->setWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->finished(); break;
        case 4: _t->startedDownload(); break;
        case 5: _t->setTextSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject DownloadItemWidgetWindow::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_DownloadItemWidgetWindow.data,
      qt_meta_data_DownloadItemWidgetWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *DownloadItemWidgetWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadItemWidgetWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadItemWidgetWindow.stringdata))
        return static_cast<void*>(const_cast< DownloadItemWidgetWindow*>(this));
    return QAction::qt_metacast(_clname);
}

int DownloadItemWidgetWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_ChooseMimeData_t {
    QByteArrayData data[3];
    char stringdata[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ChooseMimeData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ChooseMimeData_t qt_meta_stringdata_ChooseMimeData = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 14),
QT_MOC_LITERAL(2, 30, 0)
    },
    "ChooseMimeData\0acceptDownload\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseMimeData[] = {

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

void ChooseMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChooseMimeData *_t = static_cast<ChooseMimeData *>(_o);
        switch (_id) {
        case 0: _t->acceptDownload(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ChooseMimeData::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChooseMimeData.data,
      qt_meta_data_ChooseMimeData,  qt_static_metacall, 0, 0}
};


const QMetaObject *ChooseMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseMimeData.stringdata))
        return static_cast<void*>(const_cast< ChooseMimeData*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChooseMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_MimeData_t {
    QByteArrayData data[6];
    char stringdata[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MimeData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MimeData_t qt_meta_stringdata_MimeData = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 8),
QT_MOC_LITERAL(2, 18, 3),
QT_MOC_LITERAL(3, 22, 5),
QT_MOC_LITERAL(4, 28, 4),
QT_MOC_LITERAL(5, 33, 4)
    },
    "MimeData\0TypeData\0Url\0Image\0HTML\0Text\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MimeData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    4,   18,

 // enum data: key, value
       2, uint(MimeData::Url),
       3, uint(MimeData::Image),
       4, uint(MimeData::HTML),
       5, uint(MimeData::Text),

       0        // eod
};

void MimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MimeData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MimeData.data,
      qt_meta_data_MimeData,  qt_static_metacall, 0, 0}
};


const QMetaObject *MimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MimeData.stringdata))
        return static_cast<void*>(const_cast< MimeData*>(this));
    return QObject::qt_metacast(_clname);
}

int MimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
