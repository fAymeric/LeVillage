#include <cstdlib>
#include <iostream>
#include "wizzard.h"

using namespace std;

Wizzard::Wizzard() {}

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
    Wizzard monWizzard;
    monWizzard.setDodge(get_rand_number_dodge(1, 5));
    if (m_dodge == chanceToDodge){
        cout<<"The attack has been dodge"<<endl;
    }else{
        ça perd de la vie;
    }
}
#include "wizzard.h"

