#include "Potion.h"


void Potion::setHeal(int heal){
    m_heal= heal;
}

int Potion::getHeal() const{
    return m_heal;
}

Potion::Potion() {
    m_name = "Heal potion";
    m_heal = 50;
    m_price = 30;
    m_durability = 1;
    addAuthorizedClass("Warrior");
    addAuthorizedClass("Paladin");
    addAuthorizedClass("Wizzard");
}
