#include "Inventory.h"
#include <cstddef>
#include <iostream>
#include "Potion.h"
using namespace std;

Inventory::Inventory() {
    for (int i = 0; i < 5; ++i) {
        Potion potion;
        Potions.push_back(potion);
    }
}

void Inventory::addPotion(Potion& Potion) {
    Potions.push_back(Potion);
}

void Inventory::removePotion(Potion& Potion){
    Potions.pop_back();
}

void Inventory::displayInventory() {
    cout << "Inventory contains:" << endl;
    for (size_t i = 0; i < Potions.size(); ++i) {
        cout << "Potion " << i+1 << ": " << Potions[i].getItemName()<< endl;
    }
}
