#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3
int main(void){
    int i, j;
    int A[ROW][COL] = {{5,7,3},{6,6,1}};
    int B[ROW][COL] = {{2,5,9},{2,4,7}};
    
    printf("Matrix A+B =\n");
    for(i=0; i<ROW ;i++){
        for(j=0; j<COL; j++){
            printf("%3d",A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}