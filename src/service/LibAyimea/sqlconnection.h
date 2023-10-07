#ifndef SQLCONNECTION_H
#define SQLCONNECTION_H

#include "Library_Ayimea_global.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QFuture>
#include <QtConcurrent>
#include <QDebug>

#define DRIVER_QPSQL "QPSQL"
#define DRIVER_QMYSQL "QMYSQL"
#define DRIVER_QOCI "QOCI"
#define DRIVER_QODBC "QODBC"
#define DRIVER_QDB2 "QDB2"
#define DRIVER_QTDS "QTDS"
#define DRIVER_QSQLITE "QSQLITE"
#define DRIVER_QIBASE "QIBASE"
#define QUERY_TIMEOUT_SEC 60

namespace AA { namespace Database {

/**
 * @brief The Supported database drivers
 */
enum Driver {
    MySql,
    ODBC
};

/**
 * @brief The SQLConnection class provides an interface for accessing a database through a connection.
 * The connection provides access to the database via one of the supported database drivers
 */
class LIBRARY_AYIMEA_EXPORT SQLConnection
{
public:
    /**
     * @brief Default constructor
     * @param driver the database driver which is used for this connection
     * @param database the name the database
     * @param user sql username
     * @param password sql password
     * @param host the name or IP of the host
     * @param port the TCP port number which is used for this connection
     */
    SQLConnection(QString driver, QString database, QString user, QString password, QString host, int port = 0);

public slots:
    /**
     * @brief Open the database connection
     */
    void on_connect();

    /**
     * @brief Close the database connection
     */
    void on_disconnect();

    /**
     * @brief Executes a SQL statement on the database and wait for result
     * @param query The SQL statement
     */
    void on_query(const QString query);

    /**
     * @brief Signal the latest error
     */
    void on_error();

signals:
    /**
     * @brief Signals the database active connection status
     * @param[out] succes
     */
    void connected(const bool &succes);

    /**
     * @brief Signals the result from a executed query on the database
     * @param[out] result returned query data
     */
    void query_result(const QSqlResult *result);

    /**
     * @brief Signals the text of the error as reported by the driver.
     * This may contain database-specific descriptions.
     * It may also be empty.
     * @param[out] text returned driver text
     */
    void error_driver(const QString &text);

    /**
     * @brief Signals the text of the error as reported by the database.
     * This may contain database-specific descriptions; it may be empty.
     * @param[out] text returned database text
     */
    void error_database(const QString &text);

    /**
     * @brief Signals the database-specific error code, or an empty string if it cannot be determined.
     * @param[out] text returned native error code text
     */
    void error_code(const QString &text);

private:
    const QString TAG = "AA::Database::SQLConnection::";
    const QString c_driver;
    const QString c_database_name;
    const QString c_user;
    const QString c_password;
    const QString c_host;
    const int c_port;
    QSqlDatabase m_database;
    QSqlQuery m_query;
    QFuture<void> query;
    int query_duration;
    void execute_query(const QString query);

};

}}

#endif // SQLCONNECTION_H
