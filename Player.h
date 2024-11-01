#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include "Inventory.h"
#include "Potion.h"
#include <string>
using namespace std;

class Player : public Character
{
    Inventory inventory;
public:

    string m_classe;
    Player();
    void setRandStats();
    void displayInformations();
    void usePotion(Potion &potion);
    void addPotionToInventory(Potion& potion);
    void removePotionToInventory(Potion& potion);
    void showInventory();

};

#endif // PLAYER_H
