//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// namespace std
#include <iostream>
#include <iterator>
#include <list>

// Model
#include "model/Model.h"

// Stone
#include "stone/Stone.h"

// Player
#include "player/Player.h"
#include "player/implementation/IA/IAPlayer.h"
#include "player/implementation/human/HumanPlayer.h"
#include "player/implementation/remote/RemotePlayer.h"

// Database
#include "database/Database.h"

using namespace std;

int main() {
	/* -------- DATABASE TEST ------------------------------------------ */
	Database *db = new Database("localhost","root","arydjM","go");
	db->testConnection();

	/* -------- PLAYERS TEST ------------------------------------------ */
	Player* myPlayer = new IAPlayer();
	myPlayer->play();

	Player* anOtherPlayer = new HumanPlayer();
	anOtherPlayer->play();

	Player* aRemotePlayer = new RemotePlayer();
	aRemotePlayer->play();

	//Ne compile pas et c'est tant mieux :) //
	//Player* otherPlayer = new Player();

	/* -------- STONES TEST ------------------------------------------ */
	cout << "\nPierre de myPlayer : " << endl;

	list<Stone*> stones = myPlayer->getStones();
	stones.push_front(new Stone(5,6));
	stones.push_front(new Stone(8,8));

    for(list<Stone*>::iterator it = stones.begin(); it != stones.end(); ++it) {
    	Stone* aStone = (Stone*)*it;
    	cout << "X:" << aStone->getX() << "\tY: " << aStone->getY() << endl;
    }

    /* -------- END OF TEST ------------------------------------------ */
	cout << "" << endl;
	cout << "end of test" << endl; // prints !!!Hello World!!!
	return 0;
}
