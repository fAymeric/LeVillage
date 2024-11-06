#ifndef INVENTORY_H
#define INVENTORY_H

#include "Potion.h"
#include <vector>
using namespace std;

class Inventory {
public:
    Inventory();
    void addItem(Item* Item);
    void removeItem(Item* Item);
    void displayInventory();
    bool checkItem(Item* Item);
private:
    vector<Item> Items;
};
#endif // INVENTORY_H
