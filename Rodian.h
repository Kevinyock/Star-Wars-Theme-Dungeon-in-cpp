#pragma once
#include "Enemy.h"
class Rodian :
    public Enemy
{
private:
    using Enemy::Enemy;
public:
    Rodian();
    void Attack(Entity target);
};

