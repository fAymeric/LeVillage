#ifndef STICK_H
#define STICK_H

#include "Weapon.h"

class Stick: public Weapon
{
    int m_dodgeBoost;
public:
    Stick();
    Stick(string name, int damageBoost, int durability, int price, int dodgeBoost);
    void setDodgeBoost(int dodgeBoost);
    int getDodgeBoost();
    void displayInformations() const override;
};

#endif // STICK_H
