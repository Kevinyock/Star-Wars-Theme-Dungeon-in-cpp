#pragma once
#include "Item.h"
#include <vector>
class ItemGenerator
{
private:
	static ItemGenerator* itemgenerator;
	std::vector<Item> itemList;
public:
	ItemGenerator();
	static ItemGenerator GetInstance();
	Item GenerateItem();
	~ItemGenerator();
};

