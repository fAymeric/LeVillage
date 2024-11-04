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

    setRandCityName(get_rand_number(0, 7));
    switch (m_randCityName) {
        case 0: m_cityName = "Partia";
            break;
        case 1: m_cityName = "Astram";
            break;
        case 2: m_cityName = "Lastrum";
            break;
        case 3: m_cityName = "Bondy";
            break;
        case 4: m_cityName = "Montcuq";
            break;
        case 5: m_cityName = "Astropol";
            break;
        case 6: m_cityName = "Chauss";
            break;
        case 7: m_cityName = "Asaldur";
            break;
        }
}
void City::setCityName(std::string cityName) {
    m_cityName = cityName;
}
string City::getCityName() {
    return m_cityName;
}
