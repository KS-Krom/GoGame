/*
 * Stone.h
 *
 *  Created on: Feb 11, 2014
 *      Author: samuel
 */

#ifndef STONE_H_
#define STONE_H_

/**
 * Define a Stone owned by a player
 */
class Stone {

private:
	/**
	 * posX : define the position X of the Stone
	 */
	int posX;

	/**
	 * posY : define the position Y of the Stone
	 */
	int posY;

	/**
	 * state : define if the stone is alive or dead
	 */
	bool state;

public:
	Stone();
	Stone(int x, int y);

	virtual ~Stone();

	void setX(int x);
	int getX();

	void setY(int y);
	int getY();

	void setState(bool state);
	bool getState();
};

#endif /* STONE_H_ */
