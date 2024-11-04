#include "Item.h"
#include <algorithm>
using namespace std;
Item::Item() {}

void Item::setItemName(string name){
    m_name = name;
}
void Item::setPrice(int price){
    m_price = price;
}
void Item::setDurability(int durability){
    m_durability= durability;
}
string Item::getItemName(){
    return m_name;
}
int Item::getPrice(){
    return m_price;
}
int Item::getDurability(){
    return m_durability;
}
void Item::addAuthorizedClass(const string& classe) {
    authorizedClasses.push_back(classe);
}
bool Item::checkAuthorisations(const string& classe)
{
    return find(authorizedClasses.begin(), authorizedClasses.end(), classe) != authorizedClasses.end();
}
