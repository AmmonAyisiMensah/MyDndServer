#ifndef MYSQL_H
#define MYSQL_H

#include "crud_interface.h"

namespace AA { namespace Database {

/**
 * @brief Interface with basic functionality for an My SQL database
 * The Interface functionality is used by the CRUD API
 * @see CRUD_API
 * @see CRUD_Interface
 */
class AYIMEA_EXPORT MySQL : public CRUD_Interface
{
    Q_OBJECT
public:
    /**
     * @brief Default constructor
     * @param connection Intance pointer of the SQL database connection
     */
    MySQL(SQL_Connection *connection);

    /**
     * @brief Create a new database user
     * @param username The login name of the user
     * @param password The password of the user
     * @param permissions The user permissions
     * @return True when operation was succesfull
     * @see CRUD_Interface
     */
    bool CreateUser(const QString &username, const QString &password, const QStringList permissions) override;

    /**
     * @brief Read limited record(s) from a database table
     * @param table Name of the databse table
     * @param filter The where conditions statement
     * @param limit The max results returned
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return List of records and their values
     * @see CRUD_Interface
     */
    const QList<QStringList> ReadRecords(const QString &table, const QString &filter, const int &limit, const QString &order, const bool &desc) override;

    /**
     * @brief Read the first record from a database table
     * @param table Name of the databse table
     * @param order Column name to sort on
     * @return List of records and their values
     */
    const QStringList ReadFirst(const QString &table, const QString &order) override;

    /**
     * @brief Read the last record from a database table
     * @param table Name of the databse table
     * @param order Column name to sort on
     * @return List of records and their values
     */
    const QStringList ReadLast(const QString &table, const QString &order) override;

    /**
     * @brief Read the first record from a database table
     * @param table Name of the databse table
     * @return List of records and their values
     */
    const QStringList ReadFirst(const QString &table) override;

    /**
     * @brief Read the last record from a database table
     * @param table Name of the databse table
     * @return List of records and their values
     */
    const QStringList ReadLast(const QString &table) override;

    /**
     * @brief Read record from database table by ID
     * @param table Name of the databse table
     * @param id The record ID
     * @return List of records and their values
     * @see CRUD_Interface
     */
    const QStringList ReadID(const QString &table, const QString &id) override;

    /**
     * @brief Read records from databse table and store them into a CSV
     * @param filePath Path of the new CSV file
     * @param table Name of the databse table, const bool desc
     * @param filter The where conditions statement
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return True when operation was succesfull
     * @see CRUD_Interface
     */
    bool ReadToCSV(const QString &filePath, const QString &table, const QString &filter, const QString &order, const bool &desc) override;

    /**
     * @brief Read limited records from databse table and store them into a CSV
     * @param filePath Path of the new CSV file
     * @param table Name of the databse table, const bool desc
     * @param filter The where conditions statement
     * @param limit The max results returned
     * @param order Column name to sort on
     * @param desc True if results must be returned in descending order
     * @return True when operation was succesfull
     * @see CRUD_Interface
     */
    bool ReadToCSV(const QString &filePath, const QString &table, const QString &filter, const int &limit, const QString &order, const bool &desc) override;

    /**
     * @brief Retrieve a database table layout
     * @param table Name of the databse table
     * @return String of the SQL create statement
     * @see CRUD_Interface
     */
    QString ReadLayout(const QString &table) override;

    /**
     * @brief Retrieve permissions of an user
     * @param username The login name of the user
     * @return List of the active user permissions
     * @see CRUD_Interface
     */
    QStringList ReadUser(const QString &username) override;

    /**
     * @brief Change the password of an user
     * @param username The login name of the user
     * @param new_password The new password for the user
     * @return True when operation was succesfull
     * @see CRUD_Interface
     */
    bool UpdateUserPassword(const QString &username,const QString &new_password) override;

    /**
     * @brief Update database permissions of a user
     * @param username The login name of the user
     * @param permissions The new user permissions
     * @return True when operation was succesfull
     * @see CRUD_Interface
     */
    bool UpdateUserPermissions(const QString &username, const QStringList permissions) override;

    /**
     * @brief Delete a user from the database
     * @param username The login name of the user
     * @return True when operation was succesfull
     * @see CRUD_Interface
     */
    bool DeleteUser(const QString &username) override;

    /**
     * @brief Delete database permissions from a user
     * @param username The login name of the user
     * @param permissions The to be deleted user permissions
     * @return True when operation was succesfull
     * @see CRUD_Interface
     */
    bool DeleteUserPermissions(const QString &username, const QStringList permissions) override;

};

}}

#endif // MYSQL_H
