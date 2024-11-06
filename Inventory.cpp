#include "Inventory.h"
#include <cstddef>
#include <algorithm>
#include <iostream>
#include "Potion.h"
#include "Shield.h"
#include "Stick.h"
#include "Sword.h"
using namespace std;

string choice;

Inventory::Inventory() {
    Potion Potion;
    Sword Sword;
    Shield Shield;
    Stick Stick;
    for (int i = 0; i < 5; ++i) {
        Items.push_back(Potion);
    }
    Items.push_back(Sword);
    Items.push_back(Shield);
    Items.push_back(Stick);
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

bool Inventory::checkItem(Item* Item) {
    for (size_t i = 0; i < Items.size(); ++i) {
        if (Item->getItemName()== Items[i].getItemName()){
            return true;
        }
    }
    return false;
}
