#include "Twilek.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Twilek::Twilek() {
	this->name = "Twi'lek";
	this->level = 1;
	this->maxHitpoints = 5;
}

void Twilek::Attack(Entity target) {
	srand(time(0));
	int damage = rand() % 3;
	std::cout << getName() << " hit " << target.getName() << " for " << " damage." << std::endl;
	target.takeDamage(damage);
}