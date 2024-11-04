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
