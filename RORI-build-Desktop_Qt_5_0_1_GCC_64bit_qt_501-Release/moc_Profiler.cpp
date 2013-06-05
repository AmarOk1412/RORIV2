/****************************************************************************
** Meta object code from reading C++ file 'Profiler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI/Profiler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Profiler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Profiler_t {
    QByteArrayData data[15];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Profiler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Profiler_t qt_meta_stringdata_Profiler = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 14),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 7),
QT_MOC_LITERAL(4, 33, 7),
QT_MOC_LITERAL(5, 41, 6),
QT_MOC_LITERAL(6, 48, 4),
QT_MOC_LITERAL(7, 53, 10),
QT_MOC_LITERAL(8, 64, 5),
QT_MOC_LITERAL(9, 70, 8),
QT_MOC_LITERAL(10, 79, 10),
QT_MOC_LITERAL(11, 90, 8),
QT_MOC_LITERAL(12, 99, 9),
QT_MOC_LITERAL(13, 109, 7),
QT_MOC_LITERAL(14, 117, 13)
    },
    "Profiler\0endOfTreatment\0\0message\0"
    "newPath\0delPro\0path\0condAccept\0conds\0"
    "workData\0doAnAction\0question\0getAgenda\0"
    "Agenda*\0setSaluerTrue\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Profiler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x05,
       4,    1,   57,    2, 0x05,
       5,    1,   60,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       7,    1,   63,    2, 0x0a,
       9,    1,   66,    2, 0x0a,
      10,    2,   69,    2, 0x0a,
      12,    0,   74,    2, 0x0a,
      14,    0,   75,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Bool, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,    3,
    0x80000000 | 13,
    QMetaType::Void,

       0        // eod
};

void Profiler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Profiler *_t = static_cast<Profiler *>(_o);
        switch (_id) {
        case 0: _t->endOfTreatment((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->newPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->delPro((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->condAccept((*reinterpret_cast< QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->workData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->doAnAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: { Agenda* _r = _t->getAgenda();
            if (_a[0]) *reinterpret_cast< Agenda**>(_a[0]) = _r; }  break;
        case 7: _t->setSaluerTrue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Profiler::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Profiler::endOfTreatment)) {
                *result = 0;
            }
        }
        {
            typedef void (Profiler::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Profiler::newPath)) {
                *result = 1;
            }
        }
        {
            typedef void (Profiler::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Profiler::delPro)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Profiler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Profiler.data,
      qt_meta_data_Profiler,  qt_static_metacall, 0, 0}
};


const QMetaObject *Profiler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Profiler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Profiler.stringdata))
        return static_cast<void*>(const_cast< Profiler*>(this));
    return QWidget::qt_metacast(_clname);
}

int Profiler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Profiler::endOfTreatment(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Profiler::newPath(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Profiler::delPro(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
