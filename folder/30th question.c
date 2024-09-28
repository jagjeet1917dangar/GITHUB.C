// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9

// ANSWER...

#include <stdio.h>
int main() {
    int integer = 123456;
    int even = 0;
    int odd = 0;
    while (integer > 0) {
        int digit = integer % 10; 
        if (digit % 2 == 0) {
            even += digit; 
        } else {
            odd += digit; 
        }
        integer /= 10;
    }
    printf("Sum of even digits: %d\n", even);
    printf("Sum of odd digits: %d\n", odd);
    return 0;
}
