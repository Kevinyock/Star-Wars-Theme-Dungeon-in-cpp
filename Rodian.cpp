#include "Rodian.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Rodian::Rodian() {
	this->name = "Rodian";
	this->level = 1;
	this->maxHitpoints = 6;
}

void Rodian::Attack(Entity target) {
	srand(time(0));
	int damage = rand() % 2;
	std::cout << getName() << " hit " << target.getName() << " for " << " damage." << std::endl;
	target.takeDamage(damage);
}
