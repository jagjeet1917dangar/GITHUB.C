// 31. Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".

// ANSWER...


#include <stdio.h>
int main(){
    char str[]="hello";
    int target=3;
    for(int i=0;i<target;i++){
        printf("%s",str);
    }
}