/****************************************************************************
** Meta object code from reading C++ file 'toolbarsearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/toolbarsearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbarsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ToolbarSearch_t {
    QByteArrayData data[12];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ToolbarSearch_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ToolbarSearch_t qt_meta_stringdata_ToolbarSearch = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 6),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 3),
QT_MOC_LITERAL(4, 26, 4),
QT_MOC_LITERAL(5, 31, 15),
QT_MOC_LITERAL(6, 47, 19),
QT_MOC_LITERAL(7, 67, 8),
QT_MOC_LITERAL(8, 76, 6),
QT_MOC_LITERAL(9, 83, 5),
QT_MOC_LITERAL(10, 89, 9),
QT_MOC_LITERAL(11, 99, 21)
    },
    "ToolbarSearch\0search\0\0url\0save\0"
    "aboutToShowMenu\0triggeredMenuAction\0"
    "QAction*\0action\0clear\0searchNow\0"
    "configureSearchEngine\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolbarSearch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08,
       5,    0,   53,    2, 0x08,
       6,    1,   54,    2, 0x08,
       9,    0,   57,    2, 0x08,
      10,    0,   58,    2, 0x08,
      11,    0,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ToolbarSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolbarSearch *_t = static_cast<ToolbarSearch *>(_o);
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->save(); break;
        case 2: _t->aboutToShowMenu(); break;
        case 3: _t->triggeredMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->searchNow(); break;
        case 6: _t->configureSearchEngine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (ToolbarSearch::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolbarSearch::search)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ToolbarSearch::staticMetaObject = {
    { &SearchLineEdit::staticMetaObject, qt_meta_stringdata_ToolbarSearch.data,
      qt_meta_data_ToolbarSearch,  qt_static_metacall, 0, 0}
};


const QMetaObject *ToolbarSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolbarSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToolbarSearch.stringdata))
        return static_cast<void*>(const_cast< ToolbarSearch*>(this));
    return SearchLineEdit::qt_metacast(_clname);
}

int ToolbarSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SearchLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ToolbarSearch::search(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
