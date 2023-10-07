/****************************************************************************
** Meta object code from reading C++ file 'crud_api.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Library_Ayimea/crud_api.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crud_api.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AA__Database__CRUD_API_t {
    QByteArrayData data[24];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AA__Database__CRUD_API_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AA__Database__CRUD_API_t qt_meta_stringdata_AA__Database__CRUD_API = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AA::Database::CRUD_API"
QT_MOC_LITERAL(1, 23, 9), // "on_create"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "result"
QT_MOC_LITERAL(4, 41, 14), // "on_readRecords"
QT_MOC_LITERAL(5, 56, 18), // "QList<QStringList>"
QT_MOC_LITERAL(6, 75, 12), // "on_readModel"
QT_MOC_LITERAL(7, 88, 21), // "const QSqlTableModel*"
QT_MOC_LITERAL(8, 110, 9), // "on_readId"
QT_MOC_LITERAL(9, 120, 12), // "on_readToCSV"
QT_MOC_LITERAL(10, 133, 19), // "on_readDatabaseName"
QT_MOC_LITERAL(11, 153, 13), // "on_readTables"
QT_MOC_LITERAL(12, 167, 13), // "on_readLayout"
QT_MOC_LITERAL(13, 181, 11), // "on_readUser"
QT_MOC_LITERAL(14, 193, 9), // "on_update"
QT_MOC_LITERAL(15, 203, 9), // "on_delete"
QT_MOC_LITERAL(16, 213, 4), // "open"
QT_MOC_LITERAL(17, 218, 5), // "close"
QT_MOC_LITERAL(18, 224, 7), // "execute"
QT_MOC_LITERAL(19, 232, 7), // "Command"
QT_MOC_LITERAL(20, 240, 7), // "command"
QT_MOC_LITERAL(21, 248, 10), // "parameters"
QT_MOC_LITERAL(22, 259, 5), // "query"
QT_MOC_LITERAL(23, 265, 3) // "sql"

    },
    "AA::Database::CRUD_API\0on_create\0\0"
    "result\0on_readRecords\0QList<QStringList>\0"
    "on_readModel\0const QSqlTableModel*\0"
    "on_readId\0on_readToCSV\0on_readDatabaseName\0"
    "on_readTables\0on_readLayout\0on_readUser\0"
    "on_update\0on_delete\0open\0close\0execute\0"
    "Command\0command\0parameters\0query\0sql"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AA__Database__CRUD_API[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,
       9,    1,  101,    2, 0x06 /* Public */,
      10,    1,  104,    2, 0x06 /* Public */,
      11,    1,  107,    2, 0x06 /* Public */,
      12,    1,  110,    2, 0x06 /* Public */,
      13,    1,  113,    2, 0x06 /* Public */,
      14,    1,  116,    2, 0x06 /* Public */,
      15,    1,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  122,    2, 0x0a /* Public */,
      17,    0,  123,    2, 0x0a /* Public */,
      18,    2,  124,    2, 0x0a /* Public */,
      22,    1,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    3,
    QMetaType::Void, 0x80000000 | 7,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QStringList,   20,   21,
    QMetaType::Bool, QMetaType::QString,   23,

       0        // eod
};

void AA::Database::CRUD_API::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CRUD_API *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_create((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_readRecords((*reinterpret_cast< const QList<QStringList>(*)>(_a[1]))); break;
        case 2: _t->on_readModel((*reinterpret_cast< const QSqlTableModel*(*)>(_a[1]))); break;
        case 3: _t->on_readId((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->on_readToCSV((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_readDatabaseName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_readTables((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: _t->on_readLayout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_readUser((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 9: _t->on_update((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_delete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->open(); break;
        case 12: _t->close(); break;
        case 13: _t->execute((*reinterpret_cast< Command(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 14: { bool _r = _t->query((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QStringList> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CRUD_API::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_create)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(const QList<QStringList> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_readRecords)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(const QSqlTableModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_readModel)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(const QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_readId)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_readToCSV)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_readDatabaseName)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_readTables)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_readLayout)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_readUser)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_update)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CRUD_API::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CRUD_API::on_delete)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AA::Database::CRUD_API::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AA__Database__CRUD_API.data,
    qt_meta_data_AA__Database__CRUD_API,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AA::Database::CRUD_API::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AA::Database::CRUD_API::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AA__Database__CRUD_API.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AA::Database::CRUD_API::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void AA::Database::CRUD_API::on_create(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AA::Database::CRUD_API::on_readRecords(const QList<QStringList> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AA::Database::CRUD_API::on_readModel(const QSqlTableModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AA::Database::CRUD_API::on_readId(const QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AA::Database::CRUD_API::on_readToCSV(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AA::Database::CRUD_API::on_readDatabaseName(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AA::Database::CRUD_API::on_readTables(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AA::Database::CRUD_API::on_readLayout(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AA::Database::CRUD_API::on_readUser(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AA::Database::CRUD_API::on_update(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AA::Database::CRUD_API::on_delete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
