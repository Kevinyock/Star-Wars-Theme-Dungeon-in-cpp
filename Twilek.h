#pragma once
#include "Enemy.h"
class Twilek :
    public Enemy
{
private:
    using Enemy::Enemy;
public:
    Twilek();
    void Attack(Entity target);
};

