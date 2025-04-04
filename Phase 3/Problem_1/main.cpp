#include "dynamic_array.h"
#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];

    inputArray(arr, size);
    sortArray(arr, size);
    printArray(arr, size);

    delete[] arr;
    return 0;
}
