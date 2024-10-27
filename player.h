#ifndef PLAYER_H
#define PLAYER_H
#include "character.h"
#include <string>
using namespace std;

class Player : public Character
{
protected:

public:
    string m_classe;
    int m_classeInt;
    Player();
    void setRandStats();
    void setClasse(string classe);
    void setClasseInt(int classeInt);
    void displayInformations();
};

#endif // PLAYER_H
