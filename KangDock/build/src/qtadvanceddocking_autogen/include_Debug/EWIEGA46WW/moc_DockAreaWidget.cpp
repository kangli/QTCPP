/****************************************************************************
** Meta object code from reading C++ file 'DockAreaWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/DockAreaWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockAreaWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ads__CDockAreaWidget_t {
    const uint offsetsAndSize[34];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ads__CDockAreaWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ads__CDockAreaWidget_t qt_meta_stringdata_ads__CDockAreaWidget = {
    {
QT_MOC_LITERAL(0, 20), // "ads::CDockAreaWidget"
QT_MOC_LITERAL(21, 13), // "tabBarClicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 5), // "index"
QT_MOC_LITERAL(42, 15), // "currentChanging"
QT_MOC_LITERAL(58, 14), // "currentChanged"
QT_MOC_LITERAL(73, 11), // "viewToggled"
QT_MOC_LITERAL(85, 4), // "Open"
QT_MOC_LITERAL(90, 19), // "onTabCloseRequested"
QT_MOC_LITERAL(110, 5), // "Index"
QT_MOC_LITERAL(116, 17), // "reorderDockWidget"
QT_MOC_LITERAL(134, 9), // "fromIndex"
QT_MOC_LITERAL(144, 7), // "toIndex"
QT_MOC_LITERAL(152, 10), // "toggleView"
QT_MOC_LITERAL(163, 15), // "setCurrentIndex"
QT_MOC_LITERAL(179, 9), // "closeArea"
QT_MOC_LITERAL(189, 15) // "closeOtherAreas"

    },
    "ads::CDockAreaWidget\0tabBarClicked\0\0"
    "index\0currentChanging\0currentChanged\0"
    "viewToggled\0Open\0onTabCloseRequested\0"
    "Index\0reorderDockWidget\0fromIndex\0"
    "toIndex\0toggleView\0setCurrentIndex\0"
    "closeArea\0closeOtherAreas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ads__CDockAreaWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       4,    1,   77,    2, 0x06,    3 /* Public */,
       5,    1,   80,    2, 0x06,    5 /* Public */,
       6,    1,   83,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   86,    2, 0x08,    9 /* Private */,
      10,    2,   89,    2, 0x08,   11 /* Private */,
      13,    1,   94,    2, 0x09,   14 /* Protected */,
      14,    1,   97,    2, 0x0a,   16 /* Public */,
      15,    0,  100,    2, 0x0a,   18 /* Public */,
      16,    0,  101,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ads::CDockAreaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockAreaWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->currentChanging((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->viewToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->onTabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->reorderDockWidget((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->toggleView((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->closeArea(); break;
        case 9: _t->closeOtherAreas(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDockAreaWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaWidget::tabBarClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CDockAreaWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaWidget::currentChanging)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CDockAreaWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaWidget::currentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CDockAreaWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockAreaWidget::viewToggled)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ads::CDockAreaWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ads__CDockAreaWidget.offsetsAndSize,
    qt_meta_data_ads__CDockAreaWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ads__CDockAreaWidget_t
, QtPrivate::TypeAndForceComplete<CDockAreaWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ads::CDockAreaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockAreaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ads__CDockAreaWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ads::CDockAreaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ads::CDockAreaWidget::tabBarClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ads::CDockAreaWidget::currentChanging(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ads::CDockAreaWidget::currentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ads::CDockAreaWidget::viewToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
