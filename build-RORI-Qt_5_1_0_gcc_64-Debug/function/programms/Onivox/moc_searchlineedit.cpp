/****************************************************************************
** Meta object code from reading C++ file 'searchlineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/searchlineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClearButton_t {
    QByteArrayData data[4];
    char stringdata[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ClearButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ClearButton_t qt_meta_stringdata_ClearButton = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 11),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 4)
    },
    "ClearButton\0textChanged\0\0text\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClearButton[] = {

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
       1,    1,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void ClearButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClearButton *_t = static_cast<ClearButton *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ClearButton::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_ClearButton.data,
      qt_meta_data_ClearButton,  qt_static_metacall, 0, 0}
};


const QMetaObject *ClearButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClearButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClearButton.stringdata))
        return static_cast<void*>(const_cast< ClearButton*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int ClearButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SearchLineEdit_t {
    QByteArrayData data[5];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SearchLineEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SearchLineEdit_t qt_meta_stringdata_SearchLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 11),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 4),
QT_MOC_LITERAL(4, 33, 12)
    },
    "SearchLineEdit\0textChanged\0\0text\0"
    "inactiveText\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x05,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095103,

       0        // eod
};

void SearchLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchLineEdit *_t = static_cast<SearchLineEdit *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchLineEdit::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchLineEdit::textChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SearchLineEdit::staticMetaObject = {
    { &ExLineEdit::staticMetaObject, qt_meta_stringdata_SearchLineEdit.data,
      qt_meta_data_SearchLineEdit,  qt_static_metacall, 0, 0}
};


const QMetaObject *SearchLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchLineEdit.stringdata))
        return static_cast<void*>(const_cast< SearchLineEdit*>(this));
    return ExLineEdit::qt_metacast(_clname);
}

int SearchLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExLineEdit::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = inactiveText(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setInactiveText(*reinterpret_cast< QString*>(_v)); break;
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
void SearchLineEdit::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
