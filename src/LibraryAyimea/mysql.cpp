#include "mysql.h"

namespace AA { namespace Database {

MySQL::MySQL(SQL_Connection *connection) :
    CRUD_Interface(connection)
{

}

bool MySQL::CreateUser(const QString &username, const QString &password, const QStringList permissions)
{
    // Create the user
    if(!m_connection->execute(QString("CREATE USER '%1'@'localhost' IDENTIFIED BY '%2';").arg(username).arg(password))){
       qCritical()<<"AA::Database::MySQL::CreateUser: Failed to create new user";
       return false;
    }
    qDebug()<<QString("AA::Database::MySQL::CreateUser: Created %1, proceding to grant permissions...").arg(username);

    // Grant permissions
    if(!m_connection->execute(QString("GRANT %1 ON %2.* TO '%3' WITH GRANT OPTION;").arg(permissions.join(SQL_SEP)).arg(m_connection->databaseName()).arg(username))){
       qCritical()<<"AA::Database::MySQL::CreateUser: Failed to grant permissions to "<<username;
       return false;
    }
    qDebug()<<QString("AA::Database::MySQL::CreateUser: Granting permissions to %1 was succesfull").arg(username);

    // Done return success
    return true;
}

const QList<QStringList> MySQL::ReadRecords(const QString &table, const QString &filter, const int &limit, const QString &order, const bool &desc)
{
    QList<QStringList> result;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 WHERE %2 ORDER BY %3 %4 LIMIT %5").arg(table).arg(filter).arg(order).arg(desc == true ? "DESC" : "ASC").arg(limit))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    while (m_result->next()) {
        QStringList record;
        for(int i=0; i<m_result->record().count(); i++) record << m_result->value(i).toString();
        result<<record;
    }

    // Done return result
    return result;
}

const QStringList MySQL::ReadFirst(const QString &table, const QString &order)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 ORDER BY %2 ASC LIMIT 1").arg(table).arg(order))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

const QStringList MySQL::ReadLast(const QString &table, const QString &order)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 ORDER BY %2 DESC LIMIT 1").arg(table).arg(order))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

const QStringList MySQL::ReadFirst(const QString &table)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 ORDER BY UpdatedAt DESC LIMIT 1").arg(table))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

const QStringList MySQL::ReadLast(const QString &table)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 ORDER BY UpdatedAt DESC LIMIT 1").arg(table))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

const QStringList MySQL::ReadID(const QString &table, const QString &id)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 WHERE ID = %2").arg(table).arg(id))){
       qCritical()<<"AA::Database::MySQL::ReadID: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    m_result->next();
    for(int i=0; i<m_result->record().count(); i++) result <<m_result->value(i).toString();

    // Done return result
    return result;
}

bool MySQL::ReadToCSV(const QString &filePath, const QString &table, const QString &filter, const QString &order, const bool &desc)
{
    QFile file(filePath);

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 WHERE %2 ORDER BY %3 %4").arg(table).arg(filter).arg(order).arg(desc == true ? "DESC" : "ASC"))){
       qCritical()<<"AA::Database::MySQL::ReadToCSV: Failed to read records";
       return false;
    }

    // Open CSV file
    if(!file.open(QFile::WriteOnly | QFile::Truncate)){
        qCritical()<<"AA::Database::MySQL::ReadToCSV: Failed to open file, active query set to finished";
        m_result->finish();
        return false;
    }

    // Parse records to file
    while (m_result->next()) {
        QStringList record;
        for(int i=0; i<m_result->record().count(); i++) record << m_result->record().value(i).toString();
        file.write(record.join(CSV_SEP).toLocal8Bit()+NEWL);
    }

    // Done return success
    file.close();
    return true;
}

bool MySQL::ReadToCSV(const QString &filePath, const QString &table, const QString &filter, const int &limit, const QString &order, const bool &desc)
{
    QFile file(filePath);

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 WHERE %2 ORDER BY %3 %4 LIMIT %5").arg(table).arg(filter).arg(order).arg(desc == true ? "DESC" : "ASC").arg(limit))){
       qCritical()<<"AA::Database::MySQL::ReadToCSV: Failed to read records";
       return false;
    }

    // Open CSV file
    if(!file.open(QFile::WriteOnly | QFile::Truncate)){
        qCritical()<<"AA::Database::MySQL::ReadToCSV: Failed to open file, active query set to finished";
        m_result->finish();
        return false;
    }

    // Parse records to file
    while (m_result->next()) {
        QStringList record;
        for(int i=0; i<m_result->record().count(); i++) record << m_result->record().value(i).toString();
        file.write(record.join(CSV_SEP).toLocal8Bit()+NEWL);
    }

    // Done return success
    file.close();
    return true;
}

QString MySQL::ReadLayout(const QString &table)
{
    QString result;

    // Execute query
    if(!m_connection->execute(QString("SHOW CREATE TABLE %1.%2;").arg(ReadDatabaseName()).arg(table))){
       qCritical()<<"AA::Database::MySQL::ReadLayout: Failed to show table creation layout, result will be empty";
       return "Error";
    }

    // Done return result
    m_result->next();
    result = m_result->record().value(1).toString();
    return result;
}

QStringList MySQL::ReadUser(const QString &username)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SHOW GRANTS FOR %1;").arg(username))){
       qCritical()<<"AA::Database::MySQL::ReadUser: Failed to show user permissions, result will be empty";
       return result;
    }

    // Parse records
    while (m_result->next()) result<<m_result->record().value(0).toString();

    // Done return result
    return result;
}

bool MySQL::UpdateUserPassword(const QString &username, const QString &new_password)
{
    // Execute query
    if(!m_connection->execute(QString("set password for %1 = PASSWORD('%2');").arg(username).arg(new_password))){
       qCritical()<<"AA::Database::MySQL::UpdateUserPassword: Failed to update user password";
       return false;
    }

    // Done return success
    m_result->finish();
    return true;
}

bool MySQL::UpdateUserPermissions(const QString &username, const QStringList permissions)
{
    // Grant permissions
    if(!m_connection->execute(QString("GRANT %1 ON %2 TO '%3' WITH GRANT OPTION;").arg(permissions.join(SQL_SEP).arg(m_connection->database().databaseName()).arg(username)))){
       qCritical()<<"AA::Database::MySQL::CreateUser: Failed to grant permissions to "<<username;
       return false;
    }
    qDebug()<<QString("AA::Database::MySQL::CreateUser: Granting permissions to %1 was succesfull").arg(username);

    // Done return success
    return true;
}

bool MySQL::DeleteUser(const QString &username)
{
    // Execute query
    if(!m_connection->execute(QString("DROP USER %1;").arg(username))){
       qCritical()<<"AA::Database::MySQL::DeleteUser: Failed to delete user";
       return false;
    }

    // Done return success
    return true;
}

bool MySQL::DeleteUserPermissions(const QString &username, const QStringList permissions)
{
    // Execute query
    if(!m_connection->execute(QString("REVOKE %1 ON %2 FROM %3;").arg(permissions.join(SQL_SEP).arg(m_connection->database().databaseName()).arg(username)))){
       qCritical()<<"AA::Database::MySQL::DeleteUserPermissions: Failed to delete user permissions";
       return false;
    }

    // Done return success
    return true;
}

}}
