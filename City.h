#ifndef CITY_H
#define CITY_H
#include <string>
using namespace std;

class City
{
    string m_cityName;
    int m_randCityName;
    int m_cityClear = 0;

public:
    City();
    void setRandCityName(int randCityName);
    void setCityName(string cityName);
    string getCityName();
    void getRandName();
    void cityClear();
    int getCityClear();
};

#endif // CITY_H
