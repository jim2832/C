#include <stdio.h>
#include <stdlib.h>
void sum(int) , fac(int);
int main(void){
    fac(5);
    sum(5);
    return 0;
}

void fac(int a){
    int i,total = 1;
    for(i = 1 ; i <=a ; i++)
        total *= i;
    printf("%d\n",total);
}

void sum(int a){
    int i,total = 0;
    for(i = 1 ; i <= a ; i++){
        total += i;
    }
    printf("%d\n",total);
}