/****************************************************************************
** Meta object code from reading C++ file 'DockAreaTitleBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/DockAreaTitleBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockAreaTitleBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ads__CDockAreaTitleBar_t {
    const uint offsetsAndSize[26];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ads__CDockAreaTitleBar_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ads__CDockAreaTitleBar_t qt_meta_stringdata_ads__CDockAreaTitleBar = {
    {
QT_MOC_LITERAL(0, 22), // "ads::CDockAreaTitleBar"
QT_MOC_LITERAL(23, 13), // "tabBarClicked"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 5), // "index"
QT_MOC_LITERAL(44, 21), // "onTabsMenuAboutToShow"
QT_MOC_LITERAL(66, 20), // "onCloseButtonClicked"
QT_MOC_LITERAL(87, 21), // "onUndockButtonClicked"
QT_MOC_LITERAL(109, 25), // "onTabsMenuActionTriggered"
QT_MOC_LITERAL(135, 8), // "QAction*"
QT_MOC_LITERAL(144, 6), // "Action"
QT_MOC_LITERAL(151, 19), // "onCurrentTabChanged"
QT_MOC_LITERAL(171, 5), // "Index"
QT_MOC_LITERAL(177, 20) // "markTabsMenuOutdated"

    },
    "ads::CDockAreaTitleBar\0tabBarClicked\0"
    "\0index\0onTabsMenuAboutToShow\0"
    "onCloseButtonClicked\0onUndockButtonClicked\0"
    "onTabsMenuActionTriggered\0QAction*\0"
    "Action\0onCurrentTabChanged\0Index\0"
    "markTabsMenuOutdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ads__CDockAreaTitleBar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   59,    2, 0x08,    3 /* Private */,
       5,    0,   60,    2, 0x08,    4 /* Private */,
       6,    0,   61,    2, 0x08,    5 /* Private */,
       7,    1,   62,    2, 0x08,    6 /* Private */,
      10,    1,   65,    2, 0x08,    8 /* Private */,
      12,    0,   68,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void ads::CDockAreaTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockAreaTitleBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onTabsMenuAboutToShow(); break;
        case 2: _t->onCloseButtonClicked(); break;
        case 3: _t->onUndockButtonClicked(); break;
        case 4: _t->onTabsMenuActionTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 5: _t->onCurrentTabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->markTabsMenuOutdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDockAreaTitleBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaTitleBar::tabBarClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ads::CDockAreaTitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ads__CDockAreaTitleBar.offsetsAndSize,
    qt_meta_data_ads__CDockAreaTitleBar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ads__CDockAreaTitleBar_t
, QtPrivate::TypeAndForceComplete<CDockAreaTitleBar, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ads::CDockAreaTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockAreaTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ads__CDockAreaTitleBar.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ads::CDockAreaTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ads::CDockAreaTitleBar::tabBarClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
