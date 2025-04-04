#include "array.h"

int main() {
    try {
        int size;
        std::cout << "Enter the size of the array: ";
        std::cin >> size;
        
        DynamicArray arr(size);
        arr.inputValues();
        arr.sortArray();
        arr.displayArray();
    } catch (const std::bad_alloc&) {
        std::cerr << "Memory allocation failed." << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }
    return 0;
}
