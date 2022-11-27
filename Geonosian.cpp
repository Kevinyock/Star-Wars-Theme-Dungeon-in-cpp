#include "Geonosian.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
Geonosian::Geonosian() 
{
	this->name = "Geonosian";
	this->level = 1;
	this->maxHitpoints = 5;
}

void Geonosian::Attack(Entity target) {
	srand(time(0));
	int damage = rand() % 2;
	std::cout << getName() << " hit " << target.getName() << " for " << " damage." << std::endl;
	target.takeDamage(damage);
}