#ifndef STICK_H
#define STICK_H

#include "Weapon.h"

class Stick: public Weapon
{
public:
    Stick();
    Stick(string name, int damageBoost, int durability, int price);
    void displayInformations() const override;
};

#endif // STICK_H
