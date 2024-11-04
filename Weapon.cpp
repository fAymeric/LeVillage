#include "Weapon.h"

Weapon::Weapon() {}

void Weapon::setDamageBoost(int damageBoost) {
    m_damageBoost = damageBoost;
}
int Weapon::getDamageBoost() const{
    return m_damageBoost;
}

