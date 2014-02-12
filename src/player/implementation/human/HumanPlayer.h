/*
 * HumanPlayer.h
 *
 *  Created on: Feb 12, 2014
 *      Author: samuel
 */

#ifndef HUMANPLAYER_H_
#define HUMANPLAYER_H_

using namespace std;
#include "../../Player.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * concrete class defining a Human player
 */
class HumanPlayer : public Player {

public:
	HumanPlayer();
	virtual ~HumanPlayer();

	/**
	 * define how a player play :)
	 */
	virtual void play();
};

#endif /* HUMANPLAYER_H_ */
