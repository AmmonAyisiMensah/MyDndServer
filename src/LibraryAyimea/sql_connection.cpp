#include "sql_connection.h"

namespace AA { namespace Database {

Driver getDriver(QString driver){
    if(driver.toLower() == "mysql") return MySql;
    if(driver.toLower() == "mssql") return MSSQL;
    return Invalid;
}

SQL_Connection::SQL_Connection(const QString settingFile) :
    c_settings(settingFile, QSettings::IniFormat),
    c_driver(getDriver(c_settings.value("ConnectionInfo/Driver").toString())),
    c_database_name(c_settings.value("ConnectionInfo/DatabaseName").toString()),
    c_user(c_settings.value("ConnectionInfo/Username").toString()),
    c_password(c_settings.value("ConnectionInfo/Password").toString()),
    c_host(c_settings.value("ConnectionInfo/Host").toString()),
    c_port(c_settings.value("ConnectionInfo/Port").toInt()),
    m_success(false),
    m_ready(true)
{
    initDatabase();
}

SQL_Connection::SQL_Connection(Driver driver, QString database, QString user, QString password, QString host, int port) :
    c_driver(driver),
    c_database_name(database),
    c_user(user),
    c_password(password),
    c_host(host),
    c_port(port),
    m_success(false),
    m_ready(true)
{
    initDatabase();
}

SQL_Connection::SQL_Connection(QString driver, QString database, QString user, QString password, QString host, int port) :
    c_driver(getDriver(driver)),
    c_database_name(database),
    c_user(user),
    c_password(password),
    c_host(host),
    c_port(port),
    m_success(false),
    m_ready(true)
{
    initDatabase();
}

void SQL_Connection::on_connect()
{
    // Open the connection to the database
    if(!m_database.open(c_user, c_password)){
        qCritical()<<TAG+"on_connect: The database connection failed.";
        on_error();
        emit connected(false);
        return;
    }
    qDebug()<<TAG+"on_connect: Database connection successfull";
    emit connected(true);
}

void SQL_Connection::on_disconnect()
{
    // Close the connection to the database
    m_database.close();
    qDebug()<<TAG+"on_disconnect: Database connection closed";
    emit connected(false);
}

void SQL_Connection::on_error()
{
    // Signal the last know error
    emit error_driver(m_database.lastError().driverText());
    emit error_database(m_database.lastError().databaseText());
    emit error_code(m_database.lastError().nativeErrorCode());

    qDebug()<<TAG+"Error:"<<"\n\tDriver:"<<m_database.lastError().driverText()<<"\n\tDatabase:"<<m_database.lastError().databaseText()<<"\n\tCode:"<<m_database.lastError().nativeErrorCode();
}

QString SQL_Connection::databaseName() const
{
    return c_database_name;
}

bool SQL_Connection::success() const
{
    return m_success;
}

QString SQL_Connection::caption() const
{
    return m_caption;
}

QString SQL_Connection::driverName() const
{
    if(driver() == MySql) return "QMYSQL";
    if(driver() == MSSQL) return "QODBC";
    return "INVALID";
}

void SQL_Connection::initDatabase()
{
    switch (c_driver) {
    case AA::Database::Invalid:
        break;
    case AA::Database::MySql:
        m_database = QSqlDatabase::addDatabase(driverName(), c_database_name);
        m_database.setDatabaseName(c_database_name);
        m_database.setUserName(c_user);
        m_database.setPassword(c_password);
        m_database.setHostName(c_host);
        if(c_port > 0) m_database.setPort(c_port);
        m_caption = QString("MySQL: %1@%2").arg(c_user).arg(c_database_name);
        break;
    case AA::Database::MSSQL:
        m_database = QSqlDatabase::addDatabase(driverName(), c_database_name);
        m_database.setDatabaseName("DRIVER={SQL Server};Server="+c_host+QString(c_port > 0 ? ",%1" : "").arg(c_port)+";Database="+c_database_name+";Uid="+c_user+";Pwd="+c_password+";");
        m_caption = QString("SQL Server: %1@%2").arg(c_user).arg(c_database_name);
        break;
    }

    m_query = new QSqlQuery(m_database);
    on_connect();
    m_success = m_database.isOpen();
    on_disconnect();
}

Driver SQL_Connection::driver() const
{
    return c_driver;
}

QSqlDatabase SQL_Connection::database() const
{
    return m_database;
}

bool SQL_Connection::isReady() const
{
    return m_ready;
}

bool SQL_Connection::execute(const QString query)
{
    m_ready = false;
    // Check for open connection
    if(!m_database.isOpen()){
        qCritical()<<TAG+"execute_query: The database connection is closed my brotha, open the way my brotha.";
        m_ready = true;
        return false;
    }

    // Execute the Query
    QElapsedTimer start_time;
    start_time.start();
    qDebug()<<TAG+"execute_query: "<<query;
    emit query_status(QString("Running query on %1").arg(c_database_name));
    if(!m_query->exec(query)){
        on_error();
        m_ready = true;
        return false;
    }
    emit query_status(QString("Finished query on %1, time elapsed: %2 ms").arg(c_database_name).arg(start_time.elapsed()));

    // Signal the results if no timeout has occured
    emit query_result(m_query);
    qDebug()<<QString(TAG+"Finished query on %1, time elapsed: %2 ms").arg(c_database_name).arg(start_time.elapsed());
    m_ready = true;
    return true;
}

}}
