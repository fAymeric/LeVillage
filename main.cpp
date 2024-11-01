#include "Inventory.h"
#include "Paladin.h"
#include "Warrior.h"
#include "Wizzard.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string choice;
    Player* Perso1 = nullptr;
    while(1){
        cout<<"hello adveturer its time to choose your class..."<<endl;
        cout<<"Warrior : 1"<< endl;
        cout<<"Wizzard : 2"<< endl;
        cout<<"Paladin : 3"<< endl;
        cin >> choice;
        if (choice == "Warrior" || choice == "Wizzard" || choice == "Paladin" || choice == "1" || choice == "2" || choice == "3"){
            if (choice == "Warrior" || choice == "1"){
                Perso1 = new Warrior();
                break;
            }
            if (choice == "Wizzard" || choice == "2"){
                Perso1 = new Wizzard();
                break;
            }
            if (choice == "Paladin" || choice == "3"){
                Perso1 = new Paladin();
                break;
            }
        }
    }

    while (1){
        cout<<"Now what you want to do ?"<<endl;
        cout<<"Check stats : 1"<< endl;
        cout<<"Check inventory : 2"<< endl;
        cout<<"Drink potions : 3"<< endl;
        cout<<"End Simulation : 4"<<endl;
        cin>>choice;
        if ( choice == "1" || choice == "2" || choice == "3"|| choice=="4"){
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
        }
    }


    delete Perso1;
}
