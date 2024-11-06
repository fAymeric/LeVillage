#include "Shield.h"
#include <iostream>

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

Shield::Shield(string name, int addDefense, int durability, int price){
    m_name = name;
    m_addDefense = addDefense;
    m_durability = durability;
    m_price = price;
    addAuthorizedClass("Paladin");
}

void Shield::setCarryShieldNumber(int carryShieldNumber)
{
    m_carryShieldNumber = carryShieldNumber;
}
void Shield::displayInformations() const {
    cout << "Shield Information: " << "Name: " << m_name << ", Defense Boost: +" << m_addDefense << ", Durability: " << m_durability << ", Price: " << m_price << " gold" << endl;
}
