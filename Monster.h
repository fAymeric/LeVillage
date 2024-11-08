#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

class Monster: public Character
{
public:
    Monster();
    Monster(string name, int attack, int health, int defense, int gold);
};

#endif // MONSTER_H
