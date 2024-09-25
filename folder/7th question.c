// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"

// ANSWER....

#include <stdio.h>
#include <string.h>
int main(){
char color[]="green";
if(strcmp(color,"red")==0){
    printf("Stop");
}
else if(strcmp(color,"yellow")==0){
    printf("Slow down");
}
else if(strcmp(color,"green")==0){
    printf("Go");
}
}