#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* 未改良版（無flag）*/
void show(int a[]), bubble(int a[]);
int main(void){
    int data[SIZE] = {26,5,81,7,63};
    
    printf("排序前：");
    show(data);
    bubble(data);
    printf("排序後：");
    show(data);

    return 0;
}

void show(int a[]){ //傳遞陣列給函數//
    int i;
    for(i=0; i<SIZE; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubble(int a[]){
    int i,j,temp;

    for(i=1; i<SIZE; i++){
        for(j=0; j<(SIZE-i); j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}