// 49. Given an array and two indices, swap the elements at those indices.
// Input: arr = [1, 2, 3, 4], i = 1, j = 3
// Output: [1, 4, 3, 2]

// ANSWER...

#include <stdio.h>
int main(){
    int arr[]={1,2,3,4}; 
    int temp; 
    int a=1; 
    int b=3; 
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]); 
    }
    return 0;
}
