/****************************************************************************
** Meta object code from reading C++ file 'sql_connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/Library_Ayimea/sql_connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sql_connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AA__Database__SQL_Connection_t {
    QByteArrayData data[16];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AA__Database__SQL_Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AA__Database__SQL_Connection_t qt_meta_stringdata_AA__Database__SQL_Connection = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AA::Database::SQL_Connection"
QT_MOC_LITERAL(1, 29, 9), // "connected"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "succes"
QT_MOC_LITERAL(4, 47, 12), // "query_status"
QT_MOC_LITERAL(5, 60, 6), // "status"
QT_MOC_LITERAL(6, 67, 12), // "query_result"
QT_MOC_LITERAL(7, 80, 10), // "QSqlQuery*"
QT_MOC_LITERAL(8, 91, 6), // "result"
QT_MOC_LITERAL(9, 98, 12), // "error_driver"
QT_MOC_LITERAL(10, 111, 4), // "text"
QT_MOC_LITERAL(11, 116, 14), // "error_database"
QT_MOC_LITERAL(12, 131, 10), // "error_code"
QT_MOC_LITERAL(13, 142, 10), // "on_connect"
QT_MOC_LITERAL(14, 153, 13), // "on_disconnect"
QT_MOC_LITERAL(15, 167, 8) // "on_error"

    },
    "AA::Database::SQL_Connection\0connected\0"
    "\0succes\0query_status\0status\0query_result\0"
    "QSqlQuery*\0result\0error_driver\0text\0"
    "error_database\0error_code\0on_connect\0"
    "on_disconnect\0on_error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AA__Database__SQL_Connection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       9,    1,   68,    2, 0x06 /* Public */,
      11,    1,   71,    2, 0x06 /* Public */,
      12,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   77,    2, 0x0a /* Public */,
      14,    0,   78,    2, 0x0a /* Public */,
      15,    0,   79,    2, 0x0a /* Public */,

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

void AA::Database::SQL_Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SQL_Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->query_status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->query_result((*reinterpret_cast< QSqlQuery*(*)>(_a[1]))); break;
        case 3: _t->error_driver((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->error_database((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->error_code((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_connect(); break;
        case 7: _t->on_disconnect(); break;
        case 8: _t->on_error(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SQL_Connection::*)(const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SQL_Connection::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SQL_Connection::query_status)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(QSqlQuery * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SQL_Connection::query_result)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SQL_Connection::error_driver)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SQL_Connection::error_database)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SQL_Connection::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SQL_Connection::error_code)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AA::Database::SQL_Connection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AA__Database__SQL_Connection.data,
    qt_meta_data_AA__Database__SQL_Connection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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
            *reinterpret_cast<int*>(_a[0]) = -1;
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
