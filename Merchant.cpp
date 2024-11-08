#include "Merchant.h"
#include "Player.h"
#include <iostream>



Merchant::Merchant() {
    merchandiseSword.emplace_back("Iron Sword", 20, 100, 45);
    merchandiseSword.emplace_back("Dragon Slayer", 70, 100, 200);
    merchandiseSword.emplace_back("Shadow Blade", 60, 100, 140);
    merchandiseShield.emplace_back("Iron Shield", 20, 100, 35);
    merchandiseShield.emplace_back("The Defender", 30, 100, 110);
    merchandiseShield.emplace_back("Astralia", 45, 100, 350);
    merchandiseStick.emplace_back("Grey Stick", 10, 100, 100, 1);
    merchandiseStick.emplace_back("The DSK One", 15, 100, 250, 2);
    merchandiseStick.emplace_back("The Mysterious One", 20, 100, 500, 3);
    for (int i = 0; i < 5; ++i) {
        Potion potion;
        merchandisePotion.push_back(potion);
    }
}

int get_rand_number_Merchant (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};

void Merchant::setMerchantNbr(int merchantNbr)
{
    m_merchantNbr = merchantNbr;
}


int Merchant::getMerchantNbr()
{
    return m_merchantNbr;
}


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
            cout << "Enter the number of the potion you want to buy (and press 0 to exit) : "<<endl;
            cin >> choice;
            if (choice > 0 && choice <= merchandisePotion.size()) {
                Potion potion = merchandisePotion[choice-1];
                if (player.payGold(potion.getPrice())) {
                    player.addItemToInventory(&potion);
                    merchandisePotion.erase(merchandisePotion.begin() + (choice-1));
                    cout << "You bought a " << potion.getItemName() << "!" << endl;
                } else {
                    cout << "You don't have enough gold!" << endl;
                }
            } break;
        case 2: cout << "I have these swords for you:" << endl;
            for (size_t i = 0; i < merchandiseSword.size(); ++i) {
                cout << "Sword " << i+1 << ": " << merchandiseSword[i].getItemName() << " - " << merchandiseSword[i].getPrice() << " gold" << endl;
                cout<<"-----------------------------------"<<endl;
                merchandiseSword[i].displayInformations();cout<<endl;
                cout<<"-----------------------------------"<<endl;
            }
            cout << "Enter the number of the sword you want to buy (and press 0 to exit) : ";
            cin >> choice;
            if (choice > 0 && choice <= merchandiseSword.size()) {
                Sword sword = merchandiseSword[choice-1];
                if (player.payGold(sword.getPrice())){
                    player.addItemToInventory(&sword);
                    merchandiseSword.erase(merchandiseSword.begin() + (choice-1));
                    cout << "You bought a " << sword.getItemName() << "!" << endl;
                } else {
                    cout << "You don't have enough gold! " << endl;
                }
            }
            break;
        case 3:
            cout << "I have these shields for you:" << endl;
            for (size_t i = 0; i < merchandiseShield.size(); ++i) {
                cout << "Shield " << i+1 << ": " << merchandiseShield[i].getItemName() << " - " << merchandiseShield[i].getPrice() << " gold" << endl;
                cout<<"------------------------------------"<<endl;
                merchandiseShield[i].displayInformations();cout<<endl;
                cout<<"------------------------------------"<<endl;
            }
            cout << "Enter the number of the shield you want to buy (and press 0 to exit) : ";
            cin >> choice;
            if (choice > 0 && choice <= merchandiseShield.size()) {
                Shield shield = merchandiseShield[choice-1];
                if (player.payGold(shield.getPrice())) {
                    player.addItemToInventory(&shield);
                    merchandiseShield.erase(merchandiseShield.begin() + (choice-1));
                    cout << "You bought a " << shield.getItemName() << "!" << endl;
                } else {
                    cout << "You don't have enough gold!" << endl;
                }
            }
            break;
        case 4:
            cout << "I have these sticks for you:" << endl;
            for (size_t i = 0; i < merchandiseStick.size(); ++i) {
                cout << "Stick " << i+1 << ": " << merchandiseStick[i].getItemName() << " - " << merchandiseStick[i].getPrice() << " gold" << endl;
                cout<<"---------------------------------------------------------"<<endl;
                merchandiseStick[i].displayInformations(); cout<<"+ "<<merchandiseStick[i].getDodgeBoost()<<"Chance to dodge ||"<<endl;
                cout<<"---------------------------------------------------------"<<endl;
            }
            cout << "Enter the number of the stick you want to buy (and press 0 to exit) : ";
            cin >> choice;
            if (choice > 0 && choice <= merchandiseStick.size()) {
                Stick stick = merchandiseStick[choice-1];
                if (player.payGold(stick.getPrice())) {
                    player.addItemToInventory(&stick);
                    merchandiseStick.erase(merchandiseStick.begin() + (choice-1));
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
