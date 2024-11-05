#include "Player.h"
#include "Potion.h"
#include "Shield.h"
#include "Stick.h"
#include <iostream>
Player::Player() {}

bool Player::payGold(int amount){
    if (m_gold >= amount) {
        m_gold -= amount;
        return true;
    }
    return false;
}

void Player::usePotion(Potion& Potion) {
    if (Potion.checkAuthorisations(m_name)){
    m_health += Potion.getHeal();
    if (m_health > m_maxHealth) {
        m_health = m_maxHealth;
    }
    cout << "You used a potion and gained " << Potion.getHeal() << " health points." << endl;
    } else {
        cout << "You are not authorized to use this potion." << endl;
    }
}

void Player::carrySword(Sword& sword) {
    if (sword.checkAuthorisations(m_name)){
        m_attack += sword.getDamageBoost();
        cout << "You're carrying " << sword.getItemName() << ". This sword is boosting your damage. You're dealing "<< m_attack << " now." << endl;
    } else {
        cout << "You are not authorized to carry this sword." << endl;
    }
}
void Player::carryStick(Stick& stick) {
    if (stick.checkAuthorisations(m_name)){
        m_attack += stick.getDamageBoost();
        cout << "You're carrying " << stick.getItemName() << ". This sword is boosting your damage. You're dealing "<< m_attack << " now." << endl;
    } else {
        cout << "You are not authorized to carry this stick." << endl;
    }
}

void Player::carryShield(Shield& shield) {
    if (shield.checkAuthorisations(m_name)){
        m_defense += shield.getBoostDefense();
        cout << "You're carrying " << shield.getItemName() << ". This sword is boosting your damage. You're dealing "<< m_defense << " now." << endl;
    } else {
        cout << "You are not authorized to carry this stick." << endl;
    }
}

void Player::addItemToInventory(Item* Item) {
    inventory.addItem(Item);
}
void Player::removeItemToInventory(Item* Item) {
    inventory.removeItem(Item);
}


void Player::showInventory() {
    inventory.displayInventory();
}
