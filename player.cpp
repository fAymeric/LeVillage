#include "player.h"
#include "potion.h"
#include <iostream>
Player::Player() {}

void Player::setClasseInt(int classeInt)
{
    m_classeInt = classeInt;
}

void Player::usePotion(potion& potion) {
    m_health += potion.getHeal();
    if (m_health > m_maxHealth) { // Assure-toi que la santé ne dépasse pas le max
        m_health = m_maxHealth;
    }
    cout << "You used a potion and gained " << potion.getHeal() << " health points." << endl;
}
void Player::setClasse(string classe){
    m_classe = classe;
}


