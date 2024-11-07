#include "Monster.h"

Monster::Monster() {
    m_name = "goule";
    m_attack = 10;
    m_health = 60;
    m_maxHealth = 60;
    m_defense = 1;
    m_gold = 50;
}

Monster::Monster(string name, int attack, int health, int defense, int gold){
    m_name = name;
    m_attack = attack;
    m_health = health;
    m_maxHealth = m_health;
    m_defense = defense;
    m_gold = gold;
}
