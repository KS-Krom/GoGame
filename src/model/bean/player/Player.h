/*
 * Player.h
 *
 *  Created on: Feb 11, 2014
 *      Author: samuel
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <list>
#include <string>

using namespace std;

/**
 * Abstract class defining a player
 */
class Player {

	private:
		/**
		 * id of the player
		 */
		int id;

		/**
		 * name of the team
		 */
		string name;

	public:
		Player(int id, string name);
		virtual ~Player();

		/**
		 * Abstract method - define how a player play :)
		 */
		virtual void play() = 0;

		int getId();
		void setId(int id);

		string getName();
		void setName(string name);
};

#endif /* PLAYER_H_ */
