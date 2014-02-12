//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iterator>
#include <list>
#include "stone/Stone.h"
#include "model/Model.h"
#include "player/Player.h"
#include "player/implementation/IA/IAPlayer.h"

using namespace std;

int main() {
	// Test IA Player //
	Player* myPlayer = new IAPlayer();
	myPlayer->play();

	list<Stone*> stones = myPlayer->getStones();
	stones.push_front(new Stone(5,6));
	stones.push_front(new Stone(8,8));

    for(list<Stone*>::iterator it = stones.begin(); it != stones.end(); ++it) {
    	Stone* aStone = (Stone*)*it;
    	cout << "X:" << aStone->getX() << "\tY: " << aStone->getY() << endl;
    }

	//Ne compile pas et c'est tant mieux :) //
	//Player* otherPlayer = new Player();

	cout << "\n" << endl;
	cout << "end of test" << endl; // prints !!!Hello World!!!
	return 0;
}
