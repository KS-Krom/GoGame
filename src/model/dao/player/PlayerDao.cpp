/*
 * PlayerDao.cpp
 *
 *  Created on: Feb 24, 2014
 *      Author: samuel
 */

#include "PlayerDao.h"

PlayerDao::PlayerDao(Database* database) {
	this->database = database;
}

PlayerDao::~PlayerDao() {
	// TODO Auto-generated destructor stub
}

list<Player*> PlayerDao::getAll() {
	MYSQL_RES* resource;
	MYSQL_ROW result;

	list<Player*> players;

	this->database->connect();

	resource = this->database->execQuery("SELECT * FROM joueurs");
	while ((result = mysql_fetch_row(resource))) {
		Player* player = new RemotePlayer();

		player->setId(atoi(result[0]));
		player->setName(result[1]);

		players.push_front(player);
	}

	mysql_free_result(resource);
	this->database->disconnect();

	return players;
}

Player* PlayerDao::get(int id) {
	Player* player = new RemotePlayer();

	MYSQL_RES* resource;
	MYSQL_ROW result;

	this->database->connect();

	resource = this->database->execQuery(
			"SELECT * FROM joueurs WHERE id=" + id);
	while ((result = mysql_fetch_row(resource))) {

		player->setId(atoi(result[0]));
		player->setName(result[1]);
	}

	mysql_free_result(resource);
	this->database->disconnect();

	return player;
}
