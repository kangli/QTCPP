/****************************************************************************
** Meta object code from reading C++ file 'DockAreaTabBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/DockAreaTabBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockAreaTabBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ads__CDockAreaTabBar_t {
    const uint offsetsAndSize[48];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ads__CDockAreaTabBar_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ads__CDockAreaTabBar_t qt_meta_stringdata_ads__CDockAreaTabBar = {
    {
QT_MOC_LITERAL(0, 20), // "ads::CDockAreaTabBar"
QT_MOC_LITERAL(21, 15), // "currentChanging"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 5), // "Index"
QT_MOC_LITERAL(44, 14), // "currentChanged"
QT_MOC_LITERAL(59, 13), // "tabBarClicked"
QT_MOC_LITERAL(73, 5), // "index"
QT_MOC_LITERAL(79, 17), // "tabCloseRequested"
QT_MOC_LITERAL(97, 9), // "tabClosed"
QT_MOC_LITERAL(107, 9), // "tabOpened"
QT_MOC_LITERAL(117, 8), // "tabMoved"
QT_MOC_LITERAL(126, 4), // "from"
QT_MOC_LITERAL(131, 2), // "to"
QT_MOC_LITERAL(134, 11), // "removingTab"
QT_MOC_LITERAL(146, 11), // "tabInserted"
QT_MOC_LITERAL(158, 13), // "elidedChanged"
QT_MOC_LITERAL(172, 6), // "elided"
QT_MOC_LITERAL(179, 12), // "onTabClicked"
QT_MOC_LITERAL(192, 19), // "onTabCloseRequested"
QT_MOC_LITERAL(212, 25), // "onCloseOtherTabsRequested"
QT_MOC_LITERAL(238, 16), // "onTabWidgetMoved"
QT_MOC_LITERAL(255, 9), // "GlobalPos"
QT_MOC_LITERAL(265, 15), // "setCurrentIndex"
QT_MOC_LITERAL(281, 8) // "closeTab"

    },
    "ads::CDockAreaTabBar\0currentChanging\0"
    "\0Index\0currentChanged\0tabBarClicked\0"
    "index\0tabCloseRequested\0tabClosed\0"
    "tabOpened\0tabMoved\0from\0to\0removingTab\0"
    "tabInserted\0elidedChanged\0elided\0"
    "onTabClicked\0onTabCloseRequested\0"
    "onCloseOtherTabsRequested\0onTabWidgetMoved\0"
    "GlobalPos\0setCurrentIndex\0closeTab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ads__CDockAreaTabBar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,
       4,    1,  113,    2, 0x06,    3 /* Public */,
       5,    1,  116,    2, 0x06,    5 /* Public */,
       7,    1,  119,    2, 0x06,    7 /* Public */,
       8,    1,  122,    2, 0x06,    9 /* Public */,
       9,    1,  125,    2, 0x06,   11 /* Public */,
      10,    2,  128,    2, 0x06,   13 /* Public */,
      13,    1,  133,    2, 0x06,   16 /* Public */,
      14,    1,  136,    2, 0x06,   18 /* Public */,
      15,    1,  139,    2, 0x06,   20 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,  142,    2, 0x08,   22 /* Private */,
      18,    0,  143,    2, 0x08,   23 /* Private */,
      19,    0,  144,    2, 0x08,   24 /* Private */,
      20,    1,  145,    2, 0x08,   25 /* Private */,
      22,    1,  148,    2, 0x0a,   27 /* Public */,
      23,    1,  151,    2, 0x0a,   29 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   21,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void ads::CDockAreaTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockAreaTabBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentChanging((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->tabClosed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->tabOpened((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->tabMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->removingTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->tabInserted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->elidedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->onTabClicked(); break;
        case 11: _t->onTabCloseRequested(); break;
        case 12: _t->onCloseOtherTabsRequested(); break;
        case 13: _t->onTabWidgetMoved((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 14: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->closeTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDockAreaTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::currentChanging)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::currentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::tabBarClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::tabCloseRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::tabClosed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::tabOpened)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::tabMoved)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::removingTab)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::tabInserted)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CDockAreaTabBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTabBar::elidedChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject ads::CDockAreaTabBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_ads__CDockAreaTabBar.offsetsAndSize,
    qt_meta_data_ads__CDockAreaTabBar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ads__CDockAreaTabBar_t
, QtPrivate::TypeAndForceComplete<CDockAreaTabBar, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *ads::CDockAreaTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockAreaTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ads__CDockAreaTabBar.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int ads::CDockAreaTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ads::CDockAreaTabBar::currentChanging(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ads::CDockAreaTabBar::currentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ads::CDockAreaTabBar::tabBarClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ads::CDockAreaTabBar::tabCloseRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ads::CDockAreaTabBar::tabClosed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ads::CDockAreaTabBar::tabOpened(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ads::CDockAreaTabBar::tabMoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ads::CDockAreaTabBar::removingTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ads::CDockAreaTabBar::tabInserted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ads::CDockAreaTabBar::elidedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
