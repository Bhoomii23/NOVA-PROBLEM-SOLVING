#include "string_operations.h"

void StringProcessor::toUpperCase(char* str) {
    if (str == nullptr) {
        throw std::invalid_argument("Null string provided.");
    }
    for (size_t i = 0; i < strlen(str); i++) {
        str[i] = std::toupper(str[i]);
    }
}

void StringProcessor::removeVowels(char* str) {
    if (str == nullptr) {
        throw std::invalid_argument("Null string provided.");
    }
    
    char temp[strlen(str) + 1];
    int j = 0;
    for (size_t i = 0; i < strlen(str); i++) {
        char ch = std::toupper(str[i]);
        if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

void StringProcessor::reverseString(char* str) {
    if (str == nullptr) {
        throw std::invalid_argument("Null string provided.");
    }
    size_t len = strlen(str);
    for (size_t i = 0; i < len / 2; i++) {
        std::swap(str[i], str[len - i - 1]);
    }
}
