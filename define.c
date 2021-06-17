#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) (X)*(X)
int main(void){
    int n = 12;
    printf("%d * %d = %d\n",n+1 , n+1, SQUARE(n+1));
    return 0;
}