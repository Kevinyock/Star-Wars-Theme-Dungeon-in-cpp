#pragma once
#include <string>

class Item
{
private:
	std::string name;
public:
	Item();
	Item(std::string n);
	std::string getName();
	Item clone();
	~Item();
};

