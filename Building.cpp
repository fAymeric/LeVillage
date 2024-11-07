#include "Building.h"
#include "Hostel.h"
#include "Merchant.h"
#include "Mine.h"
#include <iostream>

Mine Mine;
Hostel Hostel;
Merchant Merchant;

Building::Building() {}



int get_rand_number_building (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};

void Building::randomBuildingNbr()
{
    Hostel.setHostelNbr(get_rand_number_building(0,5));
    Merchant.setMerchantNbr(get_rand_number_building(0,5));
}

void Building::displayBuilding()
{
    cout<< "In This city you will find"<<endl;
    cout<<"- "<<Merchant.getMerchantNbr()<< " store where you can find some items to buy.."<<endl;
    cout<<"- "<<Hostel.getHostelNbr()<< " hostels whereyou can... sleep... yeah that's all..."<<endl;
}
