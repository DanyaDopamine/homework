#include <iostream>
#include "Octagon.h"

int main() {
    Octagon octagon(5.0); // Создаем восьмиугольник с внутренним радиусом 5.0

    // Выводим площадь и периметр восьмиугольника
    std::cout << "Area of the octagon: " << octagon.calculateArea() << std::endl;
    std::cout << "Perimeter of the octagon: " << octagon.calculatePerimeter() << std::endl;

    return 0;
}
