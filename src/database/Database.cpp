/*
 * Database.cpp
 *
 *  Created on: Feb 12, 2014
 *      Author: samuel
 */

#include "Database.h"

Database::Database() {

}

/**
 * \param host : the host of the db
 * \param login : the login of the db
 * \param password : the password of the db
 * \param database : the database name you want to operate on
 */
Database::Database(char* host, char* login, char* password, char* database) {
	this->host = host;
	this->login = login;
	this->password = password;
	this->database = database;

	// Intitialize connection to the database
	connection = mysql_init(NULL);
}

Database::~Database() {

}

/**
 * establish a connection to the db
 */
void Database::connect() {
	if (!mysql_real_connect(connection, this->host, this->login, this->password,
			this->database, 0, NULL, 0)) {
		printf("--------- [DATABASE] connect : connection error --------------------------\n");
		printf("Host: %s\nLogin: %s\nDatabase: %s\n",this->host, this->login, this->database);
		printf("%s\n", mysql_error(connection));
	}
}

/**
 * Close the connection to database and free memory used by connection.
 */
void Database::disconnect() {
	mysql_close(connection);
	mysql_library_end();
}

/**
 * Show informations about the current database instance
 */
void Database::getInfo() {
	const char *hostinfo;
	const char *serverinfo;
	int protoinfo;

	/* Get host info */
	hostinfo = mysql_get_host_info(connection);

	/* Get server info */
	serverinfo = mysql_get_server_info(connection);

	/* Get protocol info */
	protoinfo = mysql_get_proto_info(connection);

	/* Output get info */
	printf("Host: %s\n", hostinfo);
	printf("Server: %s\n", serverinfo);
	printf("Protocol: %d\n\n", protoinfo);

	MYSQL_RES* resource;
	MYSQL_ROW result;

	resource = execQuery("SHOW DATABASES");

    printf("Databases:\n");

    /* Fetch & print each row */
    while((result = mysql_fetch_row(resource))) {
        printf("%s\n", result[0]);
    }
    printf("\n");


	mysql_free_result(resource);
}

/**
 * exec a SQL query
 * \param query - the query string
 * \return a MYSQL_RES*
 */
MYSQL_RES* Database::execQuery(const char* query) {
	if(mysql_query(connection, query)){
		printf("\n\n--------- [DATABASE] execQuery : unable to exec query --------------------------\n");
		printf("Query: %s\n",query);
		printf("%s\n\n", mysql_error(connection));
	}

	return mysql_use_result(connection);
}

/**
 * sample code :)
 */
void Database::testConnection() {
	MYSQL_RES* resource;
	MYSQL_ROW result;

	this->connect();
	this->getInfo();

	resource = execQuery("SELECT * FROM test");
	 printf("--- SELECT * FROM test ---\n");
	while ((result = mysql_fetch_row(resource))) {
		printf("%s - %s\n", result[0], result[1]);
	}
	printf("\n");
	mysql_free_result(resource);

	this->disconnect();
}

