#include "ItemGenerator.h"
#include "Item.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

ItemGenerator::ItemGenerator()
{
	std::string itemName;
	std::fstream file ("ItemList.txt");

	if(file.is_open())
	{
		while (std::getline(file, itemName))
		{
			itemList.push_back(Item(itemName));
		}
	}
	else
	{
		std::cout << "Unable to find item file";
	}
}

//TODO: Fix linker issue
/*
ItemGenerator ItemGenerator::GetInstance()
{

	if (itemGenerator == nullptr)
	{
		itemGenerator = new ItemGenerator();
	}
	return itemGenerator;

}
*/

Item ItemGenerator::GenerateItem()
{
	srand(time(0));

	int itemNum = rand() % itemList.size();
	return itemList.at(itemNum).clone();
}

ItemGenerator::~ItemGenerator()
{
	itemList.clear();
}