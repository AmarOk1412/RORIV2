/****************************************************************************
** Meta object code from reading C++ file 'OptionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI-Interface/OptionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OptionWidget_t {
    QByteArrayData data[11];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OptionWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OptionWidget_t qt_meta_stringdata_OptionWidget = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 22),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 5),
QT_MOC_LITERAL(4, 43, 12),
QT_MOC_LITERAL(5, 56, 6),
QT_MOC_LITERAL(6, 63, 12),
QT_MOC_LITERAL(7, 76, 6),
QT_MOC_LITERAL(8, 83, 21),
QT_MOC_LITERAL(9, 105, 12),
QT_MOC_LITERAL(10, 118, 12)
    },
    "OptionWidget\0backgroundImageChanged\0"
    "\0image\0color1Change\0color1\0color2Change\0"
    "color2\0changeBackgroundImage\0changeColor1\0"
    "changeColor2\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionWidget[] = {

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
       4,    1,   47,    2, 0x05,
       6,    1,   50,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x0a,
       9,    1,   56,    2, 0x0a,
      10,    1,   59,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void OptionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionWidget *_t = static_cast<OptionWidget *>(_o);
        switch (_id) {
        case 0: _t->backgroundImageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->color1Change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->color2Change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->changeBackgroundImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->changeColor1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->changeColor2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OptionWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionWidget::backgroundImageChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (OptionWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionWidget::color1Change)) {
                *result = 1;
            }
        }
        {
            typedef void (OptionWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionWidget::color2Change)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject OptionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OptionWidget.data,
      qt_meta_data_OptionWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *OptionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionWidget.stringdata))
        return static_cast<void*>(const_cast< OptionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OptionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void OptionWidget::backgroundImageChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptionWidget::color1Change(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OptionWidget::color2Change(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
