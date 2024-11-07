#ifndef BUILDING_H
#define BUILDING_H

#include "City.h"
class Building: public City
{
public:
    Building();
    void randomBuildingNbr();
    void displayBuilding();
};

#endif // BUILDING_H
