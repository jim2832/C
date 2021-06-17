#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1,num2,num3;
    printf("Please enter a number:");
    scanf("%d\n",&num1);
    printf("Please enter a number:");
    scanf("%d\n",&num2);
    printf("Please enter a number:");
    scanf("%d\n",&num3);
    int average = (num1 + num2 + num3)/3;
    printf("Average is: %d\n",average);
    return 0;
}