#include "weather.hpp"
#include <iostream>

WeatherChecker::WeatherChecker() {
    day = "";
    temperature = "";
    precipitation = "";
    wind = "";
    humidity = "";
}

void WeatherChecker::checkBadmintonWeather() {
    std::cout << "Подходит ли погода для бадминтона?" << std::endl;
    std::cout << "Какой сегодня день недели?" << std::endl;
    std::cin >> day;
    std::cout << "Какая сегодня температура?(жарко/тепло/холодно)" << std::endl;
    std::cin >> temperature;
    std::cout << "Какие сегодня осадки?(ясно/облачно/дождь/снег/град)" << std::endl;
    std::cin >> precipitation;
    std::cout << "Есть ли сегодня ветер?(есть/нет)" << std::endl;
    std::cin >> wind;
    std::cout << "Какая влажность сегодня?(высокая/низкая)" << std::endl;
    std::cin >> humidity;

    if ((day == "вс" || day == "Вс" || day == "Воскресенье" || day == "воскресенье") &&
        (temperature == "тепло" || temperature == "Тепло") &&
        (precipitation == "ясно" || precipitation == "Ясно") &&
        (wind == "нет" || wind == "Нет") &&
        (humidity == "низкая" || humidity == "Низкая")) {
        std::cout << "Да" << std::endl;
    } else {
        std::cout << "Нет" << std::endl;
    }
}
