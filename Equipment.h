#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "Item.h"
class Equipment
{
    vector<Item> equipedItems;
public:
    Equipment();
    void addEquipment(Item* Item);
    void displayEquipment();
    bool checkEquipment(Item* Item);
    void removeEquipment(Item* Item);
};

#endif // EQUIPMENT_H
