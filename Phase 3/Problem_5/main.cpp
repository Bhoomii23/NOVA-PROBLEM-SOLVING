#include <iostream>
#include "matrix_ops.h"

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Original Matrix:" << std::endl;
    printMatrix(arr);

    transposeMatrix(arr);

    std::cout << "Transposed Matrix:" << std::endl;
    printMatrix(arr);

    return 0;
}
