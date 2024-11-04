#include "Hostel.h"
#include "Character.h"

Hostel::Hostel() {
}

void Hostel::setResetLife(int resetLife)
{
    m_resetLife = resetLife;
}

int Hostel::getResetLife()
{
    return m_resetLife;
}
void Hostel::resetLifeToMax(Character& character) {
    character.SetHealth(m_resetLife);
}
