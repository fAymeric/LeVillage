#ifndef SHIELD_H
#define SHIELD_H

#include "Item.h"


class Shield : public Item
{
    int m_addDefense;
public:
    int m_carryShieldNumber = 0;
    Shield();
    Shield(string name, int addDefense, int durability, int price);
    void setCarryShieldNumber(int carryShieldNumber);
    void setBoostDefense(int addDefense);
    int getBoostDefense() const ;
    void displayInformations() const override;
};

#endif // SHIELD_H
