#include "Sword.h"

Sword::Sword()
{
    m_name = "Wooden Sword";
    m_damageBoost = 10;
    m_durability = 100;
    m_price = 20;
    addAuthorizedClass("Warrior");
    addAuthorizedClass("Paladin");
}
Sword::Sword(string name, int damageBoost, int durability, int price){
    m_name = name;
    m_damageBoost = damageBoost;
    m_durability = durability;
    m_price = price;
    addAuthorizedClass("Warrior");
    addAuthorizedClass("Paladin");
}
void Sword::displayInformations() const {
    Weapon::displayInformations();
}
