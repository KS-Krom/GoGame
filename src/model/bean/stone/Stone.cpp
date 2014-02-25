/*
 * Stone.cpp
 *
 *  Created on: Feb 11, 2014
 *      Author: samuel
 */

#include "Stone.h"

Stone::Stone() :
		posX(0), posY(0), state(true) {

}

Stone::Stone(int x, int y) :
		posX(x), posY(y), state(true) {

}

Stone::~Stone() {
	// TODO Auto-generated destructor stub
}

void Stone::setX(int x) {
	posX = x;
}
int Stone::getX() {
	return posX;
}

void Stone::setY(int y) {
	posY = y;
}
int Stone::getY() {
	return posY;
}

void Stone::setState(bool state) {
	this->state = state;
}

bool Stone::getState() {
	return this->state;
}
