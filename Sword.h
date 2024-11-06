#ifndef SWORD_H
#define SWORD_H

#include "Weapon.h"

class Sword:public Weapon
{
public:
    int m_carrySwordNumber = 0;
    Sword();
    Sword(string name, int damageBoost, int durability, int price);
    void displayInformations() const override;
};

#endif // SWORD_H
