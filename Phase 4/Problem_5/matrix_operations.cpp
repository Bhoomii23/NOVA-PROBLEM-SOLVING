#include "matrix_operations.h"

void MatrixProcessor::printMatrix(int matrix[3][3]) {
    if (!matrix) {
        throw std::invalid_argument("Invalid matrix reference.");
    }
    std::cout << "Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void MatrixProcessor::transposeMatrix(int matrix[3][3]) {
    if (!matrix) {
        throw std::invalid_argument("Invalid matrix reference.");
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}
