#pragma once
class Player
{
private:
	int strength;
	int intelligence;
	int health;
public:
	char* name;
	Player();
	Player(char* name, int strength, int intelligence, int health);
	~Player();

	char* getName();
	virtual void attack(Player* player);
	void printPlayer();
};

