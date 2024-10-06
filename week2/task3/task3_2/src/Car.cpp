#include "Car.h"
#include <iostream>

Car::Car(const std::string& model, const Engine& engine)
    : model(model), engine(engine) {}

void Car::addPassenger(const Passenger& passenger) {
    passengers.push_back(passenger);
}

void Car::removePassenger(const Passenger& passenger) {
    for (auto it = passengers.begin(); it != passengers.end(); ++it) {
        if (it->getName() == passenger.getName()) {
            passengers.erase(it);
            return;
        }
    }
}

void Car::displayInfo() const {
    std::cout << "Car Model: " << model << std::endl;
    std::cout << "Engine Power: " << engine.getPower() << std::endl;
    std::cout << "Passengers:" << std::endl;
    for (const auto& passenger : passengers) {
        std::cout << "- " << passenger.getName() << std::endl;
    }
}
