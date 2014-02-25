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

int Player::getId(){
	return this->id;
}
void Player::setId(int id){
	this->id = id;
}

string Player::getName(){
	return this->name;
}
void Player::setName(string name){
	this->name = name;
}
