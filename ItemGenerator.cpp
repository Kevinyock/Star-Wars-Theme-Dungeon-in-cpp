#include "ItemGenerator.h"
#include "Item.h"
#include <fstream>
#include <random>
#include <iostream>

ItemGenerator::ItemGenerator()
{
	std::string itemName;
	std::ifstream file("itemList.txt");
	if (file.is_open())
	{
		while (std::getline(file, itemName))
		{
			itemList.push_back(Item(itemName));
		}
	}
	else
	{
		std::cout << "Unable to open item file";
	}
}

ItemGenerator ItemGenerator::GetInstance()
{
	if (itemgenerator == nullptr)
	{
		itemgenerator = new ItemGenerator();
	}
	return *itemgenerator;
}

Item ItemGenerator::GenerateItem()
{
	std::random_device rd; // Obtain a random number from hardware
	std::mt19937 gen(rd()); // Seed the generator
	std::uniform_int_distribution<> distr(0,itemList.size()); // Define the range

	int randNum = distr(gen);
}
