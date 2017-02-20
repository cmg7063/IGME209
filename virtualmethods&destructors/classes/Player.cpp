#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
	name = "Unknown";
	strength = 0;
	intelligence = 0;
	health = 0;
}

Player::Player(char* name, int strength, int intelligence, int health)
{
	this->name = name;
	this->strength = strength;
	this->intelligence = intelligence;
	this->health = health;
}


Player::~Player()
{
	cout << "Destroying player object\n";
}

char* Player::getName()
{
	return name;
}

void Player::attack(Player * player)
{
	cout << name << " attacks " << player->getName() << "\n";
}

void Player::printPlayer()
{
	cout << "Name: " << name << "\n";
	cout << "Strength: " << strength << "\n";
	cout << "Inteligence: " << intelligence << "\n";
	cout << "Health: " << health << "\n";
}
