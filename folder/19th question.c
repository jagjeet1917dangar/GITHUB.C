19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

ANSWER...

#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int len= sizeof(arr)/sizeof(arr[0]);
    int isSorted = 1;
    for (int i = 0; i < len - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("false\n"); 
            return 0;
        }
    }
     printf("true\n");    
    return 0;
}