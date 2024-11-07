#include "Mine.h"

Mine::Mine() {
    m_niveau = 1;
}
int get_rand_number_Mine (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int Mine::MonsterOnMine(){
    int nbMonster = fibonacci(m_niveau);
    return nbMonster;
}
void Mine::MineLevelUp(){
    m_niveau ++;
}
void Mine::clearMine(){
    m_clearDone++;
}

int Mine::getClearMine(){
    return m_clearDone;
}
void Mine::setMineNbr(int mineNbr)
{
    m_mineNbr = mineNbr;
}

int Mine::getMineNbr()
{
    return m_mineNbr;
}


void Mine::setClearNeeded(int clearNeeded)
{
    m_clearNeeded = clearNeeded ;
}
int Mine::getClearNeeded()
{
    return m_clearNeeded;
}
