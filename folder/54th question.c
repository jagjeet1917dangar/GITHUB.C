// 54. An ugly number is a positive integer whose prime factors only include 2, 3, and 5. Given an integer n, write a program to determine if n is an ugly number.
// Example:
// Input: n = 6
// Output: true
// Input: n = 8
// Output: true
// Input: n = 14
// Output: false
// Input: n = 1
// Output: true

// ANSWER...

#include <stdio.h>
int main(){
    int n=30; 
    if (n<=0){
        printf("false\n");
    } else {
        while(n%2==0) {
            n/=2; 
        }
        while(n%3==0) {
            n/=3; 
        }
        while(n%5==0) {
            n/=5; 
        }
        if(n==1){
            printf("true"); 
        } 
        else{
            printf("false"); 
        }
    }
    return 0;
}
