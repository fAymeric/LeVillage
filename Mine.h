#ifndef MINE_H
#define MINE_H

#include "Building.h"
class Mine : public Building
{
protected:
    int m_niveau;
    int m_mineNbr;
    int m_clearDone = 0;
public:
    Mine();
    void setMineNbr(int mineNbr);
    int getMineNbr();
    int MonsterOnMine();
    void MineLevelUp();
    void clearMine();
    void setClearMine(int clearMine);
    int getClearMine();
};

#endif // MINE_H
