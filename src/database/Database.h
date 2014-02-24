/*
 * Database.h
 *
 *  Created on: Feb 12, 2014
 *      Author: samuel
 */

#ifndef DATABASE_H_
#define DATABASE_H_

#include <mysql/mysql.h>

#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Database {
private:
	const char* database;
	const char* login;
	const char* password;
	const char* host;

	MYSQL* connection;

public:
	/**
	 * \param host : the host of the db
	 * \param login : the login of the db
	 * \param password : the password of the db
	 * \param database : the database name you want to operate on
	 */
	Database(char* host, char* login, char* password, char* database);
	virtual ~Database();

	/**
	 * establish the connection to the db
	 */
	void connect();

	/**
	 * Close the connection to database and free memory used by connection.
	 */
	void disconnect();

	/**
	 * exec a SQL query
	 * \param query - the query string
	 * \return a MYSQL_RES*
	 */
	MYSQL_RES* execQuery(const char* query);

	/**
	 * sample code to test the class
	 */
	void testConnection();

	/**
	 * Show informations about the current database instance
	 */
	void getInfo();

};

#endif /* DATABASE_H_ */
