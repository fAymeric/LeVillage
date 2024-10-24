#include "character.h"

using namespace std;

Character::Character() {}

void Character::SetName(string nameP){
    m_name = nameP ;
};

void Character::SetAttack(int attack){
    m_attack = attack;
};

void Character::SetHealth(int health){
    m_health = health;
};

void Character::SetGold(int gold){
    m_gold = gold;
};

void Character::SetDefense(int defense){
    m_defense = defense;
};
