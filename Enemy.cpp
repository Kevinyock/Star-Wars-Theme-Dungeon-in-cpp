#include "Enemy.h"
#include "ItemGenerator.h"

Enemy::Enemy(std::string name, int enemyLevel, int enemyMaxHP)
{
	this->name = name;
	this->level = enemyLevel;
	this->maxHitpoints = enemyMaxHP;
	//this->item = ItemGenerator::GetInstance().GenerateItem();
}
