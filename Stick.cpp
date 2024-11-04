#include "Stick.h"

Stick::Stick() {
    m_name = "Wooden Stick";
    m_damageBoost = 10;
    m_durability = 100;
    m_price = 20;
    addAuthorizedClass("Wizzard");
}
