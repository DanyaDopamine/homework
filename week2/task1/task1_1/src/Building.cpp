#include <iostream>
#include <string>
#include "Building.h"

using namespace std;

void Building::set_data(int y, string t) {
    year = y;
    type = t;
}

void Building::get_info() {
    cout << "Type: " << type << endl << "Year: " << year << endl;
}
