/*
 * PlayerDao.h
 *
 *  Created on: Feb 24, 2014
 *      Author: samuel
 */

#ifndef PLAYERDAO_H_
#define PLAYERDAO_H_

#include "../../database/Database.h"
#include "../bean/player/Player.h"
#include "../bean/player/implementation/remote/RemotePlayer.h"
class PlayerDao {

private:
	Database* database;

public:
	PlayerDao(Database* database);

	list<Player*> getAll();
	Player* get(int id);

	virtual ~PlayerDao();
};

#endif /* PLAYERDAO_H_ */
