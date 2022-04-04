/****************************************************************************
** Meta object code from reading C++ file 'DockFocusController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/DockFocusController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockFocusController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ads__CDockFocusController_t {
    const uint offsetsAndSize[34];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ads__CDockFocusController_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ads__CDockFocusController_t qt_meta_stringdata_ads__CDockFocusController = {
    {
QT_MOC_LITERAL(0, 25), // "ads::CDockFocusController"
QT_MOC_LITERAL(26, 25), // "onApplicationFocusChanged"
QT_MOC_LITERAL(52, 0), // ""
QT_MOC_LITERAL(53, 8), // "QWidget*"
QT_MOC_LITERAL(62, 3), // "old"
QT_MOC_LITERAL(66, 3), // "now"
QT_MOC_LITERAL(70, 20), // "onFocusWindowChanged"
QT_MOC_LITERAL(91, 8), // "QWindow*"
QT_MOC_LITERAL(100, 11), // "focusWindow"
QT_MOC_LITERAL(112, 28), // "onFocusedDockAreaViewToggled"
QT_MOC_LITERAL(141, 4), // "Open"
QT_MOC_LITERAL(146, 15), // "onStateRestored"
QT_MOC_LITERAL(162, 29), // "onDockWidgetVisibilityChanged"
QT_MOC_LITERAL(192, 7), // "Visible"
QT_MOC_LITERAL(200, 20), // "setDockWidgetFocused"
QT_MOC_LITERAL(221, 12), // "CDockWidget*"
QT_MOC_LITERAL(234, 10) // "focusedNow"

    },
    "ads::CDockFocusController\0"
    "onApplicationFocusChanged\0\0QWidget*\0"
    "old\0now\0onFocusWindowChanged\0QWindow*\0"
    "focusWindow\0onFocusedDockAreaViewToggled\0"
    "Open\0onStateRestored\0onDockWidgetVisibilityChanged\0"
    "Visible\0setDockWidgetFocused\0CDockWidget*\0"
    "focusedNow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ads__CDockFocusController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x08,    1 /* Private */,
       6,    1,   55,    2, 0x08,    4 /* Private */,
       9,    1,   58,    2, 0x08,    6 /* Private */,
      11,    0,   61,    2, 0x08,    8 /* Private */,
      12,    1,   62,    2, 0x08,    9 /* Private */,
      14,    1,   65,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void ads::CDockFocusController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockFocusController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onApplicationFocusChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 1: _t->onFocusWindowChanged((*reinterpret_cast< std::add_pointer_t<QWindow*>>(_a[1]))); break;
        case 2: _t->onFocusedDockAreaViewToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->onStateRestored(); break;
        case 4: _t->onDockWidgetVisibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setDockWidgetFocused((*reinterpret_cast< std::add_pointer_t<CDockWidget*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CDockWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject ads::CDockFocusController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ads__CDockFocusController.offsetsAndSize,
    qt_meta_data_ads__CDockFocusController,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ads__CDockFocusController_t
, QtPrivate::TypeAndForceComplete<CDockFocusController, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWindow *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<CDockWidget *, std::false_type>


>,
    nullptr
} };


const QMetaObject *ads::CDockFocusController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockFocusController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ads__CDockFocusController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ads::CDockFocusController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
