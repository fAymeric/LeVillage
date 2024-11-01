#ifndef POTION_H
#define POTION_H

#include "item.h"

class potion : public Item
{
public:
    int m_heal;
    potion();
    void setHeal(int heal);
    int getHeal();
};

#endif // POTION_H
