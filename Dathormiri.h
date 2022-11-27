#pragma once
#include "Enemy.h"
class Dathormiri :
    public Enemy
{
private:
    using Enemy::Enemy;
public:
    Dathormiri();
    void Attack(Entity target);
};

