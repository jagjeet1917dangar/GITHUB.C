// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array.


// ANSWER....


#include <stdio.h>
int main(){
    int arr[6]={1,2,3,4,5};
   int length=sizeof(arr)/sizeof(arr[0]);
    arr[5]=6;
    for(int i=0;i<length;i++){
        printf("%d\n",arr[i]);
    }
}