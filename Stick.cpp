#include "Stick.h"

Stick::Stick() {
    m_name = "Wooden Stick";
    m_damageBoost = 10;
    m_durability = 100;
    m_price = 20;
    addAuthorizedClass("Wizzard");
}
Stick::Stick(string name, int damageBoost, int durability, int price, int dodgeBoost){
    m_name = name;
    m_damageBoost = damageBoost;
    m_durability = durability;
    m_price = price;
    m_dodgeBoost = dodgeBoost;
    addAuthorizedClass("Wizzard");
}

void Stick::setDodgeBoost(int dodgeBoost)
{
    m_dodgeBoost = dodgeBoost;
}

int Stick::getDodgeBoost(){
    return m_dodgeBoost;
}

void Stick::displayInformations() const {
    Weapon::displayInformations();
}
