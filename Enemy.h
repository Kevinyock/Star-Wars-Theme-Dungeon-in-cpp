#pragma once
#include "Entity.h"
#include "Item.h"
#include <string>
class Enemy : protected Entity
{
private:
    /// <summary>
    /// Item
    /// </summary>
    Item item;
public:
    Enemy(std::string name, int enemyLevel, int enemyMaxHP);
};

