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
	int posX, posY;

public:
	Stone();
	Stone(int x, int y);

	virtual ~Stone();

	void setX(int x);
	int getX();

	void setY(int y);
	int getY();
};

#endif /* STONE_H_ */
