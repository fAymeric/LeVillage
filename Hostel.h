#ifndef HOSTEL_H
#define HOSTEL_H

#include "Character.h"
class Hostel
{
    int m_resetLife;
    int m_stayCost = 10;
public:
    Hostel();
    bool resetLifeToMax(Character& character);
    void setResetLife(int resetLife);
    int getResetLife();
};

#endif // HOSTEL_H
