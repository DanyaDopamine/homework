#include <iostream>
#include "Building.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    Building school;
    school.set_data(2000, "Школа");
    school.get_info();

    Building house;
    house.set_data(2010, "Дом");
    house.get_info();

    return 0;
}
