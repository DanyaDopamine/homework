#include "sort.hpp"

// Слияние двух отсортированных подмассивов
void merge(double arr[], int left, int middle, int right) {
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    double* leftArray = new double[leftSize];  // Динамический массив для левой части
    double* rightArray = new double[rightSize]; // Динамический массив для правой части

    // Копируем данные во временные массивы
    for (int i = 0; i < leftSize; i++)
        leftArray[i] = arr[left + i];
    for (int j = 0; j < rightSize; j++)
        rightArray[j] = arr[middle + 1 + j];

    // Выполняем слияние временных массивов обратно в основной массив
    int leftIndex = 0, rightIndex = 0, mergedIndex = left;

    while (leftIndex < leftSize && rightIndex < rightSize) {
        if (leftArray[leftIndex] <= rightArray[rightIndex]) {
            arr[mergedIndex] = leftArray[leftIndex];
            leftIndex++;
        } else {
            arr[mergedIndex] = rightArray[rightIndex];
            rightIndex++;
        }
        mergedIndex++;
    }

    // Копируем оставшиеся элементы левого массива (если есть)
    while (leftIndex < leftSize) {
        arr[mergedIndex] = leftArray[leftIndex];
        leftIndex++;
        mergedIndex++;
    }

    // Копируем оставшиеся элементы правого массива (если есть)
    while (rightIndex < rightSize) {
        arr[mergedIndex] = rightArray[rightIndex];
        rightIndex++;
        mergedIndex++;
    }

    // Освобождаем память
    delete[] leftArray;
    delete[] rightArray;
}

// Рекурсивный метод сортировки MergeSort
void mergeSort(double arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Рекурсивно сортируем две половины массива
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Объединяем отсортированные подмассивы
        merge(arr, left, middle, right);
    }
}

