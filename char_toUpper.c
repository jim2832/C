#include <stdio.h>
#include <stdlib.h>
void toUpper(char s[]);
int main(void){
    char str[] = "My name is Jim";
    toUpper(str);
    printf("轉換成大寫後：%s\n",str);

    return 0;
}

void toUpper(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] -= 32;
        }
        i++;
    }
}