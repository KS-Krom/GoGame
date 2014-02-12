/*
 * RemotePlayer.h
 *
 *  Created on: Feb 12, 2014
 *      Author: samuel
 */

#ifndef REMOTEPLAYER_H_
#define REMOTEPLAYER_H_

using namespace std;
#include "../../Player.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * concrete class defining a Remote player
 */
class RemotePlayer : public Player {

public:
	RemotePlayer();
	virtual ~RemotePlayer();

	/**
	 * define how a player play :)
	 */
	virtual void play();
};

#endif /* REMOTEPLAYER_H_ */
