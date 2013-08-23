/****************************************************************************
** Meta object code from reading C++ file 'AgendaWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI-Interface/AgendaWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AgendaWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AgendaWidget_t {
    QByteArrayData data[5];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AgendaWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AgendaWidget_t qt_meta_stringdata_AgendaWidget = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 16),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 4),
QT_MOC_LITERAL(4, 36, 11)
    },
    "AgendaWidget\0changeModifyText\0\0date\0"
    "saveClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AgendaWidget[] = {

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
       1,    1,   24,    2, 0x0a,
       4,    0,   27,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,

       0        // eod
};

void AgendaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AgendaWidget *_t = static_cast<AgendaWidget *>(_o);
        switch (_id) {
        case 0: _t->changeModifyText((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 1: _t->saveClicked(); break;
        default: ;
        }
    }
}

const QMetaObject AgendaWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AgendaWidget.data,
      qt_meta_data_AgendaWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *AgendaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AgendaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AgendaWidget.stringdata))
        return static_cast<void*>(const_cast< AgendaWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AgendaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
