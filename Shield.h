#ifndef SHIELD_H
#define SHIELD_H

#include "Item.h"


class Shield : public Item
{
    int m_addDefense;
public:
    Shield();
    void setBoostDefense(int addDefense);
    int getBoostDefense() const ;
};

#endif // SHIELD_H
