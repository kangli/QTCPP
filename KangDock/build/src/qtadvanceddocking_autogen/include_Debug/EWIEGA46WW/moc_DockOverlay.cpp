/****************************************************************************
** Meta object code from reading C++ file 'DockOverlay.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/DockOverlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockOverlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ads__CDockOverlay_t {
    const uint offsetsAndSize[2];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ads__CDockOverlay_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ads__CDockOverlay_t qt_meta_stringdata_ads__CDockOverlay = {
    {
QT_MOC_LITERAL(0, 17) // "ads::CDockOverlay"

    },
    "ads::CDockOverlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ads__CDockOverlay[] = {

 // content:
      10,       // revision
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

void ads::CDockOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ads::CDockOverlay::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ads__CDockOverlay.offsetsAndSize,
    qt_meta_data_ads__CDockOverlay,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ads__CDockOverlay_t
, QtPrivate::TypeAndForceComplete<CDockOverlay, std::true_type>



>,
    nullptr
} };


const QMetaObject *ads::CDockOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ads__CDockOverlay.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ads::CDockOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ads__CDockOverlayCross_t {
    const uint offsetsAndSize[14];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ads__CDockOverlayCross_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ads__CDockOverlayCross_t qt_meta_stringdata_ads__CDockOverlayCross = {
    {
QT_MOC_LITERAL(0, 22), // "ads::CDockOverlayCross"
QT_MOC_LITERAL(23, 10), // "iconColors"
QT_MOC_LITERAL(34, 14), // "iconFrameColor"
QT_MOC_LITERAL(49, 19), // "iconBackgroundColor"
QT_MOC_LITERAL(69, 16), // "iconOverlayColor"
QT_MOC_LITERAL(86, 14), // "iconArrowColor"
QT_MOC_LITERAL(101, 15) // "iconShadowColor"

    },
    "ads::CDockOverlayCross\0iconColors\0"
    "iconFrameColor\0iconBackgroundColor\0"
    "iconOverlayColor\0iconArrowColor\0"
    "iconShadowColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ads__CDockOverlayCross[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QColor, 0x00015103, uint(-1), 0,
       3, QMetaType::QColor, 0x00015103, uint(-1), 0,
       4, QMetaType::QColor, 0x00015103, uint(-1), 0,
       5, QMetaType::QColor, 0x00015103, uint(-1), 0,
       6, QMetaType::QColor, 0x00015103, uint(-1), 0,

       0        // eod
};

void ads::CDockOverlayCross::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CDockOverlayCross *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->iconColors(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CDockOverlayCross *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconColors(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIconFrameColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setIconBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setIconOverlayColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setIconArrowColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setIconShadowColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ads::CDockOverlayCross::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ads__CDockOverlayCross.offsetsAndSize,
    qt_meta_data_ads__CDockOverlayCross,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ads__CDockOverlayCross_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<CDockOverlayCross, std::true_type>



>,
    nullptr
} };


const QMetaObject *ads::CDockOverlayCross::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockOverlayCross::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ads__CDockOverlayCross.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ads::CDockOverlayCross::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
