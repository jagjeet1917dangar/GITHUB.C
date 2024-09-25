// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

// ANSWER...

#include <stdio.h>
int main(){
    int arr[8]={1,2,1,1,2,3,4,5};
   int length=sizeof(arr)/sizeof(arr[0]);
    arr[-1]=0;
    for(int i=-1;i<length;i++){
        printf("%d\n",arr[i]);
    }
}