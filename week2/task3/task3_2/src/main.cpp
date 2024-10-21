#include <iostream>
#include <string>
#include "Car.h"
#include "Engine.h"
#include "Passenger.h"

int main() {
    Engine engine("1.6 MT");
    Car car("Lada Kalina 2 Sport", engine);

    std::string name1, name2, nameToRemove;

    std::cout << "Введите имя первого пассажира: ";
    std::getline(std::cin, name1);
    car.addPassenger(Passenger(name1));

    std::cout << "Введите имя второго пассажира: ";
    std::getline(std::cin, name2);
    car.addPassenger(Passenger(name2));

    car.displayInfo();

    return 0;
}
