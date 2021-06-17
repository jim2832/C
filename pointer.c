#include <stdio.h>
#include <stdlib.h>

void add10(int *);
int main(void){
    int a = 5;
    
    printf("呼叫add10()之前，a = %d\n",a);
    add10(&a);
    printf("呼叫add10()之後，a = %d\n",a);
}

void add10(int *p1){
    *p1 += 10;
}