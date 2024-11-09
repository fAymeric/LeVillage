#include "Building.h"


Building::Building() {}



int get_rand_number_building (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};
