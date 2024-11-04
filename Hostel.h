#ifndef HOSTEL_H
#define HOSTEL_H

#include "Character.h"
class Hostel
{
    int m_resetLife;
public:
    Hostel();
    void resetLifeToMax(Character& character);
    void setResetLife(int resetLife);
    int getResetLife();
};

#endif // HOSTEL_H
