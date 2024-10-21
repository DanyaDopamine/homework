#include "../include/month.hpp"

int main() {
    int month, year;
    std::cout << "Введите номер месяца(1-12): " << std::endl;
    std::cin >> month;
    
    if (month >= 13 || month <= 0) {
        std::cout << "Месяцев всего 12" << std::endl;
        return 0;
    }

    std::cout << "Введите год" << std::endl;
    std::cin >> year;
    
    if (year <= 0) {
        std::cout << "Введите год нашей эры" << std::endl;
        return 0;
    }
    
    daysmonth(month, year);
    
    return 0;
}
