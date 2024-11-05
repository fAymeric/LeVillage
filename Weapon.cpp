#include "Weapon.h"
#include <iostream>

Weapon::Weapon() {}

void Weapon::setDamageBoost(int damageBoost) {
    m_damageBoost = damageBoost;
}
int Weapon::getDamageBoost() const{
    return m_damageBoost;
}

void Weapon::displayInformations() const
{
    cout<< "There is the informations of the weapon : "<<"+"<< m_damageBoost<<" Damage add || "<<m_durability<< " Durability || " <<"The price is "<<m_price <<"gold ||"<<endl;
}

