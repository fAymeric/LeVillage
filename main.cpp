#include "paladin.h"
#include "warrior.h"
#include "wizzard.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int classeInt;
    string classe;
    while(1){
        cout<<"hello adveturer its time to choose your class..."<<endl;
        cout<<"Warrior : 1"<< endl;
        cout<<"Wizzard : 2"<< endl;
        cout<<"Paladin : 3"<< endl;
        cin >> classe;
        if (classe == "Warrior" || classe == "Wizzard" || classe == "Paladin" || classe == "1" || classe == "2" || classe == "3"){
            if (classe == "Warrior" || classe == "1"){
                classeInt = 1;
                break;
            }
            if (classe == "Wizzard" || classe == "2"){
                classeInt = 2;
                break;
            }
            if (classe == "Paladin" || classe == "3"){
                classeInt = 3;
                break;
            }
        }
    }
    if (classeInt == 1){
        Warrior Perso1;
        Perso1.DisplayInformations();
    }
    if (classeInt == 2){
        Wizzard Perso1;

        Perso1.DisplayInformations();
    }
    if (classeInt == 3){

        Paladin Perso1;
        Perso1.DisplayInformations();
    }
    ShowVillage();
    PlayerGoIntoVillage();
    PlayerEnterMine
    MineShowInside();
    hitCharacter(Player, Monster);
    hitCharacter(Monster, Player);
    hitCharacter(Player, Monster);
    PlayerLeaveMine();
    PlayerEnterMerchant();
    MerchantShowProduct();
    PlayerBuyProduct();
    PlayerLeaveMerchant();
    PlayerTakeSword();
    PlayerGoHostel();
    HostelShowPrice();
    PlayerRest();
    PlayerLeaveHostel();
    PlayerLeaveVillage();
    PlayerDrunkPotions(),

}
