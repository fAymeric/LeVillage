#ifndef HOSTEL_H
#define HOSTEL_H

#include "Building.h"
#include "Character.h"
#include "Player.h"
class Hostel: public Building
{
protected:
    int m_resetLife;
    int m_stayCost = 10;
    int m_hostelNbr;
public:
    Hostel();
    bool resetLifeToMax(Character& character, Player &player);
    void setResetLife(int resetLife);
    int getResetLife();
    void setHostelNbr(int hostelNbr);
    int getHostelNbr();
};

#endif // HOSTEL_H
