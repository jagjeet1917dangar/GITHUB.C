// 48.Given a string, return a new string with all vowels removed.
// Input: "hello"
// Output: "hll"

// ANSWER...

#include <stdio.h>
int main() {
    char str[] = "hello"; 
    char result[100];   
    int j = 0;          
    int length = sizeof(str) / sizeof(str[0]) - 1;
    for (int i = 0; i < length; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' && str[i] != 'O' &&
            str[i] != 'U') {
            result[j] = str[i];
            j++;           
        }
    }
    result[j] = '\0'; 
    printf("%s\n", result); 
    return 0;
}
