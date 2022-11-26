#pragma once
#include <string>

class Entity
{
protected:
	std::string name;
	int level;
	int maxHitpoints;
	int hitpoints;
public:

	Entity();
	Entity(std::string name, int level, int maxHP);

	virtual void attack(Entity e);

	std::string getName();

	int getLevel();

	int getHP();

	int getMaxHP();

	void increaseLevel();

	void heal(int healAmount);

	void takeDamage(int h);

	void increaseMaxHP(int h);

	void decreaseMaxHP(int h);

	void display();
};

