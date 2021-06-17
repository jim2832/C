#include <stdio.h>
#include <stdlib.h>
void func(void);
int main(void){
    func();
    func();
    func();

    return 0;
}

void func(void){
    static int a = 100;
    printf("%d\n",a);
    a += 100;
}