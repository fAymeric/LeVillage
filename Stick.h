#ifndef STICK_H
#define STICK_H

#include "Weapon.h"

class Stick: public Weapon
{
public:
    int m_carryStickNumber = 0;
    Stick();
    Stick(string name, int damageBoost, int durability, int price);
    void setCarryStickNumber(int carryStickNumber);
    void displayInformations() const override;
};

#endif // STICK_H
