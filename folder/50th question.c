// 50. Given a string and a character, count how many times the character appears in the string.
// Input: str = "hello world", char = "o"
// Output: 2

// ANSWER...

#include <stdio.h>
int main(){
    char str[]="hello world";
    int length=sizeof(str)/sizeof(str[0])-1;
    char character='o';
    int count=0;
    for(int i=0;i<length;i++){
        if(str[i]==character){
            count=count+1;
        }
    }
    printf("%d",count);
}

