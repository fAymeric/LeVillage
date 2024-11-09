#ifndef BUILDING_H
#define BUILDING_H

#include "City.h"
class Building: public City
{
public:
    Building();
    int get_rand_number_building(int min, int max);
};

#endif // BUILDING_H
