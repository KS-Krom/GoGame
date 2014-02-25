/*
 * IAPlayer.h
 *
 *  Created on: Feb 12, 2014
 *      Author: samuel
 */

#ifndef IAPLAYER_H_
#define IAPLAYER_H_

using namespace std;
#include "../../Player.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * concrete class defining a IA player
 */
class IAPlayer : public Player {

public:
	IAPlayer();
	virtual ~IAPlayer();

	/**
	 * define how a player play :)
	 */
	virtual void play();
};

#endif /* IAPLAYER_H_ */
