#include "Equipment.h"
#include <iostream>

Equipment::Equipment() {}

void Equipment::addEquipment(Item* Item){
    equipedItems.push_back(*Item);
}

void Equipment::displayEquipment(){
    cout << "Equiped Items :" << endl;
    for (size_t i = 0; i < equipedItems.size(); ++i) {
        cout << "Item " << i+1 << ": " << equipedItems[i].getItemName()<< endl;
    }
}

bool Equipment::checkEquipment(Item* Item) {
    for (size_t i = 0; i < equipedItems.size(); ++i) {
        if (Item->getItemName()== equipedItems[i].getItemName()){
            return true;
        }
    }
    return false;
}

void Equipment::removeEquipment(Item* Item){
    for (size_t i=0; i< equipedItems.size(); ++i){
        if (Item->getItemName() == equipedItems[i].getItemName()) {
            equipedItems.erase(equipedItems.begin() + i);
            break;
        }
    }
}
