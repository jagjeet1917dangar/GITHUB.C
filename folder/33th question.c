// 33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).

// ANSWER...

#include <stdio.h>
int main(){
int year=2000;
if(year%100==0){
    printf("Century Year");
}
else{
    printf("Not a Century Year");
}
}

