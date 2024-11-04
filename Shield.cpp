#include "Shield.h"

Shield::Shield() {
    m_name = "Wooden Shield";
    m_addDefense = 10;
    m_durability = 100;
    m_price = 20;
    addAuthorizedClass("Paladin");
}

void Shield::setBoostDefense(int addDefense)
{
    m_addDefense = addDefense;
}

int Shield::getBoostDefense() const
{
    return m_addDefense;
}


