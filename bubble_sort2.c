#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* 改良版(具有flag) -> 不會造成不必要的交換 */ 
void show(int a[]), bubble2(int a[]);
int main(void){
    int data[SIZE] = {26,6,81,7,63};
    
    printf("Before the process:\n");
    show(data);
    bubble2(data);
    printf("After the process:\n");
    show(data);

    return 0;
}

void show(int a[]){
    int i;
    for(i=0; i<SIZE; i++){
    printf("%d ",a[i]);
    }
    printf("\n");
}

void bubble2(int a[]){
    int i,j,temp;
    int flag = 1;

    for(i=1; (i<SIZE) && (flag != 0); i++){
        flag = 0;
        for(j=0; j<(SIZE-i); j++){
            if(a[j] > a[j+1]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                flag = 1;
            }
        }
    }
}