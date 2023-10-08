/****************************************************************************
** Meta object code from reading C++ file 'crud_interface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Database/crud_interface.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crud_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_AA__Database__CRUD_Interface_t {
    uint offsetsAndSizes[14];
    char stringdata0[29];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[16];
    char stringdata5[11];
    char stringdata6[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AA__Database__CRUD_Interface_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AA__Database__CRUD_Interface_t qt_meta_stringdata_AA__Database__CRUD_Interface = {
    {
        QT_MOC_LITERAL(0, 28),  // "AA::Database::CRUD_Interface"
        QT_MOC_LITERAL(29, 4),  // "open"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 5),  // "close"
        QT_MOC_LITERAL(41, 15),  // "on_query_result"
        QT_MOC_LITERAL(57, 10),  // "QSqlQuery*"
        QT_MOC_LITERAL(68, 6)   // "result"
    },
    "AA::Database::CRUD_Interface",
    "open",
    "",
    "close",
    "on_query_result",
    "QSqlQuery*",
    "result"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AA__Database__CRUD_Interface[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    0,   33,    2, 0x0a,    2 /* Public */,
       4,    1,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject AA::Database::CRUD_Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AA__Database__CRUD_Interface.offsetsAndSizes,
    qt_meta_data_AA__Database__CRUD_Interface,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AA__Database__CRUD_Interface_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CRUD_Interface, std::true_type>,
        // method 'open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_query_result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlQuery *, std::false_type>
    >,
    nullptr
} };

void AA::Database::CRUD_Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CRUD_Interface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->close(); break;
        case 2: _t->on_query_result((*reinterpret_cast< std::add_pointer_t<QSqlQuery*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *AA::Database::CRUD_Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AA::Database::CRUD_Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AA__Database__CRUD_Interface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AA::Database::CRUD_Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
