#include "Inventory.h"
#include <cstddef>
#include <iostream>
#include "Potion.h"
using namespace std;

Inventory::Inventory() {
    for (int i = 0; i < 5; ++i) {
        Potion Potion;
        Items.push_back(Potion);
    }
}

void Inventory::addItem(Item* Item) {
    Items.push_back(*Item);
}

void Inventory::removeItem(Item* Item){
    Items.pop_back();
}

void Inventory::displayInventory() {
    cout << "Inventory contains:" << endl;
    for (size_t i = 0; i < Items.size(); ++i) {
        cout << "Potion " << i+1 << ": " << Items[i].getItemName()<< endl;
    }
}
