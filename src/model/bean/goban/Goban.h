/*
 * Goban.h
 *
 *  Created on: Feb 24, 2014
 *      Author: samuel
 */

#ifndef GOBAN_H_
#define GOBAN_H_

#include <string>
#include <stdio.h>
#include <stdlib.h>

#include "../partie/Partie.h"

using namespace std;

namespace coup {
	enum CoupId {
		PASSER = 0, POSER = 1, SIZE_OF_ENUM
	};
	static const char* coup[SIZE_OF_ENUM] = { "passer", "poser" };
}

class Goban {
private:
	int idGoban;
	Partie partie;
	int numeroCoup;
	string coup;
	int joueurEnCours;

public:
	Goban();
	Goban(int idGoban, Partie partie, int numeroCoup, string coup,
			int joueurEnCours);
	virtual ~Goban();
};

#endif /* GOBAN_H_ */
