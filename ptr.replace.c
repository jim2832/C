#include <stdio.h>
#include <stdlib.h>

void replace(int *ptr,int n,int num){
    *(ptr +n-1) = num;
}

int main(void){
    int a[5] = {13,32,67,14,95};
    int i,num = 99;
    
    replace(a,4,num);
    printf("置換後：");
    for(i=0; i<5; i++){
        printf("%3d",a[i]);
    }
    printf("\n");
}