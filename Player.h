#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include "Equipment.h"
#include "Inventory.h"
#include "Potion.h"
#include "Shield.h"
#include "Stick.h"
#include "Sword.h"
#include <string>
using namespace std;

class Player : public Character
{
protected:
    Inventory inventory;
    Equipment equipment;
    string m_classe;
    int m_dodge;
public:
    Player();
    void usePotion(Potion& potion);
    void addItemToInventory(Item* Item);
    void removeItemToInventory(Item* Item);
    void showInventory();
    void carrySword (Sword* sword);
    void carryStick (Stick* stick);
    void carryShield (Shield* shield);
    void usingHostelService();
    bool payGold(int amount);
    void sellItem();
    void unequipSword(Sword* sword);
    void unequipStick(Stick* stick);
    void unequipShield(Shield* shield);
    bool dodgeAttack();
    void displayEquipment();
};

#endif // PLAYER_H
