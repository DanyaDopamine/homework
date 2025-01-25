#ifndef WEATHER_HPP
#define WEATHER_HPP

#include <string>

class WeatherChecker {
public:
    WeatherChecker();
    void checkBadmintonWeather();

private:
    std::string day;
    std::string temperature;
    std::string precipitation;
    std::string wind;
    std::string humidity;
};

#endif
