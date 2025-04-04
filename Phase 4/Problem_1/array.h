#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <algorithm>
#include <stdexcept>

class DynamicArray {
private:
    int* arr;
    int size;

public:
    DynamicArray(int size);
    ~DynamicArray();
    void inputValues();
    void sortArray();
    void displayArray() const;
};

#endif // ARRAY_H
