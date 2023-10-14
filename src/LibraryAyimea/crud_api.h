#ifndef CRUD_API_H
#define CRUD_API_H

#include <Library_Ayimea_global.h>
#include "mysql.h"
#include "sqlserver.h"

namespace AA {

typedef QList<QStringList> StringMatrix;

namespace Database {

/**
 * @brief Create, Read, Update, Delete, commands used by the functionality inside of the execute command
 * @see SQL::execute
 */
enum Command {
    CreateRecrord,
    CreateTable,
    CreateUser,
    ReadRecords,
    ReadModel,
    ReadID,
    ReadToCSV,
    ReadDatabaseName,
    ReadTables,
    ReadLayout,
    ReadUser,
    UpdateRecord,
    UpdateID,
    UpdateUserPassword,
    UpdateUserPermissions,
    DeleteRecord,
    DeleteID,
    DeleteTable,
    DeleteTableData,
    DeleteUser,
    DeleteUserPermissions
};

/**
 * @brief The CRUD_API class provides basic functionality for an database connection
 */
class CRUD_API : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief Default constructor
     * @param connection The database connection information
     * @see SQLConnection
     */
    CRUD_API(SQL_Connection *connection);

    /**
     * @brief Get the interface to execute database functions manualy
     * @return Crud interface instance pointer
     */
    CRUD_Interface *api();

public slots:
    /**
     * @brief Open the database connection
     */
    void open() { m_interface->open(); };

    /**
     * @brief Close the database connection
     */
    void close() { m_interface->close(); };

    /**
     * @brief Execute a CRUD command on the database
     * @param command A known CRUD commando
     * @param parameters The function parameters of CRUD command
     * @see AA::Database::CRUD_Interface
     */
    void execute(Command command, QStringList parameters);

    /**
     * @brief Execute plain SQL syntax
     * @param sql tjhe sql query to be executed
     * @return true if query has been succesfull
     */
    bool query(const QString &sql);

signals:
    /**
     * @brief Signals the create command succes
     * @param result true when create query was succesfull
     */
    void on_create(bool result);

    /**
     * @brief Signals the read command results
     * @param result records result data, may be empty if query failed
     */
    void on_readRecords(const QList<QStringList> result);

    /**
     * @brief Signals the read command results
     * @param result model data of the query result, may be empty if query failed
     */
    void on_readModel(const QSqlTableModel* result);

    /**
     * @brief Signals the read command results
     * @param result String list of record data, may be empty if query failed
     */
    void on_readId(const QStringList result);

    /**
     * @brief Signals the read to csv command result
     * @param result true is csv has been succesfully written
     */
    void on_readToCSV(bool result);

    /**
     * @brief Signals the database name command result
     * @param result String containing the database caption
     */
    void on_readDatabaseName(const QString &result);

    /**
     * @brief Signals the read tables command result
     * @param result String list of table names, may be empty if query failed
     */
    void on_readTables(const QStringList &result);

    /**
     * @brief Signals the read layout command results
     * @param result String containing the database tables, may be empty if query failed
     */
    void on_readLayout(const QString &result);

    /**
     * @brief Signals the read user command result
     * @param result String list of user permissions, may be empty if query failed
     */
    void on_readUser(const QStringList &result);

    /**
     * @brief Signals the update command succes
     * @param result true when update query was succesfull
     */
    void on_update(bool result);

    /**
     * @brief Signals the delete command succes
     * @param result true when delete query was succesfull
     */
    void on_delete(bool result);

private:
    SQL_Connection *m_connection;
    CRUD_Interface *m_interface;

};

}}

#endif // CRUD_API_H
