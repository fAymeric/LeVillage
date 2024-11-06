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
