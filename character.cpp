#include "character.h"
#include <iostream>

using namespace std;

Character::Character() {
};

void Character::SetName(string nameP){
    m_name = nameP ;
};

string Character::GetName()
{
    return m_name;
};

void Character::SetAttack(int attack){
    m_attack = attack;
};

int Character::GetAttack()
{
    return m_attack;
};

void Character::SetHealth(int health){
    m_health = health;
};

int Character::GetHealth()
{
    return m_health;
};

void Character::SetGold(int gold){
    m_gold = gold;
};

int Character::GetGold()
{
    return m_gold;
};

void Character::SetDefense(int defense){
    m_defense = defense;
};

int Character::GetDefense()
{
    return m_defense;
};

void Character::DisplayInformations(){
    cout<< "Your name : "<<m_name<<endl;
    cout << "Your health : "<< m_health <<endl;
}


