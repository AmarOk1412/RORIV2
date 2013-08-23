/****************************************************************************
** Meta object code from reading C++ file 'DigitalClock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI-Interface/DigitalClock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DigitalClock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DigitalClock_t {
    QByteArrayData data[5];
    char stringdata[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DigitalClock_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DigitalClock_t qt_meta_stringdata_DigitalClock = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 8),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 9),
QT_MOC_LITERAL(4, 33, 5)
    },
    "DigitalClock\0showTime\0\0setColor2\0color\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DigitalClock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a,
       3,    1,   25,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void DigitalClock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DigitalClock *_t = static_cast<DigitalClock *>(_o);
        switch (_id) {
        case 0: _t->showTime(); break;
        case 1: _t->setColor2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DigitalClock::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DigitalClock.data,
      qt_meta_data_DigitalClock,  qt_static_metacall, 0, 0}
};


const QMetaObject *DigitalClock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DigitalClock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DigitalClock.stringdata))
        return static_cast<void*>(const_cast< DigitalClock*>(this));
    return QWidget::qt_metacast(_clname);
}

int DigitalClock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
