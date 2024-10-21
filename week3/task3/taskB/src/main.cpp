#include <iostream>
#include "sort.hpp"

int main() {
    int arraySize;

    std::cout << "Введите размер массива: ";
    std::cin >> arraySize;

    if (arraySize <= 0) {
        std::cout << "Неверный размер массива!" << std::endl;
        return 1;
    }

    double* data_array = new double[arraySize]; // Динамический массив

    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < arraySize; i++) {
        std::cin >> data_array[i];
    }

    std::cout << "Исходный массив:\n";
    for (int i = 0; i < arraySize; i++) {
        std::cout << data_array[i] << " ";
    }

    mergeSort(data_array, 0, arraySize - 1);

    std::cout << "\n\nОтсортированный массив:\n";
    for (int i = 0; i < arraySize; i++) {
        std::cout << data_array[i] << " ";
    }
    std::cout << std::endl;

    // Освобождаем память
    delete[] data_array;

    return 0;
}

