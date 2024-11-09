#include "Game.h"
#include "City.h"
#include "Hostel.h"
#include "Merchant.h"
#include "Mine.h"
#include "Monster.h"
#include "Player.h"
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

Sword* sword2 = new Sword("Iron Sword", 20, 100, 45);
Sword* sword3 = new Sword("Dragon Slayer", 70, 100, 140);
Sword* sword4 = new Sword("Shadow Blade", 60, 100, 100);
Shield* shield2 = new Shield("Iron Shield", 20, 100, 35);
Shield* shield3 = new Shield("The Defender", 30, 100, 100);
Shield* shield4 = new Shield("Astralia", 45, 100, 150);
Stick* stick2 = new Stick("Grey Stick",10,100,100,1);// need to add dodge chance
Stick* stick3 = new Stick("The DSK One",15,100,150,2);
Stick* stick4 = new Stick("The Mysterious One",20,100,200,3);
Sword Sword1;
Stick Stick1;
Shield Shield1;
Potion Potion;
Mine* Mine1 = new Mine;


void clearConsol() {
    system("cls");
    this_thread::sleep_for(chrono::milliseconds(100));
}

int getRandNumber (int min, int max)
{
    return (rand()%(max-min+1)) +min;
}

void Game::Play(Player* Perso1){
    int cityClear = 0;
    string choice;
    int choiceInt;
    while(1){
        clearConsol();
        Mine1->setClearMine(0);
        Hostel Hostel1;
        Merchant Merchant1;
        City City1;
        Building Building1;
        City1.getRandName();
        Mine1->setMineNbr(Building1.get_rand_number_building(1,5));
        Merchant1.setMerchantNbr(Building1.get_rand_number_building(0,5));
        Hostel1.setHostelNbr(Building1.get_rand_number_building(0,5));
        cout<< "Number of city free : "<<cityClear<<" / 3"<<endl;
        if (cityClear == 3){
            cout<<"You freed everyone from the monsters... You are a HERO !!!"<<endl;
            cout<<"Good Job it's the end of the game."<<endl;
            abort();
        }
        cout<< "You are in the bright city of "<<City1.getCityName()<<endl;
        cout<< "In This city you will find"<<endl;
        cout<<"- "<<Merchant1.getMerchantNbr()<< " store where you can find some items to buy.."<<endl;
        cout<<"- "<<Hostel1.getHostelNbr()<< " hostels where you can... sleep... yeah that's all..."<<endl;
        cout<<"- "<<Mine1->getMineNbr()<< " mines that you will have to clear."<<endl;
        cout<<"This city is in a big danger... You'll have to destroy all "<<Mine1->getMineNbr()<< " mines to go to the next city..."<<endl;

        while (1){
            cout<<"Now what you want to do ?"<<endl;
            cout<<"Have a look on you : 1"<< endl;
            cout<<"Go to the main place of the village : 2"<< endl;
            cout<<"Go to Mine : 3 "<<"|| You have "<<Mine1->getClearMine()<<" / "<<Mine1->getMineNbr()<<" mine done."<<endl;
            cout<<"Change city : 4"<< endl;
            cout<<"Exit the Game : 5"<<endl;

            cin>>choice;
            if ( choice == "1" || choice == "2" || choice == "3"|| choice=="4"||choice == "5"){
                clearConsol();
                if (choice=="1"){
                    while(1){ // character informations
                        cout<<"What do you want to see about you ?"<<endl;
                        cout<<"Check stats : 1"<< endl;
                        cout<<"Check inventory : 2"<< endl;
                        cout<<"Exit : 3"<<endl;
                        cin>>choiceInt;
                        if (choiceInt == 3){
                            clearConsol();
                            break;
                        }
                        switch (choiceInt){
                        case 1: //DisplayInformations
                            clearConsol();
                            Perso1->DisplayInformations();
                            break;
                        case 2: // inventory section
                            while(1){
                                Perso1->showInventory();
                                Perso1->displayEquipment();
                                cout<<"Drink Potion : 1"<<endl;
                                cout<<"Equip Weapon : 2"<<endl;
                                cout<<"Unequip Weapon : 3"<<endl;
                                cout<<"Exit : 4"<<endl;
                                cin>>choiceInt;
                                if (choiceInt == 4){
                                    break;
                                }
                                switch (choiceInt){
                                case 1:
                                    Perso1->usePotion(Potion);
                                    Perso1->removeItemToInventory(&Potion);
                                    break;
                                case 2: // equip item
                                    while (1){
                                        cout << "What do you want to equip ? (0 for Exit) "<< endl;
                                        cout<<"(You need the full name of the equipement without space ex : For Wooden Sword -> WoodenSword)"<<endl;
                                        cin >> choice;
                                        if (choice=="0"){
                                            break;
                                        }
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
                                    break;
                                case 3:// unequip item
                                    while (1){
                                        cout << "What item do you want to unequip ? (0 to exit) "<< endl;
                                        cout<<"(You need the full name of the Item without space ex : For Wooden Sword -> WoodenSword)"<<endl;
                                        cin >> choice;
                                        if (choice=="0"){
                                            break;
                                        }
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
                    }
                }
                if (choice == "2"){// the village
                    clearConsol();
                    while(1){
                        cout<<"You are now in the main place of the village."<<endl;
                        if (Merchant1.getMerchantNbr()>0){
                            cout<<"You can see on your left some stores where you can buys items"<<endl;
                        }
                        if (Hostel1.getHostelNbr()>0){
                            cout<<"You see on your right some place to rest "<<endl;
                        }
                        cout<<"What do you want to do now ?"<<endl;
                        cout<<"Visit stores : 1"<<endl;
                        cout<<"Visit Hostels : 2"<<endl;
                        cout<<"Exit : 3"<<endl;
                        cin >> choiceInt;
                        if (choiceInt == 3){
                            clearConsol();
                                break;
                            }
                        switch(choiceInt){
                        case 1: //merchant
                            clearConsol();
                            if (Merchant1.getMerchantNbr()>0){
                                Merchant1.sellMerchandise(*Perso1);
                            }else{
                                cout<< "You didn't find any store in the place..."<<endl;
                                cout<<" It seems that there is no shop here..."<<endl;
                            }
                            break;
                        case 2:// hostel
                            clearConsol();
                            if (Hostel1.getHostelNbr()>0){
                                cout << "Do you want to stay at the hostel to heal up for 10 gold ?  Y/n "<<endl;
                                cin>>choice;
                                if (choice == "Y"||choice =="y"){
                                    Hostel1.setResetLife(Perso1->GetMaxHealt());
                                    if (Hostel1.resetLifeToMax(*Perso1, *Perso1)) {
                                        cout << "You stayed at the hostel and paid 10 gold. Your health is now " << Perso1->GetHealth() << endl;
                                    } else {
                                        cout << "You don't have enough gold to stay at the hostel." << endl;
                                    }
                                }
                            }else{
                                cout<< "You didn't find any Hostel in the place..."<<endl;
                                cout<<"It seems that there is nowhere to rest here..."<<endl;
                            }
                            break;
                        }
                    }
                }
                if (choice == "3"){ //the mine
                    clearConsol();
                    if (Mine1->getClearMine()==Mine1->getMineNbr()){
                        cout<<"There is no mine left... You saved this city"<<endl;
                    }else{
                        cout << "You enter into a mine and you will fight with " << Mine1->MonsterOnMine() << " monster !" << endl;
                        for (int j=0; j<Mine1->MonsterOnMine(); j++){
                            Monster monster;
                            Monster* monster2 = new Monster("goblin", 15, 50, 5, 25);
                            Monster* monster3 = new Monster("Orc", 20, 70, 10, 40);
                            int choix = getRandNumber(1, 3);
                            switch (choix) {
                            case 1: // fight a ghoul
                                cout<<"You encounter a " << monster.GetName() <<j+1<<" went to have a fight"<<endl;
                                while(1){
                                    cout<<"Hit : 1"<< endl;
                                    cout<<"Drink Potion : 2"<< endl;
                                    cout<<"Nothing : 3"<< endl;
                                    cin >> choice;
                                    if (choice == "1" || choice == "2" || choice == "3"){
                                        if (choice == "1"){
                                            clearConsol();
                                            Perso1->HitCharactere(monster);
                                            cout<<monster.GetName()<< j+1 <<" take damage : -"<<Perso1->GetAttack()-monster.GetDefense()<<endl;
                                            if (!(monster.GetHealth()<=0)){
                                                if (Perso1->dodgeAttack()==true){
                                                    cout<<"The attack has been dodge"<<endl;
                                                } else{
                                                    monster.HitCharactere(*Perso1);
                                                    cout<<Perso1->GetName()<<" take domage : -"<<monster.GetAttack()-Perso1->GetDefense()<<endl;
                                                    cout<<monster.GetName()<< j+1 <<" life : "<< monster.GetHealth()<<" / "<<monster.GetMaxHealt()<<endl;
                                                }
                                            }
                                            cout<<Perso1->GetName()<<" life : "<< Perso1->GetHealth()<<" / "<<Perso1->GetMaxHealt()<<endl;
                                        }
                                        if (choice =="2"){
                                            clearConsol();
                                            Perso1->usePotion(Potion);
                                            Perso1->removeItemToInventory(&Potion);
                                            cout<<Perso1->GetName()<<" recovery : +"<<Potion.getHeal()<<endl;
                                            monster.HitCharactere(*Perso1);
                                            cout<<Perso1->GetName()<<" take domage : -"<<monster.GetAttack()-Perso1->GetDefense()<<endl;
                                            cout<<monster.GetName()<< j+1 <<" life : "<< monster.GetHealth()<<" / "<<monster.GetMaxHealt()<<endl;

                                        }
                                        if (choice == "3"){
                                            clearConsol();
                                            monster.HitCharactere(*Perso1);
                                            cout<<Perso1->GetName()<<" take domage : -"<<monster.GetAttack()-Perso1->GetDefense()<<endl;
                                            cout<<Perso1->GetName()<<" life : "<< Perso1->GetHealth()<<" / "<<Perso1->GetMaxHealt()<<endl;
                                            cout<<monster.GetName()<< j+1 <<" life : "<< monster.GetHealth()<<" / "<<monster.GetMaxHealt()<<endl;
                                        }
                                    }
                                    if (Perso1->GetHealth()<=0){
                                        break;
                                    }
                                    if (monster.GetHealth()<=0){
                                        cout<<"You killed "<<monster.GetName()<<" and get "<<monster.GetGold()<<" gold."<<endl;
                                        Perso1->SetGold(Perso1->GetGold()+monster.GetGold());
                                        break;
                                    }
                                }
                                if (Perso1->GetHealth()<=0){
                                    clearConsol();
                                    cout<<"You are dead"<<endl;
                                    abort();
                                }
                                break;
                            case 2: // fight a goblin
                                cout<<"You encounter a " << monster2->GetName() <<j+1<<" went to have a fight"<<endl;
                                while(1){
                                    cout<<"Hit : 1"<< endl;
                                    cout<<"Drink Potion : 2"<< endl;
                                    cout<<"Nothing : 3"<< endl;
                                    cin >> choice;
                                    if (choice == "1" || choice == "2" || choice == "3"){
                                        if (choice == "1"){
                                            clearConsol();
                                            Perso1->HitCharactere(*monster2);
                                            cout<<monster2->GetName()<< j+1 <<" take domage : -"<<Perso1->GetAttack()-monster2->GetDefense()<<endl;
                                            if (!(monster2->GetHealth()<=0)){
                                                if (Perso1->dodgeAttack()==true){
                                                    cout<<"The attack has been dodge"<<endl;
                                                } else{
                                                    monster2->HitCharactere(*Perso1);
                                                    cout<<Perso1->GetName()<<" take domage : -"<<monster2->GetAttack()-Perso1->GetDefense()<<endl;
                                                    cout<<monster2->GetName()<< j+1 <<" life : "<< monster2->GetHealth()<<" / "<<monster2->GetMaxHealt()<<endl;
                                                }
                                            }
                                            cout<<Perso1->GetName()<<" life : "<< Perso1->GetHealth()<<" / "<<Perso1->GetMaxHealt()<<endl;
                                        }
                                        if (choice =="2"){
                                            clearConsol();
                                            Perso1->usePotion(Potion);
                                            Perso1->removeItemToInventory(&Potion);
                                            cout<<Perso1->GetName()<<" recovery : +"<<Potion.getHeal()<<endl;
                                            monster2->HitCharactere(*Perso1);
                                            cout<<Perso1->GetName()<<" take domage : -"<<monster2->GetAttack()-Perso1->GetDefense()<<endl;
                                            cout<<monster2->GetName()<< j+1 <<" life : "<<monster2->GetHealth()<<" / "<< monster2->GetMaxHealt()<<endl;
                                        }
                                        if (choice == "3"){
                                            clearConsol();
                                            monster2->HitCharactere(*Perso1);
                                            cout<<Perso1->GetName()<<" take domage : -"<<monster2->GetAttack()-Perso1->GetDefense()<<endl;
                                            cout<<Perso1->GetName()<<" life : "<< Perso1->GetHealth()<<" / "<<Perso1->GetMaxHealt()<<endl;
                                            cout<<monster2->GetName()<< j+1 <<" life : "<< monster2->GetHealth()<<" / "<< monster2->GetMaxHealt()<<endl;
                                        }
                                    }
                                    if (Perso1->GetHealth()<=0){
                                        break;
                                    }
                                    if (monster2->GetHealth()<=0){
                                        cout<<"You killed "<<monster2->GetName()<<" and get "<<monster2->GetGold()<<" gold."<<endl;
                                        Perso1->SetGold(Perso1->GetGold()+monster2->GetGold());
                                        break;
                                    }
                                }
                                if (Perso1->GetHealth()<=0){
                                    clearConsol();
                                    cout<<"You are dead"<<endl;
                                    abort();
                                }
                                break;
                            case 3:// fight a orc
                                cout<<"You encounter a " << monster3->GetName() <<j+1<<" went to have a fight"<<endl;
                                while(1){
                                    cout<<"Hit : 1"<< endl;
                                    cout<<"Drink Potion : 2"<< endl;
                                    cout<<"Nothing : 3"<< endl;
                                    cin >> choice;
                                    if (choice == "1" || choice == "2" || choice == "3"){
                                        if (choice == "1"){
                                            clearConsol();
                                            Perso1->HitCharactere(*monster3);
                                            cout<<monster3->GetName()<< j+1 <<" take domage : -"<<Perso1->GetAttack()-monster3->GetDefense()<<endl;
                                            if (!(monster3->GetHealth()<=0)){
                                                if (Perso1->dodgeAttack()==true){
                                                    cout<<"The attack has been dodge"<<endl;
                                                } else{
                                                    monster3->HitCharactere(*Perso1);
                                                    cout<<Perso1->GetName()<<" take domage : -"<<monster3->GetAttack()-Perso1->GetDefense()<<endl;
                                                    cout<<monster3->GetName()<< j+1 <<" life : "<< monster3->GetHealth()<<"/"<< monster3->GetMaxHealt()<<endl;
                                                }
                                            }
                                            cout<<Perso1->GetName()<<" life : "<< Perso1->GetHealth()<<" / "<<Perso1->GetMaxHealt()<<endl;
                                        }
                                        if (choice =="2"){
                                            clearConsol();
                                            Perso1->usePotion(Potion);
                                            Perso1->removeItemToInventory(&Potion);
                                            cout<<Perso1->GetName()<<" recovery : +"<<Potion.getHeal()<<endl;
                                            monster3->HitCharactere(*Perso1);
                                            cout<<Perso1->GetName()<<" take damage : -"<<monster3->GetAttack()-Perso1->GetDefense()<<endl;
                                            cout<<monster3->GetName()<< j+1 <<" life : "<< monster3->GetHealth()<<"/"<< monster3->GetMaxHealt()<<endl;

                                        }
                                        if (choice == "3"){
                                            clearConsol();
                                            monster3->HitCharactere(*Perso1);
                                            cout<<Perso1->GetName()<<" take domage : -"<<monster3->GetAttack()-Perso1->GetDefense()<<endl;
                                            cout<<Perso1->GetName()<<" life : "<< Perso1->GetHealth()<<" / "<<Perso1->GetMaxHealt()<<endl;
                                            cout<<monster3->GetName()<< j+1 <<" life : "<< monster3->GetHealth()<<"/"<< monster3->GetMaxHealt()<<endl;
                                        }
                                    }
                                    if (Perso1->GetHealth()<=0){
                                        break;
                                    }
                                    if (monster3->GetHealth()<=0){
                                        cout<<"You killed "<<monster3->GetName()<<" and get "<<monster3->GetGold()<<" gold."<<endl;
                                        Perso1->SetGold(Perso1->GetGold()+monster3->GetGold());
                                        break;
                                    }
                                }
                                if (Perso1->GetHealth()<=0){
                                    clearConsol();
                                    cout<<"You are dead"<<endl;
                                    abort();
                                }
                                break;
                            }
                        }
                        Mine1->MineLevelUp(); //adding a level for fibonacci
                        Mine1->clearMine() ;
                    }
                }
                if (choice == "4"){
                    clearConsol();
                    if ((Mine1->getClearMine()==Mine1->getMineNbr())){
                        cityClear++;
                        break;
                    }else{
                        cout<<" You still have "<<Mine1->getMineNbr()<<" mines to clear before moving..."<<endl;
                    }
                }
                if (choice =="5"){
                    abort();
                }
            }
        }
    }
}
