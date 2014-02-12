/*
 * Database.h
 *
 *  Created on: Feb 12, 2014
 *      Author: samuel
 */

#ifndef DATABASE_H_
#define DATABASE_H_

#include <string>


#include <mysql/mysql.h>

#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Database {
private:
	char* database;
	char* login;
	char* password;
	char* host;

	MYSQL* connection;

public:
	void connect();
	void disconnect();

	MYSQL_RES* execQuery(const char* query);

	void testConnection();
	void getInfo();

	Database();
	Database(char* host, char* login, char* password, char* database);
	virtual ~Database();
};

#endif /* DATABASE_H_ */
