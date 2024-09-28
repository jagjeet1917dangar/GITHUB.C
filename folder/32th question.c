// 32.Write a program that categorizes a person’s age group based on the given age:
// Less than 13: "Child"
// Between 13 and 19: "Teenager"
// Between 20 and 59: "Adult"
// 60 and above: "Senior"

// ANSWER...

#include <stdio.h>
int main(){
int age=16;
if(age<13){
    printf("child");
}
else if(age>=13 && age<=19){
    printf("Teenager");
}
else if(age>=20 && age<=59){
    printf("Adult");
}
else if(age>=60){
    printf("Senior");
}
}