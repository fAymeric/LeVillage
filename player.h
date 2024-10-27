#ifndef PLAYER_H
#define PLAYER_H
#include "character.h"
#include <string>
using namespace std;

class Player : public Character
{
    string m_classe;
    int m_classeInt;
public:
    Player();
    void setRandStats();

    void displayInformations();
};

#endif // PLAYER_H
