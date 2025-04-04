#include "matrix_operations.h"

int main() {
    try {
        int matrix[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        std::cout << "Original ";
        MatrixProcessor::printMatrix(matrix);

        MatrixProcessor::transposeMatrix(matrix);

        std::cout << "Transposed ";
        MatrixProcessor::printMatrix(matrix);

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
