#include "item.h"

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
