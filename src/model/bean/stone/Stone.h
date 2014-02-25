/*
 * Stone.h
 *
 *  Created on: Feb 11, 2014
 *      Author: samuel
 */

#ifndef STONE_H_
#define STONE_H_

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "../goban/Goban.h"

//namespace color {
//	enum colorId {
//		BLANC = 0, NOIR = 1, SIZE_OF_ENUM
//	};
//	static const char* color[SIZE_OF_ENUM] = { "Blanc", "Noir" };
//}
//
//namespace status {
//	enum statusId {
//		VIVANT = 0, MORT = 1, SIZE_OF_ENUM
//	};
//	static const char* status[SIZE_OF_ENUM] = { "Vivant", "Mort" };
//}

using namespace std;
/**
 * Define a Stone owned by a player
 */
class Stone {

private:
	/**
	 * id of the stone
	 */
	int idPion;

	/**
	 * posX : define the position X of the Stone
	 */
	int posX;

	/**
	 * posY : define the position Y of the Stone
	 */
	int posY;


	string pionCol;

	/**
	 * state : define if the stone is alive or dead
	 */
	string etatPion;


	/**
	 * the goban of the stone
	 */
	Goban goban;

public:
	Stone();
	Stone(int id, int x, int y, string pionCol,string etatPion, Goban goban);

	virtual ~Stone();

	void setX(int x);
	int getX();

	void setY(int y);
	int getY();

	void setState(bool state);
	bool getState();
};

#endif /* STONE_H_ */
