#pragma once
#include "Item.h"
#include <vector>
class ItemGenerator
{
private:
	static ItemGenerator* itemGenerator;
	std::vector<Item> itemList;
public:
	ItemGenerator();
	static ItemGenerator GetInstance();
	Item GenerateItem();
	~ItemGenerator();
};
