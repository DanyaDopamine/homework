#include "../include/month.hpp"

void daysmonth(int month, int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        switch(month) {
            case 1: std::cout << "Январь - 31 день"; break;
            case 2: std::cout << "Февраль - 29 дней"; break;
            case 3: std::cout << "Март - 31 день"; break;
            case 4: std::cout << "Апрель - 30 дней"; break;
            case 5: std::cout << "Май - 31 день"; break;
            case 6: std::cout << "Июнь - 30 дней"; break;
            case 7: std::cout << "Июль - 31 день"; break;
            case 8: std::cout << "Август - 31 день"; break;
            case 9: std::cout << "Сентябрь - 30 дней"; break;
            case 10: std::cout << "Октябрь - 31 день"; break;
            case 11: std::cout << "Ноябрь - 30 дней"; break;
            case 12: std::cout << "Декабрь - 31 день"; break;
        }
    } else {
        switch(month) {
            case 1: std::cout << "Январь - 31 день"; break;
            case 2: std::cout << "Февраль - 28 дней"; break;
            case 3: std::cout << "Март - 31 день"; break;
            case 4: std::cout << "Апрель - 30 дней"; break;
            case 5: std::cout << "Май - 31 день"; break;
            case 6: std::cout << "Июнь - 30 дней"; break;
            case 7: std::cout << "Июль - 31 день"; break;
            case 8: std::cout << "Август - 31 день"; break;
            case 9: std::cout << "Сентябрь - 30 дней"; break;
            case 10: std::cout << "Октябрь - 31 день"; break;
            case 11: std::cout << "Ноябрь - 30 дней"; break;
            case 12: std::cout << "Декабрь - 31 день"; break;
        }
    }
}
