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
    QByteArrayData data[17];
    char stringdata[147];
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
QT_MOC_LITERAL(7, 53, 7),
QT_MOC_LITERAL(8, 61, 7),
QT_MOC_LITERAL(9, 69, 10),
QT_MOC_LITERAL(10, 80, 5),
QT_MOC_LITERAL(11, 86, 8),
QT_MOC_LITERAL(12, 95, 10),
QT_MOC_LITERAL(13, 106, 8),
QT_MOC_LITERAL(14, 115, 8),
QT_MOC_LITERAL(15, 124, 13),
QT_MOC_LITERAL(16, 138, 7)
    },
    "Profiler\0endOfTreatment\0\0message\0"
    "newPath\0delPro\0path\0newWord\0newFunc\0"
    "condAccept\0conds\0workData\0doAnAction\0"
    "question\0delAfter\0setSaluerTrue\0lireEnd\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Profiler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x05,
       4,    1,   67,    2, 0x05,
       5,    1,   70,    2, 0x05,
       7,    1,   73,    2, 0x05,
       8,    0,   76,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    1,   77,    2, 0x0a,
      11,    1,   80,    2, 0x0a,
      12,    3,   83,    2, 0x0a,
      15,    0,   90,    2, 0x0a,
      16,    0,   91,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QStringList,   10,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   13,    3,   14,
    QMetaType::Void,
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
        case 3: _t->newWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->newFunc(); break;
        case 5: { bool _r = _t->condAccept((*reinterpret_cast< QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->workData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->doAnAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->setSaluerTrue(); break;
        case 9: _t->lireEnd(); break;
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
        {
            typedef void (Profiler::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Profiler::newWord)) {
                *result = 3;
            }
        }
        {
            typedef void (Profiler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Profiler::newFunc)) {
                *result = 4;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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

// SIGNAL 3
void Profiler::newWord(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Profiler::newFunc()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
