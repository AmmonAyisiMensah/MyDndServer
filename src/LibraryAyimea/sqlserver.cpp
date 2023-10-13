#include "sqlserver.h"

namespace AA { namespace Database {

SqlServer::SqlServer(SQL_Connection *connection) :
    CRUD_Interface(connection)
{

}

bool SqlServer::CreateUser(const QString &username, const QString &password, const QStringList permissions)
{
    return false;
}

const QList<QStringList> SqlServer::ReadRecords(const QString &table, const QString &filter, const int &limit, const QString &order, const bool &desc)
{
    QList<QStringList> result;

    // Execute query
    if(!m_connection->execute(QString("SELECT TOP %1 * FROM %2 WHERE %3 ORDER BY %4 %5").arg(limit).arg(table).arg(filter).arg(order).arg(desc == true ? "DESC" : "ASC"))){
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

const QStringList SqlServer::ReadFirst(const QString &table, const QString &order)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT TOP 1 * FROM %1 ORDER BY %2 ASC").arg(table).arg(order))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

const QStringList SqlServer::ReadLast(const QString &table, const QString &order)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT TOP 1 * FROM %1 ORDER BY %2 DESC").arg(table).arg(order))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

const QStringList SqlServer::ReadFirst(const QString &table)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT TOP 1 * FROM %1 ORDER BY UpdatedAt ASC").arg(table))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse records
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

const QStringList SqlServer::ReadLast(const QString &table)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT TOP 1 * FROM %1 ORDER BY UpdatedAt DESC").arg(table))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read records, result will be empty";
       return result;
    }

    // Parse record
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

const QStringList SqlServer::ReadID(const QString &table, const QString &id)
{
    QStringList result;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 WHERE ID = %3").arg(table).arg(id))){
       qCritical()<<"AA::Database::MySQL::ReadRecords: Failed to read record, result will be empty";
       return result;
    }

    // Parse record
    m_result->first();
    for(int i=0; i<m_result->record().count(); i++) result << m_result->value(i).toString();

    // Done return result
    return result;
}

bool SqlServer::ReadToCSV(const QString &filePath, const QString &table, const QString &filter, const QString &order, const bool &desc)
{
    QFile file(filePath);
    QStringList recordData;
    int fields;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 WHERE %2 ORDER BY %3 %4").arg(table).arg(filter).arg(order).arg(desc == true ? "DESC" : "ASC"))){
       qCritical()<<"AA::Database::MySQL::ReadToCSV: Failed to read records";
       return false;
    }

    // Open CSV file
    if(!file.open(QFile::WriteOnly | QFile::Truncate)){
        qCritical()<<"AA::Database::MySQL::ReadToCSV: Failed to open file, active query set to finished";
        return false;
    }

    // Write collumn names to csv file
    fields = m_result->record().count();
    for(int i=0; i<fields; i++) recordData << m_result->record().fieldName(i);
    file.write(recordData.join(CSV_SEP).toLocal8Bit()+NEWL);

    //Wait for query to finish before handeling results
    //while(m_result->isActive()){}

    // Parse records to file
    while(m_result->next()) {
        recordData.clear();
        for(int i=0; i<fields; i++) recordData << m_result->record().value(i).toString();
        file.write(recordData.join(CSV_SEP).toLocal8Bit()+NEWL);
    }

    // Done return success
    file.close();
    return true;
}

bool SqlServer::ReadToCSV(const QString &filePath, const QString &table, const QString &filter, const int &limit, const QString &order, const bool &desc)
{
    QFile file(filePath);

    // Execute query
    if(!m_connection->execute(QString("SELECT TOP %1 * FROM %2 WHERE %3 ORDER BY %4 %5").arg(limit).arg(table).arg(filter).arg(order).arg(desc == true ? "DESC" : "ASC"))){
       qCritical()<<"AA::Database::MySQL::ReadToCSV: Failed to read records";
       return false;
    }

    // Open CSV file
    if(!file.open(QFile::WriteOnly | QFile::Truncate)){
        qCritical()<<"AA::Database::MySQL::ReadToCSV: Failed to open file, active query set to finished";
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

QString SqlServer::ReadLayout(const QString &table)
{
    return "result";
}

QStringList SqlServer::ReadUser(const QString &username)
{
    QStringList result;
    return result;
}

bool SqlServer::UpdateUserPassword(const QString &username, const QString &new_password)
{
    return false;
}

bool SqlServer::UpdateUserPermissions(const QString &username, const QStringList permissions)
{
    return false;
}

bool SqlServer::DeleteUser(const QString &username)
{
    return false;
}

bool SqlServer::DeleteUserPermissions(const QString &username, const QStringList permissions)
{
    return false;
}



}}
