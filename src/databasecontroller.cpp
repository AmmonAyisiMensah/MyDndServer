#include "databasecontroller.h"

DatabaseController::DatabaseController()
{

}

API_SETTINGS DatabaseController::ApiSettings() const
{
    return m_ApiSettings;
}

void DatabaseController::setApiSettings(const API_SETTINGS &newApiSettings)
{
    m_ApiSettings = newApiSettings;
}

DatabaseController::DatabaseController()
{
    
}

API_SETTINGS DatabaseController::ApiSettings() const
{
    
}

void DatabaseController::init(const API_SETTINGS &p_ApiSettings)
{
    
}

void DatabaseController::on_migrateNew()
{
    
}

void DatabaseController::on_migrateUndo()
{
    
}

void DatabaseController::on_migrateFresh()
{
    
}

void DatabaseController::on_createPlayer(const QJsonObject &p_data)
{
    
}

QVariant DatabaseController::on_getPlayerValue(const QString &p_ID) const
{
    
}

void DatabaseController::on_setPlayerValue(const QString &p_ID, const QVariant &value)
{
    
}

void DatabaseController::on_deletePlayer(const QString &p_ID)
{
    
}

void DatabaseController::on_createEnemy(const QJsonObject &p_data)
{
    
}

QVariant DatabaseController::on_getEnemyValue(const QString &p_ID) const
{
    
}

void DatabaseController::on_setEnemyValue(const QString &p_ID, const QVariant &value)
{
    
}

void DatabaseController::on_deleteEnemy(const QString &p_ID)
{
    
}

void DatabaseController::on_createNpc(const QJsonObject &p_data)
{
    
}

QVariant DatabaseController::on_getNpcValue(const QString &p_ID) const
{
    
}

void DatabaseController::on_setNpcValue(const QString &p_ID, const QVariant &value)
{
    
}

void DatabaseController::on_deleteNpc(const QString &p_ID)
{
    
}

void DatabaseController::on_createMap(const QString &p_imageUrl)
{
    
}

void DatabaseController::on_createMap(const QFile &p_imageFile)
{
    
}

QVariant DatabaseController::on_getMapValue(const QString &p_ID) const
{
    
}

void DatabaseController::on_setMapValue(const QString &p_ID, const QVariant &value)
{
    
}

void DatabaseController::on_deleteMap(const QString &p_ID)
{
    
}

void DatabaseController::on_createGame(const QString &p_campaign)
{
    
}

QVariant DatabaseController::on_getGameValue(const QString &p_ID) const
{
    
}

void DatabaseController::on_setGameValue(const QString &p_ID, const QVariant &value)
{
    
}

void DatabaseController::on_deleteGame(const QString &p_ID)
{
    
}
