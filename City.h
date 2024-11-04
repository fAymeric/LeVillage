#ifndef CITY_H
#define CITY_H
#include <string>
using namespace std;

class City
{
    string m_cityName;
    int m_randCityName;

public:
    City();
    void setRandCityName(int randCityName);
    void setCityName(string cityName);
    string getCityName();
    void getRandName();
};

#endif // CITY_H
