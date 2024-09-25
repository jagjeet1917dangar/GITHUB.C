// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].

// ANSWER...

include <stdio.h>

int main(){
  int arr[] = {80, 30, 70, 50, 20};
  int len = sizeof(arr)/sizeof(arr[0]);
  int max= arr[0];
  int min = arr[0];
  for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    int difference = max - min;
    printf("difference of max and min is %d",difference);


}