#include "crud_api.h"

namespace AA { namespace Database {

CRUD_API::CRUD_API(SQL_Connection *connection) :
    m_connection(connection)
{
    switch (connection->driver()) {
    case AA::Database::Invalid: break;
    case MySql:
        m_interface = new MySQL(connection);
        break;
    case MSSQL:
        m_interface = new SqlServer(connection);
        break;
    }
}

CRUD_Interface *CRUD_API::api()
{
    return m_interface;
}

void CRUD_API::execute(Command command, QStringList params)
{
    switch (command) {
    case CreateRecrord:
        emit on_create(m_interface->CreateRecrord(params[0], params[1].split(','), params[2].split(',')));
        break;
    case CreateTable:
        emit on_create(m_interface->CreateTable(params[0], params[1].split(',')));
        break;
    case CreateUser:
        emit on_create(m_interface->CreateUser(params[0], params[1], params[2].split(',')));
        break;
    case ReadRecords:
        emit on_readRecords(m_interface->ReadRecords(params[0], params[1], params[2].toInt(), params[3], params[4].toLower() == "true"));
        break;
    case ReadModel:
        emit on_readModel(m_interface->ReadModel(params[0], params[1], params[2], params[3].toLower() == "true"));
        break;
    case ReadID:
        emit on_readId(m_interface->ReadID(params[0], params[1]));
        break;
    case ReadToCSV:
        emit on_readToCSV(m_interface->ReadToCSV(params[0], params[1], params[2], params[3].toInt(), params[4], params[5].toLower() == "true"));
        break;
    case ReadTables:
        emit on_readTables(m_interface->ReadTables());
        break;
    case ReadDatabaseName:
        emit on_readDatabaseName(m_interface->ReadDatabaseName());
        break;
    case ReadLayout:
        emit on_readLayout(m_interface->ReadLayout(params[0]));
        break;
    case ReadUser:
        emit on_readUser(m_interface->ReadUser(params[0]));
        break;
    case UpdateRecord:
        emit on_update(m_interface->UpdateRecord(params[0], params[1].split(','), params[2], params[3].split(',')));
        break;
    case UpdateID:
        emit on_update(m_interface->UpdateID(params[0], params[1].split(','), params[2].toInt(), params[3].split(',')));
        break;
    case UpdateUserPassword:
        emit on_update(m_interface->UpdateUserPassword(params[0], params[1]));
        break;
    case UpdateUserPermissions:
        emit on_update(m_interface->UpdateUserPermissions(params[0], params[1].split(',')));
        break;
    case DeleteRecord:
        emit on_delete(m_interface->DeleteRecords(params[0], params[1]));
        break;
    case DeleteID:
        emit on_delete(m_interface->DeleteID(params[0], params[1].toInt()));
        break;
    case DeleteTable:
        emit on_delete(m_interface->DeleteTable(params[0]));
        break;
    case DeleteTableData:
        emit on_delete(m_interface->DeleteTableData(params[0]));
        break;
    case DeleteUser:
        emit on_delete(m_interface->DeleteUser(params[0]));
        break;
    case DeleteUserPermissions:
        emit on_delete(m_interface->DeleteUserPermissions(params[0], params[1].split(',')));
        break;
    }
}

bool CRUD_API::query(const QString &sql)
{
    return m_connection->execute(sql);
}

}}
