#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <iostream>
#include <string>

using namespace std;

// Перечисление для типов зданий
enum BuildingType {
    SCHOOL,
    HOUSE,
    OFFICE,
    HOSPITAL,
    OTHER
};

class Building {
private:
    int constructionYear;   // Год постройки
    BuildingType buildingType; // Тип здания

public:
    void set_data(int year, BuildingType type);
    void get_info() const;
};

// Функция для преобразования типа BuildingType в строку
string buildingTypeToString(BuildingType type);

#endif // BUILDING_HPP
