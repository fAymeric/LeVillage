#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

using namespace std;

class Character
{
protected:
    string m_name;
    int m_attack;
    int m_health;
    int m_gold;
    int m_defense;

public:
    Character();

    void SetName(string name);

    void SetAttack(int attack);

    void SetHealth(int health);

    void SetGold(int Gold);

    void SetDefense(int Defense);

};

#endif // CHARACTER_H
