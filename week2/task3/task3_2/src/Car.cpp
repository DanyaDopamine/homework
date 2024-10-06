#include "Car.h"
#include <iostream>

Car::Car(const std::string &model, const Engine &engine) : model(model), engine(engine) {}

void Car::addPassenger(const Passenger &passenger) {
    if (passengers.size() < 2) {
        passengers.push_back(passenger);
        std::cout << "Пассажир добавлен: " << passenger.getName() << std::endl;
    } else {
        std::cout << "Нельзя добавить больше 2 пассажиров." << std::endl;
    }
}

void Car::displayInfo() const {
    std::cout << "Модель автомобиля: " << model << std::endl;
    std::cout << "Тип двигателя: " << engine.getType() << std::endl;
    std::cout << "Пассажиры: ";
    for (const auto &p : passengers) {
        std::cout << p.getName() << " ";
    }
    std::cout << std::endl;
}
