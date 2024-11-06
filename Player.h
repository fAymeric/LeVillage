#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include "Inventory.h"
#include "Potion.h"
#include "Shield.h"
#include "Stick.h"
#include "Sword.h"
#include <string>
using namespace std;

class Player : public Character
{
    Inventory inventory;
    string m_classe;
public:
    Player();
    void setRandStats();
    void displayInformations();
    void usePotion(Potion& potion);
    void addItemToInventory(Item* Item);
    void removeItemToInventory(Item* Item);
    void showInventory();
    void carrySword (Sword*);
    void carryStick (Stick* stick);
    void carryShield (Shield* shield);
    void usingHostelService();
    bool payGold(int amount);


};

#endif // PLAYER_H
