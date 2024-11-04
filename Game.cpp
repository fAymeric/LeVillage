#include "Game.h"
#include "City.h"
#include "Paladin.h"
#include "Player.h"
#include "Warrior.h"
#include "Wizzard.h"
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

void clearConsole() {
    system("cls");
    this_thread::sleep_for(chrono::milliseconds(100));
}

Game::Game(){

    string choice;
    Player* Perso1 = nullptr;
    clearConsole();
    while(1){
        cout<<"hello adveturer its time to choose your class..."<<endl;
        cout<<"Warrior : 1"<< endl;
        cout<<"Wizzard : 2"<< endl;
        cout<<"Paladin : 3"<< endl;
        cin >> choice;
        clearConsole();
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

    while (1){
        cout<<"Now what you want to do ?"<<endl;
        cout<<"Check stats : 1"<< endl;
        cout<<"Check inventory : 2"<< endl;
        cout<<"Drink potions : 3"<< endl;
        cout<<"End Simulation : 4"<<endl;
        cout<<"Take the Weapon : 5" << endl;
        cin>>choice;
        clearConsole();
        if ( choice == "1" || choice == "2" || choice == "3"|| choice=="4" || choice == "5"){
            if ( choice == "1"){
                Perso1->DisplayInformations();
            }
            if (choice == "2"){
                Perso1->showInventory();
            }
            if ( choice == "3"){
                Potion potion1;
                Perso1->usePotion(potion1);
                Perso1->removePotionToInventory(potion1);
            }
            if ( choice == "4"){
                break;
            }
            if ( choice == "5"){
                while (1){
                    cout<<"What do you want to equip ?"<<endl;
                    cout<<"Sword : 1"<< endl;
                    cout<<"Stick : 2"<< endl;
                    cout<<"Shield : 3"<< endl;
                    cin >> choice;
                    if ( choice == "1" || choice == "2" || choice == "3"){
                        if ( choice == "1"){
                            Perso1->carrySword(Sword1);
                        }
                        if (choice == "2"){
                            Perso1->carryStick(Stick1);
                        }
                        if (choice == "3"){
                            Perso1->carryShield(Shield1);
                        }
                    }
                    break;
                }

            }
        }
    }


    delete Perso1;
};
