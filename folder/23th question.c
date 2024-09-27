// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".

// ANSWER....

#include <stdio.h>
#include <string.h> 

int main() {
    char str1[100] = "hello"; 
    char str2[] = " world";    
    strcat(str1, str2);  
    printf("%s\n", str1); 
    return 0;
}
