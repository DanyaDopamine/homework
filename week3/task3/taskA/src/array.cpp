#include "array.hpp"

int count_max_elements(const double* data_array, int size) {
    if (size == 0) return 0; // Обработка случай пустого массива

    double max_value = data_array[0];
    int count = 1;
    for (int i = 1; i < size; ++i) {
        if (data_array[i] > max_value) {
            max_value = data_array[i];
            count = 1;
        } else if (data_array[i] == max_value) {
            count++;
        }
    }
    return count;
}
