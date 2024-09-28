// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.


// ANSWER....

#include <stdio.h>

int main() {
    int a = 3;
    int b = 4;
    int c = 3;

    if (a == b && b == c) {
        printf("Equilateral");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }
    return 0;
}
