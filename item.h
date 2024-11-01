#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item
{
protected :
    string m_name;
    int m_price;
    int m_durability;

public:
    Item();
    void setItemName(string name);
    void setPrice(int price);
    void setDurability(int durability);
    string getItemName();
    int getPrice();
    int getDurability();
};

#endif // ITEM_H
