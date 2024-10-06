#ifndef BUILDING_H
#define BUILDING_H

#include <string>

class Building {
private:
    int year;
    std::string type;

public:
    void set_data(int y, std::string t);
    void get_info();
};

#endif // BUILDING_H
