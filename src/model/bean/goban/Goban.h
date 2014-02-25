/*
 * Goban.h
 *
 *  Created on: Feb 24, 2014
 *      Author: samuel
 */

#ifndef GOBAN_H_
#define GOBAN_H_

//namespace coup {
//	enum CoupId {
//		PASSER = 0, POSER = 1, SIZE_OF_ENUM
//	};
//	static const char* coup[SIZE_OF_ENUM] = { "passer", "poser" };
//}

#include "../partie/Partie.h"
#include "../stone/Stone.h"

#include <list>



class Goban {

private:
	int idGoban;
	Partie* partie;
	int numeroCoup;
	string coup;
	int joueurEnCours;
//	list<Stone*> stones;

public:
	Goban();
	Goban(int idGoban, Partie* partie, int numeroCoup, string coup, int joueurEnCours);
			/*list<Stone*> stones*/

	//list<Stone*> getStones;

	virtual ~Goban();
};

#endif /* GOBAN_H_ */
