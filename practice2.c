#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a,b;
   
   printf("please input two integer:");
   scanf("%d %d",&a,&b);
   printf("%d + %d = %d\n",a,b,a+b);

   system("pause");
   return 0;
}