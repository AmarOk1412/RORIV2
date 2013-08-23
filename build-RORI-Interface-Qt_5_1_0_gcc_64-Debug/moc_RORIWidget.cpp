/****************************************************************************
** Meta object code from reading C++ file 'RORIWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI-Interface/RORIWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RORIWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RORIWidget_t {
    QByteArrayData data[13];
    char stringdata[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RORIWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RORIWidget_t qt_meta_stringdata_RORIWidget = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 14),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 7),
QT_MOC_LITERAL(4, 35, 5),
QT_MOC_LITERAL(5, 41, 7),
QT_MOC_LITERAL(6, 49, 10),
QT_MOC_LITERAL(7, 60, 6),
QT_MOC_LITERAL(8, 67, 10),
QT_MOC_LITERAL(9, 78, 18),
QT_MOC_LITERAL(10, 97, 9),
QT_MOC_LITERAL(11, 107, 5),
QT_MOC_LITERAL(12, 113, 9)
    },
    "RORIWidget\0envoyerClicked\0\0RORISay\0"
    "toSay\0UserSay\0setSayText\0getSay\0"
    "QLineEdit*\0envoyerClickedSlot\0setColor1\0"
    "color\0setColor2\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RORIWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a,
       5,    1,   58,    2, 0x0a,
       6,    1,   61,    2, 0x0a,
       7,    0,   64,    2, 0x0a,
       9,    0,   65,    2, 0x0a,
      10,    1,   66,    2, 0x0a,
      12,    1,   69,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    0x80000000 | 8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void RORIWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RORIWidget *_t = static_cast<RORIWidget *>(_o);
        switch (_id) {
        case 0: _t->envoyerClicked(); break;
        case 1: _t->RORISay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->UserSay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setSayText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QLineEdit* _r = _t->getSay();
            if (_a[0]) *reinterpret_cast< QLineEdit**>(_a[0]) = _r; }  break;
        case 5: _t->envoyerClickedSlot(); break;
        case 6: _t->setColor1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setColor2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RORIWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RORIWidget::envoyerClicked)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject RORIWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RORIWidget.data,
      qt_meta_data_RORIWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *RORIWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RORIWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RORIWidget.stringdata))
        return static_cast<void*>(const_cast< RORIWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RORIWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void RORIWidget::envoyerClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
