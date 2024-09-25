17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.

ANSWER..

#include <stdio.h>
int main(){
int array[6]={1,-2,3,-4,5,-6};
int positive=0;
int negative=0;
for(int i=0;i<6;i++){
    if(array[i]>0){
        positive=positive+1;
    }
    else if(array[i]<0){
        negative=negative+1;
    }
}
printf("positive: %d\n",positive);
printf("negative: %d",negative);
return 0;
}