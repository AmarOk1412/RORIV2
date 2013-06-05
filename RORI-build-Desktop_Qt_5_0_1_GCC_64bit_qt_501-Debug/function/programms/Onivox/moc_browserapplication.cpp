/****************************************************************************
** Meta object code from reading C++ file 'browserapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/browserapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browserapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BrowserApplication_t {
    QByteArrayData data[29];
    char stringdata[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BrowserApplication_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BrowserApplication_t qt_meta_stringdata_BrowserApplication = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 13),
QT_MOC_LITERAL(2, 33, 18),
QT_MOC_LITERAL(3, 52, 0),
QT_MOC_LITERAL(4, 53, 18),
QT_MOC_LITERAL(5, 72, 11),
QT_MOC_LITERAL(6, 84, 8),
QT_MOC_LITERAL(7, 93, 7),
QT_MOC_LITERAL(8, 101, 3),
QT_MOC_LITERAL(9, 105, 9),
QT_MOC_LITERAL(10, 115, 7),
QT_MOC_LITERAL(11, 123, 5),
QT_MOC_LITERAL(12, 129, 14),
QT_MOC_LITERAL(13, 144, 4),
QT_MOC_LITERAL(14, 149, 11),
QT_MOC_LITERAL(15, 161, 8),
QT_MOC_LITERAL(16, 170, 11),
QT_MOC_LITERAL(17, 182, 9),
QT_MOC_LITERAL(18, 192, 10),
QT_MOC_LITERAL(19, 203, 24),
QT_MOC_LITERAL(20, 228, 14),
QT_MOC_LITERAL(21, 243, 5),
QT_MOC_LITERAL(22, 249, 12),
QT_MOC_LITERAL(23, 262, 5),
QT_MOC_LITERAL(24, 268, 4),
QT_MOC_LITERAL(25, 273, 11),
QT_MOC_LITERAL(26, 285, 6),
QT_MOC_LITERAL(27, 292, 11),
QT_MOC_LITERAL(28, 304, 7)
    },
    "BrowserApplication\0newMainWindow\0"
    "BrowserMainWindow*\0\0restoreLastSession\0"
    "checkUpdate\0response\0openUrl\0url\0"
    "precedent\0suivant\0print\0searchOnEngine\0"
    "word\0setBookmark\0showCode\0takePicture\0"
    "takeVideo\0postLaunch\0newLocalSocketConnection\0"
    "clean_dossiers\0index\0add_bookmark\0"
    "title\0icon\0lockWindows\0locked\0goToWebSite\0"
    "website\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowserApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    3, 0x0a,
       4,    0,  115,    3, 0x0a,
       5,    1,  116,    3, 0x0a,
       5,    0,  119,    3, 0x2a,
       7,    1,  120,    3, 0x0a,
       7,    1,  123,    3, 0x0a,
       9,    0,  126,    3, 0x0a,
      10,    0,  127,    3, 0x0a,
      11,    0,  128,    3, 0x0a,
      12,    1,  129,    3, 0x0a,
      14,    0,  132,    3, 0x0a,
      15,    0,  133,    3, 0x0a,
      16,    0,  134,    3, 0x0a,
      17,    0,  135,    3, 0x0a,
      18,    0,  136,    3, 0x08,
      19,    0,  137,    3, 0x08,
      20,    1,  138,    3, 0x08,
      22,    3,  141,    3, 0x08,
      25,    1,  148,    3, 0x08,
      27,    1,  151,    3, 0x08,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QIcon,   23,    8,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::QString,   28,

       0        // eod
};

void BrowserApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrowserApplication *_t = static_cast<BrowserApplication *>(_o);
        switch (_id) {
        case 0: { BrowserMainWindow* _r = _t->newMainWindow();
            if (_a[0]) *reinterpret_cast< BrowserMainWindow**>(_a[0]) = _r; }  break;
        case 1: _t->restoreLastSession(); break;
        case 2: _t->checkUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->checkUpdate(); break;
        case 4: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->openUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->precedent(); break;
        case 7: _t->suivant(); break;
        case 8: _t->print(); break;
        case 9: _t->searchOnEngine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setBookmark(); break;
        case 11: _t->showCode(); break;
        case 12: _t->takePicture(); break;
        case 13: _t->takeVideo(); break;
        case 14: _t->postLaunch(); break;
        case 15: _t->newLocalSocketConnection(); break;
        case 16: _t->clean_dossiers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->add_bookmark((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QIcon(*)>(_a[3]))); break;
        case 18: _t->lockWindows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->goToWebSite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BrowserApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_BrowserApplication.data,
      qt_meta_data_BrowserApplication,  qt_static_metacall, 0, 0}
};


const QMetaObject *BrowserApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowserApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrowserApplication.stringdata))
        return static_cast<void*>(const_cast< BrowserApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int BrowserApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
