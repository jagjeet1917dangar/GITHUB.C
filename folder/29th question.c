// 29.Write a program to find all pairs in an array whose sum is equal to a given number.
// Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].

// ANSWER...

#include <stdio.h>
int main(){
    int arr[]={2,7,11,15};
    int target=9;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(arr[i]+arr[j]==target){
                printf("%d\n",i);
                printf("%d",j);
            }
        }
    }
}

// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9

// ANSWER...


