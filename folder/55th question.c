// 55.You are given an integer n. Your task is to write a program that determines whether n is a power of three. If n is a power of three, return true; otherwise, return false.A number is a power of three if:n=3kn = 3^kn=3k
// where k is a non-negative integer.

// ANSWER...

#include <stdio.h>
int main(){
    int n=27;
    if (n<=0){
        printf("false"); 
    }else{
        while(n%3==0){
            n/=3; 
        }
        if(n==1){
            printf("true"); 
        } else {
            printf("false"); 
        }
    }
    return 0;
}
