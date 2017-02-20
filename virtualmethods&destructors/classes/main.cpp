#include "Player.h"
#include "Fighter.h"
#include <iostream>

using namespace std;

int main()
{
	/*
	Fighter fighterOne;
	Fighter* fighterTwo = new Fighter("Kevin", 4, 6, 7, 2);

	fighterOne.printFighter();
	fighterTwo->printFighter();

	delete fighterTwo;
	*/
	// Creation loop
	Player* battlers[10];

	for (int i = 0; i < 10; i++)
	{
		int rng = rand() % 2;
		if (rng == 0)
		{
			battlers[i] = new Player;
		}
		else 
		{
			battlers[i] = new Fighter;
		}
	}
	// Attack loop
	for (int i = 0; i < 9; i++)
	{
		(battlers[i]->attack(battlers[i + 1]));
	}
	cout << "\n";

	// Deletion
	for (int i = 0; i < 10; i++)
	{
		delete battlers[i];
	}
	cin.get();

	return 0;
}