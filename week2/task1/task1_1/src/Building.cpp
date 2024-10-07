#include "Building.hpp"

// Функция для преобразования типа BuildingType в строку
string buildingTypeToString(BuildingType type) {
    switch (type) {
        case SCHOOL: return "Школа";
        case HOUSE: return "Дом";
        case OFFICE: return "Офис";
        case HOSPITAL: return "Больница";
        default: return "Другое";
    }
}

void Building::set_data(int year, BuildingType type) {
    constructionYear = year;
    buildingType = type;
}

void Building::get_info() const {
    cout << "Тип: " << buildingTypeToString(buildingType) 
         << ". Год постройки: " << constructionYear << endl;
}

