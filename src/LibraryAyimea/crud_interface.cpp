#include "crud_interface.h"

namespace AA { namespace Database {


CRUD_Interface::CRUD_Interface(SQL_Connection *connection) :
    m_connection(connection),
    m_model(new QSqlTableModel(this, connection->database()))
{
    connect(m_connection, &SQL_Connection::query_result, this, &CRUD_Interface::on_query_result);
}

bool CRUD_Interface::CreateRecrord(const QString &table, const QStringList fields, const QStringList values)
{
    // Execute query
    if(!m_connection->execute(QString("INSERT INTO %1 (%2) VALUES (%3); ").arg(table).arg(fields.join(SQL_SEP)).arg(values.join(SQL_SEP)))){
       qCritical()<<TAG+"CreateRecrord: Failed to create record";
       return false;
    }

    // Done return success
    return true;
}

bool CRUD_Interface::CreateTable(const QString &table, QStringList table_config)
{
    // Execute query
    if(!m_connection->execute(QString("CREATE TABLE %1 (%2);").arg(table).arg(table_config.join(SQL_SEP)))){
       qCritical()<<TAG+"CreateTable: Failed to create table";
       return false;
    }

    // Done return success
    return true;
}

const QList<QStringList> CRUD_Interface::ReadRecords(const QString &table, const QString &fields, const QString &filter)
{
    QList<QStringList> result;

    // Execute query
    if(!m_connection->execute(QString("SELECT %1 FROM %2 %3").arg(fields).arg(table).arg(filter == "" ? "" : QString("WHERE %1").arg(filter)))){
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

const QList<QStringList> CRUD_Interface::ReadRecords(const QString &table, const QString &fields, const QString &filter, const QString &order, const bool &desc)
{
    QList<QStringList> result;

    // Execute query
    if(!m_connection->execute(QString("SELECT %1 FROM %2 %3 ORDER BY %4 %5").arg(fields).arg(table).arg(filter == "" ? "" : QString("WHERE %1").arg(filter)).arg(order).arg(desc == true ? "DESC" : "ASC"))){
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

const QList<QStringList> CRUD_Interface::ReadRecords(const QString &table, const QString &filter, const QString &order, const bool &desc)
{
    QList<QStringList> result;

    // Execute query
    if(!m_connection->execute(QString("SELECT * FROM %1 %2 ORDER BY %3 %4").arg(table).arg(filter == "" ? "" : QString("WHERE %1").arg(filter)).arg(order).arg(desc == true ? "DESC" : "ASC"))){
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

const QSqlTableModel *CRUD_Interface::ReadModel(const QString &table, const QString &filter, const QString &order, const bool desc)
{
    m_model->setTable(table);
    m_model->setFilter(filter);
    m_model->setSort(m_model->fieldIndex(order), desc == true ? Qt::DescendingOrder : Qt::AscendingOrder);

    // Execute Query
    if(!m_model->select()){
        qCritical()<<TAG+"ReadModel: Failed to select model data, result will be empty..";
    }

    // Done return result
    return m_model;
}

const QString CRUD_Interface::ReadDatabaseName()
{
    return m_connection->database().databaseName();
}

const QStringList CRUD_Interface::ReadTables()
{
    return m_connection->database().tables();
}

bool CRUD_Interface::UpdateRecord(const QString &table, const QStringList fields, const QString &filter, const QStringList values)
{
    // Fields and values difference guard
    if(fields.size() != values.size()){
        qCritical()<<TAG+"UpdateRecord: difference between fields and values provided.";
        return false;
    }

    // Parse data to update set statement
    QString set;
    for(int i=0; i< fields.size(); i++) set.append(QString("%1%2 = %3").arg(i == 0 ? "" : ", ").arg(fields[i]).arg(values[i]));

    // Execute query
    if(!m_connection->execute(QString("UPDATE %1 SET %2 WHERE %3;").arg(table).arg(set).arg(filter))){
       qCritical()<<TAG+"UpdateRecord: Failed to update record";
       return false;
    }

    // Done return success
    return true;
}

bool CRUD_Interface::UpdateID(const QString &table, const QStringList fields, const int &id, const QStringList values)
{
    // Fields and values difference guard
    if(fields.size() != values.size()){
        qCritical()<<TAG+"UpdateRecord: difference between fields and values provided.";
        return false;
    }

    // Parse data to update set statement
    QString set;
    for(int i=0; i< fields.size(); i++) set.append(QString("%1%2 = %3").arg(i == 0 ? "" : ", ").arg(fields[i]).arg(values[i]));

    // Execute query
    if(!m_connection->execute(QString("UPDATE %1 SET %2 WHERE ID = %3;").arg(table).arg(set).arg(id))){
       qCritical()<<TAG+"UpdateID: Failed to update record";
       return false;
    }

    // Done return success
    return true;
}

bool CRUD_Interface::DeleteRecords(const QString &table, const QString &filter)
{
    // Execute query
    if(!m_connection->execute(QString("DELETE FROM %1 WHERE %2;").arg(table).arg(filter))){
       qCritical()<<TAG+"DeleteRecord: Failed to delete record";
       return false;
    }

    // Done return success
    m_result->finish();
    return true;
}

bool CRUD_Interface::DeleteID(const QString &table, const int &id)
{
    // Execute query
    if(!m_connection->execute(QString("DELETE FROM %1 WHERE ID = %2;").arg(table).arg(id))){
       qCritical()<<TAG+"DeleteID: Failed to delete record";
       return false;
    }

    // Done return success
    return true;
}

bool CRUD_Interface::DeleteTable(const QString &table)
{
    // Execute query
    if(!m_connection->execute(QString("DROP TABLE %1;").arg(table))){
       qCritical()<<TAG+"DeleteTable: Failed to delete table";
       return false;
    }

    // Done return success
    return true;
}

bool CRUD_Interface::DeleteTableData(const QString &table)
{
    // Execute query
    if(!m_connection->execute(QString("TRUNCATE TABLE %1;").arg(table))){
       qCritical()<<TAG+"DeleteTableData: Failed to delete table data";
       return false;
    }

    // Done return success
    return true;
}

void CRUD_Interface::on_query_result(QSqlQuery *result)
{
    qDebug()<<TAG+"on_query_result: SQL Query succesfull and result received";
    this->m_result = result;
}

}}
