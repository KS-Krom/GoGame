/*
 * Player.cpp
 *
 *  Created on: Feb 11, 2014
 *      Author: samuel
 */

#include "Player.h"

Player::Player() {


}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

list<Stone*> Player::getStones(){
	return this->stones;
}
