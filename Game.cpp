#include "Game.h"
#include "City.h"
#include "Hostel.h"
#include "Merchant.h"
#include "Mine.h"
#include "Monster.h"
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
Player* Perso1 = new Player;
Sword Sword1;
Stick Stick1;
Shield Shield1;
Potion Potion;


void clearConsolGame() {
    system("cls");
    this_thread::sleep_for(chrono::milliseconds(100));
}

int get_rand_number_mine (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};
Game::Game(){

    string choice;
    int choiceInt;
    while(1){
        cout<<"hello adveturer its time to choose your class..."<<endl;
        cout<<"Warrior : 1"<< endl;
        cout<<"The warrior can equip 2 swords but can't equip shield or stick."<<endl;
        cout<<"You also begin your adventure with 50% more power than the other class."<<endl;
        cout<<"Wizzard : 2"<< endl;
        cout<<"The wizzard can equip one stick but can't equip shield or sword."<<endl;
        cout<< "You can also dodge in fight."<<endl;
        cout<<"Paladin : 3"<< endl;
        cout<<"The paladin can equip one sword and one shield but can't equip stick."<<endl;
        cin >> choice;
        clearConsolGame();
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
    while (1){
        Hostel* Hostel1 = new Hostel;
        Merchant* Merchant1 = new Merchant;
        Mine* Mine1 = new Mine;
        City* City1 = new City;
        Building* Building1 = new Building;
        City1->getRandName();
        Building1->randomBuildingNbr();
        Mine1->setMineNbr(get_rand_number_mine(1,5));
        cout<< "You are in the bright city of "<<City1->getCityName()<<endl;
        Building1->displayBuilding();
        cout<<"- "<<Mine1->getMineNbr()<< " mines that you will have to clear."<<endl;
        cout<<"This city is in a big danger... You'll have to destroy all "<<Mine1->getMineNbr()<< " mines to go to the next city..."<<endl;

        while (1){
            cout<<"Now what you want to do ?"<<endl;
            cout<<"Check stats : 1"<< endl;
            cout<<"Check inventory : 2"<< endl;
            cout<<"Drink potions : 3"<< endl;
            cout<<"End Simulation : 4"<<endl;
            cout<<"Equip Weapon : 5" << endl;
            cout<<"Go to Hostel : 6" << endl;
            cout<<"Go to Mine : 7 "<<"|| You have "<<Mine1->getClearMine()<<" / "<<Mine1->getMineNbr()<<" mine done."<<endl;
            cout<<"Change city : 9"<<endl;
            cin>>choice;
            if ( choice == "1" || choice == "2" || choice == "3"|| choice=="4" || choice == "5"|| choice == "6"|| choice == "7"|| choice=="8"){
                if (choice=="9"){
                    if ((Mine1->getClearMine()==Mine1->getMineNbr())){
                        delete Mine1;
                        delete Hostel1;
                        delete Merchant1;
                        delete City1;
                        delete Building1;
                    }else{
                        cout<<" You still have "<<Mine1->getMineNbr()<<" mines to clear before moving..."<<endl;
                    }
                }
                if ( choice == "1"){
                    Perso1->DisplayInformations();
                    Merchant1->sellMerchandise(*Perso1);
                }
                if (choice == "2"){
                    Perso1->showInventory();
                }
                if ( choice == "3"){
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
                    Hostel1->setResetLife(Perso1->GetMaxHealt());
                    if (Hostel1->resetLifeToMax(*Perso1, *Perso1)) {
                        cout << "You stayed at the hostel and paid 10 gold. Your health is now " << Perso1->GetHealth() << endl;
                    } else {
                        cout << "You don't have enough gold to stay at the hostel." << endl;
                    }
                }
                if (choice =="7"){
                    if (Mine1->getClearMine()==Mine1->getMineNbr()){
                        cout<<"There is no mine left... You saved this city"<<endl;
                        cout<<"Do you want to go save another city ?"<<endl;
                        cout<<"1 : Yes"<<endl;
                        cout<<"2 : No"<<endl;
                        cin>>choiceInt;
                        switch(choiceInt){
                        case 1:
                            delete Mine1;
                            break;
                        }

                    }else{
                        cout << "You enter into a mine and you will fight with " << Mine1->MonsterOnMine() << " monster !" << endl;
                        for (int j=0; j<Mine1->MonsterOnMine(); j++){
                            Monster Goule;
                            cout<<"You encounter a goule, the goule "<<j+1<<" went to have a fight"<<endl;
                            while(1){
                                cout<<"Hit : 1"<< endl;
                                cout<<"Drink Potion : 2"<< endl;
                                cout<<"Nothing : 3"<< endl;
                                cin >> choice;
                                if (choice == "1" || choice == "2" || choice == "3"){
                                    if (choice == "1"){
                                        clearConsolGame();
                                        Perso1->HitCharactere(Goule);
                                        cout<<Goule.GetName()<< j+1 <<" take damage : -"<<Perso1->GetAttack()/Goule.GetDefense()<<endl;
                                        Goule.HitCharactere(*Perso1);
                                        cout<<Perso1->GetName()<<" take damage : -"<<Goule.GetAttack()-Perso1->GetDefense()<<endl;
                                        cout<<Perso1->GetName()<<" life : "<< Perso1->GetHealth()<<"/"<<Perso1->GetMaxHealt()<<endl;
                                        cout<<Goule.GetName()<< j+1 <<" life : "<<Goule.GetHealth() <<"/"<<Goule.GetMaxHealt()<<endl;
                                    }
                                    if (choice =="2"){
                                        clearConsol();
                                        Perso1->usePotion(Potion);
                                        Perso1->removeItemToInventory(&Potion);
                                        cout<<Perso1->GetName()<<" recovery : +"<<Potion.getHeal()<<endl;
                                        Goule.HitCharactere(*Perso1);
                                        cout<<Perso1->GetName()<<" take damage : -"<<Goule.GetAttack()-Perso1->GetDefense()<<endl;
                                        cout<<Goule.GetName()<< j+1 <<" life : "<< Goule.GetMaxHealt()<<"/"<<Goule.GetHealth()<<endl;

                                    }
                                    if (choice == "3"){
                                        clearConsolGame();
                                        Goule.HitCharactere(*Perso1);
                                        cout<<Perso1->GetName()<<" take damage : -"<<Goule.GetAttack()-Perso1->GetDefense()<<endl;
                                        cout<<Perso1->GetName()<<" life : "<< Perso1->GetMaxHealt()<<"/"<<Perso1->GetHealth()<<endl;
                                        cout<<Goule.GetName()<< j+1 <<" life : "<< Goule.GetMaxHealt()<<"/"<<Goule.GetHealth()<<endl;
                                    }
                                }
                                if (Perso1->GetHealth()<=0){
                                    break;
                                }
                                if (Goule.GetHealth()<=0){
                                    Perso1->SetGold(Perso1->GetGold()+Goule.GetGold());
                                    break;
                                }
                            }
                            if (Perso1->GetHealth()<=0){
                                clearConsolGame();
                                cout<<"You are dead"<<endl;
                                break;
                            }
                        }
                        Mine1->MineLevelUp();
                        Mine1->clearMine() ;
                    }
                    }

                if (choice == "8"){
                    while (1){
                        cout << "What item do you want to unequip ? "<< endl;
                        cout<<"(You need the full name of the Item without space ex : For Wooden Sword -> WoodenSword)"<<endl;
                        cin >> choice;
                        if (choice == "WoodenSword"||choice == "IronSword" || choice == "DragonSlayer" || choice == "ShadowBlade"||choice == "WoodenShield"||choice == "IronShield" || choice == "TheDefender" || choice == "Astralia"||choice == "WoodenStick"||choice == "GreyStick" || choice == "TheDSKOne" || choice == "TheMysteriousOne") {
                            if (choice == "WoodenSword") {
                                Perso1->unequipSword(&Sword1);
                            }
                            if (choice == "IronSword") {
                                Perso1->unequipSword(sword2);
                            }
                            if (choice == "DragonSlayer") {
                                Perso1->unequipSword(sword3);
                            }
                            if (choice == "ShadowBlade") {
                                Perso1->unequipSword(sword4);
                            }
                            if (choice == "WoodenShield") {
                                Perso1->unequipShield(&Shield1);
                            }
                            if (choice == "IronShield") {
                                Perso1->unequipShield(shield2);
                            }
                            if (choice == "TheDefender") {
                                Perso1->unequipShield(shield3);
                            }
                            if (choice == "Astralia") {
                                Perso1->unequipShield(shield4);
                            }
                            if (choice == "WoodenStick") {
                                Perso1->unequipStick(&Stick1);
                            }
                            if (choice == "GreyStick") {
                                Perso1->unequipStick(stick2);
                            }
                            if (choice == "TheDSKOne") {
                                Perso1->unequipStick(stick3);
                            }
                            if (choice == "TheMysteriousOne") {
                                Perso1->unequipStick(stick4);
                            }
                        }else{
                            cout << "This weapon doesn't exist..."<<endl;
                        }
                        break;
                    }
                }
            }
        }
        delete Perso1;
    }

};

// to do : faire en sorte si possible que le joueur équipe qu'une épée si il en a qu'une dans l'inventaire (éviter la duplication)
// ajouter l'esquive aux batons
