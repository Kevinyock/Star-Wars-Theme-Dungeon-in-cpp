#pragma once
#include "Entity.h"
#include "Force.h"
#include "Item.h"
#include "Map.h"
#include "Point.h"
#include <vector>
#include <string>
class Hero :
    protected Entity, protected Force
{
private:
    std::vector<Item> inventory;
    Map map;
    Point location;
public:
    Hero(std::string n, Map m);
    void Attack(Entity e);
    void Display();
    void DisplayInventory();
    int GetNumInInventory();
    void RemoveItem(std::string n);
    void RemoveItem(int index);
    bool PickUpItem(Item i);
    bool HasMedKit();
    bool HasHolocron();
    bool HasKey();
    bool HasArmor();
    Point GetLocation();
    char GoNorth();
    char GoSouth();
    char GoEast();
    char GoWest();
    std::string RemoveFirstArmorItem();
};

