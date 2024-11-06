#ifndef MERCHANT_H
#define MERCHANT_H

#include "Player.h"
#include "Potion.h"
#include "Shield.h"
#include "Stick.h"
#include "Sword.h"
class Merchant
{
    vector<Potion> merchandisePotion;
    vector<Sword> merchandiseSword;
    vector<Shield> merchandiseShield;
    vector<Stick> merchandiseStick;
public:
    Merchant();
    void sellMerchandise(Player &player);
};

#endif // MERCHANT_H
