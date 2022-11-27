#pragma once
#include "Point.h"
class Map
{
private:
	char map[5][5];
	bool revealed[5][5];
	static Map* instance;
public:
	Map();
	Map GetInstance();
	void LoadMap(int mapNum);
	char GetLocAtPoint(Point p);
	Point FindStart();
	void Reveal(Point p);
	void RemoveCharAtLoc(Point p);
};

