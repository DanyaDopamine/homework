#ifndef CAR_H
#define CAR_H

#include <string>
#include <vector>
#include "Engine.h"
#include "Passenger.h"

class Car {
private:
    std::string model;
    Engine engine;
    std::vector<Passenger> passengers;

public:
    Car(const std::string &model, const Engine &engine);
    void addPassenger(const Passenger &passenger);
    void displayInfo() const;
};

#endif // CAR_H
