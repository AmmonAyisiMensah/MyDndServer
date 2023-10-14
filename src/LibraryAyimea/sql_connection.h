#ifndef SQL_CONNECTION_H
#define SQL_CONNECTION_H

#include "Library_Ayimea_global.h"
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlResult>
#include <QElapsedTimer>
#include <QDebug>
#include <QDir>

#define SQL_SETTINGS_FILE "DatabaseInfo.ini"
#define DRIVER_QPSQL "QPSQL"
#define DRIVER_QMYSQL "QMYSQL"
#define DRIVER_QOCI "QOCI"
#define DRIVER_QODBC "QODBC"
#define DRIVER_QDB2 "QDB2"
#define DRIVER_QTDS "QTDS"
#define DRIVER_QSQLITE "QSQLITE"
#define DRIVER_QIBASE "QIBASE"
#define QUERY_TIMEOUT 60000

namespace AA { namespace Database {

/**
 * @brief The Supported database drivers
 */
enum Driver {
    Invalid,
    MySql,
    MSSQL
};

/**
 * @brief Default filepath for SQL connection info ini file
 */
const static QString DEFAULT_SETTINGS_FILEPATH = QDir::currentPath()+"/"+SQL_SETTINGS_FILE;

/**
 * @brief The SQLConnection class provides an interface for accessing a database through a connection.
 * The connection provides access to the database via one of the supported database drivers
 */
class SQL_Connection : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief Default constructor, Parse database information from INI file
     * @param settingFile The file path of the database info ini
     */
    SQL_Connection(const QString settingFile = DEFAULT_SETTINGS_FILEPATH);

    /**
     * @brief Construct from driver enum and string values
     * @param driver the database driver which is used for this connection
     * @param database the name the database
     * @param user sql username
     * @param password sql password
     * @param host the name or IP of the host
     * @param port the TCP port number which is used for this connection
     */
    SQL_Connection(Driver driver, QString database, QString user, QString password, QString host, int port = 0);

    /**
     * @brief Construct from string values
     * @param driver the database driver which is used for this connection
     * @param database the name the database
     * @param user sql username
     * @param password sql password
     * @param host the name or IP of the host
     * @param port the TCP port number which is used for this connection
     */
    SQL_Connection(QString driver, QString database, QString user, QString password, QString host, int port = 0);

    /**
     * @brief Retrive database instance
     * @return database instance pointer
     */
    QSqlDatabase database() const;

    /**
     * @brief Executes a SQL statement on the database and wait for result
     * @param query The SQL statement
     * @return true if query has been succesfull
     */
    bool execute(const QString query);

    /**
     * @brief Check if query is finished
     * @return True if no query is beeing executed
     */
    bool isReady() const;

    /**
     * @brief Retrive the connection driver type
     * @return The set member of the Driver enum
     */
    Driver driver() const;

    /**
     * @brief Check is connection is valid
     * @return True if database connection can be made
     */
    bool success() const;

    /**
     * @brief Retrieve database caption
     * @return The database caption string
     */
    QString caption() const;

    QString databaseName() const;

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
     * @brief query_status
     * @param[out] status
     */
    void query_status(const QString &status);

    /**
     * @brief Signals the result from a executed query on the database
     * @param[out] result returned query data
     */
    void query_result(QSqlQuery *result);

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
    const QSettings c_settings;
    const Driver c_driver;
    const QString c_database_name;
    const QString c_user;
    const QString c_password;
    const QString c_host;
    const int c_port;
    QSqlDatabase m_database;
    QSqlQuery *m_query;
    bool m_success;
    bool m_ready;
    QString m_caption;

private:
    QString driverName() const;

    void initDatabase();

};

}}

#endif // SQL_CONNECTION_H
