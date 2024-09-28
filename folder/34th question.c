// 34. Access and print the first and last element of the array arr = [10, 20, 30, 40, 50].

// ANSWER...

#include <stdio.h>
int main(){
int arr[]={10,20,30,40,50};
int length=sizeof(arr)/sizeof(arr[0]);
printf("[%d,",arr[0]);
printf("%d]",arr[length-1]);
}