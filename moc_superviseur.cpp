/****************************************************************************
** Meta object code from reading C++ file 'superviseur.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../API/Superviseur/superviseur.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'superviseur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Superviseur_t {
    const uint offsetsAndSize[16];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Superviseur_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Superviseur_t qt_meta_stringdata_Superviseur = {
    {
QT_MOC_LITERAL(0, 11), // "Superviseur"
QT_MOC_LITERAL(12, 14), // "recuperationDo"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 11), // "lancerCycle"
QT_MOC_LITERAL(40, 17), // "synchroniserRobot"
QT_MOC_LITERAL(58, 16), // "recupererDOFanuc"
QT_MOC_LITERAL(75, 18), // "recupererDOBraccio"
QT_MOC_LITERAL(94, 14) // "envoyerDIFanuc"

    },
    "Superviseur\0recuperationDo\0\0lancerCycle\0"
    "synchroniserRobot\0recupererDOFanuc\0"
    "recupererDOBraccio\0envoyerDIFanuc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Superviseur[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    0,   53,    2, 0x0a,    4 /* Public */,
       6,    0,   54,    2, 0x0a,    5 /* Public */,
       7,    0,   55,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Superviseur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Superviseur *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->recuperationDo(); break;
        case 1: _t->lancerCycle(); break;
        case 2: _t->synchroniserRobot(); break;
        case 3: _t->recupererDOFanuc(); break;
        case 4: _t->recupererDOBraccio(); break;
        case 5: _t->envoyerDIFanuc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Superviseur::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Superviseur::recuperationDo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Superviseur::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Superviseur::lancerCycle)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject Superviseur::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Superviseur.offsetsAndSize,
    qt_meta_data_Superviseur,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Superviseur_t
, QtPrivate::TypeAndForceComplete<Superviseur, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Superviseur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Superviseur::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Superviseur.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Superviseur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Superviseur::recuperationDo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Superviseur::lancerCycle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE