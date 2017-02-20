#pragma once
#include "Player.h"
class Fighter :
	public Player
{
private:
	int skill;
public:
	Fighter();
	Fighter(char* name, int skill, int strength, int intelligence, int health);
	~Fighter();

	void attack(Player* player);
	void printFighter();
};

