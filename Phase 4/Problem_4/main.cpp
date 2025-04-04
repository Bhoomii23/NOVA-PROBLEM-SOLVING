#include "string_operations.h"

int main() {
    try {
        const int MAX_LEN = 100;
        char str[MAX_LEN];

        std::cout << "Enter a string: ";
        if (!std::cin.getline(str, MAX_LEN)) {
            throw std::runtime_error("Failed to read input.");
        }

        StringProcessor::toUpperCase(str);
        std::cout << "Uppercase String: " << str << std::endl;

        StringProcessor::removeVowels(str);
        std::cout << "String without vowels: " << str << std::endl;

        StringProcessor::reverseString(str);
        std::cout << "Reversed String: " << str << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
