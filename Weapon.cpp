#include "Weapon.h"
#include <iostream>

Weapon::Weapon() {}

void Weapon::setDamageBoost(int damageBoost) {
    m_damageBoost = damageBoost;
}
int Weapon::getDamageBoost(){
    return m_damageBoost;
}

void Weapon::displayInformations() const
{
    cout<<"|| "<<"+ "<< m_damageBoost<<" Damage || "<<m_durability<< " Durability || ";
}

