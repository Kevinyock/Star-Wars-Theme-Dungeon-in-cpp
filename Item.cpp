#include "Item.h"

Item::Item()
{

}

Item::Item(std::string n)
{
	name = n;
}

std::string Item::getName()
{
	return name;
}

Item Item::clone()
{
	return Item(name);
}

Item::~Item()
{
}
