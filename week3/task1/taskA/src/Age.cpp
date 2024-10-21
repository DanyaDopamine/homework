#include "Age.hpp"

std::string convertAgeToString(int age) {
    if (age <= 0) {
        return "Что-то не то!";
    } else if (age % 100 >= 11 && age % 100 <= 14) {
        return "лет";
    } else {
        switch (age % 10) {
            case 1:
                return "год";
            case 2:
            case 3:
            case 4:
                return "года";
            default:
                return "лет";
        }
    }
}

