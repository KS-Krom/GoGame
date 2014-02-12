/*
 * Player.h
 *
 *  Created on: Feb 11, 2014
 *      Author: samuel
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <list>
#include "../stone/Stone.h"
using namespace std;

/**
 * Abstract class defining a player
 */
class Player {

	private:
		/**
		 * stones - list of stones owned by the player
		 */
		list<Stone*> stones;

	public:
		Player();
		virtual ~Player();

		/**
		 * Abstract method - define how a player play :)
		 */
		virtual void play() = 0;

		/**
		 * getter of stones
		 * @return stones : list<Stones*>
		 */
		list<Stone*> getStones();
};

#endif /* PLAYER_H_ */
