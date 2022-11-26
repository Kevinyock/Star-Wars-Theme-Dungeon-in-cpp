#include "Entity.h"
#include <iostream>

Entity::Entity()
{
	this->name = "Test";
	this->level = 1;
	this->maxHitpoints = 10;
	this->hitpoints = 10;
}

Entity::Entity(std::string name, int level, int maxHP)
{
	this->name = name;
	this->level = level;
	this->maxHitpoints = maxHP;
	this->hitpoints = maxHP;
}

void Entity::attack(Entity e)
{
}

std::string Entity::getName()
{
	return std::string();
}

int Entity::getLevel()
{
	return level;
}

int Entity::getHP()
{
	return hitpoints;
}

int Entity::getMaxHP()
{
	return maxHitpoints;
}

void Entity::increaseLevel()
{
	level++;
}

void Entity::heal(int healAmount)
{
	hitpoints += healAmount;
	if (hitpoints > maxHitpoints)
	{
		hitpoints = maxHitpoints;
	}
}

void Entity::takeDamage(int hitpoints)
{
	this -> hitpoints -= hitpoints;
}
/// <summary>
/// Increase Max HP, Mainly used for level up
/// </summary>
/// <param name="hitpoints"></param>
void Entity::increaseMaxHP(int hitpoints)
{
	maxHitpoints += hitpoints;
}

/// <summary>
/// Decrease maximum hitpoints
/// </summary>
/// <param name="hitpoints"></param>
void Entity::decreaseMaxHP(int hitpoints)
{
	maxHitpoints -= hitpoints;
}

void Entity::display()
{
	std::cout << "Name:" << name << std::endl;
	std::cout << "Level:" << level << std::endl;
	std::cout << "HP:" << hitpoints << std::endl;
}