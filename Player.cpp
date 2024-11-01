#include "Player.h"
#include "Potion.h"
#include <iostream>
Player::Player() {}

void Player::usePotion(Potion& Potion) {
    m_health += Potion.getHeal();
    if (m_health > m_maxHealth) { // Assure-toi que la santé ne dépasse pas le max
        m_health = m_maxHealth;
    }
    cout << "You used a potion and gained " << Potion.getHeal() << " health points." << endl;
}


void Player::addPotionToInventory(Potion& potion) {
    inventory.addPotion(potion);
}
void Player::removePotionToInventory(Potion& potion) {
    inventory.removePotion(potion);
}


void Player::showInventory() {
    inventory.displayInventory();
}
