// 47. Given an array of integers, find the first element that repeats. If no element repeats, return -1.
// Input: [10, 5, 3, 4, 3, 5, 6]
// Output: 5

// ANSWER...

#include <stdio.h>
int main(){
int arr[]={10, 5, 3, 4, 3, 5, 6};
int length =sizeof(arr)/sizeof(arr[0]);
int count =-1;
for(int i=0;i<length;i++){
    for (int j=i+1;j<length;j++){ 
        if(arr[i]==arr[j]){
            count=arr[i];
            break;
        }
    }
    if (count!=-1){ 
        break;
    }
}
printf("%d",count);
    return 0;
}
