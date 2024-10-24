#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player
{
    string m_classe;
    int m_classeInt;
public:
    Player();
    void setRandStats();

    void displayInformations();
};

#endif // PLAYER_H
