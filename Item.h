#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
using namespace std;

class Item
{
protected :
    string m_name;
    int m_price;
    int m_durability;
    vector<string> authorizedClasses;
public:
    Item();
    void setItemName(string name);
    void setPrice(int price);
    void setDurability(int durability);
    string getItemName();
    int getPrice();
    int getDurability();
    void addAuthorizedClass(const string& classe);
    bool checkAuthorisations(const string& classe);
};

#endif // ITEM_H
