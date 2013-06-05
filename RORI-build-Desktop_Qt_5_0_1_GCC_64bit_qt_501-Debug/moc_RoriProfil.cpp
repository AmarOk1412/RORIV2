/****************************************************************************
** Meta object code from reading C++ file 'RoriProfil.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI/RoriProfil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RoriProfil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RoriProfil_t {
    QByteArrayData data[18];
    char stringdata[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RoriProfil_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RoriProfil_t qt_meta_stringdata_RoriProfil = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 12),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 13),
QT_MOC_LITERAL(4, 39, 12),
QT_MOC_LITERAL(5, 52, 15),
QT_MOC_LITERAL(6, 68, 13),
QT_MOC_LITERAL(7, 82, 12),
QT_MOC_LITERAL(8, 95, 12),
QT_MOC_LITERAL(9, 108, 8),
QT_MOC_LITERAL(10, 117, 13),
QT_MOC_LITERAL(11, 131, 12),
QT_MOC_LITERAL(12, 144, 15),
QT_MOC_LITERAL(13, 160, 13),
QT_MOC_LITERAL(14, 174, 12),
QT_MOC_LITERAL(15, 187, 6),
QT_MOC_LITERAL(16, 194, 9),
QT_MOC_LITERAL(17, 204, 6)
    },
    "RoriProfil\0getRoriHumor\0\0getRoriPolite\0"
    "getRoriJokes\0getRoriIsABadIA\0getRoriScared\0"
    "getRoriMoral\0setRoriHumor\0newValue\0"
    "setRoriPolite\0setRoriJokes\0setRoriIsABadIA\0"
    "setRoriScared\0setRoriMoral\0getNom\0"
    "getPrenom\0getAge\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoriProfil[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a,
       3,    0,   90,    2, 0x0a,
       4,    0,   91,    2, 0x0a,
       5,    0,   92,    2, 0x0a,
       6,    0,   93,    2, 0x0a,
       7,    0,   94,    2, 0x0a,
       8,    1,   95,    2, 0x0a,
      10,    1,   98,    2, 0x0a,
      11,    1,  101,    2, 0x0a,
      12,    1,  104,    2, 0x0a,
      13,    1,  107,    2, 0x0a,
      14,    1,  110,    2, 0x0a,
      15,    0,  113,    2, 0x0a,
      16,    0,  114,    2, 0x0a,
      17,    0,  115,    2, 0x0a,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,

       0        // eod
};

void RoriProfil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoriProfil *_t = static_cast<RoriProfil *>(_o);
        switch (_id) {
        case 0: { int _r = _t->getRoriHumor();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->getRoriPolite();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->getRoriJokes();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->getRoriIsABadIA();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->getRoriScared();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->getRoriMoral();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->setRoriHumor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setRoriPolite((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setRoriJokes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setRoriIsABadIA((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setRoriScared((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setRoriMoral((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: { QString _r = _t->getNom();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->getPrenom();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->getAge();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject RoriProfil::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RoriProfil.data,
      qt_meta_data_RoriProfil,  qt_static_metacall, 0, 0}
};


const QMetaObject *RoriProfil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoriProfil::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RoriProfil.stringdata))
        return static_cast<void*>(const_cast< RoriProfil*>(this));
    return QWidget::qt_metacast(_clname);
}

int RoriProfil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
