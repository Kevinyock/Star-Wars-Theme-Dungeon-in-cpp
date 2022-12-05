#pragma once
class Point
{
private:

	int x;
	int y;

public:
	Point();
	Point(int x, int y);

	int GetX();
	int GetY();

	void DecrementPostX();
	void DecrementPostY();

	void IncrementPostX();
	void IncrementPostY();
};

