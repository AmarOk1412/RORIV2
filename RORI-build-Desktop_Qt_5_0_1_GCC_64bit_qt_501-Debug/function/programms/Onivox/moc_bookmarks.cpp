/****************************************************************************
** Meta object code from reading C++ file 'bookmarks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/bookmarks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BookmarksManager_t {
    QByteArrayData data[12];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BookmarksManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BookmarksManager_t qt_meta_stringdata_BookmarksManager = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 10),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 13),
QT_MOC_LITERAL(4, 43, 4),
QT_MOC_LITERAL(5, 48, 12),
QT_MOC_LITERAL(6, 61, 6),
QT_MOC_LITERAL(7, 68, 3),
QT_MOC_LITERAL(8, 72, 12),
QT_MOC_LITERAL(9, 85, 15),
QT_MOC_LITERAL(10, 101, 15),
QT_MOC_LITERAL(11, 117, 4)
    },
    "BookmarksManager\0entryAdded\0\0BookmarkNode*\0"
    "item\0entryRemoved\0parent\0row\0entryChanged\0"
    "importBookmarks\0exportBookmarks\0save\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarksManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x05,
       5,    3,   47,    2, 0x05,
       8,    1,   54,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    0,   57,    2, 0x0a,
      10,    0,   58,    2, 0x0a,
      11,    0,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3,    6,    7,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BookmarksManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarksManager *_t = static_cast<BookmarksManager *>(_o);
        switch (_id) {
        case 0: _t->entryAdded((*reinterpret_cast< BookmarkNode*(*)>(_a[1]))); break;
        case 1: _t->entryRemoved((*reinterpret_cast< BookmarkNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< BookmarkNode*(*)>(_a[3]))); break;
        case 2: _t->entryChanged((*reinterpret_cast< BookmarkNode*(*)>(_a[1]))); break;
        case 3: _t->importBookmarks(); break;
        case 4: _t->exportBookmarks(); break;
        case 5: _t->save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BookmarksManager::*_t)(BookmarkNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookmarksManager::entryAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (BookmarksManager::*_t)(BookmarkNode * , int , BookmarkNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookmarksManager::entryRemoved)) {
                *result = 1;
            }
        }
        {
            typedef void (BookmarksManager::*_t)(BookmarkNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookmarksManager::entryChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject BookmarksManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BookmarksManager.data,
      qt_meta_data_BookmarksManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *BookmarksManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarksManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksManager.stringdata))
        return static_cast<void*>(const_cast< BookmarksManager*>(this));
    return QObject::qt_metacast(_clname);
}

int BookmarksManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BookmarksManager::entryAdded(BookmarkNode * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BookmarksManager::entryRemoved(BookmarkNode * _t1, int _t2, BookmarkNode * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookmarksManager::entryChanged(BookmarkNode * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_BookmarksModel_t {
    QByteArrayData data[9];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BookmarksModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BookmarksModel_t qt_meta_stringdata_BookmarksModel = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 10),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 13),
QT_MOC_LITERAL(4, 41, 4),
QT_MOC_LITERAL(5, 46, 12),
QT_MOC_LITERAL(6, 59, 6),
QT_MOC_LITERAL(7, 66, 3),
QT_MOC_LITERAL(8, 70, 12)
    },
    "BookmarksModel\0entryAdded\0\0BookmarkNode*\0"
    "item\0entryRemoved\0parent\0row\0entryChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarksModel[] = {

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
       1,    1,   29,    2, 0x0a,
       5,    3,   32,    2, 0x0a,
       8,    1,   39,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3,    6,    7,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void BookmarksModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarksModel *_t = static_cast<BookmarksModel *>(_o);
        switch (_id) {
        case 0: _t->entryAdded((*reinterpret_cast< BookmarkNode*(*)>(_a[1]))); break;
        case 1: _t->entryRemoved((*reinterpret_cast< BookmarkNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< BookmarkNode*(*)>(_a[3]))); break;
        case 2: _t->entryChanged((*reinterpret_cast< BookmarkNode*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BookmarksModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_BookmarksModel.data,
      qt_meta_data_BookmarksModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *BookmarksModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarksModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksModel.stringdata))
        return static_cast<void*>(const_cast< BookmarksModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int BookmarksModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_BookmarksMenu_t {
    QByteArrayData data[6];
    char stringdata[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BookmarksMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BookmarksMenu_t qt_meta_stringdata_BookmarksMenu = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 7),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 3),
QT_MOC_LITERAL(4, 27, 9),
QT_MOC_LITERAL(5, 37, 5)
    },
    "BookmarksMenu\0openUrl\0\0url\0activated\0"
    "index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarksMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    5,

       0        // eod
};

void BookmarksMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarksMenu *_t = static_cast<BookmarksMenu *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BookmarksMenu::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookmarksMenu::openUrl)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BookmarksMenu::staticMetaObject = {
    { &ModelMenu::staticMetaObject, qt_meta_stringdata_BookmarksMenu.data,
      qt_meta_data_BookmarksMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *BookmarksMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarksMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksMenu.stringdata))
        return static_cast<void*>(const_cast< BookmarksMenu*>(this));
    return ModelMenu::qt_metacast(_clname);
}

int BookmarksMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BookmarksMenu::openUrl(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AddBookmarkProxyModel_t {
    QByteArrayData data[1];
    char stringdata[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddBookmarkProxyModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddBookmarkProxyModel_t qt_meta_stringdata_AddBookmarkProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 21)
    },
    "AddBookmarkProxyModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddBookmarkProxyModel[] = {

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

void AddBookmarkProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AddBookmarkProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_AddBookmarkProxyModel.data,
      qt_meta_data_AddBookmarkProxyModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddBookmarkProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddBookmarkProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddBookmarkProxyModel.stringdata))
        return static_cast<void*>(const_cast< AddBookmarkProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AddBookmarkProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_AddBookmarkDialog_t {
    QByteArrayData data[3];
    char stringdata[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddBookmarkDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddBookmarkDialog_t qt_meta_stringdata_AddBookmarkDialog = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 6),
QT_MOC_LITERAL(2, 25, 0)
    },
    "AddBookmarkDialog\0accept\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddBookmarkDialog[] = {

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

void AddBookmarkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddBookmarkDialog *_t = static_cast<AddBookmarkDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddBookmarkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddBookmarkDialog.data,
      qt_meta_data_AddBookmarkDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddBookmarkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddBookmarkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddBookmarkDialog.stringdata))
        return static_cast<void*>(const_cast< AddBookmarkDialog*>(this));
    if (!strcmp(_clname, "Ui_AddBookmarkDialog"))
        return static_cast< Ui_AddBookmarkDialog*>(const_cast< AddBookmarkDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddBookmarkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_BookmarksDialog_t {
    QByteArrayData data[8];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BookmarksDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BookmarksDialog_t qt_meta_stringdata_BookmarksDialog = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 7),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 3),
QT_MOC_LITERAL(4, 29, 26),
QT_MOC_LITERAL(5, 56, 3),
QT_MOC_LITERAL(6, 60, 4),
QT_MOC_LITERAL(7, 65, 9)
    },
    "BookmarksDialog\0openUrl\0\0url\0"
    "customContextMenuRequested\0pos\0open\0"
    "newFolder\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarksDialog[] = {

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

void BookmarksDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarksDialog *_t = static_cast<BookmarksDialog *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->open(); break;
        case 3: _t->newFolder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BookmarksDialog::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookmarksDialog::openUrl)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BookmarksDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BookmarksDialog.data,
      qt_meta_data_BookmarksDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *BookmarksDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarksDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksDialog.stringdata))
        return static_cast<void*>(const_cast< BookmarksDialog*>(this));
    if (!strcmp(_clname, "Ui_BookmarksDialog"))
        return static_cast< Ui_BookmarksDialog*>(const_cast< BookmarksDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BookmarksDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void BookmarksDialog::openUrl(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_BookmarksToolBar_t {
    QByteArrayData data[10];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BookmarksToolBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BookmarksToolBar_t qt_meta_stringdata_BookmarksToolBar = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 7),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 3),
QT_MOC_LITERAL(4, 30, 9),
QT_MOC_LITERAL(5, 40, 8),
QT_MOC_LITERAL(6, 49, 6),
QT_MOC_LITERAL(7, 56, 9),
QT_MOC_LITERAL(8, 66, 5),
QT_MOC_LITERAL(9, 72, 5)
    },
    "BookmarksToolBar\0openUrl\0\0url\0triggered\0"
    "QAction*\0action\0activated\0index\0build\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarksToolBar[] = {

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
       7,    1,   40,    2, 0x08,
       9,    0,   43,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,

       0        // eod
};

void BookmarksToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarksToolBar *_t = static_cast<BookmarksToolBar *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->build(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BookmarksToolBar::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookmarksToolBar::openUrl)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BookmarksToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_BookmarksToolBar.data,
      qt_meta_data_BookmarksToolBar,  qt_static_metacall, 0, 0}
};


const QMetaObject *BookmarksToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarksToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksToolBar.stringdata))
        return static_cast<void*>(const_cast< BookmarksToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int BookmarksToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BookmarksToolBar::openUrl(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
