#include "Fighter.h"
#include <iostream>

using namespace std;

Fighter::Fighter()
{
	skill = 0;
}

Fighter::Fighter(char* name, int skill, int strength, int intelligence, int health) : Player(name, strength, intelligence, health)
{
	this->skill = skill;
}

Fighter::~Fighter()
{
	cout << "Destroying fighter object\n";
}

void Fighter::attack(Player * player)
{
	cout << name << " attacks " << player->getName() << " with a weapon!\n";
}

void Fighter::printFighter()
{
	Player::printPlayer();
	cout << "Archery Skill: " << skill << "\n\n";
}
