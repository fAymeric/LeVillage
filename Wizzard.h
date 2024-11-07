#ifndef WIZZARD_H
#define WIZZARD_H

#include "Player.h"


class Wizzard: public Player
{
    int m_dodge;
public:
    Wizzard();
   void Dodge(Player *Perso1);
   void setDodge(int dodgingNbr);
};

#endif // WIZZARD_H
