#include <cstdlib>
#include <iostream>
#include "Wizzard.h"

using namespace std;

Wizzard::Wizzard() {
    m_name = "Wizzard";
    m_attack = 10;
    m_health = 20;
    m_maxHealth = 120;
    m_gold = 3000;
    m_defense = 5;
}

int get_rand_number_dodge (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};

void Wizzard::setDodge(int dodgingNbr){
    m_dodge = dodgingNbr;
}
void Wizzard::Dodge()
{
    int chanceToDodge = 1;
    setDodge(get_rand_number_dodge(1, 5));
    if (m_dodge == chanceToDodge){
        cout<<"The attack has been dodge"<<endl;
    }
}


