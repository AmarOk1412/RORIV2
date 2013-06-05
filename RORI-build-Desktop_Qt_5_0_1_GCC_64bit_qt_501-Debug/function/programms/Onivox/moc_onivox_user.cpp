/****************************************************************************
** Meta object code from reading C++ file 'onivox_user.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/onivox_user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onivox_user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Onivox_user_t {
    QByteArrayData data[1];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Onivox_user_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Onivox_user_t qt_meta_stringdata_Onivox_user = {
    {
QT_MOC_LITERAL(0, 0, 11)
    },
    "Onivox_user\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Onivox_user[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Onivox_user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Onivox_user::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Onivox_user.data,
      qt_meta_data_Onivox_user,  qt_static_metacall, 0, 0}
};


const QMetaObject *Onivox_user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Onivox_user::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Onivox_user.stringdata))
        return static_cast<void*>(const_cast< Onivox_user*>(this));
    return QObject::qt_metacast(_clname);
}

int Onivox_user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Onivox_formulaire_connexion_t {
    QByteArrayData data[4];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Onivox_formulaire_connexion_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Onivox_formulaire_connexion_t qt_meta_stringdata_Onivox_formulaire_connexion = {
    {
QT_MOC_LITERAL(0, 0, 27),
QT_MOC_LITERAL(1, 28, 22),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 16)
    },
    "Onivox_formulaire_connexion\0"
    "authentificationValide\0\0valideFormulaire\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Onivox_formulaire_connexion[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Onivox_formulaire_connexion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Onivox_formulaire_connexion *_t = static_cast<Onivox_formulaire_connexion *>(_o);
        switch (_id) {
        case 0: _t->authentificationValide(); break;
        case 1: _t->valideFormulaire(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Onivox_formulaire_connexion::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Onivox_formulaire_connexion::authentificationValide)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Onivox_formulaire_connexion::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Onivox_formulaire_connexion.data,
      qt_meta_data_Onivox_formulaire_connexion,  qt_static_metacall, 0, 0}
};


const QMetaObject *Onivox_formulaire_connexion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Onivox_formulaire_connexion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Onivox_formulaire_connexion.stringdata))
        return static_cast<void*>(const_cast< Onivox_formulaire_connexion*>(this));
    return QWidget::qt_metacast(_clname);
}

int Onivox_formulaire_connexion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Onivox_formulaire_connexion::authentificationValide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_Onivox_formulaire_ajout_user_t {
    QByteArrayData data[3];
    char stringdata[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Onivox_formulaire_ajout_user_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Onivox_formulaire_ajout_user_t qt_meta_stringdata_Onivox_formulaire_ajout_user = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 16),
QT_MOC_LITERAL(2, 46, 0)
    },
    "Onivox_formulaire_ajout_user\0"
    "valideFormulaire\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Onivox_formulaire_ajout_user[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Onivox_formulaire_ajout_user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Onivox_formulaire_ajout_user *_t = static_cast<Onivox_formulaire_ajout_user *>(_o);
        switch (_id) {
        case 0: _t->valideFormulaire(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Onivox_formulaire_ajout_user::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Onivox_formulaire_ajout_user.data,
      qt_meta_data_Onivox_formulaire_ajout_user,  qt_static_metacall, 0, 0}
};


const QMetaObject *Onivox_formulaire_ajout_user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Onivox_formulaire_ajout_user::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Onivox_formulaire_ajout_user.stringdata))
        return static_cast<void*>(const_cast< Onivox_formulaire_ajout_user*>(this));
    return QWidget::qt_metacast(_clname);
}

int Onivox_formulaire_ajout_user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
