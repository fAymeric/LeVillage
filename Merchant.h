#ifndef MERCHANT_H
#define MERCHANT_H

#include "City.h"
#include "Player.h"
#include "Potion.h"
#include "Shield.h"
#include "Stick.h"
#include "Sword.h"
class Merchant: public City
{
protected:
    int m_merchantNbr;
    vector<Potion> merchandisePotion;
    vector<Sword> merchandiseSword;
    vector<Shield> merchandiseShield;
    vector<Stick> merchandiseStick;
public:
    Merchant();
    void sellMerchandise(Player &player);
    void setMerchantNbr(int merchantNbr);
    int getMerchantNbr();
};

#endif // MERCHANT_H
