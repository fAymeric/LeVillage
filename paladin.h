#ifndef PALADIN_H
#define PALADIN_H

#include "player.h"
class Paladin : public Player
{
    Sword* m_sword = nullptr;
    Shield* m_shield = nullptr;

public:
    Paladin();
};

#endif // PALADIN_H
