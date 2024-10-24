#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

using namespace std;

class Character
{
    string m_name;
    int m_attack;
    int m_health;
    int m_gold;
    int m_defense;
    const int m_maxHealth ;
public:
    Character();


    void SetName(string name);

    void SetAttack(int attack);

    void SetHealth(int health);

    const int SetMaxHealt(int maxHealth);

    void SetGold(int Gold);

    void SetDefense(int Defense);
};

#endif // CHARACTER_H
