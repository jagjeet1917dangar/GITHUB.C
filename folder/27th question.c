// 27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".

//ANSWER...

#include <stdio.h>
int main(){
    char str[]="document.js";
    int length=sizeof(str)/sizeof(str[0])-1;
    for(int i=0;i<length;i++){
        if(str[i]=='.'){
            for(int j=i+1;j<length;j++){
                printf("%c",str[j]);
            }
        }
    }
}