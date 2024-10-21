#include <iostream>
#include "array.hpp"

const int MAX_SIZE = 100;

int main() {
    double data_array[MAX_SIZE];
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    if (size > 0 && size <= MAX_SIZE) {
        std::cout << "Введите элементы массива через пробел: ";
        for (int i = 0; i < size; ++i) {
            std::cin >> data_array[i];
        }
        
        int count = count_max_elements(data_array, size);
        std::cout << "Количество максимальных чисел в массиве: " << count << std::endl;
    } else {
        std::cout << "Некорректный размер массива." << std::endl;
    }
    return 0;
}
