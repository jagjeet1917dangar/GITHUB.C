15. Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].

ANSWER...

#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length-1;i++){
        printf("\n%d",arr[i]);
    }
}