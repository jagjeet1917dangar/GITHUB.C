// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50].

// ANSWER....

#include <stdio.h>
int main() {
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i=i+2){
        printf("%d ",arr[i]);
    }
    return 0;
}