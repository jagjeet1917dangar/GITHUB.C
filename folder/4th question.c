// 4. Write a function to check whether a given character is a vowel or consonant.


// ANSWER...


#include <stdio.h>
int main(){
char character='e';
if((character=='a') || (character=='e') || (character=='i') || (character=='o') || (character=='u') || (character=='A') || (character=='E') || (character=='I') || (character=='O') || (character=='U')){
    printf("Vowel");
}
else {
    printf("Consonant");
}
}

