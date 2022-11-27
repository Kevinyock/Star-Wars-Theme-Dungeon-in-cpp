#include "Dathormiri.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
Dathormiri::Dathormiri()
{
	this->name = "Dathormiri";
	this->level = 1;
	this->maxHitpoints = 5;
}

void Dathormiri::Attack(Entity target) {
	srand(time(0));
	int damage = rand() % 2;
	std::cout << getName() << " hit " << target.getName() << " for " << " damage." << std::endl;
	target.takeDamage(damage);
}