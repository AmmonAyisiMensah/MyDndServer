#ifndef CRUD_INTERFACE_H
#define CRUD_INTERFACE_H

#include <Library_Ayimea_global.h>
#include <sql_connection.h>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QFile>

#define SQL_SEP ","
#define CSV_SEP ";"
#define NEWL "\n"
#define NOFILTER "true"

namespace AA { namespace Database {

/**
 * @brief Interface with the basic abstract functionality for database operations.
 * The Interface functionality is used by the CRUD API where child objects will be created acording to the driver.
 * @see CRUD_API
 * @see MySQL
 * @see MSSQL
 */
class CRUD_Interface : public QObject
{
    Q_OBJECT
public:
    const QString TAG = "AA::Database::CRUD_Interface::";

    /**
     * @brief Default constructor
     * @param connection Intance pointer of the SQL database connection
     */
    CRUD_Interface(SQL_Connection *connection);

    /**
     * @brief Create a new record for a database table
     * @param table Name of the databse table
     * @param fields Names of the table columns that will hold values
     * @param values The actual values for the table columns
     * @return True when operation was succesfull
     */
    virtual bool CreateRecrord(const QString &table, const QStringList fields, const QStringList values);

    /**
     * @brief Create a new table in the databse
     * @param table Name of the database table
     * @param table_config configuration of the table columns
     * @return True when operation was succesfull
     */
    virtual bool CreateTable(const QString &table, QStringList table_config);

    /**
     * @brief Create a new database user
     * @param username The login name of the user
     * @param password The password of the user
     * @param permissions The user permissions
     * @return True when operation was succesfull
     */
    virtual bool CreateUser(const QString &username, const QString &password, const QStringList permissions) = 0;

    /**
     * @brief Read record(s) from a database table
     * @param table Name of the databse table
     * @param fields The columns of the database table
     * @param filter Optional, the where conditions statement
     * @return List of records and their values
     */
    virtual const QList<QStringList> ReadRecords(const QString &table, const QString &fields, const QString &filter = "");

    /**
     * @brief Read record(s) from a database table
     * @param table Name of the databse table
     * @param fields The columns of the database table
     * @param filter The where conditions statement
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return List of records and their values
     */
    virtual const QList<QStringList> ReadRecords(const QString &table, const QString &fields, const QString &filter, const QString &order, const bool &desc);

    /**
     * @brief Read record(s) from a database table
     * @param table Name of the databse table
     * @param filter The where conditions statement
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return List of records and their values
     */
    virtual const QList<QStringList> ReadRecords(const QString &table, const QString &filter, const QString &order, const bool &desc);

    /**
     * @brief Read limited record(s) from a database table
     * @param table Name of the databse table
     * @param filter The where conditions statement
     * @param limit The max results returned
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return List of records and their values
     */
    virtual const QList<QStringList> ReadRecords(const QString &table, const QString &filter, const int &limit, const QString &order, const bool &desc) = 0;

    /**
     * @brief Read the last record from a database table
     * @param table Name of the databse table
     * @param order Column name to sort on
     * @return List of records and their values
     */
    virtual const QStringList ReadFirst(const QString &table, const QString &order) = 0;


    /**
     * @brief Read the last record from a database table
     * @param table Name of the databse table
     * @param order Column name to sort on
     * @return List of records and their values
     */
    virtual const QStringList ReadLast(const QString &table, const QString &order) = 0;

    /**
     * @brief Read the last record from a database table
     * @param table Name of the databse table
     * @return List of records and their values
     */
    virtual const QStringList ReadFirst(const QString &table) = 0;


    /**
     * @brief Read the last record from a database table
     * @param table Name of the databse table
     * @return List of records and their values
     */
    virtual const QStringList ReadLast(const QString &table) = 0;

    /**
     * @brief Read record(s) from a database table and return table view data model
     * @param table Name of the databse table
     * @param filter The where conditions statement
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return Table view data model of the executed query
     */
    virtual const QSqlTableModel *ReadModel(const QString &table, const QString &filter, const QString &order, const bool desc);

    /**
     * @brief Read record from database table by ID
     * @param table Name of the databse table
     * @param id The record ID
     * @return List of records and their values
     */
    virtual const QStringList ReadID(const QString &table, const QString &id) = 0;

    /**
     * @brief Read records from databse table and store them into a CSV
     * @param filePath Location of the CSV file where the results will be stored in
     * @param table Name of the databse table, const bool desc
     * @param filter The where conditions statement
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return True when operation was succesfull
     */
    virtual bool ReadToCSV(const QString &filePath, const QString &table, const QString &filter, const QString &order, const bool &desc) = 0;

    /**
     * @brief Read limited records from databse table and store them into a CSV
     * @param filePath Location of the CSV file where the results will be stored in
     * @param table Name of the databse table, const bool desc
     * @param filter The where conditions statement
     * @param limit The max results returned
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return True when operation was succesfull
     */
    virtual bool ReadToCSV(const QString &filePath, const QString &table, const QString &filter, const int &limit, const QString &order, const bool &desc) = 0;

    /**
     * @brief Retrieve the database name
     * @return String of the database name
     */
    virtual const QString ReadDatabaseName();

    /**
     * @brief Retrieve all the database table names
     * @return List of the database tables
     */
    virtual const QStringList ReadTables();

    /**
     * @brief Retrieve a database table layout
     * @param table Name of the databse table
     * @return String of the SQL create statement
     */
    virtual QString ReadLayout(const QString &table) = 0;

    /**
     * @brief Retrieve permissions of an user
     * @param username The login name of the user
     * @return List of the active user permissions
     */
    virtual QStringList ReadUser(const QString &username) = 0;

    /**
     * @brief Update record(s) from a database table
     * @param table Name of the databse table
     * @param fields Names of the table columns that will hold values
     * @param filter The where conditions statement
     * @param values The actual values for the table columns
     * @return True when operation was succesfull
     */
    virtual bool UpdateRecord(const QString &table, const QStringList fields, const QString &filter, const QStringList values);

    /**
     * @brief Update record from database table by ID
     * @param table Name of the databse table
     * @param fields Names of the table columns that will hold values
     * @param id The record ID
     * @param values The actual values for the table columns
     * @return True when operation was succesfull
     */
    virtual bool UpdateID(const QString &table, const QStringList fields, const int &id, const QStringList values);

    /**
     * @brief Change the password of an user
     * @param username The login name of the user
     * @param new_password The new password for the user
     * @return True when operation was succesfull
     */
    virtual bool UpdateUserPassword(const QString &username, const QString &new_password) = 0;

    /**
     * @brief Update database permissions of a user
     * @param username The login name of the user
     * @param permissions The new user permissions
     * @return True when operation was succesfull
     */
    virtual bool UpdateUserPermissions(const QString &username, const QStringList permissions) = 0;

    /**
     * @brief Delete a record from a database table
     * @param table Name of the databse table
     * @param filter The where conditions statement
     * @return True when operation was succesfull
     */
    virtual bool DeleteRecords(const QString &table, const QString &filter);

    /**
     * @brief Delete a record from a database table by ID
     * @param table Name of the databse table
     * @param id The record ID
     * @return True when operation was succesfull
     */
    virtual bool DeleteID(const QString &table, const int &id);

    /**
     * @brief Delete a table from the database
     * @param table Name of the databse table
     * @return True when operation was succesfull
     */
    virtual bool DeleteTable(const QString &table);

    /**
     * @brief Drop an create a empty table
     * @param table Name of the database table
     * @return True when operation was succesfull
     */
    virtual bool DeleteTableData(const QString &table);

    /**
     * @brief Delete a user from the database
     * @param username The login name of the user
     * @return True when operation was succesfull
     */
    virtual bool DeleteUser(const QString &username) = 0;

    /**
     * @brief Delete database permissions from a user
     * @param username The login name of the user
     * @param permissions The to be deleted user permissions
     * @return True when operation was succesfull
     */
    virtual bool DeleteUserPermissions(const QString &username, const QStringList permissions) = 0;


public slots:
    /**
     * @brief Open the database connection
     */
    void open() { m_connection->on_connect(); };

    /**
     * @brief Close the database connection
     */
    void close() { m_connection->on_disconnect(); };


protected:
    /**
     * @brief Instance pointer of the databsse connection
     */
    SQL_Connection *m_connection;

    /**
     * @brief The connected state of the sql connection
     * @see AA::Database::SQL_Connnection
     */
    bool connected;

    /**
     * @brief The result of last executed query
     */
    QSqlQuery *m_result;

    /**
     * @brief Model for database table to preform read & write operation
     */
    QSqlTableModel *m_model;

private slots:
    void on_query_result(QSqlQuery *result);
};

}}

#endif // CRUD_INTERFACE_H
