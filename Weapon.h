#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"


class Weapon : public Item
{
protected:
    int m_damageBoost;
public:
    Weapon();
    void setDamageBoost(int damageBoost);
    int getDamageBoost() ;
    void displayInformations() const override;
};

#endif // WEAPON_H
