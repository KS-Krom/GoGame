/*
 * Partie.cpp
 *
 *  Created on: Feb 24, 2014
 *      Author: samuel
 */

#include "Partie.h"

Partie::Partie() {
	this->joueurNoir = NULL;
	this->joueurBlanc = NULL;
	this->etatPartie = "";
	this->heureFin = 0;
	this->idPartie = 0;
}

Partie::Partie(int idPartie, Player* joueurNoir, Player* joueurBlanc,
		string etatPartie, time_t heureFin){
	this->joueurNoir = joueurNoir;
	this->joueurBlanc = joueurBlanc;
	this->etatPartie = etatPartie;
	this->heureFin = heureFin;
	this->idPartie = idPartie;

}


Partie::~Partie() {
	// TODO Auto-generated destructor stub
}

