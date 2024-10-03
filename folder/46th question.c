// 46. Given a string, return the index of the first repeating character. If no character repeats, return -1.
// Input: "hello"
// Output: 2 (because 'l' repeats first)
// Input: "abcdef"
// Output: -1

// ANSWER...

#include <stdio.h>
int main(){
    char str[]="hello";
    int n=-1;
    int length=sizeof(str)/sizeof(str[0])-1;
    for(int i=0;i<length;i++){
        if(str[i]==str[i+1]){
            n=i;
        }
    }
    printf("%d",n);
}