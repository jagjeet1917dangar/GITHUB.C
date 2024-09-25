// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."

// ANSWER...

#include <stdio.h>
#include <string.h>
int main(){
    char use[]="admin";
    int pass=1234;
    if(strcmp(use,"admin")==0 && (pass=1234)){
        printf("ok");
    }
    else{
        printf("nt ok");
    }
}