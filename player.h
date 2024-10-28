#ifndef PLAYER_H
#define PLAYER_H
#include "character.h"
#include <string>
using namespace std;

class Player : public Character
{

protected:

    Shield* m_shield = nullptr;

public:

    string m_classe;
    int m_classeInt;
    Player();
    void setRandStats();
    void setClasse(string classe);
    void setClasseInt(int classeInt);
    void displayInformations();
    void dropShield();
    void takeShield(Shield* ptr_shield);
    void dropSword();
    void takeSword(Sword* ptr_sword);

};

#endif // PLAYER_H
