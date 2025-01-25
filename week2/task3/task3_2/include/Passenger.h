#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
private:
    std::string name;

public:
    Passenger(const std::string &name);
    std::string getName() const;
};

#endif // PASSENGER_H
