/*
 * Goban.cpp
 *
 *  Created on: Feb 24, 2014
 *      Author: samuel
 */

#include "Goban.h"

Goban::Goban() {
	// TODO Auto-generated constructor stub

}

Goban::Goban(int idGoban,Partie partie, int numeroCoup,string coup, int joueurEnCours){
	this->idGoban = idGoban;
	this->partie = partie;
	this->numeroCoup = numeroCoup;
	this->coup = coup;
	this->joueurEnCours = joueurEnCours;
}

Goban::~Goban() {
	// TODO Auto-generated destructor stub
}

