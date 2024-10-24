#include "player.h"
#include "character.cpp"
using namespace std;

int get_rand_number_stats (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};

Player::Player() {}

void Player::setRandStats()
{
    Character monCharacter;
    int i =0;
    while(i){
        switch (m_classeInt){
        case 1 : // Warrior
            monCharacter.SetHealth(get_rand_number_stats(20, 100));
            monCharacter.SetGold(5);
            monCharacter.SetAttack(get_rand_number_stats(1, 20));
            monCharacter.SetDefense(get_rand_number_stats(0, 10));
        case 2: // Paladin
            monCharacter.SetHealth(get_rand_number_stats(20, 100));
            monCharacter.SetGold(5);
            monCharacter.SetAttack(get_rand_number_stats(1, 15));
            monCharacter.SetDefense(get_rand_number_stats(1, 20));
        case 3: // Wizard
            monCharacter.SetHealth(get_rand_number_stats(20, 100));
            monCharacter.SetGold(5);
            monCharacter.SetAttack(get_rand_number_stats(1, 10));
            monCharacter.SetDefense(get_rand_number_stats(1, 15));
        };
    }
}
