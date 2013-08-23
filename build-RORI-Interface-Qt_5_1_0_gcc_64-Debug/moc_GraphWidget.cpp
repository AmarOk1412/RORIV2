/****************************************************************************
** Meta object code from reading C++ file 'GraphWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI-Interface/GraphWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphWidget_t {
    QByteArrayData data[6];
    char stringdata[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GraphWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GraphWidget_t qt_meta_stringdata_GraphWidget = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 9),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 12),
QT_MOC_LITERAL(4, 36, 9),
QT_MOC_LITERAL(5, 46, 6)
    },
    "GraphWidget\0getProfil\0\0setupDefault\0"
    "setColor2\0color2\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphWidget[] = {

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
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void GraphWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphWidget *_t = static_cast<GraphWidget *>(_o);
        switch (_id) {
        case 0: _t->getProfil(); break;
        case 1: _t->setupDefault(); break;
        case 2: _t->setColor2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GraphWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GraphWidget.data,
      qt_meta_data_GraphWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *GraphWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphWidget.stringdata))
        return static_cast<void*>(const_cast< GraphWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int GraphWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
