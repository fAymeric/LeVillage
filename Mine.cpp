#include "Mine.h"

Mine::Mine() {
    m_niveau = 1;
}
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
void Mine::setClearMine(int clearMine){
    m_clearDone = clearMine;
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
