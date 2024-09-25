// 8. Find the Average of an Array.

// ANSWER...


#include <stdio.h>
int main(){
   int arr[7]={1,2,3,4,5,6,7};
 int len=sizeof(arr)/sizeof(arr[0]);
 int sum=0;
   for(int i=0;i<len;i++){
       sum=sum+arr[i];
   }
   int average=sum/len;
   printf("%d",average);
   return 0;
}