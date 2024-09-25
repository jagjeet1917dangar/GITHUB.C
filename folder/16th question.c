16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

ANSWER...

#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]<0){
            printf("false");
        }
        else{
            printf("true");
        }
        return 0;
    }
}