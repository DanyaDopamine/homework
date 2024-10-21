#include <iostream>
#include "Building.hpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    Building school;
    school.set_data(2000, SCHOOL);
    school.get_info();

    Building house;
    house.set_data(2010, HOUSE);
    house.get_info();

    return 0;
}

