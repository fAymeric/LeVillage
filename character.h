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
    int m_maxHealth;

public:

    Character();
    void SetName(string name);
    void SetAttack(int attack);
    void SetHealth(int health);
    void SetMaxHealt(int maxHealth);
    void SetGold(int Gold);
    void SetDefense(int Defense);
    string GetName();
    int GetAttack();
    int GetHealth();
    int GetMaxHealt();
    int GetGold();
    int GetDefense();
    void DisplayInformations();
    void HitCharactere();
};

#endif // CHARACTER_H
