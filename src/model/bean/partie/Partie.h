/*
 * Partie.h
 *
 *  Created on: Feb 24, 2014
 *      Author: samuel
 */

#ifndef PARTIE_H_
#define PARTIE_H_

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>

#include "../player/Player.h"

using namespace std;

//namespace statusPlayer {
//	enum statusId {
//		ENCOURS = 0, TERMINE = 1, SIZE_OF_ENUM
//	};
//	static const char* status[SIZE_OF_ENUM] = { "En cours", "Terminé" };
//}

class Partie {

private:
	int idPartie;
	Player* joueurNoir;
	Player* joueurBlanc;
	string etatPartie;
	time_t heureFin;

public:
	Partie();
	Partie(int idPartie,Player* joueurNoir, Player* joueurBlanc,string etatPartie, time_t heureFin);

	virtual ~Partie();
};

#endif /* PARTIE_H_ */
