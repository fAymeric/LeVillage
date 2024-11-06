#include "Stick.h"

Stick::Stick() {
    m_name = "Wooden Stick";
    m_damageBoost = 10;
    m_durability = 100;
    m_price = 20;
    addAuthorizedClass("Wizzard");
}
Stick::Stick(string name, int damageBoost, int durability, int price){
    m_name = name;
    m_damageBoost = damageBoost;
    m_durability = durability;
    m_price = price;
    addAuthorizedClass("Wizzard");
}

void Stick::setCarryStickNumber(int carryStickNumber)
{
    m_carryStickNumber = carryStickNumber;
}
void Stick::displayInformations() const {
    Weapon::displayInformations();
}
