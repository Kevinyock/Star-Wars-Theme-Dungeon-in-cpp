#include "Enemy.h"
#include "ItemGenerator.h"

Enemy::Enemy()
{
	this->hitpoints = maxHitpoints;
	this->item = ItemGenerator::GetInstance().GenerateItem();
}

Item Enemy::GetItem()
{
	return item;
}