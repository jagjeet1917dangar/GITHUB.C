// 22. Write a program to find the length of a given string.

// ANSWER.....

#include <stdio.h>

int main() {
    char str[] = "hello";
    int length = sizeof(str) / sizeof(str[0]) - 1;  // Subtracting 1 for the null terminator

    printf("%d\n", length);  // Output: 5

    return 0;
}
