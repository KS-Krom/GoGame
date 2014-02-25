/*
 * Stone.cpp
 *
 *  Created on: Feb 11, 2014
 *      Author: samuel
 */

#include "Stone.h"

Stone::Stone() :
idPion(0), posX(0), posY(0), pionCol(NULL), etatPion(
		NULL), goban(){

}

Stone::Stone(int id, int x, int y, string pionCol, string etatPion, Goban goban) :
		idPion(id), posX(x), posY(y), pionCol(pionCol), etatPion(
				etatPion), goban(goban) {

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
