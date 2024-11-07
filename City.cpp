#include "City.h"
#include <cstdlib>


enum Name{
    Partia,
    Astram,
    Lastrum,
    Bondy,
    Montcuq,
    Astropol,
    Chauss,
    Asaldur,
    Midburgh,
    Basinshire,
    Lakehall,
    Swanwich,
    Starburgh,
    Oxmeadow,
    Starward,
    Boulderbreach,
    Springmouth,
    Steepmaw,
    Fearstrand,
    Snakefield,
};

City::City() {}

int get_rand_number (int min, int max)
{
    return (rand()%(max-min+1)) +min;
};

void City::setRandCityName(int randCityName) {

    m_randCityName = randCityName;
}
void City::getRandName() {
    setRandCityName(get_rand_number(0, 19));
    switch (m_randCityName) {
        case Partia: m_cityName = "Partia";
            break;
        case Astram: m_cityName = "Astram";
            break;
        case Lastrum: m_cityName = "Lastrum";
            break;
        case Bondy: m_cityName = "Bondy";
            break;
        case Montcuq: m_cityName = "Montcuq";
            break;
        case Astropol: m_cityName = "Astropol";
            break;
        case Chauss: m_cityName = "Chauss";
            break;
        case Asaldur: m_cityName = "Asaldur";
            break;
        case Midburgh: m_cityName = "Midburgh";
            break;
        case Basinshire: m_cityName = "Basinshire";
            break;
        case Lakehall: m_cityName = "Lakehall";
            break;
        case Swanwich: m_cityName = "Swanwich";
            break;
        case Starburgh: m_cityName = "Starburgh";
            break;
        case Oxmeadow: m_cityName = "Oxmeadow";
            break;
        case Starward: m_cityName = "Starward";
            break;
        case Boulderbreach: m_cityName = "Boulderbreach";
            break;
        case Springmouth: m_cityName = "Springmouth";
            break;
        case Steepmaw: m_cityName = "Steepmaw";
            break;
        case Fearstrand: m_cityName = "Fearstrand";
            break;
        case Snakefield: m_cityName = "Snakefield";
            break;
        }
}

void City::cityClear()
{
    m_cityClear++;
}

int City::getCityClear(){
    return m_cityClear;
}

void City::setCityName(std::string cityName) {
    m_cityName = cityName;
}
string City::getCityName() {
    return m_cityName;
}

