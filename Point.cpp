#include "Point.h"

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}

void Point::DecrementPostX()
{
	x--;
}

void Point::DecrementPostY()
{
	y--;
}

void Point::IncrementPostX()
{
	x++;
}

void Point::IncrementPostY()
{
	y++;
}
