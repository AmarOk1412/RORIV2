/****************************************************************************
** Meta object code from reading C++ file 'Semantik.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RORI/Semantik.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Semantik.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Semantik_t {
    QByteArrayData data[29];
    char stringdata[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Semantik_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Semantik_t qt_meta_stringdata_Semantik = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 12),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 7),
QT_MOC_LITERAL(4, 31, 8),
QT_MOC_LITERAL(5, 40, 11),
QT_MOC_LITERAL(6, 52, 13),
QT_MOC_LITERAL(7, 66, 8),
QT_MOC_LITERAL(8, 75, 8),
QT_MOC_LITERAL(9, 84, 18),
QT_MOC_LITERAL(10, 103, 5),
QT_MOC_LITERAL(11, 109, 13),
QT_MOC_LITERAL(12, 123, 13),
QT_MOC_LITERAL(13, 137, 14),
QT_MOC_LITERAL(14, 152, 7),
QT_MOC_LITERAL(15, 160, 17),
QT_MOC_LITERAL(16, 178, 8),
QT_MOC_LITERAL(17, 187, 6),
QT_MOC_LITERAL(18, 194, 4),
QT_MOC_LITERAL(19, 199, 11),
QT_MOC_LITERAL(20, 211, 9),
QT_MOC_LITERAL(21, 221, 11),
QT_MOC_LITERAL(22, 233, 3),
QT_MOC_LITERAL(23, 237, 3),
QT_MOC_LITERAL(24, 241, 3),
QT_MOC_LITERAL(25, 245, 3),
QT_MOC_LITERAL(26, 249, 10),
QT_MOC_LITERAL(27, 260, 7),
QT_MOC_LITERAL(28, 268, 10)
    },
    "Semantik\0saySomething\0\0message\0workData\0"
    "cutSentence\0sentenceToCut\0getWords\0"
    "sentence\0setCategoriesWords\0words\0"
    "setTypesWords\0sayEverything\0addNewFilePath\0"
    "newPath\0translateSentence\0traduire\0"
    "delPro\0path\0getProfiler\0Profiler*\0"
    "addWordSlot\0nom\0def\0syn\0cat\0addNewWord\0"
    "newWord\0addNewFunc\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Semantik[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    1,   92,    2, 0x0a,
       5,    1,   95,    2, 0x0a,
       7,    1,   98,    2, 0x0a,
       9,    1,  101,    2, 0x0a,
      11,    1,  104,    2, 0x0a,
      12,    1,  107,    2, 0x0a,
      13,    1,  110,    2, 0x0a,
      15,    1,  113,    2, 0x0a,
      16,    0,  116,    2, 0x0a,
      17,    1,  117,    2, 0x0a,
      19,    0,  120,    2, 0x0a,
      21,    4,  121,    2, 0x0a,
      26,    1,  130,    2, 0x0a,
      28,    0,  133,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QStringList, QMetaType::QString,    6,
    QMetaType::QStringList, QMetaType::QString,    8,
    QMetaType::QStringList, QMetaType::QStringList,   10,
    QMetaType::QStringList, QMetaType::QStringList,   10,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    0x80000000 | 20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   22,   23,   24,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,

       0        // eod
};

void Semantik::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Semantik *_t = static_cast<Semantik *>(_o);
        switch (_id) {
        case 0: _t->saySomething((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->workData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { QStringList _r = _t->cutSentence((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: { QStringList _r = _t->getWords((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 4: { QStringList _r = _t->setCategoriesWords((*reinterpret_cast< QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->setTypesWords((*reinterpret_cast< QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: _t->sayEverything((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->addNewFilePath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->translateSentence((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->traduire(); break;
        case 10: _t->delPro((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: { Profiler* _r = _t->getProfiler();
            if (_a[0]) *reinterpret_cast< Profiler**>(_a[0]) = _r; }  break;
        case 12: _t->addWordSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 13: _t->addNewWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->addNewFunc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Semantik::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Semantik::saySomething)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Semantik::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Semantik.data,
      qt_meta_data_Semantik,  qt_static_metacall, 0, 0}
};


const QMetaObject *Semantik::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Semantik::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Semantik.stringdata))
        return static_cast<void*>(const_cast< Semantik*>(this));
    return QWidget::qt_metacast(_clname);
}

int Semantik::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Semantik::saySomething(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
