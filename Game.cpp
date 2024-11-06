#include "Game.h"
#include "City.h"
#include "Hostel.h"
#include "Merchant.h"
#include "Paladin.h"
#include "Player.h"
#include "Warrior.h"
#include "Wizzard.h"
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

Sword* sword2 = new Sword("Iron Sword", 20, 100, 45);
Sword* sword3 = new Sword("Dragon Slayer", 70, 100, 200);
Sword* sword4 = new Sword("Shadow Blade", 60, 100, 140);
Shield* shield2 = new Shield("Iron Shield", 20, 100, 35);
Shield* shield3 = new Shield("The Defender", 30, 100, 110);
Shield* shield4 = new Shield("Astralia", 45, 100, 350);
Stick* stick2 = new Stick("Grey Stick",15,100,100);// need to add dodge chance
Stick* stick3 = new Stick("The DSK One",15,100,250);
Stick* stick4 = new Stick("The Mysterious One",15,100,500);

void clearConsol() {
    system("cls");
    this_thread::sleep_for(chrono::milliseconds(100));
}

Game::Game(){

    string choice;
    Player* Perso1 = nullptr;
    while(1){
        cout<<"hello adveturer its time to choose your class..."<<endl;
        cout<<"Warrior : 1"<< endl;
        cout<<"The warrior can equip 2 swords but can't equip shield or stick."<<endl;
        cout<<"Wizzard : 2"<< endl;
        cout<<"The wizzard can equip one stick but can't equip shield or sword."<<endl;
        cout<<"Paladin : 3"<< endl;
        cout<<"The paladin can equip one sword and one shield but can't equip stick."<<endl;
        cin >> choice;
        clearConsol();
        if (choice == "Warrior" || choice == "Wizzard" || choice == "Paladin" || choice == "1" || choice == "2" || choice == "3"){
            if (choice == "Warrior" || choice == "1"){
                Perso1 = new Warrior();
                cout<<"You choose Warrior"<<endl;
                break;
            }
            if (choice == "Wizzard" || choice == "2"){
                Perso1 = new Wizzard();
                cout<<"You choose Wizzard"<<endl;
                break;
            }
            if (choice == "Paladin" || choice == "3"){
                Perso1 = new Paladin();
                cout<<"You choose Paladin"<<endl;
                break;
            }
        }
    }
    City city1;
    city1.getRandName();
    cout<< "You begin your adventure in the bright city of "<<city1.getCityName()<<endl;

    Sword Sword1; // à mettre quand on tombe sur l'épée mais reste là pour les test
    Stick Stick1;
    Shield Shield1;
    Hostel Hostel1;
    Merchant merchant;
    Hostel1.setResetLife(Perso1->GetMaxHealt());

    while (1){
        cout<<"Now what you want to do ?"<<endl;
        cout<<"Check stats : 1"<< endl;
        cout<<"Check inventory : 2"<< endl;
        cout<<"Drink potions : 3"<< endl;
        cout<<"End Simulation : 4"<<endl;
        cout<<"Equip Weapon : 5" << endl;
        cout<<"Go to Hostel : 6" << endl;
        cin>>choice;
        if ( choice == "1" || choice == "2" || choice == "3"|| choice=="4" || choice == "5"|| choice == "6"){
            if ( choice == "1"){
                Perso1->DisplayInformations();
                merchant.sellMerchandise(*Perso1);
            }
            if (choice == "2"){
                Perso1->showInventory();
            }
            if ( choice == "3"){
                Potion Potion;
                Perso1->usePotion(Potion);
                Perso1->removeItemToInventory(&Potion);
            }
            if ( choice == "4"){
                break;
            }
            if ( choice == "5"){
                while (1){
                    cout << "What do you want to equip ? "<< endl;
                    cout<<"(You need the full name of the equipement without space ex : For Wooden Sword -> WoodenSword)"<<endl;
                    cin >> choice;
                    if (choice == "WoodenSword"||choice == "IronSword" || choice == "DragonSlayer" || choice == "ShadowBlade"||choice == "WoodenShield"||choice == "IronShield" || choice == "TheDefender" || choice == "Astralia"||choice == "WoodenStick"||choice == "GreyStick" || choice == "TheDSKOne" || choice == "TheMysteriousOne") {
                        if (choice == "WoodenSword") {
                            Perso1->carrySword(&Sword1);
                        }
                        if (choice == "IronSword") {
                            Perso1->carrySword(sword2);
                        }
                        if (choice == "DragonSlayer") {
                            Perso1->carrySword(sword3);
                        }
                        if (choice == "ShadowBlade") {
                            Perso1->carrySword(sword4);
                        }
                        if (choice == "WoodenShield") {
                            Perso1->carryShield(&Shield1);
                        }
                        if (choice == "IronShield") {
                            Perso1->carryShield(shield2);
                        }
                        if (choice == "TheDefender") {
                            Perso1->carryShield(shield3);
                        }
                        if (choice == "Astralia") {
                            Perso1->carryShield(shield4);
                        }
                        if (choice == "WoodenStick") {
                            Perso1->carryStick(&Stick1);
                        }
                        if (choice == "GreyStick") {
                            Perso1->carryStick(stick2);
                        }
                        if (choice == "TheDSKOne") {
                            Perso1->carryStick(stick3);
                        }
                        if (choice == "TheMysteriousOne") {
                            Perso1->carryStick(stick4);
                        }
                    }else{
                        cout << "This weapon doesn't exist..."<<endl;
                    }
                    break;
                }
            }
            if (choice == "6"){
                if (Hostel1.resetLifeToMax(*Perso1, *Perso1)) {
                   cout << "You stayed at the hostel and paid 10 gold. Your health is now " << Perso1->GetHealth() << endl;
                } else {
                    cout << "You don't have enough gold to stay at the hostel." << endl;
                }
            }
        }
    }
    delete Perso1;
};


