#include "Player.h"
#include "Equipment.h"
#include "Potion.h"
#include "Shield.h"
#include "Stick.h"
#include "Item.h"
#include "Sword.h"
#include <iostream>
Player::Player() {}

int carrySwordNumber = 0;
int carryStickNumber = 0;
int carryShieldNumber = 0;
int inventoryPotion = 5;
int choice;
Sword sword;

bool Player::payGold(int amount){
    if (m_gold >= amount) {
        m_gold -= amount;
        return true;
    }
    return false;
}

int get_rand_number_dodge (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};


//there is the unequip system
void Player::unequipSword(Sword* sword) {
    if (carrySwordNumber >0){
        if (!equipment.checkEquipment(sword)) {
            cout << "You don't have this sword equiped." << endl;
            return;
        }
        cout << "You unequip " << sword->getItemName() << ". You loose "<< sword->getDamageBoost() << " damage. You're dealing "<< m_attack << " damage now."  << endl;
        m_attack -= sword->getDamageBoost();
        carrySwordNumber--;
        equipment.removeEquipment(sword);
        inventory.addItem(sword);
    }else{
        cout<<"You have nothing to unequip..."<<endl;
    }
}
void Player::unequipStick(Stick* stick) {
    if (carryStickNumber >0){
        if (!equipment.checkEquipment(stick)) {
            cout << "You don't have this stick equiped." << endl;
            return;
        }
        cout << "You unequip " << stick->getItemName() << ". You loose "<< stick->getDamageBoost() << " damage. You're dealing "<< m_attack << " damage now."   << endl;
        m_attack -= stick->getDamageBoost();
        carryStickNumber--;
        equipment.removeEquipment(stick);
        inventory.addItem(stick);
    }else{
        cout<<"You have nothing to unequip..."<<endl;
    }
}

void Player::usePotion(Potion& Potion) {
    if (Potion.checkAuthorisations(m_name)){
        if (inventoryPotion>0){
            m_health += Potion.getHeal();
            if (m_health > m_maxHealth) {
                m_health = m_maxHealth;
            }
            cout << "You used a potion and gained " << Potion.getHeal() << " health points." << endl;
            inventoryPotion--;
        } else {
            cout << "You don't have enough potions." << endl;
        }
    }
}

void Player::unequipShield(Shield* shield) {
    if (carryShieldNumber >0){
        if (!equipment.checkEquipment(shield)) {
            cout << "You don't have this shield equiped." << endl;
            return;
        }
        cout << "You unequip " << shield->getItemName() << ". You loose "<< shield->getBoostDefense() << " defense. You have "<< m_defense << " defense now."   << endl;
        m_attack -= shield->getBoostDefense();
        carryShieldNumber--;
        equipment.removeEquipment(shield);
        inventory.addItem(shield);
    }else{
        cout<<"You have nothing to unequip..."<<endl;
    }
}

//and there the equip system
void Player::carrySword(Sword* sword) {
    if (!inventory.checkItem(sword)) {
        cout << "You don't have this sword in your inventory." << endl;
        return;
    }
    if (m_name == "Warrior"){
        if (carrySwordNumber<2){
            if (sword->checkAuthorisations(m_name)){
                m_attack += sword->getDamageBoost();
                cout << "You're carrying " << sword->getItemName() << ". This sword is boosting your damage. You're dealing "<< m_attack << " damage now." << endl;
                inventory.removeItem(sword);
                equipment.addEquipment(sword);
                carrySwordNumber += 1;
            } else {
                cout << "You are not authorized to carry this sword." << endl;
            }
        }else{
            cout<< "You are already carrying two Swords... First you have to unequiped one of your weapon to carry another one. "<<endl;
        }
    }else{
        if (carrySwordNumber<1){
            if (sword->checkAuthorisations(m_name)){
                m_attack += sword->getDamageBoost();
                cout << "You're carrying " << sword->getItemName() << ". This sword is boosting your damage. You're dealing "<< m_attack << " damage now." << endl;
                carrySwordNumber += 1;
            } else {
                cout << "You are not authorized to carry this sword." << endl;
            }
        }else{
            cout<< "You are already carrying a swords... First you have to unequiped your sword to carry another one. "<<endl;
        }
    }


}
void Player::carryStick(Stick* stick) {
    if (!inventory.checkItem(stick)) {
        cout << "You don't have this stick in your inventory." << endl;
        return;
    }
    if (carryStickNumber<1){
        if (stick->checkAuthorisations(m_name)){
            m_attack += stick->getDamageBoost();
            m_dodge += stick->getDodgeBoost();
            cout << "You're carrying " << stick->getItemName() << ". This stick is boosting your damage. You're dealing "<< m_attack << " damage now." << endl;
            cout << "This stick is also boosting your chance to dodge. You have now "<<m_dodge<< "chance / 5 to dodge the ennemy attack"<<endl;
            inventory.removeItem(stick);
            equipment.addEquipment(stick);
            carryStickNumber +=1;
        } else {
            cout << "You are not authorized to carry this stick." << endl;
        }
    }else {
        cout<< "You are already carrying a weapon... First you have to unequiped your weapon to carry another one. "<<endl;
    }
}

void Player::carryShield(Shield *shield) {
    if (!inventory.checkItem(shield)) {
        cout << "You don't have this shield in your inventory." << endl;
        return;
    }
    if (carryShieldNumber<1){
        if (shield->checkAuthorisations(m_name)){
            m_defense += shield->getBoostDefense();
            cout << "You're carrying " << shield->getItemName() << ". This shield is boosting your defense. You have  "<< m_defense << " defense now." << endl;
            inventory.removeItem(shield);
            equipment.addEquipment(shield);
            carryShieldNumber+=1;
        } else {
            cout << "You are not authorized to carry this shield." << endl;
        }
    }else {
        cout<< "You are already carrying a shield... First you have to unequiped your shield to carry another one. "<<endl;
    }
}

void Player::addItemToInventory(Item* Item) {
    if (Item->getItemName()=="Heal potion"){
        inventoryPotion++;
    }
    inventory.addItem(Item);
}
void Player::removeItemToInventory(Item* Item) {
    inventory.removeItem(Item);
}


void Player::showInventory() {
    inventory.displayInventory();
}

void Player::displayEquipment(){
    equipment.displayEquipment();
}

bool Player::dodgeAttack(){
    if (m_dodge == get_rand_number_dodge(1, 5)){
        return true;
    }
    return false;
}

