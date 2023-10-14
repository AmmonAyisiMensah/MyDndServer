#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

#include "crud_api.h"


struct API_SETTINGS
{
    AA::Database::Driver driver     = AA::Database::Driver::MySql;
    QString database                = "MyDndServer";
    QString user                    = "MyDndUser";
    QString password                = "P4s$wOrd0123";
    QString host                    = "127.0.0.1";
    int port                        = 0;
};

/**
 * @class DatabaseController
 * @brief This class is responsable for database management of an live MyDndServer
 * @details
 * Support for database migration by calling on_migrate...() methods
 *  - New:      Create database tables and procedures
 *  - Undo:     Delete database contents from existance
 *  - Fresh:    Rebuild the database tables
 *
 * Support for Game content management that consists of:
 *  - Players
 *  - Enemys
 *  - NPC's
 *  - Maps
 *
 * Support for Game Synchronisation:
 *  - Update signals for game data
 *  - Turn based singnals of any open client
 *  - Promt and dialog request signals a Dungeon Master can send
 *  - Provide updates to the server
 */
class DatabaseController : public QObject
{
    Q_OBJECT
public:
    DatabaseController();
    API_SETTINGS ApiSettings() const;

signals:
    void on_ConnectionStatusChanged(const bool &p_ConnectedStatus);
    void on_SyncUpdate();
    void on_TurnUpdate();
    void on_promt(const QString &msg, const QStringList &options);
    void on_dialog(const QString &msg);

public slots:
    void init(const API_SETTINGS &p_ApiSettings);
    void on_migrateNew();
    void on_migrateUndo();
    void on_migrateFresh();
    void on_createPlayer(const QJsonObject &p_data);
    QVariant on_getPlayerValue(const QString &p_ID) const;
    void on_setPlayerValue(const QString &p_ID, const QVariant &value);
    void on_deletePlayer(const QString &p_ID);
    void on_createEnemy(const QJsonObject &p_data);
    QVariant on_getEnemyValue(const QString &p_ID) const;
    void on_setEnemyValue(const QString &p_ID, const QVariant &value);
    void on_deleteEnemy(const QString &p_ID);
    void on_createNpc(const QJsonObject &p_data);
    QVariant on_getNpcValue(const QString &p_ID) const;
    void on_setNpcValue(const QString &p_ID, const QVariant &value);
    void on_deleteNpc(const QString &p_ID);
    void on_createMap(const QString &p_imageUrl);
    void on_createMap(const QFile &p_imageFile);
    QVariant on_getMapValue(const QString &p_ID) const;
    void on_setMapValue(const QString &p_ID, const QVariant &value);
    void on_deleteMap(const QString &p_ID);
    void on_createGame(const QString &p_campaign);
    QVariant on_getGameValue(const QString &p_ID) const;
    void on_setGameValue(const QString &p_ID, const QVariant &value);
    void on_deleteGame(const QString &p_ID);

private:
    API_SETTINGS m_ApiSettings;
    AA::Database::CRUD_API *m_CrudApi;


};

#endif // DATABASECONTROLLER_H
