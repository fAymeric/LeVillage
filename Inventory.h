#ifndef INVENTORY_H
#define INVENTORY_H

#include "Potion.h"
#include <vector>
using namespace std;

class Inventory {
public:
    Inventory();
    void addPotion(Potion& Potion);
    void removePotion(Potion& Potion);
    void displayInventory();
private:
    vector<Potion> Potions;
};
#endif // INVENTORY_H
