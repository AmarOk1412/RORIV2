/****************************************************************************
** Meta object code from reading C++ file 'Agenda.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORITchat/Agenda.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Agenda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Agenda_t {
    QByteArrayData data[9];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Agenda_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Agenda_t qt_meta_stringdata_Agenda = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 12),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 12),
QT_MOC_LITERAL(4, 34, 15),
QT_MOC_LITERAL(5, 50, 9),
QT_MOC_LITERAL(6, 60, 5),
QT_MOC_LITERAL(7, 66, 11),
QT_MOC_LITERAL(8, 78, 11)
    },
    "Agenda\0slotAddEvent\0\0slotDelEvent\0"
    "slotModifyEvent\0setMaxDay\0month\0"
    "setMonthTo1\0currentYear\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Agenda[] = {

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
       3,    0,   40,    2, 0x0a,
       4,    0,   41,    2, 0x0a,
       5,    1,   42,    2, 0x0a,
       7,    1,   45,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void Agenda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Agenda *_t = static_cast<Agenda *>(_o);
        switch (_id) {
        case 0: _t->slotAddEvent(); break;
        case 1: _t->slotDelEvent(); break;
        case 2: _t->slotModifyEvent(); break;
        case 3: _t->setMaxDay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setMonthTo1((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Agenda::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Agenda.data,
      qt_meta_data_Agenda,  qt_static_metacall, 0, 0}
};


const QMetaObject *Agenda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Agenda::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Agenda.stringdata))
        return static_cast<void*>(const_cast< Agenda*>(this));
    return QWidget::qt_metacast(_clname);
}

int Agenda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
