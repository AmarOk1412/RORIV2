/****************************************************************************
** Meta object code from reading C++ file 'tabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onivox_shark/tabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tab_t {
    QByteArrayData data[8];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Tab_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Tab_t qt_meta_stringdata_Tab = {
    {
QT_MOC_LITERAL(0, 0, 3),
QT_MOC_LITERAL(1, 4, 7),
QT_MOC_LITERAL(2, 12, 0),
QT_MOC_LITERAL(3, 13, 4),
QT_MOC_LITERAL(4, 18, 11),
QT_MOC_LITERAL(5, 30, 4),
QT_MOC_LITERAL(6, 35, 8),
QT_MOC_LITERAL(7, 44, 5)
    },
    "Tab\0setIcon\0\0icon\0QIcon::Mode\0mode\0"
    "setTitle\0title\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab[] = {

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
       1,    2,   29,    2, 0x0a,
       1,    1,   34,    2, 0x2a,
       6,    1,   37,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QIcon, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QIcon,    3,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void Tab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tab *_t = static_cast<Tab *>(_o);
        switch (_id) {
        case 0: _t->setIcon((*reinterpret_cast< QIcon(*)>(_a[1])),(*reinterpret_cast< QIcon::Mode(*)>(_a[2]))); break;
        case 1: _t->setIcon((*reinterpret_cast< QIcon(*)>(_a[1]))); break;
        case 2: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Tab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Tab.data,
      qt_meta_data_Tab,  qt_static_metacall, 0, 0}
};


const QMetaObject *Tab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tab.stringdata))
        return static_cast<void*>(const_cast< Tab*>(this));
    return QWidget::qt_metacast(_clname);
}

int Tab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_TabBar_t {
    QByteArrayData data[18];
    char stringdata[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TabBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TabBar_t qt_meta_stringdata_TabBar = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 6),
QT_MOC_LITERAL(2, 14, 0),
QT_MOC_LITERAL(3, 15, 11),
QT_MOC_LITERAL(4, 27, 8),
QT_MOC_LITERAL(5, 36, 5),
QT_MOC_LITERAL(6, 42, 8),
QT_MOC_LITERAL(7, 51, 14),
QT_MOC_LITERAL(8, 66, 9),
QT_MOC_LITERAL(9, 76, 13),
QT_MOC_LITERAL(10, 90, 16),
QT_MOC_LITERAL(11, 107, 9),
QT_MOC_LITERAL(12, 117, 7),
QT_MOC_LITERAL(13, 125, 15),
QT_MOC_LITERAL(14, 141, 20),
QT_MOC_LITERAL(15, 162, 8),
QT_MOC_LITERAL(16, 171, 9),
QT_MOC_LITERAL(17, 181, 21)
    },
    "TabBar\0newTab\0\0newTabEmpty\0cloneTab\0"
    "index\0closeTab\0closeOtherTabs\0reloadTab\0"
    "reloadAllTabs\0tabMoveRequested\0fromIndex\0"
    "toIndex\0selectTabAction\0contextMenuRequested\0"
    "position\0tabSwitch\0reinitColorTabHovered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x05,
       3,    0,   95,    2, 0x05,
       4,    1,   96,    2, 0x05,
       6,    1,   99,    2, 0x05,
       7,    1,  102,    2, 0x05,
       8,    1,  105,    2, 0x05,
       9,    0,  108,    2, 0x05,
      10,    2,  109,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      13,    0,  114,    2, 0x08,
       4,    0,  115,    2, 0x08,
       6,    0,  116,    2, 0x08,
       7,    0,  117,    2, 0x08,
       8,    0,  118,    2, 0x08,
      14,    1,  119,    2, 0x08,
      16,    1,  122,    2, 0x08,
      17,    0,  125,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void TabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabBar *_t = static_cast<TabBar *>(_o);
        switch (_id) {
        case 0: _t->newTab(); break;
        case 1: _t->newTabEmpty(); break;
        case 2: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->reloadAllTabs(); break;
        case 7: _t->tabMoveRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->selectTabAction(); break;
        case 9: _t->cloneTab(); break;
        case 10: _t->closeTab(); break;
        case 11: _t->closeOtherTabs(); break;
        case 12: _t->reloadTab(); break;
        case 13: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 14: _t->tabSwitch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->reinitColorTabHovered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::newTab)) {
                *result = 0;
            }
        }
        {
            typedef void (TabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::newTabEmpty)) {
                *result = 1;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::cloneTab)) {
                *result = 2;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::closeTab)) {
                *result = 3;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::closeOtherTabs)) {
                *result = 4;
            }
        }
        {
            typedef void (TabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::reloadTab)) {
                *result = 5;
            }
        }
        {
            typedef void (TabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::reloadAllTabs)) {
                *result = 6;
            }
        }
        {
            typedef void (TabBar::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabBar::tabMoveRequested)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject TabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_TabBar.data,
      qt_meta_data_TabBar,  qt_static_metacall, 0, 0}
};


const QMetaObject *TabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabBar.stringdata))
        return static_cast<void*>(const_cast< TabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int TabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void TabBar::newTab()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TabBar::newTabEmpty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void TabBar::cloneTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TabBar::closeTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TabBar::closeOtherTabs(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TabBar::reloadTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TabBar::reloadAllTabs()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void TabBar::tabMoveRequested(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
struct qt_meta_stringdata_WebActionMapper_t {
    QByteArrayData data[6];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WebActionMapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WebActionMapper_t qt_meta_stringdata_WebActionMapper = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 13),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 12),
QT_MOC_LITERAL(4, 44, 13),
QT_MOC_LITERAL(5, 58, 16)
    },
    "WebActionMapper\0rootTriggered\0\0"
    "childChanged\0rootDestroyed\0currentDestroyed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebActionMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    0,   36,    2, 0x08,
       5,    0,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WebActionMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebActionMapper *_t = static_cast<WebActionMapper *>(_o);
        switch (_id) {
        case 0: _t->rootTriggered(); break;
        case 1: _t->childChanged(); break;
        case 2: _t->rootDestroyed(); break;
        case 3: _t->currentDestroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WebActionMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebActionMapper.data,
      qt_meta_data_WebActionMapper,  qt_static_metacall, 0, 0}
};


const QMetaObject *WebActionMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebActionMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebActionMapper.stringdata))
        return static_cast<void*>(const_cast< WebActionMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int WebActionMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_TabWidget_t {
    QByteArrayData data[54];
    char stringdata[740];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TabWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TabWidget_t qt_meta_stringdata_TabWidget = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 10),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 8),
QT_MOC_LITERAL(4, 31, 3),
QT_MOC_LITERAL(5, 35, 11),
QT_MOC_LITERAL(6, 47, 13),
QT_MOC_LITERAL(7, 61, 14),
QT_MOC_LITERAL(8, 76, 5),
QT_MOC_LITERAL(9, 82, 4),
QT_MOC_LITERAL(10, 87, 15),
QT_MOC_LITERAL(11, 103, 20),
QT_MOC_LITERAL(12, 124, 7),
QT_MOC_LITERAL(13, 132, 11),
QT_MOC_LITERAL(14, 144, 4),
QT_MOC_LITERAL(15, 149, 12),
QT_MOC_LITERAL(16, 162, 8),
QT_MOC_LITERAL(17, 171, 23),
QT_MOC_LITERAL(18, 195, 8),
QT_MOC_LITERAL(19, 204, 32),
QT_MOC_LITERAL(20, 237, 7),
QT_MOC_LITERAL(21, 245, 34),
QT_MOC_LITERAL(22, 280, 32),
QT_MOC_LITERAL(23, 313, 14),
QT_MOC_LITERAL(24, 328, 10),
QT_MOC_LITERAL(25, 339, 5),
QT_MOC_LITERAL(26, 345, 11),
QT_MOC_LITERAL(27, 357, 19),
QT_MOC_LITERAL(28, 377, 6),
QT_MOC_LITERAL(29, 384, 8),
QT_MOC_LITERAL(30, 393, 11),
QT_MOC_LITERAL(31, 405, 8),
QT_MOC_LITERAL(32, 414, 5),
QT_MOC_LITERAL(33, 420, 8),
QT_MOC_LITERAL(34, 429, 14),
QT_MOC_LITERAL(35, 444, 9),
QT_MOC_LITERAL(36, 454, 13),
QT_MOC_LITERAL(37, 468, 7),
QT_MOC_LITERAL(38, 476, 11),
QT_MOC_LITERAL(39, 488, 7),
QT_MOC_LITERAL(40, 496, 9),
QT_MOC_LITERAL(41, 506, 7),
QT_MOC_LITERAL(42, 514, 14),
QT_MOC_LITERAL(43, 529, 25),
QT_MOC_LITERAL(44, 555, 32),
QT_MOC_LITERAL(45, 588, 8),
QT_MOC_LITERAL(46, 597, 6),
QT_MOC_LITERAL(47, 604, 18),
QT_MOC_LITERAL(48, 623, 18),
QT_MOC_LITERAL(49, 642, 19),
QT_MOC_LITERAL(50, 662, 17),
QT_MOC_LITERAL(51, 680, 20),
QT_MOC_LITERAL(52, 701, 14),
QT_MOC_LITERAL(53, 716, 22)
    },
    "TabWidget\0enterEvent\0\0loadPage\0url\0"
    "tabsChanged\0lastTabClosed\0added_bookmark\0"
    "title\0icon\0setCurrentTitle\0"
    "showStatusBarMessage\0message\0linkHovered\0"
    "link\0loadProgress\0progress\0"
    "geometryChangeRequested\0geometry\0"
    "menuBarVisibilityChangeRequested\0"
    "visible\0statusBarVisibilityChangeRequested\0"
    "toolBarVisibilityChangeRequested\0"
    "printRequested\0QWebFrame*\0frame\0"
    "newTabEmpty\0loadUrlInCurrentTab\0newTab\0"
    "WebView*\0makeCurrent\0cloneTab\0index\0"
    "closeTab\0closeOtherTabs\0reloadTab\0"
    "reloadAllTabs\0nextTab\0previousTab\0"
    "moveTab\0fromIndex\0toIndex\0currentChanged\0"
    "aboutToShowRecentTabsMenu\0"
    "aboutToShowRecentTriggeredAction\0"
    "QAction*\0action\0webViewLoadStarted\0"
    "webViewIconChanged\0webViewTitleChanged\0"
    "webViewUrlChanged\0windowCloseRequested\0"
    "verif_tool_tip\0set_tooltip_need_modif\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x05,
       3,    1,  210,    2, 0x05,
       5,    0,  213,    2, 0x05,
       6,    0,  214,    2, 0x05,
       7,    3,  215,    2, 0x05,
      10,    1,  222,    2, 0x05,
      11,    1,  225,    2, 0x05,
      13,    1,  228,    2, 0x05,
      15,    1,  231,    2, 0x05,
      17,    1,  234,    2, 0x05,
      19,    1,  237,    2, 0x05,
      21,    1,  240,    2, 0x05,
      22,    1,  243,    2, 0x05,
      23,    1,  246,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      26,    0,  249,    2, 0x0a,
      27,    1,  250,    2, 0x0a,
      28,    1,  253,    2, 0x0a,
      28,    0,  256,    2, 0x2a,
      31,    1,  257,    2, 0x0a,
      31,    0,  260,    2, 0x2a,
      33,    1,  261,    2, 0x0a,
      33,    0,  264,    2, 0x2a,
      34,    1,  265,    2, 0x0a,
      35,    1,  268,    2, 0x0a,
      35,    0,  271,    2, 0x2a,
      36,    0,  272,    2, 0x0a,
      37,    0,  273,    2, 0x0a,
      38,    0,  274,    2, 0x0a,
      39,    2,  275,    2, 0x08,
      42,    1,  280,    2, 0x08,
      43,    0,  283,    2, 0x08,
      44,    1,  284,    2, 0x08,
      47,    0,  287,    2, 0x08,
      48,    0,  288,    2, 0x08,
      49,    1,  289,    2, 0x08,
      50,    1,  292,    2, 0x08,
      51,    0,  295,    2, 0x08,
      52,    0,  296,    2, 0x08,
      53,    0,  297,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QIcon,    8,    4,    9,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QRect,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, 0x80000000 | 24,   25,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,
    0x80000000 | 29, QMetaType::Bool,   30,
    0x80000000 | 29,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   40,   41,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabWidget *_t = static_cast<TabWidget *>(_o);
        switch (_id) {
        case 0: _t->enterEvent(); break;
        case 1: _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->tabsChanged(); break;
        case 3: _t->lastTabClosed(); break;
        case 4: _t->added_bookmark((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QIcon(*)>(_a[3]))); break;
        case 5: _t->setCurrentTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->showStatusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 10: _t->menuBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->statusBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->toolBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->printRequested((*reinterpret_cast< QWebFrame*(*)>(_a[1]))); break;
        case 14: _t->newTabEmpty(); break;
        case 15: _t->loadUrlInCurrentTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 16: { WebView* _r = _t->newTab((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< WebView**>(_a[0]) = _r; }  break;
        case 17: { WebView* _r = _t->newTab();
            if (_a[0]) *reinterpret_cast< WebView**>(_a[0]) = _r; }  break;
        case 18: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->cloneTab(); break;
        case 20: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->closeTab(); break;
        case 22: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->reloadTab(); break;
        case 25: _t->reloadAllTabs(); break;
        case 26: _t->nextTab(); break;
        case 27: _t->previousTab(); break;
        case 28: _t->moveTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->aboutToShowRecentTabsMenu(); break;
        case 31: _t->aboutToShowRecentTriggeredAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 32: _t->webViewLoadStarted(); break;
        case 33: _t->webViewIconChanged(); break;
        case 34: _t->webViewTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->webViewUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 36: _t->windowCloseRequested(); break;
        case 37: _t->verif_tool_tip(); break;
        case 38: _t->set_tooltip_need_modif(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TabWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::enterEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (TabWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::loadPage)) {
                *result = 1;
            }
        }
        {
            typedef void (TabWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::tabsChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (TabWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::lastTabClosed)) {
                *result = 3;
            }
        }
        {
            typedef void (TabWidget::*_t)(QString , QString , QIcon );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::added_bookmark)) {
                *result = 4;
            }
        }
        {
            typedef void (TabWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::setCurrentTitle)) {
                *result = 5;
            }
        }
        {
            typedef void (TabWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::showStatusBarMessage)) {
                *result = 6;
            }
        }
        {
            typedef void (TabWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::linkHovered)) {
                *result = 7;
            }
        }
        {
            typedef void (TabWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::loadProgress)) {
                *result = 8;
            }
        }
        {
            typedef void (TabWidget::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::geometryChangeRequested)) {
                *result = 9;
            }
        }
        {
            typedef void (TabWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::menuBarVisibilityChangeRequested)) {
                *result = 10;
            }
        }
        {
            typedef void (TabWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::statusBarVisibilityChangeRequested)) {
                *result = 11;
            }
        }
        {
            typedef void (TabWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::toolBarVisibilityChangeRequested)) {
                *result = 12;
            }
        }
        {
            typedef void (TabWidget::*_t)(QWebFrame * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabWidget::printRequested)) {
                *result = 13;
            }
        }
    }
}

const QMetaObject TabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_TabWidget.data,
      qt_meta_data_TabWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *TabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabWidget.stringdata))
        return static_cast<void*>(const_cast< TabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int TabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void TabWidget::enterEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TabWidget::loadPage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TabWidget::tabsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void TabWidget::lastTabClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void TabWidget::added_bookmark(QString _t1, QString _t2, QIcon _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TabWidget::setCurrentTitle(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TabWidget::showStatusBarMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TabWidget::linkHovered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TabWidget::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TabWidget::geometryChangeRequested(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TabWidget::menuBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TabWidget::statusBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TabWidget::toolBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TabWidget::printRequested(QWebFrame * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
