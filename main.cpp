
#include "Game.h"
#include "Paladin.h"
#include "Warrior.h"
#include "Wizzard.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    Game* Game = nullptr;
    Player* Perso1 = nullptr;
    srand(static_cast<unsigned int>(time(0))); // initialise the random possibility
    string choice;
    cout<<"Hello Adventurer... Are you ok ? We've found you near the river and it seems that you needed help..."<<endl;
    cout<<"We Need your help to free our territory from the monsters..."<<endl;
    cout<<"You are in the territory of Xintras... There 3 city and they all need your help to defeat the monsters... Please help us..."<<endl;
    cout<<"Now its time to choose your class..."<<endl;
    cout<<"Warrior : 1"<< endl;
    cout<<"The warrior can equip 2 swords but can't equip shield or stick."<<endl;
    cout<<"You also begin your adventure with 50% more power than the other class."<<endl;
    cout<<"Wizzard : 2"<< endl;
    cout<<"The wizzard can equip one stick but can't equip shield or sword."<<endl;
    cout<< "You can also dodge in fight."<<endl;
    cout<<"Paladin : 3"<< endl;
    cout<<"The paladin can equip one sword and one shield but can't equip stick."<<endl;
    cin >> choice;
    if (choice == "Warrior" || choice == "Wizzard" || choice == "Paladin" || choice == "1" || choice == "2" || choice == "3"){
        if (choice == "Warrior" || choice == "1"){
            Perso1 = new Warrior();
            cout<<"You choose Warrior"<<endl;
        }
        if (choice == "Wizzard" || choice == "2"){
            Perso1 = new Wizzard();
            cout<<"You choose Wizzard"<<endl;
        }
        if (choice == "Paladin" || choice == "3"){
            Perso1 = new Paladin();
            cout<<"You choose Paladin"<<endl;
        }
    }
    Game->Play(Perso1);
    return 0;
}
