/****************************************************************************
** Meta object code from reading C++ file 'sql_connection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/LibraryAyimea/sql_connection.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sql_connection.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AA__Database__SQL_Connection_t {
    uint offsetsAndSizes[32];
    char stringdata0[29];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[13];
    char stringdata5[7];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[7];
    char stringdata9[13];
    char stringdata10[5];
    char stringdata11[15];
    char stringdata12[11];
    char stringdata13[11];
    char stringdata14[14];
    char stringdata15[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AA__Database__SQL_Connection_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AA__Database__SQL_Connection_t qt_meta_stringdata_AA__Database__SQL_Connection = {
    {
        QT_MOC_LITERAL(0, 28),  // "AA::Database::SQL_Connection"
        QT_MOC_LITERAL(29, 9),  // "connected"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 6),  // "succes"
        QT_MOC_LITERAL(47, 12),  // "query_status"
        QT_MOC_LITERAL(60, 6),  // "status"
        QT_MOC_LITERAL(67, 12),  // "query_result"
        QT_MOC_LITERAL(80, 10),  // "QSqlQuery*"
        QT_MOC_LITERAL(91, 6),  // "result"
        QT_MOC_LITERAL(98, 12),  // "error_driver"
        QT_MOC_LITERAL(111, 4),  // "text"
        QT_MOC_LITERAL(116, 14),  // "error_database"
        QT_MOC_LITERAL(131, 10),  // "error_code"
        QT_MOC_LITERAL(142, 10),  // "on_connect"
        QT_MOC_LITERAL(153, 13),  // "on_disconnect"
        QT_MOC_LITERAL(167, 8)   // "on_error"
    },
    "AA::Database::SQL_Connection",
    "connected",
    "",
    "succes",
    "query_status",
    "status",
    "query_result",
    "QSqlQuery*",
    "result",
    "error_driver",
    "text",
    "error_database",
    "error_code",
    "on_connect",
    "on_disconnect",
    "on_error"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AA__Database__SQL_Connection[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       6,    1,   74,    2, 0x06,    5 /* Public */,
       9,    1,   77,    2, 0x06,    7 /* Public */,
      11,    1,   80,    2, 0x06,    9 /* Public */,
      12,    1,   83,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,   86,    2, 0x0a,   13 /* Public */,
      14,    0,   87,    2, 0x0a,   14 /* Public */,
      15,    0,   88,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AA::Database::SQL_Connection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AA__Database__SQL_Connection.offsetsAndSizes,
    qt_meta_data_AA__Database__SQL_Connection,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AA__Database__SQL_Connection_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SQL_Connection, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'query_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'query_result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlQuery *, std::false_type>,
        // method 'error_driver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'error_database'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'error_code'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_connect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_disconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AA::Database::SQL_Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SQL_Connection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->query_status((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->query_result((*reinterpret_cast< std::add_pointer_t<QSqlQuery*>>(_a[1]))); break;
        case 3: _t->error_driver((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->error_database((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->error_code((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_connect(); break;
        case 7: _t->on_disconnect(); break;
        case 8: _t->on_error(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SQL_Connection::*)(const bool & );
            if (_t _q_method = &SQL_Connection::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(const QString & );
            if (_t _q_method = &SQL_Connection::query_status; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(QSqlQuery * );
            if (_t _q_method = &SQL_Connection::query_result; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(const QString & );
            if (_t _q_method = &SQL_Connection::error_driver; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(const QString & );
            if (_t _q_method = &SQL_Connection::error_database; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(const QString & );
            if (_t _q_method = &SQL_Connection::error_code; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *AA::Database::SQL_Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AA::Database::SQL_Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AA__Database__SQL_Connection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AA::Database::SQL_Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AA::Database::SQL_Connection::connected(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AA::Database::SQL_Connection::query_status(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AA::Database::SQL_Connection::query_result(QSqlQuery * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AA::Database::SQL_Connection::error_driver(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AA::Database::SQL_Connection::error_database(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AA::Database::SQL_Connection::error_code(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
