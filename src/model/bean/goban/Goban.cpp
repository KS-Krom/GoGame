/*
 * Goban.cpp
 *
 *  Created on: Feb 24, 2014
 *      Author: samuel
 */

#include "Goban.h"

Goban::Goban() {

}

Goban::Goban(int idGoban,Partie* partie, int numeroCoup,string coup, int joueurEnCours){
	this->idGoban = idGoban;
	this->partie = partie;
	this->numeroCoup = numeroCoup;
	this->coup = coup;
	this->joueurEnCours = joueurEnCours;
	//this->stones = stones;
}

//list<Stone*> Goban::getStones(){
//	return this->stones;
//}

Goban::~Goban() {
	// TODO Auto-generated destructor stub
}

