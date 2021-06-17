#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int *maximum(int *arr){
    int i,*max;
    max = arr; //設定指標max指向陣列的第一個元素
    for(i=0; i<SIZE; i++){
        if(*max < *(arr+i)){
            max = arr + i;
        }
    }
    return max; //return陣列的最大值
}

int main(void){
    int a[SIZE] = {3,1,7,2,6};
    int i,*ptr;
    printf("array a=[");
    for(i=0; i<SIZE; i++){
        printf("%d",a[i]);
    }
    printf("]");
    ptr = maximum(a);
    printf("\nmaximum = %d\n",*ptr);
}