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

class Player {

	private:
		list<Stone*> stones;

	public:
		//Constructeur et Destructeur
		Player();
		virtual ~Player();

		//Méthodes
		virtual void play() = 0;

		//Getters & Setterslist<Stone*>
		list<Stone*> getStones();
};

#endif /* PLAYER_H_ */
