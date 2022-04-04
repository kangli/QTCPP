/****************************************************************************
** Meta object code from reading C++ file 'FloatingDockContainer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/FloatingDockContainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FloatingDockContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ads__CFloatingDockContainer_t {
    const uint offsetsAndSize[10];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ads__CFloatingDockContainer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ads__CFloatingDockContainer_t qt_meta_stringdata_ads__CFloatingDockContainer = {
    {
QT_MOC_LITERAL(0, 27), // "ads::CFloatingDockContainer"
QT_MOC_LITERAL(28, 25), // "onDockAreasAddedOrRemoved"
QT_MOC_LITERAL(54, 0), // ""
QT_MOC_LITERAL(55, 24), // "onDockAreaCurrentChanged"
QT_MOC_LITERAL(80, 5) // "Index"

    },
    "ads::CFloatingDockContainer\0"
    "onDockAreasAddedOrRemoved\0\0"
    "onDockAreaCurrentChanged\0Index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ads__CFloatingDockContainer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    1,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void ads::CFloatingDockContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CFloatingDockContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDockAreasAddedOrRemoved(); break;
        case 1: _t->onDockAreaCurrentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ads::CFloatingDockContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ads__CFloatingDockContainer.offsetsAndSize,
    qt_meta_data_ads__CFloatingDockContainer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ads__CFloatingDockContainer_t
, QtPrivate::TypeAndForceComplete<CFloatingDockContainer, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *ads::CFloatingDockContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CFloatingDockContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ads__CFloatingDockContainer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFloatingWidget"))
        return static_cast< IFloatingWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int ads::CFloatingDockContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
