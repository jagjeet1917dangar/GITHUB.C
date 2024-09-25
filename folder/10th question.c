// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3

// ANSWER....

#include <stdio.h>
int main() {
    int arr[]={1,2,3,4,5};
    int odd=0;
    int even=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    printf("even:%d\n",even);
    printf("odd:%d",odd);
    return 0;
}