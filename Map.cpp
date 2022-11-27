#include "Map.h"

Map* Map::instance = nullptr;

Map::Map()
{
}


Map Map::GetInstance()
{
	if (instance == nullptr) {
		instance = new Map();
	}
	return *instance;
}

