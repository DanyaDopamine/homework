#include <iostream>
#include "Age.hpp"

int main() {
    int age;
    std::cout << "Введите Ваш возраст: ";
    std::cin >> age;

    std::string year = convertAgeToString(age);
    std::cout << age << " " << year << std::endl;

    return 0;
}

