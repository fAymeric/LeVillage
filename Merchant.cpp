#include "Merchant.h"
#include "Player.h"
#include <iostream>

Sword* sword1 = new Sword("Iron Sword", 20, 100, 45);
Sword* sword2 = new Sword("Dragon Slayer", 70, 100, 200);
Sword* sword3 = new Sword("Shadow Blade", 60, 100, 140);
Shield* shield1 = new Shield("Iron Shield", 20, 100, 35);
Shield* shield2 = new Shield("The Defender", 30, 100, 110);
Shield* shield3 = new Shield("Astralia", 45, 100, 350);
Stick* stick1 = new Stick("Grey stick",15,100,100);// need to add dodge chance
Stick* stick2 = new Stick("The DSK's one",15,100,250);
Stick* stick3 = new Stick("The mysterious One",15,100,500);

Merchant::Merchant() {
    merchandiseSword.push_back(*sword1);
    merchandiseSword.push_back(*sword2);
    merchandiseSword.push_back(*sword3);
    merchandiseShield.push_back(*shield1);
    merchandiseShield.push_back(*shield2);
    merchandiseShield.push_back(*shield3);
    merchandiseStick.push_back(*stick1);
    merchandiseStick.push_back(*stick2);
    merchandiseStick.push_back(*stick3);
    for (int i = 0; i < 5; ++i) {
        Potion potion;
        merchandisePotion.push_back(potion);
    }
}
Weapon Weapon;

void Merchant::sellMerchandise(Player& player)
{
    int choice;
    while (1) {
        cout << "What do you want to see, adventurer?" << endl;
        cout << "1: Potions" << endl;
        cout << "2: Swords" << endl;
        cout << "3: Shields" << endl;
        cout << "4: Sticks" << endl;
        cout << "5: Exit" << endl;
        cin >> choice;
        switch (choice) {
        case 1: cout << "I have these potions for you:" << endl;
            for (size_t i = 0; i < merchandisePotion.size(); ++i) {
                cout << "Potion " << i+1 << ": " << merchandisePotion[i].getItemName() << " - " << merchandisePotion[i].getPrice() << " gold" << endl;
            }
            cout << "Enter the number of the potion you want to buy (or 6 to cancel): "<<endl;
            cin >> choice;
            if (choice > 0 && choice <= merchandisePotion.size()) {
                Potion potion = merchandisePotion[choice-1];
                if (player.payGold(potion.getPrice())) {
                    player.addPotionToInventory(potion);
                    merchandisePotion.erase(merchandisePotion.begin() + (choice));
                    cout << "You bought a " << potion.getItemName() << "!" << endl;
                } else {
                    cout << "You don't have enough gold!" << endl;
                }
            } break;
        case 2: cout << "I have these swords for you:" << endl;
            for (size_t i = 0; i < merchandiseSword.size(); ++i) {
                cout << "Sword " << i+1 << ": " << merchandiseSword[i].getItemName() << " - " << merchandiseSword[i].getPrice() << " gold" << endl; merchandiseSword[i].displayInformations();
            }
            cout << "Enter the number of the sword you want to buy (or 0 to cancel): ";
            cin >> choice;
            if (choice > 0 && choice <= merchandiseSword.size()) {
                Sword sword = merchandiseSword[choice-1];
                if (player.payGold(sword.getPrice()))
                    merchandiseSword.erase(merchandiseSword.begin() + (choice - 1));
                    cout << "You bought a " << sword.getItemName() << "!" << endl;
                } else {
                    cout << "You don't have enough gold! " << endl;
                }
            break;
        case 3:
            cout << "I have these shields for you:" << endl;
            for (size_t i = 0; i < merchandiseShield.size(); ++i) {
                cout << "Shield " << i+1 << ": " << merchandiseShield[i].getItemName() << " - " << merchandiseShield[i].getPrice() << " gold" << endl; merchandiseShield[i].displayInformations(); }
            cout << "Enter the number of the shield you want to buy (or 0 to cancel): ";
            cin >> choice;
            if (choice > 0 && choice <= merchandiseShield.size()) { Shield shield = merchandiseShield[choice-1];
                if (player.payGold(shield.getPrice())) {
                    merchandiseShield.erase(merchandiseShield.begin() + (choice - 1));
                    cout << "You bought a " << shield.getItemName() << "!" << endl;
                } else {
                    cout << "You don't have enough gold!" << endl;
                }
            }
            break;
        case 4:
            cout << "I have these sticks for you:" << endl;
            for (size_t i = 0; i < merchandiseStick.size(); ++i) {
                cout << "Stick " << i+1 << ": " << merchandiseStick[i].getItemName() << " - " << merchandiseStick[i].getPrice() << " gold" << endl; merchandiseStick[i].displayInformations();
            }
            cout << "Enter the number of the stick you want to buy (or 0 to cancel): ";
            cin >> choice;
            if (choice > 0 && choice <= merchandiseStick.size()) {
                Stick stick = merchandiseStick[choice-1];
                if (player.payGold(stick.getPrice())) {
                    merchandiseStick.erase(merchandiseStick.begin() + (choice - 1));
                    cout << "You bought a " << stick.getItemName() << "!" << endl;
                } else {
                    cout << "You don't have enough gold!" << endl;
                }
            }
            break;
        case 5:
            return;
        }
    }
}
