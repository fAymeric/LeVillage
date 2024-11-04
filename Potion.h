#ifndef POTION_H
#define POTION_H


#include "Item.h"
class Potion : public Item
{
public:
    int m_heal;
    Potion();
    void setHeal(int heal);
    int getHeal() const;
};

#endif // POTION_H
