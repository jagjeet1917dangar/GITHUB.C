// 37. Given a sorted array and a target value, return the starting and ending position of that target in the array.Example:Input: [5, 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]

// ANSWER...

#include <stdio.h>
int main(){
int arr[]={5,7,7,8,8,10};
int target=8;
int length=sizeof(arr)/sizeof(arr[arr[0]]);
for(int i=0;i<length;i++){
    for(int j=i+1;j<length;j++){
        if(arr[i]==target && arr[j]==target){
            printf("%d ",i);
            printf("%d",j);
        }
    }
}
}