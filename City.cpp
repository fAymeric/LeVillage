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

    setRandCityName(get_rand_number(1, 8));
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
        }
}
void City::setCityName(std::string cityName) {
    m_cityName = cityName;
}
string City::getCityName() {
    return m_cityName;
}
