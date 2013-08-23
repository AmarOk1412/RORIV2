/****************************************************************************
** Meta object code from reading C++ file 'Toolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI-Interface/Toolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Toolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Toolbar_t {
    QByteArrayData data[15];
    char stringdata[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Toolbar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Toolbar_t qt_meta_stringdata_Toolbar = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 16),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 18),
QT_MOC_LITERAL(4, 45, 17),
QT_MOC_LITERAL(5, 63, 18),
QT_MOC_LITERAL(6, 82, 13),
QT_MOC_LITERAL(7, 96, 6),
QT_MOC_LITERAL(8, 103, 15),
QT_MOC_LITERAL(9, 119, 17),
QT_MOC_LITERAL(10, 137, 16),
QT_MOC_LITERAL(11, 154, 17),
QT_MOC_LITERAL(12, 172, 9),
QT_MOC_LITERAL(13, 182, 5),
QT_MOC_LITERAL(14, 188, 9)
    },
    "Toolbar\0roriModeClickedS\0\0agendaModeClickedS\0"
    "graphModeClickedS\0optionModeClickedS\0"
    "buttonBgColor\0button\0roriModeClicked\0"
    "agendaModeClicked\0graphModeClicked\0"
    "optionModeClicked\0setColor1\0color\0"
    "setColor2\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Toolbar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x05,
       3,    0,   70,    2, 0x05,
       4,    0,   71,    2, 0x05,
       5,    0,   72,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       6,    1,   73,    2, 0x0a,
       8,    0,   76,    2, 0x0a,
       9,    0,   77,    2, 0x0a,
      10,    0,   78,    2, 0x0a,
      11,    0,   79,    2, 0x0a,
      12,    1,   80,    2, 0x0a,
      14,    1,   83,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void Toolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Toolbar *_t = static_cast<Toolbar *>(_o);
        switch (_id) {
        case 0: _t->roriModeClickedS(); break;
        case 1: _t->agendaModeClickedS(); break;
        case 2: _t->graphModeClickedS(); break;
        case 3: _t->optionModeClickedS(); break;
        case 4: _t->buttonBgColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->roriModeClicked(); break;
        case 6: _t->agendaModeClicked(); break;
        case 7: _t->graphModeClicked(); break;
        case 8: _t->optionModeClicked(); break;
        case 9: _t->setColor1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setColor2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Toolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toolbar::roriModeClickedS)) {
                *result = 0;
            }
        }
        {
            typedef void (Toolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toolbar::agendaModeClickedS)) {
                *result = 1;
            }
        }
        {
            typedef void (Toolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toolbar::graphModeClickedS)) {
                *result = 2;
            }
        }
        {
            typedef void (Toolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toolbar::optionModeClickedS)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Toolbar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Toolbar.data,
      qt_meta_data_Toolbar,  qt_static_metacall, 0, 0}
};


const QMetaObject *Toolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Toolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Toolbar.stringdata))
        return static_cast<void*>(const_cast< Toolbar*>(this));
    return QWidget::qt_metacast(_clname);
}

int Toolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Toolbar::roriModeClickedS()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Toolbar::agendaModeClickedS()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Toolbar::graphModeClickedS()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Toolbar::optionModeClickedS()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
