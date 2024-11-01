#include "potion.h"


void potion::setHeal(int heal){
    m_heal= heal;
}

int potion::getHeal(){
    return m_heal;
}

potion::potion() {
    m_name = "Heal potion";
    m_heal = 50;
    m_price = 30;
    m_durability = 1;
}
