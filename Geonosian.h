#pragma once
#include "Enemy.h"
class Geonosian : 
	public Enemy 
{
private:
	using Enemy::Enemy;
public:
	Geonosian();
	void Attack(Entity target);
};