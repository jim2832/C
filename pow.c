#include <stdio.h>
#include <stdlib.h>
double power (double,int);
int main (void){
    double x = 5;
    int n = 3;
    
    printf("%lf", power(5,3));
}

double power (double base, int n)
{
    int i;
    double pow = 1.0;
    for(i = 1; i <= n ; i++)
        pow *= base;
    return pow;
}