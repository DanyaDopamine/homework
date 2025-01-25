#include <iostream>
#include "Math.hpp"

int main() {
    double number;
    std::cout << "Введите число, для которого нужно найти квадратный корень: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Нельзя найти квадратный корень отрицательного числа." << std::endl;
    } else {
        double result = heronSqrt(number);
        std::cout << "Квадратный корень из " << number << " = " << result << std::endl;
    }

    return 0;
}
