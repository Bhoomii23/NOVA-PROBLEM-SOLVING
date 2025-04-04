#include "array.h"

DynamicArray::DynamicArray(int size) {
    if (size <= 0) {
        throw std::invalid_argument("Size must be greater than zero");
    }
    this->size = size;
    arr = new int[size];
}

DynamicArray::~DynamicArray() {
    delete[] arr;
}

void DynamicArray::inputValues() {
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        while (!(std::cin >> arr[i])) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cerr << "Invalid input. Please enter an integer: ";
        }
    }
}

void DynamicArray::sortArray() {
    std::sort(arr, arr + size);
}

void DynamicArray::displayArray() const {
    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
