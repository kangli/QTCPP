/****************************************************************************
** Meta object code from reading C++ file 'DockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/DockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ads__CDockWidget_t {
    const uint offsetsAndSize[48];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ads__CDockWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ads__CDockWidget_t qt_meta_stringdata_ads__CDockWidget = {
    {
QT_MOC_LITERAL(0, 16), // "ads::CDockWidget"
QT_MOC_LITERAL(17, 11), // "viewToggled"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 4), // "Open"
QT_MOC_LITERAL(35, 6), // "closed"
QT_MOC_LITERAL(42, 12), // "titleChanged"
QT_MOC_LITERAL(55, 5), // "Title"
QT_MOC_LITERAL(61, 15), // "topLevelChanged"
QT_MOC_LITERAL(77, 8), // "topLevel"
QT_MOC_LITERAL(86, 14), // "closeRequested"
QT_MOC_LITERAL(101, 17), // "visibilityChanged"
QT_MOC_LITERAL(119, 7), // "visible"
QT_MOC_LITERAL(127, 15), // "featuresChanged"
QT_MOC_LITERAL(143, 36), // "ads::CDockWidget::DockWidgetF..."
QT_MOC_LITERAL(180, 8), // "features"
QT_MOC_LITERAL(189, 23), // "setToolbarFloatingStyle"
QT_MOC_LITERAL(213, 10), // "toggleView"
QT_MOC_LITERAL(224, 15), // "setAsCurrentTab"
QT_MOC_LITERAL(240, 5), // "raise"
QT_MOC_LITERAL(246, 11), // "setFloating"
QT_MOC_LITERAL(258, 16), // "deleteDockWidget"
QT_MOC_LITERAL(275, 15), // "closeDockWidget"
QT_MOC_LITERAL(291, 14), // "showFullScreen"
QT_MOC_LITERAL(306, 10) // "showNormal"

    },
    "ads::CDockWidget\0viewToggled\0\0Open\0"
    "closed\0titleChanged\0Title\0topLevelChanged\0"
    "topLevel\0closeRequested\0visibilityChanged\0"
    "visible\0featuresChanged\0"
    "ads::CDockWidget::DockWidgetFeatures\0"
    "features\0setToolbarFloatingStyle\0"
    "toggleView\0setAsCurrentTab\0raise\0"
    "setFloating\0deleteDockWidget\0"
    "closeDockWidget\0showFullScreen\0"
    "showNormal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ads__CDockWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x06,    1 /* Public */,
       4,    0,  119,    2, 0x06,    3 /* Public */,
       5,    1,  120,    2, 0x06,    4 /* Public */,
       7,    1,  123,    2, 0x06,    6 /* Public */,
       9,    0,  126,    2, 0x06,    8 /* Public */,
      10,    1,  127,    2, 0x06,    9 /* Public */,
      12,    1,  130,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  133,    2, 0x08,   13 /* Private */,
      16,    1,  136,    2, 0x0a,   15 /* Public */,
      16,    0,  139,    2, 0x2a,   17 /* Public | MethodCloned */,
      17,    0,  140,    2, 0x0a,   18 /* Public */,
      18,    0,  141,    2, 0x0a,   19 /* Public */,
      19,    0,  142,    2, 0x0a,   20 /* Public */,
      20,    0,  143,    2, 0x0a,   21 /* Public */,
      21,    0,  144,    2, 0x0a,   22 /* Public */,
      22,    0,  145,    2, 0x0a,   23 /* Public */,
      23,    0,  146,    2, 0x0a,   24 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ads::CDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->closed(); break;
        case 2: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->topLevelChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->closeRequested(); break;
        case 5: _t->visibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->featuresChanged((*reinterpret_cast< std::add_pointer_t<ads::CDockWidget::DockWidgetFeatures>>(_a[1]))); break;
        case 7: _t->setToolbarFloatingStyle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->toggleView((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->toggleView(); break;
        case 10: _t->setAsCurrentTab(); break;
        case 11: _t->raise(); break;
        case 12: _t->setFloating(); break;
        case 13: _t->deleteDockWidget(); break;
        case 14: _t->closeDockWidget(); break;
        case 15: _t->showFullScreen(); break;
        case 16: _t->showNormal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDockWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockWidget::viewToggled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CDockWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockWidget::closed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CDockWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockWidget::titleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CDockWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockWidget::topLevelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CDockWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockWidget::closeRequested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CDockWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockWidget::visibilityChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CDockWidget::*)(ads::CDockWidget::DockWidgetFeatures );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CDockWidget::featuresChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject ads::CDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ads__CDockWidget.offsetsAndSize,
    qt_meta_data_ads__CDockWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ads__CDockWidget_t
, QtPrivate::TypeAndForceComplete<CDockWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ads::CDockWidget::DockWidgetFeatures, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ads::CDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ads__CDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ads::CDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void ads::CDockWidget::viewToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ads::CDockWidget::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ads::CDockWidget::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ads::CDockWidget::topLevelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ads::CDockWidget::closeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ads::CDockWidget::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ads::CDockWidget::featuresChanged(ads::CDockWidget::DockWidgetFeatures _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
