#include "Game.h"
#include<iostream>

using namespace std;

Game::Game() {}

int Game::GameStart(){
    int classNumber;
    for(;;){
        cout << "Hello adventurer... Choose your class to begin your adventure" << endl;
        cout << "1 : Warrior " << endl;
        cout << "2 : Paladin " << endl;
        cout << "3 : Wizzard " << endl;
        cin >> classNumber;
        if (classNumber == 1 || classNumber == 2 || classNumber == 3){
            if (classNumber == 1){
                cout << "You choose Warrior"<< endl;
                break;
            }
            if (classNumber == 2){
                cout << "You choose Warrior"<< endl;
                break;
            }
            if (classNumber == 3){
                cout << "You choose Warrior"<< endl;
                break;
            }
        }
        break;
    }
}
