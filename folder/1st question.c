// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

// ANSWER....

#include <stdio.h>
int main(){
int marks=80;
if(marks>=90 && marks<=100){
    printf("A");
}
else if(marks>=80 && marks<=89){
    printf("B");
}
else if(marks>=70 && marks<=79){
    printf("C");
}
else if(marks>=60 && marks<=69){
    printf("D");
}
else if(marks<60){
    printf("F");
}
}