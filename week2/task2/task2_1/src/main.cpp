#include <iostream>
#include <ctime>
#include "Student.h"

int main() {
    struct tm birthDate = {0, 0, 0, 17, 2, 106}; // Пример заполнения структуры tm для даты рождения
    Student student1("Daniil", birthDate, "23IB1b", 7355608, 5.0);
    Student student2("Ivan", birthDate, "A102", 67890, 4.5);

    student1.toString();
    std::cout << "Age: " << student1.getAge() << " years" << std::endl;
    std::cout << "Is student1 an excellent student? " << (student1.isExcellentStudent() ? "Yes" : "No") << std::endl;

    std::cout << std::endl;

    student2.toString();
    std::cout << "Age: " << student2.getAge() << " years" << std::endl;
    std::cout << "Is student2 an excellent student? " << (student2.isExcellentStudent() ? "Yes" : "No") << std::endl;

    return 0;
}
