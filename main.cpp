#include "paladin.h"
#include "warrior.h"
#include "wizzard.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string classe;
    Player* Perso1 = nullptr;
    while(1){
        cout<<"hello adveturer its time to choose your class..."<<endl;
        cout<<"Warrior : 1"<< endl;
        cout<<"Wizzard : 2"<< endl;
        cout<<"Paladin : 3"<< endl;
        cin >> classe;
        if (classe == "Warrior" || classe == "Wizzard" || classe == "Paladin" || classe == "1" || classe == "2" || classe == "3"){
            if (classe == "Warrior" || classe == "1"){
                Perso1 = new Warrior();
                break;
            }
            if (classe == "Wizzard" || classe == "2"){
                Perso1 = new Wizzard();
                break;
            }
            if (classe == "Paladin" || classe == "3"){
                Perso1 = new Paladin();
                break;
            }
        }
    }


    potion potion1;
    if (Perso1 != nullptr) {
        Perso1->DisplayInformations();
        potion potion1;
        Perso1->usePotion(potion1);
        Perso1->DisplayInformations();
        Perso1->usePotion(potion1);
        Perso1->DisplayInformations();
        Perso1->usePotion(potion1);
        Perso1->DisplayInformations();


        delete Perso1;
    }
}
