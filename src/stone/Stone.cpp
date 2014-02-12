/*
 * Stone.cpp
 *
 *  Created on: Feb 11, 2014
 *      Author: samuel
 */

#include "Stone.h"

Stone::Stone() : posX(0), posY(0){

}

Stone::Stone(int x, int y) : posX(x), posY(y) {

}

Stone::~Stone() {
	// TODO Auto-generated destructor stub
}

void Stone::setX(int x){
	posX = x;
}
int Stone::getX(){
	return posX;
}

void Stone::setY(int y){
	posY = y;
}
int Stone::getY(){
	return posY;
}
