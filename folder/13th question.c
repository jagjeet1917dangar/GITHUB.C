// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

// ANSWER....

#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]==3){
            printf("true");
        }
    }
}