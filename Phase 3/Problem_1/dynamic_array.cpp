#include "dynamic_array.h"
#include <iostream>
#include <algorithm>

void inputArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

void sortArray(int* arr, int size) {
    std::sort(arr, arr + size);
}

void printArray(int* arr, int size) {
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
