#include "player.h"
#include "character.h"

Player::Player() {}

void Player::setClasseInt(int classeInt)
{
    m_classeInt = classeInt;
}
void Player::setClasse(string classe){
    m_classe = classe;
}

void takeSword(Sword* ptr_sword){
    m_sword = ptr_sword;
    m_attack += ptr_sword->getAttack();
}

void dropSword(){
    m_attack -= m_sword->getAttack();
    m_sword = nullptr;
}

void takeShield(Shield* ptr_shield){
    m_shield = ptr_shield;
    m_defense += m_shield->getDefense();
}

void dropShield(){
    m_defense -= m_shield->getDefense();
    m_shield = nullptr;
}
