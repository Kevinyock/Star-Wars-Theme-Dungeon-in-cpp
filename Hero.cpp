#include "Hero.h"
#include <ctime>
#include <stdlib.h>

Hero::Hero(std::string n, Map m)
{
	name = n;
	level = 1;
	maxHitpoints = 10;
	map = m;
	location = map.FindStart();
	map.Reveal(location);
}

int Force::ForcePush()
{
	return 0;
}

int Force::ForceChoke()
{
	srand(time(0));
	return 0; // placeholder to avoid compiling error
}

int Force::ForceSlam()
{
	return 0;
}
