#ifndef POTION_H
#define POTION_H


#include "Item.h"
class Potion : public Item
{
    int m_heal;
public:

    Potion();
    void setHeal(int heal);
    int getHeal() const;
};

#endif // POTION_H
