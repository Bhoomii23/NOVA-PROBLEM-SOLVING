#include <cstring>
#include <cctype>
#include "char_ops.h"

void toUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void removeVowels(char* str) {
    char temp[strlen(str) + 1];
    int index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = toupper(str[i]);
        if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            temp[index++] = str[i];
        }
    }
    temp[index] = '\0';
    strcpy(str, temp);
}

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
