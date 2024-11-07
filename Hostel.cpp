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
bool Hostel::resetLifeToMax(Character& character, Player& player) {
   if (player.payGold(m_stayCost)) {
        character.SetHealth(m_resetLife);
       return true;
   }
   return false;
}

void Hostel::setHostelNbr(int hostelNbr)
{
    m_hostelNbr = hostelNbr;
}

int Hostel::getHostelNbr()
{
    return m_hostelNbr;
}
